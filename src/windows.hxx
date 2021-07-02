#ifndef WINDOWS_H_
#define WINDOWS_H_
#include "imgui.h"
#include "TextEditor.h"

struct ExchangeWindow {
    bool exchanges[2];
    void RenderWindows() {
        ImGui::Begin("Exchanges");
        ImGui::Checkbox("CoinBase", &exchanges[0]);
        ImGui::Checkbox("Binance", &exchanges[1]);
        ImGui::End();
    }
};

struct CoinsWindow {
    bool* coins;
    CoinsWindow() {
        coins = new bool[2];
        coins[0] = true;
        coins[1] = true;
    }
    void RenderWindows() {
        ImGui::Begin("Coins");
        ImGui::Checkbox("BTCUSD", &coins[0]);
        ImGui::Checkbox("ETHUSD", &coins[1]);
        ImGui::End();
    }
};


struct CodeWindow {
    TextEditor editor;
    void RenderWindows() {
        ImGui::Begin("Text Editor Demo", nullptr, ImGuiWindowFlags_HorizontalScrollbar);
        editor.Render("TextEditor");
        ImGui::End();
    }
};

#endif // WINDOWS_H_
