const repositoryList = document.querySelector("#repository-list");
const repositoryCount = document.querySelector("#repository-count");
const status = document.querySelector("#status");

const formatDate = (date) => {
  return new Intl.DateTimeFormat("en", {
    dateStyle: "medium"
  }).format(new Date(`${date}T00:00:00`));
};

const formatStars = (stars) => {
  return new Intl.NumberFormat("en", {
    notation: "compact",
    maximumFractionDigits: 1
  }).format(stars);
};

const createRepository = (repository) => {
  const item = document.createElement("li");
  item.className = "repository";

  const details = document.createElement("div");
  const name = document.createElement("h3");
  name.className = "repository-name";

  const link = document.createElement("a");
  link.href = repository.url;
  link.target = "_blank";
  link.rel = "noreferrer";
  link.textContent = repository.name;
  name.append(link);

  const description = document.createElement("p");
  description.className = "repository-description";
  description.textContent = repository.description;

  const meta = document.createElement("div");
  meta.className = "repository-meta";
  const language = document.createElement("span");
  language.className = "language";
  language.textContent = repository.language;

  const starredDate = document.createElement("span");
  starredDate.textContent = `Starred ${formatDate(repository.starredAt)}`;
  meta.append(language, starredDate);

  details.append(name, description, meta);

  const starCount = document.createElement("span");
  starCount.className = "star-count";
  starCount.textContent = `${formatStars(repository.stars)} stars`;

  item.append(details, starCount);
  return item;
};

const renderRepositories = (repositories) => {
  repositoryList.replaceChildren(...repositories.map(createRepository));
  repositoryCount.textContent = `${repositories.length} repositories`;
  status.textContent = repositories.length ? "" : "No starred repositories yet.";
};

const loadRepositories = async () => {
  try {
    const response = await fetch("events.json");
    if (!response.ok) {
      throw new Error(`Request failed with status ${response.status}`);
    }

    const repositories = await response.json();
    renderRepositories(repositories);
  } catch (error) {
    repositoryCount.textContent = "";
    status.textContent = "Unable to load repositories. Please try again later.";
    console.error(error);
  }
};

loadRepositories();