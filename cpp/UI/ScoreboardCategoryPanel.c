// Type: UI.ScoreboardCategoryPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ScoreboardCategoryPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/ScoreboardCategoryPanel.cs  [prior source available (delta unverified)]
// --------------------------------

// UI.ScoreboardCategoryPanel$$get_ScrollBar
// il2cpp: bool UI_ScoreboardCategoryPanel__get_ScrollBar (UI_ScoreboardCategoryPanel_o* __this, const MethodInfo* method);
// 0x40c7a10

bool_conflict
UI_ScoreboardCategoryPanel__get_ScrollBar(UI_ScoreboardCategoryPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.ScoreboardCategoryPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_ScoreboardCategoryPanel__get_ThemePanel (UI_ScoreboardCategoryPanel_o* __this, const MethodInfo* method);
// 0x40c7a20

System_String_o *
UI_ScoreboardCategoryPanel__get_ThemePanel(UI_ScoreboardCategoryPanel_o *__this,MethodInfo *method)

{
  if (DAT_057046e5 == '\0') {
    il2cpp_init_method_metadata(&"ScoreboardPopup");
    DAT_057046e5 = '\x01';
  }
  return "ScoreboardPopup";
}


// UI.ScoreboardCategoryPanel$$.ctor
// il2cpp: void UI_ScoreboardCategoryPanel___ctor (UI_ScoreboardCategoryPanel_o* __this, const MethodInfo* method);
// 0x40c7a50

void UI_ScoreboardCategoryPanel___ctor(UI_ScoreboardCategoryPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


