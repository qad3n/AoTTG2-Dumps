// Type: UI.CharacterEditorCostumePanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/CharacterEditorCostumePanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorCostumePanel.cs
// --------------------------------

// UI.CharacterEditorCostumePanel.<>c$$.cctor
// il2cpp: void UI_CharacterEditorCostumePanel___c___cctor (const MethodInfo* method);
// 0x1821e8560

void UI_CharacterEditorCostumePanel___c___cctor(MethodInfo *method)

{
  UI_CharacterEditorCostumePanel___c_o *__this;
  
  if (Il2CppMethodInitialized_184346f88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorCostumePanel_c);
    Il2CppMethodInitialized_184346f88 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CharacterEditorCostumePanel_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_UI_CharacterEditorCostumePanel_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_CharacterEditorCostumePanel_c->static_fields->__9,__this);
  return;
}


// UI.CharacterEditorCostumePanel.<>c$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel___c___ctor (UI_CharacterEditorCostumePanel___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_CharacterEditorCostumePanel___c___ctor(UI_CharacterEditorCostumePanel___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c$$<OnButtonClick>b__33_6
// il2cpp: void UI_CharacterEditorCostumePanel___c___OnButtonClick_b__33_6 (UI_CharacterEditorCostumePanel___c_o* __this, const MethodInfo* method);
// 0x1821e8040

void UI_CharacterEditorCostumePanel___c___OnButtonClick_b__33_6
               (UI_CharacterEditorCostumePanel___c_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSettings_o *pSVar1;
  Settings_CustomSkinSettings_o *pSVar2;
  
  if (Il2CppMethodInitialized_184346f89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346f89 = '\x01';
  }
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  Utility_CharacterPreviewGenerator__ClearSessionGeneratedPreviews((MethodInfo *)0x0);
  Utility_CharacterPreviewGenerator__ClearNonPersistentPreviews((MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if (pSVar1 != (Settings_HumanCustomSettings_o *)0x0) {
    (*(pSVar1->klass->vtable)._19_Load.methodPtr)(pSVar1,(pSVar1->klass->vtable)._19_Load.method);
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (pSVar2 != (Settings_CustomSkinSettings_o *)0x0) {
      (*(pSVar2->klass->vtable)._19_Load.methodPtr)(pSVar2,(pSVar2->klass->vtable)._19_Load.method);
      if (Il2CppMethodInitialized_184346fb1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
        Il2CppMethodInitialized_184346fb1 = '\x01';
      }
      TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview = false;
      TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview = false;
      ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___ctor (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_0___ctor(UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__0
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__0 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e81a0

void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__0
               (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  if (Il2CppMethodInitialized_184346f8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Quit");
    Il2CppMethodInitialized_184346f8a = '\x01';
  }
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnButtonClick(__this_00,"Quit",(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__1
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__1 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e82e0

void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__1
               (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  if (Il2CppMethodInitialized_184346f8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LoadPreset");
    Il2CppMethodInitialized_184346f8b = '\x01';
  }
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnButtonClick(__this_00,"LoadPreset",(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__2
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__2 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e8330

void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__2
               (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  if (Il2CppMethodInitialized_184346f8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SaveQuit");
    Il2CppMethodInitialized_184346f8c = '\x01';
  }
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnButtonClick(__this_00,"SaveQuit",(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__3
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__3 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e8380

void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__3
               (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCustomSetSelected(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__4
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__4 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e83a0

void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__4
               (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnSexChanged(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__5
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__5 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e81f0

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__5(UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__6
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__6 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e81f0

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__6(UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__7
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__7 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e81f0

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__7(UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__8
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__8 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e81f0

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__8(UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__9
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__9 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e81f0

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__9(UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__10
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__10 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e81f0

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__10(UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__11
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__11 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e81f0

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__11(UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__12
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__12 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e81f0

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__12(UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__13
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__13 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e81f0

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__13(UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__14
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__14 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e81f0

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__14(UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__15
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__15 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e8210

void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__15
               (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_IntSetting_o *__this_00;
  Settings_BoolSetting_o *__this_01;
  UI_CharacterEditorCostumePanel_o *__this_02;
  int32_t value;
  
  if (Il2CppMethodInitialized_184346f8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184346f8d = '\x01';
  }
  pSVar1 = (__this->fields).set;
  if ((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
     (pSVar2 = (__this->fields).capeOption, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    value = 2;
    __this_00 = (pSVar1->fields).Cape;
    if ((pSVar2->fields)._value != 3) {
      value = (pSVar2->fields)._value;
    }
    if (__this_00 != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)__this_00,value,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pSVar1 = (__this->fields).set;
      if (((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
          (pSVar2 = (__this->fields).capeOption, pSVar2 != (Settings_IntSetting_o *)0x0)) &&
         (__this_01 = (pSVar1->fields).HoodUp, __this_01 != (Settings_BoolSetting_o *)0x0)) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)__this_01,(pSVar2->fields)._value == 3,
                   (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        __this_02 = (__this->fields).__4__this;
        if (__this_02 != (UI_CharacterEditorCostumePanel_o *)0x0) {
          UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__16
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__16 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e81f0

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__16(UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__17
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__17 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e81f0

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__17(UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__18
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__18 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e81f0

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__18(UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__19
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__19 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e81f0

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__19(UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__20
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__20 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e81f0

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__20(UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__21
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__21 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e81f0

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__21(UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__22
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__22 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e81f0

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__22(UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__23
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__23 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e81f0

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__23(UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__24
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__24 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e81f0

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__24(UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__25
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__25 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e81f0

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__25(UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__26
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__26 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x1821e81f0

void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__26
               (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_1$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_1___ctor (UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_1___ctor(UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_1$$<Setup>b__27
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_1___Setup_b__27 (UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o* __this, const MethodInfo* method);
// 0x1821e83c0

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_1___Setup_b__27(UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *pUVar1;
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  pUVar1 = (__this->fields).CS___8__locals1;
  if ((pUVar1 != (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *)0x0) &&
     (__this_00 = (pUVar1->fields).__4__this, __this_00 != (UI_CharacterEditorCostumePanel_o *)0x0)) {
    UI_CharacterEditorCostumePanel__OnButtonClick(__this_00,(__this->fields).button,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_2$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_2___ctor (UI_CharacterEditorCostumePanel___c__DisplayClass21_2_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_CharacterEditorCostumePanel___c__DisplayClass21_2___ctor(UI_CharacterEditorCostumePanel___c__DisplayClass21_2_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_2$$<Setup>b__28
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_2___Setup_b__28 (UI_CharacterEditorCostumePanel___c__DisplayClass21_2_o* __this, const MethodInfo* method);
// 0x1821e83c0

void UI_CharacterEditorCostumePanel___c__DisplayClass21_2___Setup_b__28
               (UI_CharacterEditorCostumePanel___c__DisplayClass21_2_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *pUVar1;
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  pUVar1 = (__this->fields).CS___8__locals2;
  if ((pUVar1 != (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *)0x0) &&
     (__this_00 = (pUVar1->fields).__4__this, __this_00 != (UI_CharacterEditorCostumePanel_o *)0x0)) {
    UI_CharacterEditorCostumePanel__OnButtonClick(__this_00,(__this->fields).button,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass33_0$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___ctor (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_CharacterEditorCostumePanel___c__DisplayClass33_0___ctor(UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass33_0$$<OnButtonClick>b__0
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__0 (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x1821e8470

void
UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__0(UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass33_0$$<OnButtonClick>b__1
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__1 (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x1821e8470

void
UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__1(UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass33_0$$<OnButtonClick>b__2
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__2 (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x1821e8470

void
UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__2(UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass33_0$$<OnButtonClick>b__3
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__3 (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x1821e8470

void
UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__3(UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass33_0$$<OnButtonClick>b__4
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__4 (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x1821e84a0

void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__4
               (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  if (Il2CppMethodInitialized_184346f8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LoadPreset");
    Il2CppMethodInitialized_184346f8e = '\x01';
  }
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (__this_00,"LoadPreset",(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass33_0$$<OnButtonClick>b__5
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__5 (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x1821e8470

void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__5
               (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__31$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor(UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__31$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__System_IDisposable_Dispose (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__System_IDisposable_Dispose(UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o* __this, MethodInfo* method)

{
  return;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__31$$MoveNext
// il2cpp: bool UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__MoveNext (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o* __this, const MethodInfo* method);
// 0x1821e5500

bool UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__MoveNext
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this,
               MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_CustomSkinSettings_o *pSVar3;
  Settings_HumanCustomSkinSettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  GameManagers_BaseGameManager_o *pGVar6;
  Characters_DummyHuman_o *__this_00;
  Il2CppObject *pIVar7;
  
  if (Il2CppMethodInitialized_184346f8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346f8f = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pIVar7 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar7);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    pGVar6 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar6 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
      if (((pGVar6->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar6->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(pGVar6);
      }
      __this_00 = (Characters_DummyHuman_o *)(*(uint64_t *)((char *)pGVar6 + 0x38));
      if (__this_00 != (Characters_DummyHuman_o *)0x0) {
        bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
        if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
           ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_DummyHuman)) {
          pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
          if ((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
             ((pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0 &&
              (pSVar5 = (pSVar4->fields).GlobalSkinOverridesEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0))
             )) {
            (__this->fields)._originalGlobalEnabled_5__2 = (pSVar5->fields)._value;
            pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
            if ((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
               ((pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0 &&
                (pSVar5 = (pSVar4->fields).SetSpecificSkinsEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0)))
               ) {
              (__this->fields)._originalSetEnabled_5__3 = (pSVar5->fields)._value;
              pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
              if ((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
                 (pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0)) {
                pSVar5 = (pSVar4->fields).GlobalSkinOverridesEnabled;
                if (Il2CppMethodInitialized_184346ff7 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
                  Il2CppMethodInitialized_184346ff7 = '\x01';
                }
                if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
                  Settings_TypedSetting_bool___set_Value
                            ((Settings_TypedSetting_bool__o *)pSVar5,
                             TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->
                             _persistentGlobalSkinPreview,
                             (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
                  if ((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
                     (pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0)) {
                    pSVar5 = (pSVar4->fields).SetSpecificSkinsEnabled;
                    if (Il2CppMethodInitialized_184346ff8 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
                      Il2CppMethodInitialized_184346ff8 = '\x01';
                    }
                    if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
                      Settings_TypedSetting_bool___set_Value
                                ((Settings_TypedSetting_bool__o *)pSVar5,
                                 TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->
                                 _persistentCustomSkinPreview,
                                 (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                      Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
                      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                      }
                      pIVar7 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
                      (__this->fields).__2__current = pIVar7;
                      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar7);
                      (__this->fields).__1__state = 2;
                      return true;
                    }
                  }
                }
              }
            }
          }
          goto label_1821e58ba;
        }
      }
    }
  }
  else if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
        (pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
       (pSVar5 = (pSVar4->fields).GlobalSkinOverridesEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)pSVar5,(__this->fields)._originalGlobalEnabled_5__2,
                 (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if (((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
          (pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
         (pSVar5 = (pSVar4->fields).SetSpecificSkinsEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar5,(__this->fields)._originalSetEnabled_5__3,
                   (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        return false;
      }
    }
label_1821e58ba:
    ThrowNullReferenceException();
  }
  return false;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__31$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__System_Collections_IEnumerator_Reset (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o* __this, const MethodInfo* method);
// 0x1821e58d0

void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this,
               MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterCostumeChange_d__31_System_Collections_IEnum
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__31$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__System_Collections_IEnumerator_get_Current (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__System_Collections_IEnumerator_get_Current(UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__29$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29___ctor (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29___ctor(UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__29$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__System_IDisposable_Dispose (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__System_IDisposable_Dispose(UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o* __this, MethodInfo* method)

{
  return;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__29$$MoveNext
// il2cpp: bool UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__MoveNext (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x1821e61a0

bool UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__MoveNext
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_CustomSkinSettings_o *pSVar3;
  Settings_HumanCustomSkinSettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  GameManagers_BaseGameManager_o *pGVar6;
  Characters_DummyHuman_o *__this_00;
  Il2CppObject *pIVar7;
  
  if (Il2CppMethodInitialized_184346f90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346f90 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pIVar7 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar7);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    pGVar6 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar6 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
      if (((pGVar6->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar6->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(pGVar6);
      }
      __this_00 = (Characters_DummyHuman_o *)(*(uint64_t *)((char *)pGVar6 + 0x38));
      if (__this_00 != (Characters_DummyHuman_o *)0x0) {
        bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
        if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
           ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_DummyHuman)) {
          pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
          if ((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
             ((pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0 &&
              (pSVar5 = (pSVar4->fields).GlobalSkinOverridesEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0))
             )) {
            (__this->fields)._originalGlobalEnabled_5__2 = (pSVar5->fields)._value;
            pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
            if ((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
               ((pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0 &&
                (pSVar5 = (pSVar4->fields).SetSpecificSkinsEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0)))
               ) {
              (__this->fields)._originalSetEnabled_5__3 = (pSVar5->fields)._value;
              pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
              if ((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
                 (pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0)) {
                pSVar5 = (pSVar4->fields).GlobalSkinOverridesEnabled;
                if (Il2CppMethodInitialized_184346ff7 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
                  Il2CppMethodInitialized_184346ff7 = '\x01';
                }
                if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
                  Settings_TypedSetting_bool___set_Value
                            ((Settings_TypedSetting_bool__o *)pSVar5,
                             TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->
                             _persistentGlobalSkinPreview,
                             (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
                  if ((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
                     (pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0)) {
                    pSVar5 = (pSVar4->fields).SetSpecificSkinsEnabled;
                    if (Il2CppMethodInitialized_184346ff8 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
                      Il2CppMethodInitialized_184346ff8 = '\x01';
                    }
                    if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
                      Settings_TypedSetting_bool___set_Value
                                ((Settings_TypedSetting_bool__o *)pSVar5,
                                 TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->
                                 _persistentCustomSkinPreview,
                                 (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                      Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
                      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                      }
                      pIVar7 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
                      (__this->fields).__2__current = pIVar7;
                      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar7);
                      (__this->fields).__1__state = 2;
                      return true;
                    }
                  }
                }
              }
            }
          }
          goto label_1821e655a;
        }
      }
    }
  }
  else if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
        (pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
       (pSVar5 = (pSVar4->fields).GlobalSkinOverridesEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)pSVar5,(__this->fields)._originalGlobalEnabled_5__2,
                 (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if (((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
          (pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
         (pSVar5 = (pSVar4->fields).SetSpecificSkinsEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar5,(__this->fields)._originalSetEnabled_5__3,
                   (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        return false;
      }
    }
label_1821e655a:
    ThrowNullReferenceException();
  }
  return false;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__29$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__29$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__System_Collections_IEnumerator_Reset (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x1821e6570

void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterReset_d__29_System_Collections_IEnumerator_R
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__29$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__System_Collections_IEnumerator_get_Current (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__System_Collections_IEnumerator_get_Current(UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__28$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28___ctor (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28___ctor(UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__28$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__System_IDisposable_Dispose (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__System_IDisposable_Dispose(UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o* __this, MethodInfo* method)

{
  return;
}


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__28$$MoveNext
// il2cpp: bool UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__MoveNext (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o* __this, const MethodInfo* method);
// 0x1821e65b0
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821e66d0: xor al, al
// asm:   0x1821e66d2: jmp 0x1821e688c
// asm:   0x1821e677a: mov r10, r14
// asm:   0x1821e677d: jmp 0x1821e67b2
// asm:   0x1821e691b: nop dword ptr [rax + rax]
// asm:   0x1821e6b77: xor edx, edx
// asm:   0x1821e6b79: mov ecx, 3
// asm:   0x1821e6b7e: call 0x182343cd0  ; Utility_Util__WaitForFrames()
// asm:   0x1821e6b83: lea rcx, [rbx + 0x18]
// asm:   0x1821e6b87: mov qword ptr [rbx + 0x18], rax
// asm:   0x1821e6b8b: mov rdx, rax
// asm:   0x1821e6b8e: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1821e6b93: mov dword ptr [rbx + 0x10], 1
// asm:   0x1821e6b9a: jmp 0x1821e688a
// asm:   0x1821e6c48: mov r14, rdi
// asm:   0x1821e6c65: xor edx, edx
// asm:   0x1821e6c67: mov rcx, r15
// asm:   0x1821e6c6a: call 0x1821d2070  ; UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset()
// asm:   0x1821e6c6f: lea rcx, [rbx + 0x18]
// asm:   0x1821e6c73: mov qword ptr [rbx + 0x18], rax
// asm:   0x1821e6c77: mov rdx, rax
// asm:   0x1821e6c7a: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1821e6c7f: mov dword ptr [rbx + 0x10], 3
// asm:   0x1821e6c86: jmp 0x1821e688a

bool UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__MoveNext
               (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *__this,
               MethodInfo *method)

{
  byte bVar1;
  UI_CharacterEditorCostumePanel_o *__this_00;
  Settings_HumanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  UI_CharacterEditorMenu_o *pUVar5;
  UI_ExternalLinkPopup_o *pUVar6;
  Characters_HumanSetup_o *pCVar7;
  Settings_ListSetting_T__o *obj;
  Settings_StringSetting_o *pSVar8;
  GameManagers_BaseGameManager_o *pGVar9;
  bool bVar10;
  Settings_HumanCustomSet_o *pSVar11;
  Il2CppObject *pIVar12;
  System_Collections_Generic_List_object__o *__this_01;
  Settings_HumanCustomSet_o *pSVar13;
  int iVar14;
  Characters_DummyHuman_o *pCVar15;
  Characters_DummyHuman_o *x;
  
  if (Il2CppMethodInitialized_184346f91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorHumanMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IListSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346f91 = '\x01';
  }
  iVar14 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar14 == 0) {
    (__this->fields).__1__state = -1;
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
    (__this->fields)._settings_5__2 = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._settings_5__2,pSVar2);
    pSVar2 = (__this->fields)._settings_5__2;
    if (((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
        (pSVar3 = (pSVar2->fields).CustomSets,
        pSVar3 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) &&
       (obj = (pSVar3->fields).Sets, obj != (Settings_ListSetting_T__o *)0x0)) {
      __this_01 = InterfaceInvoker0_Invoke
                            (2,(Il2CppClass *)TypeInfo_Settings_IListSetting,(Il2CppObject *)obj);
      x = (Characters_DummyHuman_o *)0x0;
      pCVar15 = x;
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        while (iVar14 = (int)pCVar15, iVar14 < (__this_01->fields)._size) {
          pSVar13 = (Settings_HumanCustomSet_o *)
                    System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              (__this_01,iVar14,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_BaseSetting_get_Item);
          if (pSVar13 == (Settings_HumanCustomSet_o *)0x0) goto label_1821e6c8b;
          bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
          if (((pSVar13->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar13->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar13);
          }
          pSVar8 = (pSVar13->fields).UniqueId;
          if (pSVar8 == (Settings_StringSetting_o *)0x0) goto label_1821e6c8b;
          bVar10 = System_String__op_Equality
                             ((pSVar8->fields)._value,(__this->fields).previousProfileId,(MethodInfo *)0x0);
          if (bVar10) {
            pSVar2 = (__this->fields)._settings_5__2;
            if (((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
                (pSVar3 = (pSVar2->fields).CustomSets,
                pSVar3 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) &&
               (pSVar4 = (pSVar3->fields).SelectedSetIndex, pSVar4 != (Settings_IntSetting_o *)0x0)) {
              (__this->fields)._currentSelectedIndex_5__3 = (pSVar4->fields)._value;
              pSVar2 = (__this->fields)._settings_5__2;
              if (((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
                  (pSVar3 = (pSVar2->fields).CustomSets,
                  pSVar3 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) &&
                 (pSVar4 = (pSVar3->fields).SelectedSetIndex, pSVar4 != (Settings_IntSetting_o *)0x0)) {
                Settings_TypedSetting_int___set_Value
                          ((Settings_TypedSetting_int__o *)pSVar4,iVar14,
                           (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                pGVar9 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
                if (pGVar9 != (GameManagers_BaseGameManager_o *)0x0) {
                  bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
                  if (((pGVar9->klass->_2).typeHierarchyDepth < bVar1) ||
                     ((pGVar9->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                      (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
                    il2cpp_codegen_raise_invalid_cast_exception(pGVar9);
                  }
                  pCVar15 = (Characters_DummyHuman_o *)(*(uint64_t *)((char *)pGVar9 + 0x38));
                  if (pCVar15 == (Characters_DummyHuman_o *)0x0) {
                    (__this->fields)._character_5__4 = (Characters_DummyHuman_o *)0x0;
                    pCVar15 = x;
                  }
                  else {
                    bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
                    if (((pCVar15->klass->_2).typeHierarchyDepth < bVar1) ||
                       ((pCVar15->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                        (Il2CppClass *)TypeInfo_Characters_DummyHuman)) {
                      il2cpp_codegen_raise_invalid_cast_exception(pCVar15);
                    }
                    (__this->fields)._character_5__4 = pCVar15;
                    bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
                    if (((pCVar15->klass->_2).typeHierarchyDepth < bVar1) ||
                       ((pCVar15->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                        (Il2CppClass *)TypeInfo_Characters_DummyHuman)) {
                      il2cpp_codegen_raise_invalid_cast_exception(pCVar15);
                    }
                  }
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._character_5__4,pCVar15);
                  pCVar15 = (__this->fields)._character_5__4;
                  if (((pCVar15 != (Characters_DummyHuman_o *)0x0) &&
                      (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0)) &&
                     (pUVar5 = (__this_00->fields)._menu, pUVar5 != (UI_CharacterEditorMenu_o *)0x0)) {
                    bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
                    if (((pUVar5->klass->_2).typeHierarchyDepth < bVar1) ||
                       ((pUVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                        (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
                      il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
                    }
                    pUVar6 = (*(uint64_t *)((char *)pUVar5 + 0xe0));
                    if ((pUVar6 != (UI_ExternalLinkPopup_o *)0x0) &&
                       (pCVar7 = (pCVar15->fields).Setup, pCVar7 != (Characters_HumanSetup_o *)0x0)) {
                      Characters_HumanSetup__Load
                                (pCVar7,pSVar13,
                                 *(int32_t *)((longlong)&(pUVar6->fields).m_CancellationTokenSource + 4),false
                                 ,(MethodInfo *)0x0);
                      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                      }
                      pIVar12 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
                      (__this->fields).__2__current = pIVar12;
                      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar12);
                      (__this->fields).__1__state = 1;
                      return true;
                    }
                  }
                }
              }
            }
            goto label_1821e6c8b;
          }
          pCVar15 = (Characters_DummyHuman_o *)(ulonglong)(iVar14 + 1);
        }
        if ((__this->fields).shouldApplySkinPreview == false) {
          return false;
        }
        pGVar9 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
        if (pGVar9 != (GameManagers_BaseGameManager_o *)0x0) {
          bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
          if (((pGVar9->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pGVar9->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
            il2cpp_codegen_raise_invalid_cast_exception(pGVar9);
          }
          pCVar15 = (Characters_DummyHuman_o *)(*(uint64_t *)((char *)pGVar9 + 0x38));
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          if (pCVar15 != (Characters_DummyHuman_o *)0x0) {
            bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
            if (((pCVar15->klass->_2).typeHierarchyDepth < bVar1) ||
               (x = pCVar15,
               (pCVar15->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
               (Il2CppClass *)TypeInfo_Characters_DummyHuman)) {
              il2cpp_codegen_raise_invalid_cast_exception(pCVar15);
            }
          }
          bVar10 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar10) {
            return false;
          }
          if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
            pIVar12 = (Il2CppObject *)
                      UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset(__this_00,(MethodInfo *)0x0);
            (__this->fields).__2__current = pIVar12;
            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar12);
            (__this->fields).__1__state = 3;
            return true;
          }
        }
      }
    }
  }
  else {
    pSVar13 = (Settings_HumanCustomSet_o *)0x0;
    if (iVar14 != 1) {
      if (iVar14 != 2) {
        if (iVar14 != 3) {
          return false;
        }
        (__this->fields).__1__state = -1;
        return false;
      }
      (__this->fields).__1__state = -1;
label_1821e6856:
      (__this->fields)._character_5__4 = (Characters_DummyHuman_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._character_5__4,(void *)0x0);
      return false;
    }
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview(true,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._settings_5__2;
    if (((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
        (pSVar3 = (pSVar2->fields).CustomSets,
        pSVar3 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) &&
       (pSVar4 = (pSVar3->fields).SelectedSetIndex, pSVar4 != (Settings_IntSetting_o *)0x0)) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar4,(__this->fields)._currentSelectedIndex_5__3,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pSVar2 = (__this->fields)._settings_5__2;
      if ((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
         (pSVar3 = (pSVar2->fields).CustomSets,
         pSVar3 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
        pSVar11 = (Settings_HumanCustomSet_o *)
                  Settings_SetSettingsContainer_object___GetSelectedSet
                            ((Settings_SetSettingsContainer_T__o *)pSVar3,
                             (MethodInfo_C8EAF0 *)
                             MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
        if (pSVar11 != (Settings_HumanCustomSet_o *)0x0) {
          bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
          if (((((Settings_BaseSetSetting_c *)pSVar11->klass)->_2).typeHierarchyDepth < bVar1) ||
             (pSVar13 = pSVar11,
             (((Settings_BaseSetSetting_c *)pSVar11->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
             (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar11);
          }
        }
        pCVar15 = (__this->fields)._character_5__4;
        if (((pCVar15 != (Characters_DummyHuman_o *)0x0) &&
            (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0)) &&
           (pUVar5 = (__this_00->fields)._menu, pUVar5 != (UI_CharacterEditorMenu_o *)0x0)) {
          bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
          if (((pUVar5->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pUVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
          }
          pUVar6 = (*(uint64_t *)((char *)pUVar5 + 0xe0));
          if ((pUVar6 != (UI_ExternalLinkPopup_o *)0x0) &&
             (pCVar7 = (pCVar15->fields).Setup, pCVar7 != (Characters_HumanSetup_o *)0x0)) {
            Characters_HumanSetup__Load
                      (pCVar7,pSVar13,*(int32_t *)((longlong)&(pUVar6->fields).m_CancellationTokenSource + 4),
                       false,(MethodInfo *)0x0);
            pCVar15 = (__this->fields)._character_5__4;
            if (pCVar15 != (Characters_DummyHuman_o *)0x0) {
              Characters_DummyCharacter__Idle((Characters_DummyCharacter_o *)pCVar15,(MethodInfo *)0x0);
              if ((__this->fields).shouldApplySkinPreview != false) {
                pIVar12 = (Il2CppObject *)
                          UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset
                                    (__this_00,(MethodInfo *)0x0);
                (__this->fields).__2__current = pIVar12;
                Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar12);
                (__this->fields).__1__state = 2;
                return true;
              }
              goto label_1821e6856;
            }
          }
        }
      }
    }
  }
label_1821e6c8b:
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__28$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__28$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__System_Collections_IEnumerator_Reset (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o* __this, const MethodInfo* method);
// 0x1821e6cf0

void UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *__this,
               MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_UI_CharacterEditorCostumePanel_CapturePreviousProfilePreviewAndApplySkins_d__28_System_Collectio
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__28$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__System_Collections_IEnumerator_get_Current (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__System_Collections_IEnumerator_get_Current(UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__35$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35___ctor (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35___ctor(UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__35$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__System_IDisposable_Dispose (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__System_IDisposable_Dispose(UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o* __this, MethodInfo* method)

{
  return;
}


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__35$$MoveNext
// il2cpp: bool UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__MoveNext (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x1821e7e60

bool UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__MoveNext
               (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *value;
  
  if (Il2CppMethodInitialized_184346f92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346f92 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    value = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
    (__this->fields).__2__current = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview(true,(MethodInfo *)0x0);
    Utility_CharacterPreviewGenerator__SaveCachedPreviewsToDisk((MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184346fb1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
      Il2CppMethodInitialized_184346fb1 = '\x01';
    }
    TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview = false;
    TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview = false;
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
  }
  return false;
}


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__35$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__35$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__System_Collections_IEnumerator_Reset (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x1821e7f70

void UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_UI_CharacterEditorCostumePanel_SaveQuitCaptureCoroutine_d__35_System_Collections_IEnumerator_Res
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__35$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__System_Collections_IEnumerator_get_Current (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__System_Collections_IEnumerator_get_Current(UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorCostumePanel__get_Title (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x1821d6e40

System_String_o *
UI_CharacterEditorCostumePanel__get_Title(UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346f79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Costume");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346f79 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("CharacterEditor","Costume","Title","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorCostumePanel$$get_Width
// il2cpp: float UI_CharacterEditorCostumePanel__get_Width (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x1821c6340

float
UI_CharacterEditorCostumePanel__get_Width(UI_CharacterEditorCostumePanel_o* __this, MethodInfo* method)

{
  return 380.0;
}


// UI.CharacterEditorCostumePanel$$get_Height
// il2cpp: float UI_CharacterEditorCostumePanel__get_Height (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x1821d6e30

float
UI_CharacterEditorCostumePanel__get_Height(UI_CharacterEditorCostumePanel_o* __this, MethodInfo* method)

{
  return 1020.0;
}


// UI.CharacterEditorCostumePanel$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorCostumePanel__get_VerticalSpacing (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x182168bc0

float
UI_CharacterEditorCostumePanel__get_VerticalSpacing(UI_CharacterEditorCostumePanel_o* __this, MethodInfo* method)

{
  return 20.0;
}


// UI.CharacterEditorCostumePanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorCostumePanel__get_HorizontalPadding (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x1821d1fa0

int32_t
UI_CharacterEditorCostumePanel__get_HorizontalPadding(UI_CharacterEditorCostumePanel_o* __this, MethodInfo* method)

{
  return 0x19;
}


// UI.CharacterEditorCostumePanel$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorCostumePanel__get_VerticalPadding (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x1821d1fa0

int32_t
UI_CharacterEditorCostumePanel__get_VerticalPadding(UI_CharacterEditorCostumePanel_o* __this, MethodInfo* method)

{
  return 0x19;
}


// UI.CharacterEditorCostumePanel$$get_ScrollBar
// il2cpp: bool UI_CharacterEditorCostumePanel__get_ScrollBar (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_CharacterEditorCostumePanel__get_ScrollBar(UI_CharacterEditorCostumePanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.CharacterEditorCostumePanel$$GetPersistentGlobalPreview
// il2cpp: bool UI_CharacterEditorCostumePanel__GetPersistentGlobalPreview (const MethodInfo* method);
// 0x1821d1600

bool UI_CharacterEditorCostumePanel__GetPersistentGlobalPreview(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346ff7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
    Il2CppMethodInitialized_184346ff7 = '\x01';
  }
  return TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview;
}


// UI.CharacterEditorCostumePanel$$GetPersistentCustomPreview
// il2cpp: bool UI_CharacterEditorCostumePanel__GetPersistentCustomPreview (const MethodInfo* method);
// 0x1821d15c0

bool UI_CharacterEditorCostumePanel__GetPersistentCustomPreview(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346ff8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
    Il2CppMethodInitialized_184346ff8 = '\x01';
  }
  return TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview;
}


// UI.CharacterEditorCostumePanel$$ResetSkinPreviewToggles
// il2cpp: void UI_CharacterEditorCostumePanel__ResetSkinPreviewToggles (const MethodInfo* method);
// 0x1821d1b70

void
UI_CharacterEditorCostumePanel__ResetSkinPreviewToggles(MethodInfo* method)

{
  if (Il2CppMethodInitialized_184346fb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
    Il2CppMethodInitialized_184346fb1 = '\x01';
  }
  TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview = false;
  TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview = false;
  return;
}


// UI.CharacterEditorCostumePanel$$Setup
// il2cpp: void UI_CharacterEditorCostumePanel__Setup (UI_CharacterEditorCostumePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821d4860
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821d525e: nop 

void UI_CharacterEditorCostumePanel__Setup
               (UI_CharacterEditorCostumePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Il2CppClass *pIVar5;
  UI_BaseMenu_o *pUVar6;
  UI_IconPickPopup_o *pUVar7;
  Settings_ColorSetting_o *pSVar8;
  UI_ColorPickPopup_o *pUVar9;
  Settings_BoolSetting_o *pSVar10;
  System_String_o *category;
  bool bVar11;
  UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *object;
  Settings_BaseSetSetting_o *pSVar12;
  System_String_o *pSVar13;
  UI_ElementStyle_o *__this_00;
  System_String_o *pSVar14;
  UnityEngine_Events_UnityAction_o *pUVar15;
  Settings_HumanCustomSet_o *pSVar16;
  System_String_array *pSVar17;
  UnityEngine_GameObject_o *pUVar18;
  Il2CppObject *pIVar19;
  UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o *object_00;
  UnityEngine_Transform_o *pUVar20;
  UI_CharacterEditorCostumePanel___c__DisplayClass21_2_o *object_01;
  System_String_o *pSVar21;
  System_String_array *pSVar22;
  Settings_IntSetting_o *pSVar23;
  UI_CharacterEditorMenu_o *value;
  uint uVar24;
  int32_t local_b8;
  
  if (Il2CppMethodInitialized_184346f7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_CharacterEffectPresets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSetIndex);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__10);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__11);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__12);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__13);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__14);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__15);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__16);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__17);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__18);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__19);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__20);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__21);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__22);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__23);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__24);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__25);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__26);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__4);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__5);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__6);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__7);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__8);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__9);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_1_Setup_b__27);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_2_Setup_b__28);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Blade Effect (Patreon T2)");
    il2cpp_codegen_initialize_runtime_metadata(&"BootsColor");
    il2cpp_codegen_initialize_runtime_metadata(&"PantsColor");
    il2cpp_codegen_initialize_runtime_metadata(&"JacketColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Create");
    il2cpp_codegen_initialize_runtime_metadata(&"SaveQuit");
    il2cpp_codegen_initialize_runtime_metadata(&"No cape");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Logo");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Costume");
    il2cpp_codegen_initialize_runtime_metadata(&"Quit");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadPreset");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"Sex");
    il2cpp_codegen_initialize_runtime_metadata(&"Boots");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"HairColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Face");
    il2cpp_codegen_initialize_runtime_metadata(&"Head");
    il2cpp_codegen_initialize_runtime_metadata(&"Glass");
    il2cpp_codegen_initialize_runtime_metadata(&"Male");
    il2cpp_codegen_initialize_runtime_metadata(&"StrapsColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Cape");
    il2cpp_codegen_initialize_runtime_metadata(&"Rename");
    il2cpp_codegen_initialize_runtime_metadata(&"Blade Effect Color (Patreon T2)");
    il2cpp_codegen_initialize_runtime_metadata(&"ShirtColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Female");
    il2cpp_codegen_initialize_runtime_metadata(&"Cloak");
    il2cpp_codegen_initialize_runtime_metadata(&"Eye");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Hair Effect Color (Patreon T2)");
    il2cpp_codegen_initialize_runtime_metadata(&"Import");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom set");
    il2cpp_codegen_initialize_runtime_metadata(&"Hair");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Export");
    il2cpp_codegen_initialize_runtime_metadata(&"Hair Effect (Patreon T2)");
    il2cpp_codegen_initialize_runtime_metadata(&"Hood");
    il2cpp_codegen_initialize_runtime_metadata(&"Hat");
    Il2CppMethodInitialized_184346f7a = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *)0x0) goto label_1821d6de0;
  (object->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  value = (UI_CharacterEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (value == (UI_CharacterEditorMenu_o *)0x0) {
    (__this->fields)._menu = (UI_CharacterEditorMenu_o *)0x0;
    value = (UI_CharacterEditorMenu_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_UI_CharacterEditorMenu->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_CharacterEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    (__this->fields)._menu = value;
    bVar1 = (TypeInfo_UI_CharacterEditorMenu->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_CharacterEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu,value);
  (__this->fields)._isRebuildingPanel = true;
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar2 == (Settings_HumanCustomSettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).CustomSets, pSVar3 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0))
  goto label_1821d6de0;
  pSVar12 = Settings_SetSettingsContainer_object___GetSelectedSet
                      ((Settings_SetSettingsContainer_T__o *)pSVar3,
                       (MethodInfo_C8EAF0 *)
                       MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
  if (pSVar12 == (Settings_BaseSetSetting_o *)0x0) goto label_1821d6de0;
  bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
  if (((pSVar12->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pSVar12->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
    il2cpp_codegen_raise_invalid_cast_exception(pSVar12,TypeInfo_Settings_HumanCustomSet);
  }
  pSVar4 = (pSVar12->fields).UniqueId;
  if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_1821d6de0;
  pSVar13 = (pSVar4->fields)._value;
  (__this->fields)._previousProfileId = pSVar13;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previousProfileId,pSVar13);
  pSVar13 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,130.0,20.0,pSVar13,(MethodInfo *)0x0);
  category = "CharacterEditor";
  pSVar13 = "Costume";
  pUVar20 = (__this->fields).BottomBar;
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  pSVar14 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
  pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,(Il2CppObject *)object,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__0,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar20,__this_00,pSVar14,0.0,pUVar15,(MethodInfo *)0x0);
  pUVar20 = (__this->fields).BottomBar;
  pSVar14 = UI_UIManager__GetLocaleCommon("LoadPreset",(MethodInfo *)0x0);
  pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,(Il2CppObject *)object,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__1,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar20,__this_00,pSVar14,0.0,pUVar15,(MethodInfo *)0x0);
  pUVar20 = (__this->fields).BottomBar;
  pSVar14 = UI_UIManager__GetLocale
                      (category,pSVar13,"SaveQuit","","",
                       (MethodInfo *)0x0);
  pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,(Il2CppObject *)object,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__2,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar20,__this_00,pSVar14,0.0,pUVar15,(MethodInfo *)0x0);
  if ((pSVar2 == (Settings_HumanCustomSettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).CustomSets, pSVar3 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0))
  goto label_1821d6de0;
  pSVar16 = (Settings_HumanCustomSet_o *)
            Settings_SetSettingsContainer_object___GetSelectedSet
                      ((Settings_SetSettingsContainer_T__o *)pSVar3,
                       (MethodInfo_C8EAF0 *)
                       MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
  if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
    (object->fields).set = (Settings_HumanCustomSet_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
    if (((pSVar16->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar16->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar16);
    }
    (object->fields).set = pSVar16;
    bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
    if (((pSVar16->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar16->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar16);
    }
  }
  Il2CppCodeGenWriteBarrier(&(object->fields).set,pSVar16);
  pSVar3 = (pSVar2->fields).CustomSets;
  if (pSVar3 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) goto label_1821d6de0;
  pUVar20 = (__this->fields).SinglePanel;
  pSVar23 = (pSVar3->fields).SelectedSetIndex;
  pSVar17 = Settings_SetSettingsContainer_object___GetSetNames
                      ((Settings_SetSettingsContainer_T__o *)(pSVar2->fields).CustomSets,
                       (MethodInfo_C8EC20 *)
                       MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSetNames);
  pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,(Il2CppObject *)object,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__3,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateDropdownSetting
            (pUVar20,__this_00,(Settings_BaseSetting_o *)pSVar23,"Custom set",pSVar17,
             "",170.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar15,
             (System_Int32_array *)0x0,(MethodInfo *)0x0);
  pUVar18 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,10.0,0,(MethodInfo *)0x0);
  local_b8 = 3;
  pIVar19 = SZArrayNew(TypeInfo_string_array,3);
  pSVar14 = "Create";
  if (pIVar19 == (Il2CppObject *)0x0) goto label_1821d6de0;
  if (*(int *)&pIVar19[1].monitor == 0) goto label_1821d6de6;
  pIVar19[2].klass = (Il2CppClass *)"Create";
  Il2CppCodeGenWriteBarrier(&pIVar19[2].klass,pSVar14);
  pSVar14 = "Delete";
  if (*(uint *)&pIVar19[1].monitor < 2) goto label_1821d6de6;
  pIVar19[2].monitor = "Delete";
  Il2CppCodeGenWriteBarrier(&pIVar19[2].monitor,pSVar14);
  pSVar14 = "Copy";
  if (*(uint *)&pIVar19[1].monitor < 3) goto label_1821d6de6;
  pIVar19[3].klass = (Il2CppClass *)"Copy";
  Il2CppCodeGenWriteBarrier(&pIVar19[3].klass,pSVar14);
  for (uVar24 = 0; (int)uVar24 < *(int *)&pIVar19[1].monitor; uVar24 = uVar24 + 1) {
    object_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_1);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,(MethodInfo *)0x0);
    if (object_00 == (UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o *)0x0) goto label_1821d6de0;
    (object_00->fields).CS___8__locals1 = object;
    Il2CppCodeGenWriteBarrier(&(object_00->fields).CS___8__locals1,object);
    if (*(uint *)&pIVar19[1].monitor <= uVar24) goto label_1821d6de6;
    pIVar5 = (&pIVar19[2].klass)[(int)uVar24];
    (object_00->fields).button = (System_String_o *)pIVar5;
    Il2CppCodeGenWriteBarrier(&(object_00->fields).button,pIVar5);
    if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_1821d6de0;
    pUVar20 = UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
    pSVar14 = (object_00->fields).button;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar14 = UI_UIManager__GetLocaleCommon(pSVar14,(MethodInfo *)0x0);
    pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,(Il2CppObject *)object_00,
               (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_1_Setup_b__27,
               (MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultButton(pUVar20,__this_00,pSVar14,0.0,0.0,pUVar15,(MethodInfo *)0x0);
  }
  pUVar18 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,10.0,0,(MethodInfo *)0x0);
  pIVar19 = SZArrayNew(TypeInfo_string_array,3);
  pSVar14 = "Rename";
  if (pIVar19 == (Il2CppObject *)0x0) goto label_1821d6de0;
  if (*(int *)&pIVar19[1].monitor == 0) goto label_1821d6de6;
  pIVar19[2].klass = (Il2CppClass *)"Rename";
  Il2CppCodeGenWriteBarrier(&pIVar19[2].klass,pSVar14);
  pSVar14 = "Import";
  if (*(uint *)&pIVar19[1].monitor < 2) goto label_1821d6de6;
  pIVar19[2].monitor = "Import";
  Il2CppCodeGenWriteBarrier(&pIVar19[2].monitor,pSVar14);
  pSVar14 = "Export";
  if (*(uint *)&pIVar19[1].monitor < 3) goto label_1821d6de6;
  pIVar19[3].klass = (Il2CppClass *)"Export";
  Il2CppCodeGenWriteBarrier(&pIVar19[3].klass,pSVar14);
  for (uVar24 = 0; (int)uVar24 < *(int *)&pIVar19[1].monitor; uVar24 = uVar24 + 1) {
    object_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_2);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_01,(MethodInfo *)0x0);
    if (object_01 == (UI_CharacterEditorCostumePanel___c__DisplayClass21_2_o *)0x0) goto label_1821d6de0;
    (object_01->fields).CS___8__locals2 = object;
    Il2CppCodeGenWriteBarrier(&(object_01->fields).CS___8__locals2,object);
    if (*(uint *)&pIVar19[1].monitor <= uVar24) goto label_1821d6de6;
    pIVar5 = (&pIVar19[2].klass)[(int)uVar24];
    (object_01->fields).button = (System_String_o *)pIVar5;
    Il2CppCodeGenWriteBarrier(&(object_01->fields).button,pIVar5);
    if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_1821d6de0;
    pUVar20 = UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
    pSVar14 = (object_01->fields).button;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar14 = UI_UIManager__GetLocaleCommon(pSVar14,(MethodInfo *)0x0);
    pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,(Il2CppObject *)object_01,
               (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_2_Setup_b__28,
               (MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultButton(pUVar20,__this_00,pSVar14,0.0,0.0,pUVar15,(MethodInfo *)0x0);
  }
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
  pSVar16 = (object->fields).set;
  if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) goto label_1821d6de0;
  pUVar20 = (__this->fields).SinglePanel;
  pSVar23 = (pSVar16->fields).Sex;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar21 = UI_UIManager__GetLocale
                      (category,pSVar13,"Sex","","",
                       (MethodInfo *)0x0);
  pSVar17 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  pSVar14 = "Male";
  if (pSVar17 == (System_String_array *)0x0) goto label_1821d6de0;
  if ((int)pSVar17->max_length == 0) goto label_1821d6de6;
  pSVar17->m_Items[0] = "Male";
  Il2CppCodeGenWriteBarrier(pSVar17->m_Items,pSVar14);
  pSVar14 = "Female";
  if ((uint)pSVar17->max_length < 2) goto label_1821d6de6;
  pSVar17->m_Items[1] = "Female";
  Il2CppCodeGenWriteBarrier(pSVar17->m_Items + 1,pSVar14);
  pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,(Il2CppObject *)object,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__4,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateDropdownSetting
            (pUVar20,__this_00,(Settings_BaseSetting_o *)pSVar23,pSVar21,pSVar17,"",170.0,
             40.0,300.0,(System_Nullable_float__o)0x0,pUVar15,(System_Int32_array *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
  }
  pSVar17 = UI_CharacterEditorCostumePanel__GetOptions
                      (__this,"Eye",TypeInfo_Characters_HumanSetup->static_fields->EyeCount,
                       false,(MethodInfo *)0x0);
  pSVar16 = (object->fields).set;
  if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) goto label_1821d6de0;
  pUVar20 = (__this->fields).SinglePanel;
  pSVar23 = (pSVar16->fields).Eye;
  pSVar14 = UI_UIManager__GetLocale
                      (category,pSVar13,"Eye","","",
                       (MethodInfo *)0x0);
  pSVar22 = UI_CharacterEditorCostumePanel__GetIcons(__this,pSVar17,(MethodInfo *)0x0);
  pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar6 == (UI_BaseMenu_o *)0x0) goto label_1821d6de0;
  pUVar7 = (pUVar6->fields).IconPickPopup;
  pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,(Il2CppObject *)object,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__5,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateIconPickSetting
            (pUVar20,__this_00,(Settings_BaseSetting_o *)pSVar23,pSVar14,pSVar17,pSVar22,pUVar7,
             "",(System_String_array *)0x0,170.0,40.0,pUVar15,(UI_TooltipPopup_o *)0x0,
             (System_Int32_array *)0x0,(MethodInfo *)0x0);
  pSVar17 = UI_CharacterEditorCostumePanel__GetOptions
                      (__this,"Face",TypeInfo_Characters_HumanSetup->static_fields->FaceCount,
                       true,(MethodInfo *)0x0);
  pSVar16 = (object->fields).set;
  if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) goto label_1821d6de0;
  pUVar20 = (__this->fields).SinglePanel;
  pSVar4 = (pSVar16->fields).Face;
  pSVar14 = UI_UIManager__GetLocale
                      (category,pSVar13,"Face","","",
                       (MethodInfo *)0x0);
  pSVar22 = UI_CharacterEditorCostumePanel__GetIcons(__this,pSVar17,(MethodInfo *)0x0);
  pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar6 == (UI_BaseMenu_o *)0x0) goto label_1821d6de0;
  pUVar7 = (pUVar6->fields).IconPickPopup;
  pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,(Il2CppObject *)object,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__6,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateIconPickSetting
            (pUVar20,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar14,pSVar17,pSVar22,pUVar7,
             "",(System_String_array *)0x0,170.0,40.0,pUVar15,(UI_TooltipPopup_o *)0x0,
             (System_Int32_array *)0x0,(MethodInfo *)0x0);
  pSVar17 = UI_CharacterEditorCostumePanel__GetOptions
                      (__this,"Glass",TypeInfo_Characters_HumanSetup->static_fields->GlassCount,
                       true,(MethodInfo *)0x0);
  pSVar16 = (object->fields).set;
  if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) goto label_1821d6de0;
  pUVar20 = (__this->fields).SinglePanel;
  pSVar4 = (pSVar16->fields).Glass;
  pSVar14 = UI_UIManager__GetLocale
                      (category,pSVar13,"Glass","","",
                       (MethodInfo *)0x0);
  pSVar22 = UI_CharacterEditorCostumePanel__GetIcons(__this,pSVar17,(MethodInfo *)0x0);
  pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar6 == (UI_BaseMenu_o *)0x0) goto label_1821d6de0;
  pUVar7 = (pUVar6->fields).IconPickPopup;
  pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,(Il2CppObject *)object,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__7,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateIconPickSetting
            (pUVar20,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar14,pSVar17,pSVar22,pUVar7,
             "",(System_String_array *)0x0,170.0,40.0,pUVar15,(UI_TooltipPopup_o *)0x0,
             (System_Int32_array *)0x0,(MethodInfo *)0x0);
  pSVar17 = UI_CharacterEditorCostumePanel__GetHairOptions(__this,(MethodInfo *)0x0);
  pSVar16 = (object->fields).set;
  if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) goto label_1821d6de0;
  pUVar20 = (__this->fields).SinglePanel;
  pSVar4 = (pSVar16->fields).Hair;
  pSVar14 = UI_UIManager__GetLocale
                      (category,pSVar13,"Hair","","",
                       (MethodInfo *)0x0);
  pSVar22 = UI_CharacterEditorCostumePanel__GetIcons(__this,pSVar17,(MethodInfo *)0x0);
  pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar6 == (UI_BaseMenu_o *)0x0) goto label_1821d6de0;
  pUVar7 = (pUVar6->fields).IconPickPopup;
  pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,(Il2CppObject *)object,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__8,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateIconPickSetting
            (pUVar20,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar14,pSVar17,pSVar22,pUVar7,
             "",(System_String_array *)0x0,170.0,40.0,pUVar15,(UI_TooltipPopup_o *)0x0,
             (System_Int32_array *)0x0,(MethodInfo *)0x0);
  bVar11 = PatreonEffects_PatreonHelper__LocalPlayerHasCharacterEffectAccess((MethodInfo *)0x0);
  if (bVar11) {
    pSVar16 = (object->fields).set;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) goto label_1821d6de0;
    pSVar4 = (pSVar16->fields).HairEffect;
    pUVar20 = (__this->fields).SinglePanel;
    if ((TypeInfo_PatreonEffects_CharacterEffectPresets->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_CharacterEffectPresets);
    }
    pSVar17 = TypeInfo_PatreonEffects_CharacterEffectPresets->static_fields->Options;
    pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__9,
               (MethodInfo *)0x0);
    UI_ElementFactory__CreateDropdownSetting
              (pUVar20,__this_00,(Settings_BaseSetting_o *)pSVar4,"Hair Effect (Patreon T2)",pSVar17,
               "",170.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar15,
               (System_Int32_array *)0x0,(MethodInfo *)0x0);
    pSVar16 = (object->fields).set;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) goto label_1821d6de0;
    pSVar8 = (pSVar16->fields).HairEffectColor;
    pUVar20 = (__this->fields).SinglePanel;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar6 == (UI_BaseMenu_o *)0x0) goto label_1821d6de0;
    pUVar9 = (pUVar6->fields).ColorPickPopup;
    pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__10,
               (MethodInfo *)0x0);
    UI_ElementFactory__CreateColorSetting
              (pUVar20,__this_00,(Settings_BaseSetting_o *)pSVar8,"Hair Effect Color (Patreon T2)",pUVar9,
               "",90.0,30.0,pUVar15,(MethodInfo *)0x0);
  }
  pSVar17 = UI_CharacterEditorCostumePanel__GetCostumeOptions(__this,(object->fields).set,(MethodInfo *)0x0);
  pSVar16 = (object->fields).set;
  if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) goto label_1821d6de0;
  pUVar20 = (__this->fields).SinglePanel;
  pSVar23 = (pSVar16->fields).Costume;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar14 = UI_UIManager__GetLocale
                      (category,pSVar13,"Costume","","",
                       (MethodInfo *)0x0);
  pSVar22 = UI_CharacterEditorCostumePanel__GetIcons(__this,pSVar17,(MethodInfo *)0x0);
  pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar6 == (UI_BaseMenu_o *)0x0) goto label_1821d6de0;
  pUVar7 = (pUVar6->fields).IconPickPopup;
  pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,(Il2CppObject *)object,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__11,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateIconPickSetting
            (pUVar20,__this_00,(Settings_BaseSetting_o *)pSVar23,pSVar14,pSVar17,pSVar22,pUVar7,
             "",(System_String_array *)0x0,170.0,40.0,pUVar15,(UI_TooltipPopup_o *)0x0,
             (System_Int32_array *)0x0,(MethodInfo *)0x0);
  pSVar16 = (object->fields).set;
  if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) goto label_1821d6de0;
  pUVar20 = (__this->fields).SinglePanel;
  pSVar23 = (pSVar16->fields).Boots;
  pSVar14 = UI_UIManager__GetLocale
                      (category,pSVar13,"Boots","","",
                       (MethodInfo *)0x0);
  pSVar17 = UI_CharacterEditorCostumePanel__GetOptions(__this,"Boots",2,false,(MethodInfo *)0x0)
  ;
  pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,(Il2CppObject *)object,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__12,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateDropdownSetting
            (pUVar20,__this_00,(Settings_BaseSetting_o *)pSVar23,pSVar14,pSVar17,"",170.0,
             40.0,300.0,(System_Nullable_float__o)0x0,pUVar15,(System_Int32_array *)0x0,(MethodInfo *)0x0);
  if (bVar11) {
    pSVar16 = (object->fields).set;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) goto label_1821d6de0;
    pSVar4 = (pSVar16->fields).BladeEffect;
    pUVar20 = (__this->fields).SinglePanel;
    if ((TypeInfo_PatreonEffects_CharacterEffectPresets->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_CharacterEffectPresets);
    }
    pSVar17 = TypeInfo_PatreonEffects_CharacterEffectPresets->static_fields->Options;
    pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__13,
               (MethodInfo *)0x0);
    UI_ElementFactory__CreateDropdownSetting
              (pUVar20,__this_00,(Settings_BaseSetting_o *)pSVar4,"Blade Effect (Patreon T2)",pSVar17,
               "",170.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar15,
               (System_Int32_array *)0x0,(MethodInfo *)0x0);
    pSVar16 = (object->fields).set;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) goto label_1821d6de0;
    pSVar8 = (pSVar16->fields).BladeEffectColor;
    pUVar20 = (__this->fields).SinglePanel;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar6 == (UI_BaseMenu_o *)0x0) goto label_1821d6de0;
    pUVar9 = (pUVar6->fields).ColorPickPopup;
    pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__14,
               (MethodInfo *)0x0);
    UI_ElementFactory__CreateColorSetting
              (pUVar20,__this_00,(Settings_BaseSetting_o *)pSVar8,"Blade Effect Color (Patreon T2)",pUVar9,
               "",90.0,30.0,pUVar15,(MethodInfo *)0x0);
  }
  pSVar16 = (object->fields).set;
  if ((pSVar16 == (Settings_HumanCustomSet_o *)0x0) ||
     (pSVar23 = (pSVar16->fields).Cape, pSVar23 == (Settings_IntSetting_o *)0x0)) goto label_1821d6de0;
  if ((pSVar23->fields)._value == 2) {
    pSVar10 = (pSVar16->fields).HoodUp;
    if (pSVar10 == (Settings_BoolSetting_o *)0x0) goto label_1821d6de0;
    if ((pSVar10->fields)._value == false) goto label_1821d60d2;
  }
  else {
label_1821d60d2:
    local_b8 = (((((object->fields).set)->fields).Cape)->fields)._value;
  }
  pSVar23 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar23,local_b8,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (object->fields).capeOption = pSVar23;
  Il2CppCodeGenWriteBarrier(&(object->fields).capeOption,pSVar23);
  pSVar23 = (object->fields).capeOption;
  pUVar20 = (__this->fields).SinglePanel;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar21 = UI_UIManager__GetLocale
                      (category,pSVar13,"Cape","","",
                       (MethodInfo *)0x0);
  pSVar17 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  pSVar14 = "No cape";
  if (pSVar17 != (System_String_array *)0x0) {
    if ((int)pSVar17->max_length != 0) {
      pSVar17->m_Items[0] = "No cape";
      Il2CppCodeGenWriteBarrier(pSVar17->m_Items,pSVar14);
      pSVar14 = "Cape";
      if (1 < (uint)pSVar17->max_length) {
        pSVar17->m_Items[1] = "Cape";
        Il2CppCodeGenWriteBarrier(pSVar17->m_Items + 1,pSVar14);
        pSVar14 = "Cloak";
        if (2 < (uint)pSVar17->max_length) {
          pSVar17->m_Items[2] = "Cloak";
          Il2CppCodeGenWriteBarrier(pSVar17->m_Items + 2,pSVar14);
          pSVar14 = UI_UIManager__GetLocale
                              (category,pSVar13,"Hood","",
                               "",(MethodInfo *)0x0);
          if (3 < (uint)pSVar17->max_length) {
            pSVar17->m_Items[3] = pSVar14;
            Il2CppCodeGenWriteBarrier(pSVar17->m_Items + 3,pSVar14);
            pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,(Il2CppObject *)object,
                       (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__15,
                       (MethodInfo *)0x0);
            UI_ElementFactory__CreateDropdownSetting
                      (pUVar20,__this_00,(Settings_BaseSetting_o *)pSVar23,pSVar21,pSVar17,
                       "",170.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar15,
                       (System_Int32_array *)0x0,(MethodInfo *)0x0);
            pSVar16 = (object->fields).set;
            if (pSVar16 != (Settings_HumanCustomSet_o *)0x0) {
              pUVar20 = (__this->fields).SinglePanel;
              pSVar23 = (pSVar16->fields).Logo;
              pSVar14 = UI_UIManager__GetLocale
                                  (category,pSVar13,"Logo","",
                                   "",(MethodInfo *)0x0);
              pSVar17 = UI_CharacterEditorCostumePanel__GetOptions
                                  (__this,"Logo",4,false,(MethodInfo *)0x0);
              pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,(Il2CppObject *)object,
                         (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__16,
                         (MethodInfo *)0x0);
              UI_ElementFactory__CreateDropdownSetting
                        (pUVar20,__this_00,(Settings_BaseSetting_o *)pSVar23,pSVar14,pSVar17,
                         "",170.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar15,
                         (System_Int32_array *)0x0,(MethodInfo *)0x0);
              if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
              }
              pSVar17 = UI_CharacterEditorCostumePanel__GetOptions
                                  (__this,"Hat",
                                   TypeInfo_Characters_HumanSetup->static_fields->HatCount,true,
                                   (MethodInfo *)0x0);
              pSVar16 = (object->fields).set;
              if (pSVar16 != (Settings_HumanCustomSet_o *)0x0) {
                pUVar20 = (__this->fields).SinglePanel;
                pSVar4 = (pSVar16->fields).Hat;
                pSVar14 = UI_UIManager__GetLocale
                                    (category,pSVar13,"Hat","",
                                     "",(MethodInfo *)0x0);
                pSVar22 = UI_CharacterEditorCostumePanel__GetIcons(__this,pSVar17,(MethodInfo *)0x0);
                pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                if (pUVar6 != (UI_BaseMenu_o *)0x0) {
                  pUVar7 = (pUVar6->fields).IconPickPopup;
                  pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                  UnityEngine_Events_UnityAction___ctor
                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,(Il2CppObject *)object,
                             (intptr_t)
                             MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__17,
                             (MethodInfo *)0x0);
                  UI_ElementFactory__CreateIconPickSetting
                            (pUVar20,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar14,pSVar17,pSVar22,pUVar7
                             ,"",(System_String_array *)0x0,170.0,40.0,pUVar15,
                             (UI_TooltipPopup_o *)0x0,(System_Int32_array *)0x0,(MethodInfo *)0x0);
                  pSVar17 = UI_CharacterEditorCostumePanel__GetOptions
                                      (__this,"Head",
                                       TypeInfo_Characters_HumanSetup->static_fields->HeadCount,true,
                                       (MethodInfo *)0x0);
                  pSVar16 = (object->fields).set;
                  if (pSVar16 != (Settings_HumanCustomSet_o *)0x0) {
                    pUVar20 = (__this->fields).SinglePanel;
                    pSVar4 = (pSVar16->fields).Head;
                    pSVar14 = UI_UIManager__GetLocale
                                        (category,pSVar13,"Head","",
                                         "",(MethodInfo *)0x0);
                    pSVar22 = UI_CharacterEditorCostumePanel__GetIcons(__this,pSVar17,(MethodInfo *)0x0);
                    pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                    if (pUVar6 != (UI_BaseMenu_o *)0x0) {
                      pUVar7 = (pUVar6->fields).IconPickPopup;
                      pUVar15 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                      UnityEngine_Events_UnityAction___ctor
                                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,
                                 (Il2CppObject *)object,
                                 (intptr_t)
                                 MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__18,
                                 (MethodInfo *)0x0);
                      UI_ElementFactory__CreateIconPickSetting
                                (pUVar20,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar14,pSVar17,pSVar22,
                                 pUVar7,"",(System_String_array *)0x0,170.0,40.0,pUVar15,
                                 (UI_TooltipPopup_o *)0x0,(System_Int32_array *)0x0,(MethodInfo *)0x0);
                      pSVar17 = UI_CharacterEditorCostumePanel__GetOptions
                                          (__this,"Back",
                                           TypeInfo_Characters_HumanSetup->static_fields->BackCount,true,
                                           (MethodInfo *)0x0);
                      pSVar16 = (object->fields).set;
                      if (pSVar16 != (Settings_HumanCustomSet_o *)0x0) {
                        pUVar20 = (__this->fields).SinglePanel;
                        pSVar4 = (pSVar16->fields).Back;
                        pSVar14 = UI_UIManager__GetLocale
                                            (category,pSVar13,"Back","",
                                             "",(MethodInfo *)0x0);
                        pSVar22 = UI_CharacterEditorCostumePanel__GetIcons(__this,pSVar17,(MethodInfo *)0x0);
                        pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                        if (pUVar6 != (UI_BaseMenu_o *)0x0) {
                          pUVar7 = (pUVar6->fields).IconPickPopup;
                          pUVar15 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                          UnityEngine_Events_UnityAction___ctor
                                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,
                                     (Il2CppObject *)object,
                                     (intptr_t)
                                     MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__19
                                     ,(MethodInfo *)0x0);
                          UI_ElementFactory__CreateIconPickSetting
                                    (pUVar20,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar14,pSVar17,
                                     pSVar22,pUVar7,"",(System_String_array *)0x0,170.0,
                                     40.0,pUVar15,(UI_TooltipPopup_o *)0x0,(System_Int32_array *)0x0,
                                     (MethodInfo *)0x0);
                          pSVar16 = (object->fields).set;
                          if (pSVar16 != (Settings_HumanCustomSet_o *)0x0) {
                            pSVar8 = (pSVar16->fields).SkinColor;
                            pUVar20 = (__this->fields).SinglePanel;
                            pSVar14 = UI_UIManager__GetLocale
                                                (category,pSVar13,"SkinColor","",
                                                 "",(MethodInfo *)0x0);
                            pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                            if (pUVar6 != (UI_BaseMenu_o *)0x0) {
                              pUVar9 = (pUVar6->fields).ColorPickPopup;
                              pUVar15 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                              UnityEngine_Events_UnityAction___ctor
                                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,
                                         (Il2CppObject *)object,
                                         (intptr_t)
                                         MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__20
                                         ,(MethodInfo *)0x0);
                              UI_ElementFactory__CreateColorSetting
                                        (pUVar20,__this_00,(Settings_BaseSetting_o *)pSVar8,pSVar14,pUVar9,
                                         "",90.0,30.0,pUVar15,(MethodInfo *)0x0);
                              pSVar16 = (object->fields).set;
                              if (pSVar16 != (Settings_HumanCustomSet_o *)0x0) {
                                pSVar8 = (pSVar16->fields).HairColor;
                                pUVar20 = (__this->fields).SinglePanel;
                                pSVar14 = UI_UIManager__GetLocale
                                                    (category,pSVar13,"HairColor",
                                                     "","",
                                                     (MethodInfo *)0x0);
                                pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                if (pUVar6 != (UI_BaseMenu_o *)0x0) {
                                  pUVar9 = (pUVar6->fields).ColorPickPopup;
                                  pUVar15 = il2cpp_codegen_object_new
                                                      ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction)
                                  ;
                                  UnityEngine_Events_UnityAction___ctor
                                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,
                                             (Il2CppObject *)object,
                                             (intptr_t)
                                             MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__21
                                             ,(MethodInfo *)0x0);
                                  UI_ElementFactory__CreateColorSetting
                                            (pUVar20,__this_00,(Settings_BaseSetting_o *)pSVar8,pSVar14,pUVar9
                                             ,"",90.0,30.0,pUVar15,(MethodInfo *)0x0);
                                  pSVar16 = (object->fields).set;
                                  if (pSVar16 != (Settings_HumanCustomSet_o *)0x0) {
                                    pSVar8 = (pSVar16->fields).ShirtColor;
                                    pUVar20 = (__this->fields).SinglePanel;
                                    pSVar14 = UI_UIManager__GetLocale
                                                        (category,pSVar13,"ShirtColor",
                                                         "","",
                                                         (MethodInfo *)0x0);
                                    pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                    if (pUVar6 != (UI_BaseMenu_o *)0x0) {
                                      pUVar9 = (pUVar6->fields).ColorPickPopup;
                                      pUVar15 = il2cpp_codegen_object_new
                                                          ((Il2CppClass *)
                                                           TypeInfo_UnityEngine_Events_UnityAction);
                                      UnityEngine_Events_UnityAction___ctor
                                                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,
                                                 (Il2CppObject *)object,
                                                 (intptr_t)
                                                 MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__22
                                                 ,(MethodInfo *)0x0);
                                      UI_ElementFactory__CreateColorSetting
                                                (pUVar20,__this_00,(Settings_BaseSetting_o *)pSVar8,pSVar14,
                                                 pUVar9,"",90.0,30.0,pUVar15,
                                                 (MethodInfo *)0x0);
                                      pSVar16 = (object->fields).set;
                                      if (pSVar16 != (Settings_HumanCustomSet_o *)0x0) {
                                        pSVar8 = (pSVar16->fields).StrapsColor;
                                        pUVar20 = (__this->fields).SinglePanel;
                                        pSVar14 = UI_UIManager__GetLocale
                                                            (category,pSVar13,"StrapsColor",
                                                             "","",
                                                             (MethodInfo *)0x0);
                                        pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                        if (pUVar6 != (UI_BaseMenu_o *)0x0) {
                                          pUVar9 = (pUVar6->fields).ColorPickPopup;
                                          pUVar15 = il2cpp_codegen_object_new
                                                              ((Il2CppClass *)
                                                               TypeInfo_UnityEngine_Events_UnityAction);
                                          UnityEngine_Events_UnityAction___ctor
                                                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15,
                                                     (Il2CppObject *)object,
                                                     (intptr_t)
                                                     MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__23
                                                     ,(MethodInfo *)0x0);
                                          UI_ElementFactory__CreateColorSetting
                                                    (pUVar20,__this_00,(Settings_BaseSetting_o *)pSVar8,
                                                     pSVar14,pUVar9,"",90.0,30.0,pUVar15,
                                                     (MethodInfo *)0x0);
                                          pSVar16 = (object->fields).set;
                                          if (pSVar16 != (Settings_HumanCustomSet_o *)0x0) {
                                            pSVar8 = (pSVar16->fields).PantsColor;
                                            pUVar20 = (__this->fields).SinglePanel;
                                            pSVar14 = UI_UIManager__GetLocale
                                                                (category,pSVar13,"PantsColor",
                                                                 "","",
                                                                 (MethodInfo *)0x0);
                                            pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                            if (pUVar6 != (UI_BaseMenu_o *)0x0) {
                                              pUVar9 = (pUVar6->fields).ColorPickPopup;
                                              pUVar15 = il2cpp_codegen_object_new
                                                                  ((Il2CppClass *)
                                                                   TypeInfo_UnityEngine_Events_UnityAction);
                                              UnityEngine_Events_UnityAction___ctor
                                                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)
                                                         pUVar15,(Il2CppObject *)object,
                                                         (intptr_t)
                                                                                                                  
                                                       MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__24
                                                       ,(MethodInfo *)0x0);
                                              UI_ElementFactory__CreateColorSetting
                                                        (pUVar20,__this_00,(Settings_BaseSetting_o *)pSVar8,
                                                         pSVar14,pUVar9,"",90.0,30.0,
                                                         pUVar15,(MethodInfo *)0x0);
                                              pSVar16 = (object->fields).set;
                                              if (pSVar16 != (Settings_HumanCustomSet_o *)0x0) {
                                                pSVar8 = (pSVar16->fields).JacketColor;
                                                pUVar20 = (__this->fields).SinglePanel;
                                                pSVar14 = UI_UIManager__GetLocale
                                                                    (category,pSVar13,"JacketColor",
                                                                     "",
                                                                     "",(MethodInfo *)0x0);
                                                pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                                if (pUVar6 != (UI_BaseMenu_o *)0x0) {
                                                  pUVar9 = (pUVar6->fields).ColorPickPopup;
                                                  pUVar15 = il2cpp_codegen_object_new
                                                                      ((Il2CppClass *)
                                                                       TypeInfo_UnityEngine_Events_UnityAction
                                                                      );
                                                  UnityEngine_Events_UnityAction___ctor
                                                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)
                                                             pUVar15,(Il2CppObject *)object,
                                                             (intptr_t)
                                                                                                                          
                                                       MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__25
                                                       ,(MethodInfo *)0x0);
                                                  UI_ElementFactory__CreateColorSetting
                                                            (pUVar20,__this_00,
                                                             (Settings_BaseSetting_o *)pSVar8,pSVar14,pUVar9,
                                                             "",90.0,30.0,pUVar15,
                                                             (MethodInfo *)0x0);
                                                  pSVar16 = (object->fields).set;
                                                  if (pSVar16 != (Settings_HumanCustomSet_o *)0x0) {
                                                    pSVar8 = (pSVar16->fields).BootsColor;
                                                    pUVar20 = (__this->fields).SinglePanel;
                                                    pSVar13 = UI_UIManager__GetLocale
                                                                        (category,pSVar13,
                                                                         "BootsColor",
                                                                         "",
                                                                         "",
                                                                         (MethodInfo *)0x0);
                                                    pUVar6 = TypeInfo_UI_UIManager->static_fields->CurrentMenu
                                                    ;
                                                    if (pUVar6 != (UI_BaseMenu_o *)0x0) {
                                                      pUVar9 = (pUVar6->fields).ColorPickPopup;
                                                      pUVar15 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                                                                                                      
                                                       TypeInfo_UnityEngine_Events_UnityAction);
                                                      UnityEngine_Font_FontTextureRebuildCallback___ctor
                                                                ((
                                                       UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar15
                                                       ,(Il2CppObject *)object,
                                                       (intptr_t)
                                                       MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass21_0_Setup_b__26
                                                       ,(MethodInfo *)0x0);
                                                      UI_ElementFactory__CreateColorSetting
                                                                (pUVar20,__this_00,
                                                                 (Settings_BaseSetting_o *)pSVar8,pSVar13,
                                                                 pUVar9,"",90.0,30.0,
                                                                 pUVar15,(MethodInfo *)0x0);
                                                      (__this->fields)._isRebuildingPanel = false;
                                                      return;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto label_1821d6de0;
          }
        }
      }
    }
label_1821d6de6:
    ThrowIndexOutOfRangeException();
  }
label_1821d6de0:
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel$$GetOptions
// il2cpp: System_String_array* UI_CharacterEditorCostumePanel__GetOptions (UI_CharacterEditorCostumePanel_o* __this, System_String_o* prefix, int32_t options, bool includeNone, const MethodInfo* method);
// 0x1821d28b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821d2977: nop word ptr [rax + rax]
// asm:   0x1821d2a10: jmp 0x1821d2a17

System_String_array *
UI_CharacterEditorCostumePanel__GetOptions
          (UI_CharacterEditorCostumePanel_o *__this,System_String_o *prefix,int32_t options,bool includeNone,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar5;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar6;
  int32_t local_res20 [2];
  
  if (Il2CppMethodInitialized_184346f7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_184346f7b = '\x01';
  }
  local_res20[0] = 0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (includeNone) {
    System_String__Concat_1969e50(prefix,"None",(MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_1821d2a2f;
    il2cpp_runtime_helper_180012890(__this_00);
  }
  local_res20[0] = 0;
  if (options < 1) {
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
label_1821d2a2f:
      ThrowNullReferenceException();
    }
  }
  else {
    do {
      pSVar5 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_1969e50(prefix,pSVar5,(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_1821d2a2f;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 == (System_String_array *)0x0) goto label_1821d2a2f;
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar2] = pSVar5;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar5);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      local_res20[0] = local_res20[0] + 1;
    } while (local_res20[0] < options);
  }
  pUVar6 = System_Collections_Generic_List_object___ToArray
                     ((System_Collections_Generic_List_T__o *)__this_00,
                      (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
  return (System_String_array *)pUVar6;
}


// UI.CharacterEditorCostumePanel$$GetHairOptions
// il2cpp: System_String_array* UI_CharacterEditorCostumePanel__GetHairOptions (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x1821d2490

System_String_array *
UI_CharacterEditorCostumePanel__GetHairOptions(UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar5;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar6;
  int iVar7;
  int32_t local_res18 [2];
  int32_t local_res20 [2];
  
  if (Il2CppMethodInitialized_184346f7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"HairF");
    il2cpp_codegen_initialize_runtime_metadata(&"HairM");
    Il2CppMethodInitialized_184346f7c = '\x01';
  }
  local_res18[0] = 0;
  local_res20[0] = 0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  iVar7 = 0;
  while( true ) {
    while( true ) {
      local_res18[0] = iVar7;
      if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
      }
      if (TypeInfo_Characters_HumanSetup->static_fields->HairMCount <= iVar7) {
        iVar7 = 0;
        goto label_1821d260c;
      }
      pSVar5 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_1969e50("HairM",pSVar5,(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_1821d26fc;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 == (System_String_array *)0x0) goto label_1821d26fc;
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) break;
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      iVar7 = local_res18[0] + 1;
    }
    (__this_00->fields)._size = uVar2 + 1;
    if ((uint)pSVar3->max_length <= uVar2) break;
    pSVar3->m_Items[(int)uVar2] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar5);
    iVar7 = local_res18[0] + 1;
  }
label_1821d2702:
  ThrowIndexOutOfRangeException();
label_1821d260c:
  local_res20[0] = iVar7;
  if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
  }
  if (TypeInfo_Characters_HumanSetup->static_fields->HairFCount <= iVar7) {
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      pUVar6 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_T__o *)__this_00,
                          (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return (System_String_array *)pUVar6;
    }
label_1821d26fc:
    ThrowNullReferenceException();
  }
  pSVar5 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
  pSVar5 = System_String__Concat_1969e50("HairF",pSVar5,(MethodInfo *)0x0);
  pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_1821d26fc;
  piVar1 = &(__this_00->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar3 = (__this_00->fields)._items;
  if (pSVar3 == (System_String_array *)0x0) goto label_1821d26fc;
  uVar2 = (__this_00->fields)._size;
  if ((uint)pSVar3->max_length <= uVar2) {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
               (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    iVar7 = local_res20[0] + 1;
    goto label_1821d260c;
  }
  (__this_00->fields)._size = uVar2 + 1;
  if ((uint)pSVar3->max_length <= uVar2) goto label_1821d2702;
  pSVar3->m_Items[(int)uVar2] = pSVar5;
  Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar5);
  iVar7 = local_res20[0] + 1;
  goto label_1821d260c;
}


// UI.CharacterEditorCostumePanel$$GetCostumeOptions
// il2cpp: System_String_array* UI_CharacterEditorCostumePanel__GetCostumeOptions (UI_CharacterEditorCostumePanel_o* __this, Settings_HumanCustomSet_o* set, const MethodInfo* method);
// 0x1821d21e0

System_String_array *
UI_CharacterEditorCostumePanel__GetCostumeOptions
          (UI_CharacterEditorCostumePanel_o *__this,Settings_HumanCustomSet_o *set,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Settings_IntSetting_o *pSVar3;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar6;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar7;
  int iVar8;
  int32_t local_res10 [4];
  int32_t local_res20 [2];
  
  if (Il2CppMethodInitialized_184346f7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"CostumeM");
    il2cpp_codegen_initialize_runtime_metadata(&"CostumeF");
    Il2CppMethodInitialized_184346f7d = '\x01';
  }
  local_res20[0] = 0;
  local_res10[0] = 0;
  if ((set != (Settings_HumanCustomSet_o *)0x0) &&
     (pSVar3 = (set->fields).Sex, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    iVar8 = (pSVar3->fields)._value;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    if (iVar8 == 0) {
      iVar8 = 0;
      while( true ) {
        while( true ) {
          local_res20[0] = iVar8;
          if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
          }
          if (TypeInfo_Characters_HumanSetup->static_fields->CostumeMCount <= iVar8) goto label_1821d2465;
          pSVar6 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
          pSVar6 = System_String__Concat_1969e50("CostumeM",pSVar6,(MethodInfo *)0x0);
          pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_1821d2484;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_00->fields)._items;
          if (pSVar4 == (System_String_array *)0x0) goto label_1821d2484;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) break;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar6,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
          iVar8 = local_res20[0] + 1;
        }
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pSVar4->max_length <= uVar2) break;
        pSVar4->m_Items[(int)uVar2] = pSVar6;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,pSVar6);
        iVar8 = local_res20[0] + 1;
      }
    }
    else {
      iVar8 = 0;
      while( true ) {
        while( true ) {
          local_res10[0] = iVar8;
          if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
          }
          if (TypeInfo_Characters_HumanSetup->static_fields->CostumeFCount <= iVar8) goto label_1821d2465;
          pSVar6 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
          pSVar6 = System_String__Concat_1969e50("CostumeF",pSVar6,(MethodInfo *)0x0);
          pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_1821d2484;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_00->fields)._items;
          if (pSVar4 == (System_String_array *)0x0) goto label_1821d2484;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) break;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar6,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
          iVar8 = local_res10[0] + 1;
        }
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pSVar4->max_length <= uVar2) break;
        pSVar4->m_Items[(int)uVar2] = pSVar6;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,pSVar6);
        iVar8 = local_res10[0] + 1;
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1821d2484:
  ThrowNullReferenceException();
label_1821d2465:
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    pUVar7 = System_Collections_Generic_List_object___ToArray
                       ((System_Collections_Generic_List_T__o *)__this_00,
                        (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    return (System_String_array *)pUVar7;
  }
  goto label_1821d2484;
}


// UI.CharacterEditorCostumePanel$$GetIcons
// il2cpp: System_String_array* UI_CharacterEditorCostumePanel__GetIcons (UI_CharacterEditorCostumePanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x1821d2710

System_String_array *
UI_CharacterEditorCostumePanel__GetIcons
          (UI_CharacterEditorCostumePanel_o *__this,System_String_array *options,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar5;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar6;
  uint uVar7;
  
  if (Il2CppMethodInitialized_184346f7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/Human/Previews/");
    Il2CppMethodInitialized_184346f7e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (options != (System_String_array *)0x0) {
    uVar7 = 0;
    while ((int)uVar7 < (int)options->max_length) {
      if ((uint)options->max_length <= uVar7) {
label_1821d28a5:
        ThrowIndexOutOfRangeException();
      }
      pSVar5 = options->m_Items[(int)uVar7];
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar5 = System_String__Concat_1969b70
                         (TypeInfo_Utility_ResourcePaths->static_fields->Characters,"/Human/Previews/",
                          pSVar5,(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_1821d289f;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 == (System_String_array *)0x0) goto label_1821d289f;
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) goto label_1821d28a5;
        pSVar3->m_Items[(int)uVar2] = pSVar5;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar5);
        uVar7 = uVar7 + 1;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        uVar7 = uVar7 + 1;
      }
    }
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      pUVar6 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_T__o *)__this_00,
                          (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return (System_String_array *)pUVar6;
    }
  }
label_1821d289f:
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel$$OnSexChanged
// il2cpp: void UI_CharacterEditorCostumePanel__OnSexChanged (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x1821d4550

void UI_CharacterEditorCostumePanel__OnSexChanged(UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_01;
  System_Collections_Generic_HashSet_string__o *__this_02;
  UI_CharacterEditorMenu_o *pUVar3;
  GameManagers_CharacterEditorGameManager_o *pGVar4;
  Characters_DummyHuman_o *__this_03;
  bool bVar5;
  Settings_BaseSetSetting_o *pSVar6;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *routine;
  System_String_o *value;
  undefined8 uVar7;
  System_Type_o *pSVar8;
  
  if (Il2CppMethodInitialized_184346f7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"HairM0");
    il2cpp_codegen_initialize_runtime_metadata(&"HairF0");
    Il2CppMethodInitialized_184346f7f = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if (((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
      (__this_00 = (pSVar2->fields).CustomSets,
      __this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) &&
     (pSVar6 = Settings_SetSettingsContainer_object___GetSelectedSet
                         ((Settings_SetSettingsContainer_T__o *)__this_00,
                          (MethodInfo_C8EAF0 *)
                          MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet),
     pSVar6 != (Settings_BaseSetSetting_o *)0x0)) {
    bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
    if (((pSVar6->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar6->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar6,TypeInfo_Settings_HumanCustomSet);
    }
    if (((*(uint64_t *)((char *)pSVar6 + 0x48)) != (Settings_BaseSetSetting_c *)0x0) &&
       (__this_01 = (*(uint64_t *)((char *)pSVar6 + 0x68)),
       __this_01 != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0)) {
      value = "HairF0";
      if (*(int *)((longlong)&(((*(Il2CppClass **)((char *)pSVar6 + 0x48)))->_1).namespaze + 4) == 0) {
        value = "HairM0";
      }
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)value,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      __this_02 = (*(uint64_t *)((char *)pSVar6 + 0x70));
      if (__this_02 != (System_Collections_Generic_HashSet_string__o *)0x0) {
        uVar7 = 0;
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)__this_02,0,
                   (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        pUVar3 = (__this->fields)._menu;
        if (pUVar3 != (UI_CharacterEditorMenu_o *)0x0) {
          pSVar8 = (System_Type_o *)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          (*(pUVar3->klass->vtable)._8_RebuildPanels.methodPtr)
                    (pUVar3,pSVar8,(pUVar3->klass->vtable)._8_RebuildPanels.method);
          pUVar3 = (__this->fields)._menu;
          if (pUVar3 != (UI_CharacterEditorMenu_o *)0x0) {
            (*(pUVar3->klass->vtable)._9_ResetCharacter.methodPtr)
                      (pUVar3,(System_Type_o *)CONCAT71((int7)((ulonglong)pSVar8 >> 8),1),
                       (pUVar3->klass->vtable)._9_ResetCharacter.method);
            if (Il2CppMethodInitialized_184346ff7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
              Il2CppMethodInitialized_184346ff7 = '\x01';
            }
            if (TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview == false) {
              if (Il2CppMethodInitialized_184346ff8 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
                Il2CppMethodInitialized_184346ff8 = '\x01';
              }
              if (TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview == false)
              {
                return;
              }
            }
            pUVar3 = (__this->fields)._menu;
            if ((pUVar3 != (UI_CharacterEditorMenu_o *)0x0) &&
               (pGVar4 = (pUVar3->fields)._gameManager,
               pGVar4 != (GameManagers_CharacterEditorGameManager_o *)0x0)) {
              __this_03 = (pGVar4->fields).Human;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar5 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar5) {
                if (__this_03 == (Characters_DummyHuman_o *)0x0) goto label_1821d47f7;
                Characters_DummyHuman__LoadSkin(__this_03,(MethodInfo *)0x0);
              }
              if (Il2CppMethodInitialized_184346f82 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterReset_d__29);
                Il2CppMethodInitialized_184346f82 = '\x01';
              }
              routine = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterReset_d__29);
              System_Object___ctor
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,
                         (MethodInfo *)0x0);
              (routine->fields).__1__state = 0;
              UnityEngine_MonoBehaviour__StartCoroutine_Auto
                        ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_1821d47f7:
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel$$OnCustomSetSelected
// il2cpp: void UI_CharacterEditorCostumePanel__OnCustomSetSelected (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x1821d4000
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821d415c: mov ebx, esi
// asm:   0x1821d415e: jmp 0x1821d4199
// asm:   0x1821d4306: mov rbx, rsi
// asm:   0x1821d4309: jmp 0x1821d433e

void UI_CharacterEditorCostumePanel__OnCustomSetSelected
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  Settings_StringSetting_o *pSVar3;
  System_String_o *b;
  UI_CharacterEditorHumanMenu_o *pUVar4;
  UI_PresetSkinEditPopup_o *pUVar5;
  UI_CharacterEditorMenu_o *pUVar6;
  System_String_o *value;
  bool bVar7;
  bool bVar8;
  Settings_BaseSetSetting_o *pSVar9;
  UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *routine;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *pUVar10;
  char cVar11;
  UI_CharacterEditorHumanMenu_o *x;
  UI_CharacterEditorHumanMenu_o *humanMenu;
  
  if (Il2CppMethodInitialized_184346f80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorHumanMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184346f80 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if (((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
      (__this_00 = (pSVar2->fields).CustomSets,
      __this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) &&
     (pSVar9 = Settings_SetSettingsContainer_object___GetSelectedSet
                         ((Settings_SetSettingsContainer_T__o *)__this_00,
                          (MethodInfo_C8EAF0 *)
                          MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet),
     pSVar9 != (Settings_BaseSetSetting_o *)0x0)) {
    bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
    if (((pSVar9->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar9->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar9,TypeInfo_Settings_HumanCustomSet);
    }
    pSVar3 = (pSVar9->fields).UniqueId;
    if (pSVar3 != (Settings_StringSetting_o *)0x0) {
      b = (pSVar3->fields)._value;
      bVar7 = System_String__op_Equality((__this->fields)._previousProfileId,b,(MethodInfo *)0x0);
      if ((bVar7) && ((__this->fields)._previousProfileId != (System_String_o *)0x0)) {
        return;
      }
      pUVar4 = (UI_CharacterEditorHumanMenu_o *)(__this->fields)._menu;
      humanMenu = (UI_CharacterEditorHumanMenu_o *)0x0;
      bVar7 = true;
      x = humanMenu;
      if (pUVar4 != (UI_CharacterEditorHumanMenu_o *)0x0) {
        bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
        if (((((GameManagers_BaseGameManager_c *)pUVar4->klass)->_2).typeHierarchyDepth < bVar1) ||
           (bVar8 = true,
           (((GameManagers_BaseGameManager_c *)pUVar4->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
           (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
          bVar8 = false;
        }
        x = (UI_CharacterEditorHumanMenu_o *)0x0;
        if (bVar8) {
          x = pUVar4;
        }
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar8) {
        if (x == (UI_CharacterEditorHumanMenu_o *)0x0) goto label_1821d452f;
        pUVar5 = (x->fields)._editPresetSkinPopup;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar8 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar8) {
          pUVar5 = (x->fields)._editPresetSkinPopup;
          if (pUVar5 == (UI_PresetSkinEditPopup_o *)0x0) goto label_1821d452f;
          if ((pUVar5->fields).IsActive != false) {
            UI_PresetSkinEditPopup__OnCancelClick(pUVar5,(MethodInfo *)0x0);
          }
        }
      }
      pUVar6 = (__this->fields)._menu;
      if (pUVar6 != (UI_CharacterEditorMenu_o *)0x0) {
        (*(pUVar6->klass->vtable)._8_RebuildPanels.methodPtr)
                  (pUVar6,(System_Type_o *)0x1,(pUVar6->klass->vtable)._8_RebuildPanels.method);
        pUVar6 = (__this->fields)._menu;
        if (pUVar6 != (UI_CharacterEditorMenu_o *)0x0) {
          (*(pUVar6->klass->vtable)._9_ResetCharacter.methodPtr)
                    (pUVar6,(System_Type_o *)0x1,(pUVar6->klass->vtable)._9_ResetCharacter.method);
          if (Il2CppMethodInitialized_184346ff7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
            Il2CppMethodInitialized_184346ff7 = '\x01';
          }
          if (TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview == false) {
            if (Il2CppMethodInitialized_184346ff8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
              Il2CppMethodInitialized_184346ff8 = '\x01';
            }
            cVar11 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview;
          }
          else {
            cVar11 = '\x01';
          }
          if (((__this->fields)._previousProfileId == (System_String_o *)0x0) ||
             (bVar8 = System_String__op_Inequality((__this->fields)._previousProfileId,b,(MethodInfo *)0x0),
             !bVar8)) {
            if ((__this->fields)._shouldGeneratePreviewAfterRebuild == false) {
              if (cVar11 != '\0') {
                if (Il2CppMethodInitialized_184346f82 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterReset_d__29);
                  Il2CppMethodInitialized_184346f82 = '\x01';
                }
                pUVar10 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterReset_d__29)
                ;
                System_Configuration_ConfigurationCollectionAttribute___ctor
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pUVar10,
                           (MethodInfo *)0x0);
                (pUVar10->fields).__1__state = 0;
                UnityEngine_MonoBehaviour__StartCoroutine_Auto
                          ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar10,
                           (MethodInfo *)0x0);
              }
            }
            else {
              (__this->fields)._shouldGeneratePreviewAfterRebuild = false;
              if (cVar11 != '\0') {
                if (Il2CppMethodInitialized_184346f82 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterReset_d__29);
                  Il2CppMethodInitialized_184346f82 = '\x01';
                }
                pUVar10 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterReset_d__29)
                ;
                System_Configuration_ConfigurationCollectionAttribute___ctor
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pUVar10,
                           (MethodInfo *)0x0);
                (pUVar10->fields).__1__state = 0;
                UnityEngine_MonoBehaviour__StartCoroutine_Auto
                          ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar10,
                           (MethodInfo *)0x0);
              }
              pUVar4 = (UI_CharacterEditorHumanMenu_o *)(__this->fields)._menu;
              if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
              }
              if (pUVar4 != (UI_CharacterEditorHumanMenu_o *)0x0) {
                bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
                if (((((UI_CharacterEditorMenu_c *)pUVar4->klass)->_2).typeHierarchyDepth < bVar1) ||
                   ((((UI_CharacterEditorMenu_c *)pUVar4->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
                  bVar7 = false;
                }
                if (bVar7) {
                  humanMenu = pUVar4;
                }
              }
              Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet(humanMenu,true,(MethodInfo *)0x0);
            }
          }
          else {
            pUVar4 = (UI_CharacterEditorHumanMenu_o *)
                     TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
            if (pUVar4 != (UI_CharacterEditorHumanMenu_o *)0x0) {
              bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
              if (((((GameManagers_BaseGameManager_c *)pUVar4->klass)->_2).typeHierarchyDepth < bVar1) ||
                 (humanMenu = pUVar4,
                 (((GameManagers_BaseGameManager_c *)pUVar4->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1]
                 != (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
                il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
              }
            }
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar7 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)humanMenu,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if (bVar7) {
              value = (__this->fields)._previousProfileId;
              if (Il2CppMethodInitialized_184346f81 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           TypeInfo_UI_CharacterEditorCostumePanel_CapturePreviousProfilePreviewAndApplySkins_d__28
                          );
                Il2CppMethodInitialized_184346f81 = '\x01';
              }
              routine = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_UI_CharacterEditorCostumePanel_CapturePreviousProfilePreviewAndApplySkins_d__28
                                  );
              System_Object___ctor
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,
                         (MethodInfo *)0x0);
              (routine->fields).__1__state = 0;
              (routine->fields).__4__this = __this;
              Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
              (routine->fields).previousProfileId = value;
              Il2CppCodeGenWriteBarrier(&(routine->fields).previousProfileId,value);
              (routine->fields).shouldApplySkinPreview = cVar11 != '\0';
              if (humanMenu == (UI_CharacterEditorHumanMenu_o *)0x0) goto label_1821d452f;
              UnityEngine_MonoBehaviour__StartCoroutine_Auto
                        ((UnityEngine_MonoBehaviour_o *)humanMenu,(System_Collections_IEnumerator_o *)routine,
                         (MethodInfo *)0x0);
            }
          }
          (__this->fields)._previousProfileId = b;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._previousProfileId,b);
          return;
        }
      }
    }
  }
label_1821d452f:
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel$$CapturePreviousProfilePreviewAndApplySkins
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins (UI_CharacterEditorCostumePanel_o* __this, System_String_o* previousProfileId, System_String_o* currentProfileId, bool shouldApplySkinPreview, const MethodInfo* method);
// 0x1821d20c0

System_Collections_IEnumerator_o *
UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins
          (UI_CharacterEditorCostumePanel_o *__this,System_String_o *previousProfileId,
          System_String_o *currentProfileId,bool shouldApplySkinPreview,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *__this_00;
  
  if (Il2CppMethodInitialized_184346f81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorCostumePanel_CapturePreviousProfilePreviewAndApplySkins_d__28);
    Il2CppMethodInitialized_184346f81 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorCostumePanel_CapturePreviousProfilePreviewAndApplySkins_d__28
                        );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).previousProfileId = previousProfileId;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).previousProfileId,previousProfileId);
  (__this_00->fields).shouldApplySkinPreview = shouldApplySkinPreview;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorCostumePanel$$ApplySkinPreviewAfterReset
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x1821d2070

System_Collections_IEnumerator_o *
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset
          (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this_00;
  
  if (Il2CppMethodInitialized_184346f82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterReset_d__29);
    Il2CppMethodInitialized_184346f82 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterReset_d__29);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorCostumePanel$$OnCharacterChanged
// il2cpp: void UI_CharacterEditorCostumePanel__OnCharacterChanged (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x1821d36b0

void UI_CharacterEditorCostumePanel__OnCharacterChanged
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *routine;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 == (UI_CharacterEditorMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar1,(System_Type_o *)0x0,(pUVar1->klass->vtable)._9_ResetCharacter.method);
  if (Il2CppMethodInitialized_184346ff7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
    Il2CppMethodInitialized_184346ff7 = '\x01';
  }
  if (TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview == false) {
    if (Il2CppMethodInitialized_184346ff8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
      Il2CppMethodInitialized_184346ff8 = '\x01';
    }
    if (TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview == false) {
      return;
    }
  }
  if (Il2CppMethodInitialized_184346f83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterCostumeChange_d__31);
    Il2CppMethodInitialized_184346f83 = '\x01';
  }
  routine = il2cpp_codegen_object_new
                      ((Il2CppClass *)
                       TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterCostumeChange_d__31);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
  (routine->fields).__1__state = 0;
  UnityEngine_MonoBehaviour__StartCoroutine_Auto
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$ApplySkinPreviewAfterCostumeChange
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x1821d2020

System_Collections_IEnumerator_o *
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange
          (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  if (Il2CppMethodInitialized_184346f83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterCostumeChange_d__31);
    Il2CppMethodInitialized_184346f83 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterCostumeChange_d__31);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorCostumePanel$$GeneratePreviewForCurrentSet
// il2cpp: void UI_CharacterEditorCostumePanel__GeneratePreviewForCurrentSet (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x1821d2140

void UI_CharacterEditorCostumePanel__GeneratePreviewForCurrentSet
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_CharacterEditorHumanMenu_o *pUVar2;
  bool bVar3;
  UI_CharacterEditorHumanMenu_o *humanMenu;
  
  if (Il2CppMethodInitialized_184346f84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorHumanMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    Il2CppMethodInitialized_184346f84 = '\x01';
  }
  pUVar2 = (UI_CharacterEditorHumanMenu_o *)(__this->fields)._menu;
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  humanMenu = (UI_CharacterEditorHumanMenu_o *)0x0;
  if (pUVar2 != (UI_CharacterEditorHumanMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
    if (((((UI_CharacterEditorMenu_c *)pUVar2->klass)->_2).typeHierarchyDepth < bVar1) ||
       (bVar3 = true,
       (((UI_CharacterEditorMenu_c *)pUVar2->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
       (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
      bVar3 = false;
    }
    if (bVar3) {
      humanMenu = pUVar2;
    }
  }
  Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet(humanMenu,false,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$OnButtonClick
// il2cpp: void UI_CharacterEditorCostumePanel__OnButtonClick (UI_CharacterEditorCostumePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1821d2a40
// asm: 81 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821d2e3f: xor edx, edx
// asm:   0x1821d2e41: mov r9, rax
// asm:   0x1821d2e44: mov qword ptr [rsp + 0x20], rdx
// asm:   0x1821d2e49: mov r8, rdi
// asm:   0x1821d2e4c: mov rdx, rbp
// asm:   0x1821d2e4f: mov rcx, rsi
// asm:   0x1821d2f1f: xor edx, edx
// asm:   0x1821d2f21: mov r9, rax
// asm:   0x1821d2f24: mov qword ptr [rsp + 0x28], rdx
// asm:   0x1821d2f29: mov r8, rbx
// asm:   0x1821d2f2c: mov qword ptr [rsp + 0x20], rdx
// asm:   0x1821d2f31: mov rcx, rbp
// asm:   0x1821d2f34: mov rdx, rsi
// asm:   0x1821d2f37: call 0x1821cb5d0  ; UI_SetNamePopup__Show()
// asm:   0x1821d2f3c: jmp 0x1821d2e57
// asm:   0x1821d3097: xor r8d, r8d
// asm:   0x1821d309a: mov rdx, rax
// asm:   0x1821d309d: mov rcx, rdi
// asm:   0x1821d30a0: call 0x1821c13f0  ; UI_ExportPopup__Show()
// asm:   0x1821d30a5: jmp 0x1821d2e57
// asm:   0x1821d3104: mov rcx, qword ptr [rip + 0x1eb0f35]  ; "Copy"
// asm:   0x1821d310b: jmp 0x1821d3172
// asm:   0x1821d316b: mov rcx, qword ptr [rip + 0x1eb9bae]  ; "Create"
// asm:   0x1821d3182: xor edx, edx
// asm:   0x1821d3184: mov r9, rax
// asm:   0x1821d3187: mov qword ptr [rsp + 0x28], rdx
// asm:   0x1821d318c: mov r8, rbx
// asm:   0x1821d318f: mov qword ptr [rsp + 0x20], rdx
// asm:   0x1821d3194: mov rcx, rbp
// asm:   0x1821d3197: mov rdx, qword ptr [rip + 0x1eba402]  ; "New set"
// asm:   0x1821d319e: call 0x1821cb5d0  ; UI_SetNamePopup__Show()
// asm:   0x1821d31a3: jmp 0x1821d2e57
// asm:   0x1821d3285: xor edx, edx
// asm:   0x1821d3287: mov r9, rax
// asm:   0x1821d328a: mov qword ptr [rsp + 0x20], rdx
// asm:   0x1821d328f: mov r8, rsi
// asm:   0x1821d3292: mov rdx, rbp
// asm:   0x1821d3295: mov rcx, rbx
// asm:   0x1821d3298: jmp 0x1821d2e52
// asm:   0x1821d3381: mov r8, qword ptr [rip + 0x1f07330]  ; "Presets"
// asm:   0x1821d3388: xor edx, edx
// asm:   0x1821d338a: mov qword ptr [rsp + 0x30], rdx
// asm:   0x1821d338f: mov r9, rsi
// asm:   0x1821d3392: mov qword ptr [rsp + 0x28], rdx
// asm:   0x1821d3397: mov rcx, rbx
// asm:   0x1821d339a: mov qword ptr [rsp + 0x20], rdx
// asm:   0x1821d339f: mov rdx, rbp
// asm:   0x1821d33a2: call 0x1821ca2b0  ; UI_SelectListPopup__ShowLoad()
// asm:   0x1821d33a7: jmp 0x1821d2e57
// asm:   0x1821d34f3: mov r10d, edx
// asm:   0x1821d34f6: jmp 0x1821d352c
// asm:   0x1821d357a: mov r8d, edx
// asm:   0x1821d358a: mov qword ptr [rsp + 0x20], rdx
// asm:   0x1821d358f: xor r9d, r9d
// asm:   0x1821d3592: mov rdx, r10
// asm:   0x1821d3595: call 0x182159de0  ; Characters_HumanSetup__Load()
// asm:   0x1821d359a: xor edx, edx
// asm:   0x1821d359c: mov rcx, r14
// asm:   0x1821d359f: call 0x1821d4810  ; UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine()
// asm:   0x1821d35a4: mov rdx, rax
// asm:   0x1821d35a7: xor r8d, r8d
// asm:   0x1821d35aa: mov rcx, rbx
// asm:   0x1821d35ad: call 0x182f1cef0  ; UnityEngine_MonoBehaviour__StartCoroutine()
// asm:   0x1821d35b2: jmp 0x1821d2e57
// asm:   0x1821d35b7: xor edx, edx
// asm:   0x1821d35b9: mov rcx, r14
// asm:   0x1821d35bc: call 0x1821d4810  ; UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine()
// asm:   0x1821d35c1: mov rdx, rax
// asm:   0x1821d35c4: xor r8d, r8d
// asm:   0x1821d35c7: mov rcx, r14
// asm:   0x1821d35ca: call 0x182f1cef0  ; UnityEngine_MonoBehaviour__StartCoroutine()
// asm:   0x1821d35cf: jmp 0x1821d2e57
// asm:   0x1821d3655: mov r9, qword ptr [rip + 0x1eab8cc]  ; ""
// asm:   0x1821d365c: xor edx, edx
// asm:   0x1821d365e: mov qword ptr [rsp + 0x28], rdx
// asm:   0x1821d3663: mov r8b, 1
// asm:   0x1821d3666: mov rdx, rsi
// asm:   0x1821d3669: mov qword ptr [rsp + 0x20], r9
// asm:   0x1821d366e: mov rcx, rbx
// asm:   0x1821d3671: call 0x1821c4c20  ; UI_ImportPopup__Show()
// asm:   0x1821d3676: jmp 0x1821d2e57

void UI_CharacterEditorCostumePanel__OnButtonClick
               (UI_CharacterEditorCostumePanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSettings_o *pSVar2;
  UI_BaseMenu_o *pUVar3;
  UI_SetNamePopup_o *__this_00;
  UI_ConfirmPopup_o *__this_01;
  Il2CppObject *object;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  Settings_BaseSetSetting_c *pSVar6;
  UI_ExportPopup_o *__this_02;
  UI_SelectListPopup_o *__this_03;
  Settings_CustomSkinSettings_o *pSVar7;
  GameManagers_BaseGameManager_o *__this_04;
  System_Threading_CancellationTokenSource_o *pSVar8;
  UI_CharacterEditorMenu_o *pUVar9;
  UI_ExternalLinkPopup_o *pUVar10;
  Characters_HumanSetup_o *__this_05;
  UI_ImportPopup_o *__this_06;
  bool bVar11;
  uint32_t uVar12;
  UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *object_00;
  System_String_o *pSVar13;
  UnityEngine_Events_UnityAction_o *pUVar14;
  System_String_o *pSVar15;
  Settings_BaseSetSetting_o *pSVar16;
  SimpleJSONFixed_JSONNode_o *pSVar17;
  MethodInfo *pMVar18;
  System_String_array *collection;
  System_Collections_Generic_List_string__o *items;
  Settings_HumanCustomSet_o *pSVar19;
  System_Collections_IEnumerator_o *pSVar20;
  int32_t weapon;
  Settings_HumanCustomSet_o *customSet;
  
  if (Il2CppMethodInitialized_184346f85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorHumanMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_CanDeleteSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c_OnButtonClick_b__33_6);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass33_0_OnButtonClick_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass33_0_OnButtonClick_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass33_0_OnButtonClick_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass33_0_OnButtonClick_b__3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass33_0_OnButtonClick_b__4);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass33_0_OnButtonClick_b__5);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorCostumePanel_c__DisplayClass33_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorCostumePanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"QuitWithoutSaveConfirm");
    il2cpp_codegen_initialize_runtime_metadata(&"Presets");
    il2cpp_codegen_initialize_runtime_metadata(&"Create");
    il2cpp_codegen_initialize_runtime_metadata(&"SaveQuit");
    il2cpp_codegen_initialize_runtime_metadata(&"Quit");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadPreset");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Rename");
    il2cpp_codegen_initialize_runtime_metadata(&"DeleteWarning");
    il2cpp_codegen_initialize_runtime_metadata(&"Import");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Export");
    il2cpp_codegen_initialize_runtime_metadata(&"New set");
    Il2CppMethodInitialized_184346f85 = '\x01';
  }
  object_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_CharacterEditorCostumePanel_c__DisplayClass33_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,(MethodInfo *)0x0);
  if (object_00 != (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *)0x0) {
    (object_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object_00->fields).__4__this,__this);
    (object_00->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(object_00->fields).name,name);
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar3 != (UI_BaseMenu_o *)0x0) {
      pSVar13 = (object_00->fields).name;
      __this_00 = (pUVar3->fields).SetNamePopup;
      uVar12 = _PrivateImplementationDetails___ComputeStringHash(pSVar13,(MethodInfo *)0x0);
      if (uVar12 < 0x5cb46bab) {
        if (uVar12 < 0x573e0af5) {
          if (uVar12 == 0x547f6497) {
            bVar11 = System_String__op_Equality(pSVar13,"SaveQuit",(MethodInfo *)0x0);
            if (!bVar11) {
              return;
            }
            pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
            if (pSVar2 != (Settings_HumanCustomSettings_o *)0x0) {
              (*(pSVar2->klass->vtable)._18_Save.methodPtr)(pSVar2,(pSVar2->klass->vtable)._18_Save.method);
              pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
              if (pSVar7 != (Settings_CustomSkinSettings_o *)0x0) {
                (*(pSVar7->klass->vtable)._18_Save.methodPtr)(pSVar7,(pSVar7->klass->vtable)._18_Save.method);
                __this_04 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
                if (__this_04 != (GameManagers_BaseGameManager_o *)0x0) {
                  bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
                  if (((__this_04->klass->_2).typeHierarchyDepth < bVar1) ||
                     ((__this_04->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                      (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
                    il2cpp_codegen_raise_invalid_cast_exception(__this_04);
                  }
                  pSVar8 = (System_Threading_CancellationTokenSource_o *)(*(uint64_t *)((char *)__this_04 + 0x38));
                  if (pSVar8 != (System_Threading_CancellationTokenSource_o *)0x0) {
                    bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
                    if ((bVar1 <= (pSVar8->klass->_2).typeHierarchyDepth) &&
                       ((pSVar8->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                        (Il2CppClass *)TypeInfo_Characters_DummyHuman)) {
                      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
                      if ((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
                         (pSVar4 = (pSVar2->fields).CustomSets,
                         pSVar4 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
                        pSVar19 = (Settings_HumanCustomSet_o *)
                                  Settings_SetSettingsContainer_object___GetSelectedSet
                                            ((Settings_SetSettingsContainer_T__o *)pSVar4,
                                             (MethodInfo_C8EAF0 *)
                                             MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet
                                            );
                        customSet = (Settings_HumanCustomSet_o *)0x0;
                        weapon = 0;
                        if (pSVar19 != (Settings_HumanCustomSet_o *)0x0) {
                          bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
                          if (((((Settings_BaseSetSetting_c *)pSVar19->klass)->_2).typeHierarchyDepth < bVar1)
                             || (customSet = pSVar19,
                                (((Settings_BaseSetSetting_c *)pSVar19->klass)->_2).typeHierarchy
                                [(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
                            il2cpp_codegen_raise_invalid_cast_exception
                                      (pSVar19,TypeInfo_Settings_HumanCustomSet);
                          }
                        }
                        pUVar9 = (__this->fields)._menu;
                        if (pUVar9 != (UI_CharacterEditorMenu_o *)0x0) {
                          bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
                          if ((bVar1 <= (pUVar9->klass->_2).typeHierarchyDepth) &&
                             ((pUVar9->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                              (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
                            pUVar10 = (*(uint64_t *)((char *)pUVar9 + 0xe0));
                            if (pUVar10 == (UI_ExternalLinkPopup_o *)0x0) goto label_1821d367b;
                            weapon = *(int32_t *)((longlong)&(pUVar10->fields).m_CancellationTokenSource + 4);
                          }
                        }
                        __this_05 = (Characters_HumanSetup_o *)(pSVar8->fields)._timer;
                        if (__this_05 != (Characters_HumanSetup_o *)0x0) {
                          Characters_HumanSetup__Load(__this_05,customSet,weapon,false,(MethodInfo *)0x0);
                          pSVar20 = UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine
                                              (__this,(MethodInfo *)0x0);
                          UnityEngine_MonoBehaviour__StartCoroutine_Auto
                                    ((UnityEngine_MonoBehaviour_o *)__this_04,pSVar20,(MethodInfo *)0x0);
                          return;
                        }
                      }
                      goto label_1821d367b;
                    }
                  }
                }
                pSVar20 = UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine(__this,(MethodInfo *)0x0);
                UnityEngine_MonoBehaviour__StartCoroutine_Auto
                          ((UnityEngine_MonoBehaviour_o *)__this,pSVar20,(MethodInfo *)0x0);
                return;
              }
            }
          }
          else {
            if (uVar12 != 0x573e0af4) {
              return;
            }
            bVar11 = System_String__op_Equality(pSVar13,"Import",(MethodInfo *)0x0);
            if (!bVar11) {
              return;
            }
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
            if (pUVar3 != (UI_BaseMenu_o *)0x0) {
              __this_06 = (pUVar3->fields).ImportPopup;
              pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar14,(Il2CppObject *)object_00,
                         (intptr_t)
                         MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass33_0_OnButtonClick_b__5,
                         (MethodInfo *)0x0);
              if (__this_06 != (UI_ImportPopup_o *)0x0) {
                UI_ImportPopup__Show
                          (__this_06,pUVar14,true,"","",
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
          goto label_1821d367b;
        }
        if (uVar12 != 0x5797ea6a) {
          if (uVar12 != 0x5cb46baa) {
            return;
          }
          bVar11 = System_String__op_Equality(pSVar13,"LoadPreset",(MethodInfo *)0x0);
          if (!bVar11) {
            return;
          }
          pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
          if ((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
             (pSVar4 = (pSVar2->fields).Costume1Sets,
             pSVar4 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
            collection = Settings_SetSettingsContainer_object___GetSetNames
                                   ((Settings_SetSettingsContainer_T__o *)pSVar4,
                                    (MethodInfo_C8EC20 *)
                                    MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSetNames);
            items = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
            System_Collections_Generic_List_object____ctor_94fb10
                      ((System_Collections_Generic_List_object__o *)items,
                       (System_Collections_Generic_IEnumerable_T__o *)collection,
                       (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
            if (pUVar3 != (UI_BaseMenu_o *)0x0) {
              __this_03 = (pUVar3->fields).SelectListPopup;
              pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar14,(Il2CppObject *)object_00,
                         (intptr_t)
                         MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass33_0_OnButtonClick_b__4,
                         (MethodInfo *)0x0);
              if (__this_03 != (UI_SelectListPopup_o *)0x0) {
                UI_SelectListPopup__ShowLoad
                          (__this_03,items,"Presets",pUVar14,
                           (UnityEngine_Events_UnityAction_o *)0x0,
                           (System_Collections_Generic_List_string__o *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
          }
          goto label_1821d367b;
        }
        bVar11 = System_String__op_Equality(pSVar13,"Delete",(MethodInfo *)0x0);
        if (!bVar11) {
          return;
        }
        if ((pSVar2 == (Settings_HumanCustomSettings_o *)0x0) ||
           (pSVar4 = (pSVar2->fields).CustomSets,
           pSVar4 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) goto label_1821d367b;
        bVar11 = Settings_SetSettingsContainer_object___CanDeleteSelectedSet
                           ((Settings_SetSettingsContainer_T__o *)pSVar4,
                            (MethodInfo_C8E620 *)
                            MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_CanDeleteSelectedSet);
        if (!bVar11) {
          return;
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar3 == (UI_BaseMenu_o *)0x0) goto label_1821d367b;
        __this_01 = (pUVar3->fields).ConfirmPopup;
        pSVar13 = UI_UIManager__GetLocaleCommon("DeleteWarning",(MethodInfo *)0x0);
        pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar14,(Il2CppObject *)object_00,
                   (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass33_0_OnButtonClick_b__1,
                   (MethodInfo *)0x0);
        pSVar15 = UI_UIManager__GetLocaleCommon("Delete",(MethodInfo *)0x0);
      }
      else {
        if (uVar12 < 0x990de47e) {
          if (uVar12 == 0x658f3664) {
            bVar11 = System_String__op_Equality(pSVar13,"Copy",(MethodInfo *)0x0);
            if (!bVar11) {
              return;
            }
            pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar14,(Il2CppObject *)object_00,
                       (intptr_t)
                       MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass33_0_OnButtonClick_b__3,
                       (MethodInfo *)0x0);
            pSVar13 = "Copy";
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              pSVar13 = "Copy";
            }
          }
          else {
            if (uVar12 != 0x990de47d) {
              return;
            }
            bVar11 = System_String__op_Equality(pSVar13,"Create",(MethodInfo *)0x0);
            if (!bVar11) {
              return;
            }
            pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar14,(Il2CppObject *)object_00,
                       (intptr_t)
                       MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass33_0_OnButtonClick_b__0,
                       (MethodInfo *)0x0);
            pSVar13 = "Create";
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              pSVar13 = "Create";
            }
          }
          pSVar13 = UI_UIManager__GetLocaleCommon(pSVar13,(MethodInfo *)0x0);
          if (__this_00 != (UI_SetNamePopup_o *)0x0) {
            UI_SetNamePopup__Show
                      (__this_00,"New set",pUVar14,pSVar13,(System_String_o *)0x0,
                       (MethodInfo *)0x0);
            return;
          }
          goto label_1821d367b;
        }
        if (uVar12 != 0xc7b3d356) {
          if (uVar12 == 0xc80631f3) {
            bVar11 = System_String__op_Equality(pSVar13,"Rename",(MethodInfo *)0x0);
            if (!bVar11) {
              return;
            }
            if (((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
                (pSVar4 = (pSVar2->fields).CustomSets,
                pSVar4 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) &&
               ((pSVar16 = Settings_SetSettingsContainer_object___GetSelectedSet
                                     ((Settings_SetSettingsContainer_T__o *)pSVar4,
                                      (MethodInfo_C8EAF0 *)
                                      MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet),
                pSVar16 != (Settings_BaseSetSetting_o *)0x0 &&
                (pSVar5 = (pSVar16->fields).Name, pSVar5 != (Settings_StringSetting_o *)0x0)))) {
              pSVar13 = (pSVar5->fields)._value;
              pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar14,(Il2CppObject *)object_00,
                         (intptr_t)
                         MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass33_0_OnButtonClick_b__2,
                         (MethodInfo *)0x0);
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pSVar15 = UI_UIManager__GetLocaleCommon("Rename",(MethodInfo *)0x0);
              if (__this_00 != (UI_SetNamePopup_o *)0x0) {
                UI_SetNamePopup__Show
                          (__this_00,pSVar13,pUVar14,pSVar15,(System_String_o *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
          }
          else {
            if (uVar12 != 0xe86349d3) {
              return;
            }
            bVar11 = System_String__op_Equality(pSVar13,"Export",(MethodInfo *)0x0);
            if (!bVar11) {
              return;
            }
            if (((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
                (pSVar4 = (pSVar2->fields).CustomSets,
                pSVar4 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) &&
               (pSVar16 = Settings_SetSettingsContainer_object___GetSelectedSet
                                    ((Settings_SetSettingsContainer_T__o *)pSVar4,
                                     (MethodInfo_C8EAF0 *)
                                     MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet),
               pSVar16 != (Settings_BaseSetSetting_o *)0x0)) {
              pSVar6 = pSVar16->klass;
              bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
              if (((pSVar6->_2).typeHierarchyDepth < bVar1) ||
                 ((pSVar6->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
                il2cpp_codegen_raise_invalid_cast_exception(pSVar16,TypeInfo_Settings_HumanCustomSet);
              }
              pSVar17 = (*(pSVar6->vtable)._5_SerializeToJsonObject.methodPtr)
                                  (pSVar16,(pSVar6->vtable)._5_SerializeToJsonObject.method);
              if (pSVar17 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                bVar11 = (*(pSVar17->klass->vtable)._28_HasKey.methodPtr)
                                   (pSVar17,(MethodInfo *)"Preset");
                if (bVar11) {
                  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                  }
                  pMVar18 = (MethodInfo *)
                            SimpleJSONFixed_JSONNode__op_Implicit_1dc48c0(false,(MethodInfo *)0x0);
                  (*(pSVar17->klass->vtable)._8_set_Item.methodPtr)
                            (pSVar17,(System_Type_o *)"Preset",pMVar18);
                }
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                if (pUVar3 != (UI_BaseMenu_o *)0x0) {
                  __this_02 = (pUVar3->fields).ExportPopup;
                  pSVar13 = (*(pSVar17->klass->vtable)._30_ToString.methodPtr)
                                      (pSVar17,4,(pSVar17->klass->vtable)._30_ToString.method);
                  if (__this_02 != (UI_ExportPopup_o *)0x0) {
                    UI_ExportPopup__Show(__this_02,pSVar13,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
          goto label_1821d367b;
        }
        bVar11 = System_String__op_Equality(pSVar13,"Quit",(MethodInfo *)0x0);
        if (!bVar11) {
          return;
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar3 == (UI_BaseMenu_o *)0x0) goto label_1821d367b;
        __this_01 = (pUVar3->fields).ConfirmPopup;
        pSVar13 = UI_UIManager__GetLocaleCommon("QuitWithoutSaveConfirm",(MethodInfo *)0x0);
        if ((TypeInfo_UI_CharacterEditorCostumePanel_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CharacterEditorCostumePanel_c);
        }
        pUVar14 = TypeInfo_UI_CharacterEditorCostumePanel_c->static_fields->__9__33_6;
        if (pUVar14 == (UnityEngine_Events_UnityAction_o *)0x0) {
          if ((TypeInfo_UI_CharacterEditorCostumePanel_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CharacterEditorCostumePanel_c);
          }
          object = (Il2CppObject *)TypeInfo_UI_CharacterEditorCostumePanel_c->static_fields->__9;
          pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar14,object,
                     (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c_OnButtonClick_b__33_6,
                     (MethodInfo *)0x0);
          TypeInfo_UI_CharacterEditorCostumePanel_c->static_fields->__9__33_6 = pUVar14;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_UI_CharacterEditorCostumePanel_c->static_fields->__9__33_6,pUVar14);
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar15 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
      }
      if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
        UI_ConfirmPopup__Show(__this_01,pSVar13,pUVar14,pSVar15,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_1821d367b:
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel$$OnCostumeSetOperationFinish
// il2cpp: void UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish (UI_CharacterEditorCostumePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1821d37a0
// eh: try 0x1821d3c20..0x1821d3d90 -> pad 0x183324cb0 catch Il2CppExceptionWrapper
// eh: try 0x1821d3e2e..0x1821d3f24 -> pad 0x1833352b0 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x1821d3f82..0x1821d3fbd -> pad 0x183324cb0 catch Il2CppExceptionWrapper
// eh: try 0x1821d3fc3..0x1821d3ff6 -> pad 0x1833352b0 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 54 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821d3da4: mov rdx, qword ptr [rip + 0x1ea272d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x1821d3dab: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1821d3db0: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821d3db5: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821d3dba: test rcx, rcx
// asm:   0x1821d3dbd: jne 0x1821d3fbd
// asm:   0x1821d3dc3: mov r15, qword ptr [rsp + 0xa0]
// asm:   0x1821d3dcb: mov rdi, qword ptr [rsp + 0xb8]
// asm:   0x1821d3dd3: jmp 0x1821d3def
// asm:   0x1821d3f26: mov rbx, qword ptr [rsp + 0xb8]
// asm:   0x1821d3f2e: test rbx, rbx
// asm:   0x1821d3f31: je 0x1821d3f7c
// asm:   0x1821d3f33: lea rcx, [rip + 0x1eea62e]  ; "Invalid human preset."
// asm:   0x1821d3f3a: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1821d3f3f: mov rdx, rax
// asm:   0x1821d3f42: xor r8d, r8d
// asm:   0x1821d3f45: mov rcx, rbx
// asm:   0x1821d3f48: call 0x1821c4b10  ; UI_ImportPopup__ShowError()
// asm:   0x1821d3f4d: mov r15, qword ptr [rsp + 0xa0]
// asm:   0x1821d3fbd: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183324cb0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324cb5: push rbp
// asm:   0x183324cb6: sub rsp, 0x20
// asm:   0x183324cba: mov rbp, rdx
// asm:   0x183324cbd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183324cc1: mov rcx, qword ptr [rax]
// asm:   0x183324cc4: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183324cc8: movabs rax, 0
// asm:   0x183324cd2: add rsp, 0x20
// asm:   0x183324cd6: pop rbp
// asm:   0x183324cd7: ret 
// asm:   0x1833352b0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833352b5: push rbx
// asm:   0x1833352b6: push rbp
// asm:   0x1833352b7: sub rsp, 0x28
// asm:   0x1833352bb: mov rbp, rdx
// asm:   0x1833352be: mov rbx, qword ptr [rbp + 0x30]
// asm:   0x1833352c2: mov rdx, qword ptr [rbx]
// asm:   0x1833352c5: mov rdx, qword ptr [rdx]
// asm:   0x1833352c8: mov rcx, qword ptr [rip + 0x101fb01]
// asm:   0x1833352cf: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x1833352d4: test al, al
// asm:   0x1833352d6: je 0x1833352e4
// asm:   0x1833352d8: movabs rax, 0
// asm:   0x1833352e2: jmp 0x1833352fc
// asm:   0x1833352e4: mov rax, qword ptr [rbx]
// asm:   0x1833352e7: mov qword ptr [rbp + 0x20], rax
// asm:   0x1833352eb: lea rdx, [rip + 0xca6c96]
// asm:   0x1833352f2: lea rcx, [rbp + 0x20]
// asm:   0x1833352f6: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833352fc: add rsp, 0x28
// asm:   0x183335300: pop rbp
// asm:   0x183335301: pop rbx
// asm:   0x183335302: ret 

void UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
               (UI_CharacterEditorCostumePanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  Settings_HumanCustomSettings_o *pSVar3;
  UI_SetNamePopup_o *pUVar4;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  Settings_StringSetting_o *pSVar5;
  Settings_ListSetting_T__o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  Settings_StringSetting_o *__this_01;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar8;
  System_String_o *pSVar9;
  System_String_o *a;
  UI_SelectListPopup_o *pUVar10;
  Settings_BoolSetting_o *pSVar11;
  UI_ImportPopup_o *pUVar12;
  Settings_BaseSetting_o *pSVar13;
  bool bVar14;
  void *pvVar15;
  Settings_BaseSetSetting_o *pSVar16;
  System_Collections_Generic_List_T__o *__this_02;
  undefined1 local_60 [16];
  Settings_BaseSetting_o *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Settings_BaseSetting_o *local_38;
  
  if (Il2CppMethodInitialized_184346f86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IListSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_CopySelectedSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_CreateSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_DeleteSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSetIndex);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Create");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadPreset");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Rename");
    il2cpp_codegen_initialize_runtime_metadata(&"Import");
    Il2CppMethodInitialized_184346f86 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Settings_BaseSetting_o *)0x0;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((pUVar2 == (UI_BaseMenu_o *)0x0) ||
     (pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings,
     pSVar3 == (Settings_HumanCustomSettings_o *)0x0)) goto label_1821d3f7c;
  pUVar4 = (pUVar2->fields).SetNamePopup;
  __this_00 = (pSVar3->fields).CustomSets;
  bVar14 = System_String__op_Equality(name,"Create",(MethodInfo *)0x0);
  if (bVar14) {
    if (((pUVar4 == (UI_SetNamePopup_o *)0x0) ||
        (pSVar5 = (pUVar4->fields).NameSetting, pSVar5 == (Settings_StringSetting_o *)0x0)) ||
       (__this_00 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) goto label_1821d3f7c;
    Settings_SetSettingsContainer_object___CreateSet
              ((Settings_SetSettingsContainer_T__o *)__this_00,(pSVar5->fields)._value,
               (MethodInfo_C8E8E0 *)MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_CreateSet);
  }
  else {
    bVar14 = System_String__op_Equality(name,"Delete",(MethodInfo *)0x0);
    if (bVar14) {
      if (__this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) {
        Settings_SetSettingsContainer_object___DeleteSelectedSet
                  ((Settings_SetSettingsContainer_T__o *)__this_00,
                   (MethodInfo_C8EA30 *)
                   MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_DeleteSelectedSet);
        pSVar7 = ((Settings_SetSettingsContainer_T__Fields *)&__this_00->fields)->SelectedSetIndex;
        if (pSVar7 != (Settings_IntSetting_o *)0x0) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar7,0,
                     (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
          }
          Utility_CharacterPreviewGenerator__CleanupOrphanedPreviews((MethodInfo *)0x0);
          goto label_1821d39fd;
        }
      }
      goto label_1821d3f7c;
    }
    bVar14 = System_String__op_Equality(name,"Rename",(MethodInfo *)0x0);
    if (bVar14) {
      if (__this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) {
        pSVar16 = Settings_SetSettingsContainer_object___GetSelectedSet
                            ((Settings_SetSettingsContainer_T__o *)__this_00,
                             (MethodInfo_C8EAF0 *)
                             MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
        if (((pSVar16 != (Settings_BaseSetSetting_o *)0x0) && (pUVar4 != (UI_SetNamePopup_o *)0x0)) &&
           ((pSVar5 = (pUVar4->fields).NameSetting, pSVar5 != (Settings_StringSetting_o *)0x0 &&
            (__this_01 = (pSVar16->fields).Name, __this_01 != (Settings_StringSetting_o *)0x0)))) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)(pSVar5->fields)._value,
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          goto label_1821d39fd;
        }
      }
      goto label_1821d3f7c;
    }
    bVar14 = System_String__op_Equality(name,"Copy",(MethodInfo *)0x0);
    if (!bVar14) {
      bVar14 = System_String__op_Equality(name,"LoadPreset",(MethodInfo *)0x0);
      if (bVar14) {
        if (__this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) {
          pSVar16 = Settings_SetSettingsContainer_object___GetSelectedSet
                              ((Settings_SetSettingsContainer_T__o *)__this_00,
                               (MethodInfo_C8EAF0 *)
                               MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
          if ((((pSVar16 != (Settings_BaseSetSetting_o *)0x0) &&
               (pSVar5 = (pSVar16->fields).Name, pSVar5 != (Settings_StringSetting_o *)0x0)) &&
              (pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings,
              pSVar3 != (Settings_HumanCustomSettings_o *)0x0)) &&
             ((pSVar8 = (pSVar3->fields).Costume1Sets,
              pSVar8 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0 &&
              (pSVar6 = (pSVar8->fields).Sets, pSVar6 != (Settings_ListSetting_T__o *)0x0)))) {
            pSVar9 = (pSVar5->fields)._value;
            __this_02 = InterfaceInvoker0_Invoke
                                  (2,(Il2CppClass *)TypeInfo_Settings_IListSetting,(Il2CppObject *)pSVar6);
            if (__this_02 != (System_Collections_Generic_List_T__o *)0x0) {
              System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_60,__this_02,
                         (MethodInfo_91F180 *)
                         MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
              local_48 = (undefined1  [8])local_60._0_8_;
              pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
              local_38 = local_50;
              local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
              local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
              while( true ) {
                bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                                    (MethodInfo_153A2A0 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext
                                   );
                pSVar13 = local_38;
                if (!bVar14) break;
                if (local_38 == (Settings_BaseSetting_o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
                if (((local_38->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((local_38->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
                  il2cpp_codegen_raise_invalid_cast_exception(local_38);
                }
                if ((*(uint64_t *)((char *)local_38 + 0x30)) == (Settings_BaseSetting_c *)0x0) {
                  ThrowNullReferenceException();
                }
                a = (((*(Il2CppClass **)((char *)local_38 + 0x30)))->_1).byval_arg.data;
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                if (pUVar2 == (UI_BaseMenu_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar10 = (pUVar2->fields).SelectListPopup;
                if (pUVar10 == (UI_SelectListPopup_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar5 = (pUVar10->fields).FinishSetting;
                if (pSVar5 == (Settings_StringSetting_o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar14 = System_String__op_Equality(a,(pSVar5->fields)._value,(MethodInfo *)0x0);
                if (bVar14) {
                  pSVar16 = Settings_SetSettingsContainer_object___GetSelectedSet
                                      ((Settings_SetSettingsContainer_T__o *)__this_00,
                                       (MethodInfo_C8EAF0 *)
                                       MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet)
                  ;
                  if (pSVar16 == (Settings_BaseSetSetting_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  (*(pSVar16->klass->vtable)._10_Copy.methodPtr)
                            (pSVar16,pSVar13,(pSVar16->klass->vtable)._10_Copy.method);
                  pSVar16 = Settings_SetSettingsContainer_object___GetSelectedSet
                                      ((Settings_SetSettingsContainer_T__o *)__this_00,
                                       (MethodInfo_C8EAF0 *)
                                       MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet)
                  ;
                  if (pSVar16 == (Settings_BaseSetSetting_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pSVar11 = (pSVar16->fields).Preset;
                  if (pSVar11 == (Settings_BoolSetting_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  Settings_TypedSetting_bool___set_Value
                            ((Settings_TypedSetting_bool__o *)pSVar11,false,
                             (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                  pSVar16 = Settings_SetSettingsContainer_object___GetSelectedSet
                                      ((Settings_SetSettingsContainer_T__o *)__this_00,
                                       (MethodInfo_C8EAF0 *)
                                       MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet)
                  ;
                  if (pSVar16 == (Settings_BaseSetSetting_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pSVar5 = (pSVar16->fields).Name;
                  if (pSVar5 == (Settings_StringSetting_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  Settings_TypedSetting_object___set_Value
                            ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)pSVar9,
                             (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                }
              }
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
                         MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
              goto label_1821d39fd;
            }
          }
        }
        goto label_1821d3f7c;
      }
      bVar14 = System_String__op_Equality(name,"Import",(MethodInfo *)0x0);
      if (bVar14) {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar2 != (UI_BaseMenu_o *)0x0) {
          pUVar12 = (pUVar2->fields).ImportPopup;
          if (__this_00 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar16 = Settings_SetSettingsContainer_object___GetSelectedSet
                              ((Settings_SetSettingsContainer_T__o *)__this_00,
                               (MethodInfo_C8EAF0 *)
                               MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
          if (pSVar16 == (Settings_BaseSetSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar5 = (pSVar16->fields).Name;
          if (pSVar5 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar9 = (pSVar5->fields)._value;
          pSVar16 = Settings_SetSettingsContainer_object___GetSelectedSet
                              ((Settings_SetSettingsContainer_T__o *)__this_00,
                               (MethodInfo_C8EAF0 *)
                               MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
          if (pUVar12 == (UI_ImportPopup_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar5 = (pUVar12->fields).ImportSetting;
          if (pSVar5 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          if (pSVar16 == (Settings_BaseSetSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          (*(pSVar16->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                    (pSVar16,(pSVar5->fields)._value,
                     (pSVar16->klass->vtable)._9_DeserializeFromJsonString.method);
          pSVar16 = Settings_SetSettingsContainer_object___GetSelectedSet
                              ((Settings_SetSettingsContainer_T__o *)__this_00,
                               (MethodInfo_C8EAF0 *)
                               MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
          if (pSVar16 == (Settings_BaseSetSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar11 = (pSVar16->fields).Preset;
          if (pSVar11 == (Settings_BoolSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          Settings_TypedSetting_bool___set_Value
                    ((Settings_TypedSetting_bool__o *)pSVar11,false,
                     (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
          pSVar16 = Settings_SetSettingsContainer_object___GetSelectedSet
                              ((Settings_SetSettingsContainer_T__o *)__this_00,
                               (MethodInfo_C8EAF0 *)
                               MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
          if (pSVar16 == (Settings_BaseSetSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar5 = (pSVar16->fields).Name;
          if (pSVar5 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)pSVar9,
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          (*(pUVar12->klass->vtable)._22_Hide.methodPtr)(pUVar12,(pUVar12->klass->vtable)._22_Hide.method);
          bVar14 = UI_CharacterEditorCostumePanel__GetPersistentGlobalPreview((MethodInfo *)0x0);
          if (bVar14) {
            bVar14 = true;
          }
          else {
            bVar14 = UI_CharacterEditorCostumePanel__GetPersistentCustomPreview((MethodInfo *)0x0);
          }
          if (__this != (UI_CharacterEditorCostumePanel_o *)0x0) {
            (__this->fields)._shouldGeneratePreviewAfterRebuild = bVar14;
            goto label_1821d39fd;
          }
        }
        goto label_1821d3f7c;
      }
      goto label_1821d39fd;
    }
    if (((pUVar4 == (UI_SetNamePopup_o *)0x0) ||
        (pSVar5 = (pUVar4->fields).NameSetting, pSVar5 == (Settings_StringSetting_o *)0x0)) ||
       (__this_00 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) goto label_1821d3f7c;
    Settings_SetSettingsContainer_object___CopySelectedSet
              ((Settings_SetSettingsContainer_T__o *)__this_00,(pSVar5->fields)._value,
               (MethodInfo_C8E740 *)MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_CopySelectedSet);
  }
  pSVar6 = ((Settings_SetSettingsContainer_T__Fields *)&__this_00->fields)->Sets;
  if (pSVar6 != (Settings_ListSetting_T__o *)0x0) {
    pSVar7 = ((Settings_SetSettingsContainer_T__Fields *)&__this_00->fields)->SelectedSetIndex;
    pvVar15 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_Settings_IListSetting,(Il2CppObject *)pSVar6)
    ;
    if (pSVar7 != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar7,(int)pvVar15 + -1,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      (__this->fields)._shouldGeneratePreviewAfterRebuild = true;
label_1821d39fd:
      UI_CharacterEditorCostumePanel__OnCustomSetSelected(__this,(MethodInfo *)0x0);
      return;
    }
  }
label_1821d3f7c:
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel$$SaveQuitCaptureCoroutine
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x1821d4810

System_Collections_IEnumerator_o *
UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine
          (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *__this_00;
  
  if (Il2CppMethodInitialized_184346f87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorCostumePanel_SaveQuitCaptureCoroutine_d__35);
    Il2CppMethodInitialized_184346f87 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_CharacterEditorCostumePanel_SaveQuitCaptureCoroutine_d__35
                        );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorCostumePanel$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel___ctor (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x1821d6e20

void
UI_CharacterEditorCostumePanel___ctor(UI_CharacterEditorCostumePanel_o* __this, MethodInfo* method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


