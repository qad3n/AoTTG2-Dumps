// Type: UI.MapEditorErrorPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorErrorPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorErrorPopup.cs
// --------------------------------

// UI.MapEditorErrorPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorErrorPopup__get_Title (UI_MapEditorErrorPopup_o* __this, const MethodInfo* method);
// 0x44265d0

System_String_o * UI_MapEditorErrorPopup__get_Title(UI_MapEditorErrorPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae668 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Load Errors");
    g_data_057ae668 = '\x01';
  }
  return "Load Errors";
}


// UI.MapEditorErrorPopup$$get_Width
// il2cpp: float UI_MapEditorErrorPopup__get_Width (UI_MapEditorErrorPopup_o* __this, const MethodInfo* method);
// 0x4426600

float UI_MapEditorErrorPopup__get_Width(UI_MapEditorErrorPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.MapEditorErrorPopup$$get_Height
// il2cpp: float UI_MapEditorErrorPopup__get_Height (UI_MapEditorErrorPopup_o* __this, const MethodInfo* method);
// 0x4426610

float UI_MapEditorErrorPopup__get_Height(UI_MapEditorErrorPopup_o *__this,MethodInfo *method)

{
  return 590.0;
}


// UI.MapEditorErrorPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorErrorPopup__get_VerticalPadding (UI_MapEditorErrorPopup_o* __this, const MethodInfo* method);
// 0x4426620

int32_t UI_MapEditorErrorPopup__get_VerticalPadding(UI_MapEditorErrorPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MapEditorErrorPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorErrorPopup__get_HorizontalPadding (UI_MapEditorErrorPopup_o* __this, const MethodInfo* method);
// 0x4426630

int32_t UI_MapEditorErrorPopup__get_HorizontalPadding(UI_MapEditorErrorPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MapEditorErrorPopup$$.ctor
// il2cpp: void UI_MapEditorErrorPopup___ctor (UI_MapEditorErrorPopup_o* __this, const MethodInfo* method);
// 0x4426640

void UI_MapEditorErrorPopup___ctor(UI_MapEditorErrorPopup_o *__this,MethodInfo *method)

{
  UI_ExportPopup___ctor((UI_ExportPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


