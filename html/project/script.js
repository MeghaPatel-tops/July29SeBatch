document.documentElement.classList.add('js');

const rows = document.querySelectorAll('.row1');
let hasScrolled = window.scrollY > 0;

const show = (el) => {
  el.classList.add('show');
  io.unobserve(el);
};

// Reveals rows when they come into view (only after the user has scrolled)
const io = new IntersectionObserver(
  (entries) => {
    entries.forEach((entry) => {
      if (entry.isIntersecting && hasScrolled) show(entry.target);
    });
  },
  { threshold: 0.15 }
);
rows.forEach((row) => io.observe(row));

// On the first scroll, reveal rows that are already visible on screen
window.addEventListener(
  'scroll',
  () => {
    if (hasScrolled) return;
    hasScrolled = true;
    rows.forEach((row) => {
      const r = row.getBoundingClientRect();
      if (r.top < window.innerHeight * 0.9 && r.bottom > 0) show(row);
    });
  },
  { passive: true, once: true }
);

// Safety: if the page is too short to scroll, don't leave rows hidden
if (document.documentElement.scrollHeight <= window.innerHeight) {
  rows.forEach(show);
}