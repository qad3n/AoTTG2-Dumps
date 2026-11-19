// Type: Gisketch.Aottg2UI.Game.AottgGalleryScreen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgGalleryScreen.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGalleryScreen$$get_ViewerId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGalleryScreen__get_ViewerId (Gisketch_Aottg2UI_Game_AottgGalleryScreen_o* __this, const MethodInfo* method);
// 0x591a210

System_String_o *
Gisketch_Aottg2UI_Game_AottgGalleryScreen__get_ViewerId
          (Gisketch_Aottg2UI_Game_AottgGalleryScreen_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754571d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"gallery");
    Il2CppMethodInitialized_0754571d = '\x01';
  }
  return "gallery";
}


// Gisketch.Aottg2UI.Game.AottgGalleryScreen$$get_PanelTitleKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGalleryScreen__get_PanelTitleKey (Gisketch_Aottg2UI_Game_AottgGalleryScreen_o* __this, const MethodInfo* method);
// 0x591a240

System_String_o *
Gisketch_Aottg2UI_Game_AottgGalleryScreen__get_PanelTitleKey
          (Gisketch_Aottg2UI_Game_AottgGalleryScreen_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754571e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.ToolsPopup.GalleryButton");
    Il2CppMethodInitialized_0754571e = '\x01';
  }
  return "MainMenu.ToolsPopup.GalleryButton";
}


// Gisketch.Aottg2UI.Game.AottgGalleryScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGalleryScreen___ctor (Gisketch_Aottg2UI_Game_AottgGalleryScreen_o* __this, const MethodInfo* method);
// 0x591a270

void Gisketch_Aottg2UI_Game_AottgGalleryScreen___ctor
               (Gisketch_Aottg2UI_Game_AottgGalleryScreen_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754571f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen);
    Il2CppMethodInitialized_0754571f = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen);
    Gisketch_Aottg2UI_Code_AottgScreen___ctor
              ((Gisketch_Aottg2UI_Code_AottgScreen_o *)__this,(MethodInfo *)0x0);
    return;
  }
  Gisketch_Aottg2UI_Code_AottgScreen___ctor((Gisketch_Aottg2UI_Code_AottgScreen_o *)__this,(MethodInfo *)0x0);
  return;
}


