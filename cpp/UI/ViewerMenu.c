// Type: UI.ViewerMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/ViewerMenu.cs
// Prior real C# source: none
// --------------------------------

// UI.ViewerMenu$$Step
// il2cpp: void UI_ViewerMenu__Step (UI_ViewerMenu_o* __this, int32_t delta, const MethodInfo* method);
// 0x5cc9530

void UI_ViewerMenu__Step(UI_ViewerMenu_o *__this,int32_t delta,MethodInfo *method)

{
  int32_t iVar1;
  int32_t count;
  int iVar2;
  
  iVar2 = delta + (__this->fields)._index;
  iVar1 = (*(__this->klass->vtable)._8_get_Count.methodPtr)
                    (__this,(__this->klass->vtable)._8_get_Count.method);
  iVar1 = iVar1 + -1;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  if (iVar2 < iVar1) {
    iVar1 = iVar2;
  }
  if (iVar2 < 0) {
    iVar1 = 0;
  }
  if (iVar1 == (__this->fields)._index) {
    return;
  }
  (__this->fields)._index = iVar1;
  if (Il2CppMethodInitialized_07547b6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen);
    Il2CppMethodInitialized_07547b6c = '\x01';
    iVar1 = (__this->fields)._index;
  }
  (*(__this->klass->vtable)._9_Load.methodPtr)(__this,iVar1,(__this->klass->vtable)._9_Load.method);
  iVar1 = (*(__this->klass->vtable)._8_get_Count.methodPtr)
                    (__this,(__this->klass->vtable)._8_get_Count.method);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (__this->fields)._index + 1;
  }
  count = (*(__this->klass->vtable)._8_get_Count.methodPtr)
                    (__this,(__this->klass->vtable)._8_get_Count.method);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen);
  }
  Gisketch_Aottg2UI_Game_AottgViewerScreen__SetCounter(iVar1,count,(MethodInfo *)0x0);
  return;
}


// UI.ViewerMenu$$ShowCurrent
// il2cpp: void UI_ViewerMenu__ShowCurrent (UI_ViewerMenu_o* __this, const MethodInfo* method);
// 0x5cc9610

void UI_ViewerMenu__ShowCurrent(UI_ViewerMenu_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t count;
  
  if (Il2CppMethodInitialized_07547b6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen);
    Il2CppMethodInitialized_07547b6c = '\x01';
  }
  (*(__this->klass->vtable)._9_Load.methodPtr)
            (__this,(__this->fields)._index,(__this->klass->vtable)._9_Load.method);
  iVar1 = (*(__this->klass->vtable)._8_get_Count.methodPtr)
                    (__this,(__this->klass->vtable)._8_get_Count.method);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (__this->fields)._index + 1;
  }
  count = (*(__this->klass->vtable)._8_get_Count.methodPtr)
                    (__this,(__this->klass->vtable)._8_get_Count.method);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgViewerScreen);
  }
  Gisketch_Aottg2UI_Game_AottgViewerScreen__SetCounter(iVar1,count,(MethodInfo *)0x0);
  return;
}


// UI.ViewerMenu$$.ctor
// il2cpp: void UI_ViewerMenu___ctor (UI_ViewerMenu_o* __this, const MethodInfo* method);
// 0x5cc96b0

void UI_ViewerMenu___ctor(UI_ViewerMenu_o *__this,MethodInfo *method)

{
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ViewerMenu$$.cctor
// il2cpp: void UI_ViewerMenu___cctor (const MethodInfo* method);
// 0x5cc96c0

void UI_ViewerMenu___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547b6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ViewerMenu);
    Il2CppMethodInitialized_07547b6d = '\x01';
  }
  (TypeInfo_UI_ViewerMenu->static_fields->ContentCenter).fields = (UnityEngine_Vector2_Fields)0x43838000;
  return;
}


