
        fscanf(file, "%c", &ch); // Read the next character
    }
    printf("Character read from file: %c\n", ch); // Print the character read
    fclose(file); // Close the file after reading
    printf("\nFile read successfully.\n");
}
return 0;