// Type: UI.MapEditorErrorPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorErrorPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorErrorPopup.cs
// --------------------------------

// UI.MapEditorErrorPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorErrorPopup__get_Title (UI_MapEditorErrorPopup_o* __this, const MethodInfo* method);
// 0x5d71790

System_String_o * UI_MapEditorErrorPopup__get_Title(UI_MapEditorErrorPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547fc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Errors");
    Il2CppMethodInitialized_07547fc0 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MapEditor","Errors","Title","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MapEditorErrorPopup$$get_Width
// il2cpp: float UI_MapEditorErrorPopup__get_Width (UI_MapEditorErrorPopup_o* __this, const MethodInfo* method);
// 0x5d71830

float UI_MapEditorErrorPopup__get_Width(UI_MapEditorErrorPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.MapEditorErrorPopup$$get_Height
// il2cpp: float UI_MapEditorErrorPopup__get_Height (UI_MapEditorErrorPopup_o* __this, const MethodInfo* method);
// 0x5d71840

float UI_MapEditorErrorPopup__get_Height(UI_MapEditorErrorPopup_o *__this,MethodInfo *method)

{
  return 590.0;
}


// UI.MapEditorErrorPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorErrorPopup__get_VerticalPadding (UI_MapEditorErrorPopup_o* __this, const MethodInfo* method);
// 0x5d71850

int32_t UI_MapEditorErrorPopup__get_VerticalPadding(UI_MapEditorErrorPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MapEditorErrorPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorErrorPopup__get_HorizontalPadding (UI_MapEditorErrorPopup_o* __this, const MethodInfo* method);
// 0x5d71860

int32_t UI_MapEditorErrorPopup__get_HorizontalPadding(UI_MapEditorErrorPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MapEditorErrorPopup$$.ctor
// il2cpp: void UI_MapEditorErrorPopup___ctor (UI_MapEditorErrorPopup_o* __this, const MethodInfo* method);
// 0x5d71870

void UI_MapEditorErrorPopup___ctor(UI_MapEditorErrorPopup_o *__this,MethodInfo *method)

{
  UI_ExportPopup___ctor((UI_ExportPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


