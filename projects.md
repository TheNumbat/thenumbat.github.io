---
layout: default
permalink: /projects/
---

<div class="projects">
  {% for post in site.categories.projects %}
  	{% unless post.draft %}
    <article class="post">

      <h1><a href="{{ site.baseurl }}{{ post.url }}">{{ post.title }}</a></h1>

      <div class="row">
        <div class="column">
          <img src="{{ site.baseurl }}/assets/projects/{{ post.image }}">
        </div>
        <div class="column">
          <div class="entry">
          {{ post.excerpt }}
          </div>
        </div>
      </div>

      <a href="{{ site.baseurl }}{{ post.url }}" class="read-more">Read More</a>
    </article>
    {% endunless %}
  {% endfor %}
</div>
