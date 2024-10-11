const questions = document.querySelectorAll('.question');
const solutionContainer = document.getElementById('solution');

questions.forEach(question => {
    question.addEventListener('click', function() {
        const solutionFile = this.getAttribute('data-solution'); // Get the corresponding .cpp file

        // Fetch the content of the solution file
        fetch(solutionFile)
            .then(response => {
                // Check if the response is ok (status code 200-299)
                if (!response.ok) {
                    throw new Error('Network response was not ok: ' + response.statusText);
                }
                return response.text(); // Return the response text
            })
            .then(data => {
                // Display the fetched code with preserved formatting
                solutionContainer.textContent = data; // Use textContent to display code
            })
            .catch(error => {
                // Display an error message if fetching fails
                solutionContainer.textContent = "Error loading solution.";
                console.error('Error fetching solution:', error);
            });
    });
});



