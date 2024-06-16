Great! Let's go through the steps to push your changes from your local `development` branch to the remote `development` branch, and then merge those changes into the `main` branch both locally and remotely.

### Step-by-Step Workflow

1. **Ensure You Are on the `development` Branch**:
    ```sh
    git checkout development
    ```

2. **Push Local `development` Branch to Remote**:
    ```sh
    git push -u origin development
    ```

3. **Switch to the `main` Branch**:
    ```sh
    git checkout main
    ```

4. **Update the Local `main` Branch with the Latest Changes**:
    ```sh
    git pull origin main
    ```

5. **Merge the `development` Branch into the `main` Branch**:
    ```sh
    git merge development
    ```

6. **Resolve Any Merge Conflicts (if any)**:
    - Open the conflicting files and resolve the conflicts.
    - After resolving the conflicts, add the resolved files:
      ```sh
      git add <resolved_file>
      ```

    - Continue the merge if you used `git rebase` to resolve conflicts:
      ```sh
      git rebase --continue
      ```

    - If you used `git merge`, commit the merge:
      ```sh
      git commit
      ```

7. **Push the Merged `main` Branch to the Remote Repository**:
    ```sh
    git push origin main
    ```

### Full Example Workflow

Here’s the complete sequence of commands:

1. **Ensure you are on the `development` branch**:
    ```sh
    git checkout development
    ```

2. **Push local `development` branch to remote**:
    ```sh
    git push -u origin development
    ```

3. **Switch to the `main` branch**:
    ```sh
    git checkout main
    ```

4. **Update the local `main` branch with the latest changes**:
    ```sh
    git pull origin main
    ```

5. **Merge the `development` branch into the `main` branch**:
    ```sh
    git merge development
    ```

6. **Resolve any merge conflicts (if any)**:
    - Open the conflicting files and resolve the conflicts.
    - After resolving the conflicts, add the resolved files:
      ```sh
      git add <resolved_file>
      ```

    - Commit the merge:
      ```sh
      git commit
      ```

7. **Push the merged `main` branch to the remote repository**:
    ```sh
    git push origin main
    ```

### Clean Up (Optional)

If you no longer need the `development` branch, you can delete it both locally and remotely:

1. **Delete the local `development` branch**:
    ```sh
    git branch -d development
    ```

2. **Delete the remote `development` branch**:
    ```sh
    git push origin --delete development
    ```

### Summary

By following these steps, you can successfully push your local changes to the remote `development` branch, merge them into the `main` branch, and update the remote `main` branch. This workflow ensures that your main branch is always up to date with the latest changes from your development work.
