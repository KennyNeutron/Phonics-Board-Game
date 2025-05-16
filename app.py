import pygame
import time
import os

def play_mp3(file_path):
    if not os.path.isfile(file_path):
        print("File does not exist:", file_path)
        return

    # Initialize the mixer
    pygame.mixer.init()
    pygame.mixer.music.load(file_path)
    pygame.mixer.music.play()

    print(f"Playing: {file_path}")
    while pygame.mixer.music.get_busy():
        time.sleep(0.5)

# Example usage
if __name__ == "__main__":
    mp3_file = "001.mp3"  # Replace with your file
    play_mp3(mp3_file)
