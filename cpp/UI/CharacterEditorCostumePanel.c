// Type: UI.CharacterEditorCostumePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/CharacterEditorCostumePanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorCostumePanel.cs
// --------------------------------

// UI.CharacterEditorCostumePanel.<>c$$.cctor
// il2cpp: void UI_CharacterEditorCostumePanel___c___cctor (const MethodInfo* method);
// 0x5ccfa40

void UI_CharacterEditorCostumePanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547b86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorCostumePanel_c);
    Il2CppMethodInitialized_07547b86 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CharacterEditorCostumePanel_c)
  ;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_CharacterEditorCostumePanel_c->static_fields->__9 =
       (UI_CharacterEditorCostumePanel___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_CharacterEditorCostumePanel_c->static_fields->__9);
  return;
}


// UI.CharacterEditorCostumePanel.<>c$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel___c___ctor (UI_CharacterEditorCostumePanel___c_o* __this, const MethodInfo* method);
// 0x5ccfab0

void UI_CharacterEditorCostumePanel___c___ctor
               (UI_CharacterEditorCostumePanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c$$<OnButtonClick>b__36_6
// il2cpp: void UI_CharacterEditorCostumePanel___c___OnButtonClick_b__36_6 (UI_CharacterEditorCostumePanel___c_o* __this, const MethodInfo* method);
// 0x5ccfac0

void UI_CharacterEditorCostumePanel___c___OnButtonClick_b__36_6
               (UI_CharacterEditorCostumePanel___c_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSettings_o *pSVar1;
  Settings_CustomSkinSettings_o *pSVar2;
  UI_CharacterEditorSkinsPanel_StaticFields *pUVar3;
  
  if (Il2CppMethodInitialized_07547b87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07547b87 = '\x01';
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
      if (Il2CppMethodInitialized_07547bb1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
        Il2CppMethodInitialized_07547bb1 = '\x01';
      }
      pUVar3 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields;
      pUVar3->_persistentGlobalSkinPreview = false;
      pUVar3->_persistentCustomSkinPreview = false;
      ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___ctor (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccfbe0

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___ctor
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__0
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__0 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccfbf0

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__0
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  if (Il2CppMethodInitialized_07547b88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Quit");
    Il2CppMethodInitialized_07547b88 = '\x01';
  }
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnButtonClick(__this_00,"Quit",(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__1
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__1 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccfc30

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__1
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  if (Il2CppMethodInitialized_07547b89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LoadPreset");
    Il2CppMethodInitialized_07547b89 = '\x01';
  }
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnButtonClick(__this_00,"LoadPreset",(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__2
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__2 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccfc70

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__2
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  if (Il2CppMethodInitialized_07547b8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SaveQuit");
    Il2CppMethodInitialized_07547b8a = '\x01';
  }
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnButtonClick(__this_00,"SaveQuit",(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__3
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__3 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccfcb0

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__3
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCustomSetSelected(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__4
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__4 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccfcd0

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__4
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnSexChanged(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__5
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__5 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccfcf0

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__5
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__6
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__6 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccfd10

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__6
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__7
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__7 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccfd30

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__7
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__8
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__8 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccfd50

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__8
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__9
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__9 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccfd70

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__9
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__10
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__10 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccfd90

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__10
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__11
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__11 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccfdb0

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__11
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__12
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__12 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccfdd0

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__12
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__13
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__13 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccfdf0

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__13
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__14
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__14 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccfe10

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__14
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__15
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__15 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccfe30

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__15
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_IntSetting_o *__this_00;
  Settings_BoolSetting_o *__this_01;
  UI_CharacterEditorCostumePanel_o *__this_02;
  int32_t value;
  
  if (Il2CppMethodInitialized_07547b8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07547b8b = '\x01';
  }
  pSVar2 = (__this->fields).set;
  if (((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
      (pSVar3 = (__this->fields).capeOption, pSVar3 != (Settings_IntSetting_o *)0x0)) &&
     (__this_00 = (pSVar2->fields).Cape, __this_00 != (Settings_IntSetting_o *)0x0)) {
    iVar1 = (pSVar3->fields)._value;
    value = 2;
    if (iVar1 != 3) {
      value = iVar1;
    }
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)__this_00,value,
               (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pSVar2 = (__this->fields).set;
    if (((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
        (pSVar3 = (__this->fields).capeOption, pSVar3 != (Settings_IntSetting_o *)0x0)) &&
       (__this_01 = (pSVar2->fields).HoodUp, __this_01 != (Settings_BoolSetting_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)__this_01,(pSVar3->fields)._value == 3,
                 (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      __this_02 = (__this->fields).__4__this;
      if (__this_02 != (UI_CharacterEditorCostumePanel_o *)0x0) {
        UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__16
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__16 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccfef0

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__16
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__17
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__17 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccff10

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__17
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__18
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__18 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccff30

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__18
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__19
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__19 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccff50

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__19
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__20
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__20 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccff70

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__20
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__21
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__21 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccff90

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__21
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__22
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__22 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccffb0

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__22
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__23
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__23 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccffd0

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__23
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__24
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__24 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5ccfff0

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__24
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__25
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__25 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5cd0010

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__25
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__26
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__26 (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5cd0030

void UI_CharacterEditorCostumePanel___c__DisplayClass24_0___Setup_b__26
               (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCharacterChanged(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass36_0$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass36_0___ctor (UI_CharacterEditorCostumePanel___c__DisplayClass36_0_o* __this, const MethodInfo* method);
// 0x5cd0050

void UI_CharacterEditorCostumePanel___c__DisplayClass36_0___ctor
               (UI_CharacterEditorCostumePanel___c__DisplayClass36_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass36_0$$<OnButtonClick>b__0
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass36_0___OnButtonClick_b__0 (UI_CharacterEditorCostumePanel___c__DisplayClass36_0_o* __this, const MethodInfo* method);
// 0x5cd0060

void UI_CharacterEditorCostumePanel___c__DisplayClass36_0___OnButtonClick_b__0
               (UI_CharacterEditorCostumePanel___c__DisplayClass36_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
            (__this_00,(__this->fields).name,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass36_0$$<OnButtonClick>b__1
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass36_0___OnButtonClick_b__1 (UI_CharacterEditorCostumePanel___c__DisplayClass36_0_o* __this, const MethodInfo* method);
// 0x5cd0080

void UI_CharacterEditorCostumePanel___c__DisplayClass36_0___OnButtonClick_b__1
               (UI_CharacterEditorCostumePanel___c__DisplayClass36_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
            (__this_00,(__this->fields).name,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass36_0$$<OnButtonClick>b__2
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass36_0___OnButtonClick_b__2 (UI_CharacterEditorCostumePanel___c__DisplayClass36_0_o* __this, const MethodInfo* method);
// 0x5cd00a0

void UI_CharacterEditorCostumePanel___c__DisplayClass36_0___OnButtonClick_b__2
               (UI_CharacterEditorCostumePanel___c__DisplayClass36_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
            (__this_00,(__this->fields).name,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass36_0$$<OnButtonClick>b__3
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass36_0___OnButtonClick_b__3 (UI_CharacterEditorCostumePanel___c__DisplayClass36_0_o* __this, const MethodInfo* method);
// 0x5cd00c0

void UI_CharacterEditorCostumePanel___c__DisplayClass36_0___OnButtonClick_b__3
               (UI_CharacterEditorCostumePanel___c__DisplayClass36_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
            (__this_00,(__this->fields).name,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass36_0$$<OnButtonClick>b__4
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass36_0___OnButtonClick_b__4 (UI_CharacterEditorCostumePanel___c__DisplayClass36_0_o* __this, const MethodInfo* method);
// 0x5cd00e0

void UI_CharacterEditorCostumePanel___c__DisplayClass36_0___OnButtonClick_b__4
               (UI_CharacterEditorCostumePanel___c__DisplayClass36_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  if (Il2CppMethodInitialized_07547b8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LoadPreset");
    Il2CppMethodInitialized_07547b8c = '\x01';
  }
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
            (__this_00,"LoadPreset",(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass36_0$$<OnButtonClick>b__5
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass36_0___OnButtonClick_b__5 (UI_CharacterEditorCostumePanel___c__DisplayClass36_0_o* __this, const MethodInfo* method);
// 0x5cd0120

void UI_CharacterEditorCostumePanel___c__DisplayClass36_0___OnButtonClick_b__5
               (UI_CharacterEditorCostumePanel___c__DisplayClass36_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
            (__this_00,(__this->fields).name,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__34$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34___ctor (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cd0140

void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34___ctor
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__34$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34__System_IDisposable_Dispose (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34_o* __this, const MethodInfo* method);
// 0x5cd0160

void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34__System_IDisposable_Dispose
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__34$$MoveNext
// il2cpp: bool UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34__MoveNext (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34_o* __this, const MethodInfo* method);
// 0x5cd0170
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cd0491: mov edi, 2
// asm:   0x5cd0496: xor esi, esi
// asm:   0x5cd0498: call 0x5df1d90  ; Utility_Util__YieldForFrames()
// asm:   0x5cd049d: lea rdi, [rbx + 0x18]
// asm:   0x5cd04a1: mov qword ptr [rbx + 0x18], rax
// asm:   0x5cd04a5: mov rsi, rax
// asm:   0x5cd04a8: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5cd04ad: mov dword ptr [rbx + 0x10], 2
// asm:   0x5cd04b4: mov al, 1
// asm:   0x5cd04b6: jmp 0x5cd0362

bool UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34__MoveNext
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34_o *__this,
               MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  GameManagers_BaseGameManager_o *pGVar3;
  Characters_DummyHuman_o *__this_00;
  Settings_CustomSkinSettings_o *pSVar4;
  Settings_HumanCustomSkinSettings_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  Il2CppObject *pIVar8;
  
  if (Il2CppMethodInitialized_07547b8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07547b8d = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (((pSVar4 != (Settings_CustomSkinSettings_o *)0x0) &&
        (pSVar5 = (pSVar4->fields).Human, pSVar5 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
       (pSVar6 = (pSVar5->fields).GlobalSkinOverridesEnabled, pSVar6 != (Settings_BoolSetting_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)pSVar6,(__this->fields)._originalGlobalEnabled_5__2,
                 (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if (((pSVar4 != (Settings_CustomSkinSettings_o *)0x0) &&
          (pSVar5 = (pSVar4->fields).Human, pSVar5 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
         (pSVar6 = (pSVar5->fields).SetSpecificSkinsEnabled, pSVar6 != (Settings_BoolSetting_o *)0x0)) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar6,(__this->fields)._originalSetEnabled_5__3,
                   (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        return false;
      }
    }
label_05cd04bb:
    ThrowNullReferenceException();
  }
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar3 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
      if (((pGVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      __this_00 = (Characters_DummyHuman_o *)(*(uint64_t *)((char *)pGVar3 + 0x38));
      if (__this_00 != (Characters_DummyHuman_o *)0x0) {
        bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
        if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_DummyHuman)) {
          pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
          if ((pSVar4 != (Settings_CustomSkinSettings_o *)0x0) &&
             ((pSVar5 = (pSVar4->fields).Human, pSVar5 != (Settings_HumanCustomSkinSettings_o *)0x0 &&
              (pSVar6 = (pSVar5->fields).GlobalSkinOverridesEnabled, pSVar6 != (Settings_BoolSetting_o *)0x0))
             )) {
            (__this->fields)._originalGlobalEnabled_5__2 =
                 ((Settings_TypedSetting_bool__Fields *)&pSVar6->fields)->_value;
            pSVar7 = (pSVar5->fields).SetSpecificSkinsEnabled;
            if (pSVar7 != (Settings_BoolSetting_o *)0x0) {
              (__this->fields)._originalSetEnabled_5__3 = (pSVar7->fields)._value;
              if (Il2CppMethodInitialized_07547b84 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
                Il2CppMethodInitialized_07547b84 = '\x01';
              }
              Settings_TypedSetting_bool___set_Value
                        ((Settings_TypedSetting_bool__o *)pSVar6,
                         TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview,
                         (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
              pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
              if ((pSVar4 != (Settings_CustomSkinSettings_o *)0x0) &&
                 (pSVar5 = (pSVar4->fields).Human, pSVar5 != (Settings_HumanCustomSkinSettings_o *)0x0)) {
                pSVar6 = (pSVar5->fields).SetSpecificSkinsEnabled;
                if (Il2CppMethodInitialized_07547b85 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
                  Il2CppMethodInitialized_07547b85 = '\x01';
                }
                if (pSVar6 != (Settings_BoolSetting_o *)0x0) {
                  Settings_TypedSetting_bool___set_Value
                            ((Settings_TypedSetting_bool__o *)pSVar6,
                             TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->
                             _persistentCustomSkinPreview,
                             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                  Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
                  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                  }
                  pIVar8 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
                  (__this->fields).__2__current = pIVar8;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
                  (__this->fields).__1__state = 2;
                  return true;
                }
              }
            }
          }
          goto label_05cd04bb;
        }
      }
    }
  }
  else if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pIVar8 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    return true;
  }
  return false;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__34$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34_o* __this, const MethodInfo* method);
// 0x5cd04d0

Il2CppObject *
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__34$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34__System_Collections_IEnumerator_Reset (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34_o* __this, const MethodInfo* method);
// 0x5cd04e0

void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34_o *__this,
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
                  MethodInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterCostumeChange_d__34_System_Collections_IEnum
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__34$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34__System_Collections_IEnumerator_get_Current (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34_o* __this, const MethodInfo* method);
// 0x5cd0520

Il2CppObject *
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__32$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32___ctor (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cd0530

void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32___ctor
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__32$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32__System_IDisposable_Dispose (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32_o* __this, const MethodInfo* method);
// 0x5cd0550

void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32__System_IDisposable_Dispose
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32_o *__this,MethodInfo *method)

{
  return;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__32$$MoveNext
// il2cpp: bool UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32__MoveNext (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32_o* __this, const MethodInfo* method);
// 0x5cd0560
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cd0881: mov edi, 2
// asm:   0x5cd0886: xor esi, esi
// asm:   0x5cd0888: call 0x5df1d90  ; Utility_Util__YieldForFrames()
// asm:   0x5cd088d: lea rdi, [rbx + 0x18]
// asm:   0x5cd0891: mov qword ptr [rbx + 0x18], rax
// asm:   0x5cd0895: mov rsi, rax
// asm:   0x5cd0898: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5cd089d: mov dword ptr [rbx + 0x10], 2
// asm:   0x5cd08a4: mov al, 1
// asm:   0x5cd08a6: jmp 0x5cd0752

bool UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32__MoveNext
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  GameManagers_BaseGameManager_o *pGVar3;
  Characters_DummyHuman_o *__this_00;
  Settings_CustomSkinSettings_o *pSVar4;
  Settings_HumanCustomSkinSettings_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  Il2CppObject *pIVar8;
  
  if (Il2CppMethodInitialized_07547b8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07547b8e = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (((pSVar4 != (Settings_CustomSkinSettings_o *)0x0) &&
        (pSVar5 = (pSVar4->fields).Human, pSVar5 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
       (pSVar6 = (pSVar5->fields).GlobalSkinOverridesEnabled, pSVar6 != (Settings_BoolSetting_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)pSVar6,(__this->fields)._originalGlobalEnabled_5__2,
                 (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if (((pSVar4 != (Settings_CustomSkinSettings_o *)0x0) &&
          (pSVar5 = (pSVar4->fields).Human, pSVar5 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
         (pSVar6 = (pSVar5->fields).SetSpecificSkinsEnabled, pSVar6 != (Settings_BoolSetting_o *)0x0)) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar6,(__this->fields)._originalSetEnabled_5__3,
                   (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        return false;
      }
    }
label_05cd08ab:
    ThrowNullReferenceException();
  }
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar3 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
      if (((pGVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      __this_00 = (Characters_DummyHuman_o *)(*(uint64_t *)((char *)pGVar3 + 0x38));
      if (__this_00 != (Characters_DummyHuman_o *)0x0) {
        bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
        if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_DummyHuman)) {
          pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
          if ((pSVar4 != (Settings_CustomSkinSettings_o *)0x0) &&
             ((pSVar5 = (pSVar4->fields).Human, pSVar5 != (Settings_HumanCustomSkinSettings_o *)0x0 &&
              (pSVar6 = (pSVar5->fields).GlobalSkinOverridesEnabled, pSVar6 != (Settings_BoolSetting_o *)0x0))
             )) {
            (__this->fields)._originalGlobalEnabled_5__2 =
                 ((Settings_TypedSetting_bool__Fields *)&pSVar6->fields)->_value;
            pSVar7 = (pSVar5->fields).SetSpecificSkinsEnabled;
            if (pSVar7 != (Settings_BoolSetting_o *)0x0) {
              (__this->fields)._originalSetEnabled_5__3 = (pSVar7->fields)._value;
              if (Il2CppMethodInitialized_07547b84 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
                Il2CppMethodInitialized_07547b84 = '\x01';
              }
              Settings_TypedSetting_bool___set_Value
                        ((Settings_TypedSetting_bool__o *)pSVar6,
                         TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview,
                         (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
              pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
              if ((pSVar4 != (Settings_CustomSkinSettings_o *)0x0) &&
                 (pSVar5 = (pSVar4->fields).Human, pSVar5 != (Settings_HumanCustomSkinSettings_o *)0x0)) {
                pSVar6 = (pSVar5->fields).SetSpecificSkinsEnabled;
                if (Il2CppMethodInitialized_07547b85 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
                  Il2CppMethodInitialized_07547b85 = '\x01';
                }
                if (pSVar6 != (Settings_BoolSetting_o *)0x0) {
                  Settings_TypedSetting_bool___set_Value
                            ((Settings_TypedSetting_bool__o *)pSVar6,
                             TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->
                             _persistentCustomSkinPreview,
                             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                  Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
                  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                  }
                  pIVar8 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
                  (__this->fields).__2__current = pIVar8;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
                  (__this->fields).__1__state = 2;
                  return true;
                }
              }
            }
          }
          goto label_05cd08ab;
        }
      }
    }
  }
  else if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pIVar8 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    return true;
  }
  return false;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__32$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32_o* __this, const MethodInfo* method);
// 0x5cd08c0

Il2CppObject *
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__32$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32__System_Collections_IEnumerator_Reset (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32_o* __this, const MethodInfo* method);
// 0x5cd08d0

void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32_o *__this,MethodInfo *method)

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
                  MethodInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterReset_d__32_System_Collections_IEnumerator_R
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__32$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32__System_Collections_IEnumerator_get_Current (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32_o* __this, const MethodInfo* method);
// 0x5cd0910

Il2CppObject *
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__31$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31___ctor (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cd0920

void UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31___ctor
               (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__31$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31__System_IDisposable_Dispose (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31_o* __this, const MethodInfo* method);
// 0x5cd0940

void UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31__System_IDisposable_Dispose
               (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__31$$MoveNext
// il2cpp: bool UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31__MoveNext (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31_o* __this, const MethodInfo* method);
// 0x5cd0950

bool UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31__MoveNext
               (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31_o *__this,
               MethodInfo *method)

{
  Settings_HumanCustomSettings_o **targetAddress;
  byte bVar1;
  uint uVar2;
  UI_CharacterEditorCostumePanel_o *__this_00;
  Settings_ListSetting_T__o *obj;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Settings_HumanCustomSettings_o *pSVar5;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  Characters_DummyHuman_o *pCVar8;
  Settings_ColorSetting_o *pSVar9;
  Characters_HumanSetup_o *pCVar10;
  Settings_StringSetting_o *pSVar11;
  UI_ConfirmPopup_o *pUVar12;
  Characters_DummyHuman_c *pCVar13;
  bool bVar14;
  VirtualInvokeData *pVVar15;
  Settings_HumanCustomSet_o *pSVar16;
  Il2CppObject *pIVar17;
  System_Collections_Generic_List_object__o *__this_01;
  ulong uVar18;
  int index;
  Characters_DummyHuman_o **targetAddress_00;
  long lVar19;
  Settings_HumanCustomSet_o *pSVar20;
  
  if (Il2CppMethodInitialized_07547b8f == '\0') {
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
    Il2CppMethodInitialized_07547b8f = '\x01';
  }
  uVar2 = (__this->fields).__1__state;
  if (3 < uVar2) {
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  switch(uVar2) {
  case 0:
    (__this->fields).__1__state = -1;
    targetAddress = &(__this->fields)._settings_5__2;
    (__this->fields)._settings_5__2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pSVar5 = (__this->fields)._settings_5__2;
    if (((pSVar5 != (Settings_HumanCustomSettings_o *)0x0) &&
        (pSVar6 = (pSVar5->fields).CustomSets,
        pSVar6 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) &&
       (obj = (pSVar6->fields).Sets, obj != (Settings_ListSetting_T__o *)0x0)) {
      pIVar3 = (Il2CppClass *)obj->klass;
      uVar18 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar18 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(Settings_IListSetting_c **)((long)&pIVar4->interfaceType + lVar19) ==
              TypeInfo_Settings_IListSetting) {
            pVVar15 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar19) + 2);
            goto label_05cd0cf2;
          }
          lVar19 = lVar19 + 0x10;
        } while (uVar18 * 0x10 != lVar19);
      }
      pVVar15 = GetInterfaceInvokeDataFromVTableSlowPath
                          ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_Settings_IListSetting,2);
label_05cd0cf2:
      __this_01 = (System_Collections_Generic_List_object__o *)
                  (*pVVar15->methodPtr)((Il2CppObject *)obj,pVVar15->method);
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        if (0 < (__this_01->fields)._size) {
          index = 0;
          do {
            pSVar16 = (Settings_HumanCustomSet_o *)
                      System_Collections_Generic_List_object___get_Item
                                (__this_01,index,
                                 (MethodInfo_395CF20 *)
                                 MethodInfo_System_Collections_Generic_List_BaseSetting_get_Item);
            if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) goto label_05cd106e;
            bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
            if (((pSVar16->klass->_2).typeHierarchyDepth < bVar1) ||
               ((pSVar16->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
              pSVar20 = pSVar16;
              goto label_05cd1076;
            }
            pSVar11 = (pSVar16->fields).UniqueId;
            if (pSVar11 == (Settings_StringSetting_o *)0x0) goto label_05cd106e;
            bVar14 = System_String__op_Equality
                               ((pSVar11->fields)._value,(__this->fields).previousProfileId,(MethodInfo *)0x0)
            ;
            if (bVar14) {
              pSVar5 = *targetAddress;
              if (((pSVar5 == (Settings_HumanCustomSettings_o *)0x0) ||
                  (pSVar6 = (pSVar5->fields).CustomSets,
                  pSVar6 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) ||
                 (pSVar7 = (pSVar6->fields).SelectedSetIndex, pSVar7 == (Settings_IntSetting_o *)0x0))
              goto label_05cd106e;
              (__this->fields)._currentSelectedIndex_5__3 = (pSVar7->fields)._value;
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)pSVar7,index,
                         (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
              pCVar13 = TypeInfo_Characters_DummyHuman;
              pSVar20 = (Settings_HumanCustomSet_o *)
                        TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
              if (pSVar20 == (Settings_HumanCustomSet_o *)0x0) goto label_05cd106e;
              bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
              if (((pSVar20->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((pSVar20->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) goto label_05cd1076;
              pUVar12 = (UI_ConfirmPopup_o *)(pSVar20->fields).Preset;
              if (pUVar12 == (UI_ConfirmPopup_o *)0x0) {
                (__this->fields)._character_5__4 = (Characters_DummyHuman_o *)0x0;
              }
              else {
                bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
                if (((pUVar12->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((pUVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_Characters_DummyHuman)) {
label_05cd1083:
                  il2cpp_codegen_raise_invalid_cast_exception(pUVar12,pCVar13);
                }
                (__this->fields)._character_5__4 = (Characters_DummyHuman_o *)pUVar12;
                if (((pUVar12->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((pUVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pCVar13))
                goto label_05cd1083;
              }
              targetAddress_00 = &(__this->fields)._character_5__4;
              Il2CppCodeGenWriteBarrier(targetAddress_00);
              pCVar8 = *targetAddress_00;
              if (((pCVar8 == (Characters_DummyHuman_o *)0x0) ||
                  (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0)) ||
                 (pSVar20 = (Settings_HumanCustomSet_o *)(__this_00->fields)._menu,
                 pSVar20 == (Settings_HumanCustomSet_o *)0x0)) goto label_05cd106e;
              bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
              if (((pSVar20->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((pSVar20->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) goto label_05cd1076;
              pSVar9 = (pSVar20->fields).BootsColor;
              if ((pSVar9 != (Settings_ColorSetting_o *)0x0) &&
                 (pCVar10 = (pCVar8->fields).Setup, pCVar10 != (Characters_HumanSetup_o *)0x0)) {
                Characters_HumanSetup__Load
                          (pCVar10,pSVar16,*(int32_t *)((long)&(pSVar9->fields).DefaultValue + 4),false,
                           (MethodInfo *)0x0);
                if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                }
                pIVar17 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
                (__this->fields).__2__current = pIVar17;
                Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
                (__this->fields).__1__state = 1;
                return true;
              }
              goto label_05cd106e;
            }
            index = index + 1;
          } while (index < (__this_01->fields)._size);
        }
        if ((__this->fields).shouldApplySkinPreview == false) {
          return false;
        }
        pSVar20 = (Settings_HumanCustomSet_o *)
                  TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
        if (pSVar20 != (Settings_HumanCustomSet_o *)0x0) {
          bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
          if (((pSVar20->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar20->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
label_05cd1076:
            il2cpp_codegen_raise_invalid_cast_exception(pSVar20);
          }
          pUVar12 = (UI_ConfirmPopup_o *)(pSVar20->fields).Preset;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          if (pUVar12 != (UI_ConfirmPopup_o *)0x0) {
            bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
            if (((pUVar12->klass->_2).typeHierarchyDepth < bVar1) ||
               ((pUVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Characters_DummyHuman)) {
              il2cpp_codegen_raise_invalid_cast_exception(pUVar12);
            }
          }
          bVar14 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar14) {
            return false;
          }
          if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
            pIVar17 = (Il2CppObject *)
                      UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset(__this_00,(MethodInfo *)0x0);
            (__this->fields).__2__current = pIVar17;
            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
            (__this->fields).__1__state = 3;
            return true;
          }
        }
      }
    }
    break;
  case 1:
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview(true,(MethodInfo *)0x0);
    pSVar5 = (__this->fields)._settings_5__2;
    if (((pSVar5 != (Settings_HumanCustomSettings_o *)0x0) &&
        (pSVar6 = (pSVar5->fields).CustomSets,
        pSVar6 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) &&
       (pSVar7 = (pSVar6->fields).SelectedSetIndex, pSVar7 != (Settings_IntSetting_o *)0x0)) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar7,(__this->fields)._currentSelectedIndex_5__3,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pSVar5 = (__this->fields)._settings_5__2;
      if ((pSVar5 != (Settings_HumanCustomSettings_o *)0x0) &&
         (pSVar6 = (pSVar5->fields).CustomSets,
         pSVar6 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
        pSVar16 = (Settings_HumanCustomSet_o *)
                  Settings_SetSettingsContainer_object___GetSelectedSet
                            ((Settings_SetSettingsContainer_T__o *)pSVar6,
                             (MethodInfo_40477A0 *)
                             MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
        if (pSVar16 != (Settings_HumanCustomSet_o *)0x0) {
          bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
          if (((pSVar16->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar16->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar16);
          }
        }
        pCVar8 = (__this->fields)._character_5__4;
        if (((pCVar8 != (Characters_DummyHuman_o *)0x0) &&
            (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0)) &&
           (pSVar20 = (Settings_HumanCustomSet_o *)(__this_00->fields)._menu,
           pSVar20 != (Settings_HumanCustomSet_o *)0x0)) {
          bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
          if (((pSVar20->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar20->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) goto label_05cd1076;
          pSVar9 = (pSVar20->fields).BootsColor;
          if ((pSVar9 != (Settings_ColorSetting_o *)0x0) &&
             (pCVar10 = (pCVar8->fields).Setup, pCVar10 != (Characters_HumanSetup_o *)0x0)) {
            Characters_HumanSetup__Load
                      (pCVar10,pSVar16,*(int32_t *)((long)&(pSVar9->fields).DefaultValue + 4),false,
                       (MethodInfo *)0x0);
            pCVar8 = (__this->fields)._character_5__4;
            if (pCVar8 != (Characters_DummyHuman_o *)0x0) {
              Characters_DummyCharacter__Idle((Characters_DummyCharacter_o *)pCVar8,(MethodInfo *)0x0);
              if ((__this->fields).shouldApplySkinPreview != false) {
                pIVar17 = (Il2CppObject *)
                          UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset
                                    (__this_00,(MethodInfo *)0x0);
                (__this->fields).__2__current = pIVar17;
                Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
                (__this->fields).__1__state = 2;
                return true;
              }
              goto label_05cd0cb0;
            }
          }
        }
      }
    }
    break;
  case 2:
    (__this->fields).__1__state = -1;
label_05cd0cb0:
    (__this->fields)._character_5__4 = (Characters_DummyHuman_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._character_5__4);
    return false;
  case 3:
    (__this->fields).__1__state = -1;
    return false;
  }
label_05cd106e:
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31_o* __this, const MethodInfo* method);
// 0x5cd10a0

Il2CppObject *
UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__31$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31__System_Collections_IEnumerator_Reset (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31_o* __this, const MethodInfo* method);
// 0x5cd10b0

void UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31_o *__this,
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
                  MethodInfo_UI_CharacterEditorCostumePanel_CapturePreviousProfilePreviewAndApplySkins_d__31_System_Collectio
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__31$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31__System_Collections_IEnumerator_get_Current (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31_o* __this, const MethodInfo* method);
// 0x5cd10f0

Il2CppObject *
UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__38$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38___ctor (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cd1100

void UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38___ctor
               (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__38$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38__System_IDisposable_Dispose (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38_o* __this, const MethodInfo* method);
// 0x5cd1120

void UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38__System_IDisposable_Dispose
               (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38_o *__this,MethodInfo *method)

{
  return;
}


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__38$$MoveNext
// il2cpp: bool UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38__MoveNext (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38_o* __this, const MethodInfo* method);
// 0x5cd1130

bool UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38__MoveNext
               (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_CharacterEditorSkinsPanel_StaticFields *pUVar2;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_07547b90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07547b90 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pIVar3 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview(true,(MethodInfo *)0x0);
    Utility_CharacterPreviewGenerator__SaveCachedPreviewsToDisk((MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07547bb1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
      Il2CppMethodInitialized_07547bb1 = '\x01';
    }
    pUVar2 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields;
    pUVar2->_persistentGlobalSkinPreview = false;
    pUVar2->_persistentCustomSkinPreview = false;
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
  }
  return iVar1 == 0;
}


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__38$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38_o* __this, const MethodInfo* method);
// 0x5cd1230

Il2CppObject *
UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__38$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38__System_Collections_IEnumerator_Reset (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38_o* __this, const MethodInfo* method);
// 0x5cd1240

void UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38_o *__this,MethodInfo *method)

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
                  MethodInfo_UI_CharacterEditorCostumePanel_SaveQuitCaptureCoroutine_d__38_System_Collections_IEnumerator_Res
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__38$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38__System_Collections_IEnumerator_get_Current (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38_o* __this, const MethodInfo* method);
// 0x5cd1280

Il2CppObject *
UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorCostumePanel__get_Title (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x5cca710

System_String_o *
UI_CharacterEditorCostumePanel__get_Title(UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547b75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Costume");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547b75 = '\x01';
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
// 0x5cca7b0

float UI_CharacterEditorCostumePanel__get_Width(UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  return 380.0;
}


// UI.CharacterEditorCostumePanel$$get_Height
// il2cpp: float UI_CharacterEditorCostumePanel__get_Height (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x5cca7c0

float UI_CharacterEditorCostumePanel__get_Height(UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  return 1020.0;
}


// UI.CharacterEditorCostumePanel$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorCostumePanel__get_VerticalSpacing (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x5cca7d0

float UI_CharacterEditorCostumePanel__get_VerticalSpacing
                (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.CharacterEditorCostumePanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorCostumePanel__get_HorizontalPadding (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x5cca7e0

int32_t UI_CharacterEditorCostumePanel__get_HorizontalPadding
                  (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorCostumePanel$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorCostumePanel__get_VerticalPadding (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x5cca7f0

int32_t UI_CharacterEditorCostumePanel__get_VerticalPadding
                  (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorCostumePanel$$get_ScrollBar
// il2cpp: bool UI_CharacterEditorCostumePanel__get_ScrollBar (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x5cca800

bool UI_CharacterEditorCostumePanel__get_ScrollBar
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  return true;
}


// UI.CharacterEditorCostumePanel$$GetPersistentGlobalPreview
// il2cpp: bool UI_CharacterEditorCostumePanel__GetPersistentGlobalPreview (const MethodInfo* method);
// 0x5cca810

bool UI_CharacterEditorCostumePanel__GetPersistentGlobalPreview(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547b84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
    Il2CppMethodInitialized_07547b84 = '\x01';
  }
  return TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview;
}


// UI.CharacterEditorCostumePanel$$GetPersistentCustomPreview
// il2cpp: bool UI_CharacterEditorCostumePanel__GetPersistentCustomPreview (const MethodInfo* method);
// 0x5cca850

bool UI_CharacterEditorCostumePanel__GetPersistentCustomPreview(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547b85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
    Il2CppMethodInitialized_07547b85 = '\x01';
  }
  return TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview;
}


// UI.CharacterEditorCostumePanel$$ResetSkinPreviewToggles
// il2cpp: void UI_CharacterEditorCostumePanel__ResetSkinPreviewToggles (const MethodInfo* method);
// 0x5cca130

void UI_CharacterEditorCostumePanel__ResetSkinPreviewToggles(MethodInfo *method)

{
  UI_CharacterEditorSkinsPanel__ResetSkinPreviewToggles((MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$Setup
// il2cpp: void UI_CharacterEditorCostumePanel__Setup (UI_CharacterEditorCostumePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cca890
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ccad98: lea rdi, [rbp + 0x80]
// asm:   0x5ccad9f: jmp 0x5ccadcb
// asm:   0x5ccb0b9: lea rbx, [r13 + 0x18]
// asm:   0x5ccb0bd: jmp 0x5ccb0cb

void UI_CharacterEditorCostumePanel__Setup
               (UI_CharacterEditorCostumePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o **ppUVar1;
  byte bVar2;
  int iVar3;
  Settings_HumanCustomSettings_o *pSVar4;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  UnityEngine_Transform_o *pUVar7;
  UI_BaseMenu_o *pUVar8;
  UI_IconPickPopup_o *pUVar9;
  Settings_ColorSetting_o *pSVar10;
  UI_ColorPickPopup_o *pUVar11;
  Settings_BoolSetting_o *pSVar12;
  UI_CharacterEditorMenu_c *pUVar13;
  Settings_HumanCustomSet_c *pSVar14;
  System_String_o *subCategory;
  bool bVar15;
  UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *__this_00;
  Settings_HumanCustomSet_o *pSVar16;
  System_String_o *pSVar17;
  MethodInfo *__this_01;
  System_String_o *pSVar18;
  UnityEngine_Events_UnityAction_o *pUVar19;
  System_String_array *pSVar20;
  System_Action_string__o *__this_02;
  System_String_o *pSVar21;
  System_String_array *pSVar22;
  Settings_IntSetting_o *pSVar23;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar24;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  Settings_HumanCustomSet_o **targetAddress;
  UI_CharacterEditorMenu_o *pUVar25;
  UI_CharacterEditorCostumePanel_o *pUVar26;
  UI_CharacterEditorCostumePanel_o *pUVar27;
  int32_t defaultValue;
  
  if (Il2CppMethodInitialized_07547b76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorCostumePanel_OnButtonClick);
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
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__10);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__11);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__12);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__13);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__14);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__15);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__16);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__17);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__18);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__19);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__20);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__21);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__22);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__23);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__24);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__25);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__26);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__4);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__5);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__6);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__7);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__8);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__9);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"BootsColor");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"PantsColor");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomSet");
    il2cpp_codegen_initialize_runtime_metadata(&"HairEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"JacketColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Create");
    il2cpp_codegen_initialize_runtime_metadata(&"SaveQuit");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Logo");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeEffectColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Costume");
    il2cpp_codegen_initialize_runtime_metadata(&"Quit");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadPreset");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"Sex");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Boots");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"HairColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Face");
    il2cpp_codegen_initialize_runtime_metadata(&"Head");
    il2cpp_codegen_initialize_runtime_metadata(&"HairEffectColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Glass");
    il2cpp_codegen_initialize_runtime_metadata(&"Male");
    il2cpp_codegen_initialize_runtime_metadata(&"StrapsColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Cape");
    il2cpp_codegen_initialize_runtime_metadata(&"NoCape");
    il2cpp_codegen_initialize_runtime_metadata(&"Rename");
    il2cpp_codegen_initialize_runtime_metadata(&"ShirtColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Female");
    il2cpp_codegen_initialize_runtime_metadata(&"Cloak");
    il2cpp_codegen_initialize_runtime_metadata(&"Eye");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Import");
    il2cpp_codegen_initialize_runtime_metadata(&"Hair");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Export");
    il2cpp_codegen_initialize_runtime_metadata(&"Hood");
    il2cpp_codegen_initialize_runtime_metadata(&"Hat");
    Il2CppMethodInitialized_07547b76 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0);
  UI_CharacterEditorCostumePanel___c__DisplayClass24_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (UI_CharacterEditorCostumePanel___c__DisplayClass24_0_o *)0x0) goto label_05cccc1e;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,method_00);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar25 = (UI_CharacterEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar25 != (UI_CharacterEditorMenu_o *)0x0) goto label_05ccad3e;
label_05ccadb9:
    (__this->fields)._menu = (UI_CharacterEditorMenu_o *)0x0;
  }
  else {
    pUVar25 = (UI_CharacterEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar25 == (UI_CharacterEditorMenu_o *)0x0) goto label_05ccadb9;
label_05ccad3e:
    pUVar13 = TypeInfo_UI_CharacterEditorMenu;
    bVar2 = (TypeInfo_UI_CharacterEditorMenu->_2).typeHierarchyDepth;
    if (((pUVar25->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pUVar25->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_UI_CharacterEditorMenu
       )) {
label_05cccc30:
      il2cpp_codegen_raise_invalid_cast_exception(pUVar25,pUVar13);
    }
    (__this->fields)._menu = pUVar25;
    if (((pUVar25->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pUVar25->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)pUVar13)) goto label_05cccc30;
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu);
  (__this->fields)._isRebuildingPanel = true;
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if (((pSVar4 == (Settings_HumanCustomSettings_o *)0x0) ||
      (pSVar5 = (pSVar4->fields).CustomSets, pSVar5 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)
      ) || (pSVar16 = (Settings_HumanCustomSet_o *)
                      Settings_SetSettingsContainer_object___GetSelectedSet
                                ((Settings_SetSettingsContainer_T__o *)pSVar5,
                                 (MethodInfo_40477A0 *)
                                 MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet),
           pSVar16 == (Settings_HumanCustomSet_o *)0x0)) goto label_05cccc1e;
  bVar2 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
  if (((pSVar16->klass->_2).typeHierarchyDepth < bVar2) ||
     ((pSVar16->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)
     ) goto label_05cccc28;
  pSVar6 = (pSVar16->fields).UniqueId;
  if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05cccc1e;
  (__this->fields)._previousProfileId = (pSVar6->fields)._value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._previousProfileId);
  pSVar17 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_01,0x18,130.0,20.0,pSVar17,(MethodInfo *)0x0);
  subCategory = "Costume";
  pSVar17 = "CharacterEditor";
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  pUVar7 = (__this->fields).BottomBar;
  pSVar18 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
  pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar19,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__0,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton
            (pUVar7,(UI_ElementStyle_o *)__this_01,pSVar18,80.0,pUVar19,(MethodInfo *)0x0);
  pUVar7 = (__this->fields).BottomBar;
  pSVar18 = UI_UIManager__GetLocaleCommon("LoadPreset",(MethodInfo *)0x0);
  pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar19,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__1,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton
            (pUVar7,(UI_ElementStyle_o *)__this_01,pSVar18,100.0,pUVar19,(MethodInfo *)0x0);
  pUVar7 = (__this->fields).BottomBar;
  pSVar18 = UI_UIManager__GetLocale
                      (pSVar17,subCategory,"SaveQuit","","",
                       (MethodInfo *)0x0);
  pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar19,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__2,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton
            (pUVar7,(UI_ElementStyle_o *)__this_01,pSVar18,120.0,pUVar19,(MethodInfo *)0x0);
  if ((pSVar4 == (Settings_HumanCustomSettings_o *)0x0) ||
     (pSVar5 = (pSVar4->fields).CustomSets, pSVar5 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0))
  goto label_05cccc1e;
  pSVar16 = (Settings_HumanCustomSet_o *)
            Settings_SetSettingsContainer_object___GetSelectedSet
                      ((Settings_SetSettingsContainer_T__o *)pSVar5,
                       (MethodInfo_40477A0 *)
                       MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
  pSVar14 = TypeInfo_Settings_HumanCustomSet;
  if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) {
    (__this_00->fields).set = (Settings_HumanCustomSet_o *)0x0;
  }
  else {
    bVar2 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
    if (((pSVar16->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pSVar16->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
label_05cccc28:
      il2cpp_codegen_raise_invalid_cast_exception(pSVar16);
    }
    (__this_00->fields).set = pSVar16;
    if (((pSVar16->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pSVar16->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)pSVar14)) goto label_05cccc28;
  }
  targetAddress = &(__this_00->fields).set;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pSVar5 = (pSVar4->fields).CustomSets;
  if (pSVar5 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) goto label_05cccc1e;
  pUVar7 = (__this->fields).SinglePanel;
  pSVar23 = (pSVar5->fields).SelectedSetIndex;
  pSVar18 = UI_UIManager__GetLocale
                      (pSVar17,subCategory,"CustomSet","","",
                       (MethodInfo *)0x0);
  pSVar5 = (pSVar4->fields).CustomSets;
  if (pSVar5 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) goto label_05cccc1e;
  ppUVar1 = &(__this->fields).SinglePanel;
  pSVar20 = Settings_SetSettingsContainer_object___GetSetNames
                      ((Settings_SetSettingsContainer_T__o *)pSVar5,
                       (MethodInfo_40482D0 *)
                       MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSetNames);
  pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar19,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__3,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateDropdownSetting
            (pUVar7,(UI_ElementStyle_o *)__this_01,(Settings_BaseSetting_o *)pSVar23,pSVar18,pSVar20,
             "",170.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar19,
             (System_Int32_array *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pUVar7 = *ppUVar1;
  pSVar20 = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
  if (pSVar20 == (System_String_array *)0x0) goto label_05cccc1e;
  if ((int)pSVar20->max_length == 0) goto label_05cccc23;
  pSVar20->m_Items[0] = "Create";
  Il2CppCodeGenWriteBarrier(pSVar20->m_Items);
  if ((pSVar20->max_length & 0xfffffffe) == 0) goto label_05cccc23;
  pSVar20->m_Items[1] = "Delete";
  Il2CppCodeGenWriteBarrier(pSVar20->m_Items + 1);
  if ((uint)pSVar20->max_length < 3) goto label_05cccc23;
  pSVar20->m_Items[2] = "Copy";
  Il2CppCodeGenWriteBarrier(pSVar20->m_Items + 2);
  if ((pSVar20->max_length & 0xfffffffc) == 0) goto label_05cccc23;
  pSVar20->m_Items[3] = "Rename";
  Il2CppCodeGenWriteBarrier(pSVar20->m_Items + 3);
  if ((uint)pSVar20->max_length < 5) goto label_05cccc23;
  pSVar20->m_Items[4] = "Import";
  Il2CppCodeGenWriteBarrier(pSVar20->m_Items + 4);
  if ((uint)pSVar20->max_length < 6) goto label_05cccc23;
  pSVar20->m_Items[5] = "Export";
  Il2CppCodeGenWriteBarrier(pSVar20->m_Items + 5);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_02,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_OnButtonClick,(MethodInfo_4A81BE0 *)0x0);
  UI_ElementFactory__CreateSetActionButtons
            (pUVar7,(UI_ElementStyle_o *)__this_01,pSVar20,__this_02,36.0,(MethodInfo *)0x0);
  UI_BasePanel__CreateHorizontalDivider((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,method_01);
  if (*targetAddress == (Settings_HumanCustomSet_o *)0x0) goto label_05cccc1e;
  pUVar7 = (__this->fields).SinglePanel;
  pSVar23 = ((*targetAddress)->fields).Sex;
  pSVar18 = UI_UIManager__GetLocale
                      (pSVar17,subCategory,"Sex","","",
                       (MethodInfo *)0x0);
  pSVar20 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  pSVar21 = UI_UIManager__GetLocale
                      (pSVar17,subCategory,"Male","","",
                       (MethodInfo *)0x0);
  if (pSVar20 == (System_String_array *)0x0) goto label_05cccc1e;
  if ((int)pSVar20->max_length == 0) goto label_05cccc23;
  pSVar20->m_Items[0] = pSVar21;
  Il2CppCodeGenWriteBarrier(pSVar20->m_Items);
  pSVar21 = UI_UIManager__GetLocale
                      (pSVar17,subCategory,"Female","","",
                       (MethodInfo *)0x0);
  if ((pSVar20->max_length & 0xfffffffe) == 0) goto label_05cccc23;
  pSVar20->m_Items[1] = pSVar21;
  Il2CppCodeGenWriteBarrier(pSVar20->m_Items + 1);
  pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar19,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__4,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateDropdownSetting
            (pUVar7,(UI_ElementStyle_o *)__this_01,(Settings_BaseSetting_o *)pSVar23,pSVar18,pSVar20,
             "",170.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar19,
             (System_Int32_array *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
  }
  pSVar20 = UI_CharacterEditorCostumePanel__GetOptions
                      ((UI_CharacterEditorCostumePanel_o *)TypeInfo_Characters_HumanSetup,
                       "Eye",TypeInfo_Characters_HumanSetup->static_fields->EyeCount,false,
                       (MethodInfo *)pSVar20);
  if (*targetAddress == (Settings_HumanCustomSet_o *)0x0) goto label_05cccc1e;
  pUVar27 = (UI_CharacterEditorCostumePanel_o *)*ppUVar1;
  pSVar23 = ((*targetAddress)->fields).Eye;
  pUVar26 = (UI_CharacterEditorCostumePanel_o *)pSVar17;
  pSVar18 = UI_UIManager__GetLocale
                      (pSVar17,subCategory,"Eye","","",
                       (MethodInfo *)0x0);
  pSVar22 = UI_CharacterEditorCostumePanel__GetIcons(pUVar26,pSVar20,method_02);
  pUVar8 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar8 == (UI_BaseMenu_o *)0x0) goto label_05cccc1e;
  pUVar9 = (pUVar8->fields).IconPickPopup;
  pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar19,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__5,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateIconPickSetting
            ((UnityEngine_Transform_o *)pUVar27,(UI_ElementStyle_o *)__this_01,
             (Settings_BaseSetting_o *)pSVar23,pSVar18,pSVar20,pSVar22,pUVar9,"",
             (System_String_array *)0x0,170.0,40.0,pUVar19,(UI_TooltipPopup_o *)0x0,(System_Int32_array *)0x0,
             (MethodInfo *)0x0);
  pSVar20 = UI_CharacterEditorCostumePanel__GetOptions
                      (pUVar27,"Face",TypeInfo_Characters_HumanSetup->static_fields->FaceCount,
                       true,(MethodInfo *)pSVar20);
  pSVar16 = (__this_00->fields).set;
  if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) goto label_05cccc1e;
  pUVar27 = (UI_CharacterEditorCostumePanel_o *)*ppUVar1;
  pSVar6 = (pSVar16->fields).Face;
  pUVar26 = (UI_CharacterEditorCostumePanel_o *)pSVar17;
  pSVar18 = UI_UIManager__GetLocale
                      (pSVar17,subCategory,"Face","","",
                       (MethodInfo *)0x0);
  pSVar22 = UI_CharacterEditorCostumePanel__GetIcons(pUVar26,pSVar20,method_03);
  pUVar8 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar8 == (UI_BaseMenu_o *)0x0) goto label_05cccc1e;
  pUVar9 = (pUVar8->fields).IconPickPopup;
  pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar19,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__6,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateIconPickSetting
            ((UnityEngine_Transform_o *)pUVar27,(UI_ElementStyle_o *)__this_01,
             (Settings_BaseSetting_o *)pSVar6,pSVar18,pSVar20,pSVar22,pUVar9,"",
             (System_String_array *)0x0,170.0,40.0,pUVar19,(UI_TooltipPopup_o *)0x0,(System_Int32_array *)0x0,
             (MethodInfo *)0x0);
  pSVar20 = UI_CharacterEditorCostumePanel__GetOptions
                      (pUVar27,"Glass",TypeInfo_Characters_HumanSetup->static_fields->GlassCount
                       ,true,(MethodInfo *)pSVar20);
  pSVar16 = (__this_00->fields).set;
  if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) goto label_05cccc1e;
  pUVar27 = (UI_CharacterEditorCostumePanel_o *)*ppUVar1;
  pSVar6 = (pSVar16->fields).Glass;
  pUVar26 = (UI_CharacterEditorCostumePanel_o *)pSVar17;
  pSVar18 = UI_UIManager__GetLocale
                      (pSVar17,subCategory,"Glass","","",
                       (MethodInfo *)0x0);
  pSVar22 = UI_CharacterEditorCostumePanel__GetIcons(pUVar26,pSVar20,method_04);
  pUVar8 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar8 == (UI_BaseMenu_o *)0x0) goto label_05cccc1e;
  pUVar9 = (pUVar8->fields).IconPickPopup;
  pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar19,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__7,
             (MethodInfo *)0x0);
  pMVar24 = __this_01;
  UI_ElementFactory__CreateIconPickSetting
            ((UnityEngine_Transform_o *)pUVar27,(UI_ElementStyle_o *)__this_01,
             (Settings_BaseSetting_o *)pSVar6,pSVar18,pSVar20,pSVar22,pUVar9,"",
             (System_String_array *)0x0,170.0,40.0,pUVar19,(UI_TooltipPopup_o *)0x0,(System_Int32_array *)0x0,
             (MethodInfo *)0x0);
  pSVar20 = UI_CharacterEditorCostumePanel__GetHairOptions(pUVar27,pMVar24);
  pSVar16 = (__this_00->fields).set;
  if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) goto label_05cccc1e;
  pUVar7 = *ppUVar1;
  pSVar6 = (pSVar16->fields).Hair;
  pUVar27 = (UI_CharacterEditorCostumePanel_o *)pSVar17;
  pSVar18 = UI_UIManager__GetLocale
                      (pSVar17,subCategory,"Hair","","",
                       (MethodInfo *)0x0);
  pSVar22 = UI_CharacterEditorCostumePanel__GetIcons(pUVar27,pSVar20,method_05);
  pUVar8 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar8 == (UI_BaseMenu_o *)0x0) goto label_05cccc1e;
  pUVar9 = (pUVar8->fields).IconPickPopup;
  pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar19,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__8,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateIconPickSetting
            (pUVar7,(UI_ElementStyle_o *)__this_01,(Settings_BaseSetting_o *)pSVar6,pSVar18,pSVar20,pSVar22,
             pUVar9,"",(System_String_array *)0x0,170.0,40.0,pUVar19,
             (UI_TooltipPopup_o *)0x0,(System_Int32_array *)0x0,(MethodInfo *)0x0);
  pUVar27 = (UI_CharacterEditorCostumePanel_o *)0x0;
  bVar15 = PatreonEffects_PatreonHelper__LocalPlayerHasCharacterEffectAccess((MethodInfo *)0x0);
  pMVar24 = extraout_RDX;
  if (bVar15) {
    if (*targetAddress == (Settings_HumanCustomSet_o *)0x0) goto label_05cccc1e;
    pUVar7 = *ppUVar1;
    pSVar6 = ((*targetAddress)->fields).HairEffect;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar18 = UI_UIManager__GetLocale
                        (pSVar17,subCategory,"HairEffect","",""
                         ,(MethodInfo *)0x0);
    if ((TypeInfo_PatreonEffects_CharacterEffectPresets->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_CharacterEffectPresets);
    }
    pSVar20 = TypeInfo_PatreonEffects_CharacterEffectPresets->static_fields->Options;
    pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar19,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__9,
               (MethodInfo *)0x0);
    UI_ElementFactory__CreateDropdownSetting
              (pUVar7,(UI_ElementStyle_o *)__this_01,(Settings_BaseSetting_o *)pSVar6,pSVar18,pSVar20,
               "",170.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar19,
               (System_Int32_array *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    pSVar16 = (__this_00->fields).set;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) goto label_05cccc1e;
    pUVar27 = (UI_CharacterEditorCostumePanel_o *)*ppUVar1;
    pSVar10 = (pSVar16->fields).HairEffectColor;
    pSVar18 = UI_UIManager__GetLocale
                        (pSVar17,subCategory,"HairEffectColor","",""
                         ,(MethodInfo *)0x0);
    pUVar8 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar8 == (UI_BaseMenu_o *)0x0) goto label_05cccc1e;
    pUVar11 = (pUVar8->fields).ColorPickPopup;
    pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar19,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__10,
               (MethodInfo *)0x0);
    UI_ElementFactory__CreateColorSetting
              ((UnityEngine_Transform_o *)pUVar27,(UI_ElementStyle_o *)__this_01,
               (Settings_BaseSetting_o *)pSVar10,pSVar18,pUVar11,"",90.0,30.0,pUVar19,
               (MethodInfo *)0x0);
    pMVar24 = extraout_RDX_00;
  }
  pSVar20 = UI_CharacterEditorCostumePanel__GetCostumeOptions(pUVar27,*targetAddress,pMVar24);
  if (*targetAddress == (Settings_HumanCustomSet_o *)0x0) goto label_05cccc1e;
  pUVar7 = *ppUVar1;
  pSVar23 = ((*targetAddress)->fields).Costume;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar27 = (UI_CharacterEditorCostumePanel_o *)pSVar17;
  pSVar18 = UI_UIManager__GetLocale
                      (pSVar17,subCategory,"Costume","","",
                       (MethodInfo *)0x0);
  pSVar22 = UI_CharacterEditorCostumePanel__GetIcons(pUVar27,pSVar20,method_06);
  pUVar8 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar8 == (UI_BaseMenu_o *)0x0) goto label_05cccc1e;
  pUVar9 = (pUVar8->fields).IconPickPopup;
  pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar19,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__11,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateIconPickSetting
            (pUVar7,(UI_ElementStyle_o *)__this_01,(Settings_BaseSetting_o *)pSVar23,pSVar18,pSVar20,pSVar22,
             pUVar9,"",(System_String_array *)0x0,170.0,40.0,pUVar19,
             (UI_TooltipPopup_o *)0x0,(System_Int32_array *)0x0,(MethodInfo *)0x0);
  pSVar16 = (__this_00->fields).set;
  if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) goto label_05cccc1e;
  pUVar7 = *ppUVar1;
  pSVar23 = (pSVar16->fields).Boots;
  pUVar27 = (UI_CharacterEditorCostumePanel_o *)pSVar17;
  pMVar24 = (MethodInfo *)"";
  pSVar18 = UI_UIManager__GetLocale
                      (pSVar17,subCategory,"Boots","","",
                       (MethodInfo *)0x0);
  pSVar20 = UI_CharacterEditorCostumePanel__GetOptions(pUVar27,"Boots",2,false,pMVar24);
  pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar19,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__12,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateDropdownSetting
            (pUVar7,(UI_ElementStyle_o *)__this_01,(Settings_BaseSetting_o *)pSVar23,pSVar18,pSVar20,
             "",170.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar19,
             (System_Int32_array *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if (bVar15) {
    if (*targetAddress == (Settings_HumanCustomSet_o *)0x0) goto label_05cccc1e;
    pUVar7 = *ppUVar1;
    pSVar6 = ((*targetAddress)->fields).BladeEffect;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar18 = UI_UIManager__GetLocale
                        (pSVar17,subCategory,"BladeEffect","",""
                         ,(MethodInfo *)0x0);
    if ((TypeInfo_PatreonEffects_CharacterEffectPresets->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_CharacterEffectPresets);
    }
    pSVar20 = TypeInfo_PatreonEffects_CharacterEffectPresets->static_fields->Options;
    pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar19,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__13,
               (MethodInfo *)0x0);
    UI_ElementFactory__CreateDropdownSetting
              (pUVar7,(UI_ElementStyle_o *)__this_01,(Settings_BaseSetting_o *)pSVar6,pSVar18,pSVar20,
               "",170.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar19,
               (System_Int32_array *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    pSVar16 = (__this_00->fields).set;
    if (pSVar16 == (Settings_HumanCustomSet_o *)0x0) goto label_05cccc1e;
    pUVar7 = *ppUVar1;
    pSVar10 = (pSVar16->fields).BladeEffectColor;
    pSVar18 = UI_UIManager__GetLocale
                        (pSVar17,subCategory,"BladeEffectColor","",""
                         ,(MethodInfo *)0x0);
    pUVar8 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar8 == (UI_BaseMenu_o *)0x0) goto label_05cccc1e;
    pUVar11 = (pUVar8->fields).ColorPickPopup;
    pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar19,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__14,
               (MethodInfo *)0x0);
    UI_ElementFactory__CreateColorSetting
              (pUVar7,(UI_ElementStyle_o *)__this_01,(Settings_BaseSetting_o *)pSVar10,pSVar18,pUVar11,
               "",90.0,30.0,pUVar19,(MethodInfo *)0x0);
  }
  pSVar16 = *targetAddress;
  if ((pSVar16 == (Settings_HumanCustomSet_o *)0x0) ||
     (pSVar23 = (pSVar16->fields).Cape, pSVar23 == (Settings_IntSetting_o *)0x0)) goto label_05cccc1e;
  iVar3 = (pSVar23->fields)._value;
  if (iVar3 == 2) {
    pSVar12 = (pSVar16->fields).HoodUp;
    if (pSVar12 == (Settings_BoolSetting_o *)0x0) goto label_05cccc1e;
    defaultValue = 3;
    if ((pSVar12->fields)._value == false) goto label_05ccbf65;
  }
  else {
label_05ccbf65:
    defaultValue = iVar3;
  }
  pSVar23 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar23,defaultValue,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this_00->fields).capeOption = pSVar23;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).capeOption);
  pUVar7 = *ppUVar1;
  pSVar23 = (__this_00->fields).capeOption;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar18 = UI_UIManager__GetLocale
                      (pSVar17,subCategory,"Cape","","",
                       (MethodInfo *)0x0);
  pSVar20 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  pSVar21 = UI_UIManager__GetLocale
                      (pSVar17,subCategory,"NoCape","","",
                       (MethodInfo *)0x0);
  if (pSVar20 == (System_String_array *)0x0) {
label_05cccc1e:
    ThrowNullReferenceException();
  }
  if ((int)pSVar20->max_length != 0) {
    pSVar20->m_Items[0] = pSVar21;
    Il2CppCodeGenWriteBarrier(pSVar20->m_Items);
    pSVar21 = UI_UIManager__GetLocale
                        (pSVar17,subCategory,"Cape","",""
                         ,(MethodInfo *)0x0);
    if ((pSVar20->max_length & 0xfffffffe) != 0) {
      pSVar20->m_Items[1] = pSVar21;
      Il2CppCodeGenWriteBarrier(pSVar20->m_Items + 1);
      pSVar21 = UI_UIManager__GetLocale
                          ("SettingsPopup","Skins.Human","Cloak",
                           "","",(MethodInfo *)0x0);
      if (2 < (uint)pSVar20->max_length) {
        pSVar20->m_Items[2] = pSVar21;
        Il2CppCodeGenWriteBarrier(pSVar20->m_Items + 2);
        pSVar21 = UI_UIManager__GetLocale
                            (pSVar17,subCategory,"Hood","",
                             "",(MethodInfo *)0x0);
        if ((pSVar20->max_length & 0xfffffffc) != 0) {
          pSVar20->m_Items[3] = pSVar21;
          Il2CppCodeGenWriteBarrier(pSVar20->m_Items + 3);
          pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    (pUVar19,(Il2CppObject *)__this_00,
                     (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__15,
                     (MethodInfo *)0x0);
          UI_ElementFactory__CreateDropdownSetting
                    (pUVar7,(UI_ElementStyle_o *)__this_01,(Settings_BaseSetting_o *)pSVar23,pSVar18,pSVar20,
                     "",170.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar19,
                     (System_Int32_array *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
          pSVar16 = (__this_00->fields).set;
          if (pSVar16 != (Settings_HumanCustomSet_o *)0x0) {
            pUVar7 = *ppUVar1;
            pSVar23 = (pSVar16->fields).Logo;
            pUVar27 = (UI_CharacterEditorCostumePanel_o *)pSVar17;
            pMVar24 = (MethodInfo *)"";
            pSVar18 = UI_UIManager__GetLocale
                                (pSVar17,subCategory,"Logo","",
                                 "",(MethodInfo *)0x0);
            pSVar20 = UI_CharacterEditorCostumePanel__GetOptions
                                (pUVar27,"Logo",4,false,pMVar24);
            pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      (pUVar19,(Il2CppObject *)__this_00,
                       (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__16,
                       (MethodInfo *)0x0);
            UI_ElementFactory__CreateDropdownSetting
                      (pUVar7,(UI_ElementStyle_o *)__this_01,(Settings_BaseSetting_o *)pSVar23,pSVar18,pSVar20
                       ,"",170.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar19,
                       (System_Int32_array *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
            if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
            }
            pSVar20 = UI_CharacterEditorCostumePanel__GetOptions
                                ((UI_CharacterEditorCostumePanel_o *)TypeInfo_Characters_HumanSetup,
                                 "Hat",TypeInfo_Characters_HumanSetup->static_fields->HatCount
                                 ,true,(MethodInfo *)pSVar20);
            if (*targetAddress != (Settings_HumanCustomSet_o *)0x0) {
              pUVar27 = (UI_CharacterEditorCostumePanel_o *)*ppUVar1;
              pSVar6 = ((*targetAddress)->fields).Hat;
              pUVar26 = (UI_CharacterEditorCostumePanel_o *)pSVar17;
              pSVar18 = UI_UIManager__GetLocale
                                  (pSVar17,subCategory,"Hat","",
                                   "",(MethodInfo *)0x0);
              pSVar22 = UI_CharacterEditorCostumePanel__GetIcons(pUVar26,pSVar20,method_07);
              pUVar8 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
              if (pUVar8 != (UI_BaseMenu_o *)0x0) {
                pUVar9 = (pUVar8->fields).IconPickPopup;
                pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                UnityEngine_Events_UnityAction___ctor
                          (pUVar19,(Il2CppObject *)__this_00,
                           (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__17
                           ,(MethodInfo *)0x0);
                UI_ElementFactory__CreateIconPickSetting
                          ((UnityEngine_Transform_o *)pUVar27,(UI_ElementStyle_o *)__this_01,
                           (Settings_BaseSetting_o *)pSVar6,pSVar18,pSVar20,pSVar22,pUVar9,
                           "",(System_String_array *)0x0,170.0,40.0,pUVar19,
                           (UI_TooltipPopup_o *)0x0,(System_Int32_array *)0x0,(MethodInfo *)0x0);
                pSVar20 = UI_CharacterEditorCostumePanel__GetOptions
                                    (pUVar27,"Head",
                                     TypeInfo_Characters_HumanSetup->static_fields->HeadCount,true,
                                     (MethodInfo *)pSVar20);
                pSVar16 = (__this_00->fields).set;
                if (pSVar16 != (Settings_HumanCustomSet_o *)0x0) {
                  pUVar27 = (UI_CharacterEditorCostumePanel_o *)*ppUVar1;
                  pSVar6 = (pSVar16->fields).Head;
                  pUVar26 = (UI_CharacterEditorCostumePanel_o *)pSVar17;
                  pSVar18 = UI_UIManager__GetLocale
                                      (pSVar17,subCategory,"Head","",
                                       "",(MethodInfo *)0x0);
                  pSVar22 = UI_CharacterEditorCostumePanel__GetIcons(pUVar26,pSVar20,method_08);
                  pUVar8 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                  if (pUVar8 != (UI_BaseMenu_o *)0x0) {
                    pUVar9 = (pUVar8->fields).IconPickPopup;
                    pUVar19 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                    UnityEngine_Events_UnityAction___ctor
                              (pUVar19,(Il2CppObject *)__this_00,
                               (intptr_t)
                               MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__18,
                               (MethodInfo *)0x0);
                    UI_ElementFactory__CreateIconPickSetting
                              ((UnityEngine_Transform_o *)pUVar27,(UI_ElementStyle_o *)__this_01,
                               (Settings_BaseSetting_o *)pSVar6,pSVar18,pSVar20,pSVar22,pUVar9,
                               "",(System_String_array *)0x0,170.0,40.0,pUVar19,
                               (UI_TooltipPopup_o *)0x0,(System_Int32_array *)0x0,(MethodInfo *)0x0);
                    pSVar20 = UI_CharacterEditorCostumePanel__GetOptions
                                        (pUVar27,"Back",
                                         TypeInfo_Characters_HumanSetup->static_fields->BackCount,true,
                                         (MethodInfo *)pSVar20);
                    pSVar16 = (__this_00->fields).set;
                    if (pSVar16 != (Settings_HumanCustomSet_o *)0x0) {
                      pUVar7 = *ppUVar1;
                      pSVar6 = (pSVar16->fields).Back;
                      pUVar27 = (UI_CharacterEditorCostumePanel_o *)pSVar17;
                      pSVar18 = UI_UIManager__GetLocale
                                          (pSVar17,subCategory,"Back","",
                                           "",(MethodInfo *)0x0);
                      pSVar22 = UI_CharacterEditorCostumePanel__GetIcons(pUVar27,pSVar20,method_09);
                      pUVar8 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                      if (pUVar8 != (UI_BaseMenu_o *)0x0) {
                        pUVar9 = (pUVar8->fields).IconPickPopup;
                        pUVar19 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                        UnityEngine_Events_UnityAction___ctor
                                  (pUVar19,(Il2CppObject *)__this_00,
                                   (intptr_t)
                                   MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__19,
                                   (MethodInfo *)0x0);
                        UI_ElementFactory__CreateIconPickSetting
                                  (pUVar7,(UI_ElementStyle_o *)__this_01,(Settings_BaseSetting_o *)pSVar6,
                                   pSVar18,pSVar20,pSVar22,pUVar9,"",
                                   (System_String_array *)0x0,170.0,40.0,pUVar19,(UI_TooltipPopup_o *)0x0,
                                   (System_Int32_array *)0x0,(MethodInfo *)0x0);
                        pSVar16 = (__this_00->fields).set;
                        if (pSVar16 != (Settings_HumanCustomSet_o *)0x0) {
                          pUVar7 = *ppUVar1;
                          pSVar10 = (pSVar16->fields).SkinColor;
                          pSVar18 = UI_UIManager__GetLocale
                                              (pSVar17,subCategory,"SkinColor",""
                                               ,"",(MethodInfo *)0x0);
                          pUVar8 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                          if (pUVar8 != (UI_BaseMenu_o *)0x0) {
                            pUVar11 = (pUVar8->fields).ColorPickPopup;
                            pUVar19 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                            UnityEngine_Events_UnityAction___ctor
                                      (pUVar19,(Il2CppObject *)__this_00,
                                       (intptr_t)
                                       MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__20
                                       ,(MethodInfo *)0x0);
                            UI_ElementFactory__CreateColorSetting
                                      (pUVar7,(UI_ElementStyle_o *)__this_01,(Settings_BaseSetting_o *)pSVar10
                                       ,pSVar18,pUVar11,"",90.0,30.0,pUVar19,
                                       (MethodInfo *)0x0);
                            pSVar16 = (__this_00->fields).set;
                            if (pSVar16 != (Settings_HumanCustomSet_o *)0x0) {
                              pUVar7 = *ppUVar1;
                              pSVar10 = (pSVar16->fields).HairColor;
                              pSVar18 = UI_UIManager__GetLocale
                                                  (pSVar17,subCategory,"HairColor",
                                                   "","",
                                                   (MethodInfo *)0x0);
                              pUVar8 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                              if (pUVar8 != (UI_BaseMenu_o *)0x0) {
                                pUVar11 = (pUVar8->fields).ColorPickPopup;
                                pUVar19 = il2cpp_codegen_object_new
                                                    ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                                UnityEngine_Events_UnityAction___ctor
                                          (pUVar19,(Il2CppObject *)__this_00,
                                           (intptr_t)
                                           MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__21
                                           ,(MethodInfo *)0x0);
                                UI_ElementFactory__CreateColorSetting
                                          (pUVar7,(UI_ElementStyle_o *)__this_01,
                                           (Settings_BaseSetting_o *)pSVar10,pSVar18,pUVar11,
                                           "",90.0,30.0,pUVar19,(MethodInfo *)0x0);
                                pSVar16 = (__this_00->fields).set;
                                if (pSVar16 != (Settings_HumanCustomSet_o *)0x0) {
                                  pUVar7 = *ppUVar1;
                                  pSVar10 = (pSVar16->fields).ShirtColor;
                                  pSVar18 = UI_UIManager__GetLocale
                                                      (pSVar17,subCategory,"ShirtColor",
                                                       "","",
                                                       (MethodInfo *)0x0);
                                  pUVar8 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                  if (pUVar8 != (UI_BaseMenu_o *)0x0) {
                                    pUVar11 = (pUVar8->fields).ColorPickPopup;
                                    pUVar19 = il2cpp_codegen_object_new
                                                        ((Il2CppClass *)
                                                         TypeInfo_UnityEngine_Events_UnityAction);
                                    UnityEngine_Events_UnityAction___ctor
                                              (pUVar19,(Il2CppObject *)__this_00,
                                               (intptr_t)
                                               MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__22
                                               ,(MethodInfo *)0x0);
                                    UI_ElementFactory__CreateColorSetting
                                              (pUVar7,(UI_ElementStyle_o *)__this_01,
                                               (Settings_BaseSetting_o *)pSVar10,pSVar18,pUVar11,
                                               "",90.0,30.0,pUVar19,(MethodInfo *)0x0);
                                    pSVar16 = (__this_00->fields).set;
                                    if (pSVar16 != (Settings_HumanCustomSet_o *)0x0) {
                                      pUVar7 = *ppUVar1;
                                      pSVar10 = (pSVar16->fields).StrapsColor;
                                      pSVar18 = UI_UIManager__GetLocale
                                                          (pSVar17,subCategory,"StrapsColor",
                                                           "","",
                                                           (MethodInfo *)0x0);
                                      pUVar8 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                      if (pUVar8 != (UI_BaseMenu_o *)0x0) {
                                        pUVar11 = (pUVar8->fields).ColorPickPopup;
                                        pUVar19 = il2cpp_codegen_object_new
                                                            ((Il2CppClass *)
                                                             TypeInfo_UnityEngine_Events_UnityAction);
                                        UnityEngine_Events_UnityAction___ctor
                                                  (pUVar19,(Il2CppObject *)__this_00,
                                                   (intptr_t)
                                                   MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__23
                                                   ,(MethodInfo *)0x0);
                                        UI_ElementFactory__CreateColorSetting
                                                  (pUVar7,(UI_ElementStyle_o *)__this_01,
                                                   (Settings_BaseSetting_o *)pSVar10,pSVar18,pUVar11,
                                                   "",90.0,30.0,pUVar19,(MethodInfo *)0x0);
                                        pSVar16 = (__this_00->fields).set;
                                        if (pSVar16 != (Settings_HumanCustomSet_o *)0x0) {
                                          pUVar7 = *ppUVar1;
                                          pSVar10 = (pSVar16->fields).PantsColor;
                                          pSVar18 = UI_UIManager__GetLocale
                                                              (pSVar17,subCategory,"PantsColor",
                                                               "","",
                                                               (MethodInfo *)0x0);
                                          pUVar8 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                          if (pUVar8 != (UI_BaseMenu_o *)0x0) {
                                            pUVar11 = (pUVar8->fields).ColorPickPopup;
                                            pUVar19 = il2cpp_codegen_object_new
                                                                ((Il2CppClass *)
                                                                 TypeInfo_UnityEngine_Events_UnityAction);
                                            UnityEngine_Events_UnityAction___ctor
                                                      (pUVar19,(Il2CppObject *)__this_00,
                                                       (intptr_t)
                                                       MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__24
                                                       ,(MethodInfo *)0x0);
                                            UI_ElementFactory__CreateColorSetting
                                                      (pUVar7,(UI_ElementStyle_o *)__this_01,
                                                       (Settings_BaseSetting_o *)pSVar10,pSVar18,pUVar11,
                                                       "",90.0,30.0,pUVar19,
                                                       (MethodInfo *)0x0);
                                            pSVar16 = (__this_00->fields).set;
                                            if (pSVar16 != (Settings_HumanCustomSet_o *)0x0) {
                                              pUVar7 = *ppUVar1;
                                              pSVar10 = (pSVar16->fields).JacketColor;
                                              pSVar18 = UI_UIManager__GetLocale
                                                                  (pSVar17,subCategory,"JacketColor",
                                                                   "",""
                                                                   ,(MethodInfo *)0x0);
                                              pUVar8 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                              if (pUVar8 != (UI_BaseMenu_o *)0x0) {
                                                pUVar11 = (pUVar8->fields).ColorPickPopup;
                                                pUVar19 = il2cpp_codegen_object_new
                                                                    ((Il2CppClass *)
                                                                     TypeInfo_UnityEngine_Events_UnityAction);
                                                UnityEngine_Events_UnityAction___ctor
                                                          (pUVar19,(Il2CppObject *)__this_00,
                                                           (intptr_t)
                                                                                                                      
                                                       MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__25
                                                       ,(MethodInfo *)0x0);
                                                UI_ElementFactory__CreateColorSetting
                                                          (pUVar7,(UI_ElementStyle_o *)__this_01,
                                                           (Settings_BaseSetting_o *)pSVar10,pSVar18,pUVar11,
                                                           "",90.0,30.0,pUVar19,
                                                           (MethodInfo *)0x0);
                                                pSVar16 = (__this_00->fields).set;
                                                if (pSVar16 != (Settings_HumanCustomSet_o *)0x0) {
                                                  pUVar7 = *ppUVar1;
                                                  pSVar10 = (pSVar16->fields).BootsColor;
                                                  pSVar17 = UI_UIManager__GetLocale
                                                                      (pSVar17,subCategory,
                                                                       "BootsColor",
                                                                       "",
                                                                       "",(MethodInfo *)0x0
                                                                      );
                                                  pUVar8 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                                  if (pUVar8 != (UI_BaseMenu_o *)0x0) {
                                                    pUVar11 = (pUVar8->fields).ColorPickPopup;
                                                    pUVar19 = il2cpp_codegen_object_new
                                                                        ((Il2CppClass *)
                                                                                                                                                  
                                                       TypeInfo_UnityEngine_Events_UnityAction);
                                                    UnityEngine_Events_UnityAction___ctor
                                                              (pUVar19,(Il2CppObject *)__this_00,
                                                               (intptr_t)
                                                                                                                              
                                                       MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__26
                                                       ,(MethodInfo *)0x0);
                                                    UI_ElementFactory__CreateColorSetting
                                                              (pUVar7,(UI_ElementStyle_o *)__this_01,
                                                               (Settings_BaseSetting_o *)pSVar10,pSVar17,
                                                               pUVar11,"",90.0,30.0,pUVar19
                                                               ,(MethodInfo *)0x0);
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
          goto label_05cccc1e;
        }
      }
    }
  }
label_05cccc23:
  ThrowIndexOutOfRangeException();
}


// UI.CharacterEditorCostumePanel$$GetOptions
// il2cpp: System_String_array* UI_CharacterEditorCostumePanel__GetOptions (UI_CharacterEditorCostumePanel_o* __this, System_String_o* prefix, int32_t options, bool includeNone, const MethodInfo* method);
// 0x5cccc40
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cccd28: mov dword ptr [rsp + 0xc], 0
// asm:   0x5cccd30: test r15d, r15d
// asm:   0x5cccd33: jle 0x5cccdf1

System_String_array *
UI_CharacterEditorCostumePanel__GetOptions
          (UI_CharacterEditorCostumePanel_o *__this,System_String_o *prefix,int32_t options,bool includeNone,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar4;
  System_String_array *pSVar5;
  int32_t local_2c;
  
  if (Il2CppMethodInitialized_07547b77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07547b77 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (includeNone) {
    pSVar4 = System_String__Concat_52f0320(prefix,"None",(MethodInfo *)0x0);
    pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_05ccce15;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this_00->fields)._items;
    if (pSVar5 == (System_String_array *)0x0) goto label_05ccce15;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar5->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      pSVar5->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar4,
                 (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
    }
  }
  if (options < 1) {
    local_2c = 0;
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
label_05ccce15:
      ThrowNullReferenceException();
    }
  }
  else {
    local_2c = 0;
    if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
      pSVar4 = System_Int32__ToString(&local_2c,(MethodInfo *)0x0);
      System_String__Concat_52f0320(prefix,pSVar4,(MethodInfo *)0x0);
      ThrowNullReferenceException();
    }
    do {
      pSVar4 = System_Int32__ToString(&local_2c,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_52f0320(prefix,pSVar4,(MethodInfo *)0x0);
      pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this_00->fields)._items;
      if (pSVar5 == (System_String_array *)0x0) goto label_05ccce15;
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar5->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar5->m_Items[(int)uVar2] = pSVar4;
        Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar4,
                   (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
      }
      local_2c = local_2c + 1;
    } while (local_2c < options);
  }
  pSVar5 = (System_String_array *)
           System_Collections_Generic_List_object___ToArray
                     ((System_Collections_Generic_List_object__o *)__this_00,
                      (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
  return pSVar5;
}


// UI.CharacterEditorCostumePanel$$GetHairOptions
// il2cpp: System_String_array* UI_CharacterEditorCostumePanel__GetHairOptions (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x5ccd030

System_String_array *
UI_CharacterEditorCostumePanel__GetHairOptions(UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  undefined8 in_RAX;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar4;
  System_String_array *pSVar5;
  System_String_o **ppSVar6;
  int iVar7;
  undefined8 local_38;
  
  local_38._4_4_ = (uint)((ulong)in_RAX >> 0x20);
  if (Il2CppMethodInitialized_07547b78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"HairF");
    il2cpp_codegen_initialize_runtime_metadata(&"HairM");
    Il2CppMethodInitialized_07547b78 = '\x01';
  }
  local_38 = (ulong)local_38._4_4_ << 0x20;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
    local_38 = local_38 & 0xffffffff;
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    }
    if (TypeInfo_Characters_HumanSetup->static_fields->HairMCount < 1) {
      local_38 = local_38 & 0xffffffff00000000;
      if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
      }
      if (TypeInfo_Characters_HumanSetup->static_fields->HairFCount < 1) goto label_05ccd2ed;
      pSVar4 = System_Int32__ToString((int32_t *)&local_38,(MethodInfo *)0x0);
      ppSVar6 = &"HairF";
    }
    else {
      pSVar4 = System_Int32__ToString((int32_t *)((long)&local_38 + 4),(MethodInfo *)0x0);
      ppSVar6 = &"HairM";
    }
    System_String__Concat_52f0320(*ppSVar6,pSVar4,(MethodInfo *)0x0);
  }
  else {
    iVar7 = 0;
    while( true ) {
      local_38 = CONCAT44(iVar7,(int32_t)local_38);
      if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
      }
      if (TypeInfo_Characters_HumanSetup->static_fields->HairMCount <= iVar7) {
        iVar7 = 0;
        while( true ) {
          local_38 = CONCAT44(local_38._4_4_,iVar7);
          if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
          }
          if (TypeInfo_Characters_HumanSetup->static_fields->HairFCount <= iVar7) {
            pSVar5 = (System_String_array *)
                     System_Collections_Generic_List_object___ToArray
                               ((System_Collections_Generic_List_object__o *)__this_00,
                                (MethodInfo_395F5A0 *)
                                MethodInfo_System_Collections_Generic_List_string_ToArray);
            return pSVar5;
          }
          pSVar4 = System_Int32__ToString((int32_t *)&local_38,(MethodInfo *)0x0);
          pSVar4 = System_String__Concat_52f0320("HairF",pSVar4,(MethodInfo *)0x0);
          pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_00->fields)._items;
          if (pSVar5 == (System_String_array *)0x0) break;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = pSVar4;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar4,
                       (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
          }
          iVar7 = (int32_t)local_38 + 1;
        }
        break;
      }
      pSVar4 = System_Int32__ToString((int32_t *)((long)&local_38 + 4),(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_52f0320("HairM",pSVar4,(MethodInfo *)0x0);
      pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this_00->fields)._items;
      if (pSVar5 == (System_String_array *)0x0) break;
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar5->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar5->m_Items[(int)uVar2] = pSVar4;
        Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar4,
                   (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
      }
      iVar7 = local_38._4_4_ + 1;
    }
  }
label_05ccd2ed:
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel$$GetCostumeOptions
// il2cpp: System_String_array* UI_CharacterEditorCostumePanel__GetCostumeOptions (UI_CharacterEditorCostumePanel_o* __this, Settings_HumanCustomSet_o* set, const MethodInfo* method);
// 0x5ccd300

System_String_array *
UI_CharacterEditorCostumePanel__GetCostumeOptions
          (UI_CharacterEditorCostumePanel_o *__this,Settings_HumanCustomSet_o *set,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Settings_IntSetting_o *pSVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  System_String_o **ppSVar7;
  int iVar8;
  undefined8 local_38;
  
  if (Il2CppMethodInitialized_07547b79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"CostumeM");
    il2cpp_codegen_initialize_runtime_metadata(&"CostumeF");
    Il2CppMethodInitialized_07547b79 = '\x01';
  }
  local_38 = 0;
  if ((set == (Settings_HumanCustomSet_o *)0x0) ||
     (pSVar3 = (set->fields).Sex, pSVar3 == (Settings_IntSetting_o *)0x0)) goto label_05ccd609;
  iVar8 = (pSVar3->fields)._value;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (iVar8 == 0) {
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      iVar8 = 0;
      while( true ) {
        local_38 = CONCAT44(iVar8,(int)local_38);
        if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
        }
        if (TypeInfo_Characters_HumanSetup->static_fields->CostumeMCount <= iVar8) goto label_05ccd556;
        pSVar5 = System_Int32__ToString((int32_t *)((long)&local_38 + 4),(MethodInfo *)0x0);
        pSVar5 = System_String__Concat_52f0320("CostumeM",pSVar5,(MethodInfo *)0x0);
        pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this_00->fields)._items;
        if (pSVar6 == (System_String_array *)0x0) break;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar6->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar6->m_Items[(int)uVar2] = pSVar5;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        iVar8 = local_38._4_4_ + 1;
      }
      goto label_05ccd609;
    }
    local_38 = local_38 & 0xffffffff;
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    }
    if (TypeInfo_Characters_HumanSetup->static_fields->CostumeMCount < 1) goto label_05ccd609;
    pSVar5 = System_Int32__ToString((int32_t *)((long)&local_38 + 4),(MethodInfo *)0x0);
    ppSVar7 = &"CostumeM";
  }
  else {
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      iVar8 = 0;
      do {
        local_38 = CONCAT44(local_38._4_4_,iVar8);
        if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
        }
        if (TypeInfo_Characters_HumanSetup->static_fields->CostumeFCount <= iVar8) {
label_05ccd556:
          pSVar6 = (System_String_array *)
                   System_Collections_Generic_List_object___ToArray
                             ((System_Collections_Generic_List_object__o *)__this_00,
                              (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray)
          ;
          return pSVar6;
        }
        pSVar5 = System_Int32__ToString((int32_t *)&local_38,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat_52f0320("CostumeF",pSVar5,(MethodInfo *)0x0);
        pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this_00->fields)._items;
        if (pSVar6 == (System_String_array *)0x0) goto label_05ccd609;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar6->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar6->m_Items[(int)uVar2] = pSVar5;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        iVar8 = (int)local_38 + 1;
      } while( true );
    }
    local_38 = local_38 & 0xffffffff00000000;
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    }
    if (TypeInfo_Characters_HumanSetup->static_fields->CostumeFCount < 1) goto label_05ccd609;
    pSVar5 = System_Int32__ToString((int32_t *)&local_38,(MethodInfo *)0x0);
    ppSVar7 = &"CostumeF";
  }
  System_String__Concat_52f0320(*ppSVar7,pSVar5,(MethodInfo *)0x0);
label_05ccd609:
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel$$GetIcons
// il2cpp: System_String_array* UI_CharacterEditorCostumePanel__GetIcons (UI_CharacterEditorCostumePanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x5ccce40

System_String_array *
UI_CharacterEditorCostumePanel__GetIcons
          (UI_CharacterEditorCostumePanel_o *__this,System_String_array *options,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  int iVar4;
  System_Collections_Generic_List_string__o *__this_00;
  ulong uVar5;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  ulong uVar8;
  
  if (Il2CppMethodInitialized_07547b7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/Human/Previews/");
    Il2CppMethodInitialized_07547b7a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (options != (System_String_array *)0x0) {
    iVar4 = (int)options->max_length;
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      if (0 < iVar4) {
        uVar5 = options->max_length & 0xffffffff;
        uVar8 = 0;
        do {
          if (uVar5 <= uVar8) {
            ThrowIndexOutOfRangeException();
          }
          pSVar6 = options->m_Items[uVar8];
          if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
          }
          pSVar6 = System_String__Concat_5301f10
                             (TypeInfo_Utility_ResourcePaths->static_fields->Characters,"/Human/Previews/",
                              pSVar6,(MethodInfo *)0x0);
          pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar7 = (__this_00->fields)._items;
          if (pSVar7 == (System_String_array *)0x0) goto label_05ccd01e;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar7->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar7->m_Items[(int)uVar2] = pSVar6;
            Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar6,
                       (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
          }
          uVar8 = uVar8 + 1;
          uVar2 = (uint)options->max_length;
          uVar5 = (ulong)uVar2;
        } while ((long)uVar8 < (long)(int)uVar2);
      }
      pSVar7 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return pSVar7;
    }
    if (0 < iVar4) {
      pSVar6 = options->m_Items[0];
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      System_String__Concat_5301f10
                (TypeInfo_Utility_ResourcePaths->static_fields->Characters,"/Human/Previews/",pSVar6,
                 (MethodInfo *)0x0);
    }
  }
label_05ccd01e:
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel$$OnSexChanged
// il2cpp: void UI_CharacterEditorCostumePanel__OnSexChanged (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x5ccd610

void UI_CharacterEditorCostumePanel__OnSexChanged(UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  char cVar2;
  Settings_HumanCustomSettings_o *pSVar3;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_01;
  System_Collections_Generic_HashSet_string__o *__this_02;
  UI_CharacterEditorMenu_o *pUVar4;
  GameManagers_CharacterEditorGameManager_o *pGVar5;
  Characters_DummyHuman_o *__this_03;
  bool bVar6;
  Settings_BaseSetSetting_o *pSVar7;
  System_String_o **ppSVar8;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32_o *__this_04;
  
  if (Il2CppMethodInitialized_07547b7b == '\0') {
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
    Il2CppMethodInitialized_07547b7b = '\x01';
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if (((pSVar3 != (Settings_HumanCustomSettings_o *)0x0) &&
      (__this_00 = (pSVar3->fields).CustomSets,
      __this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) &&
     (pSVar7 = Settings_SetSettingsContainer_object___GetSelectedSet
                         ((Settings_SetSettingsContainer_T__o *)__this_00,
                          (MethodInfo_40477A0 *)
                          MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet),
     pSVar7 != (Settings_BaseSetSetting_o *)0x0)) {
    bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
    if (((pSVar7->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_HumanCustomSet
       )) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar7);
    }
    if ((*(uint64_t *)((char *)pSVar7 + 0x48)) != (Settings_BaseSetSetting_c *)0x0) {
      __this_01 = (*(uint64_t *)((char *)pSVar7 + 0x68));
      if (*(int *)((long)&(((*(Il2CppClass **)((char *)pSVar7 + 0x48)))->_1).namespaze + 4) == 0) {
        if (__this_01 == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0)
        goto label_05ccd8df;
        ppSVar8 = &"HairM0";
      }
      else {
        if (__this_01 == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0)
        goto label_05ccd8df;
        ppSVar8 = &"HairF0";
      }
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)*ppSVar8,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      __this_02 = (*(uint64_t *)((char *)pSVar7 + 0x70));
      if (__this_02 != (System_Collections_Generic_HashSet_string__o *)0x0) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)__this_02,0,
                   (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        pUVar4 = (__this->fields)._menu;
        if (pUVar4 != (UI_CharacterEditorMenu_o *)0x0) {
          (*(pUVar4->klass->vtable)._9_RebuildPanels.methodPtr)
                    (pUVar4,true,(pUVar4->klass->vtable)._9_RebuildPanels.method);
          pUVar4 = (__this->fields)._menu;
          if (pUVar4 != (UI_CharacterEditorMenu_o *)0x0) {
            (*(pUVar4->klass->vtable)._10_ResetCharacter.methodPtr)
                      (pUVar4,true,(pUVar4->klass->vtable)._10_ResetCharacter.method);
            if (Il2CppMethodInitialized_07547b84 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
              Il2CppMethodInitialized_07547b84 = '\x01';
            }
            if (TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview == false) {
              if (Il2CppMethodInitialized_07547b85 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
                Il2CppMethodInitialized_07547b85 = '\x01';
                cVar2 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview;
              }
              else {
                cVar2 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview;
              }
              if (cVar2 == '\0') {
                return;
              }
            }
            pUVar4 = (__this->fields)._menu;
            if ((pUVar4 != (UI_CharacterEditorMenu_o *)0x0) &&
               (pGVar5 = (pUVar4->fields)._gameManager,
               pGVar5 != (GameManagers_CharacterEditorGameManager_o *)0x0)) {
              __this_03 = (pGVar5->fields).Human;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar6 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar6) {
                if (__this_03 == (Characters_DummyHuman_o *)0x0) goto label_05ccd8df;
                Characters_DummyHuman__LoadSkin(__this_03,(MethodInfo *)0x0);
              }
              if (Il2CppMethodInitialized_07547b7e == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterReset_d__32);
                Il2CppMethodInitialized_07547b7e = '\x01';
              }
              __this_04 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterReset_d__32)
              ;
              UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32___ctor
                        (__this_04,0,(MethodInfo *)0x0);
              UnityEngine_MonoBehaviour__StartCoroutine_691c390
                        ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_04,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_05ccd8df:
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel$$OnCustomSetSelected
// il2cpp: void UI_CharacterEditorCostumePanel__OnCustomSetSelected (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x5ccd930
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ccdbaf: jmp 0x5ccdd07
// asm:   0x5ccdd90: jmp 0x5ccde35
// asm:   0x5ccddbe: jmp 0x5ccdab4

void UI_CharacterEditorCostumePanel__OnCustomSetSelected
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  System_String_o **targetAddress;
  byte bVar1;
  uint32_t uVar2;
  Settings_HumanCustomSettings_o *pSVar3;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  Settings_StringSetting_o *pSVar4;
  System_String_o *b;
  UI_CharacterEditorMenu_o *pUVar5;
  UI_MessagePopup_o *x;
  UI_PresetSkinEditPopup_o *__this_01;
  System_String_o *pSVar6;
  GameManagers_BaseGameManager_o *__this_02;
  UI_CharacterEditorHumanMenu_o *pUVar7;
  bool bVar8;
  bool bVar9;
  Settings_BaseSetSetting_o *pSVar10;
  UI_CharacterEditorSkinsPanel_StaticFields *pUVar11;
  UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31_o *__this_03;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32_o *pUVar12;
  UI_CharacterEditorMenu_o *x_00;
  UI_CharacterEditorHumanMenu_o *humanMenu;
  
  if (Il2CppMethodInitialized_07547b7c == '\0') {
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
    Il2CppMethodInitialized_07547b7c = '\x01';
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if (((pSVar3 == (Settings_HumanCustomSettings_o *)0x0) ||
      (__this_00 = (pSVar3->fields).CustomSets,
      __this_00 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) ||
     (pSVar10 = Settings_SetSettingsContainer_object___GetSelectedSet
                          ((Settings_SetSettingsContainer_T__o *)__this_00,
                           (MethodInfo_40477A0 *)
                           MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet),
     pSVar10 == (Settings_BaseSetSetting_o *)0x0)) goto label_05ccde74;
  bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
  if (((pSVar10->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)
     ) {
    il2cpp_codegen_raise_invalid_cast_exception(pSVar10);
  }
  pSVar4 = (pSVar10->fields).UniqueId;
  if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_05ccde74;
  b = (pSVar4->fields)._value;
  targetAddress = &(__this->fields)._previousProfileId;
  bVar8 = System_String__op_Equality((__this->fields)._previousProfileId,b,(MethodInfo *)0x0);
  if ((bVar8) && (*targetAddress != (System_String_o *)0x0)) {
    return;
  }
  pUVar5 = (__this->fields)._menu;
  if (pUVar5 == (UI_CharacterEditorMenu_o *)0x0) {
label_05ccda9f:
    x_00 = (UI_CharacterEditorMenu_o *)0x0;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
    if ((pUVar5->klass->_2).typeHierarchyDepth < bVar1) goto label_05ccda9f;
    x_00 = (UI_CharacterEditorMenu_o *)0x0;
    if ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu) {
      x_00 = pUVar5;
    }
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    if (x_00 == (UI_CharacterEditorMenu_o *)0x0) goto label_05ccde74;
    x = (*(uint64_t *)((char *)x_00 + 0xd0));
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      __this_01 = (UI_PresetSkinEditPopup_o *)(*(uint64_t *)((char *)x_00 + 0xd0));
      if (__this_01 == (UI_PresetSkinEditPopup_o *)0x0) goto label_05ccde74;
      if ((__this_01->fields).IsActive != false) {
        UI_PresetSkinEditPopup__OnCancelClick(__this_01,(MethodInfo *)0x0);
      }
    }
  }
  pUVar5 = (__this->fields)._menu;
  if (pUVar5 == (UI_CharacterEditorMenu_o *)0x0) {
label_05ccde74:
    ThrowNullReferenceException();
  }
  (*(pUVar5->klass->vtable)._9_RebuildPanels.methodPtr)
            (pUVar5,true,(pUVar5->klass->vtable)._9_RebuildPanels.method);
  pUVar5 = (__this->fields)._menu;
  if (pUVar5 == (UI_CharacterEditorMenu_o *)0x0) goto label_05ccde74;
  (*(pUVar5->klass->vtable)._10_ResetCharacter.methodPtr)
            (pUVar5,true,(pUVar5->klass->vtable)._10_ResetCharacter.method);
  if (Il2CppMethodInitialized_07547b84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
    Il2CppMethodInitialized_07547b84 = '\x01';
  }
  pUVar11 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields;
  bVar8 = true;
  if (pUVar11->_persistentGlobalSkinPreview == false) {
    if (Il2CppMethodInitialized_07547b85 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
      Il2CppMethodInitialized_07547b85 = '\x01';
      pUVar11 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields;
    }
    bVar8 = pUVar11->_persistentCustomSkinPreview != false;
    pSVar6 = *targetAddress;
  }
  else {
    pSVar6 = *targetAddress;
  }
  if ((pSVar6 != (System_String_o *)0x0) &&
     (bVar9 = System_String__op_Inequality(pSVar6,b,(MethodInfo *)0x0), bVar9)) {
    __this_02 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (__this_02 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
      if (((__this_02->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_02);
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar9) {
      pSVar6 = *targetAddress;
      if (Il2CppMethodInitialized_07547b7d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_UI_CharacterEditorCostumePanel_CapturePreviousProfilePreviewAndApplySkins_d__31);
        Il2CppMethodInitialized_07547b7d = '\x01';
      }
      __this_03 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_UI_CharacterEditorCostumePanel_CapturePreviousProfilePreviewAndApplySkins_d__31
                            );
      UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31___ctor
                (__this_03,0,(MethodInfo *)0x0);
      if (__this_03 !=
          (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31_o *)0x0) {
        (__this_03->fields).__4__this = __this;
        Il2CppCodeGenWriteBarrier(&(__this_03->fields).__4__this);
        (__this_03->fields).previousProfileId = pSVar6;
        Il2CppCodeGenWriteBarrier(&(__this_03->fields).previousProfileId);
        (__this_03->fields).shouldApplySkinPreview = bVar8;
        if (__this_02 != (GameManagers_BaseGameManager_o *)0x0) {
          UnityEngine_MonoBehaviour__StartCoroutine_691c390
                    ((UnityEngine_MonoBehaviour_o *)__this_02,(System_Collections_IEnumerator_o *)__this_03,
                     (MethodInfo *)0x0);
          goto label_05ccde57;
        }
      }
      goto label_05ccde74;
    }
    goto label_05ccde57;
  }
  if ((__this->fields)._shouldGeneratePreviewAfterRebuild == false) {
    if (bVar8 != false) {
      if (Il2CppMethodInitialized_07547b7e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterReset_d__32);
        Il2CppMethodInitialized_07547b7e = '\x01';
      }
      pUVar12 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterReset_d__32);
      UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32___ctor(pUVar12,0,(MethodInfo *)0x0);
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar12,
                 (MethodInfo *)0x0);
    }
    goto label_05ccde57;
  }
  (__this->fields)._shouldGeneratePreviewAfterRebuild = false;
  if (bVar8 != false) {
    if (Il2CppMethodInitialized_07547b7e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterReset_d__32);
      Il2CppMethodInitialized_07547b7e = '\x01';
    }
    pUVar12 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterReset_d__32);
    UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32___ctor(pUVar12,0,(MethodInfo *)0x0);
    UnityEngine_MonoBehaviour__StartCoroutine_691c390
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar12,
               (MethodInfo *)0x0);
  }
  pUVar7 = (UI_CharacterEditorHumanMenu_o *)(__this->fields)._menu;
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    if (pUVar7 != (UI_CharacterEditorHumanMenu_o *)0x0) goto label_05ccde1f;
label_05ccde35:
    humanMenu = (UI_CharacterEditorHumanMenu_o *)0x0;
  }
  else {
    if (pUVar7 == (UI_CharacterEditorHumanMenu_o *)0x0) goto label_05ccde35;
label_05ccde1f:
    bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
    if ((((UI_CharacterEditorMenu_c *)pUVar7->klass)->_2).typeHierarchyDepth < bVar1) goto label_05ccde35;
    humanMenu = (UI_CharacterEditorHumanMenu_o *)0x0;
    if ((((UI_CharacterEditorMenu_c *)pUVar7->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu) {
      humanMenu = pUVar7;
    }
  }
  Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet(humanMenu,true,(MethodInfo *)0x0);
label_05ccde57:
  *targetAddress = b;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// UI.CharacterEditorCostumePanel$$CapturePreviousProfilePreviewAndApplySkins
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins (UI_CharacterEditorCostumePanel_o* __this, System_String_o* previousProfileId, System_String_o* currentProfileId, bool shouldApplySkinPreview, const MethodInfo* method);
// 0x5ccde90

System_Collections_IEnumerator_o *
UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins
          (UI_CharacterEditorCostumePanel_o *__this,System_String_o *previousProfileId,
          System_String_o *currentProfileId,bool shouldApplySkinPreview,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31_o *__this_00;
  
  if (Il2CppMethodInitialized_07547b7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorCostumePanel_CapturePreviousProfilePreviewAndApplySkins_d__31);
    Il2CppMethodInitialized_07547b7d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorCostumePanel_CapturePreviousProfilePreviewAndApplySkins_d__31
                        );
  UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  if (__this_00 == (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__31_o *)0x0)
  {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).previousProfileId = previousProfileId;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).previousProfileId);
  (__this_00->fields).shouldApplySkinPreview = shouldApplySkinPreview;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorCostumePanel$$ApplySkinPreviewAfterReset
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x5ccd8f0

System_Collections_IEnumerator_o *
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset
          (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32_o *__this_00;
  
  if (Il2CppMethodInitialized_07547b7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterReset_d__32);
    Il2CppMethodInitialized_07547b7e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterReset_d__32);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__32___ctor(__this_00,0,(MethodInfo *)0x0);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorCostumePanel$$OnCharacterChanged
// il2cpp: void UI_CharacterEditorCostumePanel__OnCharacterChanged (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x5ccdf20

void UI_CharacterEditorCostumePanel__OnCharacterChanged
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar2->klass->vtable)._10_ResetCharacter.methodPtr)
            (pUVar2,false,(pUVar2->klass->vtable)._10_ResetCharacter.method);
  if (Il2CppMethodInitialized_07547b84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
    Il2CppMethodInitialized_07547b84 = '\x01';
  }
  if (TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview == false) {
    if (Il2CppMethodInitialized_07547b85 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
      Il2CppMethodInitialized_07547b85 = '\x01';
      cVar1 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview;
    }
    else {
      cVar1 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview;
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (Il2CppMethodInitialized_07547b7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterCostumeChange_d__34);
    Il2CppMethodInitialized_07547b7f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterCostumeChange_d__34);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$ApplySkinPreviewAfterCostumeChange
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x5cce010

System_Collections_IEnumerator_o *
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange
          (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34_o *__this_00;
  
  if (Il2CppMethodInitialized_07547b7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterCostumeChange_d__34);
    Il2CppMethodInitialized_07547b7f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterCostumeChange_d__34);
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__34___ctor
            (__this_00,0,(MethodInfo *)0x0);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorCostumePanel$$GeneratePreviewForCurrentSet
// il2cpp: void UI_CharacterEditorCostumePanel__GeneratePreviewForCurrentSet (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x5cce050
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cce096: test rbx, rbx
// asm:   0x5cce099: jne 0x5cce0a7
// asm:   0x5cce09b: jmp 0x5cce0c3

void UI_CharacterEditorCostumePanel__GeneratePreviewForCurrentSet
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_CharacterEditorHumanMenu_o *pUVar2;
  UI_CharacterEditorHumanMenu_o *humanMenu;
  
  if (Il2CppMethodInitialized_07547b80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorHumanMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    Il2CppMethodInitialized_07547b80 = '\x01';
  }
  pUVar2 = (UI_CharacterEditorHumanMenu_o *)(__this->fields)._menu;
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  if (pUVar2 != (UI_CharacterEditorHumanMenu_o *)0x0) {
    bVar1 = (((Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)->_2).typeHierarchyDepth;
    if (bVar1 <= (((UI_CharacterEditorMenu_c *)pUVar2->klass)->_2).typeHierarchyDepth) {
      humanMenu = (UI_CharacterEditorHumanMenu_o *)0x0;
      if ((((UI_CharacterEditorMenu_c *)pUVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu) {
        humanMenu = pUVar2;
      }
      Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet(humanMenu,false,(MethodInfo *)0x0);
      return;
    }
  }
  Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet
            ((UI_CharacterEditorHumanMenu_o *)0x0,false,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$OnButtonClick
// il2cpp: void UI_CharacterEditorCostumePanel__OnButtonClick (UI_CharacterEditorCostumePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5cce0f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cce785: jmp 0x5ccee36

void UI_CharacterEditorCostumePanel__OnButtonClick
               (UI_CharacterEditorCostumePanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSettings_o *pSVar2;
  UI_BaseMenu_o *pUVar3;
  UI_SetNamePopup_o *__this_00;
  UI_ImportPopup_o *__this_01;
  UI_SelectListPopup_o *__this_02;
  Settings_BaseSetSetting_c *pSVar4;
  Settings_CustomSkinSettings_o *pSVar5;
  System_Collections_Generic_List_BasePopup__o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  UI_ExportPopup_o *__this_03;
  Il2CppObject *object;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar8;
  UI_CharacterEditorMenu_o *pUVar9;
  UI_ExternalLinkPopup_o *pUVar10;
  UI_BasePopup_array *__this_04;
  bool bVar11;
  uint32_t uVar12;
  MethodInfo *in_RAX;
  UI_CharacterEditorCostumePanel___c__DisplayClass36_0_o *__this_05;
  UnityEngine_Events_UnityAction_o *pUVar13;
  MethodInfo **ppMVar14;
  System_String_array *collection;
  System_Collections_Generic_List_string__o *items;
  System_String_o *pSVar15;
  SimpleJSONFixed_JSONNode_o *pSVar16;
  UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38_o *__this_06;
  System_String_o *pSVar17;
  Settings_BaseSetSetting_o *pSVar18;
  SimpleJSONFixed_JSONNode_o *pSVar19;
  UI_CharacterEditorCostumePanel___c_StaticFields *pUVar20;
  Settings_HumanCustomSet_o *customSet;
  int32_t weapon;
  MethodInfo *method_00;
  UI_CharacterEditorCostumePanel_o *__this_07;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  System_String_o **ppSVar21;
  UI_ConfirmPopup_o *__this_08;
  
  if (Il2CppMethodInitialized_07547b81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorHumanMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
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
              (&MethodInfo_UI_CharacterEditorCostumePanel_c_OnButtonClick_b__36_6);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass36_0_OnButtonClick_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass36_0_OnButtonClick_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass36_0_OnButtonClick_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass36_0_OnButtonClick_b__3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass36_0_OnButtonClick_b__4);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass36_0_OnButtonClick_b__5);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorCostumePanel_c__DisplayClass36_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorCostumePanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"QuitWithoutSaveConfirm");
    il2cpp_codegen_initialize_runtime_metadata(&"NewSet");
    il2cpp_codegen_initialize_runtime_metadata(&"Presets");
    il2cpp_codegen_initialize_runtime_metadata(&"Create");
    il2cpp_codegen_initialize_runtime_metadata(&"SaveQuit");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Costume");
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
    Il2CppMethodInitialized_07547b81 = '\x01';
  }
  __this_05 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_CharacterEditorCostumePanel_c__DisplayClass36_0);
  UI_CharacterEditorCostumePanel___c__DisplayClass36_0___ctor(__this_05,(MethodInfo *)0x0);
  if (__this_05 == (UI_CharacterEditorCostumePanel___c__DisplayClass36_0_o *)0x0) goto label_05ccee36;
  (__this_05->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_05->fields).__4__this);
  ppSVar21 = &(__this_05->fields).name;
  (__this_05->fields).name = name;
  Il2CppCodeGenWriteBarrier(ppSVar21);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar3 == (UI_BaseMenu_o *)0x0) goto label_05ccee36;
  __this_00 = (pUVar3->fields).SetNamePopup;
  pSVar15 = *ppSVar21;
  uVar12 = _PrivateImplementationDetails___ComputeStringHash(pSVar15,(MethodInfo *)0x0);
  if (uVar12 < 0x5cb46bab) {
    if (uVar12 < 0x573e0af5) {
      if (uVar12 != 0x547f6497) {
        if (uVar12 != 0x573e0af4) {
          return;
        }
        bVar11 = System_String__op_Equality(pSVar15,"Import",(MethodInfo *)0x0);
        if (!bVar11) {
          return;
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar3 != (UI_BaseMenu_o *)0x0) {
          __this_01 = (pUVar3->fields).ImportPopup;
          pUVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    (pUVar13,(Il2CppObject *)__this_05,
                     (intptr_t)
                     MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass36_0_OnButtonClick_b__5,
                     (MethodInfo *)0x0);
          if (__this_01 != (UI_ImportPopup_o *)0x0) {
            UI_ImportPopup__Show(__this_01,pUVar13,true,"","",in_R9);
            return;
          }
        }
        goto label_05ccee36;
      }
      bVar11 = System_String__op_Equality(pSVar15,"SaveQuit",(MethodInfo *)0x0);
      if (!bVar11) {
        return;
      }
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
      if (pSVar2 == (Settings_HumanCustomSettings_o *)0x0) goto label_05ccee36;
      (*(pSVar2->klass->vtable)._18_Save.methodPtr)(pSVar2,(pSVar2->klass->vtable)._18_Save.method);
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if (pSVar5 == (Settings_CustomSkinSettings_o *)0x0) goto label_05ccee36;
      (*(pSVar5->klass->vtable)._18_Save.methodPtr)(pSVar5,(pSVar5->klass->vtable)._18_Save.method);
      __this_07 = (UI_CharacterEditorCostumePanel_o *)
                  TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (__this_07 != (UI_CharacterEditorCostumePanel_o *)0x0) {
        bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
        if (((((GameManagers_BaseGameManager_c *)__this_07->klass)->_2).typeHierarchyDepth < bVar1) ||
           ((((GameManagers_BaseGameManager_c *)__this_07->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_07);
        }
        pSVar6 = (__this_07->fields)._popups;
        if (pSVar6 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
          bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
          if ((bVar1 <= (pSVar6->klass->_2).typeHierarchyDepth) &&
             ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_Characters_DummyHuman)) {
            pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
            if ((pSVar2 == (Settings_HumanCustomSettings_o *)0x0) ||
               (pSVar8 = (pSVar2->fields).CustomSets,
               pSVar8 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) goto label_05ccee36;
            customSet = (Settings_HumanCustomSet_o *)
                        Settings_SetSettingsContainer_object___GetSelectedSet
                                  ((Settings_SetSettingsContainer_T__o *)pSVar8,
                                   (MethodInfo_40477A0 *)
                                   MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
            if (customSet != (Settings_HumanCustomSet_o *)0x0) {
              bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
              if (((customSet->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((customSet->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) goto label_05ccee3b;
            }
            pUVar9 = (__this->fields)._menu;
            weapon = 0;
            if (pUVar9 != (UI_CharacterEditorMenu_o *)0x0) {
              bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
              if ((bVar1 <= (pUVar9->klass->_2).typeHierarchyDepth) &&
                 ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                  (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
                pUVar10 = (*(uint64_t *)((char *)pUVar9 + 0xe0));
                if (pUVar10 == (UI_ExternalLinkPopup_o *)0x0) goto label_05ccee36;
                weapon = *(int32_t *)((long)&(pUVar10->fields).m_CancellationTokenSource + 4);
              }
            }
            __this_04 = (*(uint64_t *)((char *)pSVar6 + 0x38));
            if (__this_04 == (UI_BasePopup_array *)0x0) goto label_05ccee36;
            Characters_HumanSetup__Load
                      ((Characters_HumanSetup_o *)__this_04,customSet,weapon,false,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_07547b83 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_UI_CharacterEditorCostumePanel_SaveQuitCaptureCoroutine_d__38);
              Il2CppMethodInitialized_07547b83 = '\x01';
            }
            __this_06 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_UI_CharacterEditorCostumePanel_SaveQuitCaptureCoroutine_d__38);
            UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38___ctor
                      (__this_06,0,(MethodInfo *)0x0);
            goto label_05cce8b8;
          }
        }
      }
      if (Il2CppMethodInitialized_07547b83 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_UI_CharacterEditorCostumePanel_SaveQuitCaptureCoroutine_d__38);
        Il2CppMethodInitialized_07547b83 = '\x01';
      }
      __this_06 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_UI_CharacterEditorCostumePanel_SaveQuitCaptureCoroutine_d__38);
      UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38___ctor(__this_06,0,(MethodInfo *)0x0);
      __this_07 = __this;
label_05cce8b8:
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this_07,(System_Collections_IEnumerator_o *)__this_06,
                 (MethodInfo *)0x0);
      return;
    }
    if (uVar12 != 0x5797ea6a) {
      if ((uVar12 != 0x5cb46baa) ||
         (bVar11 = System_String__op_Equality(pSVar15,"LoadPreset",(MethodInfo *)0x0), !bVar11)) {
        return;
      }
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
      if ((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
         (pSVar8 = (pSVar2->fields).Costume1Sets,
         pSVar8 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
        collection = Settings_SetSettingsContainer_object___GetSetNames
                               ((Settings_SetSettingsContainer_T__o *)pSVar8,
                                (MethodInfo_40482D0 *)
                                MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSetNames);
        items = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
        System_Collections_Generic_List_object____ctor_395ca70
                  ((System_Collections_Generic_List_object__o *)items,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,
                   (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar3 != (UI_BaseMenu_o *)0x0) {
          __this_02 = (pUVar3->fields).SelectListPopup;
          pSVar15 = UI_UIManager__GetLocale
                              ("CharacterEditor","Costume","Presets",
                               "","",(MethodInfo *)0x0);
          pUVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    (pUVar13,(Il2CppObject *)__this_05,
                     (intptr_t)
                     MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass36_0_OnButtonClick_b__4,
                     (MethodInfo *)0x0);
          if (__this_02 != (UI_SelectListPopup_o *)0x0) {
            UI_SelectListPopup__ShowLoad
                      (__this_02,items,pSVar15,pUVar13,(UnityEngine_Events_UnityAction_o *)0x0,
                       (System_Collections_Generic_List_string__o *)0x0,in_RAX);
            return;
          }
        }
      }
      goto label_05ccee36;
    }
    bVar11 = System_String__op_Equality(pSVar15,"Delete",(MethodInfo *)0x0);
    if (!bVar11) {
      return;
    }
    if ((pSVar2 == (Settings_HumanCustomSettings_o *)0x0) ||
       (pSVar8 = (pSVar2->fields).CustomSets, pSVar8 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0
       )) goto label_05ccee36;
    bVar11 = Settings_SetSettingsContainer_object___CanDeleteSelectedSet
                       ((Settings_SetSettingsContainer_T__o *)pSVar8,
                        (MethodInfo_4047B80 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_CanDeleteSelectedSet);
    if (!bVar11) {
      return;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar3 == (UI_BaseMenu_o *)0x0) goto label_05ccee36;
    __this_08 = (pUVar3->fields).ConfirmPopup;
    pSVar15 = UI_UIManager__GetLocaleCommon("DeleteWarning",(MethodInfo *)0x0);
    pUVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar13,(Il2CppObject *)__this_05,
               (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass36_0_OnButtonClick_b__1,
               (MethodInfo *)0x0);
    pSVar17 = "Delete";
  }
  else {
    if (uVar12 < 0x990de47e) {
      if (uVar12 == 0x990de47d) {
        ppSVar21 = &"Create";
        bVar11 = System_String__op_Equality(pSVar15,"Create",(MethodInfo *)0x0);
        if (!bVar11) {
          return;
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        in_R9 = (MethodInfo *)0x0;
        pSVar15 = UI_UIManager__GetLocale
                            ("CharacterEditor","Costume","NewSet",
                             "","",(MethodInfo *)0x0);
        pUVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        ppMVar14 = &MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass36_0_OnButtonClick_b__0;
      }
      else {
        if (uVar12 != 0x658f3664) {
          return;
        }
        ppSVar21 = &"Copy";
        bVar11 = System_String__op_Equality(pSVar15,"Copy",(MethodInfo *)0x0);
        if (!bVar11) {
          return;
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        in_R9 = (MethodInfo *)0x0;
        pSVar15 = UI_UIManager__GetLocale
                            ("CharacterEditor","Costume","NewSet",
                             "","",(MethodInfo *)0x0);
        pUVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        ppMVar14 = &MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass36_0_OnButtonClick_b__3;
      }
      UnityEngine_Events_UnityAction___ctor
                (pUVar13,(Il2CppObject *)__this_05,(intptr_t)*ppMVar14,(MethodInfo *)0x0);
label_05cce960:
      pSVar17 = UI_UIManager__GetLocaleCommon(*ppSVar21,(MethodInfo *)0x0);
      if (__this_00 != (UI_SetNamePopup_o *)0x0) {
        UI_SetNamePopup__Show(__this_00,pSVar15,pUVar13,pSVar17,(System_String_o *)0x0,in_R9);
        return;
      }
      goto label_05ccee36;
    }
    if (uVar12 != 0xc7b3d356) {
      if (uVar12 == 0xc80631f3) {
        ppSVar21 = &"Rename";
        bVar11 = System_String__op_Equality(pSVar15,"Rename",(MethodInfo *)0x0);
        if (!bVar11) {
          return;
        }
        if ((((pSVar2 == (Settings_HumanCustomSettings_o *)0x0) ||
             (pSVar8 = (pSVar2->fields).CustomSets,
             pSVar8 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) ||
            (pSVar18 = Settings_SetSettingsContainer_object___GetSelectedSet
                                 ((Settings_SetSettingsContainer_T__o *)pSVar8,
                                  (MethodInfo_40477A0 *)
                                  MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet),
            pSVar18 == (Settings_BaseSetSetting_o *)0x0)) ||
           (pSVar7 = (pSVar18->fields).Name, pSVar7 == (Settings_StringSetting_o *)0x0)) goto label_05ccee36;
        pSVar15 = (pSVar7->fields)._value;
        pUVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (pUVar13,(Il2CppObject *)__this_05,
                   (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass36_0_OnButtonClick_b__2,
                   (MethodInfo *)0x0);
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        goto label_05cce960;
      }
      if (uVar12 != 0xe86349d3) {
        return;
      }
      bVar11 = System_String__op_Equality(pSVar15,"Export",(MethodInfo *)0x0);
      if (!bVar11) {
        return;
      }
      if (((pSVar2 == (Settings_HumanCustomSettings_o *)0x0) ||
          (pSVar8 = (pSVar2->fields).CustomSets,
          pSVar8 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) ||
         (customSet = (Settings_HumanCustomSet_o *)
                      Settings_SetSettingsContainer_object___GetSelectedSet
                                ((Settings_SetSettingsContainer_T__o *)pSVar8,
                                 (MethodInfo_40477A0 *)
                                 MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet),
         customSet == (Settings_HumanCustomSet_o *)0x0)) goto label_05ccee36;
      pSVar4 = (Settings_BaseSetSetting_c *)customSet->klass;
      bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
      if (((pSVar4->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar4->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
label_05ccee3b:
        il2cpp_codegen_raise_invalid_cast_exception(customSet);
      }
      pSVar16 = (*(pSVar4->vtable)._5_SerializeToJsonObject.methodPtr)
                          (customSet,(pSVar4->vtable)._5_SerializeToJsonObject.method);
      if (pSVar16 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05ccee36;
      bVar11 = (*(pSVar16->klass->vtable)._28_HasKey.methodPtr)
                         (pSVar16,"Preset",(pSVar16->klass->vtable)._28_HasKey.method);
      if (bVar11) {
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar19 = SimpleJSONFixed_JSONNode__op_Implicit_5764070(false,(MethodInfo *)0x0);
        (*(pSVar16->klass->vtable)._8_set_Item.methodPtr)
                  (pSVar16,"Preset",pSVar19,(pSVar16->klass->vtable)._8_set_Item.method);
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) goto label_05ccec30;
label_05cce771:
        pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      }
      else {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor != 0) goto label_05cce771;
label_05ccec30:
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      }
      if (pUVar3 != (UI_BaseMenu_o *)0x0) {
        __this_03 = (pUVar3->fields).ExportPopup;
        pSVar15 = (*(pSVar16->klass->vtable)._30_ToString.methodPtr)
                            (pSVar16,4,(pSVar16->klass->vtable)._30_ToString.method);
        if (__this_03 != (UI_ExportPopup_o *)0x0) {
          UI_ExportPopup__Show(__this_03,pSVar15,method_00);
          return;
        }
      }
      goto label_05ccee36;
    }
    bVar11 = System_String__op_Equality(pSVar15,"Quit",(MethodInfo *)0x0);
    if (!bVar11) {
      return;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar3 == (UI_BaseMenu_o *)0x0) goto label_05ccee36;
    __this_08 = (pUVar3->fields).ConfirmPopup;
    pSVar15 = UI_UIManager__GetLocaleCommon("QuitWithoutSaveConfirm",(MethodInfo *)0x0);
    if ((TypeInfo_UI_CharacterEditorCostumePanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CharacterEditorCostumePanel_c);
      pUVar20 = TypeInfo_UI_CharacterEditorCostumePanel_c->static_fields;
      pUVar13 = pUVar20->__9__36_6;
      if (pUVar13 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_05cceca7;
label_05cceae8:
      uVar12 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      pUVar20 = TypeInfo_UI_CharacterEditorCostumePanel_c->static_fields;
      pUVar13 = pUVar20->__9__36_6;
      if (pUVar13 != (UnityEngine_Events_UnityAction_o *)0x0) goto label_05cceae8;
label_05cceca7:
      if ((TypeInfo_UI_CharacterEditorCostumePanel_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CharacterEditorCostumePanel_c);
        pUVar20 = TypeInfo_UI_CharacterEditorCostumePanel_c->static_fields;
      }
      object = (Il2CppObject *)pUVar20->__9;
      pUVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar13,object,(intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c_OnButtonClick_b__36_6,
                 (MethodInfo *)0x0);
      pUVar20 = TypeInfo_UI_CharacterEditorCostumePanel_c->static_fields;
      pUVar20->__9__36_6 = pUVar13;
      Il2CppCodeGenWriteBarrier(&pUVar20->__9__36_6);
      uVar12 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar12 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar17 = "Quit";
  }
  pSVar17 = UI_UIManager__GetLocaleCommon(pSVar17,(MethodInfo *)0x0);
  if (__this_08 != (UI_ConfirmPopup_o *)0x0) {
    UI_ConfirmPopup__Show(__this_08,pSVar15,pUVar13,pSVar17,in_R8);
    return;
  }
label_05ccee36:
  ThrowNullReferenceException();
}


// UI.CharacterEditorCostumePanel$$OnCostumeSetOperationFinish
// il2cpp: void UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish (UI_CharacterEditorCostumePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5ccee90
// eh: try 0x5ccf434..0x5ccf515 -> pad 0x5ccf810 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5ccf603..0x5ccf7bc -> pad 0x5ccf942 (+19 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ccf7bc..0x5ccf7fa -> pad 0x5ccf804 (+9 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5ccf83b..0x5ccf911 -> pad 0x5ccf911 (+1 call sites) cleanup
// eh: try 0x5ccf914..0x5ccf919 -> pad 0x5ccf9b1 catch (...) [compiler noexcept guard]
// eh: try 0x5ccf95c..0x5ccf961 -> pad 0x5ccf99c cleanup
// eh: try 0x5ccf99f..0x5ccf9a9 -> pad 0x5ccf9b1 catch (...) [compiler noexcept guard]
// asm: 122 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ccf29f: jmp 0x5ccf0f3
// asm:   0x5ccf7fa: jmp 0x5ccf810
// asm:   0x5ccf7fc: jmp 0x5ccf813
// asm:   0x5ccf7fe: jmp 0x5ccf813
// asm:   0x5ccf800: jmp 0x5ccf810
// asm:   0x5ccf802: jmp 0x5ccf813
// asm:   0x5ccf804: jmp 0x5ccf813
// asm:   0x5ccf806: jmp 0x5ccf810
// asm:   0x5ccf808: jmp 0x5ccf810
// asm:   0x5ccf80a: jmp 0x5ccf810
// asm:   0x5ccf80c: jmp 0x5ccf810
// asm:   0x5ccf80e: jmp 0x5ccf810
// asm:   0x5ccf810: mov r14, r13
// asm:   0x5ccf813: mov rbx, rax
// asm:   0x5ccf816: cmp edx, 1
// asm:   0x5ccf819: jne 0x5ccf9a9
// asm:   0x5ccf81f: mov rdi, rbx
// asm:   0x5ccf822: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ccf827: mov rbx, rax
// asm:   0x5ccf82a: lea rax, [rip + 0x1886e97]
// asm:   0x5ccf831: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5ccf835: mov rax, qword ptr [rbx]
// asm:   0x5ccf838: mov rsi, qword ptr [rax]
// asm:   0x5ccf83b: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5ccf840: test al, al
// asm:   0x5ccf842: je 0x5ccf8f0
// asm:   0x5ccf848: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ccf84d: lea rdi, [rip + 0x15ae714]  ; TypeInfo_UI_UIManager
// asm:   0x5ccf854: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ccf859: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5ccf860: jne 0x5ccf86a
// asm:   0x5ccf862: mov rdi, rax
// asm:   0x5ccf865: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5ccf86a: lea rdi, [rip + 0x160847f]  ; "Common"
// asm:   0x5ccf871: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ccf876: mov qword ptr [rsp], rax
// asm:   0x5ccf87a: lea rdi, [rip + 0x16103c7]  ; "InvalidPreset"
// asm:   0x5ccf881: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ccf886: mov r13, rax
// asm:   0x5ccf889: lea rbx, [rip + 0x15fe198]  ; ""
// asm:   0x5ccf890: mov rdi, rbx
// asm:   0x5ccf893: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ccf898: mov rbp, rax
// asm:   0x5ccf89b: mov rdi, rbx
// asm:   0x5ccf89e: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ccf8a3: mov r12, rax
// asm:   0x5ccf8a6: mov rdi, rbx
// asm:   0x5ccf8a9: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5ccf8ae: mov rdi, qword ptr [rsp]
// asm:   0x5ccf8b2: mov rsi, r13
// asm:   0x5ccf8b5: mov rdx, rbp
// asm:   0x5ccf8b8: mov rcx, r12
// asm:   0x5ccf8bb: mov r8, rax
// asm:   0x5ccf8be: xor r9d, r9d
// asm:   0x5ccf8c1: call 0x5d94190  ; UI_UIManager__GetLocale()
// asm:   0x5ccf8c6: test r15, r15
// asm:   0x5ccf8c9: je 0x5ccf8eb
// asm:   0x5ccf8cb: mov rdi, r15
// asm:   0x5ccf8ce: mov rsi, rax
// asm:   0x5ccf8d1: call 0x5cc0bb0  ; UI_ImportPopup__ShowError()
// asm:   0x5ccf8d6: mov r13, r14
// asm:   0x5ccf8d9: cmp byte ptr [rip + 0x18782a4], 0
// asm:   0x5ccf8e0: jne 0x5ccf531
// asm:   0x5ccf8e6: jmp 0x5ccf51e
// asm:   0x5ccf8f0: mov edi, 8
// asm:   0x5ccf8f5: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5ccf8fa: mov rcx, qword ptr [rbx]
// asm:   0x5ccf8fd: mov qword ptr [rax], rcx
// asm:   0x5ccf900: lea rsi, [rip + 0x115dbf9]
// asm:   0x5ccf907: mov rdi, rax
// asm:   0x5ccf90a: xor edx, edx
// asm:   0x5ccf90c: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5ccf911: mov rbx, rax
// asm:   0x5ccf914: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ccf919: jmp 0x5ccf9a9
// asm:   0x5ccf91e: jmp 0x5ccf944
// asm:   0x5ccf920: jmp 0x5ccf944
// asm:   0x5ccf922: jmp 0x5ccf944
// asm:   0x5ccf924: jmp 0x5ccf944
// asm:   0x5ccf926: jmp 0x5ccf944
// asm:   0x5ccf928: jmp 0x5ccf944
// asm:   0x5ccf92a: jmp 0x5ccf944
// asm:   0x5ccf92c: jmp 0x5ccf944
// asm:   0x5ccf92e: jmp 0x5ccf944
// asm:   0x5ccf930: jmp 0x5ccf944
// asm:   0x5ccf932: jmp 0x5ccf944
// asm:   0x5ccf934: jmp 0x5ccf944
// asm:   0x5ccf936: jmp 0x5ccf944
// asm:   0x5ccf938: jmp 0x5ccf944
// asm:   0x5ccf93a: jmp 0x5ccf944
// asm:   0x5ccf93c: jmp 0x5ccf944
// asm:   0x5ccf93e: jmp 0x5ccf944
// asm:   0x5ccf940: jmp 0x5ccf944
// asm:   0x5ccf942: jmp 0x5ccf944
// asm:   0x5ccf944: mov rbx, rax
// asm:   0x5ccf947: cmp edx, 1
// asm:   0x5ccf94a: jne 0x5ccf99f
// asm:   0x5ccf94c: mov rdi, rbx
// asm:   0x5ccf94f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ccf954: mov rbx, qword ptr [rax]
// asm:   0x5ccf957: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5ccf95c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ccf961: lea rax, [rip + 0x15bde40]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x5ccf968: mov rsi, qword ptr [rax]
// asm:   0x5ccf96b: lea rdi, [rsp + 0x10]
// asm:   0x5ccf970: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5ccf975: test rbx, rbx
// asm:   0x5ccf978: jne 0x5ccf994
// asm:   0x5ccf97a: mov r13, qword ptr [rsp + 8]
// asm:   0x5ccf97f: mov rdi, qword ptr [r14]
// asm:   0x5ccf982: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x5ccf989: jne 0x5ccf408
// asm:   0x5ccf98f: jmp 0x5ccf400
// asm:   0x5ccf994: mov rdi, rbx
// asm:   0x5ccf997: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ccf99c: mov rbx, rax
// asm:   0x5ccf99f: lea rdi, [rsp + 0x30]
// asm:   0x5ccf9a4: call 0x2fdb560  ; il2cpp_runtime_helper_02fdb560()
// asm:   0x5ccf9a9: mov rdi, rbx
// asm:   0x5ccf9ac: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ccf9b1: mov rdi, rax
// asm:   0x5ccf9b4: call 0x2ab61e0  ; __clang_call_terminate()

void UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
               (UI_CharacterEditorCostumePanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  Settings_HumanCustomSettings_o *pSVar3;
  UI_SetNamePopup_o *pUVar4;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  Settings_StringSetting_o *pSVar5;
  Settings_StringSetting_o *__this_01;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar6;
  System_String_o *pSVar7;
  Il2CppClass *pIVar8;
  UI_ImportPopup_o *pUVar9;
  System_String_o *a;
  UI_SelectListPopup_o *pUVar10;
  Settings_BoolSetting_o *pSVar11;
  Settings_BaseSetting_o *pSVar12;
  bool bVar13;
  int32_t iVar14;
  VirtualInvokeData *pVVar15;
  Settings_BaseSetSetting_o *pSVar16;
  Settings_ListSetting_T__c *pSVar17;
  UI_CharacterEditorSkinsPanel_StaticFields *pUVar18;
  System_Collections_Generic_List_object__o *__this_02;
  ulong uVar19;
  Il2CppRuntimeInterfaceOffsetPair *pIVar20;
  Settings_ListSetting_T__o *pSVar21;
  MethodInfo *method_00;
  long lVar22;
  Settings_IntSetting_o *pSVar23;
  undefined1 local_68 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_60;
  Settings_BaseSetting_o *local_58;
  undefined1 local_48 [16];
  Settings_BaseSetting_o *local_38;
  
  if (Il2CppMethodInitialized_07547b82 == '\0') {
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
    Il2CppMethodInitialized_07547b82 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_58 = (Settings_BaseSetting_o *)0x0;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((pUVar2 == (UI_BaseMenu_o *)0x0) ||
     (pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings,
     pSVar3 == (Settings_HumanCustomSettings_o *)0x0)) goto label_05ccf8eb;
  pUVar4 = (pUVar2->fields).SetNamePopup;
  __this_00 = (pSVar3->fields).CustomSets;
  bVar13 = System_String__op_Equality(name,"Create",(MethodInfo *)0x0);
  if (bVar13) {
    if (((pUVar4 == (UI_SetNamePopup_o *)0x0) ||
        (pSVar5 = (pUVar4->fields).NameSetting, pSVar5 == (Settings_StringSetting_o *)0x0)) ||
       (__this_00 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) goto label_05ccf8eb;
    Settings_SetSettingsContainer_object___CreateSet
              ((Settings_SetSettingsContainer_T__o *)__this_00,(pSVar5->fields)._value,
               (MethodInfo_40478C0 *)MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_CreateSet);
    pSVar21 = ((Settings_SetSettingsContainer_T__Fields *)&__this_00->fields)->Sets;
    if (pSVar21 == (Settings_ListSetting_T__o *)0x0) goto label_05ccf8eb;
    pSVar23 = ((Settings_SetSettingsContainer_T__Fields *)&__this_00->fields)->SelectedSetIndex;
    pSVar17 = pSVar21->klass;
    uVar19 = (ulong)(pSVar17->_2).interface_offsets_count;
    if (uVar19 != 0) {
      pIVar20 = (pSVar17->_1).interfaceOffsets;
      lVar22 = 0;
      do {
        if (*(Settings_IListSetting_c **)((long)&pIVar20->interfaceType + lVar22) ==
            TypeInfo_Settings_IListSetting) goto label_05ccf2a4;
        lVar22 = lVar22 + 0x10;
      } while (uVar19 * 0x10 != lVar22);
    }
  }
  else {
    bVar13 = System_String__op_Equality(name,"Delete",(MethodInfo *)0x0);
    if (bVar13) {
      if (__this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) {
        Settings_SetSettingsContainer_object___DeleteSelectedSet
                  ((Settings_SetSettingsContainer_T__o *)__this_00,
                   (MethodInfo_4047C80 *)
                   MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_DeleteSelectedSet);
        pSVar23 = ((Settings_SetSettingsContainer_T__Fields *)&__this_00->fields)->SelectedSetIndex;
        if (pSVar23 != (Settings_IntSetting_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar23,0,
                     (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
          }
          Utility_CharacterPreviewGenerator__CleanupOrphanedPreviews((MethodInfo *)0x0);
          goto label_05ccf2e7;
        }
      }
      goto label_05ccf8eb;
    }
    bVar13 = System_String__op_Equality(name,"Rename",(MethodInfo *)0x0);
    if (bVar13) {
      if ((((__this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) &&
           (pSVar16 = Settings_SetSettingsContainer_object___GetSelectedSet
                                ((Settings_SetSettingsContainer_T__o *)__this_00,
                                 (MethodInfo_40477A0 *)
                                 MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet),
           pSVar16 != (Settings_BaseSetSetting_o *)0x0)) && (pUVar4 != (UI_SetNamePopup_o *)0x0)) &&
         ((pSVar5 = (pUVar4->fields).NameSetting, pSVar5 != (Settings_StringSetting_o *)0x0 &&
          (__this_01 = (pSVar16->fields).Name, __this_01 != (Settings_StringSetting_o *)0x0)))) {
        method_00 = (MethodInfo *)(pSVar5->fields)._value;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)method_00,
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        goto label_05ccf2e7;
      }
      goto label_05ccf8eb;
    }
    bVar13 = System_String__op_Equality(name,"Copy",(MethodInfo *)0x0);
    if (!bVar13) {
      bVar13 = System_String__op_Equality(name,"LoadPreset",(MethodInfo *)0x0);
      if (bVar13) {
        if (((__this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) &&
            (pSVar16 = Settings_SetSettingsContainer_object___GetSelectedSet
                                 ((Settings_SetSettingsContainer_T__o *)__this_00,
                                  (MethodInfo_40477A0 *)
                                  MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet),
            pSVar16 != (Settings_BaseSetSetting_o *)0x0)) &&
           ((pSVar5 = (pSVar16->fields).Name, pSVar5 != (Settings_StringSetting_o *)0x0 &&
            (((pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings,
              pSVar3 != (Settings_HumanCustomSettings_o *)0x0 &&
              (pSVar6 = (pSVar3->fields).Costume1Sets,
              pSVar6 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) &&
             (pSVar21 = (pSVar6->fields).Sets, pSVar21 != (Settings_ListSetting_T__o *)0x0)))))) {
          pSVar7 = (pSVar5->fields)._value;
          pIVar8 = (Il2CppClass *)pSVar21->klass;
          uVar19 = (ulong)(pIVar8->_2).interface_offsets_count;
          if (uVar19 != 0) {
            pIVar20 = (pIVar8->_1).interfaceOffsets;
            lVar22 = 0;
            do {
              if (*(Settings_IListSetting_c **)((long)&pIVar20->interfaceType + lVar22) ==
                  TypeInfo_Settings_IListSetting) {
                pVVar15 = pIVar8->vtable + (*(int *)((long)&pIVar20->offset + lVar22) + 2);
                goto label_05ccf59c;
              }
              lVar22 = lVar22 + 0x10;
            } while (uVar19 * 0x10 != lVar22);
          }
          pVVar15 = GetInterfaceInvokeDataFromVTableSlowPath
                              ((Il2CppObject *)pSVar21,(Il2CppClass *)TypeInfo_Settings_IListSetting,2);
label_05ccf59c:
          __this_02 = (System_Collections_Generic_List_object__o *)
                      (*pVVar15->methodPtr)((Il2CppObject *)pSVar21,pVVar15->method);
          if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_48,__this_02,
                       (MethodInfo_395E050 *)
                       MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
            local_58 = local_38;
            local_68 = (undefined1  [8])local_48._0_8_;
            pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)local_48._8_8_;
            local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
            local_48._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_68;
            while (bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                      ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                                       (MethodInfo_4C45C50 *)
                                       MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext
                                      ), pSVar12 = local_58, bVar13) {
              if (local_58 == (Settings_BaseSetting_o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
              if (((local_58->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((local_58->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
                il2cpp_codegen_raise_invalid_cast_exception(local_58);
              }
              if ((*(uint64_t *)((char *)local_58 + 0x30)) == (Settings_BaseSetting_c *)0x0) {
                ThrowNullReferenceException();
              }
              a = (((*(Il2CppClass **)((char *)local_58 + 0x30)))->_1).byval_arg.data;
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
              bVar13 = System_String__op_Equality(a,(pSVar5->fields)._value,(MethodInfo *)0x0);
              if (bVar13) {
                pSVar16 = Settings_SetSettingsContainer_object___GetSelectedSet
                                    ((Settings_SetSettingsContainer_T__o *)__this_00,
                                     (MethodInfo_40477A0 *)
                                     MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
                if (pSVar16 == (Settings_BaseSetSetting_o *)0x0) {
                  ThrowNullReferenceException();
                }
                (*(pSVar16->klass->vtable)._10_Copy.methodPtr)
                          (pSVar16,pSVar12,(pSVar16->klass->vtable)._10_Copy.method);
                pSVar16 = Settings_SetSettingsContainer_object___GetSelectedSet
                                    ((Settings_SetSettingsContainer_T__o *)__this_00,
                                     (MethodInfo_40477A0 *)
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
                           (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                pSVar16 = Settings_SetSettingsContainer_object___GetSelectedSet
                                    ((Settings_SetSettingsContainer_T__o *)__this_00,
                                     (MethodInfo_40477A0 *)
                                     MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
                if (pSVar16 == (Settings_BaseSetSetting_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar5 = (pSVar16->fields).Name;
                if (pSVar5 == (Settings_StringSetting_o *)0x0) {
                  ThrowNullReferenceException();
                }
                Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)pSVar7,
                           (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
              }
            }
            method_00 = MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
            goto label_05ccf2e7;
          }
        }
        goto label_05ccf8eb;
      }
      method_00 = (MethodInfo *)"Import";
      bVar13 = System_String__op_Equality(name,"Import",(MethodInfo *)0x0);
      if (bVar13) {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar2 != (UI_BaseMenu_o *)0x0) {
          pUVar9 = (pUVar2->fields).ImportPopup;
          if (__this_00 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar16 = Settings_SetSettingsContainer_object___GetSelectedSet
                              ((Settings_SetSettingsContainer_T__o *)__this_00,
                               (MethodInfo_40477A0 *)
                               MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
          if (pSVar16 == (Settings_BaseSetSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar5 = (pSVar16->fields).Name;
          if (pSVar5 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar7 = (pSVar5->fields)._value;
          pSVar16 = Settings_SetSettingsContainer_object___GetSelectedSet
                              ((Settings_SetSettingsContainer_T__o *)__this_00,
                               (MethodInfo_40477A0 *)
                               MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
          if (pUVar9 == (UI_ImportPopup_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar5 = (pUVar9->fields).ImportSetting;
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
                               (MethodInfo_40477A0 *)
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
                     (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
          pSVar16 = Settings_SetSettingsContainer_object___GetSelectedSet
                              ((Settings_SetSettingsContainer_T__o *)__this_00,
                               (MethodInfo_40477A0 *)
                               MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
          if (pSVar16 == (Settings_BaseSetSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar5 = (pSVar16->fields).Name;
          if (pSVar5 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)pSVar7,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          method_00 = (pUVar9->klass->vtable)._22_Hide.method;
          (*(pUVar9->klass->vtable)._22_Hide.methodPtr)(pUVar9,method_00);
          if (Il2CppMethodInitialized_07547b84 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
            Il2CppMethodInitialized_07547b84 = '\x01';
          }
          pUVar18 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields;
          bVar13 = true;
          if (pUVar18->_persistentGlobalSkinPreview == false) {
            if (Il2CppMethodInitialized_07547b85 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
              Il2CppMethodInitialized_07547b85 = '\x01';
              pUVar18 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields;
            }
            bVar13 = pUVar18->_persistentCustomSkinPreview;
          }
          if (__this != (UI_CharacterEditorCostumePanel_o *)0x0) {
            (__this->fields)._shouldGeneratePreviewAfterRebuild = bVar13;
            goto label_05ccf2e7;
          }
        }
        goto label_05ccf8eb;
      }
      goto label_05ccf2e7;
    }
    if (((pUVar4 == (UI_SetNamePopup_o *)0x0) ||
        (pSVar5 = (pUVar4->fields).NameSetting, pSVar5 == (Settings_StringSetting_o *)0x0)) ||
       (__this_00 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) goto label_05ccf8eb;
    Settings_SetSettingsContainer_object___CopySelectedSet
              ((Settings_SetSettingsContainer_T__o *)__this_00,(pSVar5->fields)._value,
               (MethodInfo_40479F0 *)MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_CopySelectedSet);
    pSVar21 = ((Settings_SetSettingsContainer_T__Fields *)&__this_00->fields)->Sets;
    if (pSVar21 == (Settings_ListSetting_T__o *)0x0) goto label_05ccf8eb;
    pSVar23 = ((Settings_SetSettingsContainer_T__Fields *)&__this_00->fields)->SelectedSetIndex;
    pSVar17 = pSVar21->klass;
    uVar19 = (ulong)(pSVar17->_2).interface_offsets_count;
    if (uVar19 != 0) {
      pIVar20 = (pSVar17->_1).interfaceOffsets;
      lVar22 = 0;
      do {
        if (*(Settings_IListSetting_c **)((long)&pIVar20->interfaceType + lVar22) ==
            TypeInfo_Settings_IListSetting) goto label_05ccf2a4;
        lVar22 = lVar22 + 0x10;
      } while (uVar19 * 0x10 != lVar22);
    }
  }
  pVVar15 = GetInterfaceInvokeDataFromVTableSlowPath
                      ((Il2CppObject *)pSVar21,(Il2CppClass *)TypeInfo_Settings_IListSetting,0);
label_05ccf2b7:
  iVar14 = (*pVVar15->methodPtr)((Il2CppObject *)pSVar21,pVVar15->method);
  if (pSVar23 != (Settings_IntSetting_o *)0x0) {
    method_00 = (MethodInfo *)(ulong)(iVar14 - 1U);
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar23,iVar14 - 1U,
               (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    (__this->fields)._shouldGeneratePreviewAfterRebuild = true;
label_05ccf2e7:
    UI_CharacterEditorCostumePanel__OnCustomSetSelected(__this,method_00);
    return;
  }
label_05ccf8eb:
  ThrowNullReferenceException();
label_05ccf2a4:
  pVVar15 = &(pSVar17->vtable)._0_Equals + *(int *)((long)&pIVar20->offset + lVar22);
  goto label_05ccf2b7;
}


// UI.CharacterEditorCostumePanel$$SaveQuitCaptureCoroutine
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x5ccee50

System_Collections_IEnumerator_o *
UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine
          (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38_o *__this_00;
  
  if (Il2CppMethodInitialized_07547b83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorCostumePanel_SaveQuitCaptureCoroutine_d__38);
    Il2CppMethodInitialized_07547b83 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_CharacterEditorCostumePanel_SaveQuitCaptureCoroutine_d__38
                        );
  UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__38___ctor(__this_00,0,(MethodInfo *)0x0);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorCostumePanel$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel___ctor (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x5ccf9c0

void UI_CharacterEditorCostumePanel___ctor(UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547b0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_Button);
    Il2CppMethodInitialized_07547b0b = '\x01';
  }
  method_00 = (MethodInfo *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Button);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)method_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Button_ctor);
  (__this->fields)._topButtons = (System_Collections_Generic_Dictionary_string__Button__o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._topButtons);
  UI_BasePanel___ctor((UI_SimplePanel_o *)__this,method_00);
  return;
}


