class PacManGame {
public:
PacManGame();
void run();

private:
void initSDL();
void loadResources();
void handleEvents();
void update();
void render();
void cleanup();

SDL_Window* m_window;
SDL_Renderer* m_renderer;
SDL_Texture* m_pacmanTexture;
SDL_Texture* m_ghostTexture;
std::vector<std::string> m_levelData;
int m_pacmanX;
int m_pacmanY;
int m_ghostX;
int m_ghostY;
bool m_running;
};
