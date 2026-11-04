// Type: Gisketch.Aottg2UI.Game.AottgPauseSearchPaletteDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgPauseSearchPaletteDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPauseSearchPaletteDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog__get_Title (Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x181de4c30

System_String_o *
Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344aab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Search");
    il2cpp_codegen_initialize_runtime_metadata(&"Search");
    Il2CppMethodInitialized_184344aab = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                     ("Common.Search","Search",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgPauseSearchPaletteDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x181de4c00

System_String_o *
Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344aac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"zoom");
    Il2CppMethodInitialized_184344aac = '\x01';
  }
  return "zoom";
}


// Gisketch.Aottg2UI.Game.AottgPauseSearchPaletteDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x181de4af0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344aad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344aad = '\x01';
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
// 0x181de49c0

void Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_String_o *value;
  System_String_o *placeholder;
  System_String_array *extraScopeScreenIds;
  
  if (Il2CppMethodInitialized_184344aae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"pause");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Search");
    il2cpp_codegen_initialize_runtime_metadata(&"settings");
    il2cpp_codegen_initialize_runtime_metadata(&"aottg-pause-search-palette");
    il2cpp_codegen_initialize_runtime_metadata(&"Search");
    Il2CppMethodInitialized_184344aae = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  placeholder = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                          ("Common.Search","Search",(MethodInfo *)0x0);
  extraScopeScreenIds = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
  value = "settings";
  if (extraScopeScreenIds != (System_String_array *)0x0) {
    if ((int)extraScopeScreenIds->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    extraScopeScreenIds->m_Items[0] = "settings";
    Il2CppCodeGenWriteBarrier(extraScopeScreenIds->m_Items,value);
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
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog___ctor(Gisketch_Aottg2UI_Game_AottgPauseSearchPaletteDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


