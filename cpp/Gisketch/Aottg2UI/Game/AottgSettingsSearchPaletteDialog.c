// Type: Gisketch.Aottg2UI.Game.AottgSettingsSearchPaletteDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgSettingsSearchPaletteDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgSettingsSearchPaletteDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog__get_Title (Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x5911ed0

System_String_o *
Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075456bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Search");
    Il2CppMethodInitialized_075456bf = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("SettingsPopup.Search",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgSettingsSearchPaletteDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x5911f30

System_String_o *
Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075456c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"zoom");
    Il2CppMethodInitialized_075456c0 = '\x01';
  }
  return "zoom";
}


// Gisketch.Aottg2UI.Game.AottgSettingsSearchPaletteDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x5911f60

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075456c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_075456c1 = '\x01';
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
// 0x5912040

void Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_String_o *placeholder;
  
  if (Il2CppMethodInitialized_075456c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"aottg-settings-search-palette");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Search");
    il2cpp_codegen_initialize_runtime_metadata(&"settings");
    Il2CppMethodInitialized_075456c2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  placeholder = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                          ("SettingsPopup.Search",(MethodInfo *)0x0);
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__SearchPalette
            (body,"aottg-settings-search-palette",placeholder,"settings",false,(System_String_array *)0x0,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSettingsSearchPaletteDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog___ctor (Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog_o* __this, const MethodInfo* method);
// 0x59120f0

void Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgSettingsSearchPaletteDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


