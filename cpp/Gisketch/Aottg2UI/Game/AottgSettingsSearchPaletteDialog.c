// Type: Gisketch.Aottg2UI.Game.AottgSettingsSearchPaletteDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgSettingsSearchPaletteDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgSettingsSearchPaletteDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog__get_Title (Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x181e31fc0

System_String_o *
Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344d47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Search Settings");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Search");
    Il2CppMethodInitialized_184344d47 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                     ("SettingsPopup.Search","Search Settings",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgSettingsSearchPaletteDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x181e31f90

System_String_o *
Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344d48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"zoom");
    Il2CppMethodInitialized_184344d48 = '\x01';
  }
  return "zoom";
}


// Gisketch.Aottg2UI.Game.AottgSettingsSearchPaletteDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x181e31e80

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344d49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344d49 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgSettingsSearchPaletteDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181e31dc0

void Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_String_o *placeholder;
  
  if (Il2CppMethodInitialized_184344d4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Search settings");
    il2cpp_codegen_initialize_runtime_metadata(&"aottg-settings-search-palette");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Search");
    il2cpp_codegen_initialize_runtime_metadata(&"settings");
    Il2CppMethodInitialized_184344d4a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  placeholder = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                          ("SettingsPopup.Search","Search settings",(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__SearchPalette
              (body,"aottg-settings-search-palette",placeholder,"settings",false,(System_String_array *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSettingsSearchPaletteDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog___ctor (Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog___ctor(Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


