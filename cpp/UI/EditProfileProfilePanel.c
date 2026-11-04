// Type: UI.EditProfileProfilePanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/EditProfileProfilePanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/EditProfileProfilePanel.cs
// --------------------------------

// UI.EditProfileProfilePanel.<>c$$.cctor
// il2cpp: void UI_EditProfileProfilePanel___c___cctor (const MethodInfo* method);
// 0x18229d2b0

void UI_EditProfileProfilePanel___c___cctor(MethodInfo *method)

{
  UI_EditProfileProfilePanel___c_o *__this;
  
  if (Il2CppMethodInitialized_184347412 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_EditProfileProfilePanel_c);
    Il2CppMethodInitialized_184347412 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_EditProfileProfilePanel_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_UI_EditProfileProfilePanel_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_EditProfileProfilePanel_c->static_fields->__9,__this);
  return;
}


// UI.EditProfileProfilePanel.<>c$$.ctor
// il2cpp: void UI_EditProfileProfilePanel___c___ctor (UI_EditProfileProfilePanel___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_EditProfileProfilePanel___c___ctor(UI_EditProfileProfilePanel___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c$$<Setup>b__21_2
// il2cpp: System_String_o* UI_EditProfileProfilePanel___c___Setup_b__21_2 (UI_EditProfileProfilePanel___c_o* __this, System_String_o* s, const MethodInfo* method);
// 0x18229c910

System_String_o *
UI_EditProfileProfilePanel___c___Setup_b__21_2
          (UI_EditProfileProfilePanel___c_o *__this,System_String_o *s,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347413 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347413 = '\x01';
  }
  if (s != (System_String_o *)0x0) {
    pSVar1 = System_String__Replace_1970e80(s,"\n","",(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel.<>c$$<.cctor>b__38_0
// il2cpp: bool UI_EditProfileProfilePanel___c____cctor_b__38_0 (UI_EditProfileProfilePanel___c_o* __this, System_String_o* n, const MethodInfo* method);
// 0x18229ca50

bool UI_EditProfileProfilePanel___c____cctor_b__38_0
               (UI_EditProfileProfilePanel___c_o *__this,System_String_o *n,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347414 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_184347414 = '\x01';
  }
  bVar1 = System_String__op_Inequality(n,"None",(MethodInfo *)0x0);
  return bVar1;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass21_0___ctor (UI_EditProfileProfilePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_EditProfileProfilePanel___c__DisplayClass21_0___ctor(UI_EditProfileProfilePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass21_0$$<Setup>b__0
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__0 (UI_EditProfileProfilePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x18229ccb0

void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__0
               (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__CreateProfileImage(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass21_0$$<Setup>b__1
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__1 (UI_EditProfileProfilePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x18229ccd0

void
UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__1(UI_EditProfileProfilePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass21_0$$<Setup>b__3
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__3 (UI_EditProfileProfilePanel___c__DisplayClass21_0_o* __this, bool val, const MethodInfo* method);
// 0x18229ccf0

void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__3
               (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *__this,bool val,MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_BoolSetting_o *__this_00;
  UI_EditProfileProfilePanel_o *__this_01;
  
  if (Il2CppMethodInitialized_184347415 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_184347415 = '\x01';
  }
  pSVar1 = (__this->fields).settings;
  if ((pSVar1 != (Settings_ProfileSettings_o *)0x0) &&
     (__this_00 = (pSVar1->fields).NameEffectEnabled, __this_00 != (Settings_BoolSetting_o *)0x0)) {
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)__this_00,val,
               (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
    __this_01 = (__this->fields).__4__this;
    if (__this_01 != (UI_EditProfileProfilePanel_o *)0x0) {
      UI_EditProfileProfilePanel__RefreshPreviews(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass21_0$$<Setup>b__4
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__4 (UI_EditProfileProfilePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x18229ccd0

void
UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__4(UI_EditProfileProfilePanel___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass21_0$$<Setup>b__5
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__5 (UI_EditProfileProfilePanel___c__DisplayClass21_0_o* __this, bool val, const MethodInfo* method);
// 0x18229cd70

void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__5
               (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *__this,bool val,MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_BoolSetting_o *__this_00;
  UI_EditProfileProfilePanel_o *__this_01;
  
  if (Il2CppMethodInitialized_184347416 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_184347416 = '\x01';
  }
  pSVar1 = (__this->fields).settings;
  if ((pSVar1 != (Settings_ProfileSettings_o *)0x0) &&
     (__this_00 = (pSVar1->fields).GuildEffectEnabled, __this_00 != (Settings_BoolSetting_o *)0x0)) {
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)__this_00,val,
               (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
    __this_01 = (__this->fields).__4__this;
    if (__this_01 != (UI_EditProfileProfilePanel_o *)0x0) {
      UI_EditProfileProfilePanel__RefreshPreviews(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$.ctor
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___ctor (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_EditProfileProfilePanel___c__DisplayClass22_0___ctor(UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__0
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__0 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x18229cdf0

void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__0
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  bool bVar1;
  UI_EditProfileProfilePanel_o *__this_00;
  Settings_ColorSetting_o *colorA;
  Settings_StringSetting_o *pSVar2;
  Settings_ColorSetting_o *colorD;
  Settings_ColorSetting_o *colorB;
  Settings_ColorSetting_o *colorC;
  bool bVar3;
  int32_t local_res8 [2];
  UI_ColorSettingElement_o **elemA;
  UI_ColorSettingElement_o **elemB;
  UI_ColorSettingElement_o **elemC;
  UI_ColorSettingElement_o **elemD;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_EditProfileProfilePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  colorA = (__this->fields).colorA;
  bVar1 = (__this->fields).isName;
  pSVar2 = (__this->fields).effectSetting;
  colorD = (__this->fields).colorD;
  colorB = (__this->fields).colorB;
  colorC = (__this->fields).colorC;
  if (Il2CppMethodInitialized_184347403 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184347403 = '\x01';
  }
  local_res8[0] = 0;
  if (pSVar2 != (Settings_StringSetting_o *)0x0) {
    bVar3 = PatreonEffects_NameEffectPresets__TryResolve((pSVar2->fields)._value,local_res8,(MethodInfo *)0x0)
    ;
    if (bVar3) {
      if (bVar1 == false) {
        elemD = &(__this_00->fields)._guildColorD;
        elemC = &(__this_00->fields)._guildColorC;
        elemB = &(__this_00->fields)._guildColorB;
        elemA = &(__this_00->fields)._guildColorA;
      }
      else {
        elemD = &(__this_00->fields)._nameColorD;
        elemC = &(__this_00->fields)._nameColorC;
        elemB = &(__this_00->fields)._nameColorB;
        elemA = &(__this_00->fields)._nameColorA;
      }
      UI_EditProfileProfilePanel__ApplyPreset
                (__this_00,local_res8[0],colorA,colorB,colorC,colorD,elemA,elemB,elemC,elemD,(MethodInfo *)0x0
                );
      UI_EditProfileProfilePanel__RefreshPreviews(__this_00,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__1
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__1 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x18229ccd0

void
UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__1(UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, MethodInfo* method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__2
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__2 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x18229ccd0

void
UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__2(UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, MethodInfo* method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__3
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__3 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x18229ccd0

void
UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__3(UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, MethodInfo* method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__4
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__4 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x18229ccd0

void
UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__4(UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, MethodInfo* method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__5
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__5 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x18229ccd0

void
UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__5(UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, MethodInfo* method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__6
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__6 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x18229ccd0

void
UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__6(UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, MethodInfo* method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__7
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__7 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x18229ccd0

void
UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__7(UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, MethodInfo* method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__8
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__8 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x18229ccd0

void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__8
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__9
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__9 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x18229cf60

void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__9
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  bool bVar1;
  UI_EditProfileProfilePanel_o *__this_00;
  Settings_ColorSetting_o *colorA;
  Settings_StringSetting_o *pSVar2;
  Settings_ColorSetting_o *colorD;
  Settings_ColorSetting_o *colorB;
  Settings_ColorSetting_o *colorC;
  bool bVar3;
  int32_t local_res8 [2];
  UI_ColorSettingElement_o **elemA;
  UI_ColorSettingElement_o **elemB;
  UI_ColorSettingElement_o **elemC;
  UI_ColorSettingElement_o **elemD;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_EditProfileProfilePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  colorA = (__this->fields).capA;
  bVar1 = (__this->fields).captureIsName;
  pSVar2 = (__this->fields).capturedEffect;
  colorD = (__this->fields).capD;
  colorB = (__this->fields).capB;
  colorC = (__this->fields).capC;
  if (Il2CppMethodInitialized_184347404 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184347404 = '\x01';
  }
  local_res8[0] = 0;
  if (pSVar2 != (Settings_StringSetting_o *)0x0) {
    bVar3 = PatreonEffects_NameEffectPresets__TryResolve((pSVar2->fields)._value,local_res8,(MethodInfo *)0x0)
    ;
    if (bVar3) {
      if (bVar1 == false) {
        elemD = &(__this_00->fields)._guildColorD;
        elemC = &(__this_00->fields)._guildColorC;
        elemB = &(__this_00->fields)._guildColorB;
        elemA = &(__this_00->fields)._guildColorA;
      }
      else {
        elemD = &(__this_00->fields)._nameColorD;
        elemC = &(__this_00->fields)._nameColorC;
        elemB = &(__this_00->fields)._nameColorB;
        elemA = &(__this_00->fields)._nameColorA;
      }
      UI_EditProfileProfilePanel__ApplyPreset
                (__this_00,local_res8[0],colorA,colorB,colorC,colorD,elemA,elemB,elemC,elemD,(MethodInfo *)0x0
                );
      UI_EditProfileProfilePanel__RefreshPreviews(__this_00,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass30_0$$.ctor
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass30_0___ctor (UI_EditProfileProfilePanel___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_EditProfileProfilePanel___c__DisplayClass30_0___ctor(UI_EditProfileProfilePanel___c__DisplayClass30_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass30_0$$<CreateGuildRoleSpriteButton>b__0
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass30_0___CreateGuildRoleSpriteButton_b__0 (UI_EditProfileProfilePanel___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x18229d0d0

void UI_EditProfileProfilePanel___c__DisplayClass30_0___CreateGuildRoleSpriteButton_b__0
               (UI_EditProfileProfilePanel___c__DisplayClass30_0_o *__this,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  Settings_ProfileSettings_o *pSVar2;
  UI_EditProfileProfilePanel_o *object;
  TMPro_TextMeshProUGUI_o *label;
  UI_RoleSpritePickPopup_o *__this_00;
  Settings_StringSetting_o *setting;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_184347417 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_EditProfileProfilePanel_RefreshPreviews);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_184347417 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (((pUVar1 != (UI_BaseMenu_o *)0x0) &&
      (pSVar2 = (__this->fields).settings, pSVar2 != (Settings_ProfileSettings_o *)0x0)) &&
     (object = (__this->fields).__4__this, object != (UI_EditProfileProfilePanel_o *)0x0)) {
    label = (object->fields)._guildRoleSpriteButtonLabel;
    __this_00 = (pUVar1->fields).RoleSpritePickPopup;
    setting = (pSVar2->fields).GuildRoleSprite;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_EditProfileProfilePanel_RefreshPreviews,(MethodInfo *)0x0);
    if (__this_00 != (UI_RoleSpritePickPopup_o *)0x0) {
      UI_RoleSpritePickPopup__Show(__this_00,setting,label,__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel$$get_ScrollBar
// il2cpp: bool UI_EditProfileProfilePanel__get_ScrollBar (UI_EditProfileProfilePanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_EditProfileProfilePanel__get_ScrollBar(UI_EditProfileProfilePanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.EditProfileProfilePanel$$Setup
// il2cpp: void UI_EditProfileProfilePanel__Setup (UI_EditProfileProfilePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182287a90
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182287fb2: mov edi, r13d
// asm:   0x182287fb5: mov eax, r13d
// asm:   0x182287fb8: nop dword ptr [rax + rax]
// asm:   0x1822886ef: xor r13d, r13d
// asm:   0x182288af2: mov rsi, qword ptr [rip + 0x1dfd807]  ; "N/A"
// asm:   0x182288af9: jmp 0x182288b1a
// asm:   0x182288ba1: mov rdi, qword ptr [rsp + 0x108]
// asm:   0x182288ba9: mov rdx, qword ptr [rip + 0x1e14e18]  ; "None"
// asm:   0x182288bb0: jmp 0x182288bd6

void UI_EditProfileProfilePanel__Setup
               (UI_EditProfileProfilePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_RectTransform_o *pUVar3;
  Settings_ProfileSettings_o *pSVar4;
  System_String_array *pSVar5;
  Settings_StringSetting_o *pSVar6;
  UI_BaseMenu_o *pUVar7;
  UI_IconPickPopup_o *popup;
  UnityEngine_Object_o *pUVar8;
  Settings_NameSetting_o *pSVar9;
  Il2CppObject *object;
  Settings_BoolSetting_o *pSVar10;
  MethodInfo *pMVar11;
  bool bVar12;
  UI_EditProfileProfilePanel___c__DisplayClass21_0_o *object_00;
  UnityEngine_UI_ScrollRect_o *x;
  UnityEngine_UI_RectMask2D_o *x_00;
  UnityEngine_GameObject_o *pUVar13;
  System_String_o *pSVar14;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Transform_o *pUVar15;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *options;
  System_Collections_Generic_List_string__o *pSVar16;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *icons;
  UnityEngine_Events_UnityAction_o *pUVar17;
  TMPro_TextMeshProUGUI_o *pTVar18;
  PatreonEffects_NameEffectController_o *pPVar19;
  System_Func_string__string__o *__this_01;
  UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *pUVar20;
  UI_CollapsibleToggleSection_o *pUVar21;
  System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *source;
  System_String_o *pSVar22;
  Photon_Realtime_Player_o *pPVar23;
  System_String_o *pSVar24;
  uint uVar25;
  System_String_o *a;
  System_String_o *local_res20;
  
  if (Il2CppMethodInitialized_184347401 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_RoleSpriteDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_EditProfileProfilePanel_c_Setup_b__21_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass21_0_Setup_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass21_0_Setup_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass21_0_Setup_b__3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass21_0_Setup_b__4);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass21_0_Setup_b__5);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_EditProfileProfilePanel_c__DisplayClass21_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_EditProfileProfilePanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Guild");
    il2cpp_codegen_initialize_runtime_metadata(&"<b>Display Name: </b>");
    il2cpp_codegen_initialize_runtime_metadata(&"Name Effect  (Patreon)");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Guild Role Sprite");
    il2cpp_codegen_initialize_runtime_metadata(&"Preview:");
    il2cpp_codegen_initialize_runtime_metadata(&"<b>Patreon Tier: </b>");
    il2cpp_codegen_initialize_runtime_metadata(&"Thank you, ");
    il2cpp_codegen_initialize_runtime_metadata(&"Social");
    il2cpp_codegen_initialize_runtime_metadata(&" for being a supporter.");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"Guild Effect  (Patreon)");
    il2cpp_codegen_initialize_runtime_metadata(&"<b>User ID: </b>");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"About");
    il2cpp_codegen_initialize_runtime_metadata(&"<b>Patreon Supporter: </b>");
    il2cpp_codegen_initialize_runtime_metadata(&"No");
    Il2CppMethodInitialized_184347401 = '\x01';
  }
  object_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_EditProfileProfilePanel_c__DisplayClass21_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,(MethodInfo *)0x0);
  if (object_00 == (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *)0x0) goto label_182288dff;
  (object_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(object_00->fields).__4__this,__this);
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar15 = (__this->fields).SinglePanel;
  if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_182288dff;
  x = UnityEngine_Component__GetComponentInParent_object__664f20
                ((UnityEngine_Component_o *)pUVar15,
                 (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar12) {
    if (x == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_182288dff;
    pUVar3 = (x->fields).m_Viewport;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar12) {
      pUVar3 = (x->fields).m_Viewport;
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_182288dff;
      x_00 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar3,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectMask2D);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar12 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar12) {
        pUVar3 = (x->fields).m_Viewport;
        if ((pUVar3 == (UnityEngine_RectTransform_o *)0x0) ||
           (pUVar13 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
           pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_182288dff;
        UnityEngine_GameObject__AddComponent_object_
                  (pUVar13,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
      }
    }
  }
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  (object_00->fields).settings = pSVar4;
  Il2CppCodeGenWriteBarrier(&(object_00->fields).settings,pSVar4);
  pSVar14 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  uVar25 = 0;
  UI_ElementStyle___ctor(__this_00,0x18,100.0,20.0,pSVar14,(MethodInfo *)0x0);
  pUVar13 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,60.0,3,(MethodInfo *)0x0);
  if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto label_182288dff;
  pUVar15 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
  (__this->fields)._group = pUVar15;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._group,pUVar15);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar16 = TypeInfo_UI_UIManager->static_fields->AvailableProfileIcons;
  if (pSVar16 == (System_Collections_Generic_List_string__o *)0x0) goto label_182288dff;
  options = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                      ((System_Collections_Generic_List_T__o *)pSVar16,
                       (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
  if (Il2CppMethodInitialized_184347409 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"/Icons/Profile/");
    Il2CppMethodInitialized_184347409 = '\x01';
  }
  pSVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar16,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (options ==
      (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
       *)0x0) goto label_182288dff;
  while ((int)uVar25 < (int)options->max_length) {
    if ((uint)options->max_length <= uVar25) {
label_182288e05:
      ThrowIndexOutOfRangeException();
    }
    pSVar14 = (&options->m_Items[0].fields.message)[(int)uVar25];
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar14 = System_String__Concat_1969590
                        (TypeInfo_Utility_ResourcePaths->static_fields->UI,"/Icons/Profile/",pSVar14,
                         "Icon",(MethodInfo *)0x0);
    pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (pSVar16 == (System_Collections_Generic_List_string__o *)0x0) goto label_182288dff;
    piVar1 = &(pSVar16->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (pSVar16->fields)._items;
    if (pSVar5 == (System_String_array *)0x0) goto label_182288dff;
    uVar2 = (pSVar16->fields)._size;
    if (uVar2 < (uint)pSVar5->max_length) {
      (pSVar16->fields)._size = uVar2 + 1;
      if ((uint)pSVar5->max_length <= uVar2) goto label_182288e05;
      pSVar5->m_Items[(int)uVar2] = pSVar14;
      Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2,pSVar14);
      uVar25 = uVar25 + 1;
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar16,(Il2CppObject *)pSVar14,
                 (MethodInfo_93DD50 *)pMVar11->klass->rgctx_data[0xe].method);
      uVar25 = uVar25 + 1;
    }
  }
  if (pSVar16 == (System_Collections_Generic_List_string__o *)0x0) goto label_182288dff;
  icons = System_Collections_Generic_List_object___ToArray
                    ((System_Collections_Generic_List_T__o *)pSVar16,
                     (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
  pSVar4 = (object_00->fields).settings;
  if (pSVar4 == (Settings_ProfileSettings_o *)0x0) goto label_182288dff;
  pSVar6 = (pSVar4->fields).ProfileIcon;
  pUVar15 = (__this->fields)._group;
  local_res20 = UI_UIManager__GetLocaleCommon("Icon",(MethodInfo *)0x0);
  pUVar7 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar7 == (UI_BaseMenu_o *)0x0) goto label_182288dff;
  popup = (pUVar7->fields).IconPickPopup;
  pUVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar17,(Il2CppObject *)object_00,
             (intptr_t)MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass21_0_Setup_b__0,(MethodInfo *)0x0)
  ;
  UI_ElementFactory__CreateIconPickSetting
            (pUVar15,__this_00,(Settings_BaseSetting_o *)pSVar6,local_res20,(System_String_array *)options,
             (System_String_array *)icons,popup,"",(System_String_array *)0x0,180.0,40.0,
             pUVar17,(UI_TooltipPopup_o *)0x0,(System_Int32_array *)0x0,(MethodInfo *)0x0);
  UI_EditProfileProfilePanel__CreateProfileImage(__this,(MethodInfo *)0x0);
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel
            ((__this->fields).SinglePanel,__this_00,"Preview:",1,3,(MethodInfo *)0x0);
  pUVar15 = (__this->fields).SinglePanel;
  pSVar14 = UI_EditProfileProfilePanel__GetGuildPreviewText
                      (__this,(object_00->fields).settings,(MethodInfo *)0x0);
  pUVar13 = UI_ElementFactory__CreateTMPLabel(pUVar15,__this_00,pSVar14,0,3,(MethodInfo *)0x0);
  (__this->fields)._guildPreviewTMP = pUVar13;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._guildPreviewTMP,pUVar13);
  pUVar8 = (UnityEngine_Object_o *)(__this->fields)._guildPreviewTMP;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar12 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar12) {
    pUVar13 = (__this->fields)._guildPreviewTMP;
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto label_182288dff;
    pTVar18 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar13,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pTVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar12) {
      if (pTVar18 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182288dff;
      TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)pTVar18,true,(MethodInfo *)0x0);
      UI_EditProfileProfilePanel__ApplyChatFont(__this,pTVar18,(MethodInfo *)0x0);
    }
    pUVar13 = (__this->fields)._guildPreviewTMP;
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto label_182288dff;
    pPVar19 = UnityEngine_GameObject__AddComponent_object_
                        (pUVar13,(MethodInfo_6F4D60 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    (__this->fields)._guildPreviewEffect = pPVar19;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._guildPreviewEffect,pPVar19);
    pPVar19 = (__this->fields)._guildPreviewEffect;
    if (pPVar19 == (PatreonEffects_NameEffectController_o *)0x0) goto label_182288dff;
    PatreonEffects_NameEffectController__AutoConfigure(pPVar19,(MethodInfo *)0x0);
  }
  pSVar4 = (object_00->fields).settings;
  if ((pSVar4 == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar9 = (pSVar4->fields).Name, pSVar9 == (Settings_NameSetting_o *)0x0)) goto label_182288dff;
  pSVar14 = (pSVar9->fields)._value;
  pUVar15 = (__this->fields).SinglePanel;
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar14 = MiscExtensions__HexColor(pSVar14,(MethodInfo *)0x0);
  pUVar13 = UI_ElementFactory__CreateTMPLabel(pUVar15,__this_00,pSVar14,0,3,(MethodInfo *)0x0);
  (__this->fields)._namePreviewTMP = pUVar13;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._namePreviewTMP,pUVar13);
  pUVar8 = (UnityEngine_Object_o *)(__this->fields)._namePreviewTMP;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar12 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar12) {
    pUVar13 = (__this->fields)._namePreviewTMP;
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto label_182288dff;
    pTVar18 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar13,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pTVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar12) {
      if (pTVar18 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182288dff;
      TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)pTVar18,true,(MethodInfo *)0x0);
      UI_EditProfileProfilePanel__ApplyChatFont(__this,pTVar18,(MethodInfo *)0x0);
    }
    pUVar13 = (__this->fields)._namePreviewTMP;
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto label_182288dff;
    pPVar19 = UnityEngine_GameObject__AddComponent_object_
                        (pUVar13,(MethodInfo_6F4D60 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    (__this->fields)._namePreviewEffect = pPVar19;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._namePreviewEffect,pPVar19);
    pPVar19 = (__this->fields)._namePreviewEffect;
    if (pPVar19 == (PatreonEffects_NameEffectController_o *)0x0) goto label_182288dff;
    PatreonEffects_NameEffectController__AutoConfigure(pPVar19,(MethodInfo *)0x0);
  }
  UI_EditProfileProfilePanel__RefreshPreviews(__this,(MethodInfo *)0x0);
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
  pSVar4 = (object_00->fields).settings;
  if (pSVar4 == (Settings_ProfileSettings_o *)0x0) goto label_182288dff;
  pSVar9 = (pSVar4->fields).Name;
  pUVar15 = (__this->fields).SinglePanel;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  local_res20 = UI_UIManager__GetLocaleCommon("Name",(MethodInfo *)0x0);
  pUVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar17,(Il2CppObject *)object_00,
             (intptr_t)MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass21_0_Setup_b__1,(MethodInfo *)0x0)
  ;
  if ((TypeInfo_UI_EditProfileProfilePanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_EditProfileProfilePanel_c);
  }
  pSVar14 = "";
  __this_01 = TypeInfo_UI_EditProfileProfilePanel_c->static_fields->__9__21_2;
  if (__this_01 == (System_Func_string__string__o *)0x0) {
    if ((TypeInfo_UI_EditProfileProfilePanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_EditProfileProfilePanel_c);
    }
    object = (Il2CppObject *)TypeInfo_UI_EditProfileProfilePanel_c->static_fields->__9;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,object,
               (intptr_t)MethodInfo_UI_EditProfileProfilePanel_c_Setup_b__21_2,(MethodInfo_16E67D0 *)0x0);
    TypeInfo_UI_EditProfileProfilePanel_c->static_fields->__9__21_2 = __this_01;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_EditProfileProfilePanel_c->static_fields->__9__21_2,__this_01);
  }
  UI_ElementFactory__CreateInputSetting
            (pUVar15,__this_00,(Settings_BaseSetting_o *)pSVar9,local_res20,pSVar14,260.0,40.0,false,pUVar17,
             (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,__this_01,
             (MethodInfo *)0x0);
  bVar12 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  if (bVar12) {
    UI_BasePanel__CreateHorizontalDivider
              ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
    pSVar4 = (object_00->fields).settings;
    if ((pSVar4 == (Settings_ProfileSettings_o *)0x0) ||
       (pSVar10 = (pSVar4->fields).NameEffectEnabled, pSVar10 == (Settings_BoolSetting_o *)0x0))
    goto label_182288dff;
    pUVar15 = (__this->fields).SinglePanel;
    bVar12 = (pSVar10->fields)._value;
    pUVar20 = (UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool);
    System_Action_bool____ctor
              (pUVar20,(Il2CppObject *)object_00,
               (intptr_t)MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass21_0_Setup_b__3,
               (MethodInfo *)0x0);
    pUVar21 = UI_ElementFactory__CreateCollapsibleToggleSection
                        (pUVar15,__this_00,"Name Effect  (Patreon)",bVar12,false,(System_Action_bool__o *)pUVar20
                         ,(MethodInfo *)0x0);
    (__this->fields)._nameEffectSection = pUVar21;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._nameEffectSection,pUVar21);
    pSVar4 = (object_00->fields).settings;
    if (pSVar4 == (Settings_ProfileSettings_o *)0x0) goto label_182288dff;
    UI_EditProfileProfilePanel__CreateEffectChildren
              (__this,(__this->fields).SinglePanel,__this_00,pSVar4,true,(pSVar4->fields).NameEffect,
               (pSVar4->fields).NameEffectColorA,(pSVar4->fields).NameEffectColorB,
               (pSVar4->fields).NameEffectColorC,(pSVar4->fields).NameEffectColorD,
               (__this->fields)._nameEffectSection,(MethodInfo *)0x0);
  }
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
  pSVar4 = (object_00->fields).settings;
  if (pSVar4 == (Settings_ProfileSettings_o *)0x0) goto label_182288dff;
  pUVar15 = (__this->fields).SinglePanel;
  pSVar9 = (pSVar4->fields).Guild;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar14 = UI_UIManager__GetLocaleCommon("Guild",(MethodInfo *)0x0);
  pUVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar17,(Il2CppObject *)object_00,
             (intptr_t)MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass21_0_Setup_b__4,(MethodInfo *)0x0)
  ;
  UI_ElementFactory__CreateInputSetting
            (pUVar15,__this_00,(Settings_BaseSetting_o *)pSVar9,pSVar14,"",260.0,40.0,false
             ,pUVar17,(UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
  }
  source = PatreonEffects_RoleSpriteHelpers__GetEligibleRoleSprites
                     ((Photon_Realtime_Player_o *)0x0,(MethodInfo *)0x0);
  bVar12 = System_Linq_Enumerable__Any___Il2CppFullySharedGenericType_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (MethodInfo_6B6590 *)MethodInfo_System_Linq_Enumerable_Any_RoleSpriteDefinition);
  if (bVar12) {
    UI_ElementFactory__CreateDefaultLabel
              ((__this->fields).SinglePanel,__this_00,"Guild Role Sprite",0,3,(MethodInfo *)0x0);
    UI_EditProfileProfilePanel__CreateGuildRoleSpriteButton
              (__this,(__this->fields).SinglePanel,__this_00,(object_00->fields).settings,(MethodInfo *)0x0);
  }
  bVar12 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  if (bVar12) {
    UI_BasePanel__CreateHorizontalDivider
              ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
    pSVar4 = (object_00->fields).settings;
    if ((pSVar4 == (Settings_ProfileSettings_o *)0x0) ||
       (pSVar10 = (pSVar4->fields).GuildEffectEnabled, pSVar10 == (Settings_BoolSetting_o *)0x0))
    goto label_182288dff;
    pUVar15 = (__this->fields).SinglePanel;
    bVar12 = (pSVar10->fields)._value;
    pUVar20 = (UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool);
    System_Action_bool____ctor
              (pUVar20,(Il2CppObject *)object_00,
               (intptr_t)MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass21_0_Setup_b__5,
               (MethodInfo *)0x0);
    pUVar21 = UI_ElementFactory__CreateCollapsibleToggleSection
                        (pUVar15,__this_00,"Guild Effect  (Patreon)",bVar12,false,(System_Action_bool__o *)pUVar20
                         ,(MethodInfo *)0x0);
    (__this->fields)._guildEffectSection = pUVar21;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._guildEffectSection,pUVar21);
    pSVar4 = (object_00->fields).settings;
    if (pSVar4 == (Settings_ProfileSettings_o *)0x0) goto label_182288dff;
    UI_EditProfileProfilePanel__CreateEffectChildren
              (__this,(__this->fields).SinglePanel,__this_00,pSVar4,false,(pSVar4->fields).GuildEffect,
               (pSVar4->fields).GuildEffectColorA,(pSVar4->fields).GuildEffectColorB,
               (pSVar4->fields).GuildEffectColorC,(pSVar4->fields).GuildEffectColorD,
               (__this->fields)._guildEffectSection,(MethodInfo *)0x0);
  }
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
  pSVar4 = (object_00->fields).settings;
  if (pSVar4 == (Settings_ProfileSettings_o *)0x0) goto label_182288dff;
  pUVar15 = (__this->fields).SinglePanel;
  pSVar6 = (pSVar4->fields).Social;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar14 = UI_UIManager__GetLocaleCommon("Social",(MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            (pUVar15,__this_00,(Settings_BaseSetting_o *)pSVar6,pSVar14,"",260.0,40.0,false
             ,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pSVar4 = (object_00->fields).settings;
  if (pSVar4 == (Settings_ProfileSettings_o *)0x0) goto label_182288dff;
  pUVar15 = (__this->fields).SinglePanel;
  pSVar6 = (pSVar4->fields).About;
  pSVar14 = UI_UIManager__GetLocaleCommon("About",(MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            (pUVar15,__this_00,(Settings_BaseSetting_o *)pSVar6,pSVar14,"",260.0,120.0,true
             ,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
  pSVar14 = UI_EditProfileProfilePanel__GetDisplayDisplayName
                      (__this,(object_00->fields).settings,(MethodInfo *)0x0);
  pSVar4 = (object_00->fields).settings;
  if (Il2CppMethodInitialized_18434740e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"N/A");
    Il2CppMethodInitialized_18434740e = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar22 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
  bVar12 = System_String__IsNullOrEmpty(pSVar22,(MethodInfo *)0x0);
  if (bVar12) {
    pSVar22 = "N/A";
    if (((pSVar4 != (Settings_ProfileSettings_o *)0x0) &&
        ((pSVar4->fields).ID != (Settings_StringSetting_o *)0x0)) &&
       (bVar12 = System_String__IsNullOrEmpty((((pSVar4->fields).ID)->fields)._value,(MethodInfo *)0x0),
       pSVar22 = "N/A", !bVar12)) {
      pSVar6 = (pSVar4->fields).ID;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_182288dff;
      pSVar22 = (pSVar6->fields)._value;
    }
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar22 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
  }
  if (Il2CppMethodInitialized_184347410 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_184347410 = '\x01';
  }
  local_res20 = (System_String_o *)0x0;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar23 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (pPVar23 == (Photon_Realtime_Player_o *)0x0) {
label_182288bb2:
    bVar12 = PatreonEffects_PatreonHelper__TryGetLocalTierLabel(&local_res20,(MethodInfo *)0x0);
    a = local_res20;
    if (!bVar12) {
      a = "None";
    }
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar23 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    bVar12 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel(pPVar23,&local_res20,(MethodInfo *)0x0);
    a = local_res20;
    if (!bVar12) goto label_182288bb2;
  }
  bVar12 = System_String__op_Inequality(a,"None",(MethodInfo *)0x0);
  pSVar4 = (object_00->fields).settings;
  if ((pSVar4 != (Settings_ProfileSettings_o *)0x0) &&
     (pSVar9 = (pSVar4->fields).Name, pSVar9 != (Settings_NameSetting_o *)0x0)) {
    pSVar24 = (pSVar9->fields)._value;
    if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
    }
    pSVar24 = Anticheat_ChatFilter__FilterBadWords(pSVar24,(MethodInfo *)0x0);
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pSVar24 = MiscExtensions__HexColor(pSVar24,(MethodInfo *)0x0);
    if (bVar12) {
      pSVar24 = System_String__Concat_1969b70
                          ("Thank you, ",pSVar24," for being a supporter.",(MethodInfo *)0x0);
    }
    else {
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      pSVar24 = MiscExtensions__HexColor("No",(MethodInfo *)0x0);
    }
    pUVar15 = (__this->fields).SinglePanel;
    if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
    }
    pSVar14 = Anticheat_ChatFilter__FilterBadWords(pSVar14,(MethodInfo *)0x0);
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pSVar14 = MiscExtensions__HexColor(pSVar14,(MethodInfo *)0x0);
    pSVar14 = System_String__Concat_1969e50("<b>Display Name: </b>",pSVar14,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultLabel(pUVar15,__this_00,pSVar14,0,3,(MethodInfo *)0x0);
    pUVar15 = (__this->fields).SinglePanel;
    pSVar14 = MiscExtensions__HexColor(pSVar22,(MethodInfo *)0x0);
    pSVar14 = System_String__Concat_1969e50("<b>User ID: </b>",pSVar14,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultLabel(pUVar15,__this_00,pSVar14,0,3,(MethodInfo *)0x0);
    pUVar15 = (__this->fields).SinglePanel;
    pSVar14 = MiscExtensions__HexColor(a,(MethodInfo *)0x0);
    pSVar14 = System_String__Concat_1969e50("<b>Patreon Tier: </b>",pSVar14,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultLabel(pUVar15,__this_00,pSVar14,0,3,(MethodInfo *)0x0);
    pUVar15 = (__this->fields).SinglePanel;
    pSVar14 = System_String__Concat_1969e50("<b>Patreon Supporter: </b>",pSVar24,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultLabel(pUVar15,__this_00,pSVar14,0,3,(MethodInfo *)0x0);
    return;
  }
label_182288dff:
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel$$CreateEffectChildren
// il2cpp: void UI_EditProfileProfilePanel__CreateEffectChildren (UI_EditProfileProfilePanel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_ProfileSettings_o* settings, bool isName, Settings_StringSetting_o* effectSetting, Settings_ColorSetting_o* colorA, Settings_ColorSetting_o* colorB, Settings_ColorSetting_o* colorC, Settings_ColorSetting_o* colorD, UI_CollapsibleToggleSection_o* section, const MethodInfo* method);
// 0x182285640

void UI_EditProfileProfilePanel__CreateEffectChildren
               (UI_EditProfileProfilePanel_o *__this,UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
               Settings_ProfileSettings_o *settings,bool isName,Settings_StringSetting_o *effectSetting,
               Settings_ColorSetting_o *colorA,Settings_ColorSetting_o *colorB,Settings_ColorSetting_o *colorC
               ,Settings_ColorSetting_o *colorD,UI_CollapsibleToggleSection_o *section,MethodInfo *method)

{
  int32_t fontSize;
  Settings_StringSetting_o *pSVar1;
  System_String_array *options;
  UI_BaseMenu_o *pUVar2;
  UI_ColorPickPopup_o *pUVar3;
  Settings_ColorSetting_o *pSVar4;
  UI_EditProfileProfilePanel___c__DisplayClass22_0_o *object;
  UnityEngine_Events_UnityAction_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UI_MultiSelectDropdownElement_o *__this_00;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  UI_ColorSettingElement_o *pUVar9;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_01;
  longlong lVar10;
  System_Nullable_float__Fields local_58;
  Settings_ColorSetting_o *local_50;
  
  if (Il2CppMethodInitialized_184347402 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_EditProfileProfilePanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_ColorSettingElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_DropdownSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass22_0_CreateEffectChildren_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass22_0_CreateEffectChildren_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass22_0_CreateEffectChildren_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass22_0_CreateEffectChildren_b__3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass22_0_CreateEffectChildren_b__4);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass22_0_CreateEffectChildren_b__5);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass22_0_CreateEffectChildren_b__6);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass22_0_CreateEffectChildren_b__7);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass22_0_CreateEffectChildren_b__8);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass22_0_CreateEffectChildren_b__9);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_EditProfileProfilePanel_c__DisplayClass22_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Gradient Colors");
    il2cpp_codegen_initialize_runtime_metadata(&"Reset Colors");
    il2cpp_codegen_initialize_runtime_metadata(&"D");
    il2cpp_codegen_initialize_runtime_metadata(&"B");
    il2cpp_codegen_initialize_runtime_metadata(&"C");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Effect");
    il2cpp_codegen_initialize_runtime_metadata(&"A");
    Il2CppMethodInitialized_184347402 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_EditProfileProfilePanel_c__DisplayClass22_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).effectSetting = effectSetting;
    Il2CppCodeGenWriteBarrier(&(object->fields).effectSetting,effectSetting);
    (object->fields).colorA = colorA;
    Il2CppCodeGenWriteBarrier(&(object->fields).colorA,colorA);
    (object->fields).colorB = colorB;
    Il2CppCodeGenWriteBarrier(&(object->fields).colorB,colorB);
    (object->fields).colorC = colorC;
    Il2CppCodeGenWriteBarrier(&(object->fields).colorC,colorC);
    (object->fields).colorD = colorD;
    Il2CppCodeGenWriteBarrier(&(object->fields).colorD,colorD);
    pSVar1 = (object->fields).effectSetting;
    (object->fields).isName = isName;
    if ((TypeInfo_UI_EditProfileProfilePanel->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_EditProfileProfilePanel);
    }
    options = TypeInfo_UI_EditProfileProfilePanel->static_fields->EffectOptions;
    local_58.hasValue = false;
    local_58._1_3_ = 0;
    local_58.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_58,260.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass22_0_CreateEffectChildren_b__0,
               (MethodInfo *)0x0);
    pUVar6 = UI_ElementFactory__CreateDropdownSetting
                       (parent,style,(Settings_BaseSetting_o *)pSVar1,"Effect",options,
                        "",180.0,40.0,200.0,(System_Nullable_float__o)local_58,pUVar5,
                        (System_Int32_array *)0x0,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = (UI_MultiSelectDropdownElement_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            (pUVar6,(MethodInfo_6F5650 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_DropdownSettingElement);
      if (__this_00 != (UI_MultiSelectDropdownElement_o *)0x0) {
        UI_MultiSelectDropdownElement__FixScale(__this_00,(MethodInfo *)0x0);
      }
      if (section != (UI_CollapsibleToggleSection_o *)0x0) {
        UI_CollapsibleToggleSection__AddChild(section,pUVar6,(MethodInfo *)0x0);
        pUVar6 = UI_ElementFactory__CreateDefaultLabel
                           (parent,style,"Gradient Colors",0,3,(MethodInfo *)0x0);
        UI_CollapsibleToggleSection__AddChild(section,pUVar6,(MethodInfo *)0x0);
        pUVar6 = UI_ElementFactory__CreateHorizontalGroup(parent,10.0,3,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
          if ((object->fields).isName == false) {
            pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
            local_50 = (object->fields).colorA;
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
            if (pUVar2 == (UI_BaseMenu_o *)0x0) goto label_18228620f;
            pUVar3 = (pUVar2->fields).ColorPickPopup;
            pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass22_0_CreateEffectChildren_b__5,
                       (MethodInfo *)0x0);
            pUVar8 = UI_ElementFactory__CreateColorSetting
                               (pUVar7,style,(Settings_BaseSetting_o *)local_50,"A",pUVar3,
                                "",60.0,30.0,pUVar5,(MethodInfo *)0x0);
            if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_18228620f;
            pUVar9 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar8,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_ColorSettingElement);
            (__this->fields)._guildColorA = pUVar9;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._guildColorA,pUVar9);
            local_50 = (Settings_ColorSetting_o *)
                       UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
            pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
            if (pUVar2 == (UI_BaseMenu_o *)0x0) goto label_18228620f;
            pSVar4 = (object->fields).colorB;
            pUVar3 = (pUVar2->fields).ColorPickPopup;
            pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass22_0_CreateEffectChildren_b__6,
                       (MethodInfo *)0x0);
            pUVar8 = UI_ElementFactory__CreateColorSetting
                               ((UnityEngine_Transform_o *)local_50,style,(Settings_BaseSetting_o *)pSVar4,
                                "B",pUVar3,"",60.0,30.0,pUVar5,
                                (MethodInfo *)0x0);
            if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_18228620f;
            pUVar9 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar8,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_ColorSettingElement);
            (__this->fields)._guildColorB = pUVar9;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._guildColorB,pUVar9);
            local_50 = (Settings_ColorSetting_o *)
                       UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
            pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
            if (pUVar2 == (UI_BaseMenu_o *)0x0) goto label_18228620f;
            pSVar4 = (object->fields).colorC;
            pUVar3 = (pUVar2->fields).ColorPickPopup;
            pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass22_0_CreateEffectChildren_b__7,
                       (MethodInfo *)0x0);
            pUVar8 = UI_ElementFactory__CreateColorSetting
                               ((UnityEngine_Transform_o *)local_50,style,(Settings_BaseSetting_o *)pSVar4,
                                "C",pUVar3,"",60.0,30.0,pUVar5,
                                (MethodInfo *)0x0);
            if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_18228620f;
            pUVar9 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar8,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_ColorSettingElement);
            (__this->fields)._guildColorC = pUVar9;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._guildColorC,pUVar9);
            local_50 = (Settings_ColorSetting_o *)
                       UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
            pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
            if (pUVar2 == (UI_BaseMenu_o *)0x0) goto label_18228620f;
            pSVar4 = (object->fields).colorD;
            pUVar3 = (pUVar2->fields).ColorPickPopup;
            pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass22_0_CreateEffectChildren_b__8,
                       (MethodInfo *)0x0);
            pUVar8 = UI_ElementFactory__CreateColorSetting
                               ((UnityEngine_Transform_o *)local_50,style,(Settings_BaseSetting_o *)pSVar4,
                                "D",pUVar3,"",60.0,30.0,pUVar5,
                                (MethodInfo *)0x0);
            if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_18228620f;
            pUVar9 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar8,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_ColorSettingElement);
            (__this->fields)._guildColorD = pUVar9;
            lVar10 = 0xe8;
          }
          else {
            pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
            local_50 = (object->fields).colorA;
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
            if (pUVar2 == (UI_BaseMenu_o *)0x0) goto label_18228620f;
            pUVar3 = (pUVar2->fields).ColorPickPopup;
            pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass22_0_CreateEffectChildren_b__1,
                       (MethodInfo *)0x0);
            pUVar8 = UI_ElementFactory__CreateColorSetting
                               (pUVar7,style,(Settings_BaseSetting_o *)local_50,"A",pUVar3,
                                "",60.0,30.0,pUVar5,(MethodInfo *)0x0);
            if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_18228620f;
            pUVar9 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar8,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_ColorSettingElement);
            (__this->fields)._nameColorA = pUVar9;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._nameColorA,pUVar9);
            local_50 = (Settings_ColorSetting_o *)
                       UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
            pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
            if (pUVar2 == (UI_BaseMenu_o *)0x0) goto label_18228620f;
            pSVar4 = (object->fields).colorB;
            pUVar3 = (pUVar2->fields).ColorPickPopup;
            pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass22_0_CreateEffectChildren_b__2,
                       (MethodInfo *)0x0);
            pUVar8 = UI_ElementFactory__CreateColorSetting
                               ((UnityEngine_Transform_o *)local_50,style,(Settings_BaseSetting_o *)pSVar4,
                                "B",pUVar3,"",60.0,30.0,pUVar5,
                                (MethodInfo *)0x0);
            if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_18228620f;
            pUVar9 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar8,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_ColorSettingElement);
            (__this->fields)._nameColorB = pUVar9;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._nameColorB,pUVar9);
            local_50 = (Settings_ColorSetting_o *)
                       UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
            pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
            if (pUVar2 == (UI_BaseMenu_o *)0x0) goto label_18228620f;
            pSVar4 = (object->fields).colorC;
            pUVar3 = (pUVar2->fields).ColorPickPopup;
            pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass22_0_CreateEffectChildren_b__3,
                       (MethodInfo *)0x0);
            pUVar8 = UI_ElementFactory__CreateColorSetting
                               ((UnityEngine_Transform_o *)local_50,style,(Settings_BaseSetting_o *)pSVar4,
                                "C",pUVar3,"",60.0,30.0,pUVar5,
                                (MethodInfo *)0x0);
            if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_18228620f;
            pUVar9 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar8,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_ColorSettingElement);
            (__this->fields)._nameColorC = pUVar9;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._nameColorC,pUVar9);
            local_50 = (Settings_ColorSetting_o *)
                       UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
            pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
            if (pUVar2 == (UI_BaseMenu_o *)0x0) goto label_18228620f;
            pSVar4 = (object->fields).colorD;
            pUVar3 = (pUVar2->fields).ColorPickPopup;
            pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass22_0_CreateEffectChildren_b__4,
                       (MethodInfo *)0x0);
            pUVar8 = UI_ElementFactory__CreateColorSetting
                               ((UnityEngine_Transform_o *)local_50,style,(Settings_BaseSetting_o *)pSVar4,
                                "D",pUVar3,"",60.0,30.0,pUVar5,
                                (MethodInfo *)0x0);
            if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_18228620f;
            pUVar9 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar8,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_ColorSettingElement);
            (__this->fields)._nameColorD = pUVar9;
            lVar10 = 0xc0;
          }
          Il2CppCodeGenWriteBarrier((void **)((longlong)&__this->klass + lVar10),pUVar9);
          UI_CollapsibleToggleSection__AddChild(section,pUVar6,(MethodInfo *)0x0);
          pUVar6 = UI_ElementFactory__CreateHorizontalGroup(parent,8.0,3,(MethodInfo *)0x0);
          pSVar1 = (object->fields).effectSetting;
          (object->fields).captureIsName = (object->fields).isName;
          (object->fields).capturedEffect = pSVar1;
          Il2CppCodeGenWriteBarrier(&(object->fields).capturedEffect,pSVar1);
          pSVar4 = (object->fields).colorA;
          (object->fields).capA = pSVar4;
          Il2CppCodeGenWriteBarrier(&(object->fields).capA,pSVar4);
          pSVar4 = (object->fields).colorB;
          (object->fields).capB = pSVar4;
          Il2CppCodeGenWriteBarrier(&(object->fields).capB,pSVar4);
          pSVar4 = (object->fields).colorC;
          (object->fields).capC = pSVar4;
          Il2CppCodeGenWriteBarrier(&(object->fields).capC,pSVar4);
          pSVar4 = (object->fields).colorD;
          (object->fields).capD = pSVar4;
          Il2CppCodeGenWriteBarrier(&(object->fields).capD,pSVar4);
          if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
            local_50 = (Settings_ColorSetting_o *)
                       UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
            if (style != (UI_ElementStyle_o *)0x0) {
              fontSize = (style->fields).FontSize;
              themePanel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
              __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
              UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,themePanel,(MethodInfo *)0x0);
              pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar5,(Il2CppObject *)object,
                         (intptr_t)
                         MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass22_0_CreateEffectChildren_b__9,
                         (MethodInfo *)0x0);
              UI_ElementFactory__CreateTextButton
                        ((UnityEngine_Transform_o *)local_50,__this_01,"Reset Colors",0.0,pUVar5,
                         (MethodInfo *)0x0);
              UI_CollapsibleToggleSection__AddChild(section,pUVar6,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
label_18228620f:
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel$$OnEffectSelected
// il2cpp: void UI_EditProfileProfilePanel__OnEffectSelected (UI_EditProfileProfilePanel_o* __this, Settings_StringSetting_o* effectSetting, Settings_ColorSetting_o* colorA, Settings_ColorSetting_o* colorB, Settings_ColorSetting_o* colorC, Settings_ColorSetting_o* colorD, bool isName, const MethodInfo* method);
// 0x182287310

void UI_EditProfileProfilePanel__OnEffectSelected
               (UI_EditProfileProfilePanel_o *__this,Settings_StringSetting_o *effectSetting,
               Settings_ColorSetting_o *colorA,Settings_ColorSetting_o *colorB,Settings_ColorSetting_o *colorC
               ,Settings_ColorSetting_o *colorD,bool isName,MethodInfo *method)

{
  bool bVar1;
  UI_ColorSettingElement_o **elemD;
  UI_ColorSettingElement_o **elemC;
  UI_ColorSettingElement_o **elemB;
  UI_ColorSettingElement_o **elemA;
  int32_t local_res10 [6];
  
  if (Il2CppMethodInitialized_184347403 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184347403 = '\x01';
  }
  local_res10[0] = 0;
  if (effectSetting != (Settings_StringSetting_o *)0x0) {
    bVar1 = PatreonEffects_NameEffectPresets__TryResolve
                      ((effectSetting->fields)._value,local_res10,(MethodInfo *)0x0);
    if (bVar1) {
      if (isName) {
        elemD = &(__this->fields)._nameColorD;
        elemC = &(__this->fields)._nameColorC;
        elemB = &(__this->fields)._nameColorB;
        elemA = &(__this->fields)._nameColorA;
      }
      else {
        elemD = &(__this->fields)._guildColorD;
        elemC = &(__this->fields)._guildColorC;
        elemB = &(__this->fields)._guildColorB;
        elemA = &(__this->fields)._guildColorA;
      }
      UI_EditProfileProfilePanel__ApplyPreset
                (__this,local_res10[0],colorA,colorB,colorC,colorD,elemA,elemB,elemC,elemD,(MethodInfo *)0x0);
      UI_EditProfileProfilePanel__RefreshPreviews(__this,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel$$ResetEffectColors
// il2cpp: void UI_EditProfileProfilePanel__ResetEffectColors (UI_EditProfileProfilePanel_o* __this, Settings_StringSetting_o* effectSetting, Settings_ColorSetting_o* colorA, Settings_ColorSetting_o* colorB, Settings_ColorSetting_o* colorC, Settings_ColorSetting_o* colorD, bool isName, const MethodInfo* method);
// 0x182287980

void UI_EditProfileProfilePanel__ResetEffectColors
               (UI_EditProfileProfilePanel_o *__this,Settings_StringSetting_o *effectSetting,
               Settings_ColorSetting_o *colorA,Settings_ColorSetting_o *colorB,Settings_ColorSetting_o *colorC
               ,Settings_ColorSetting_o *colorD,bool isName,MethodInfo *method)

{
  bool bVar1;
  UI_ColorSettingElement_o **elemD;
  UI_ColorSettingElement_o **elemC;
  UI_ColorSettingElement_o **elemB;
  UI_ColorSettingElement_o **elemA;
  int32_t local_res10 [6];
  
  if (Il2CppMethodInitialized_184347404 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184347404 = '\x01';
  }
  local_res10[0] = 0;
  if (effectSetting != (Settings_StringSetting_o *)0x0) {
    bVar1 = PatreonEffects_NameEffectPresets__TryResolve
                      ((effectSetting->fields)._value,local_res10,(MethodInfo *)0x0);
    if (bVar1) {
      if (isName) {
        elemD = &(__this->fields)._nameColorD;
        elemC = &(__this->fields)._nameColorC;
        elemB = &(__this->fields)._nameColorB;
        elemA = &(__this->fields)._nameColorA;
      }
      else {
        elemD = &(__this->fields)._guildColorD;
        elemC = &(__this->fields)._guildColorC;
        elemB = &(__this->fields)._guildColorB;
        elemA = &(__this->fields)._guildColorA;
      }
      UI_EditProfileProfilePanel__ApplyPreset
                (__this,local_res10[0],colorA,colorB,colorC,colorD,elemA,elemB,elemC,elemD,(MethodInfo *)0x0);
      UI_EditProfileProfilePanel__RefreshPreviews(__this,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel$$ApplyPreset
// il2cpp: void UI_EditProfileProfilePanel__ApplyPreset (UI_EditProfileProfilePanel_o* __this, int32_t effectType, Settings_ColorSetting_o* colorA, Settings_ColorSetting_o* colorB, Settings_ColorSetting_o* colorC, Settings_ColorSetting_o* colorD, UI_ColorSettingElement_o** elemA, UI_ColorSettingElement_o** elemB, UI_ColorSettingElement_o** elemC, UI_ColorSettingElement_o** elemD, const MethodInfo* method);
// 0x182285420

void UI_EditProfileProfilePanel__ApplyPreset
               (UI_EditProfileProfilePanel_o *__this,int32_t effectType,Settings_ColorSetting_o *colorA,
               Settings_ColorSetting_o *colorB,Settings_ColorSetting_o *colorC,Settings_ColorSetting_o *colorD
               ,UI_ColorSettingElement_o **elemA,UI_ColorSettingElement_o **elemB,
               UI_ColorSettingElement_o **elemC,UI_ColorSettingElement_o **elemD,MethodInfo *method)

{
  UI_ColorSettingElement_o *pUVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  PatreonEffects_NameEffectSettings_o *pPVar10;
  Utility_Color255_o *pUVar11;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184347405 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_184347405 = '\x01';
  }
  pPVar10 = PatreonEffects_NameEffectPresets__GetPreset(effectType,(MethodInfo *)0x0);
  if (pPVar10 != (PatreonEffects_NameEffectSettings_o *)0x0) {
    uVar2._0_4_ = (pPVar10->fields).gradientA.fields.r;
    uVar2._4_4_ = (pPVar10->fields).gradientA.fields.g;
    uVar3._0_4_ = (pPVar10->fields).gradientA.fields.b;
    uVar3._4_4_ = (pPVar10->fields).gradientA.fields.a;
    pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    local_28[0]._0_8_ = uVar2;
    local_28[0]._8_8_ = uVar3;
    Utility_Color255___ctor_23327a0(pUVar11,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
    if (colorA != (Settings_ColorSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)colorA,(Il2CppObject *)pUVar11,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
      uVar4._0_4_ = (pPVar10->fields).gradientB.fields.r;
      uVar4._4_4_ = (pPVar10->fields).gradientB.fields.g;
      uVar5._0_4_ = (pPVar10->fields).gradientB.fields.b;
      uVar5._4_4_ = (pPVar10->fields).gradientB.fields.a;
      pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      local_28[0]._0_8_ = uVar4;
      local_28[0]._8_8_ = uVar5;
      Utility_Color255___ctor_23327a0(pUVar11,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
      if (colorB != (Settings_ColorSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)colorB,(Il2CppObject *)pUVar11,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
        uVar6._0_4_ = (pPVar10->fields).gradientC.fields.r;
        uVar6._4_4_ = (pPVar10->fields).gradientC.fields.g;
        uVar7._0_4_ = (pPVar10->fields).gradientC.fields.b;
        uVar7._4_4_ = (pPVar10->fields).gradientC.fields.a;
        pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
        local_28[0]._0_8_ = uVar6;
        local_28[0]._8_8_ = uVar7;
        Utility_Color255___ctor_23327a0(pUVar11,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
        if (colorC != (Settings_ColorSetting_o *)0x0) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)colorC,(Il2CppObject *)pUVar11,
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
          uVar8._0_4_ = (pPVar10->fields).gradientD.fields.r;
          uVar8._4_4_ = (pPVar10->fields).gradientD.fields.g;
          uVar9._0_4_ = (pPVar10->fields).gradientD.fields.b;
          uVar9._4_4_ = (pPVar10->fields).gradientD.fields.a;
          pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
          local_28[0]._0_8_ = uVar8;
          local_28[0]._8_8_ = uVar9;
          Utility_Color255___ctor_23327a0(pUVar11,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
          if (colorD != (Settings_ColorSetting_o *)0x0) {
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)colorD,(Il2CppObject *)pUVar11,
                       (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
            pUVar1 = *elemA;
            if (pUVar1 != (UI_ColorSettingElement_o *)0x0) {
              (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                        (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
            }
            pUVar1 = *elemB;
            if (pUVar1 != (UI_ColorSettingElement_o *)0x0) {
              (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                        (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
            }
            pUVar1 = *elemC;
            if (pUVar1 != (UI_ColorSettingElement_o *)0x0) {
              (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                        (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
            }
            pUVar1 = *elemD;
            if (pUVar1 != (UI_ColorSettingElement_o *)0x0) {
              (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)
                        (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
            }
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel$$RefreshPreviews
// il2cpp: void UI_EditProfileProfilePanel__RefreshPreviews (UI_EditProfileProfilePanel_o* __this, const MethodInfo* method);
// 0x182287420

void UI_EditProfileProfilePanel__RefreshPreviews(UI_EditProfileProfilePanel_o *__this,MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_NameSetting_o *pSVar2;
  UnityEngine_GameObject_o *tmpObj;
  PatreonEffects_NameEffectController_o *controller;
  Settings_BoolSetting_o *pSVar3;
  TMPro_TextMeshProUGUI_o *pTVar4;
  Settings_StringSetting_o *pSVar5;
  bool bVar6;
  System_String_o *pSVar7;
  char cVar8;
  
  if (Il2CppMethodInitialized_184347406 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184347406 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  bVar6 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  if ((pSVar1 != (Settings_ProfileSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).Name, pSVar2 != (Settings_NameSetting_o *)0x0)) {
    if (bVar6) {
      pSVar3 = (pSVar1->fields).NameEffectEnabled;
      if (pSVar3 == (Settings_BoolSetting_o *)0x0) goto label_1822876c5;
      cVar8 = (pSVar3->fields)._value;
    }
    else {
      cVar8 = '\0';
    }
    if (__this != (UI_EditProfileProfilePanel_o *)0x0) {
      UI_EditProfileProfilePanel__RefreshSinglePreview
                (__this,(__this->fields)._namePreviewTMP,(__this->fields)._namePreviewEffect,
                 (pSVar2->fields)._value,cVar8 != '\0',(pSVar1->fields).NameEffect,
                 (pSVar1->fields).NameEffectColorA,(pSVar1->fields).NameEffectColorB,
                 (pSVar1->fields).NameEffectColorC,(pSVar1->fields).NameEffectColorD,true,(MethodInfo *)0x0);
      tmpObj = (__this->fields)._guildPreviewTMP;
      controller = (__this->fields)._guildPreviewEffect;
      pSVar7 = UI_EditProfileProfilePanel__GetGuildPreviewText(__this,pSVar1,(MethodInfo *)0x0);
      if (bVar6) {
        pSVar3 = (pSVar1->fields).GuildEffectEnabled;
        if (pSVar3 == (Settings_BoolSetting_o *)0x0) goto label_1822876c5;
        cVar8 = (pSVar3->fields)._value;
      }
      else {
        cVar8 = '\0';
      }
      UI_EditProfileProfilePanel__RefreshSinglePreview
                (__this,tmpObj,controller,pSVar7,cVar8 != '\0',(pSVar1->fields).GuildEffect,
                 (pSVar1->fields).GuildEffectColorA,(pSVar1->fields).GuildEffectColorB,
                 (pSVar1->fields).GuildEffectColorC,(pSVar1->fields).GuildEffectColorD,false,(MethodInfo *)0x0
                );
      if (Il2CppMethodInitialized_18434740b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
        Il2CppMethodInitialized_18434740b = '\x01';
      }
      pTVar4 = (__this->fields)._guildRoleSpriteButtonLabel;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar6) {
        return;
      }
      pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
      if ((pSVar1 != (Settings_ProfileSettings_o *)0x0) &&
         (pSVar5 = (pSVar1->fields).GuildRoleSprite, pSVar5 != (Settings_StringSetting_o *)0x0)) {
        pTVar4 = (__this->fields)._guildRoleSpriteButtonLabel;
        pSVar7 = (pSVar5->fields)._value;
        if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
        }
        pSVar7 = PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                           (pSVar7,(Photon_Realtime_Player_o *)0x0,(MethodInfo *)0x0);
        if (pTVar4 != (TMPro_TextMeshProUGUI_o *)0x0) {
          (*(pTVar4->klass->vtable)._66_set_text.methodPtr)
                    (pTVar4,pSVar7,(pTVar4->klass->vtable)._66_set_text.method);
          return;
        }
      }
    }
  }
label_1822876c5:
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel$$RefreshSinglePreview
// il2cpp: void UI_EditProfileProfilePanel__RefreshSinglePreview (UI_EditProfileProfilePanel_o* __this, UnityEngine_GameObject_o* tmpObj, PatreonEffects_NameEffectController_o* controller, System_String_o* rawText, bool effectEnabled, Settings_StringSetting_o* effectSetting, Settings_ColorSetting_o* colorA, Settings_ColorSetting_o* colorB, Settings_ColorSetting_o* colorC, Settings_ColorSetting_o* colorD, bool applyHexColor, const MethodInfo* method);
// 0x1822876d0

void UI_EditProfileProfilePanel__RefreshSinglePreview
               (UI_EditProfileProfilePanel_o *__this,UnityEngine_GameObject_o *tmpObj,
               PatreonEffects_NameEffectController_o *controller,System_String_o *rawText,bool effectEnabled,
               Settings_StringSetting_o *effectSetting,Settings_ColorSetting_o *colorA,
               Settings_ColorSetting_o *colorB,Settings_ColorSetting_o *colorC,Settings_ColorSetting_o *colorD
               ,bool applyHexColor,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  TMPro_TextMeshProUGUI_o *__this_00;
  PatreonEffects_NameEffectSettings_o *settings;
  UnityEngine_Color_o *pUVar6;
  int32_t local_res10 [2];
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_184347407 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    Il2CppMethodInitialized_184347407 = '\x01';
  }
  local_res10[0] = 0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)tmpObj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  if (tmpObj == (UnityEngine_GameObject_o *)0x0) goto label_18228796d;
  __this_00 = UnityEngine_GameObject__GetComponent_object_
                        (tmpObj,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if (__this_00 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_18228796d;
    TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)__this_00,true,(MethodInfo *)0x0);
    if (applyHexColor) {
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      rawText = MiscExtensions__HexColor(rawText,(MethodInfo *)0x0);
    }
    (*(__this_00->klass->vtable)._66_set_text.methodPtr)
              (__this_00,rawText,(__this_00->klass->vtable)._66_set_text.method);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)controller,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  if (effectEnabled) {
    if (effectSetting == (Settings_StringSetting_o *)0x0) goto label_18228796d;
    bVar5 = PatreonEffects_NameEffectPresets__TryResolve
                      ((effectSetting->fields)._value,local_res10,(MethodInfo *)0x0);
    if (bVar5) {
      settings = PatreonEffects_NameEffectPresets__GetPreset(local_res10[0],(MethodInfo *)0x0);
      if (((colorA != (Settings_ColorSetting_o *)0x0) &&
          (pUVar1 = (colorA->fields)._value, pUVar1 != (Utility_Color255_o *)0x0)) &&
         (pUVar6 = Utility_Color255__ToColor(&local_18,pUVar1,(MethodInfo *)0x0),
         settings != (PatreonEffects_NameEffectSettings_o *)0x0)) {
        fVar2 = (pUVar6->fields).g;
        fVar3 = (pUVar6->fields).b;
        fVar4 = (pUVar6->fields).a;
        (settings->fields).gradientA.fields.r = (pUVar6->fields).r;
        (settings->fields).gradientA.fields.g = fVar2;
        (settings->fields).gradientA.fields.b = fVar3;
        (settings->fields).gradientA.fields.a = fVar4;
        if ((colorB != (Settings_ColorSetting_o *)0x0) &&
           (pUVar1 = (colorB->fields)._value, pUVar1 != (Utility_Color255_o *)0x0)) {
          pUVar6 = Utility_Color255__ToColor(&local_18,pUVar1,(MethodInfo *)0x0);
          fVar2 = (pUVar6->fields).g;
          fVar3 = (pUVar6->fields).b;
          fVar4 = (pUVar6->fields).a;
          (settings->fields).gradientB.fields.r = (pUVar6->fields).r;
          (settings->fields).gradientB.fields.g = fVar2;
          (settings->fields).gradientB.fields.b = fVar3;
          (settings->fields).gradientB.fields.a = fVar4;
          if ((colorC != (Settings_ColorSetting_o *)0x0) &&
             (pUVar1 = (colorC->fields)._value, pUVar1 != (Utility_Color255_o *)0x0)) {
            pUVar6 = Utility_Color255__ToColor(&local_18,pUVar1,(MethodInfo *)0x0);
            fVar2 = (pUVar6->fields).g;
            fVar3 = (pUVar6->fields).b;
            fVar4 = (pUVar6->fields).a;
            (settings->fields).gradientC.fields.r = (pUVar6->fields).r;
            (settings->fields).gradientC.fields.g = fVar2;
            (settings->fields).gradientC.fields.b = fVar3;
            (settings->fields).gradientC.fields.a = fVar4;
            if ((colorD != (Settings_ColorSetting_o *)0x0) &&
               (pUVar1 = (colorD->fields)._value, pUVar1 != (Utility_Color255_o *)0x0)) {
              pUVar6 = Utility_Color255__ToColor(&local_18,pUVar1,(MethodInfo *)0x0);
              fVar2 = (pUVar6->fields).g;
              fVar3 = (pUVar6->fields).b;
              fVar4 = (pUVar6->fields).a;
              (settings->fields).gradientD.fields.r = (pUVar6->fields).r;
              (settings->fields).gradientD.fields.g = fVar2;
              (settings->fields).gradientD.fields.b = fVar3;
              (settings->fields).gradientD.fields.a = fVar4;
              if (controller != (PatreonEffects_NameEffectController_o *)0x0) {
                PatreonEffects_NameEffectController__Apply(controller,settings,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      goto label_18228796d;
    }
  }
  if (controller != (PatreonEffects_NameEffectController_o *)0x0) {
    PatreonEffects_NameEffectController__Clear(controller,(MethodInfo *)0x0);
    return;
  }
label_18228796d:
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel$$CreateProfileImage
// il2cpp: void UI_EditProfileProfilePanel__CreateProfileImage (UI_EditProfileProfilePanel_o* __this, const MethodInfo* method);
// 0x182286b40

void UI_EditProfileProfilePanel__CreateProfileImage(UI_EditProfileProfilePanel_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  Settings_ProfileSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  UnityEngine_Transform_o *parent;
  bool bVar4;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *value;
  
  if (Il2CppMethodInitialized_184347408 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Profile/");
    Il2CppMethodInitialized_184347408 = '\x01';
  }
  pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,100.0,20.0,pSVar5,(MethodInfo *)0x0);
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._profileImage;
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._profileImage;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
  }
  if ((pSVar2 != (Settings_ProfileSettings_o *)0x0) &&
     (pSVar3 = (pSVar2->fields).ProfileIcon, pSVar3 != (Settings_StringSetting_o *)0x0)) {
    parent = (__this->fields)._group;
    pSVar5 = (pSVar3->fields)._value;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar5 = UI_UIManager__GetProfileIcon(pSVar5,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_1969e50("Icons/Profile/",pSVar5,(MethodInfo *)0x0);
    value = UI_ElementFactory__CreateRawImage(parent,__this_00,pSVar5,256.0,256.0,(MethodInfo *)0x0);
    (__this->fields)._profileImage = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._profileImage,value);
    return;
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel$$GetProfileIconPaths
// il2cpp: System_String_array* UI_EditProfileProfilePanel__GetProfileIconPaths (UI_EditProfileProfilePanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x182287150

System_String_array *
UI_EditProfileProfilePanel__GetProfileIconPaths
          (UI_EditProfileProfilePanel_o *__this,System_String_array *options,MethodInfo *method)

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
  
  if (Il2CppMethodInitialized_184347409 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"/Icons/Profile/");
    Il2CppMethodInitialized_184347409 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (options != (System_String_array *)0x0) {
    uVar7 = 0;
    while ((int)uVar7 < (int)options->max_length) {
      if ((uint)options->max_length <= uVar7) {
label_182287306:
        ThrowIndexOutOfRangeException();
      }
      pSVar5 = options->m_Items[(int)uVar7];
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar5 = System_String__Concat_1969590
                         (TypeInfo_Utility_ResourcePaths->static_fields->UI,"/Icons/Profile/",pSVar5,
                          "Icon",(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_182287300;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 == (System_String_array *)0x0) goto label_182287300;
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) goto label_182287306;
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
label_182287300:
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel$$CreateGuildRoleSpriteButton
// il2cpp: void UI_EditProfileProfilePanel__CreateGuildRoleSpriteButton (UI_EditProfileProfilePanel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_ProfileSettings_o* settings, const MethodInfo* method);
// 0x182286220

void UI_EditProfileProfilePanel__CreateGuildRoleSpriteButton
               (UI_EditProfileProfilePanel_o *__this,UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
               Settings_ProfileSettings_o *settings,MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  UnityEngine_Events_UnityEvent_o *__this_00;
  Il2CppType *handle;
  UI_EditProfileProfilePanel___c__DisplayClass30_0_o *object;
  System_Type_array *pSVar3;
  System_Type_o *pSVar4;
  Il2CppObject *pIVar5;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_UI_LayoutElement_o *pUVar7;
  UnityEngine_UI_Image_o *pUVar8;
  UnityEngine_UI_Button_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_RectTransform_o *__this_04;
  TMPro_TextMeshProUGUI_o *pTVar9;
  System_String_o *pSVar10;
  UnityEngine_Events_UnityAction_o *__this_05;
  UnityEngine_Color_Fields local_98;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (Il2CppMethodInitialized_18434740a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_ColorBlock);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_TMPro_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass30_0_CreateGuildRoleSpriteButton_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_EditProfileProfilePanel_c__DisplayClass30_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"GuildRoleSpriteButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    Il2CppMethodInitialized_18434740a = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_EditProfileProfilePanel_c__DisplayClass30_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_EditProfileProfilePanel___c__DisplayClass30_0_o *)0x0) {
    (object->fields).settings = settings;
    Il2CppCodeGenWriteBarrier(&(object->fields).settings,settings);
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    pSVar3 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,5);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    pSVar4 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (pSVar3 != (System_Type_array *)0x0) {
      if (pSVar4 != (System_Type_o *)0x0) {
        pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar4,(((pSVar3->obj).klass)->_1).element_class);
        if (pIVar5 == (Il2CppObject *)0x0) {
          pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
        }
      }
      if ((int)pSVar3->max_length != 0) {
        pSVar3->m_Items[0] = pSVar4;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pSVar4);
        pSVar4 = System_Type__GetTypeFromHandle
                           ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
        if (pSVar4 != (System_Type_o *)0x0) {
          pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar4,(((pSVar3->obj).klass)->_1).element_class);
          if (pIVar5 == (Il2CppObject *)0x0) {
            pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
          }
        }
        if (1 < (uint)pSVar3->max_length) {
          pSVar3->m_Items[1] = pSVar4;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pSVar4);
          pSVar4 = System_Type__GetTypeFromHandle
                             ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
          if (pSVar4 != (System_Type_o *)0x0) {
            pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar4,(((pSVar3->obj).klass)->_1).element_class)
            ;
            if (pIVar5 == (Il2CppObject *)0x0) {
              pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
            }
          }
          if (2 < (uint)pSVar3->max_length) {
            pSVar3->m_Items[2] = pSVar4;
            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 2,pSVar4);
            pSVar4 = System_Type__GetTypeFromHandle
                               ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Button,(MethodInfo *)0x0);
            if (pSVar4 != (System_Type_o *)0x0) {
              pIVar5 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar4,(((pSVar3->obj).klass)->_1).element_class);
              if (pIVar5 == (Il2CppObject *)0x0) {
                pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
              }
            }
            if (3 < (uint)pSVar3->max_length) {
              pSVar3->m_Items[3] = pSVar4;
              Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 3,pSVar4);
              pSVar4 = System_Type__GetTypeFromHandle
                                 ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,
                                  (MethodInfo *)0x0);
              if (pSVar4 != (System_Type_o *)0x0) {
                pIVar5 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pSVar4,(((pSVar3->obj).klass)->_1).element_class);
                if (pIVar5 == (Il2CppObject *)0x0) {
                  pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
                }
              }
              if (4 < (uint)pSVar3->max_length) {
                pSVar3->m_Items[4] = pSVar4;
                Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 4,pSVar4);
                __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                UnityEngine_GameObject___ctor_2f1abe0
                          (__this_01,"GuildRoleSpriteButton",pSVar3,(MethodInfo *)0x0);
                if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar6 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__SetParent_2f5a7e0(pUVar6,parent,false,(MethodInfo *)0x0);
                    pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                       (__this_01,
                                        (MethodInfo_6F5650 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                    if (pUVar7 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                      (*(pUVar7->klass->vtable)._36_set_preferredWidth.methodPtr)
                                (pUVar7,260.0,(pUVar7->klass->vtable)._36_set_preferredWidth.method);
                      (*(pUVar7->klass->vtable)._38_set_preferredHeight.methodPtr)
                                (pUVar7,40.0,(pUVar7->klass->vtable)._38_set_preferredHeight.method);
                      pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                         (__this_01,
                                          (MethodInfo_6F5650 *)
                                          MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                      if (pUVar8 != (UnityEngine_UI_Image_o *)0x0) {
                        local_98.r = 1.0;
                        local_98.g = 1.0;
                        local_98.b = 1.0;
                        local_98.a = 0.03;
                        (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                                  (pUVar8,(UnityEngine_Color_o *)&local_98,
                                   (pUVar8->klass->vtable)._23_set_color.method);
                        __this_02 = UnityEngine_GameObject__GetComponent_object_
                                              (__this_01,
                                               (MethodInfo_6F5650 *)
                                               MethodInfo_UnityEngine_GameObject_GetComponent_Button);
                        if ((TypeInfo_UnityEngine_UI_ColorBlock->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_ColorBlock)
                          ;
                        }
                        if (__this_02 != (UnityEngine_UI_Button_o *)0x0) {
                          local_88.fields.m_ColorMultiplier = 1.0;
                          local_88.fields.m_FadeDuration = 0.1;
                          local_88.fields.m_NormalColor.fields.r = 1.0;
                          local_88.fields.m_NormalColor.fields.g = 1.0;
                          local_88.fields.m_NormalColor.fields.b = 1.0;
                          local_88.fields.m_NormalColor.fields.a = 0.08;
                          local_88.fields.m_HighlightedColor.fields.r = 1.0;
                          local_88.fields.m_HighlightedColor.fields.g = 1.0;
                          local_88.fields.m_HighlightedColor.fields.b = 1.0;
                          local_88.fields.m_HighlightedColor.fields.a = 0.16;
                          local_88.fields.m_PressedColor.fields.r = 1.0;
                          local_88.fields.m_PressedColor.fields.g = 1.0;
                          local_88.fields.m_PressedColor.fields.b = 1.0;
                          local_88.fields.m_PressedColor.fields.a = 0.24;
                          local_88.fields.m_SelectedColor.fields.r = 1.0;
                          local_88.fields.m_SelectedColor.fields.g = 1.0;
                          local_88.fields.m_SelectedColor.fields.b = 1.0;
                          local_88.fields.m_SelectedColor.fields.a = 0.16;
                          local_88.fields.m_DisabledColor.fields.r = 1.0;
                          local_88.fields.m_DisabledColor.fields.g = 1.0;
                          local_88.fields.m_DisabledColor.fields.b = 1.0;
                          local_88.fields.m_DisabledColor.fields.a = 0.05;
                          UnityEngine_UI_Selectable__set_colors
                                    ((UnityEngine_UI_Selectable_o *)__this_02,&local_88,(MethodInfo *)0x0);
                          pSVar3 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
                          pSVar4 = System_Type__GetTypeFromHandle
                                             ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,
                                              (MethodInfo *)0x0);
                          if (pSVar3 != (System_Type_array *)0x0) {
                            if (pSVar4 != (System_Type_o *)0x0) {
                              pIVar5 = il2cpp_vm_Object_IsInst
                                                 ((Il2CppObject *)pSVar4,
                                                  (((pSVar3->obj).klass)->_1).element_class);
                              if (pIVar5 == (Il2CppObject *)0x0) {
                                pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                                il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
                              }
                            }
                            if ((int)pSVar3->max_length != 0) {
                              pSVar3->m_Items[0] = pSVar4;
                              Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pSVar4);
                              pSVar4 = System_Type__GetTypeFromHandle
                                                 ((System_RuntimeTypeHandle_o)
                                                  TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
                              if (pSVar4 != (System_Type_o *)0x0) {
                                pIVar5 = il2cpp_vm_Object_IsInst
                                                   ((Il2CppObject *)pSVar4,
                                                    (((pSVar3->obj).klass)->_1).element_class);
                                if (pIVar5 == (Il2CppObject *)0x0) {
                                  pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                                  il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
                                }
                              }
                              if (1 < (uint)pSVar3->max_length) {
                                pSVar3->m_Items[1] = pSVar4;
                                Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pSVar4);
                                pSVar4 = System_Type__GetTypeFromHandle
                                                   ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,
                                                    (MethodInfo *)0x0);
                                if (pSVar4 != (System_Type_o *)0x0) {
                                  pIVar5 = il2cpp_vm_Object_IsInst
                                                     ((Il2CppObject *)pSVar4,
                                                      (((pSVar3->obj).klass)->_1).element_class);
                                  if (pIVar5 == (Il2CppObject *)0x0) {
                                    pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                                    il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
                                  }
                                }
                                if (2 < (uint)pSVar3->max_length) {
                                  pSVar3->m_Items[2] = pSVar4;
                                  Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 2,pSVar4);
                                  __this_03 = il2cpp_codegen_object_new
                                                        ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                                  UnityEngine_GameObject___ctor_2f1abe0
                                            (__this_03,"Text",pSVar3,(MethodInfo *)0x0);
                                  if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
                                    pUVar6 = UnityEngine_GameObject__get_transform
                                                       (__this_03,(MethodInfo *)0x0);
                                    parent_00 = UnityEngine_GameObject__get_transform
                                                          (__this_01,(MethodInfo *)0x0);
                                    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                      UnityEngine_Transform__SetParent_2f5a7e0
                                                (pUVar6,parent_00,false,(MethodInfo *)0x0);
                                      __this_04 = UnityEngine_GameObject__GetComponent_object_
                                                            (__this_03,
                                                             (MethodInfo_6F5650 *)
                                                                                                                          
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                        il2cpp_codegen_initialize_runtime_metadata
                                                  (&TypeInfo_UnityEngine_Vector2);
                                        Il2CppMethodInitialized_18433e3c9 = '\x01';
                                      }
                                      if (__this_04 != (UnityEngine_RectTransform_o *)0x0) {
                                        UnityEngine_RectTransform__set_anchorMin
                                                  (__this_04,
                                                   (UnityEngine_Vector2_o)
                                                   (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).
                                                   fields,(MethodInfo *)0x0);
                                        if (Il2CppMethodInitialized_184341f36 == '\0') {
                                          il2cpp_codegen_initialize_runtime_metadata
                                                    (&TypeInfo_UnityEngine_Vector2);
                                          Il2CppMethodInitialized_184341f36 = '\x01';
                                        }
                                        UnityEngine_RectTransform__set_anchorMax
                                                  (__this_04,
                                                   (UnityEngine_Vector2_o)
                                                   (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).
                                                   fields,(MethodInfo *)0x0);
                                        UnityEngine_RectTransform__set_offsetMin
                                                  (__this_04,(UnityEngine_Vector2_o)0x41200000,
                                                   (MethodInfo *)0x0);
                                        UnityEngine_RectTransform__set_offsetMax
                                                  (__this_04,(UnityEngine_Vector2_o)0xc1200000,
                                                   (MethodInfo *)0x0);
                                        pTVar9 = UnityEngine_GameObject__GetComponent_object_
                                                           (__this_03,
                                                            (MethodInfo_6F5650 *)
                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI
                                                       );
                                        (__this->fields)._guildRoleSpriteButtonLabel = pTVar9;
                                        Il2CppCodeGenWriteBarrier
                                                  (&(__this->fields)._guildRoleSpriteButtonLabel,pTVar9);
                                        pTVar9 = (__this->fields)._guildRoleSpriteButtonLabel;
                                        if (pTVar9 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                          TMPro_TMP_Text__set_richText
                                                    ((TMPro_TMP_Text_o *)pTVar9,true,(MethodInfo *)0x0);
                                          if ((style != (UI_ElementStyle_o *)0x0) &&
                                             (pTVar9 = (__this->fields)._guildRoleSpriteButtonLabel,
                                             pTVar9 != (TMPro_TextMeshProUGUI_o *)0x0)) {
                                            TMPro_TMP_Text__set_fontSize
                                                      ((TMPro_TMP_Text_o *)pTVar9,
                                                       (float)(style->fields).FontSize,(MethodInfo *)0x0);
                                            pTVar9 = (__this->fields)._guildRoleSpriteButtonLabel;
                                            if (pTVar9 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                              TMPro_TMP_Text__set_fontStyle
                                                        ((TMPro_TMP_Text_o *)pTVar9,1,(MethodInfo *)0x0);
                                              pTVar9 = (__this->fields)._guildRoleSpriteButtonLabel;
                                              if (pTVar9 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                                TMPro_TMP_Text__set_alignment
                                                          ((TMPro_TMP_Text_o *)pTVar9,0x1001,(MethodInfo *)0x0
                                                          );
                                                pTVar9 = (__this->fields)._guildRoleSpriteButtonLabel;
                                                if (pTVar9 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                                  local_98.r = 1.0;
                                                  local_98.g = 1.0;
                                                  local_98.b = 1.0;
                                                  local_98.a = 1.0;
                                                  (*(pTVar9->klass->vtable)._23_set_color.methodPtr)
                                                            (pTVar9,(UnityEngine_Color_o *)&local_98,
                                                             (pTVar9->klass->vtable)._23_set_color.method);
                                                  UI_EditProfileProfilePanel__ApplyChatFont
                                                            (__this,(__this->fields).
                                                                    _guildRoleSpriteButtonLabel,
                                                             (MethodInfo *)0x0);
                                                  pSVar1 = (object->fields).settings;
                                                  if ((pSVar1 != (Settings_ProfileSettings_o *)0x0) &&
                                                     (pSVar2 = (pSVar1->fields).GuildRoleSprite,
                                                     pSVar2 != (Settings_StringSetting_o *)0x0)) {
                                                    pTVar9 = (__this->fields)._guildRoleSpriteButtonLabel;
                                                    pSVar10 = (pSVar2->fields)._value;
                                                    if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      il2cpp_codegen_runtime_class_init
                                                                ((Il2CppClass *)
                                                                 TypeInfo_PatreonEffects_RoleSpriteHelpers);
                                                    }
                                                    pSVar10 = 
                                                       PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                                                                 (pSVar10,(Photon_Realtime_Player_o *)0x0,
                                                                  (MethodInfo *)0x0);
                                                    if (pTVar9 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                                      (*(pTVar9->klass->vtable)._66_set_text.methodPtr)
                                                                (pTVar9,pSVar10,
                                                                 (pTVar9->klass->vtable)._66_set_text.method);
                                                      __this_00 = (UnityEngine_Events_UnityEvent_o *)
                                                                  (__this_02->fields).m_OnClick;
                                                      __this_05 = il2cpp_codegen_object_new
                                                                            ((Il2CppClass *)
                                                                                                                                                          
                                                       TypeInfo_UnityEngine_Events_UnityAction);
                                                      UnityEngine_Font_FontTextureRebuildCallback___ctor
                                                                ((
                                                       UnityEngine_Font_FontTextureRebuildCallback_o *)
                                                       __this_05,(Il2CppObject *)object,
                                                       (intptr_t)
                                                       MethodInfo_UI_EditProfileProfilePanel_c__DisplayClass30_0_CreateGuildRoleSpriteButton_b__0
                                                       ,(MethodInfo *)0x0);
                                                      if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0)
                                                      {
                                                        UnityEngine_Events_UnityEvent__AddListener
                                                                  (__this_00,__this_05,(MethodInfo *)0x0);
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
                                  goto label_182286aa6;
                                }
                              }
                            }
                            goto label_182286b2c;
                          }
                        }
                      }
                    }
                  }
                }
                goto label_182286aa6;
              }
            }
          }
        }
      }
label_182286b2c:
      ThrowIndexOutOfRangeException();
    }
  }
label_182286aa6:
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel$$UpdateGuildRoleSpriteButtonText
// il2cpp: void UI_EditProfileProfilePanel__UpdateGuildRoleSpriteButtonText (UI_EditProfileProfilePanel_o* __this, const MethodInfo* method);
// 0x182288e10

void UI_EditProfileProfilePanel__UpdateGuildRoleSpriteButtonText
               (UI_EditProfileProfilePanel_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  Settings_ProfileSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  bool bVar4;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_18434740b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_18434740b = '\x01';
  }
  pTVar1 = (__this->fields)._guildRoleSpriteButtonLabel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if ((pSVar2 != (Settings_ProfileSettings_o *)0x0) &&
     (pSVar3 = (pSVar2->fields).GuildRoleSprite, pSVar3 != (Settings_StringSetting_o *)0x0)) {
    pSVar5 = (pSVar3->fields)._value;
    pTVar1 = (__this->fields)._guildRoleSpriteButtonLabel;
    if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
    }
    pSVar5 = PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                       (pSVar5,(Photon_Realtime_Player_o *)0x0,(MethodInfo *)0x0);
    if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
      (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
                (pTVar1,pSVar5,(pTVar1->klass->vtable)._66_set_text.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel$$GetGuildPreviewText
// il2cpp: System_String_o* UI_EditProfileProfilePanel__GetGuildPreviewText (UI_EditProfileProfilePanel_o* __this, Settings_ProfileSettings_o* settings, const MethodInfo* method);
// 0x182287060

System_String_o *
UI_EditProfileProfilePanel__GetGuildPreviewText
          (UI_EditProfileProfilePanel_o *__this,Settings_ProfileSettings_o *settings,MethodInfo *method)

{
  Settings_NameSetting_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *selectedRoleName;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_18434740c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_18434740c = '\x01';
  }
  if ((settings != (Settings_ProfileSettings_o *)0x0) &&
     (pSVar1 = (settings->fields).Guild, pSVar1 != (Settings_NameSetting_o *)0x0)) {
    pSVar3 = (pSVar1->fields)._value;
    if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
    }
    pSVar3 = Anticheat_ChatFilter__FilterBadWords(pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pSVar3 = MiscExtensions__HexColor(pSVar3,(MethodInfo *)0x0);
    pSVar2 = (settings->fields).GuildRoleSprite;
    if (pSVar2 != (Settings_StringSetting_o *)0x0) {
      selectedRoleName = (pSVar2->fields)._value;
      if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
      }
      pSVar3 = PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
                         ((Photon_Realtime_Player_o *)0x0,pSVar3,selectedRoleName,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  ThrowNullReferenceException();
}


// UI.EditProfileProfilePanel$$ApplyChatFont
// il2cpp: void UI_EditProfileProfilePanel__ApplyChatFont (UI_EditProfileProfilePanel_o* __this, TMPro_TextMeshProUGUI_o* tmp, const MethodInfo* method);
// 0x1822852e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182285402: mov rdi, qword ptr [rsp + 0x30]

void UI_EditProfileProfilePanel__ApplyChatFont
               (UI_EditProfileProfilePanel_o *__this,TMPro_TextMeshProUGUI_o *tmp,MethodInfo *method)

{
  bool bVar1;
  TMPro_TMP_FontAsset_o *value;
  TMPro_TMP_SpriteAsset_o *value_00;
  
  if (Il2CppMethodInitialized_18434740d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TMP_SpriteAsset);
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Profile/ProfileIconsAtlas_256");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Fonts/Vegur-Regular-SDF");
    Il2CppMethodInitialized_18434740d = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)tmp,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    value = UnityEngine_Resources__Load_object_
                      ("UI/Fonts/Vegur-Regular-SDF",
                       (MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_TMP_FontAsset);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (tmp == (TMPro_TextMeshProUGUI_o *)0x0) goto label_18228540d;
      TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)tmp,value,(MethodInfo *)0x0);
    }
    value_00 = UnityEngine_Resources__Load_object_
                         ("UI/Icons/Profile/ProfileIconsAtlas_256",
                          (MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_TMP_SpriteAsset);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)value_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (tmp == (TMPro_TextMeshProUGUI_o *)0x0) {
label_18228540d:
        ThrowNullReferenceException();
      }
      TMPro_TMP_Text__set_spriteAsset((TMPro_TMP_Text_o *)tmp,value_00,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.EditProfileProfilePanel$$GetDisplayUserId
// il2cpp: System_String_o* UI_EditProfileProfilePanel__GetDisplayUserId (UI_EditProfileProfilePanel_o* __this, Settings_ProfileSettings_o* settings, const MethodInfo* method);
// 0x182286f80

System_String_o *
UI_EditProfileProfilePanel__GetDisplayUserId
          (UI_EditProfileProfilePanel_o *__this,Settings_ProfileSettings_o *settings,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_18434740e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"N/A");
    Il2CppMethodInitialized_18434740e = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar3 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
  bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
  if (bVar2) {
    if ((settings != (Settings_ProfileSettings_o *)0x0) &&
       ((settings->fields).ID != (Settings_StringSetting_o *)0x0)) {
      bVar2 = System_String__IsNullOrEmpty((((settings->fields).ID)->fields)._value,(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar1 = (settings->fields).ID;
        if (pSVar1 != (Settings_StringSetting_o *)0x0) {
          return (pSVar1->fields)._value;
        }
        ThrowNullReferenceException();
      }
    }
    return "N/A";
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar3 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
  return pSVar3;
}


// UI.EditProfileProfilePanel$$GetDisplayDisplayName
// il2cpp: System_String_o* UI_EditProfileProfilePanel__GetDisplayDisplayName (UI_EditProfileProfilePanel_o* __this, Settings_ProfileSettings_o* settings, const MethodInfo* method);
// 0x182286ce0

System_String_o *
UI_EditProfileProfilePanel__GetDisplayDisplayName
          (UI_EditProfileProfilePanel_o *__this,Settings_ProfileSettings_o *settings,MethodInfo *method)

{
  Settings_NameSetting_o *pSVar1;
  bool bVar2;
  Photon_Realtime_Player_o *pPVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_18434740f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"N/A");
    il2cpp_codegen_initialize_runtime_metadata(&"display_name");
    Il2CppMethodInitialized_18434740f = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    pSVar4 = (System_String_o *)
             PhotonExtensions__GetCustomProperty(pPVar3,"display_name",(MethodInfo *)0x0);
    pSVar5 = (System_String_o *)0x0;
    if ((pSVar4 != (System_String_o *)0x0) && ((Il2CppClass *)pSVar4->klass == g_data_184354e50)) {
      pSVar5 = pSVar4;
    }
    bVar2 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
    if (!bVar2) {
      return pSVar5;
    }
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar3 == (Photon_Realtime_Player_o *)0x0) goto label_182286ec2;
    bVar2 = System_String__IsNullOrEmpty((pPVar3->fields).nickName,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
        return (pPVar3->fields).nickName;
      }
      goto label_182286ec2;
    }
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar5 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
  bVar2 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar5 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    return pSVar5;
  }
  if ((settings != (Settings_ProfileSettings_o *)0x0) &&
     ((settings->fields).Name != (Settings_NameSetting_o *)0x0)) {
    bVar2 = System_String__IsNullOrEmpty((((settings->fields).Name)->fields)._value,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar1 = (settings->fields).Name;
      if (pSVar1 != (Settings_NameSetting_o *)0x0) {
        return (pSVar1->fields)._value;
      }
label_182286ec2:
      ThrowNullReferenceException();
    }
  }
  return "N/A";
}


// UI.EditProfileProfilePanel$$GetDisplayPatreonTier
// il2cpp: System_String_o* UI_EditProfileProfilePanel__GetDisplayPatreonTier (UI_EditProfileProfilePanel_o* __this, const MethodInfo* method);
// 0x182286ed0

System_String_o *
UI_EditProfileProfilePanel__GetDisplayPatreonTier(UI_EditProfileProfilePanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *local_res18 [2];
  
  if (Il2CppMethodInitialized_184347410 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_184347410 = '\x01';
  }
  local_res18[0] = (System_String_o *)0x0;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (pPVar2 != (Photon_Realtime_Player_o *)0x0) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    bVar1 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel(pPVar2,local_res18,(MethodInfo *)0x0);
    if (bVar1) {
      return local_res18[0];
    }
  }
  bVar1 = PatreonEffects_PatreonHelper__TryGetLocalTierLabel(local_res18,(MethodInfo *)0x0);
  if (bVar1) {
    return local_res18[0];
  }
  return "None";
}


// UI.EditProfileProfilePanel$$.ctor
// il2cpp: void UI_EditProfileProfilePanel___ctor (UI_EditProfileProfilePanel_o* __this, const MethodInfo* method);
// 0x181da8ae0

void
UI_EditProfileProfilePanel___ctor(UI_EditProfileProfilePanel_o* __this, MethodInfo* method)

{
  UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel$$.cctor
// il2cpp: void UI_EditProfileProfilePanel___cctor (const MethodInfo* method);
// 0x182288f10

void UI_EditProfileProfilePanel___cctor(MethodInfo *method)

{
  Il2CppObject *object;
  Il2CppType *handle;
  System_Type_o *enumType;
  System_String_array *pSVar1;
  System_Func_string__bool__o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  
  if (Il2CppMethodInitialized_184347411 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_EditProfileProfilePanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_PatreonEffects_NameEffectType);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_EditProfileProfilePanel_c_cctor_b__38_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_EditProfileProfilePanel_c);
    Il2CppMethodInitialized_184347411 = '\x01';
  }
  handle = TypeRef_PatreonEffects_NameEffectType;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  pSVar1 = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
  if ((TypeInfo_UI_EditProfileProfilePanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_EditProfileProfilePanel_c);
  }
  object = (Il2CppObject *)TypeInfo_UI_EditProfileProfilePanel_c->static_fields->__9;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
  System_Func_object__bool____ctor
            ((System_Predicate_object__o *)__this,object,
             (intptr_t)MethodInfo_UI_EditProfileProfilePanel_c_cctor_b__38_0,(MethodInfo_B61EB0 *)0x0);
  source = System_Linq_Enumerable__Where_float_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                      (System_Func_TSource__bool__o *)__this,
                      (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_string);
  pSVar1 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     (source,(MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  TypeInfo_UI_EditProfileProfilePanel->static_fields->EffectOptions = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_EditProfileProfilePanel->static_fields->EffectOptions,pSVar1);
  return;
}


