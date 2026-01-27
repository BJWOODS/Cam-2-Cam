# Cam-2-Cam

Project page for **Cam-2-Cam**, a dual-camera interaction technique for smartphone-based augmented reality.

Interfaces developed and experiments ran at Brown University

This repository/folder contains a simple static website (`index.html`) that hosts:
- A short project description
- An embedded YouTube demo (with a direct “Watch on YouTube” fallback)
- A link to the full publication

## Publication

**Read the full publication here:**
https://dl.acm.org/doi/10.1145/3694907.3765919

## License and attribution (Creative Commons)

This work is distributed under a **Creative Commons** license consistent with **ACM’s Open Access / Creative Commons policies**.

Because Creative Commons licensing requires attribution, **any reuse of this material** (including the paper text, figures, and other publication artifacts) **must provide appropriate credit** to the original authors and source, include a link to the license, and indicate if changes were made.

For the **authoritative license terms and the exact CC variant that applies to the publication**, please refer to the ACM Digital Library record:
https://dl.acm.org/doi/10.1145/3694907.3765919

If you reuse content from this project page (e.g., the website, images, or other assets), please likewise include a citation or attribution back to this project and the publication.

## Run locally

If you open `index.html` directly via `file://`, some browsers may block the embedded YouTube player. Serving the page over `http://` avoids that.

With Python 3 installed:

```bash
cd /Users/bwoodard/Desktop/Development/Cam-2-Cam
python3 -m http.server 8000
```

Then open:
- http://localhost:8000/

## Troubleshooting

### YouTube embed shows an error

Common causes:
- The page is opened via `file://` instead of from a web server
- Browser privacy/tracking settings block third-party iframes
- The video owner has disabled embedding

Use the “Watch on YouTube” link as a fallback.
