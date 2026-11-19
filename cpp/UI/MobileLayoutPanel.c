// Type: UI.MobileLayoutPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MobileLayoutPanel.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileLayoutPanel$$Setup
// il2cpp: void UI_MobileLayoutPanel__Setup (UI_MobileLayoutPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5c6db30

void UI_MobileLayoutPanel__Setup(UI_MobileLayoutPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  System_String_o *text;
  System_String_o *value;
  System_Enum_o local_30;
  undefined4 local_20;
  
  if (Il2CppMethodInitialized_075478d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutRole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"MobileLayoutEdit");
    il2cpp_codegen_initialize_runtime_metadata(&"mobile.layout.open");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075478d2 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  Gisketch_Aottg2UI_Game_AottgInGameView___ctor(__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  text = UI_UIManager__GetLocale
                   ("SettingsPopup","Keybinds","MobileLayoutEdit","",
                    "",(MethodInfo *)0x0);
  parent_00 = (__this->fields).SinglePanel;
  local_30.klass = (System_Enum_c *)TypeInfo_UI_MobileInputLayoutRole;
  local_30.monitor = (void *)0xffffffffffffffff;
  local_20 = 5;
  value = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Game_AottgInGameView__Button
            (__this_00,parent_00,text,"mobile.layout.open",value,280.0,44.0,3,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutPanel$$.ctor
// il2cpp: void UI_MobileLayoutPanel___ctor (UI_MobileLayoutPanel_o* __this, const MethodInfo* method);
// 0x5c6dcb0

void UI_MobileLayoutPanel___ctor(UI_MobileLayoutPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


