import os

def rename_mp3_to_m4a():
    current_dir = os.path.dirname(os.path.abspath(__file__))

    for filename in os.listdir(current_dir):
        if filename.lower().endswith(".mp3"):
            base = os.path.splitext(filename)[0]
            old_path = os.path.join(current_dir, filename)
            new_path = os.path.join(current_dir, base + ".m4a")
            os.rename(old_path, new_path)
            print(f"Renamed: {filename} → {base}.m4a")

if __name__ == "__main__":
    rename_mp3_to_m4a()
