const express = require("express");

const app = express();

const notes = [
    { id: 1, title: "Learn Express", completed: false },
    { id: 2, title: "Go to Gym", completed: true },
    { id: 3, title: "Practice DSA", completed: false },
    { id: 4, title: "Read Book", completed: true }
];

app.get("/notes", (req, res) => {
    res.json(notes);
});

app.get("/notes/:id", (req, res) => {
    const id = Number(req.params.id);

    const note = notes.find(note => note.id === id);

    res.json(note);
});

app.get("/search", (req, res) => {
    const completed = req.query.completed;

    const filtered = notes.filter(note =>
        String(note.completed) === completed
    );

   
    res.json(filtered);
});

app.listen(3000, () => {
    console.log("Server running on port 3000");
});