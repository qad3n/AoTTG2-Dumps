// Type: UI.ScoreboardCategoryPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ScoreboardCategoryPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardCategoryPanel.cs
// --------------------------------

// UI.ScoreboardCategoryPanel$$get_ScrollBar
// il2cpp: bool UI_ScoreboardCategoryPanel__get_ScrollBar (UI_ScoreboardCategoryPanel_o* __this, const MethodInfo* method);
// 0x43d9f20

bool_conflict
UI_ScoreboardCategoryPanel__get_ScrollBar(UI_ScoreboardCategoryPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.ScoreboardCategoryPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_ScoreboardCategoryPanel__get_ThemePanel (UI_ScoreboardCategoryPanel_o* __this, const MethodInfo* method);
// 0x43d9f30

System_String_o *
UI_ScoreboardCategoryPanel__get_ThemePanel(UI_ScoreboardCategoryPanel_o *__this,MethodInfo *method)

{
  if (g_data_057ae476 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScoreboardPopup");
    g_data_057ae476 = '\x01';
  }
  return "ScoreboardPopup";
}


// UI.ScoreboardCategoryPanel$$.ctor
// il2cpp: void UI_ScoreboardCategoryPanel___ctor (UI_ScoreboardCategoryPanel_o* __this, const MethodInfo* method);
// 0x43d9f60

void UI_ScoreboardCategoryPanel___ctor(UI_ScoreboardCategoryPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


