// Type: Gisketch.Aottg2UI.Game.AottgPauseSearchPaletteDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgPauseSearchPaletteDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPauseSearchPaletteDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog__get_Title (Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x58b4e40

System_String_o *
Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545353 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Search");
    Il2CppMethodInitialized_07545353 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Common.Search",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgPauseSearchPaletteDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x58b4ea0

System_String_o *
Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545354 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"zoom");
    Il2CppMethodInitialized_07545354 = '\x01';
  }
  return "zoom";
}


// Gisketch.Aottg2UI.Game.AottgPauseSearchPaletteDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x58b4ed0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545355 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07545355 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(960.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,180.0,0.0
                      ,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgPauseSearchPaletteDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x58b4fb0

void Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_String_o *placeholder;
  System_String_array *extraScopeScreenIds;
  
  if (Il2CppMethodInitialized_07545356 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"pause");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Search");
    il2cpp_codegen_initialize_runtime_metadata(&"settings");
    il2cpp_codegen_initialize_runtime_metadata(&"aottg-pause-search-palette");
    Il2CppMethodInitialized_07545356 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  placeholder = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                          ("Common.Search",(MethodInfo *)0x0);
  extraScopeScreenIds = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
  if (extraScopeScreenIds != (System_String_array *)0x0) {
    if ((int)extraScopeScreenIds->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    extraScopeScreenIds->m_Items[0] = "settings";
    Il2CppCodeGenWriteBarrier(extraScopeScreenIds->m_Items);
    if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__SearchPalette
                (body,"aottg-pause-search-palette",placeholder,"pause",false,extraScopeScreenIds,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPauseSearchPaletteDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog___ctor (Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x58b50d0

void Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


