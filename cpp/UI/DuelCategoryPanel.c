// Type: UI.DuelCategoryPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/DuelCategoryPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/DuelCategoryPanel.cs
// --------------------------------

// UI.DuelCategoryPanel$$get_ScrollBar
// il2cpp: bool UI_DuelCategoryPanel__get_ScrollBar (UI_DuelCategoryPanel_o* __this, const MethodInfo* method);
// 0x43faa90

bool_conflict UI_DuelCategoryPanel__get_ScrollBar(UI_DuelCategoryPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.DuelCategoryPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_DuelCategoryPanel__get_ThemePanel (UI_DuelCategoryPanel_o* __this, const MethodInfo* method);
// 0x43faaa0

System_String_o * UI_DuelCategoryPanel__get_ThemePanel(UI_DuelCategoryPanel_o *__this,MethodInfo *method)

{
  if (g_data_057ae55c == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScoreboardPopup");
    g_data_057ae55c = '\x01';
  }
  return "ScoreboardPopup";
}


// UI.DuelCategoryPanel$$.ctor
// il2cpp: void UI_DuelCategoryPanel___ctor (UI_DuelCategoryPanel_o* __this, const MethodInfo* method);
// 0x43faad0

void UI_DuelCategoryPanel___ctor(UI_DuelCategoryPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


