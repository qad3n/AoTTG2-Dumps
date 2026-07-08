// Type: UI.DuelCategoryPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/DuelCategoryPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/DuelCategoryPanel.cs  [prior source available (delta unverified)]
// --------------------------------

// UI.DuelCategoryPanel$$get_ScrollBar
// il2cpp: bool UI_DuelCategoryPanel__get_ScrollBar (UI_DuelCategoryPanel_o* __this, const MethodInfo* method);
// 0x40e6860

bool_conflict UI_DuelCategoryPanel__get_ScrollBar(UI_DuelCategoryPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.DuelCategoryPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_DuelCategoryPanel__get_ThemePanel (UI_DuelCategoryPanel_o* __this, const MethodInfo* method);
// 0x40e6870

System_String_o *
UI_DuelCategoryPanel__get_ThemePanel(UI_DuelCategoryPanel_o *__this,MethodInfo *method)

{
  if (DAT_057047c1 == '\0') {
    il2cpp_init_method_metadata(&"ScoreboardPopup");
    DAT_057047c1 = '\x01';
  }
  return "ScoreboardPopup";
}


// UI.DuelCategoryPanel$$.ctor
// il2cpp: void UI_DuelCategoryPanel___ctor (UI_DuelCategoryPanel_o* __this, const MethodInfo* method);
// 0x40e68a0

void UI_DuelCategoryPanel___ctor(UI_DuelCategoryPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


