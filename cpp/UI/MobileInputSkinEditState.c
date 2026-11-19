// Type: UI.MobileInputSkinEditState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MobileInputSkinEditState.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileInputSkinEditState$$.ctor
// il2cpp: void UI_MobileInputSkinEditState___ctor (UI_MobileInputSkinEditState_o* __this, UI_MobileInputSkin_o* skin, const MethodInfo* method);
// 0x5ca5e90

void UI_MobileInputSkinEditState___ctor
               (UI_MobileInputSkinEditState_o *__this,UI_MobileInputSkin_o *skin,MethodInfo *method)

{
  bool defaultValue;
  Utility_Color255_o *__this_00;
  Settings_ColorSetting_o *__this_01;
  System_String_o *pSVar1;
  Settings_BoolSetting_o *__this_02;
  UnityEngine_Color_o color;
  
  if (Il2CppMethodInitialized_07547a74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_07547a74 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (skin == (UI_MobileInputSkin_o *)0x0) {
    skin = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    UI_MobileInputSkin___ctor(skin,0.0,0.0,0.0,0.38,(MethodInfo *)0x0);
    if (skin == (UI_MobileInputSkin_o *)0x0) {
      ThrowNullReferenceException();
    }
  }
  color = UI_MobileInputSkin__ToColor(skin,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_5ce7790(__this_00,color,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_5a451c0(__this_01,__this_00,0,(MethodInfo *)0x0);
  (__this->fields).Color = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Color);
  pSVar1 = (skin->fields).Image;
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  pSVar1 = UI_MobileControlSkinManager__NormalizeSkinReference(pSVar1,(MethodInfo *)0x0);
  (__this->fields).Image = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Image);
  defaultValue = (skin->fields).PreserveAspect;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(__this_02,defaultValue,(MethodInfo *)0x0);
  (__this->fields).PreserveAspect = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PreserveAspect);
  return;
}


// UI.MobileInputSkinEditState$$ToSkin
// il2cpp: UI_MobileInputSkin_o* UI_MobileInputSkinEditState__ToSkin (UI_MobileInputSkinEditState_o* __this, const MethodInfo* method);
// 0x5caa6b0

UI_MobileInputSkin_o *
UI_MobileInputSkinEditState__ToSkin(UI_MobileInputSkinEditState_o *__this,MethodInfo *method)

{
  Settings_ColorSetting_o *pSVar1;
  Utility_Color255_o *__this_00;
  Settings_BoolSetting_o *pSVar2;
  UI_MobileInputSkin_o *pUVar3;
  System_String_o *pSVar4;
  UnityEngine_Color_o color;
  
  if (Il2CppMethodInitialized_07547a75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    Il2CppMethodInitialized_07547a75 = '\x01';
  }
  pSVar1 = (__this->fields).Color;
  if ((pSVar1 != (Settings_ColorSetting_o *)0x0) &&
     (__this_00 = (pSVar1->fields)._value, __this_00 != (Utility_Color255_o *)0x0)) {
    color = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
    pUVar3 = UI_MobileInputSkin__FromColor(color,(MethodInfo *)0x0);
    pSVar4 = (__this->fields).Image;
    if (pSVar4 == (System_String_o *)0x0) {
      pSVar4 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8);
    }
    if (pUVar3 != (UI_MobileInputSkin_o *)0x0) {
      (pUVar3->fields).Image = pSVar4;
      Il2CppCodeGenWriteBarrier(&(pUVar3->fields).Image);
      pSVar2 = (__this->fields).PreserveAspect;
      if (pSVar2 != (Settings_BoolSetting_o *)0x0) {
        (pUVar3->fields).PreserveAspect = (pSVar2->fields)._value;
        return pUVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


