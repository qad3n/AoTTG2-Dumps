// Type: UI.EditProfileProfilePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/EditProfileProfilePanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/EditProfileProfilePanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.EditProfileProfilePanel.<>c$$.cctor
// il2cpp: void UI_EditProfileProfilePanel___c___cctor (const MethodInfo* method);
// 0x40ebce0

void UI_EditProfileProfilePanel_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057047e3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057047e3 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.EditProfileProfilePanel.<>c$$.ctor
// il2cpp: void UI_EditProfileProfilePanel___c___ctor (UI_EditProfileProfilePanel___c_o* __this, const MethodInfo* method);
// 0x40ebd50

void UI_EditProfileProfilePanel_<>c___ctor
               (UI_EditProfileProfilePanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c$$<Setup>b__21_2
// il2cpp: System_String_o* UI_EditProfileProfilePanel___c___Setup_b__21_2 (UI_EditProfileProfilePanel___c_o* __this, System_String_o* s, const MethodInfo* method);
// 0x40ebd60

System_String_o *
UI_EditProfileProfilePanel_<>c__<Setup>b__21_2
          (UI_EditProfileProfilePanel___c_o *__this,System_String_o *s,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_057047e4 == '\0') {
    il2cpp_init_method_metadata(&"\n");
    il2cpp_init_method_metadata(&"");
    DAT_057047e4 = '\x01';
  }
  if (s != (System_String_o *)0x0) {
    pSVar1 = System_String__Replace(s,"\n","",(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel.<>c$$<.cctor>b__38_0
// il2cpp: bool UI_EditProfileProfilePanel___c____cctor_b__38_0 (UI_EditProfileProfilePanel___c_o* __this, System_String_o* n, const MethodInfo* method);
// 0x40ebdc0

bool_conflict
UI_EditProfileProfilePanel_<>c__<_cctor>b__38_0
          (UI_EditProfileProfilePanel___c_o *__this,System_String_o *n,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_057047e5 == '\0') {
    il2cpp_init_method_metadata(&"None");
    DAT_057047e5 = '\x01';
  }
  bVar1 = System_String__op_Inequality(n,"None",(MethodInfo *)0x0);
  return bVar1;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass21_0___ctor (UI_EditProfileProfilePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x40e94d0

void UI_EditProfileProfilePanel_<>c__DisplayClass21_0___ctor
               (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass21_0$$<Setup>b__0
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__0 (UI_EditProfileProfilePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x40ebe00

void UI_EditProfileProfilePanel_<>c__DisplayClass21_0__<Setup>b__0
               (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__CreateProfileImage(__this_00,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass21_0$$<Setup>b__1
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__1 (UI_EditProfileProfilePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x40ebe20

void UI_EditProfileProfilePanel_<>c__DisplayClass21_0__<Setup>b__1
               (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(__this_00,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass21_0$$<Setup>b__3
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__3 (UI_EditProfileProfilePanel___c__DisplayClass21_0_o* __this, bool val, const MethodInfo* method);
// 0x40ebe40

void UI_EditProfileProfilePanel_<>c__DisplayClass21_0__<Setup>b__3
               (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *__this,bool_conflict val,
               MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_BoolSetting_o *__this_00;
  UI_EditProfileProfilePanel_o *__this_01;
  MethodInfo *method_00;
  
  if (DAT_057047e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_057047e6 = '\x01';
  }
  pSVar1 = (__this->fields).settings;
  if ((pSVar1 != (Settings_ProfileSettings_o *)0x0) &&
     (__this_00 = (pSVar1->fields).NameEffectEnabled, __this_00 != (Settings_BoolSetting_o *)0x0)) {
    method_00 = (MethodInfo *)((ulong)(uint)val & 0xff);
    Settings_TypedSetting<bool>__set_Value
              ((Settings_TypedSetting_bool__o *)__this_00,(bool_conflict)method_00,MethodInfo_Void_set_Value);
    __this_01 = (__this->fields).__4__this;
    if (__this_01 != (UI_EditProfileProfilePanel_o *)0x0) {
      UI_EditProfileProfilePanel__RefreshPreviews(__this_01,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass21_0$$<Setup>b__4
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__4 (UI_EditProfileProfilePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x40ebeb0

void UI_EditProfileProfilePanel_<>c__DisplayClass21_0__<Setup>b__4
               (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(__this_00,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass21_0$$<Setup>b__5
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass21_0___Setup_b__5 (UI_EditProfileProfilePanel___c__DisplayClass21_0_o* __this, bool val, const MethodInfo* method);
// 0x40ebed0

void UI_EditProfileProfilePanel_<>c__DisplayClass21_0__<Setup>b__5
               (UI_EditProfileProfilePanel___c__DisplayClass21_0_o *__this,bool_conflict val,
               MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_BoolSetting_o *__this_00;
  UI_EditProfileProfilePanel_o *__this_01;
  MethodInfo *method_00;
  
  if (DAT_057047e7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_057047e7 = '\x01';
  }
  pSVar1 = (__this->fields).settings;
  if ((pSVar1 != (Settings_ProfileSettings_o *)0x0) &&
     (__this_00 = (pSVar1->fields).GuildEffectEnabled, __this_00 != (Settings_BoolSetting_o *)0x0))
  {
    method_00 = (MethodInfo *)((ulong)(uint)val & 0xff);
    Settings_TypedSetting<bool>__set_Value
              ((Settings_TypedSetting_bool__o *)__this_00,(bool_conflict)method_00,MethodInfo_Void_set_Value);
    __this_01 = (__this->fields).__4__this;
    if (__this_01 != (UI_EditProfileProfilePanel_o *)0x0) {
      UI_EditProfileProfilePanel__RefreshPreviews(__this_01,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$.ctor
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___ctor (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x40eb3c0

void UI_EditProfileProfilePanel_<>c__DisplayClass22_0___ctor
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__0
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__0 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x40ebf40

void UI_EditProfileProfilePanel_<>c__DisplayClass22_0__<CreateEffectChildren>b__0
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  MethodInfo *in_stack_fffffffffffffff0;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__OnEffectSelected
              (__this_00,(__this->fields).effectSetting,(__this->fields).colorA,
               (__this->fields).colorB,(__this->fields).colorC,(__this->fields).colorD,
               (uint)(byte)(__this->fields).isName,in_stack_fffffffffffffff0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__1
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__1 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x40ebf80

void UI_EditProfileProfilePanel_<>c__DisplayClass22_0__<CreateEffectChildren>b__1
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(__this_00,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__2
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__2 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x40ebfa0

void UI_EditProfileProfilePanel_<>c__DisplayClass22_0__<CreateEffectChildren>b__2
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(__this_00,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__3
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__3 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x40ebfc0

void UI_EditProfileProfilePanel_<>c__DisplayClass22_0__<CreateEffectChildren>b__3
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(__this_00,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__4
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__4 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x40ebfe0

void UI_EditProfileProfilePanel_<>c__DisplayClass22_0__<CreateEffectChildren>b__4
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(__this_00,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__5
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__5 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x40ec000

void UI_EditProfileProfilePanel_<>c__DisplayClass22_0__<CreateEffectChildren>b__5
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(__this_00,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__6
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__6 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x40ec020

void UI_EditProfileProfilePanel_<>c__DisplayClass22_0__<CreateEffectChildren>b__6
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(__this_00,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__7
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__7 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x40ec040

void UI_EditProfileProfilePanel_<>c__DisplayClass22_0__<CreateEffectChildren>b__7
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(__this_00,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__8
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__8 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x40ec060

void UI_EditProfileProfilePanel_<>c__DisplayClass22_0__<CreateEffectChildren>b__8
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__RefreshPreviews(__this_00,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass22_0$$<CreateEffectChildren>b__9
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass22_0___CreateEffectChildren_b__9 (UI_EditProfileProfilePanel___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x40ec080

void UI_EditProfileProfilePanel_<>c__DisplayClass22_0__<CreateEffectChildren>b__9
               (UI_EditProfileProfilePanel___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  UI_EditProfileProfilePanel_o *__this_00;
  MethodInfo *in_stack_fffffffffffffff0;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_EditProfileProfilePanel_o *)0x0) {
    UI_EditProfileProfilePanel__ResetEffectColors
              (__this_00,(__this->fields).capturedEffect,(__this->fields).capA,(__this->fields).capB
               ,(__this->fields).capC,(__this->fields).capD,
               (uint)(byte)(__this->fields).captureIsName,in_stack_fffffffffffffff0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel.<>c__DisplayClass30_0$$.ctor
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass30_0___ctor (UI_EditProfileProfilePanel___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x40ebb60

void UI_EditProfileProfilePanel_<>c__DisplayClass30_0___ctor
               (UI_EditProfileProfilePanel___c__DisplayClass30_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel.<>c__DisplayClass30_0$$<CreateGuildRoleSpriteButton>b__0
// il2cpp: void UI_EditProfileProfilePanel___c__DisplayClass30_0___CreateGuildRoleSpriteButton_b__0 (UI_EditProfileProfilePanel___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x40ec0c0

void UI_EditProfileProfilePanel_<>c__DisplayClass30_0__<CreateGuildRoleSpriteButton>b__0
               (UI_EditProfileProfilePanel___c__DisplayClass30_0_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Settings_ProfileSettings_o *pSVar3;
  UI_EditProfileProfilePanel_o *pUVar4;
  UI_RoleSpritePickPopup_o *__this_00;
  Settings_StringSetting_o *setting;
  TMPro_TextMeshProUGUI_o *label;
  UnityEngine_Events_UnityAction_o *onSelect;
  
  if (DAT_057047e8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RefreshPreviews);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    DAT_057047e8 = '\x01';
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (((lVar2 != 0) &&
      (pSVar3 = (__this->fields).settings, pSVar3 != (Settings_ProfileSettings_o *)0x0)) &&
     (pUVar4 = (__this->fields).__4__this, pUVar4 != (UI_EditProfileProfilePanel_o *)0x0)) {
    __this_00 = *(UI_RoleSpritePickPopup_o **)(lVar2 + 0x58);
    setting = (pSVar3->fields).GuildRoleSprite;
    label = (pUVar4->fields)._guildRoleSpriteButtonLabel;
    onSelect = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UI_RoleSpritePickPopup_o *)0x0) {
      UI_RoleSpritePickPopup__Show(__this_00,setting,label,onSelect,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel$$get_ScrollBar
// il2cpp: bool UI_EditProfileProfilePanel__get_ScrollBar (UI_EditProfileProfilePanel_o* __this, const MethodInfo* method);
// 0x40e84a0

bool_conflict
UI_EditProfileProfilePanel__get_ScrollBar(UI_EditProfileProfilePanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.EditProfileProfilePanel$$Setup
// il2cpp: void UI_EditProfileProfilePanel__Setup (UI_EditProfileProfilePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40e84b0

void UI_EditProfileProfilePanel__Setup
               (UI_EditProfileProfilePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o **ppUVar1;
  UnityEngine_GameObject_o **ppUVar2;
  byte bVar3;
  UnityEngine_Component_o *pUVar4;
  Settings_BaseSetting_o *pSVar5;
  long lVar6;
  UI_IconPickPopup_o *popup;
  void *pvVar7;
  bool_conflict bVar8;
  Il2CppObject *__this_00;
  UnityEngine_Object_o *pUVar9;
  UnityEngine_Object_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  System_String_o *pSVar12;
  MethodInfo *__this_01;
  UnityEngine_Transform_o *pUVar13;
  System_String_array *options;
  System_String_array *icons;
  UnityEngine_Events_UnityAction_o *pUVar14;
  TMPro_TextMeshProUGUI_o *pTVar15;
  PatreonEffects_NameEffectController_o *pPVar16;
  System_Func_string__string__o *onCleanup;
  System_Action_bool__o *pSVar17;
  UI_CollapsibleToggleSection_o *pUVar18;
  System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *source;
  System_String_o *pSVar19;
  System_String_o *a;
  System_String_o *pSVar20;
  Settings_ProfileSettings_o *pSVar21;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  void **ppvVar22;
  UI_EditProfileProfilePanel_o *pUVar23;
  TMPro_TextMeshProUGUI_o *pTVar24;
  MethodInfo *pMVar25;
  MethodInfo *method_06;
  
  if (DAT_057047d2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_bool);
    il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
    il2cpp_init_method_metadata(&MethodInfo_ScrollRect_GetComponentInParent_ScrollRect);
    il2cpp_init_method_metadata(&MethodInfo_RectMask2D_GetComponent_RectMask2D);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Any_RoleSpriteDefinition);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__string);
    il2cpp_init_method_metadata(&MethodInfo_NameEffectController_AddComponent_NameEffectCont);
    il2cpp_init_method_metadata(&MethodInfo_RectMask2D_AddComponent_RectMask2D);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String__Setup_b__21_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__3);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__4);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__5);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass21_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Guild");
    il2cpp_init_method_metadata(&"<b>Display Name: </b>");
    il2cpp_init_method_metadata(&"Name Effect  (Patreon)");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Guild Role Sprite");
    il2cpp_init_method_metadata(&"Preview:");
    il2cpp_init_method_metadata(&"<b>Patreon Tier: </b>");
    il2cpp_init_method_metadata(&"Thank you, ");
    il2cpp_init_method_metadata(&"Social");
    il2cpp_init_method_metadata(&" for being a supporter.");
    il2cpp_init_method_metadata(&"Icon");
    il2cpp_init_method_metadata(&"Guild Effect  (Patreon)");
    il2cpp_init_method_metadata(&"<b>User ID: </b>");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"About");
    il2cpp_init_method_metadata(&"<b>Patreon Supporter: </b>");
    il2cpp_init_method_metadata(&"No");
    DAT_057047d2 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass21_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 1,__this);
    UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
    pUVar13 = (__this->fields).SinglePanel;
    if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
      pUVar9 = (UnityEngine_Object_o *)
               UnityEngine_Component__GetComponentInParent<object>
                         ((UnityEngine_Component_o *)pUVar13,MethodInfo_ScrollRect_GetComponentInParent_ScrollRect);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if (pUVar9 == (UnityEngine_Object_o *)0x0) goto LAB_040e94c8;
        pUVar10 = (UnityEngine_Object_o *)pUVar9[2].fields.m_CachedPtr;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar8 = UnityEngine_Object__op_Inequality
                          (pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          pUVar4 = (UnityEngine_Component_o *)pUVar9[2].fields.m_CachedPtr;
          if (pUVar4 == (UnityEngine_Component_o *)0x0) goto LAB_040e94c8;
          pUVar10 = (UnityEngine_Object_o *)
                    UnityEngine_Component__GetComponent<object>(pUVar4,MethodInfo_RectMask2D_GetComponent_RectMask2D);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar8 = UnityEngine_Object__op_Equality
                            (pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            pUVar4 = (UnityEngine_Component_o *)pUVar9[2].fields.m_CachedPtr;
            if (pUVar4 == (UnityEngine_Component_o *)0x0) goto LAB_040e94c8;
            pUVar11 = UnityEngine_Component__get_gameObject(pUVar4,(MethodInfo *)0x0);
            if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e94c8;
            UnityEngine_GameObject__AddComponent<object>(pUVar11,MethodInfo_RectMask2D_AddComponent_RectMask2D);
          }
        }
      }
      ppvVar22 = &__this_00[1].monitor;
      __this_00[1].monitor = *(void **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
      il2cpp_runtime_glue(ppvVar22);
      pSVar12 = (System_String_o *)
                (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      __this_01 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor
                ((UI_ElementStyle_o *)__this_01,0x18,100.0,20.0,pSVar12,(MethodInfo *)0x0);
      pUVar11 = UI_ElementFactory__CreateHorizontalGroup
                          ((__this->fields).SinglePanel,60.0,3,(MethodInfo *)0x0);
      if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
        pUVar13 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
        ppUVar1 = &(__this->fields)._group;
        (__this->fields)._group = pUVar13;
        il2cpp_runtime_glue(ppUVar1,pUVar13);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pUVar23 = *(UI_EditProfileProfilePanel_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
        if (pUVar23 != (UI_EditProfileProfilePanel_o *)0x0) {
          options = (System_String_array *)
                    System_Collections_Generic_List<object>__ToArray
                              ((System_Collections_Generic_List_object__o *)pUVar23,MethodInfo_String___ToArray);
          icons = UI_EditProfileProfilePanel__GetProfileIconPaths(pUVar23,options,method_00);
          if (*ppvVar22 != (void *)0x0) {
            pUVar13 = *ppUVar1;
            pSVar5 = *(Settings_BaseSetting_o **)((long)*ppvVar22 + 0x20);
            pSVar12 = UI_UIManager__GetLocaleCommon("Icon",(MethodInfo *)0x0);
            lVar6 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (lVar6 != 0) {
              popup = *(UI_IconPickPopup_o **)(lVar6 + 0x50);
              pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              method_06 = (MethodInfo *)0x0;
              pMVar25 = __this_01;
              UI_ElementFactory__CreateIconPickSetting
                        (pUVar13,(UI_ElementStyle_o *)__this_01,pSVar5,pSVar12,options,icons,popup,
                         "",(System_String_array *)0x0,180.0,40.0,pUVar14,
                         (UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
              UI_EditProfileProfilePanel__CreateProfileImage(__this,pMVar25);
              UI_BasePanel__CreateHorizontalDivider
                        ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0
                        );
              pUVar23 = (UI_EditProfileProfilePanel_o *)(__this->fields).SinglePanel;
              UI_ElementFactory__CreateDefaultLabel
                        ((UnityEngine_Transform_o *)pUVar23,(UI_ElementStyle_o *)__this_01,
                         "Preview:",1,3,(MethodInfo *)0x0);
              pUVar13 = (__this->fields).SinglePanel;
              pSVar12 = UI_EditProfileProfilePanel__GetGuildPreviewText
                                  (pUVar23,__this_00[1].monitor,method_01);
              pUVar11 = UI_ElementFactory__CreateTMPLabel
                                  (pUVar13,(UI_ElementStyle_o *)__this_01,pSVar12,0,3,
                                   (MethodInfo *)0x0);
              ppUVar2 = &(__this->fields)._guildPreviewTMP;
              (__this->fields)._guildPreviewTMP = pUVar11;
              il2cpp_runtime_glue(ppUVar2);
              pUVar9 = (UnityEngine_Object_o *)(__this->fields)._guildPreviewTMP;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar8 = UnityEngine_Object__op_Inequality
                                (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                if (*ppUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e94c8;
                pTVar15 = (TMPro_TextMeshProUGUI_o *)
                          UnityEngine_GameObject__GetComponent<object>(*ppUVar2,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar8 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pTVar15,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if ((char)bVar8 != '\0') {
                  if (pTVar15 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040e94c8;
                  pTVar24 = pTVar15;
                  TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)pTVar15,1,(MethodInfo *)0x0);
                  UI_EditProfileProfilePanel__ApplyChatFont
                            ((UI_EditProfileProfilePanel_o *)pTVar24,pTVar15,method_02);
                }
                if (*ppUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e94c8;
                pPVar16 = (PatreonEffects_NameEffectController_o *)
                          UnityEngine_GameObject__AddComponent<object>(*ppUVar2,MethodInfo_NameEffectController_AddComponent_NameEffectCont);
                (__this->fields)._guildPreviewEffect = pPVar16;
                il2cpp_runtime_glue(&(__this->fields)._guildPreviewEffect);
                pPVar16 = (__this->fields)._guildPreviewEffect;
                if (pPVar16 == (PatreonEffects_NameEffectController_o *)0x0) goto LAB_040e94c8;
                PatreonEffects_NameEffectController__AutoConfigure(pPVar16,(MethodInfo *)0x0);
              }
              if ((*ppvVar22 != (void *)0x0) &&
                 (lVar6 = *(long *)((long)*ppvVar22 + 0x30), lVar6 != 0)) {
                pUVar13 = (__this->fields).SinglePanel;
                pSVar12 = *(System_String_o **)(lVar6 + 0x18);
                if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar12 = MiscExtensions__HexColor(pSVar12,(MethodInfo *)0x0);
                pUVar11 = UI_ElementFactory__CreateTMPLabel
                                    (pUVar13,(UI_ElementStyle_o *)__this_01,pSVar12,0,3,
                                     (MethodInfo *)0x0);
                ppUVar2 = &(__this->fields)._namePreviewTMP;
                (__this->fields)._namePreviewTMP = pUVar11;
                il2cpp_runtime_glue(ppUVar2);
                pUVar9 = (UnityEngine_Object_o *)(__this->fields)._namePreviewTMP;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pMVar25 = (MethodInfo *)0x0;
                bVar8 = UnityEngine_Object__op_Inequality
                                  (pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar8 != '\0') {
                  if (*ppUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e94c8;
                  pTVar15 = (TMPro_TextMeshProUGUI_o *)
                            UnityEngine_GameObject__GetComponent<object>(*ppUVar2,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  bVar8 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pTVar15,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if ((char)bVar8 != '\0') {
                    if (pTVar15 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040e94c8;
                    pTVar24 = pTVar15;
                    TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)pTVar15,1,(MethodInfo *)0x0);
                    UI_EditProfileProfilePanel__ApplyChatFont
                              ((UI_EditProfileProfilePanel_o *)pTVar24,pTVar15,method_03);
                  }
                  if (*ppUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_040e94c8;
                  pPVar16 = (PatreonEffects_NameEffectController_o *)
                            UnityEngine_GameObject__AddComponent<object>(*ppUVar2,MethodInfo_NameEffectController_AddComponent_NameEffectCont);
                  (__this->fields)._namePreviewEffect = pPVar16;
                  il2cpp_runtime_glue(&(__this->fields)._namePreviewEffect);
                  pPVar16 = (__this->fields)._namePreviewEffect;
                  if (pPVar16 == (PatreonEffects_NameEffectController_o *)0x0) goto LAB_040e94c8;
                  pMVar25 = (MethodInfo *)0x0;
                  PatreonEffects_NameEffectController__AutoConfigure(pPVar16,(MethodInfo *)0x0);
                }
                UI_EditProfileProfilePanel__RefreshPreviews(__this,pMVar25);
                UI_BasePanel__CreateHorizontalDivider
                          ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,
                           (MethodInfo *)0x0);
                if (*ppvVar22 != (void *)0x0) {
                  pUVar13 = (__this->fields).SinglePanel;
                  pSVar5 = *(Settings_BaseSetting_o **)((long)*ppvVar22 + 0x30);
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pSVar12 = UI_UIManager__GetLocaleCommon("Name",(MethodInfo *)0x0);
                  pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pSVar19 = "";
                  onCleanup = *(System_Func_string__string__o **)
                               (*(long *)(TypeInfo_c + 0xb8) + 8);
                  if (onCleanup == (System_Func_string__string__o *)0x0) {
                    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    onCleanup = (System_Func_string__string__o *)il2cpp_runtime_glue(TypeInfo_Func_string__string);
                    System_Func<object__object>___ctor();
                    lVar6 = *(long *)(TypeInfo_c + 0xb8);
                    *(System_Func_string__string__o **)(lVar6 + 8) = onCleanup;
                    il2cpp_runtime_glue(lVar6 + 8,onCleanup);
                  }
                  UI_ElementFactory__CreateInputSetting
                            (pUVar13,(UI_ElementStyle_o *)__this_01,pSVar5,pSVar12,pSVar19,260.0,
                             40.0,0,pUVar14,(UnityEngine_Events_UnityAction_o *)0x0,
                             (System_Func_string__bool__o *)0x0,onCleanup,(MethodInfo *)0x0);
                  bVar8 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess
                                    ((MethodInfo *)0x0);
                  if ((char)bVar8 != '\0') {
                    UI_BasePanel__CreateHorizontalDivider
                              ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,
                               (MethodInfo *)0x0);
                    if ((*ppvVar22 == (void *)0x0) ||
                       (lVar6 = *(long *)((long)*ppvVar22 + 0x80), lVar6 == 0)) goto LAB_040e94c8;
                    pUVar13 = (__this->fields).SinglePanel;
                    bVar3 = *(byte *)(lVar6 + 0x11);
                    pSVar21 = (Settings_ProfileSettings_o *)(ulong)bVar3;
                    pSVar17 = (System_Action_bool__o *)il2cpp_runtime_glue(TypeInfo_Action_bool);
                    System_Action<bool>___ctor();
                    pUVar18 = UI_ElementFactory__CreateCollapsibleToggleSection
                                        (pUVar13,(UI_ElementStyle_o *)__this_01,"Name Effect  (Patreon)",
                                         (uint)bVar3,0,pSVar17,(MethodInfo *)0x0);
                    (__this->fields)._nameEffectSection = pUVar18;
                    il2cpp_runtime_glue(&(__this->fields)._nameEffectSection,pUVar18);
                    pvVar7 = __this_00[1].monitor;
                    if (pvVar7 == (void *)0x0) goto LAB_040e94c8;
                    UI_EditProfileProfilePanel__CreateEffectChildren
                              (__this,(__this->fields).SinglePanel,(UI_ElementStyle_o *)__this_01,
                               pSVar21,1,*(Settings_StringSetting_o **)((long)pvVar7 + 0x88),
                               *(Settings_ColorSetting_o **)((long)pvVar7 + 0x90),
                               *(Settings_ColorSetting_o **)((long)pvVar7 + 0x98),
                               *(Settings_ColorSetting_o **)((long)pvVar7 + 0xa0),
                               *(Settings_ColorSetting_o **)((long)pvVar7 + 0xa8),
                               (__this->fields)._nameEffectSection,method_06);
                  }
                  UI_BasePanel__CreateHorizontalDivider
                            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,
                             (MethodInfo *)0x0);
                  if (*ppvVar22 != (void *)0x0) {
                    pUVar13 = (__this->fields).SinglePanel;
                    pSVar5 = *(Settings_BaseSetting_o **)((long)*ppvVar22 + 0x38);
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    pSVar12 = UI_UIManager__GetLocaleCommon("Guild",(MethodInfo *)0x0);
                    pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                    UnityEngine_Events_UnityAction___ctor();
                    UI_ElementFactory__CreateInputSetting
                              (pUVar13,(UI_ElementStyle_o *)__this_01,pSVar5,pSVar12,"",
                               260.0,40.0,0,pUVar14,(UnityEngine_Events_UnityAction_o *)0x0,
                               (System_Func_string__bool__o *)0x0,
                               (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    source = PatreonEffects_RoleSpriteHelpers__GetEligibleRoleSprites
                                       ((Photon_Realtime_Player_o *)0x0,(MethodInfo *)0x0);
                    bVar8 = System_Linq_Enumerable__Any<RoleSpriteDefinition>
                                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                       MethodInfo_Boolean_Any_RoleSpriteDefinition);
                    if ((char)bVar8 != '\0') {
                      pMVar25 = (MethodInfo *)0x3;
                      UI_ElementFactory__CreateDefaultLabel
                                ((__this->fields).SinglePanel,(UI_ElementStyle_o *)__this_01,
                                 "Guild Role Sprite",0,3,(MethodInfo *)0x0);
                      UI_EditProfileProfilePanel__CreateGuildRoleSpriteButton
                                (__this,(__this->fields).SinglePanel,(UI_ElementStyle_o *)__this_01,
                                 *ppvVar22,pMVar25);
                    }
                    bVar8 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess
                                      ((MethodInfo *)0x0);
                    if ((char)bVar8 != '\0') {
                      UI_BasePanel__CreateHorizontalDivider
                                ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,
                                 (MethodInfo *)0x0);
                      if ((*ppvVar22 == (void *)0x0) ||
                         (lVar6 = *(long *)((long)*ppvVar22 + 0xb0), lVar6 == 0)) goto LAB_040e94c8;
                      pUVar13 = (__this->fields).SinglePanel;
                      bVar3 = *(byte *)(lVar6 + 0x11);
                      pSVar21 = (Settings_ProfileSettings_o *)(ulong)bVar3;
                      pSVar17 = (System_Action_bool__o *)il2cpp_runtime_glue(TypeInfo_Action_bool);
                      System_Action<bool>___ctor();
                      pUVar18 = UI_ElementFactory__CreateCollapsibleToggleSection
                                          (pUVar13,(UI_ElementStyle_o *)__this_01,"Guild Effect  (Patreon)",
                                           (uint)bVar3,0,pSVar17,(MethodInfo *)0x0);
                      (__this->fields)._guildEffectSection = pUVar18;
                      il2cpp_runtime_glue(&(__this->fields)._guildEffectSection,pUVar18);
                      pvVar7 = __this_00[1].monitor;
                      if (pvVar7 == (void *)0x0) goto LAB_040e94c8;
                      UI_EditProfileProfilePanel__CreateEffectChildren
                                (__this,(__this->fields).SinglePanel,(UI_ElementStyle_o *)__this_01,
                                 pSVar21,0,*(Settings_StringSetting_o **)((long)pvVar7 + 0xb8),
                                 *(Settings_ColorSetting_o **)((long)pvVar7 + 0xc0),
                                 *(Settings_ColorSetting_o **)((long)pvVar7 + 200),
                                 *(Settings_ColorSetting_o **)((long)pvVar7 + 0xd0),
                                 *(Settings_ColorSetting_o **)((long)pvVar7 + 0xd8),
                                 (__this->fields)._guildEffectSection,method_06);
                    }
                    UI_BasePanel__CreateHorizontalDivider
                              ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,
                               (MethodInfo *)0x0);
                    if (*ppvVar22 != (void *)0x0) {
                      pUVar13 = (__this->fields).SinglePanel;
                      pSVar5 = *(Settings_BaseSetting_o **)((long)*ppvVar22 + 0x48);
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      pSVar12 = UI_UIManager__GetLocaleCommon("Social",(MethodInfo *)0x0);
                      UI_ElementFactory__CreateInputSetting
                                (pUVar13,(UI_ElementStyle_o *)__this_01,pSVar5,pSVar12,"",
                                 260.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                 (System_Func_string__bool__o *)0x0,
                                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                      if (*ppvVar22 != (void *)0x0) {
                        pUVar13 = (__this->fields).SinglePanel;
                        pSVar5 = *(Settings_BaseSetting_o **)((long)*ppvVar22 + 0x58);
                        pSVar12 = UI_UIManager__GetLocaleCommon("About",(MethodInfo *)0x0);
                        UI_ElementFactory__CreateInputSetting
                                  (pUVar13,(UI_ElementStyle_o *)__this_01,pSVar5,pSVar12,
                                   "",260.0,120.0,1,
                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                   (System_Func_string__bool__o *)0x0,
                                   (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                        pUVar23 = __this;
                        UI_BasePanel__CreateHorizontalDivider
                                  ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,
                                   (MethodInfo *)0x0);
                        pSVar12 = UI_EditProfileProfilePanel__GetDisplayDisplayName
                                            (pUVar23,*ppvVar22,method_04);
                        pSVar21 = *ppvVar22;
                        pSVar19 = UI_EditProfileProfilePanel__GetDisplayUserId
                                            (pUVar23,pSVar21,method_05);
                        a = UI_EditProfileProfilePanel__GetDisplayPatreonTier
                                      (pUVar23,(MethodInfo *)pSVar21);
                        bVar8 = System_String__op_Inequality(a,"None",(MethodInfo *)0x0);
                        if (*ppvVar22 != (void *)0x0) {
                          lVar6 = *(long *)((long)*ppvVar22 + 0x30);
                          if (lVar6 != 0) {
                            pSVar20 = *(System_String_o **)(lVar6 + 0x18);
                            if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
                              il2cpp_init_class();
                            }
                            pSVar20 = Anticheat_ChatFilter__FilterBadWords
                                                (pSVar20,(MethodInfo *)0x0);
                            if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                              il2cpp_init_class();
                            }
                            pSVar20 = MiscExtensions__HexColor(pSVar20,(MethodInfo *)0x0);
                            if ((char)bVar8 == '\0') {
                              if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                                il2cpp_init_class();
                              }
                              pSVar20 = MiscExtensions__HexColor("No",(MethodInfo *)0x0);
                            }
                            else {
                              pSVar20 = System_String__Concat
                                                  ("Thank you, ",pSVar20," for being a supporter.",
                                                   (MethodInfo *)0x0);
                            }
                            pUVar13 = (__this->fields).SinglePanel;
                            if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
                              il2cpp_init_class();
                            }
                            pSVar12 = Anticheat_ChatFilter__FilterBadWords
                                                (pSVar12,(MethodInfo *)0x0);
                            if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                              il2cpp_init_class();
                            }
                            pSVar12 = MiscExtensions__HexColor(pSVar12,(MethodInfo *)0x0);
                            pSVar12 = System_String__Concat("<b>Display Name: </b>",pSVar12,(MethodInfo *)0x0);
                            UI_ElementFactory__CreateDefaultLabel
                                      (pUVar13,(UI_ElementStyle_o *)__this_01,pSVar12,0,3,
                                       (MethodInfo *)0x0);
                            pUVar13 = (__this->fields).SinglePanel;
                            pSVar12 = MiscExtensions__HexColor(pSVar19,(MethodInfo *)0x0);
                            pSVar12 = System_String__Concat("<b>User ID: </b>",pSVar12,(MethodInfo *)0x0);
                            UI_ElementFactory__CreateDefaultLabel
                                      (pUVar13,(UI_ElementStyle_o *)__this_01,pSVar12,0,3,
                                       (MethodInfo *)0x0);
                            pUVar13 = (__this->fields).SinglePanel;
                            pSVar12 = MiscExtensions__HexColor(a,(MethodInfo *)0x0);
                            pSVar12 = System_String__Concat("<b>Patreon Tier: </b>",pSVar12,(MethodInfo *)0x0);
                            UI_ElementFactory__CreateDefaultLabel
                                      (pUVar13,(UI_ElementStyle_o *)__this_01,pSVar12,0,3,
                                       (MethodInfo *)0x0);
                            pUVar13 = (__this->fields).SinglePanel;
                            pSVar12 = System_String__Concat("<b>Patreon Supporter: </b>",pSVar20,(MethodInfo *)0x0);
                            UI_ElementFactory__CreateDefaultLabel
                                      (pUVar13,(UI_ElementStyle_o *)__this_01,pSVar12,0,3,
                                       (MethodInfo *)0x0);
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
LAB_040e94c8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel$$CreateEffectChildren
// il2cpp: void UI_EditProfileProfilePanel__CreateEffectChildren (UI_EditProfileProfilePanel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_ProfileSettings_o* settings, bool isName, Settings_StringSetting_o* effectSetting, Settings_ColorSetting_o* colorA, Settings_ColorSetting_o* colorB, Settings_ColorSetting_o* colorC, Settings_ColorSetting_o* colorD, UI_CollapsibleToggleSection_o* section, const MethodInfo* method);
// 0x40e9c30

void UI_EditProfileProfilePanel__CreateEffectChildren
               (UI_EditProfileProfilePanel_o *__this,UnityEngine_Transform_o *parent,
               UI_ElementStyle_o *style,Settings_ProfileSettings_o *settings,bool_conflict isName,
               Settings_StringSetting_o *effectSetting,Settings_ColorSetting_o *colorA,
               Settings_ColorSetting_o *colorB,Settings_ColorSetting_o *colorC,
               Settings_ColorSetting_o *colorD,UI_CollapsibleToggleSection_o *section,
               MethodInfo *method)

{
  char cVar1;
  int32_t fontSize;
  Settings_BaseSetting_o *pSVar2;
  System_String_array *options;
  Il2CppClass *pIVar3;
  long lVar4;
  UI_ColorPickPopup_o *pUVar5;
  Il2CppObject *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  UI_DropdownSettingElement_o *__this_01;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  UI_ColorSettingElement_o *pUVar10;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_02;
  UI_ColorSettingElement_o **ppUVar11;
  System_Nullable_float__Fields local_40;
  Il2CppObject *local_38;
  
  if (DAT_057047d3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EditProfileProfilePanel);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_ColorSettingElement_GetComponent_ColorSettingEle);
    il2cpp_init_method_metadata(&MethodInfo_DropdownSettingElement_GetComponent_DropdownSett);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Single);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateEffectChildren_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateEffectChildren_b__1);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateEffectChildren_b__2);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateEffectChildren_b__3);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateEffectChildren_b__4);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateEffectChildren_b__5);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateEffectChildren_b__6);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateEffectChildren_b__7);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateEffectChildren_b__8);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateEffectChildren_b__9);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass22_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Gradient Colors");
    il2cpp_init_method_metadata(&"Reset Colors");
    il2cpp_init_method_metadata(&"D");
    il2cpp_init_method_metadata(&"B");
    il2cpp_init_method_metadata(&"C");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Effect");
    il2cpp_init_method_metadata(&"A");
    DAT_057047d3 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass22_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 1);
    __this_00[1].monitor = effectSetting;
    il2cpp_runtime_glue(&__this_00[1].monitor,effectSetting);
    local_38 = __this_00 + 2;
    __this_00[2].klass = (Il2CppClass *)colorA;
    il2cpp_runtime_glue(local_38,colorA);
    __this_00[2].monitor = colorB;
    il2cpp_runtime_glue(&__this_00[2].monitor,colorB);
    __this_00[3].klass = (Il2CppClass *)colorC;
    il2cpp_runtime_glue(__this_00 + 3,colorC);
    __this_00[3].monitor = colorD;
    il2cpp_runtime_glue(&__this_00[3].monitor,colorD);
    *(char *)&__this_00[4].klass = (char)isName;
    pSVar2 = __this_00[1].monitor;
    if (*(int *)(TypeInfo_EditProfileProfilePanel + 0xe4) == 0) {
      il2cpp_init_class();
    }
    options = (System_String_array *)**(undefined8 **)(TypeInfo_EditProfileProfilePanel + 0xb8);
    local_40.hasValue = 0;
    local_40.value = 0.0;
    System_Nullable<float>___ctor((System_Nullable_float__o)&local_40,260.0,MethodInfo_Nullable_1_Single);
    pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    pUVar7 = UI_ElementFactory__CreateDropdownSetting
                       (parent,style,pSVar2,"Effect",options,"",180.0,40.0,200.0,
                        (System_Nullable_float__o)local_40,pUVar6,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = (UI_DropdownSettingElement_o *)
                  UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_DropdownSettingElement_GetComponent_DropdownSett);
      if (__this_01 != (UI_DropdownSettingElement_o *)0x0) {
        UI_DropdownSettingElement__FixScale(__this_01,(MethodInfo *)0x0);
      }
      if (section != (UI_CollapsibleToggleSection_o *)0x0) {
        UI_CollapsibleToggleSection__AddChild(section,pUVar7,(MethodInfo *)0x0);
        pUVar7 = UI_ElementFactory__CreateDefaultLabel
                           (parent,style,"Gradient Colors",0,3,(MethodInfo *)0x0);
        UI_CollapsibleToggleSection__AddChild(section,pUVar7,(MethodInfo *)0x0);
        pUVar7 = UI_ElementFactory__CreateHorizontalGroup(parent,10.0,3,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
          cVar1 = *(char *)&__this_00[4].klass;
          pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
          pIVar3 = local_38->klass;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (lVar4 != 0) {
            pUVar5 = *(UI_ColorPickPopup_o **)(lVar4 + 0x48);
            pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
            if (cVar1 == '\0') {
              UnityEngine_Events_UnityAction___ctor();
              pUVar9 = UI_ElementFactory__CreateColorSetting
                                 (pUVar8,style,(Settings_BaseSetting_o *)pIVar3,"A",pUVar5,
                                  "",60.0,30.0,pUVar6,(MethodInfo *)0x0);
              if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto LAB_040ea75d;
              pUVar10 = (UI_ColorSettingElement_o *)
                        UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_ColorSettingElement_GetComponent_ColorSettingEle);
              (__this->fields)._guildColorA = pUVar10;
              il2cpp_runtime_glue(&(__this->fields)._guildColorA);
              pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
              lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              if (lVar4 == 0) goto LAB_040ea75d;
              pSVar2 = __this_00[2].monitor;
              pUVar5 = *(UI_ColorPickPopup_o **)(lVar4 + 0x48);
              pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              pUVar9 = UI_ElementFactory__CreateColorSetting
                                 (pUVar8,style,pSVar2,"B",pUVar5,"",60.0,30.0,
                                  pUVar6,(MethodInfo *)0x0);
              if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto LAB_040ea75d;
              pUVar10 = (UI_ColorSettingElement_o *)
                        UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_ColorSettingElement_GetComponent_ColorSettingEle);
              (__this->fields)._guildColorB = pUVar10;
              il2cpp_runtime_glue(&(__this->fields)._guildColorB);
              pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
              lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              if (lVar4 == 0) goto LAB_040ea75d;
              pIVar3 = __this_00[3].klass;
              pUVar5 = *(UI_ColorPickPopup_o **)(lVar4 + 0x48);
              pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              pUVar9 = UI_ElementFactory__CreateColorSetting
                                 (pUVar8,style,(Settings_BaseSetting_o *)pIVar3,"C",pUVar5,
                                  "",60.0,30.0,pUVar6,(MethodInfo *)0x0);
              if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto LAB_040ea75d;
              pUVar10 = (UI_ColorSettingElement_o *)
                        UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_ColorSettingElement_GetComponent_ColorSettingEle);
              (__this->fields)._guildColorC = pUVar10;
              il2cpp_runtime_glue(&(__this->fields)._guildColorC);
              pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
              lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              if (lVar4 == 0) goto LAB_040ea75d;
              pSVar2 = __this_00[3].monitor;
              pUVar5 = *(UI_ColorPickPopup_o **)(lVar4 + 0x48);
              pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              pUVar9 = UI_ElementFactory__CreateColorSetting
                                 (pUVar8,style,pSVar2,"D",pUVar5,"",60.0,30.0,
                                  pUVar6,(MethodInfo *)0x0);
              if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto LAB_040ea75d;
              pUVar10 = (UI_ColorSettingElement_o *)
                        UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_ColorSettingElement_GetComponent_ColorSettingEle);
              ppUVar11 = &(__this->fields)._guildColorD;
            }
            else {
              UnityEngine_Events_UnityAction___ctor();
              pUVar9 = UI_ElementFactory__CreateColorSetting
                                 (pUVar8,style,(Settings_BaseSetting_o *)pIVar3,"A",pUVar5,
                                  "",60.0,30.0,pUVar6,(MethodInfo *)0x0);
              if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto LAB_040ea75d;
              pUVar10 = (UI_ColorSettingElement_o *)
                        UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_ColorSettingElement_GetComponent_ColorSettingEle);
              (__this->fields)._nameColorA = pUVar10;
              il2cpp_runtime_glue(&(__this->fields)._nameColorA);
              pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
              lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              if (lVar4 == 0) goto LAB_040ea75d;
              pSVar2 = __this_00[2].monitor;
              pUVar5 = *(UI_ColorPickPopup_o **)(lVar4 + 0x48);
              pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              pUVar9 = UI_ElementFactory__CreateColorSetting
                                 (pUVar8,style,pSVar2,"B",pUVar5,"",60.0,30.0,
                                  pUVar6,(MethodInfo *)0x0);
              if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto LAB_040ea75d;
              pUVar10 = (UI_ColorSettingElement_o *)
                        UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_ColorSettingElement_GetComponent_ColorSettingEle);
              (__this->fields)._nameColorB = pUVar10;
              il2cpp_runtime_glue(&(__this->fields)._nameColorB);
              pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
              lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              if (lVar4 == 0) goto LAB_040ea75d;
              pIVar3 = __this_00[3].klass;
              pUVar5 = *(UI_ColorPickPopup_o **)(lVar4 + 0x48);
              pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              pUVar9 = UI_ElementFactory__CreateColorSetting
                                 (pUVar8,style,(Settings_BaseSetting_o *)pIVar3,"C",pUVar5,
                                  "",60.0,30.0,pUVar6,(MethodInfo *)0x0);
              if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto LAB_040ea75d;
              pUVar10 = (UI_ColorSettingElement_o *)
                        UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_ColorSettingElement_GetComponent_ColorSettingEle);
              (__this->fields)._nameColorC = pUVar10;
              il2cpp_runtime_glue(&(__this->fields)._nameColorC);
              pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
              lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              if (lVar4 == 0) goto LAB_040ea75d;
              pSVar2 = __this_00[3].monitor;
              pUVar5 = *(UI_ColorPickPopup_o **)(lVar4 + 0x48);
              pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              pUVar9 = UI_ElementFactory__CreateColorSetting
                                 (pUVar8,style,pSVar2,"D",pUVar5,"",60.0,30.0,
                                  pUVar6,(MethodInfo *)0x0);
              if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto LAB_040ea75d;
              pUVar10 = (UI_ColorSettingElement_o *)
                        UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_ColorSettingElement_GetComponent_ColorSettingEle);
              ppUVar11 = &(__this->fields)._nameColorD;
            }
            *ppUVar11 = pUVar10;
            il2cpp_runtime_glue(ppUVar11,pUVar10);
            UI_CollapsibleToggleSection__AddChild(section,pUVar7,(MethodInfo *)0x0);
            pUVar7 = UI_ElementFactory__CreateHorizontalGroup(parent,8.0,3,(MethodInfo *)0x0);
            *(undefined1 *)&__this_00[7].klass = *(undefined1 *)&__this_00[4].klass;
            __this_00[4].monitor = __this_00[1].monitor;
            il2cpp_runtime_glue(&__this_00[4].monitor);
            __this_00[5].klass = __this_00[2].klass;
            il2cpp_runtime_glue(__this_00 + 5);
            __this_00[5].monitor = __this_00[2].monitor;
            il2cpp_runtime_glue(&__this_00[5].monitor);
            __this_00[6].klass = __this_00[3].klass;
            il2cpp_runtime_glue(__this_00 + 6);
            __this_00[6].monitor = __this_00[3].monitor;
            il2cpp_runtime_glue(&__this_00[6].monitor);
            if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
              pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
              if (style != (UI_ElementStyle_o *)0x0) {
                fontSize = (style->fields).FontSize;
                themePanel = (System_String_o *)
                             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                __this_02 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
                UI_ElementStyle___ctor(__this_02,fontSize,120.0,20.0,themePanel,(MethodInfo *)0x0);
                pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                UI_ElementFactory__CreateTextButton
                          (pUVar8,__this_02,"Reset Colors",0.0,pUVar6,(MethodInfo *)0x0);
                UI_CollapsibleToggleSection__AddChild(section,pUVar7,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_040ea75d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel$$OnEffectSelected
// il2cpp: void UI_EditProfileProfilePanel__OnEffectSelected (UI_EditProfileProfilePanel_o* __this, Settings_StringSetting_o* effectSetting, Settings_ColorSetting_o* colorA, Settings_ColorSetting_o* colorB, Settings_ColorSetting_o* colorC, Settings_ColorSetting_o* colorD, bool isName, const MethodInfo* method);
// 0x40eb3d0

void UI_EditProfileProfilePanel__OnEffectSelected
               (UI_EditProfileProfilePanel_o *__this,Settings_StringSetting_o *effectSetting,
               Settings_ColorSetting_o *colorA,Settings_ColorSetting_o *colorB,
               Settings_ColorSetting_o *colorC,Settings_ColorSetting_o *colorD,bool_conflict isName,
               MethodInfo *method)

{
  uint in_EAX;
  bool_conflict bVar1;
  UI_ColorSettingElement_o **elemD;
  UI_ColorSettingElement_o **elemC;
  MethodInfo *method_00;
  UI_EditProfileProfilePanel_o *__this_00;
  UI_ColorSettingElement_o **elemA;
  MethodInfo *in_stack_ffffffffffffffb8;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (DAT_057047d4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_057047d4 = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  if (effectSetting != (Settings_StringSetting_o *)0x0) {
    bVar1 = PatreonEffects_NameEffectPresets__TryResolve
                      ((effectSetting->fields)._value,(int32_t *)((long)&uStack_38 + 4),
                       (MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      method_00 = (MethodInfo *)(ulong)uStack_38._4_4_;
      if ((char)isName == '\0') {
        elemA = &(__this->fields)._guildColorA;
        __this_00 = (UI_EditProfileProfilePanel_o *)&(__this->fields)._guildColorB;
        elemC = &(__this->fields)._guildColorC;
        elemD = &(__this->fields)._guildColorD;
      }
      else {
        elemA = &(__this->fields)._nameColorA;
        __this_00 = (UI_EditProfileProfilePanel_o *)&(__this->fields)._nameColorB;
        elemC = &(__this->fields)._nameColorC;
        elemD = &(__this->fields)._nameColorD;
      }
      UI_EditProfileProfilePanel__ApplyPreset
                (__this_00,uStack_38._4_4_,colorA,colorB,colorC,colorD,elemA,
                 (UI_ColorSettingElement_o **)__this_00,elemC,elemD,in_stack_ffffffffffffffb8);
      UI_EditProfileProfilePanel__RefreshPreviews(__this,method_00);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel$$ResetEffectColors
// il2cpp: void UI_EditProfileProfilePanel__ResetEffectColors (UI_EditProfileProfilePanel_o* __this, Settings_StringSetting_o* effectSetting, Settings_ColorSetting_o* colorA, Settings_ColorSetting_o* colorB, Settings_ColorSetting_o* colorC, Settings_ColorSetting_o* colorD, bool isName, const MethodInfo* method);
// 0x40eb710

void UI_EditProfileProfilePanel__ResetEffectColors
               (UI_EditProfileProfilePanel_o *__this,Settings_StringSetting_o *effectSetting,
               Settings_ColorSetting_o *colorA,Settings_ColorSetting_o *colorB,
               Settings_ColorSetting_o *colorC,Settings_ColorSetting_o *colorD,bool_conflict isName,
               MethodInfo *method)

{
  uint in_EAX;
  bool_conflict bVar1;
  UI_ColorSettingElement_o **elemD;
  UI_ColorSettingElement_o **elemC;
  MethodInfo *method_00;
  UI_EditProfileProfilePanel_o *__this_00;
  UI_ColorSettingElement_o **elemA;
  MethodInfo *in_stack_ffffffffffffffb8;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (DAT_057047d5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_057047d5 = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  if (effectSetting != (Settings_StringSetting_o *)0x0) {
    bVar1 = PatreonEffects_NameEffectPresets__TryResolve
                      ((effectSetting->fields)._value,(int32_t *)((long)&uStack_38 + 4),
                       (MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      method_00 = (MethodInfo *)(ulong)uStack_38._4_4_;
      if ((char)isName == '\0') {
        elemA = &(__this->fields)._guildColorA;
        __this_00 = (UI_EditProfileProfilePanel_o *)&(__this->fields)._guildColorB;
        elemC = &(__this->fields)._guildColorC;
        elemD = &(__this->fields)._guildColorD;
      }
      else {
        elemA = &(__this->fields)._nameColorA;
        __this_00 = (UI_EditProfileProfilePanel_o *)&(__this->fields)._nameColorB;
        elemC = &(__this->fields)._nameColorC;
        elemD = &(__this->fields)._nameColorD;
      }
      UI_EditProfileProfilePanel__ApplyPreset
                (__this_00,uStack_38._4_4_,colorA,colorB,colorC,colorD,elemA,
                 (UI_ColorSettingElement_o **)__this_00,elemC,elemD,in_stack_ffffffffffffffb8);
      UI_EditProfileProfilePanel__RefreshPreviews(__this,method_00);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel$$ApplyPreset
// il2cpp: void UI_EditProfileProfilePanel__ApplyPreset (UI_EditProfileProfilePanel_o* __this, int32_t effectType, Settings_ColorSetting_o* colorA, Settings_ColorSetting_o* colorB, Settings_ColorSetting_o* colorC, Settings_ColorSetting_o* colorD, UI_ColorSettingElement_o** elemA, UI_ColorSettingElement_o** elemB, UI_ColorSettingElement_o** elemC, UI_ColorSettingElement_o** elemD, const MethodInfo* method);
// 0x40eb4b0

void UI_EditProfileProfilePanel__ApplyPreset
               (UI_EditProfileProfilePanel_o *__this,int32_t effectType,
               Settings_ColorSetting_o *colorA,Settings_ColorSetting_o *colorB,
               Settings_ColorSetting_o *colorC,Settings_ColorSetting_o *colorD,
               UI_ColorSettingElement_o **elemA,UI_ColorSettingElement_o **elemB,
               UI_ColorSettingElement_o **elemC,UI_ColorSettingElement_o **elemD,MethodInfo *method)

{
  UI_ColorSettingElement_o *pUVar1;
  UnityEngine_Color_Fields UVar2;
  PatreonEffects_NameEffectSettings_o *pPVar3;
  Utility_Color255_o *pUVar4;
  
  if (DAT_057047d6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_057047d6 = '\x01';
  }
  pPVar3 = PatreonEffects_NameEffectPresets__GetPreset(effectType,(MethodInfo *)0x0);
  if (pPVar3 != (PatreonEffects_NameEffectSettings_o *)0x0) {
    UVar2 = (pPVar3->fields).gradientA.fields;
    pUVar4 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar4,(UnityEngine_Color_o)UVar2,(MethodInfo *)0x0);
    if (colorA != (Settings_ColorSetting_o *)0x0) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)colorA,(Il2CppObject *)pUVar4,MethodInfo_Void_set_Value);
      UVar2 = (pPVar3->fields).gradientB.fields;
      pUVar4 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
      Utility_Color255___ctor(pUVar4,(UnityEngine_Color_o)UVar2,(MethodInfo *)0x0);
      if (colorB != (Settings_ColorSetting_o *)0x0) {
        Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)colorB,(Il2CppObject *)pUVar4,MethodInfo_Void_set_Value);
        UVar2 = (pPVar3->fields).gradientC.fields;
        pUVar4 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
        Utility_Color255___ctor(pUVar4,(UnityEngine_Color_o)UVar2,(MethodInfo *)0x0);
        if (colorC != (Settings_ColorSetting_o *)0x0) {
          Settings_TypedSetting<object>__set_Value
                    ((Settings_TypedSetting_T__o *)colorC,(Il2CppObject *)pUVar4,MethodInfo_Void_set_Value);
          UVar2 = (pPVar3->fields).gradientD.fields;
          pUVar4 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
          Utility_Color255___ctor(pUVar4,(UnityEngine_Color_o)UVar2,(MethodInfo *)0x0);
          if (colorD != (Settings_ColorSetting_o *)0x0) {
            Settings_TypedSetting<object>__set_Value
                      ((Settings_TypedSetting_T__o *)colorD,(Il2CppObject *)pUVar4,MethodInfo_Void_set_Value);
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
              return;
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel$$RefreshPreviews
// il2cpp: void UI_EditProfileProfilePanel__RefreshPreviews (UI_EditProfileProfilePanel_o* __this, const MethodInfo* method);
// 0x40e9ad0

void UI_EditProfileProfilePanel__RefreshPreviews
               (UI_EditProfileProfilePanel_o *__this,MethodInfo *method)

{
  Settings_ProfileSettings_o *settings;
  Settings_NameSetting_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  PatreonEffects_NameEffectController_o *controller;
  bool_conflict bVar3;
  System_String_o *rawText;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_EditProfileProfilePanel_o *__this_00;
  bool bVar4;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (DAT_057047d7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata();
    DAT_057047d7 = '\x01';
  }
  settings = *(Settings_ProfileSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  __this_00 = (UI_EditProfileProfilePanel_o *)0x0;
  bVar3 = PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess((MethodInfo *)0x0);
  if ((settings != (Settings_ProfileSettings_o *)0x0) &&
     (pSVar1 = (settings->fields).Name, pSVar1 != (Settings_NameSetting_o *)0x0)) {
    if ((char)bVar3 == '\0') {
      bVar4 = false;
    }
    else {
      pSVar2 = (settings->fields).NameEffectEnabled;
      if (pSVar2 == (Settings_BoolSetting_o *)0x0) goto LAB_040e9c23;
      bVar4 = *(char *)((long)&(pSVar2->fields).DefaultValue + 1) != '\0';
    }
    UI_EditProfileProfilePanel__RefreshSinglePreview
              (__this_00,(__this->fields)._namePreviewTMP,(__this->fields)._namePreviewEffect,
               (pSVar1->fields)._value,(uint)bVar4,(settings->fields).NameEffect,
               (settings->fields).NameEffectColorA,(settings->fields).NameEffectColorB,
               (settings->fields).NameEffectColorC,(settings->fields).NameEffectColorD,1,
               in_stack_ffffffffffffffd0);
    method_01 = (MethodInfo *)(__this->fields)._guildPreviewTMP;
    controller = (__this->fields)._guildPreviewEffect;
    rawText = UI_EditProfileProfilePanel__GetGuildPreviewText(__this_00,settings,method_00);
    if ((char)bVar3 == '\0') {
      bVar4 = false;
    }
    else {
      pSVar2 = (settings->fields).GuildEffectEnabled;
      if (pSVar2 == (Settings_BoolSetting_o *)0x0) goto LAB_040e9c23;
      bVar4 = *(char *)((long)&(pSVar2->fields).DefaultValue + 1) != '\0';
    }
    UI_EditProfileProfilePanel__RefreshSinglePreview
              (__this_00,(UnityEngine_GameObject_o *)method_01,controller,rawText,(uint)bVar4,
               (settings->fields).GuildEffect,(settings->fields).GuildEffectColorA,
               (settings->fields).GuildEffectColorB,(settings->fields).GuildEffectColorC,
               (settings->fields).GuildEffectColorD,0,in_stack_ffffffffffffffd0);
    UI_EditProfileProfilePanel__UpdateGuildRoleSpriteButtonText(__this,method_01);
    return;
  }
LAB_040e9c23:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel$$RefreshSinglePreview
// il2cpp: void UI_EditProfileProfilePanel__RefreshSinglePreview (UI_EditProfileProfilePanel_o* __this, UnityEngine_GameObject_o* tmpObj, PatreonEffects_NameEffectController_o* controller, System_String_o* rawText, bool effectEnabled, Settings_StringSetting_o* effectSetting, Settings_ColorSetting_o* colorA, Settings_ColorSetting_o* colorB, Settings_ColorSetting_o* colorC, Settings_ColorSetting_o* colorD, bool applyHexColor, const MethodInfo* method);
// 0x40eb7f0

void UI_EditProfileProfilePanel__RefreshSinglePreview
               (UI_EditProfileProfilePanel_o *__this,UnityEngine_GameObject_o *tmpObj,
               PatreonEffects_NameEffectController_o *controller,System_String_o *rawText,
               bool_conflict effectEnabled,Settings_StringSetting_o *effectSetting,
               Settings_ColorSetting_o *colorA,Settings_ColorSetting_o *colorB,
               Settings_ColorSetting_o *colorC,Settings_ColorSetting_o *colorD,
               bool_conflict applyHexColor,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  uint in_EAX;
  bool_conflict bVar2;
  TMPro_TMP_Text_o *__this_00;
  PatreonEffects_NameEffectSettings_o *settings;
  UnityEngine_Color_Fields UVar3;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (DAT_057047d8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    DAT_057047d8 = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)tmpObj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (tmpObj == (UnityEngine_GameObject_o *)0x0) goto LAB_040eba52;
    __this_00 = (TMPro_TMP_Text_o *)
                UnityEngine_GameObject__GetComponent<object>(tmpObj,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (__this_00 == (TMPro_TMP_Text_o *)0x0) goto LAB_040eba52;
      TMPro_TMP_Text__set_richText(__this_00,1,(MethodInfo *)0x0);
      if ((char)applyHexColor != '\0') {
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_init_class();
        }
        rawText = MiscExtensions__HexColor(rawText,(MethodInfo *)0x0);
      }
      (*(__this_00->klass->vtable)._66_set_text.methodPtr)
                (__this_00,rawText,(__this_00->klass->vtable)._66_set_text.method);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)controller,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return;
    }
    if ((char)effectEnabled != '\0') {
      if (effectSetting == (Settings_StringSetting_o *)0x0) goto LAB_040eba52;
      bVar2 = PatreonEffects_NameEffectPresets__TryResolve
                        ((effectSetting->fields)._value,(int32_t *)((long)&uStack_38 + 4),
                         (MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        settings = PatreonEffects_NameEffectPresets__GetPreset(uStack_38._4_4_,(MethodInfo *)0x0);
        if ((((colorA != (Settings_ColorSetting_o *)0x0) &&
             (pUVar1 = (colorA->fields)._value, pUVar1 != (Utility_Color255_o *)0x0)) &&
            (UVar3 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(pUVar1,(MethodInfo *)0x0),
            settings != (PatreonEffects_NameEffectSettings_o *)0x0)) &&
           (((settings->fields).gradientA.fields = UVar3, colorB != (Settings_ColorSetting_o *)0x0
            && (pUVar1 = (colorB->fields)._value, pUVar1 != (Utility_Color255_o *)0x0)))) {
          UVar3 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(pUVar1,(MethodInfo *)0x0);
          (settings->fields).gradientB.fields = UVar3;
          if ((colorC != (Settings_ColorSetting_o *)0x0) &&
             (pUVar1 = (colorC->fields)._value, pUVar1 != (Utility_Color255_o *)0x0)) {
            UVar3 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(pUVar1,(MethodInfo *)0x0);
            (settings->fields).gradientC.fields = UVar3;
            if ((colorD != (Settings_ColorSetting_o *)0x0) &&
               (pUVar1 = (colorD->fields)._value, pUVar1 != (Utility_Color255_o *)0x0)) {
              UVar3 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(pUVar1,(MethodInfo *)0x0);
              (settings->fields).gradientD.fields = UVar3;
              if (controller != (PatreonEffects_NameEffectController_o *)0x0) {
                PatreonEffects_NameEffectController__Apply(controller,settings,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto LAB_040eba52;
      }
    }
    if (controller == (PatreonEffects_NameEffectController_o *)0x0) {
LAB_040eba52:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    PatreonEffects_NameEffectController__Clear(controller,(MethodInfo *)0x0);
  }
  return;
}


// UI.EditProfileProfilePanel$$CreateProfileImage
// il2cpp: void UI_EditProfileProfilePanel__CreateProfileImage (UI_EditProfileProfilePanel_o* __this, const MethodInfo* method);
// 0x40e9700

void UI_EditProfileProfilePanel__CreateProfileImage
               (UI_EditProfileProfilePanel_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  long lVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Transform_o *parent;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar6;
  
  if (DAT_057047d9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Icons/Profile/");
    DAT_057047d9 = '\x01';
  }
  pSVar5 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,100.0,20.0,pSVar5,(MethodInfo *)0x0);
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._profileImage;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._profileImage;
  bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar3 = (UnityEngine_Object_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar3,(MethodInfo *)0x0);
  }
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
    parent = (__this->fields)._group;
    pSVar5 = *(System_String_o **)(lVar2 + 0x18);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = UI_UIManager__GetProfileIcon(pSVar5,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat("Icons/Profile/",pSVar5,(MethodInfo *)0x0);
    pUVar6 = UI_ElementFactory__CreateRawImage
                       (parent,__this_00,pSVar5,256.0,256.0,(MethodInfo *)0x0);
    *ppUVar1 = pUVar6;
    il2cpp_runtime_glue(ppUVar1,pUVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel$$GetProfileIconPaths
// il2cpp: System_String_array* UI_EditProfileProfilePanel__GetProfileIconPaths (UI_EditProfileProfilePanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x40e94e0

System_String_array *
UI_EditProfileProfilePanel__GetProfileIconPaths
          (UI_EditProfileProfilePanel_o *__this,System_String_array *options,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  int iVar5;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  ulong uVar8;
  
  if (DAT_057047da == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"Icon");
    il2cpp_init_method_metadata(&"/Icons/Profile/");
    DAT_057047da = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_String);
  if (options != (System_String_array *)0x0) {
    iVar5 = (int)options->max_length;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      if (iVar5 < 1) {
LAB_040e9681:
        pSVar7 = (System_String_array *)
                 System_Collections_Generic_List<object>__ToArray(__this_00,MethodInfo_String___ToArray);
        return pSVar7;
      }
      uVar8 = 0;
      if ((options->max_length & 0xffffffff) != 0) {
        do {
          pSVar6 = options->m_Items[uVar8];
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar6 = System_String__Concat
                             ((System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8),"/Icons/Profile/"
                              ,pSVar6,"Icon",(MethodInfo *)0x0);
          lVar4 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_00->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_040e96f4;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar6);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,(Il2CppObject *)pSVar6,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          uVar8 = uVar8 + 1;
          uVar2 = (uint)options->max_length;
          if ((long)(int)uVar2 <= (long)uVar8) goto LAB_040e9681;
        } while (uVar8 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (0 < iVar5) {
      pSVar6 = options->m_Items[0];
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      System_String__Concat
                ((System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8),"/Icons/Profile/",pSVar6,
                 "Icon",(MethodInfo *)0x0);
    }
  }
LAB_040e96f4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel$$CreateGuildRoleSpriteButton
// il2cpp: void UI_EditProfileProfilePanel__CreateGuildRoleSpriteButton (UI_EditProfileProfilePanel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, Settings_ProfileSettings_o* settings, const MethodInfo* method);
// 0x40ea770

void UI_EditProfileProfilePanel__CreateGuildRoleSpriteButton
               (UI_EditProfileProfilePanel_o *__this,UnityEngine_Transform_o *parent,
               UI_ElementStyle_o *style,Settings_ProfileSettings_o *settings,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o **ppTVar1;
  Il2CppClass *pIVar2;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_UI_ColorBlock_o value;
  System_RuntimeTypeHandle_o handle;
  Il2CppObject *__this_01;
  System_Type_array *pSVar3;
  System_Type_o *pSVar4;
  long lVar5;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar6;
  Il2CppObject *pIVar7;
  UnityEngine_UI_Selectable_o *__this_03;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_RectTransform_o *__this_05;
  TMPro_TextMeshProUGUI_o *pTVar8;
  System_String_o *pSVar9;
  UnityEngine_Events_UnityAction_o *call;
  undefined8 uVar10;
  MethodInfo *method_00;
  
  if (DAT_057047db == '\0') {
    il2cpp_init_method_metadata(&TypeRef_Button);
    il2cpp_init_method_metadata(&TypeRef_CanvasRenderer);
    il2cpp_init_method_metadata(&TypeInfo_ColorBlock);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_Image);
    il2cpp_init_method_metadata(&TypeRef_LayoutElement);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    il2cpp_init_method_metadata(&TypeRef_TextMeshProUGUI);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateGuildRoleSpriteButton_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass30_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"GuildRoleSpriteButton");
    il2cpp_init_method_metadata(&"Text");
    DAT_057047db = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass30_0);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 == (Il2CppObject *)0x0) goto LAB_040eb00f;
  __this_01[1].klass = (Il2CppClass *)settings;
  il2cpp_runtime_glue(__this_01 + 1,settings);
  __this_01[1].monitor = __this;
  il2cpp_runtime_glue(&__this_01[1].monitor,__this);
  pSVar3 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar3 == (System_Type_array *)0x0) goto LAB_040eb00f;
  if (pSVar4 != (System_Type_o *)0x0) {
    lVar5 = il2cpp_runtime_glue(pSVar4,(((pSVar3->obj).klass)->_1).element_class);
    if (lVar5 == 0) goto LAB_040eb019;
  }
  if ((int)pSVar3->max_length == 0) goto LAB_040eb014;
  pSVar3->m_Items[0] = pSVar4;
  il2cpp_runtime_glue(pSVar3->m_Items);
  pSVar4 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
  if (pSVar4 != (System_Type_o *)0x0) {
    lVar5 = il2cpp_runtime_glue(pSVar4,(((pSVar3->obj).klass)->_1).element_class);
    if (lVar5 == 0) goto LAB_040eb019;
  }
  if ((uint)pSVar3->max_length < 2) goto LAB_040eb014;
  pSVar3->m_Items[1] = pSVar4;
  il2cpp_runtime_glue(pSVar3->m_Items + 1);
  pSVar4 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
  if (pSVar4 != (System_Type_o *)0x0) {
    lVar5 = il2cpp_runtime_glue(pSVar4,(((pSVar3->obj).klass)->_1).element_class);
    if (lVar5 == 0) goto LAB_040eb019;
  }
  if ((uint)pSVar3->max_length < 3) goto LAB_040eb014;
  pSVar3->m_Items[2] = pSVar4;
  il2cpp_runtime_glue(pSVar3->m_Items + 2);
  pSVar4 = System_Type__GetTypeFromHandle(TypeRef_Button,(MethodInfo *)0x0);
  if (pSVar4 != (System_Type_o *)0x0) {
    lVar5 = il2cpp_runtime_glue(pSVar4,(((pSVar3->obj).klass)->_1).element_class);
    if (lVar5 == 0) goto LAB_040eb019;
  }
  if ((uint)pSVar3->max_length < 4) goto LAB_040eb014;
  pSVar3->m_Items[3] = pSVar4;
  il2cpp_runtime_glue(pSVar3->m_Items + 3);
  pSVar4 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
  if (pSVar4 != (System_Type_o *)0x0) {
    lVar5 = il2cpp_runtime_glue(pSVar4,(((pSVar3->obj).klass)->_1).element_class);
    if (lVar5 == 0) goto LAB_040eb019;
  }
  if ((uint)pSVar3->max_length < 5) goto LAB_040eb014;
  pSVar3->m_Items[4] = pSVar4;
  il2cpp_runtime_glue(pSVar3->m_Items + 4,pSVar4);
  __this_02 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(__this_02,"GuildRoleSpriteButton",pSVar3,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    pUVar6 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_040eb00f;
    UnityEngine_Transform__SetParent(pUVar6,parent,0,(MethodInfo *)0x0);
    pIVar7 = UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    if (pIVar7 == (Il2CppObject *)0x0) goto LAB_040eb00f;
    (*pIVar7->klass->vtable[0x24].methodPtr)(0x43820000,pIVar7,pIVar7->klass->vtable[0x24].method);
    (*pIVar7->klass->vtable[0x26].methodPtr)(0x42200000,pIVar7,pIVar7->klass->vtable[0x26].method);
    pIVar7 = UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_Image_GetComponent_Image);
    if (pIVar7 == (Il2CppObject *)0x0) goto LAB_040eb00f;
    (*pIVar7->klass->vtable[0x17].methodPtr)
              (0x3f800000,0x3f800000,pIVar7,pIVar7->klass->vtable[0x17].method);
    __this_03 = (UnityEngine_UI_Selectable_o *)
                UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_Button_GetComponent_Button);
    if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (__this_03 == (UnityEngine_UI_Selectable_o *)0x0) goto LAB_040eb00f;
    value.fields.m_NormalColor.fields.b = 1.0;
    value.fields.m_NormalColor.fields.a = 0.08;
    value.fields.m_NormalColor.fields.r = 1.0;
    value.fields.m_NormalColor.fields.g = 1.0;
    value.fields.m_HighlightedColor.fields.r = 1.0;
    value.fields.m_HighlightedColor.fields.g = 1.0;
    value.fields.m_HighlightedColor.fields.b = 1.0;
    value.fields.m_HighlightedColor.fields.a = 0.16;
    value.fields.m_PressedColor.fields.r = 1.0;
    value.fields.m_PressedColor.fields.g = 1.0;
    value.fields.m_PressedColor.fields.b = 1.0;
    value.fields.m_PressedColor.fields.a = 0.24;
    value.fields.m_SelectedColor.fields.r = 1.0;
    value.fields.m_SelectedColor.fields.g = 1.0;
    value.fields.m_SelectedColor.fields.b = 1.0;
    value.fields.m_SelectedColor.fields.a = 0.16;
    value.fields.m_DisabledColor.fields.r = 1.0;
    value.fields.m_DisabledColor.fields.g = 1.0;
    value.fields.m_DisabledColor.fields.b = 1.0;
    value.fields.m_DisabledColor.fields.a = 0.05;
    value.fields.m_ColorMultiplier = 1.0;
    value.fields.m_FadeDuration = 0.1;
    UnityEngine_UI_Selectable__set_colors(__this_03,value,(MethodInfo *)0x0);
    pSVar3 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
    if (pSVar3 == (System_Type_array *)0x0) goto LAB_040eb00f;
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,(((pSVar3->obj).klass)->_1).element_class);
      if (lVar5 == 0) goto LAB_040eb019;
    }
    if ((int)pSVar3->max_length == 0) goto LAB_040eb014;
    pSVar3->m_Items[0] = pSVar4;
    il2cpp_runtime_glue(pSVar3->m_Items);
    pSVar4 = System_Type__GetTypeFromHandle(TypeRef_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_o *)0x0) {
      lVar5 = il2cpp_runtime_glue(pSVar4,(((pSVar3->obj).klass)->_1).element_class);
      if (lVar5 == 0) goto LAB_040eb019;
    }
    if (1 < (uint)pSVar3->max_length) {
      pSVar3->m_Items[1] = pSVar4;
      il2cpp_runtime_glue(pSVar3->m_Items + 1);
      pSVar4 = System_Type__GetTypeFromHandle(TypeRef_TextMeshProUGUI,(MethodInfo *)0x0);
      if (pSVar4 != (System_Type_o *)0x0) {
        lVar5 = il2cpp_runtime_glue(pSVar4,(((pSVar3->obj).klass)->_1).element_class);
        if (lVar5 == 0) {
LAB_040eb019:
          uVar10 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar10,0);
        }
      }
      if (2 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[2] = pSVar4;
        il2cpp_runtime_glue(pSVar3->m_Items + 2,pSVar4);
        __this_04 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor(__this_04,"Text",pSVar3,(MethodInfo *)0x0);
        if (__this_04 != (UnityEngine_GameObject_o *)0x0) {
          pUVar6 = UnityEngine_GameObject__get_transform(__this_04,(MethodInfo *)0x0);
          parent_00 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(pUVar6,parent_00,0,(MethodInfo *)0x0);
            __this_05 = (UnityEngine_RectTransform_o *)
                        UnityEngine_GameObject__GetComponent<object>(__this_04,MethodInfo_RectTransform_GetComponent_RectTransform);
            if (DAT_056fe093 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector2);
              DAT_056fe093 = '\x01';
            }
            if (__this_05 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (__this_05,
                         (UnityEngine_Vector2_o)
                         **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
              if (DAT_0570136e == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector2);
                DAT_0570136e = '\x01';
              }
              UnityEngine_RectTransform__set_anchorMax
                        (__this_05,
                         (UnityEngine_Vector2_o)
                         *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                         (MethodInfo *)0x0);
              UnityEngine_RectTransform__set_offsetMin
                        (__this_05,(UnityEngine_Vector2_o)0x41200000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_offsetMax
                        (__this_05,(UnityEngine_Vector2_o)0xc1200000,(MethodInfo *)0x0);
              pTVar8 = (TMPro_TextMeshProUGUI_o *)
                       UnityEngine_GameObject__GetComponent<object>(__this_04,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
              ppTVar1 = &(__this->fields)._guildRoleSpriteButtonLabel;
              (__this->fields)._guildRoleSpriteButtonLabel = pTVar8;
              il2cpp_runtime_glue(ppTVar1,pTVar8);
              pTVar8 = (__this->fields)._guildRoleSpriteButtonLabel;
              if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
                TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)pTVar8,1,(MethodInfo *)0x0);
                if ((style != (UI_ElementStyle_o *)0x0) &&
                   (*ppTVar1 != (TMPro_TextMeshProUGUI_o *)0x0)) {
                  TMPro_TMP_Text__set_fontSize
                            ((TMPro_TMP_Text_o *)*ppTVar1,(float)(style->fields).FontSize,
                             (MethodInfo *)0x0);
                  if (*ppTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_fontStyle((TMPro_TMP_Text_o *)*ppTVar1,1,(MethodInfo *)0x0);
                    if (*ppTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
                      TMPro_TMP_Text__set_alignment
                                ((TMPro_TMP_Text_o *)*ppTVar1,0x1001,(MethodInfo *)0x0);
                      pTVar8 = *ppTVar1;
                      if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
                        (*(pTVar8->klass->vtable)._23_set_color.methodPtr)
                                  (0x3f800000,0x3f800000,pTVar8,
                                   (pTVar8->klass->vtable)._23_set_color.method);
                        UI_EditProfileProfilePanel__ApplyChatFont
                                  ((UI_EditProfileProfilePanel_o *)pTVar8,*ppTVar1,method_00);
                        pIVar2 = __this_01[1].klass;
                        if ((pIVar2 != (Il2CppClass *)0x0) &&
                           (pIVar2 = (pIVar2->_1).element_class, pIVar2 != (Il2CppClass *)0x0)) {
                          pTVar8 = *ppTVar1;
                          pSVar9 = (System_String_o *)(pIVar2->_1).namespaze;
                          if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          pSVar9 = PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                                             (pSVar9,(Photon_Realtime_Player_o *)0x0,
                                              (MethodInfo *)0x0);
                          if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
                            (*(pTVar8->klass->vtable)._66_set_text.methodPtr)
                                      (pTVar8,pSVar9,(pTVar8->klass->vtable)._66_set_text.method);
                            __this_00 = (UnityEngine_Events_UnityEvent_o *)
                                        (__this_03->fields).m_CanvasGroupCache;
                            call = (UnityEngine_Events_UnityAction_o *)
                                   il2cpp_runtime_glue(TypeInfo_UnityAction);
                            UnityEngine_Events_UnityAction___ctor();
                            if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                              UnityEngine_Events_UnityEvent__AddListener
                                        (__this_00,call,(MethodInfo *)0x0);
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
        goto LAB_040eb00f;
      }
    }
LAB_040eb014:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_040eb00f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel$$UpdateGuildRoleSpriteButtonText
// il2cpp: void UI_EditProfileProfilePanel__UpdateGuildRoleSpriteButtonText (UI_EditProfileProfilePanel_o* __this, const MethodInfo* method);
// 0x40eba60

void UI_EditProfileProfilePanel__UpdateGuildRoleSpriteButtonText
               (UI_EditProfileProfilePanel_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  long lVar2;
  TMPro_TextMeshProUGUI_c *pTVar3;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  
  if (DAT_057047dc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_057047dc = '\x01';
  }
  pTVar1 = (__this->fields)._guildRoleSpriteButtonLabel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x40), lVar2 != 0)) {
    pTVar1 = (__this->fields)._guildRoleSpriteButtonLabel;
    pSVar5 = *(System_String_o **)(lVar2 + 0x18);
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
                       (pSVar5,(Photon_Realtime_Player_o *)0x0,(MethodInfo *)0x0);
    if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
      pTVar3 = pTVar1->klass;
      vtable_dispatch = (pTVar3->vtable)._66_set_text.methodPtr;
      (*vtable_dispatch)
                (pTVar1,pSVar5,(pTVar3->vtable)._66_set_text.method,pTVar3,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel$$GetGuildPreviewText
// il2cpp: System_String_o* UI_EditProfileProfilePanel__GetGuildPreviewText (UI_EditProfileProfilePanel_o* __this, Settings_ProfileSettings_o* settings, const MethodInfo* method);
// 0x40e98b0

System_String_o *
UI_EditProfileProfilePanel__GetGuildPreviewText
          (UI_EditProfileProfilePanel_o *__this,Settings_ProfileSettings_o *settings,
          MethodInfo *method)

{
  Settings_NameSetting_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *selectedRoleName;
  System_String_o *pSVar3;
  
  if (DAT_057047dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_057047dd = '\x01';
  }
  if ((settings != (Settings_ProfileSettings_o *)0x0) &&
     (pSVar1 = (settings->fields).Guild, pSVar1 != (Settings_NameSetting_o *)0x0)) {
    pSVar3 = (pSVar1->fields)._value;
    if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = Anticheat_ChatFilter__FilterBadWords(pSVar3,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = MiscExtensions__HexColor(pSVar3,(MethodInfo *)0x0);
    pSVar2 = (settings->fields).GuildRoleSprite;
    if (pSVar2 != (Settings_StringSetting_o *)0x0) {
      selectedRoleName = (pSVar2->fields)._value;
      if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
                         ((Photon_Realtime_Player_o *)0x0,pSVar3,selectedRoleName,(MethodInfo *)0x0)
      ;
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileProfilePanel$$ApplyChatFont
// il2cpp: void UI_EditProfileProfilePanel__ApplyChatFont (UI_EditProfileProfilePanel_o* __this, TMPro_TextMeshProUGUI_o* tmp, const MethodInfo* method);
// 0x40e99a0

void UI_EditProfileProfilePanel__ApplyChatFont
               (UI_EditProfileProfilePanel_o *__this,TMPro_TextMeshProUGUI_o *tmp,MethodInfo *method
               )

{
  bool_conflict bVar1;
  TMPro_TMP_FontAsset_o *value;
  TMPro_TMP_SpriteAsset_o *value_00;
  
  if (DAT_057047de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_init_method_metadata(&MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    il2cpp_init_method_metadata(&"UI/Icons/Profile/ProfileIconsAtlas_256");
    il2cpp_init_method_metadata(&"UI/Fonts/Vegur-Regular-SDF");
    DAT_057047de = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)tmp,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    value = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load<object>("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (tmp == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040e9ac9;
      TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)tmp,value,(MethodInfo *)0x0);
    }
    value_00 = (TMPro_TMP_SpriteAsset_o *)
               UnityEngine_Resources__Load<object>("UI/Icons/Profile/ProfileIconsAtlas_256",MethodInfo_TMP_SpriteAsset_Load_TMP_SpriteAsset);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)value_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (tmp != (TMPro_TextMeshProUGUI_o *)0x0) {
        TMPro_TMP_Text__set_spriteAsset((TMPro_TMP_Text_o *)tmp,value_00,(MethodInfo *)0x0);
        return;
      }
LAB_040e9ac9:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// UI.EditProfileProfilePanel$$GetDisplayUserId
// il2cpp: System_String_o* UI_EditProfileProfilePanel__GetDisplayUserId (UI_EditProfileProfilePanel_o* __this, Settings_ProfileSettings_o* settings, const MethodInfo* method);
// 0x40eb230

System_String_o *
UI_EditProfileProfilePanel__GetDisplayUserId
          (UI_EditProfileProfilePanel_o *__this,Settings_ProfileSettings_o *settings,
          MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  
  if (DAT_057047df == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"N/A");
    DAT_057047df = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
  bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if ((settings != (Settings_ProfileSettings_o *)0x0) &&
       (pSVar1 = (settings->fields).ID, pSVar1 != (Settings_StringSetting_o *)0x0)) {
      bVar2 = System_String__IsNullOrEmpty((pSVar1->fields)._value,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        pSVar1 = (settings->fields).ID;
        if (pSVar1 != (Settings_StringSetting_o *)0x0) {
          return (pSVar1->fields)._value;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    return "N/A";
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
  return pSVar3;
}


// UI.EditProfileProfilePanel$$GetDisplayDisplayName
// il2cpp: System_String_o* UI_EditProfileProfilePanel__GetDisplayDisplayName (UI_EditProfileProfilePanel_o* __this, Settings_ProfileSettings_o* settings, const MethodInfo* method);
// 0x40eb030

System_String_o *
UI_EditProfileProfilePanel__GetDisplayDisplayName
          (UI_EditProfileProfilePanel_o *__this,Settings_ProfileSettings_o *settings,
          MethodInfo *method)

{
  Settings_NameSetting_o *pSVar1;
  bool_conflict bVar2;
  Photon_Realtime_Player_o *pPVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  
  if (DAT_057047e0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"N/A");
    il2cpp_init_method_metadata(&"display_name");
    DAT_057047e0 = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto LAB_040eb05c;
LAB_040eb180:
    il2cpp_init_class();
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto LAB_040eb180;
LAB_040eb05c:
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    pSVar4 = (System_String_o *)
             PhotonExtensions__GetCustomProperty(pPVar3,"display_name",(MethodInfo *)0x0);
    pSVar5 = (System_String_o *)0x0;
    if ((pSVar4 != (System_String_o *)0x0) &&
       (pSVar5 = (System_String_o *)0x0, (Il2CppClass *)pSVar4->klass == DAT_057110b0)) {
      pSVar5 = pSVar4;
    }
    bVar2 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return pSVar5;
    }
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar3 == (Photon_Realtime_Player_o *)0x0) goto LAB_040eb21e;
    bVar2 = System_String__IsNullOrEmpty
                      (*(System_String_o **)&(pPVar3->fields)._HasRejoined_k__BackingField,
                       (MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
        return *(System_String_o **)&(pPVar3->fields)._HasRejoined_k__BackingField;
      }
      goto LAB_040eb21e;
    }
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
  bVar2 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    return pSVar5;
  }
  pSVar5 = "N/A";
  if (((settings != (Settings_ProfileSettings_o *)0x0) &&
      (pSVar1 = (settings->fields).Name, pSVar1 != (Settings_NameSetting_o *)0x0)) &&
     (bVar2 = System_String__IsNullOrEmpty((pSVar1->fields)._value,(MethodInfo *)0x0),
     pSVar5 = "N/A", (char)bVar2 == '\0')) {
    pSVar1 = (settings->fields).Name;
    if (pSVar1 == (Settings_NameSetting_o *)0x0) {
LAB_040eb21e:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar5 = (pSVar1->fields)._value;
  }
  return pSVar5;
}


// UI.EditProfileProfilePanel$$GetDisplayPatreonTier
// il2cpp: System_String_o* UI_EditProfileProfilePanel__GetDisplayPatreonTier (UI_EditProfileProfilePanel_o* __this, const MethodInfo* method);
// 0x40eb300

System_String_o *
UI_EditProfileProfilePanel__GetDisplayPatreonTier
          (UI_EditProfileProfilePanel_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o **tierLabel;
  System_String_o *local_10;
  
  if (DAT_057047e1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&"None");
    DAT_057047e1 = '\x01';
  }
  local_10 = (System_String_o *)0x0;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
    pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  else {
    pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  }
  if (pPVar2 != (Photon_Realtime_Player_o *)0x0) {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    tierLabel = &local_10;
    bVar1 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel(pPVar2,tierLabel,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') goto LAB_040eb3b0;
  }
  tierLabel = &local_10;
  bVar1 = PatreonEffects_PatreonHelper__TryGetLocalTierLabel(tierLabel,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    tierLabel = (System_String_o **)&"None";
  }
LAB_040eb3b0:
  return *tierLabel;
}


// UI.EditProfileProfilePanel$$.ctor
// il2cpp: void UI_EditProfileProfilePanel___ctor (UI_EditProfileProfilePanel_o* __this, const MethodInfo* method);
// 0x40ebb70

void UI_EditProfileProfilePanel___ctor(UI_EditProfileProfilePanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfileProfilePanel$$.cctor
// il2cpp: void UI_EditProfileProfilePanel___cctor (const MethodInfo* method);
// 0x40ebb80

void UI_EditProfileProfilePanel___cctor(MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_o *enumType;
  System_String_array *source;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Object_array *pSVar1;
  
  if (DAT_057047e2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EditProfileProfilePanel);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray_String);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Where_String);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__bool);
    il2cpp_init_method_metadata(&TypeRef_NameEffectType);
    il2cpp_init_method_metadata(&MethodInfo_Boolean___cctor_b__38_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057047e2 = '\x01';
  }
  handle.fields.value = TypeRef_NameEffectType.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  source = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_string__bool);
  System_Func<object__bool>___ctor();
  source_00 = System_Linq_Enumerable__Where<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                         MethodInfo_IEnumerable_1_System_String__Where_String);
  pSVar1 = System_Linq_Enumerable__ToArray<object>(source_00,MethodInfo_String___ToArray_String);
  **(undefined8 **)(TypeInfo_EditProfileProfilePanel + 0xb8) = pSVar1;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_EditProfileProfilePanel + 0xb8),pSVar1);
  return;
}


