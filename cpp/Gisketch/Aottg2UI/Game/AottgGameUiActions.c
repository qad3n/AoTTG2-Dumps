// Type: Gisketch.Aottg2UI.Game.AottgGameUiActions
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameUiActions.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c___cctor (const MethodInfo* method);
// 0x416d0c0

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704aad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704aad = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c___ctor (Gisketch_Aottg2UI_Game_AottgGameUiActions___c_o* __this, const MethodInfo* method);
// 0x416d130

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c___ctor
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterAccountFormActions>b__0_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c___RegisterAccountFormActions_b__0_2 (Gisketch_Aottg2UI_Game_AottgGameUiActions___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x416d140

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c__<RegisterAccountFormActions>b__0_2
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *pUVar2;
  long lVar3;
  UI_ExternalLinkPopup_o *__this_00;
  bool_conflict bVar4;
  System_String_o *url;
  
  if (DAT_05704aae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    DAT_05704aae = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgGameUiActions + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgGameUiActions + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704a51 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05704a51 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  url = ApplicationManagers_AccountManager__GetWebLoginUrlWithSession((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar2 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (lVar3 != 0) {
      pUVar2 = *(UnityEngine_Object_o **)(lVar3 + 0x40);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        (pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') goto LAB_041639ed;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if ((lVar3 != 0) &&
         (__this_00 = *(UI_ExternalLinkPopup_o **)(lVar3 + 0x40),
         __this_00 != (UI_ExternalLinkPopup_o *)0x0)) {
        UI_ExternalLinkPopup__Show(__this_00,url,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_041639ed:
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Application__OpenURL(url,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterMainActions>b__102_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c___RegisterMainActions_b__102_2 (Gisketch_Aottg2UI_Game_AottgGameUiActions___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x416d1a0

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c__<RegisterMainActions>b__102_2
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704aaf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    DAT_05704aaf = '\x01';
    iVar1 = *(int *)(TypeInfo_Application + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Application + 0xe4);
  }
  if (iVar1 != 0) {
    UnityEngine_Application__Quit((MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  UnityEngine_Application__Quit((MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterSettingsActions>b__103_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c___RegisterSettingsActions_b__103_0 (Gisketch_Aottg2UI_Game_AottgGameUiActions___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x416d200

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c__<RegisterSettingsActions>b__103_0
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  int iVar1;
  Settings_SaveableSettingsContainer_o *pSVar2;
  uint uVar3;
  Settings_SaveableSettingsContainer_array *pSVar4;
  uint uVar5;
  MethodInfo *pMVar6;
  
  if (DAT_05704ab0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    DAT_05704ab0 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704a9a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    DAT_05704a9a = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
    pMVar6 = TypeInfo_AottgGameUiActions;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
    pMVar6 = TypeInfo_AottgGameUiActions;
  }
  TypeInfo_AottgGameUiActions = pMVar6;
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__SettingsContainers(pMVar6);
  }
  else {
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__SettingsContainers(pMVar6);
  }
  if (pSVar4 == (Settings_SaveableSettingsContainer_array *)0x0) {
LAB_0416bd21:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar3 = (uint)pSVar4->max_length;
  if (0 < (int)uVar3) {
    uVar5 = 0;
    do {
      if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar2 = pSVar4->m_Items[(int)uVar5];
      if (pSVar2 == (Settings_SaveableSettingsContainer_o *)0x0) goto LAB_0416bd21;
      (*(pSVar2->klass->vtable)._16_Save.methodPtr)(pSVar2,(pSVar2->klass->vtable)._16_Save.method);
      uVar5 = uVar5 + 1;
      uVar3 = (uint)pSVar4->max_length;
    } while ((int)uVar5 < (int)uVar3);
  }
  if (*(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4) == 0) {
    pMVar6 = TypeInfo_AottgGameUiActions;
    il2cpp_init_class();
    Gisketch_Aottg2UI_Game_AottgGameUiActions__ApplySettings(pMVar6);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__ApplySettings(TypeInfo_AottgGameUiActions);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterSettingsActions>b__103_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c___RegisterSettingsActions_b__103_1 (Gisketch_Aottg2UI_Game_AottgGameUiActions___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x416d260

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c__<RegisterSettingsActions>b__103_1
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  int iVar1;
  Settings_SaveableSettingsContainer_o *pSVar2;
  uint uVar3;
  Settings_SaveableSettingsContainer_array *pSVar4;
  uint uVar5;
  MethodInfo *pMVar6;
  
  if (DAT_05704ab1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    DAT_05704ab1 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704a9b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    DAT_05704a9b = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
    pMVar6 = TypeInfo_AottgGameUiActions;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
    pMVar6 = TypeInfo_AottgGameUiActions;
  }
  TypeInfo_AottgGameUiActions = pMVar6;
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__SettingsContainers(pMVar6);
  }
  else {
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__SettingsContainers(pMVar6);
  }
  if (pSVar4 == (Settings_SaveableSettingsContainer_array *)0x0) {
LAB_0416c161:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar3 = (uint)pSVar4->max_length;
  if (0 < (int)uVar3) {
    uVar5 = 0;
    do {
      if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar2 = pSVar4->m_Items[(int)uVar5];
      if (pSVar2 == (Settings_SaveableSettingsContainer_o *)0x0) goto LAB_0416c161;
      (*(pSVar2->klass->vtable)._17_Load.methodPtr)(pSVar2,(pSVar2->klass->vtable)._17_Load.method);
      uVar5 = uVar5 + 1;
      uVar3 = (uint)pSVar4->max_length;
    } while ((int)uVar5 < (int)uVar3);
  }
  if (*(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4) == 0) {
    pMVar6 = TypeInfo_AottgGameUiActions;
    il2cpp_init_class();
    Gisketch_Aottg2UI_Game_AottgGameUiActions__ApplySettings(pMVar6);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__ApplySettings(TypeInfo_AottgGameUiActions);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterSettingsActions>b__103_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c___RegisterSettingsActions_b__103_2 (Gisketch_Aottg2UI_Game_AottgGameUiActions___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x416d2c0

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c__<RegisterSettingsActions>b__103_2
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  int iVar1;
  MethodInfo *method_00;
  
  if (DAT_05704ab2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    DAT_05704ab2 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
    method_00 = TypeInfo_AottgGameUiActions;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
    method_00 = TypeInfo_AottgGameUiActions;
  }
  TypeInfo_AottgGameUiActions = method_00;
  if (iVar1 != 0) {
    Gisketch_Aottg2UI_Game_AottgGameUiActions__ApplySettings(method_00);
    return;
  }
  il2cpp_init_class();
  Gisketch_Aottg2UI_Game_AottgGameUiActions__ApplySettings(method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c$$<RegisterSettingsActions>b__103_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c___RegisterSettingsActions_b__103_3 (Gisketch_Aottg2UI_Game_AottgGameUiActions___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x416d320

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c__<RegisterSettingsActions>b__103_3
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  int iVar1;
  MethodInfo *method_00;
  
  if (DAT_05704ab3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    DAT_05704ab3 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
    method_00 = TypeInfo_AottgGameUiActions;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
    method_00 = TypeInfo_AottgGameUiActions;
  }
  TypeInfo_AottgGameUiActions = method_00;
  if (iVar1 != 0) {
    Gisketch_Aottg2UI_Game_AottgGameUiActions__ResetSettingsToDefault(method_00);
    return;
  }
  il2cpp_init_class();
  Gisketch_Aottg2UI_Game_AottgGameUiActions__ResetSettingsToDefault(method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass104_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass104_0___ctor (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass104_0_o* __this, const MethodInfo* method);
// 0x416bc50

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c__DisplayClass104_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass104_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass104_0$$<RegisterLegacyMain>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass104_0___RegisterLegacyMain_b__0 (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass104_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x416d380

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c__DisplayClass104_0__<RegisterLegacyMain>b__0
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass104_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Component_o *__this_00;
  bool_conflict bVar1;
  UI_MainMenu_o *__this_01;
  
  if (DAT_05704ab4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MainMenu_GetComponent_MainMenu);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05704ab4 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_01 = (UI_MainMenu_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 == (UnityEngine_Component_o *)0x0) goto LAB_0416d494;
    __this_01 = (UI_MainMenu_o *)UnityEngine_Component__GetComponent<object>(__this_00,MethodInfo_MainMenu_GetComponent_MainMenu)
    ;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar1 == '\0') {
    return;
  }
  if (__this_01 != (UI_MainMenu_o *)0x0) {
    UI_MainMenu__OpenIntroAction(__this_01,(__this->fields).legacyButtonName,(MethodInfo *)0x0);
    return;
  }
LAB_0416d494:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass36_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass36_0___ctor (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass36_0_o* __this, const MethodInfo* method);
// 0x41660d0

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c__DisplayClass36_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass36_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass36_0$$<LoginWithEmail>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass36_0___LoginWithEmail_b__0 (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass36_0_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x416d4a0

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c__DisplayClass36_0__<LoginWithEmail>b__0
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass36_0_o *__this,
               bool_conflict success,System_String_o *error,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields context;
  System_String_o *content;
  MethodInfo *method_00;
  System_String_o *icon;
  int32_t variant;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Game_AottgGameUiActions_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffb0;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_00000034,success);
  if (DAT_05704ab5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"MainMenu.Account.SignIn");
    il2cpp_init_method_metadata(&"Signed in.");
    il2cpp_init_method_metadata(&"MainMenu.Account.SignedIn");
    il2cpp_init_method_metadata(&"account.login");
    il2cpp_init_method_metadata(&"account-login-password");
    il2cpp_init_method_metadata(&"exclamation");
    il2cpp_init_method_metadata(&"Sign In");
    il2cpp_init_method_metadata(&"checkmark");
    DAT_05704ab5 = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgGameUiActions__EndAccountOperation(pGVar1,method_01);
    pGVar1 = (__this->fields).__4__this;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(pGVar1,method_01);
      if ((char)success == '\0') {
        pGVar1 = (__this->fields).__4__this;
        if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
          il2cpp_init_class();
        }
        content = Gisketch_Aottg2UI_Game_AottgGameUiActions__ErrorText(error,method_01);
        if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
          variant = 0;
          icon = "exclamation";
LAB_0416d66d:
          Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
                    (pGVar1,variant,icon,"MainMenu.Account.SignIn","Sign In",content,"account.login",
                     in_stack_ffffffffffffffb0);
          return;
        }
      }
      else {
        in_stack_ffffffffffffffb0 = (MethodInfo *)(__this->fields).context.fields.GameObject;
        context = (__this->fields).context.fields;
        if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Gisketch_Aottg2UI_Game_AottgGameUiActions__ClearInput
                  ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)context,"account-login-password",method_01
                  );
        pGVar1 = (__this->fields).__4__this;
        if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
          Gisketch_Aottg2UI_Game_AottgGameUiActions__CloseTopOverlay(pGVar1,method_01);
          pGVar1 = (__this->fields).__4__this;
          content = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                              ("MainMenu.Account.SignedIn","Signed in.",method_00);
          if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
            variant = 4;
            icon = "checkmark";
            goto LAB_0416d66d;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass4_0___ctor (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x4161c70

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c__DisplayClass4_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass4_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass4_0$$<RegisterWithEmail>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass4_0___RegisterWithEmail_b__0 (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass4_0_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x416d690

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c__DisplayClass4_0__<RegisterWithEmail>b__0
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass4_0_o *__this,
               bool_conflict success,System_String_o *error,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields context;
  System_String_o *content;
  MethodInfo *method_00;
  System_String_o *icon;
  int32_t variant;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Game_AottgGameUiActions_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffb0;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_00000034,success);
  if (DAT_05704ab6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"MainMenu.Account.CreateAccount");
    il2cpp_init_method_metadata(&"account-register-password");
    il2cpp_init_method_metadata(&"main-menu-login");
    il2cpp_init_method_metadata(&"Create Account");
    il2cpp_init_method_metadata(&"Account created. Check your email to verify, then sign in.");
    il2cpp_init_method_metadata(&"MainMenu.Account.Created");
    il2cpp_init_method_metadata(&"account-register-confirm-password");
    il2cpp_init_method_metadata(&"exclamation");
    il2cpp_init_method_metadata(&"account.register.email");
    il2cpp_init_method_metadata(&"checkmark");
    DAT_05704ab6 = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgGameUiActions__EndAccountOperation(pGVar1,method_01);
    pGVar1 = (__this->fields).__4__this;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(pGVar1,method_01);
      if ((char)success == '\0') {
        pGVar1 = (__this->fields).__4__this;
        if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
          il2cpp_init_class();
        }
        content = Gisketch_Aottg2UI_Game_AottgGameUiActions__ErrorText(error,method_01);
        if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
          variant = 0;
          icon = "exclamation";
LAB_0416d8a9:
          Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
                    (pGVar1,variant,icon,"MainMenu.Account.CreateAccount","Create Account",content,"account.register.email",
                     in_stack_ffffffffffffffb0);
          return;
        }
      }
      else {
        context = (__this->fields).context.fields;
        if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Gisketch_Aottg2UI_Game_AottgGameUiActions__ClearInput
                  ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)context,"account-register-password",method_01
                  );
        in_stack_ffffffffffffffb0 = (MethodInfo *)(__this->fields).context.fields.GameObject;
        Gisketch_Aottg2UI_Game_AottgGameUiActions__ClearInput
                  ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                   (__this->fields).context.fields,"account-register-confirm-password",method_01);
        pGVar1 = (__this->fields).__4__this;
        if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
          Gisketch_Aottg2UI_Game_AottgGameUiActions__ShowAccountDialog(pGVar1,"main-menu-login",0,method)
          ;
          pGVar1 = (__this->fields).__4__this;
          content = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                              ("MainMenu.Account.Created","Account created. Check your email to verify, then sign in.",method_00);
          if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
            variant = 4;
            icon = "checkmark";
            goto LAB_0416d8a9;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass5_0___ctor (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x41624e0

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c__DisplayClass5_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass5_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass5_0$$<ForgotPassword>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass5_0___ForgotPassword_b__0 (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass5_0_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x416d8c0

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c__DisplayClass5_0__<ForgotPassword>b__0
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass5_0_o *__this,
               bool_conflict success,System_String_o *error,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields context;
  System_String_o *content;
  MethodInfo *method_00;
  System_String_o *icon;
  int32_t variant;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Game_AottgGameUiActions_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffb0;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_00000034,success);
  if (DAT_05704ab7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"Password reset email sent. Check your inbox.");
    il2cpp_init_method_metadata(&"account-forgot-email");
    il2cpp_init_method_metadata(&"main-menu-login");
    il2cpp_init_method_metadata(&"MainMenu.Account.ResetSent");
    il2cpp_init_method_metadata(&"exclamation");
    il2cpp_init_method_metadata(&"MainMenu.Account.ForgotPasswordTitle");
    il2cpp_init_method_metadata(&"Forgot Password");
    il2cpp_init_method_metadata(&"account.forgotPassword");
    il2cpp_init_method_metadata(&"checkmark");
    DAT_05704ab7 = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgGameUiActions__EndAccountOperation(pGVar1,method_01);
    pGVar1 = (__this->fields).__4__this;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(pGVar1,method_01);
      if ((char)success == '\0') {
        pGVar1 = (__this->fields).__4__this;
        if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
          il2cpp_init_class();
        }
        content = Gisketch_Aottg2UI_Game_AottgGameUiActions__ErrorText(error,method_01);
        if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
          variant = 0;
          icon = "exclamation";
LAB_0416daa5:
          Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
                    (pGVar1,variant,icon,"MainMenu.Account.ForgotPasswordTitle","Forgot Password",content,"account.forgotPassword",
                     in_stack_ffffffffffffffb0);
          return;
        }
      }
      else {
        in_stack_ffffffffffffffb0 = (MethodInfo *)(__this->fields).context.fields.GameObject;
        context = (__this->fields).context.fields;
        if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Gisketch_Aottg2UI_Game_AottgGameUiActions__ClearInput
                  ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)context,"account-forgot-email",method_01
                  );
        pGVar1 = (__this->fields).__4__this;
        if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
          Gisketch_Aottg2UI_Game_AottgGameUiActions__ShowAccountDialog(pGVar1,"main-menu-login",0,method)
          ;
          pGVar1 = (__this->fields).__4__this;
          content = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                              ("MainMenu.Account.ResetSent","Password reset email sent. Check your inbox.",method_00);
          if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
            variant = 4;
            icon = "checkmark";
            goto LAB_0416daa5;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass74_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass74_0___ctor (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass74_0_o* __this, const MethodInfo* method);
// 0x4168a30

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c__DisplayClass74_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass74_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass74_0$$<RefreshRemoteProfileAndCharacter>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass74_0___RefreshRemoteProfileAndCharacter_b__0 (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass74_0_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x416dac0

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c__DisplayClass74_0__<RefreshRemoteProfileAndCharacter>b__0
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass74_0_o *__this,
               bool_conflict success,System_String_o *error,MethodInfo *method)

{
  byte bVar1;
  Gisketch_Aottg2UI_Game_AottgGameUiActions_o *pGVar2;
  bool_conflict bVar3;
  System_String_o *icon;
  Il2CppObject *__this_00;
  System_String_array *values;
  System_String_o *pSVar4;
  int64_t iVar5;
  MethodInfo *method_00;
  System_String_o *content;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_01;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *__this_02;
  System_Action_bool__string__o *onComplete;
  MethodInfo *in_R9;
  long lStack_38;
  
  if (DAT_05704ab8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__RefreshRemoteProfileAndCharacter_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass74_1);
    il2cpp_init_method_metadata(&"Profile.RefreshRemoteProfile");
    il2cpp_init_method_metadata(&"ms");
    il2cpp_init_method_metadata(&"warning");
    il2cpp_init_method_metadata(&"Profile");
    il2cpp_init_method_metadata(&" elapsed=");
    il2cpp_init_method_metadata(&"profile callback success=");
    DAT_05704ab8 = '\x01';
  }
  lStack_38 = 0;
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass74_1);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    *(char *)&__this_00[1].klass = (char)success;
    __this_00[1].monitor = error;
    il2cpp_runtime_glue(&__this_00[1].monitor,error);
    values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = "profile callback success=";
        il2cpp_runtime_glue(values->m_Items);
        if (*(int *)(DAT_05711048 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar4 = System_Boolean__ToString((bool_conflict)(__this_00 + 1),(MethodInfo *)0x0);
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = pSVar4;
          il2cpp_runtime_glue(values->m_Items + 1,pSVar4);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = " elapsed=";
            il2cpp_runtime_glue(values->m_Items + 2);
            if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
              il2cpp_init_class();
            }
            iVar5 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__NowMs((MethodInfo *)0x0);
            lStack_38 = iVar5 - (__this->fields).startMs;
            pSVar4 = System_Int64__ToString((int64_t)&lStack_38,(MethodInfo *)0x0);
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = pSVar4;
              il2cpp_runtime_glue(values->m_Items + 3,pSVar4);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = "ms";
                il2cpp_runtime_glue(values->m_Items + 4);
                method_00 = (MethodInfo *)System_String__Concat(values,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
                          ("Profile.RefreshRemoteProfile",(System_String_o *)method_00,(MethodInfo *)0x0);
                pGVar2 = (__this->fields).__4__this;
                if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
                  Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(pGVar2,method_00);
                  if ((*(byte *)((long)&(__this->fields).rebuildProfileScreen + 1) &
                      (*(byte *)&__this_00[1].klass ^ 1) &
                      (byte)(__this->fields).rebuildProfileScreen) != 0) {
                    pGVar2 = (__this->fields).__4__this;
                    pSVar4 = __this_00[1].monitor;
                    if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    content = Gisketch_Aottg2UI_Game_AottgGameUiActions__ErrorText(pSVar4,method_00)
                    ;
                    icon = "warning";
                    pSVar4 = "Profile";
                    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0)
                    goto LAB_0416de46;
                    if (DAT_05704a95 == '\0') {
                      il2cpp_init_method_metadata(&TypeInfo_AottgToastDefinition);
                      DAT_05704a95 = '\x01';
                    }
                    __this_01 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                                          ((Gisketch_Aottg2UI_Actions_GisketchController_o *)pGVar2,
                                           (MethodInfo *)0x0);
                    if (__this_01 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
                      __this_02 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)
                                  il2cpp_runtime_glue(TypeInfo_AottgToastDefinition);
                      in_R9 = (MethodInfo *)0x0;
                      Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor
                                (__this_02,1,icon,pSVar4,content,(System_String_o *)0x0,
                                 (MethodInfo *)0x0);
                      Gisketch_Aottg2UI_GisketchUIRoot__ShowToast
                                (__this_01,__this_02,(MethodInfo *)0x0);
                    }
                  }
                  pGVar2 = (__this->fields).__4__this;
                  bVar3 = (__this->fields).rebuildProfileScreen;
                  bVar1 = *(byte *)((long)&(__this->fields).rebuildProfileScreen + 2);
                  onComplete = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
                  System_Action<bool__object>___ctor();
                  if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
                    Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshRemoteCharacterInfo
                              (pGVar2,(uint)(byte)bVar3,(uint)bVar1,onComplete,
                               (uint)*(byte *)((long)&(__this->fields).rebuildProfileScreen + 1),
                               in_R9);
                    return;
                  }
                }
                goto LAB_0416de46;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_0416de46:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass74_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass74_1___ctor (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass74_1_o* __this, const MethodInfo* method);
// 0x416de50

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c__DisplayClass74_1___ctor
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass74_1_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass74_1$$<RefreshRemoteProfileAndCharacter>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass74_1___RefreshRemoteProfileAndCharacter_b__1 (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass74_1_o* __this, bool characterSuccess, System_String_o* characterError, const MethodInfo* method);
// 0x416de60

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c__DisplayClass74_1__<RefreshRemoteProfileAndCharacter>b__1
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass74_1_o *__this,
               bool_conflict characterSuccess,System_String_o *characterError,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass74_0_o *pGVar1;
  long lVar2;
  byte bVar3;
  
  pGVar1 = (__this->fields).CS___8__locals1;
  if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass74_0_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar2 = *(long *)&(pGVar1->fields).forceRefresh;
  if (lVar2 != 0) {
    bVar3 = (byte)(__this->fields).success;
    if (bVar3 == 0) {
      characterError = (__this->fields).error;
    }
    bVar3 = bVar3 & (byte)characterSuccess;
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),bVar3,characterError,*(undefined8 *)(lVar2 + 0x28),
               bVar3,*(code **)(lVar2 + 0x18));
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass75_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass75_0___ctor (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass75_0_o* __this, const MethodInfo* method);
// 0x4168dd0

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c__DisplayClass75_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass75_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass75_0$$<RefreshRemoteCharacterInfo>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass75_0___RefreshRemoteCharacterInfo_b__0 (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass75_0_o* __this, bool success, System_String_o* error, SimpleJSONFixed_JSONNode_o* characterInfo, const MethodInfo* method);
// 0x416dea0

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c__DisplayClass75_0__<RefreshRemoteCharacterInfo>b__0
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass75_0_o *__this,
               bool_conflict success,System_String_o *error,
               SimpleJSONFixed_JSONNode_o *characterInfo,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameUiActions_o *pGVar1;
  System_Action_bool__string__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar3;
  bool_conflict bVar4;
  System_String_array *values;
  System_String_o *pSVar5;
  int64_t iVar6;
  MethodInfo *pMVar7;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar8;
  char cStack_49;
  long lStack_48;
  System_String_o *pSStack_40;
  System_String_o *pSStack_38;
  
  cStack_49 = (char)success;
  if (DAT_05704ab9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"Profile.RefreshRemoteCharacterInfo");
    il2cpp_init_method_metadata(&"profile");
    il2cpp_init_method_metadata(&"ms");
    il2cpp_init_method_metadata(&"warning");
    il2cpp_init_method_metadata(&"callback success=");
    il2cpp_init_method_metadata(&"Profile");
    il2cpp_init_method_metadata(&"RebuildProfileScreen");
    il2cpp_init_method_metadata(&" elapsed=");
    DAT_05704ab9 = '\x01';
  }
  lStack_48 = 0;
  values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
  if (values == (System_String_array *)0x0) goto LAB_0416e314;
  if ((int)values->max_length == 0) {
LAB_0416e30f:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  values->m_Items[0] = "callback success=";
  il2cpp_runtime_glue(values->m_Items);
  if (*(int *)(DAT_05711048 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = System_Boolean__ToString((bool_conflict)&cStack_49,(MethodInfo *)0x0);
  if ((uint)values->max_length < 2) goto LAB_0416e30f;
  values->m_Items[1] = pSVar5;
  il2cpp_runtime_glue(values->m_Items + 1,pSVar5);
  if ((uint)values->max_length < 3) goto LAB_0416e30f;
  values->m_Items[2] = " elapsed=";
  il2cpp_runtime_glue(values->m_Items + 2);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar6 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__NowMs((MethodInfo *)0x0);
  lStack_48 = iVar6 - (__this->fields).startMs;
  pSVar5 = System_Int64__ToString((int64_t)&lStack_48,(MethodInfo *)0x0);
  if ((uint)values->max_length < 4) goto LAB_0416e30f;
  values->m_Items[3] = pSVar5;
  il2cpp_runtime_glue(values->m_Items + 3,pSVar5);
  if ((uint)values->max_length < 5) goto LAB_0416e30f;
  values->m_Items[4] = "ms";
  il2cpp_runtime_glue(values->m_Items + 4);
  pMVar7 = (MethodInfo *)System_String__Concat(values,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
            ("Profile.RefreshRemoteCharacterInfo",(System_String_o *)pMVar7,(MethodInfo *)0x0);
  if (cStack_49 == '\0') {
    if ((char)(__this->fields).showProfileErrorToast == '\0') goto LAB_0416e0b9;
    pGVar1 = (__this->fields).__4__this;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) goto LAB_0416e314;
    pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)pGVar1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar7 = (MethodInfo *)0x0;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 == '\0') goto LAB_0416e0b9;
    pGVar1 = (__this->fields).__4__this;
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) goto LAB_0416e314;
    pMVar7 = (MethodInfo *)0x0;
    pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)pGVar1,(MethodInfo *)0x0);
    if (pGVar8 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto LAB_0416e314;
    if ((pGVar8->fields)._Manifest_k__BackingField ==
        (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) goto LAB_0416e0b9;
    pGVar1 = (__this->fields).__4__this;
    if (((pGVar1 == (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) ||
        (pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)pGVar1,
                             (MethodInfo *)0x0), pGVar8 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0
        )) || (pGVar3 = (pGVar8->fields)._Manifest_k__BackingField,
              pGVar3 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0))
    goto LAB_0416e314;
    pMVar7 = "profile";
    bVar4 = System_String__op_Equality
                      ((System_String_o *)(pGVar3->fields).dialogs,(System_String_o *)"profile",
                       (MethodInfo *)0x0);
    if ((char)bVar4 == '\0') goto LAB_0416e0b9;
    pGVar1 = (__this->fields).__4__this;
    if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = Gisketch_Aottg2UI_Game_AottgGameUiActions__ErrorText(error,pMVar7);
    if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) goto LAB_0416e314;
    pSStack_38 = "warning";
    pSStack_40 = "Profile";
    if (DAT_05704a95 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AottgToastDefinition);
      DAT_05704a95 = '\x01';
    }
    pMVar7 = (MethodInfo *)0x0;
    pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)pGVar1,(MethodInfo *)0x0);
    if (pGVar8 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto LAB_0416e0b9;
    pMVar7 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_AottgToastDefinition);
    Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor
              ((Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)pMVar7,1,pSStack_38,pSStack_40,
               pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_GisketchUIRoot__ShowToast
              (pGVar8,(Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)pMVar7,(MethodInfo *)0x0);
    pGVar1 = (__this->fields).__4__this;
  }
  else {
    pMVar7 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Game_AottgCharacterInfoState__SetRemote(characterInfo,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyCurrentToRuntime((MethodInfo *)0x0);
LAB_0416e0b9:
    pGVar1 = (__this->fields).__4__this;
  }
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
    *(undefined1 *)((long)&(pGVar1->fields)._authMethodsUnavailable + 3) = 0;
    Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(pGVar1,pMVar7);
    if ((char)(__this->fields).rebuildProfileScreen == '\0') {
      pGVar1 = (__this->fields).__4__this;
      if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshProfileState(pGVar1,pMVar7);
        pGVar1 = (__this->fields).__4__this;
        if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
          Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshEmoteState(pGVar1,pMVar7);
          pSVar2 = (__this->fields).onComplete;
          goto joined_r0x0416e304;
        }
      }
    }
    else {
      if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pMVar7 = "RebuildProfileScreen";
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
                ("Profile.RefreshRemoteCharacterInfo",(System_String_o *)"RebuildProfileScreen",(MethodInfo *)0x0);
      pGVar1 = (__this->fields).__4__this;
      if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgGameUiActions__RebuildProfileScreen(pGVar1,pMVar7);
        pSVar2 = (__this->fields).onComplete;
joined_r0x0416e304:
        if (pSVar2 != (System_Action_bool__string__o *)0x0) {
          (*(code *)(pSVar2->fields).invoke_impl)
                    ((pSVar2->fields).method_code,cStack_49,error,(pSVar2->fields).method);
        }
        return;
      }
    }
  }
LAB_0416e314:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass91_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass91_0___ctor (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass91_0_o* __this, const MethodInfo* method);
// 0x416ad30

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c__DisplayClass91_0___ctor
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass91_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions.<>c__DisplayClass91_0$$<SaveCharacter>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass91_0___SaveCharacter_b__0 (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass91_0_o* __this, bool success, System_String_o* error, SimpleJSONFixed_JSONNode_o* characterInfo, const MethodInfo* method);
// 0x416e320

void Gisketch_Aottg2UI_Game_AottgGameUiActions_<>c__DisplayClass91_0__<SaveCharacter>b__0
               (Gisketch_Aottg2UI_Game_AottgGameUiActions___c__DisplayClass91_0_o *__this,
               bool_conflict success,System_String_o *error,
               SimpleJSONFixed_JSONNode_o *characterInfo,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameUiActions_o *pGVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *__this_01;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  
  if (DAT_05704aba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"profile.save");
    il2cpp_init_method_metadata(&"Profile");
    il2cpp_init_method_metadata(&"exclamation");
    il2cpp_init_method_metadata(&"checkmark");
    il2cpp_init_method_metadata(&"Character saved.");
    DAT_05704aba = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
    pMVar5 = "profile.save";
    Gisketch_Aottg2UI_Actions_GisketchController__EndOperation
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)pGVar1,
               (System_String_o *)"profile.save",(MethodInfo *)0x0);
    if ((char)success == '\0') {
      pGVar1 = (__this->fields).__4__this;
      if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__ErrorText(error,pMVar5);
      pMVar5 = "profile.save";
      pSVar3 = "exclamation";
      pSVar2 = "Profile";
      if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
        if (DAT_05704a95 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_AottgToastDefinition);
          DAT_05704a95 = '\x01';
        }
        __this_00 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)pGVar1,
                               (MethodInfo *)0x0);
        if (__this_00 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
          return;
        }
        __this_01 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)
                    il2cpp_runtime_glue(TypeInfo_AottgToastDefinition);
        Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor
                  (__this_01,0,pSVar3,pSVar2,pSVar4,(System_String_o *)pMVar5,(MethodInfo *)0x0);
LAB_0416e553:
        Gisketch_Aottg2UI_GisketchUIRoot__ShowToast(__this_00,__this_01,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (characterInfo == (SimpleJSONFixed_JSONNode_o *)0x0) {
        characterInfo = (__this->fields).next;
      }
      pMVar5 = (MethodInfo *)0x0;
      Gisketch_Aottg2UI_Game_AottgCharacterInfoState__SetRemote(characterInfo,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyCurrentToRuntime((MethodInfo *)0x0);
      pGVar1 = (__this->fields).__4__this;
      if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(pGVar1,pMVar5);
        pGVar1 = (__this->fields).__4__this;
        if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
          Gisketch_Aottg2UI_Game_AottgGameUiActions__CloseTopOverlay(pGVar1,pMVar5);
          pGVar1 = (__this->fields).__4__this;
          if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
            Gisketch_Aottg2UI_Game_AottgGameUiActions__RebuildProfileScreen(pGVar1,pMVar5);
            pMVar5 = "profile.save";
            pSVar4 = "checkmark";
            pSVar3 = "Profile";
            pSVar2 = "Character saved.";
            pGVar1 = (__this->fields).__4__this;
            if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
              if (DAT_05704a95 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_AottgToastDefinition);
                DAT_05704a95 = '\x01';
              }
              __this_00 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                                    ((Gisketch_Aottg2UI_Actions_GisketchController_o *)pGVar1,
                                     (MethodInfo *)0x0);
              if (__this_00 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
                return;
              }
              __this_01 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)
                          il2cpp_runtime_glue(TypeInfo_AottgToastDefinition);
              Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor
                        (__this_01,4,pSVar4,pSVar3,pSVar2,(System_String_o *)pMVar5,
                         (MethodInfo *)0x0);
              goto LAB_0416e553;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterAccountFormActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterAccountFormActions (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4161000

void Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterAccountFormActions
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  long lVar1;
  System_String_o *actionId;
  System_Action_GisketchActionContext__o *pSVar2;
  
  if (DAT_05704a47 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
    il2cpp_init_method_metadata(&MethodInfo_Void_ForgotPassword);
    il2cpp_init_method_metadata(&MethodInfo_Void_GoOffline);
    il2cpp_init_method_metadata(&MethodInfo_Void_GoOnline);
    il2cpp_init_method_metadata(&MethodInfo_Void_Logout);
    il2cpp_init_method_metadata(&MethodInfo_Void_RefreshAccount);
    il2cpp_init_method_metadata(&MethodInfo_Void_RegisterWithEmail);
    il2cpp_init_method_metadata(&MethodInfo_Void_SetKeepSignedIn);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegisterAccountFormActions_b__0_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegisterAccountFormActions_b__0_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegisterAccountFormActions_b__0_2);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"account.openForgotPassword");
    il2cpp_init_method_metadata(&"account.openRegister");
    il2cpp_init_method_metadata(&"account.details");
    il2cpp_init_method_metadata(&"account.goOffline");
    il2cpp_init_method_metadata(&"account.goOnline");
    il2cpp_init_method_metadata(&"account.logout");
    il2cpp_init_method_metadata(&"account.keepSignedIn");
    il2cpp_init_method_metadata(&"account.forgotPassword");
    il2cpp_init_method_metadata(&"account.refresh");
    il2cpp_init_method_metadata(&"account.register.email");
    DAT_05704a47 = '\x01';
  }
  pSVar2 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"account.openRegister",pSVar2,
             (MethodInfo *)0x0);
  pSVar2 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"account.openForgotPassword",pSVar2,
             (MethodInfo *)0x0);
  pSVar2 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"account.keepSignedIn",pSVar2,
             (MethodInfo *)0x0);
  pSVar2 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"account.register.email",pSVar2,
             (MethodInfo *)0x0);
  pSVar2 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"account.forgotPassword",pSVar2,
             (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  actionId = "account.details";
  pSVar2 = *(System_Action_GisketchActionContext__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar2 == (System_Action_GisketchActionContext__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
    System_Action<GisketchActionContext>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_GisketchActionContext__o **)(lVar1 + 8) = pSVar2;
    il2cpp_runtime_glue(lVar1 + 8,pSVar2);
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,actionId,pSVar2,
               (MethodInfo *)0x0);
    pSVar2 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
    System_Action<GisketchActionContext>___ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"account.refresh",pSVar2,
               (MethodInfo *)0x0);
    pSVar2 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
    System_Action<GisketchActionContext>___ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"account.logout",pSVar2,
               (MethodInfo *)0x0);
    pSVar2 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
    System_Action<GisketchActionContext>___ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"account.goOffline",pSVar2,
               (MethodInfo *)0x0);
    pSVar2 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
    System_Action<GisketchActionContext>___ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"account.goOnline",pSVar2,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$SetKeepSignedIn
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__SetKeepSignedIn (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4161400

void Gisketch_Aottg2UI_Game_AottgGameUiActions__SetKeepSignedIn
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_05704a48 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&"true");
    DAT_05704a48 = '\x01';
  }
  if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    uVar2 = 0;
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    uVar2 = System_String__op_Equality
                      (((context.fields.Node)->fields).value,"true",(MethodInfo *)0x0);
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    ApplicationManagers_AccountManager__SetKeepSignedIn(uVar2 & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  ApplicationManagers_AccountManager__SetKeepSignedIn(uVar2 & 0xff,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$SetKeepSignedInFromCheckbox
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__SetKeepSignedInFromCheckbox (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* id, const MethodInfo* method);
// 0x41614a0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__SetKeepSignedInFromCheckbox
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *id,
               MethodInfo *method)

{
  uint uVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05704a49 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    DAT_05704a49 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_00;
  }
  uVar1 = Gisketch_Aottg2UI_Game_AottgGameUiActions__CheckboxValue(context,id,1,in_RDX);
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ApplicationManagers_AccountManager__SetKeepSignedIn(uVar1 & 0xff,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$CheckboxValue
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameUiActions__CheckboxValue (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* id, bool fallback, const MethodInfo* method);
// 0x4161550

bool_conflict
Gisketch_Aottg2UI_Game_AottgGameUiActions__CheckboxValue
          (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *id,
          bool_conflict fallback,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Component_o *__this;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *__this_00;
  System_String_o *a;
  long lVar5;
  
  if (DAT_05704a4a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Toggle___GetComponentsInChildren_Toggle);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704a4a = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return fallback;
  }
  if ((((context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar3 = UnityEngine_GameObject__get_transform(context.fields.GameObject,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
      (pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0),
      pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
     (pSVar4 = UnityEngine_Component__GetComponentsInChildren<object>
                         ((UnityEngine_Component_o *)pUVar3,1,MethodInfo_Toggle___GetComponentsInChildren_Toggle),
     pSVar4 != (System_Object_array *)0x0)) {
    lVar5 = 0;
    while( true ) {
      uVar1 = (uint)pSVar4->max_length;
      if ((int)uVar1 <= (int)(uint)lVar5) {
        return fallback;
      }
      if (uVar1 <= (uint)lVar5) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this = (UnityEngine_Component_o *)pSVar4->m_Items[lVar5];
      if ((__this == (UnityEngine_Component_o *)0x0) ||
         (__this_00 = (UnityEngine_Object_o *)
                      UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_Object_o *)0x0)) break;
      a = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
      lVar5 = lVar5 + 1;
      if ((char)bVar2 != '\0') {
        return CONCAT31((int3)((uint)fallback >> 8),*(char *)&__this[0xc].klass != '\0');
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterWithEmail
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterWithEmail (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4161680

void Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterWithEmail
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o GVar1;
  bool_conflict bVar2;
  uint uVar3;
  Il2CppObject *__this_00;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *a;
  System_String_o *pSVar6;
  undefined8 *puVar7;
  System_Action_bool__string__o *onComplete;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *pMVar8;
  void **ppvVar9;
  MethodInfo *in_R8;
  Il2CppClass *method_00;
  
  if (DAT_05704a4b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegisterWithEmail_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass4_0);
    il2cpp_init_method_metadata(&"MainMenu.Account.CreateAccount");
    il2cpp_init_method_metadata(&"Please enter a display name.");
    il2cpp_init_method_metadata(&"MainMenu.Account.PasswordMismatch");
    il2cpp_init_method_metadata(&"account-register-password");
    il2cpp_init_method_metadata(&"Display name must be 25 characters or fewer.");
    il2cpp_init_method_metadata(&"Creating account...");
    il2cpp_init_method_metadata(&"Create Account");
    il2cpp_init_method_metadata(&"account-register-email");
    il2cpp_init_method_metadata(&"MainMenu.Account.MissingDisplayName");
    il2cpp_init_method_metadata(&"account.registerCta");
    il2cpp_init_method_metadata(&"MainMenu.Account.DisplayNameTooLong");
    il2cpp_init_method_metadata(&"Passwords do not match.");
    il2cpp_init_method_metadata(&"account-register-keep-signed-in");
    il2cpp_init_method_metadata(&"MainMenu.Account.PasswordTooShort");
    il2cpp_init_method_metadata(&"Please enter a valid email.");
    il2cpp_init_method_metadata(&"Password must be at least 8 characters.");
    il2cpp_init_method_metadata(&"warning");
    il2cpp_init_method_metadata(&"MainMenu.Account.InvalidEmail");
    il2cpp_init_method_metadata(&"MainMenu.Account.Registering");
    il2cpp_init_method_metadata(&"account-register-confirm-password");
    il2cpp_init_method_metadata(&"account-register-display-name");
    il2cpp_init_method_metadata(&"information");
    il2cpp_init_method_metadata(&"account.register.email");
    DAT_05704a4b = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass4_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 1);
    ppvVar9 = &__this_00[1].monitor;
    *(undefined4 *)&__this_00[2].monitor = context.fields.Node._0_4_;
    *(undefined4 *)((long)&__this_00[2].monitor + 4) = context.fields.Node._4_4_;
    *(int32_t *)&__this_00[3].klass = context.fields.InputSource;
    *(undefined4 *)((long)&__this_00[3].klass + 4) = context.fields._28_4_;
    *(undefined4 *)&__this_00[1].monitor = context.fields.ElementId._0_4_;
    *(undefined4 *)((long)&__this_00[1].monitor + 4) = context.fields.ElementId._4_4_;
    *(undefined4 *)&__this_00[2].klass = context.fields.GameObject._0_4_;
    *(undefined4 *)((long)&__this_00[2].klass + 4) = context.fields.GameObject._4_4_;
    pMVar8 = (MethodInfo *)0x0;
    il2cpp_runtime_glue(ppvVar9);
    GVar1.fields = *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)&__this_00[1].monitor;
    if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__FindInput(GVar1,"account-register-email",pMVar8);
    if (pSVar4 != (System_String_o *)0x0) {
      pMVar8 = (MethodInfo *)0x0;
      pSVar4 = System_String__Trim(pSVar4,(MethodInfo *)0x0);
      pSVar5 = Gisketch_Aottg2UI_Game_AottgGameUiActions__FindInput
                         ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                          *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)ppvVar9,
                          "account-register-display-name",pMVar8);
      if (pSVar5 != (System_String_o *)0x0) {
        pMVar8 = (MethodInfo *)0x0;
        pSVar5 = System_String__Trim(pSVar5,(MethodInfo *)0x0);
        a = Gisketch_Aottg2UI_Game_AottgGameUiActions__FindInput
                      ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                       *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)ppvVar9,
                       "account-register-password",pMVar8);
        method_00 = __this_00[2].klass;
        pSVar6 = Gisketch_Aottg2UI_Game_AottgGameUiActions__FindInput
                           ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                            *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)ppvVar9,
                            "account-register-confirm-password",pMVar8);
        bVar2 = Gisketch_Aottg2UI_Game_AottgGameUiActions__LooksLikeEmail(pSVar4,pMVar8);
        if ((char)bVar2 == '\0') {
          pMVar8 = extraout_RDX;
          if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
            il2cpp_init_class();
            pMVar8 = extraout_RDX_02;
          }
          puVar7 = &"Please enter a valid email.";
          pSVar4 = "MainMenu.Account.InvalidEmail";
        }
        else {
          bVar2 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
          pMVar8 = extraout_RDX_00;
          if ((char)bVar2 == '\0') {
            if (pSVar5 == (System_String_o *)0x0) goto LAB_04161c62;
            if ((pSVar5->fields)._stringLength < 0x1a) {
              if (a == (System_String_o *)0x0) goto LAB_04161c62;
              if ((a->fields)._stringLength < 8) {
                if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
                  il2cpp_init_class();
                  pMVar8 = extraout_RDX_06;
                }
                puVar7 = &"Password must be at least 8 characters.";
                pSVar4 = "MainMenu.Account.PasswordTooShort";
              }
              else {
                bVar2 = System_String__op_Inequality(a,pSVar6,(MethodInfo *)0x0);
                if ((char)bVar2 == '\0') {
                  bVar2 = Gisketch_Aottg2UI_Game_AottgGameUiActions__TryBeginAccountOperation
                                    (__this,"account.registerCta","MainMenu.Account.Registering","Creating account...",in_R8);
                  if ((char)bVar2 == '\0') {
                    return;
                  }
                  pMVar8 = extraout_RDX_07;
                  if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
                    il2cpp_init_class();
                    pMVar8 = extraout_RDX_08;
                  }
                  pSVar6 = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                                     ("MainMenu.Account.Registering","Creating account...",pMVar8);
                  Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
                            (__this,2,"information","MainMenu.Account.CreateAccount","Create Account",pSVar6,"account.register.email",
                             (MethodInfo *)method_00);
                  pSVar6 = "account-register-keep-signed-in";
                  GVar1.fields = *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)ppvVar9;
                  pMVar8 = extraout_RDX_09;
                  if (DAT_05704a49 == '\0') {
                    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
                    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
                    DAT_05704a49 = '\x01';
                    pMVar8 = extraout_RDX_10;
                  }
                  if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
                    il2cpp_init_class();
                    pMVar8 = extraout_RDX_11;
                  }
                  uVar3 = Gisketch_Aottg2UI_Game_AottgGameUiActions__CheckboxValue
                                    (GVar1,pSVar6,1,pMVar8);
                  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  ApplicationManagers_AccountManager__SetKeepSignedIn
                            (uVar3 & 0xff,(MethodInfo *)0x0);
                  onComplete = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
                  System_Action<bool__object>___ctor();
                  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  ApplicationManagers_AccountManager__Register
                            (pSVar5,pSVar4,a,onComplete,0,(MethodInfo *)0x0);
                  return;
                }
                pMVar8 = extraout_RDX_03;
                if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
                  il2cpp_init_class();
                  pMVar8 = extraout_RDX_04;
                }
                puVar7 = &"Passwords do not match.";
                pSVar4 = "MainMenu.Account.PasswordMismatch";
              }
            }
            else {
              if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
                il2cpp_init_class();
                pMVar8 = extraout_RDX_05;
              }
              puVar7 = &"Display name must be 25 characters or fewer.";
              pSVar4 = "MainMenu.Account.DisplayNameTooLong";
            }
          }
          else {
            if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
              il2cpp_init_class();
              pMVar8 = extraout_RDX_01;
            }
            puVar7 = &"Please enter a display name.";
            pSVar4 = "MainMenu.Account.MissingDisplayName";
          }
        }
        pSVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                           (pSVar4,(System_String_o *)*puVar7,pMVar8);
        Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
                  (__this,1,"warning","MainMenu.Account.CreateAccount","Create Account",pSVar4,(System_String_o *)0x0,
                   (MethodInfo *)method_00);
        return;
      }
    }
  }
LAB_04161c62:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$ForgotPassword
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__ForgotPassword (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x41621c0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__ForgotPassword
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context_00;
  bool_conflict bVar1;
  Il2CppObject *__this_00;
  System_String_o *pSVar2;
  System_String_o *content;
  System_Action_bool__string__o *onComplete;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar3;
  MethodInfo *extraout_RDX_02;
  MethodInfo *in_R8;
  Il2CppClass *method_00;
  
  if (DAT_05704a4c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&MethodInfo_Void__ForgotPassword_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass5_0);
    il2cpp_init_method_metadata(&"MainMenu.Account.SendingReset");
    il2cpp_init_method_metadata(&"account-forgot-email");
    il2cpp_init_method_metadata(&"Please enter a valid email.");
    il2cpp_init_method_metadata(&"warning");
    il2cpp_init_method_metadata(&"MainMenu.Account.InvalidEmail");
    il2cpp_init_method_metadata(&"account.forgotCta");
    il2cpp_init_method_metadata(&"MainMenu.Account.ForgotPasswordTitle");
    il2cpp_init_method_metadata(&"Forgot Password");
    il2cpp_init_method_metadata(&"account.forgotPassword");
    il2cpp_init_method_metadata(&"information");
    il2cpp_init_method_metadata(&"Sending reset email...");
    DAT_05704a4c = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass5_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 1);
    *(undefined4 *)&__this_00[2].monitor = context.fields.Node._0_4_;
    *(undefined4 *)((long)&__this_00[2].monitor + 4) = context.fields.Node._4_4_;
    *(int32_t *)&__this_00[3].klass = context.fields.InputSource;
    *(undefined4 *)((long)&__this_00[3].klass + 4) = context.fields._28_4_;
    *(undefined4 *)&__this_00[1].monitor = context.fields.ElementId._0_4_;
    *(undefined4 *)((long)&__this_00[1].monitor + 4) = context.fields.ElementId._4_4_;
    *(undefined4 *)&__this_00[2].klass = context.fields.GameObject._0_4_;
    *(undefined4 *)((long)&__this_00[2].klass + 4) = context.fields.GameObject._4_4_;
    pMVar3 = (MethodInfo *)0x0;
    il2cpp_runtime_glue(&__this_00[1].monitor);
    method_00 = __this_00[2].klass;
    context_00.fields =
         *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)&__this_00[1].monitor;
    if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = Gisketch_Aottg2UI_Game_AottgGameUiActions__FindInput(context_00,"account-forgot-email",pMVar3);
    if (pSVar2 != (System_String_o *)0x0) {
      pMVar3 = (MethodInfo *)0x0;
      pSVar2 = System_String__Trim(pSVar2,(MethodInfo *)0x0);
      bVar1 = Gisketch_Aottg2UI_Game_AottgGameUiActions__LooksLikeEmail(pSVar2,pMVar3);
      if ((char)bVar1 == '\0') {
        pMVar3 = extraout_RDX;
        if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
          il2cpp_init_class();
          pMVar3 = extraout_RDX_02;
        }
        pSVar2 = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                           ("MainMenu.Account.InvalidEmail","Please enter a valid email.",pMVar3);
        Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
                  (__this,1,"warning","MainMenu.Account.ForgotPasswordTitle","Forgot Password",pSVar2,(System_String_o *)0x0,
                   (MethodInfo *)method_00);
      }
      else {
        bVar1 = Gisketch_Aottg2UI_Game_AottgGameUiActions__TryBeginAccountOperation
                          (__this,"account.forgotCta","MainMenu.Account.SendingReset","Sending reset email...",in_R8);
        if ((char)bVar1 != '\0') {
          pMVar3 = extraout_RDX_00;
          if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
            il2cpp_init_class();
            pMVar3 = extraout_RDX_01;
          }
          content = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                              ("MainMenu.Account.SendingReset","Sending reset email...",pMVar3);
          Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
                    (__this,2,"information","MainMenu.Account.ForgotPasswordTitle","Forgot Password",content,"account.forgotPassword",
                     (MethodInfo *)method_00);
          onComplete = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
          System_Action<bool__object>___ctor();
          if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          ApplicationManagers_AccountManager__ForgotPassword(pSVar2,onComplete,0,(MethodInfo *)0x0);
          return;
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$Logout
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__Logout (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x41624f0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__Logout
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *content;
  System_Action_bool__string__o *onComplete;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  if (DAT_05704a4d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&MethodInfo_Void__Logout_b__6_0);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"account.logoutCta");
    il2cpp_init_method_metadata(&"MainMenu.Account.Logout");
    il2cpp_init_method_metadata(&"Logout");
    il2cpp_init_method_metadata(&"account.logout");
    il2cpp_init_method_metadata(&"Logging out...");
    il2cpp_init_method_metadata(&"information");
    il2cpp_init_method_metadata(&"MainMenu.Account.LoggingOut");
    DAT_05704a4d = '\x01';
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgGameUiActions__TryBeginAccountOperation
                    (__this,"account.logoutCta","MainMenu.Account.LoggingOut","Logging out...",in_R8);
  if ((char)bVar1 != '\0') {
    method_00 = extraout_RDX;
    if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
      il2cpp_init_class();
      method_00 = extraout_RDX_00;
    }
    content = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                        ("MainMenu.Account.LoggingOut","Logging out...",method_00);
    Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
              (__this,2,"information","MainMenu.Account.Logout","Logout",content,"account.logout",
               in_stack_ffffffffffffffe0);
    onComplete = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
    System_Action<bool__object>___ctor();
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ApplicationManagers_AccountManager__Logout(onComplete,0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$RefreshAccount
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccount (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4162690

void Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccount
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar1;
  char cVar2;
  bool_conflict bVar3;
  uint uVar4;
  MethodInfo *pMVar5;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar6;
  System_String_o *content;
  System_Action_bool__string__o *onComplete;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *in_R8;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  if (DAT_05704a4e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&MethodInfo_Void__RefreshAccount_b__7_0);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"MainMenu.Account.NotSignedIn");
    il2cpp_init_method_metadata(&"profile");
    il2cpp_init_method_metadata(&"Not signed in");
    il2cpp_init_method_metadata(&"MainMenu.Account.Refresh");
    il2cpp_init_method_metadata(&"warning");
    il2cpp_init_method_metadata(&"account.refreshCta");
    il2cpp_init_method_metadata(&"Refreshing...");
    il2cpp_init_method_metadata(&"information");
    il2cpp_init_method_metadata(&"account.refresh");
    il2cpp_init_method_metadata(&"MainMenu.Account.Refreshing");
    il2cpp_init_method_metadata(&"Refresh");
    DAT_05704a4e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_041626c0;
LAB_041628d7:
    il2cpp_init_class();
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
    pMVar5 = extraout_RDX_02;
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_041628d7;
LAB_041626c0:
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
    pMVar5 = extraout_RDX;
  }
  if (cVar2 == '\0') {
    if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar5 = extraout_RDX_03;
    }
    content = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                        ("MainMenu.Account.NotSignedIn","Not signed in",pMVar5);
    pMVar5 = (MethodInfo *)0x1;
    Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
              (__this,1,"warning","MainMenu.Account.Refresh","Refresh",content,(System_String_o *)0x0,
               in_stack_ffffffffffffffe0);
    Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(__this,pMVar5);
    return;
  }
  bVar3 = Gisketch_Aottg2UI_Game_AottgGameUiActions__TryBeginAccountOperation
                    (__this,"account.refreshCta","MainMenu.Account.Refreshing","Refreshing...",in_R8);
  if ((char)bVar3 == '\0') {
    return;
  }
  pMVar5 = extraout_RDX_00;
  if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
    il2cpp_init_class();
    pMVar5 = extraout_RDX_01;
  }
  pMVar5 = (MethodInfo *)
           Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText("MainMenu.Account.Refreshing","Refreshing...",pMVar5);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
            (__this,2,"information","MainMenu.Account.Refresh","Refresh",(System_String_o *)pMVar5,"account.refresh",
             in_stack_ffffffffffffffe0);
  pGVar6 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar4 = 0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pGVar6 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
    if (pGVar6 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto LAB_041629bb;
    if ((pGVar6->fields)._Manifest_k__BackingField ==
        (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      uVar4 = 0;
    }
    else {
      pGVar6 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                         ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0
                         );
      if ((pGVar6 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
         (pGVar1 = (pGVar6->fields)._Manifest_k__BackingField,
         pGVar1 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) goto LAB_041629bb;
      uVar4 = System_String__op_Equality
                        ((System_String_o *)(pGVar1->fields).dialogs,"profile",(MethodInfo *)0x0)
      ;
    }
  }
  onComplete = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
  System_Action<bool__object>___ctor();
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshRemoteProfileAndCharacter
              (__this,uVar4 & 0xff,1,onComplete,0,pMVar5);
    return;
  }
LAB_041629bb:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$GoOffline
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__GoOffline (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x41633b0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__GoOffline
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *pMVar3;
  MethodInfo *in_R8;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (DAT_05704a4f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"account.goOffline");
    il2cpp_init_method_metadata(&"Go Offline");
    il2cpp_init_method_metadata(&"MainMenu.Account.OfflineEnabled");
    il2cpp_init_method_metadata(&"Going offline...");
    il2cpp_init_method_metadata(&"information");
    il2cpp_init_method_metadata(&"MainMenu.Account.GoOffline");
    il2cpp_init_method_metadata(&"account.goOfflineCta");
    il2cpp_init_method_metadata(&"MainMenu.Account.GoingOffline");
    il2cpp_init_method_metadata(&"checkmark");
    il2cpp_init_method_metadata(&"Offline mode enabled.");
    DAT_05704a4f = '\x01';
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgGameUiActions__TryBeginAccountOperation
                    (__this,"account.goOfflineCta","MainMenu.Account.GoingOffline","Going offline...",in_R8);
  if ((char)bVar1 != '\0') {
    pMVar3 = extraout_RDX;
    if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar3 = extraout_RDX_00;
    }
    pSVar2 = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                       ("MainMenu.Account.GoingOffline","Going offline...",pMVar3);
    pMVar3 = (MethodInfo *)0x2;
    Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
              (__this,2,"information","MainMenu.Account.GoOffline","Go Offline",pSVar2,"account.goOffline",
               in_stack_ffffffffffffffd0);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ApplicationManagers_AccountManager__GoOffline((MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgGameUiActions__EndAccountOperation(__this,pMVar3);
    Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(__this,pMVar3);
    pSVar2 = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                       ("MainMenu.Account.OfflineEnabled","Offline mode enabled.",method_00);
    Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
              (__this,4,"checkmark","MainMenu.Account.GoOffline","Go Offline",pSVar2,"account.goOffline",
               in_stack_ffffffffffffffd0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$GoOnline
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__GoOnline (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4163610

void Gisketch_Aottg2UI_Game_AottgGameUiActions__GoOnline
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_Action_bool__string__o *onComplete;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar5;
  MethodInfo *in_R8;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (DAT_05704a50 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&MethodInfo_Void__GoOnline_b__9_0);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"MainMenu.Account.NoSavedSession");
    il2cpp_init_method_metadata(&"Go Online");
    il2cpp_init_method_metadata(&"MainMenu.Account.GoingOnline");
    il2cpp_init_method_metadata(&"No saved session. Please sign in.");
    il2cpp_init_method_metadata(&"MainMenu.Account.GoOnline");
    il2cpp_init_method_metadata(&"warning");
    il2cpp_init_method_metadata(&"account.goOnline");
    il2cpp_init_method_metadata(&"information");
    il2cpp_init_method_metadata(&"account.goOnlineCta");
    il2cpp_init_method_metadata(&"Going online...");
    DAT_05704a50 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = ApplicationManagers_AccountManager__get_HasRefreshToken((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
    pMVar5 = extraout_RDX_02;
  }
  else {
    bVar3 = ApplicationManagers_AccountManager__get_HasRefreshToken((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
    pMVar5 = extraout_RDX;
  }
  if (cVar2 != '\0') {
    bVar3 = Gisketch_Aottg2UI_Game_AottgGameUiActions__TryBeginAccountOperation
                      (__this,"account.goOnlineCta","MainMenu.Account.GoingOnline","Going online...",in_R8);
    if ((char)bVar3 == '\0') {
      return;
    }
    pMVar5 = extraout_RDX_00;
    if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar5 = extraout_RDX_01;
    }
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                       ("MainMenu.Account.GoingOnline","Going online...",pMVar5);
    Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
              (__this,2,"information","MainMenu.Account.GoOnline","Go Online",pSVar4,"account.goOnline",
               in_stack_ffffffffffffffd0);
    onComplete = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
    System_Action<bool__object>___ctor();
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ApplicationManagers_AccountManager__GoOnline(onComplete,0,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
    il2cpp_init_class();
    pMVar5 = extraout_RDX_03;
  }
  pSVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText("MainMenu.Account.NoSavedSession","No saved session. Please sign in.",pMVar5);
  pMVar5 = (MethodInfo *)0x1;
  Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
            (__this,1,"warning","MainMenu.Account.GoOnline","Go Online",pSVar4,(System_String_o *)0x0,
             in_stack_ffffffffffffffd0);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(__this,pMVar5);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenAccountDetails
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__OpenAccountDetails (const MethodInfo* method);
// 0x41638a0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__OpenAccountDetails(MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  long lVar2;
  UI_ExternalLinkPopup_o *__this;
  bool_conflict bVar3;
  System_String_o *url;
  
  if (DAT_05704a51 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05704a51 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  url = ApplicationManagers_AccountManager__GetWebLoginUrlWithSession((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar1 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (lVar2 != 0) {
      pUVar1 = *(UnityEngine_Object_o **)(lVar2 + 0x40);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        (pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') goto LAB_041639ed;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if ((lVar2 != 0) &&
         (__this = *(UI_ExternalLinkPopup_o **)(lVar2 + 0x40),
         __this != (UI_ExternalLinkPopup_o *)0x0)) {
        UI_ExternalLinkPopup__Show(__this,url,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_041639ed:
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Application__OpenURL(url,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$ResetAccountCtas
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__ResetAccountCtas (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4163a20

void Gisketch_Aottg2UI_Game_AottgGameUiActions__ResetAccountCtas
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  
  if (DAT_05704a52 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"MainMenu.Account.CreateAccount");
    il2cpp_init_method_metadata(&"MainMenu.Account.SignIn");
    il2cpp_init_method_metadata(&"Go Online");
    il2cpp_init_method_metadata(&"account.logoutCta");
    il2cpp_init_method_metadata(&"Create Account");
    il2cpp_init_method_metadata(&"MainMenu.Account.Logout");
    il2cpp_init_method_metadata(&"account.registerCta");
    il2cpp_init_method_metadata(&"MainMenu.Account.Refresh");
    il2cpp_init_method_metadata(&"Send Reset Link");
    il2cpp_init_method_metadata(&"Logout");
    il2cpp_init_method_metadata(&"MainMenu.Account.GoOnline");
    il2cpp_init_method_metadata(&"account.refreshCta");
    il2cpp_init_method_metadata(&"Go Offline");
    il2cpp_init_method_metadata(&"account.forgotCta");
    il2cpp_init_method_metadata(&"Sign In");
    il2cpp_init_method_metadata(&"account.loginCta");
    il2cpp_init_method_metadata(&"MainMenu.Account.GoOffline");
    il2cpp_init_method_metadata(&"account.goOfflineCta");
    il2cpp_init_method_metadata(&"MainMenu.Account.SendResetLink");
    il2cpp_init_method_metadata(&"account.goOnlineCta");
    il2cpp_init_method_metadata(&"Refresh");
    DAT_05704a52 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
      il2cpp_init_class();
      method_00 = extraout_RDX_00;
    }
    pSVar2 = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                       ("MainMenu.Account.SignIn","Sign In",method_00);
    if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar1,"account.loginCta",pSVar2,(MethodInfo *)0x0);
      pGVar1 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                         ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0
                         );
      pSVar2 = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                         ("MainMenu.Account.CreateAccount","Create Account",method_01);
      if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar1,"account.registerCta",pSVar2,(MethodInfo *)0x0);
        pGVar1 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                           ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                            (MethodInfo *)0x0);
        pSVar2 = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                           ("MainMenu.Account.SendResetLink","Send Reset Link",method_02);
        if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar1,"account.forgotCta",pSVar2,(MethodInfo *)0x0)
          ;
          pGVar1 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                             ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                              (MethodInfo *)0x0);
          pSVar2 = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                             ("MainMenu.Account.Logout","Logout",method_03);
          if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
            Gisketch_Aottg2UI_State_GisketchUIState__Set
                      (pGVar1,"account.logoutCta",pSVar2,(MethodInfo *)0x0);
            pGVar1 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                               ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                                (MethodInfo *)0x0);
            pSVar2 = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                               ("MainMenu.Account.Refresh","Refresh",method_04);
            if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
              Gisketch_Aottg2UI_State_GisketchUIState__Set
                        (pGVar1,"account.refreshCta",pSVar2,(MethodInfo *)0x0);
              pGVar1 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                                 ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                                  (MethodInfo *)0x0);
              pSVar2 = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                                 ("MainMenu.Account.GoOffline","Go Offline",method_05);
              if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                Gisketch_Aottg2UI_State_GisketchUIState__Set
                          (pGVar1,"account.goOfflineCta",pSVar2,(MethodInfo *)0x0);
                pGVar1 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                                   ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                                    (MethodInfo *)0x0);
                pSVar2 = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                                   ("MainMenu.Account.GoOnline","Go Online",method_06);
                if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                  Gisketch_Aottg2UI_State_GisketchUIState__Set
                            (pGVar1,"account.goOnlineCta",pSVar2,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$SetAccountCta
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__SetAccountCta (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, System_String_o* key, System_String_o* text, const MethodInfo* method);
// 0x4163d70

void Gisketch_Aottg2UI_Game_AottgGameUiActions__SetAccountCta
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,System_String_o *key,
               System_String_o *text,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  
  pGVar2 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pGVar2 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                         ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0
                         );
      if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar2,key,text,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$TryBeginAccountOperation
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameUiActions__TryBeginAccountOperation (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, System_String_o* ctaKey, System_String_o* textKey, System_String_o* fallback, const MethodInfo* method);
// 0x4162100

bool_conflict
Gisketch_Aottg2UI_Game_AottgGameUiActions__TryBeginAccountOperation
          (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,System_String_o *ctaKey,
          System_String_o *textKey,System_String_o *fallback,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  System_String_o *message;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)textKey;
  if (DAT_05704a53 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    DAT_05704a53 = '\x01';
    method_00 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_00;
  }
  message = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText(textKey,fallback,method_00);
  bVar1 = Gisketch_Aottg2UI_Game_AottgGameUiActions__TryBeginAccountOperation
                    (__this,message,method_01);
  if ((char)bVar1 == '\0') {
    bVar1 = 0;
  }
  else {
    pGVar3 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
    bVar1 = (bool_conflict)CONCAT71((int7)((ulong)fallback >> 8),1);
    if (pGVar3 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      bVar2 = System_String__IsNullOrEmpty(ctaKey,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        pGVar3 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                           ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                            (MethodInfo *)0x0);
        if (pGVar3 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar3,ctaKey,message,(MethodInfo *)0x0);
      }
    }
  }
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$TryBeginAccountOperation
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameUiActions__TryBeginAccountOperation (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, System_String_o* textKey, System_String_o* fallback, const MethodInfo* method);
// 0x4163e70

bool_conflict
Gisketch_Aottg2UI_Game_AottgGameUiActions__TryBeginAccountOperation
          (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,System_String_o *textKey,
          System_String_o *fallback,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *message;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)fallback;
  if (DAT_05704a54 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    DAT_05704a54 = '\x01';
    method_00 = extraout_RDX;
  }
  if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_00;
  }
  message = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText(textKey,fallback,method_00);
  bVar1 = Gisketch_Aottg2UI_Game_AottgGameUiActions__TryBeginAccountOperation
                    (__this,message,method_01);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$TryBeginAccountOperation
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameUiActions__TryBeginAccountOperation (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, System_String_o* message, const MethodInfo* method);
// 0x4163dd0

bool_conflict
Gisketch_Aottg2UI_Game_AottgGameUiActions__TryBeginAccountOperation
          (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,System_String_o *message,
          MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  bool_conflict bVar3;
  
  if (DAT_05704a55 == '\0') {
    il2cpp_init_method_metadata(&"account.auth.operation");
    il2cpp_init_method_metadata(&"account.auth.message");
    DAT_05704a55 = '\x01';
  }
  bVar3 = 0;
  bVar1 = Gisketch_Aottg2UI_Actions_GisketchController__TryBeginOperation
                    ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"account.auth.operation",message,
                     (MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pGVar2 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
    bVar3 = 1;
    if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      pGVar2 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                         ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0
                         );
      if (pGVar2 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar2,"account.auth.message",message,(MethodInfo *)0x0);
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$EndAccountOperation
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__EndAccountOperation (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4163570

void Gisketch_Aottg2UI_Game_AottgGameUiActions__EndAccountOperation
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  
  if (DAT_05704a56 == '\0') {
    il2cpp_init_method_metadata(&"account.auth.operation");
    il2cpp_init_method_metadata(&"account.auth.message");
    DAT_05704a56 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__ResetAccountCtas(__this,method);
  Gisketch_Aottg2UI_Actions_GisketchController__EndOperation
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"account.auth.operation",(MethodInfo *)0x0
            );
  pGVar1 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__Set
                (pGVar1,"account.auth.message",(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                 (MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterAccountActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterAccountActions (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4163ed0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterAccountActions
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  System_Action_GisketchActionContext__o *pSVar1;
  MethodInfo *method_00;
  
  if (DAT_05704a57 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
    il2cpp_init_method_metadata(&MethodInfo_Void_LoginWithEmail);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegisterAccountActions_b__28_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegisterAccountActions_b__28_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegisterAccountActions_b__28_2);
    il2cpp_init_method_metadata(&"account.login.discord");
    il2cpp_init_method_metadata(&"account.login.email");
    il2cpp_init_method_metadata(&"account.login.google");
    il2cpp_init_method_metadata(&"account.openLogin");
    DAT_05704a57 = '\x01';
  }
  pSVar1 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"account.openLogin",pSVar1,
             (MethodInfo *)0x0);
  pSVar1 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"account.login.email",pSVar1,
             (MethodInfo *)0x0);
  pSVar1 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"account.login.discord",pSVar1,
             (MethodInfo *)0x0);
  pSVar1 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  method_00 = "account.login.google";
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
             (System_String_o *)"account.login.google",pSVar1,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterAccountFormActions(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$AddAccountListeners
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__AddAccountListeners (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4164050

void Gisketch_Aottg2UI_Game_AottgGameUiActions__AddAccountListeners
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if (DAT_05704a58 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnAccountLoggedIn);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnAccountLoggedOut);
    il2cpp_init_method_metadata(&MethodInfo_Void_RefreshAccountState);
    DAT_05704a58 = '\x01';
  }
  pSVar1 = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ApplicationManagers_AccountManager__add_OnLoggedIn(pSVar1,(MethodInfo *)0x0);
  pSVar1 = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  ApplicationManagers_AccountManager__add_OnLoggedOut(pSVar1,(MethodInfo *)0x0);
  pSVar1 = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  ApplicationManagers_AccountManager__add_OnAuthMethodsChanged(pSVar1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$RemoveAccountListeners
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__RemoveAccountListeners (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4164150

void Gisketch_Aottg2UI_Game_AottgGameUiActions__RemoveAccountListeners
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if (DAT_05704a59 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnAccountLoggedIn);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnAccountLoggedOut);
    il2cpp_init_method_metadata(&MethodInfo_Void_RefreshAccountState);
    DAT_05704a59 = '\x01';
  }
  pSVar1 = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ApplicationManagers_AccountManager__remove_OnLoggedIn(pSVar1,(MethodInfo *)0x0);
  pSVar1 = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  ApplicationManagers_AccountManager__remove_OnLoggedOut(pSVar1,(MethodInfo *)0x0);
  pSVar1 = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  ApplicationManagers_AccountManager__remove_OnAuthMethodsChanged(pSVar1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$StartAccountActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__StartAccountActions (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4164250

void Gisketch_Aottg2UI_Game_AottgGameUiActions__StartAccountActions
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  System_Action_bool__string__o *onComplete;
  
  if (DAT_05704a5a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&MethodInfo_Void__StartAccountActions_b__31_0);
    DAT_05704a5a = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(__this,method);
  onComplete = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
  System_Action<bool__object>___ctor();
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ApplicationManagers_AccountManager__RefreshAuthMethods(onComplete,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$LateUpdateAccountActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__LateUpdateAccountActions (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x41642f0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__LateUpdateAccountActions
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar1;
  char cVar2;
  uint uVar3;
  bool_conflict bVar4;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar5;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar6;
  byte bVar7;
  MethodInfo *pMVar8;
  bool bVar9;
  
  if (DAT_05704a5b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"profile");
    il2cpp_init_method_metadata(&"account.ready");
    DAT_05704a5b = '\x01';
    if (*(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4) == 0) goto LAB_041644b5;
LAB_0416431c:
    uVar3 = Gisketch_Aottg2UI_Game_AottgGameUiActions__IsAccountAuthLoading(TypeInfo_AottgGameUiActions);
    if (DAT_05704a63 != '\0') goto LAB_04164330;
LAB_041644ce:
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    DAT_05704a63 = '\x01';
    if (*(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4) == 0) goto LAB_041644f1;
LAB_04164340:
    bVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__IsAccountAuthLoading(TypeInfo_AottgGameUiActions);
    cVar2 = (char)bVar4;
  }
  else {
    if (*(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4) != 0) goto LAB_0416431c;
LAB_041644b5:
    pMVar8 = TypeInfo_AottgGameUiActions;
    il2cpp_init_class();
    uVar3 = Gisketch_Aottg2UI_Game_AottgGameUiActions__IsAccountAuthLoading(pMVar8);
    if (DAT_05704a63 == '\0') goto LAB_041644ce;
LAB_04164330:
    if (*(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4) != 0) goto LAB_04164340;
LAB_041644f1:
    pMVar8 = TypeInfo_AottgGameUiActions;
    il2cpp_init_class();
    bVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__IsAccountAuthLoading(pMVar8);
    cVar2 = (char)bVar4;
  }
  bVar7 = 1;
  if (cVar2 == '\0') {
    bVar7 = *(byte *)((long)&(__this->fields)._authMethodsUnavailable + 3);
  }
  bVar9 = true;
  if ((uVar3 & 0xff) == (uint)*(byte *)((long)&(__this->fields)._authMethodsUnavailable + 1)) {
    bVar9 = (bVar7 ^ *(byte *)((long)&(__this->fields)._authMethodsUnavailable + 2)) == 1;
  }
  pGVar5 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pGVar5 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
    if (pGVar5 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto LAB_0416450d;
    pMVar8 = "account.ready";
    bVar4 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                      (pGVar5,(System_String_o *)"account.ready",0,(MethodInfo *)0x0);
    if (((byte)((byte)bVar4 ^ 1 | bVar9) == 1) &&
       (Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(__this,pMVar8),
       bVar9 != false)) {
      pGVar6 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                         ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0
                         );
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pGVar6 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                           ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                            (MethodInfo *)0x0);
        if (pGVar6 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
LAB_0416450d:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((pGVar6->fields)._Manifest_k__BackingField !=
            (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
          pGVar6 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                             ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                              (MethodInfo *)0x0);
          if ((pGVar6 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
             (pGVar1 = (pGVar6->fields)._Manifest_k__BackingField,
             pGVar1 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0))
          goto LAB_0416450d;
          pMVar8 = "profile";
          bVar4 = System_String__op_Equality
                            ((System_String_o *)(pGVar1->fields).dialogs,
                             (System_String_o *)"profile",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshProfileState(__this,pMVar8);
            return;
          }
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenLoginDialog
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__OpenLoginDialog (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x41658e0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__OpenLoginDialog
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if (DAT_05704a5c == '\0') {
    il2cpp_init_method_metadata(&"main-menu-login");
    DAT_05704a5c = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__ShowAccountDialog(__this,"main-menu-login",0,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$RefreshAuthMethodsForDialog
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAuthMethodsForDialog (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4165b20

void Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAuthMethodsForDialog
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  System_Action_bool__string__o *onComplete;
  
  if (DAT_05704a5d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&MethodInfo_Void__RefreshAuthMethodsForDialog_b__34_0);
    DAT_05704a5d = '\x01';
  }
  onComplete = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
  System_Action<bool__object>___ctor();
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ApplicationManagers_AccountManager__RefreshAuthMethods(onComplete,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$ShowAccountDialog
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__ShowAccountDialog (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, System_String_o* dialogId, bool requireEmailPassword, const MethodInfo* method);
// 0x4165920

void Gisketch_Aottg2UI_Game_AottgGameUiActions__ShowAccountDialog
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,System_String_o *dialogId,
               bool_conflict requireEmailPassword,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  System_String_o *content;
  System_Action_bool__string__o *onComplete;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar3;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  if (DAT_05704a5e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"MainMenu.Account.SignIn");
    il2cpp_init_method_metadata(&"account.auth.operation");
    il2cpp_init_method_metadata(&"warning");
    il2cpp_init_method_metadata(&"email_password");
    il2cpp_init_method_metadata(&"Email sign-in is unavailable right now.");
    il2cpp_init_method_metadata(&"Sign In");
    il2cpp_init_method_metadata(&"MainMenu.Account.EmailPasswordUnavailable");
    DAT_05704a5e = '\x01';
  }
  pMVar3 = "account.auth.operation";
  bVar1 = Gisketch_Aottg2UI_Actions_GisketchController__IsOperationActive
                    ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                     (System_String_o *)"account.auth.operation",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if ((char)requireEmailPassword != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar3 = (MethodInfo *)0x0;
    bVar1 = ApplicationManagers_AccountManager__IsAuthMethodEnabled("email_password",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pMVar3 = extraout_RDX;
      if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar3 = extraout_RDX_00;
      }
      content = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                          ("MainMenu.Account.EmailPasswordUnavailable","Email sign-in is unavailable right now.",pMVar3);
      Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
                (__this,1,"warning","MainMenu.Account.SignIn","Sign In",content,(System_String_o *)0x0,
                 in_stack_ffffffffffffffe0);
      return;
    }
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__CloseTopOverlay(__this,pMVar3);
  pGVar2 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pGVar2 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
    if (pGVar2 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
LAB_04165b14:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pGVar2->fields)._Theme_k__BackingField != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
    {
      pGVar2 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                         ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0
                         );
      if ((pGVar2 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
         (__this_00 = (pGVar2->fields)._Theme_k__BackingField,
         __this_00 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) goto LAB_04165b14;
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,dialogId,1,
                 (MethodInfo *)0x0);
    }
  }
  if (DAT_05704a5d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&MethodInfo_Void__RefreshAuthMethodsForDialog_b__34_0);
    DAT_05704a5d = '\x01';
  }
  onComplete = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
  System_Action<bool__object>___ctor();
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ApplicationManagers_AccountManager__RefreshAuthMethods(onComplete,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$LoginWithEmail
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__LoginWithEmail (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4165c60

void Gisketch_Aottg2UI_Game_AottgGameUiActions__LoginWithEmail
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o GVar1;
  bool_conflict bVar2;
  uint uVar3;
  Il2CppObject *__this_00;
  System_String_o *pSVar4;
  System_String_o *value;
  undefined8 *puVar5;
  System_String_o *pSVar6;
  System_Action_bool__string__o *onComplete;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *pMVar7;
  void **ppvVar8;
  MethodInfo *in_R8;
  Il2CppClass *method_00;
  
  if (DAT_05704a5f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&MethodInfo_Void__LoginWithEmail_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass36_0);
    il2cpp_init_method_metadata(&"Please enter your password.");
    il2cpp_init_method_metadata(&"MainMenu.Account.Login");
    il2cpp_init_method_metadata(&"account-login-keep-signed-in");
    il2cpp_init_method_metadata(&"MainMenu.Account.SignIn");
    il2cpp_init_method_metadata(&"Login");
    il2cpp_init_method_metadata(&"MainMenu.Account.SigningIn");
    il2cpp_init_method_metadata(&"account.login");
    il2cpp_init_method_metadata(&"account-login-email");
    il2cpp_init_method_metadata(&"account-login-password");
    il2cpp_init_method_metadata(&"MainMenu.Account.MissingPassword");
    il2cpp_init_method_metadata(&"Please enter a valid email.");
    il2cpp_init_method_metadata(&"warning");
    il2cpp_init_method_metadata(&"MainMenu.Account.InvalidEmail");
    il2cpp_init_method_metadata(&"Sign In");
    il2cpp_init_method_metadata(&"information");
    il2cpp_init_method_metadata(&"account.loginCta");
    il2cpp_init_method_metadata(&"Signing in...");
    DAT_05704a5f = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass36_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 1);
    ppvVar8 = &__this_00[1].monitor;
    *(undefined4 *)&__this_00[2].monitor = context.fields.Node._0_4_;
    *(undefined4 *)((long)&__this_00[2].monitor + 4) = context.fields.Node._4_4_;
    *(int32_t *)&__this_00[3].klass = context.fields.InputSource;
    *(undefined4 *)((long)&__this_00[3].klass + 4) = context.fields._28_4_;
    *(undefined4 *)&__this_00[1].monitor = context.fields.ElementId._0_4_;
    *(undefined4 *)((long)&__this_00[1].monitor + 4) = context.fields.ElementId._4_4_;
    *(undefined4 *)&__this_00[2].klass = context.fields.GameObject._0_4_;
    *(undefined4 *)((long)&__this_00[2].klass + 4) = context.fields.GameObject._4_4_;
    pMVar7 = (MethodInfo *)0x0;
    il2cpp_runtime_glue(ppvVar8);
    GVar1.fields = *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)&__this_00[1].monitor;
    if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__FindInput(GVar1,"account-login-email",pMVar7);
    method_00 = __this_00[2].klass;
    value = Gisketch_Aottg2UI_Game_AottgGameUiActions__FindInput
                      ((Gisketch_Aottg2UI_Actions_GisketchActionContext_o)
                       *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)ppvVar8,
                       "account-login-password",pMVar7);
    bVar2 = Gisketch_Aottg2UI_Game_AottgGameUiActions__LooksLikeEmail(pSVar4,pMVar7);
    if ((char)bVar2 == '\0') {
      pMVar7 = extraout_RDX;
      if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar7 = extraout_RDX_02;
      }
      puVar5 = &"Please enter a valid email.";
      pSVar4 = "MainMenu.Account.InvalidEmail";
    }
    else {
      bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        bVar2 = Gisketch_Aottg2UI_Game_AottgGameUiActions__TryBeginAccountOperation
                          (__this,"account.loginCta","MainMenu.Account.SigningIn","Signing in...",in_R8);
        if ((char)bVar2 == '\0') {
          return;
        }
        pMVar7 = extraout_RDX_03;
        if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
          il2cpp_init_class();
          pMVar7 = extraout_RDX_04;
        }
        pSVar6 = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                           ("MainMenu.Account.SigningIn","Signing in...",pMVar7);
        Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
                  (__this,2,"information","MainMenu.Account.SignIn","Sign In",pSVar6,"account.login",
                   (MethodInfo *)method_00);
        pSVar6 = "account-login-keep-signed-in";
        GVar1.fields = *(Gisketch_Aottg2UI_Actions_GisketchActionContext_Fields *)ppvVar8;
        pMVar7 = extraout_RDX_05;
        if (DAT_05704a49 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_AccountManager);
          il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
          DAT_05704a49 = '\x01';
          pMVar7 = extraout_RDX_06;
        }
        if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
          il2cpp_init_class();
          pMVar7 = extraout_RDX_07;
        }
        uVar3 = Gisketch_Aottg2UI_Game_AottgGameUiActions__CheckboxValue(GVar1,pSVar6,1,pMVar7);
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        ApplicationManagers_AccountManager__SetKeepSignedIn(uVar3 & 0xff,(MethodInfo *)0x0);
        if (pSVar4 != (System_String_o *)0x0) {
          pSVar4 = System_String__Trim(pSVar4,(MethodInfo *)0x0);
          onComplete = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
          System_Action<bool__object>___ctor();
          if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          ApplicationManagers_AccountManager__Login(pSVar4,value,onComplete,0,(MethodInfo *)0x0);
          return;
        }
        goto LAB_041660c1;
      }
      pMVar7 = extraout_RDX_00;
      if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar7 = extraout_RDX_01;
      }
      puVar5 = &"Please enter your password.";
      pSVar4 = "MainMenu.Account.MissingPassword";
    }
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                       (pSVar4,(System_String_o *)*puVar5,pMVar7);
    Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
              (__this,1,"warning","MainMenu.Account.Login","Login",pSVar4,(System_String_o *)0x0,
               (MethodInfo *)method_00);
    return;
  }
LAB_041660c1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$LoginWithOAuth
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__LoginWithOAuth (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, System_String_o* provider, const MethodInfo* method);
// 0x41660e0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__LoginWithOAuth
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,System_String_o *provider,
               MethodInfo *method)

{
  Il2CppObject *arg0;
  bool_conflict bVar1;
  undefined8 *puVar2;
  System_String_o *pSVar3;
  System_Action_bool__string__o *onComplete;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  if (DAT_05704a60 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&MethodInfo_Void__LoginWithOAuth_b__37_0);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"MainMenu.Account.SignIn");
    il2cpp_init_method_metadata(&"Discord");
    il2cpp_init_method_metadata(&"account.login");
    il2cpp_init_method_metadata(&"Opening {0} sign-in...");
    il2cpp_init_method_metadata(&"Sign In");
    il2cpp_init_method_metadata(&"information");
    il2cpp_init_method_metadata(&"discord");
    il2cpp_init_method_metadata(&"Google");
    il2cpp_init_method_metadata(&"MainMenu.Account.OpeningProvider");
    DAT_05704a60 = '\x01';
  }
  bVar1 = System_String__op_Equality(provider,"discord",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    puVar2 = &"Google";
  }
  else {
    puVar2 = &"Discord";
  }
  arg0 = (Il2CppObject *)*puVar2;
  method_00 = extraout_RDX;
  if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_00;
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                     ("MainMenu.Account.OpeningProvider","Opening {0} sign-in...",method_00);
  pSVar3 = System_String__Format(pSVar3,arg0,(MethodInfo *)0x0);
  bVar1 = Gisketch_Aottg2UI_Game_AottgGameUiActions__TryBeginAccountOperation
                    (__this,pSVar3,method_01);
  if ((char)bVar1 != '\0') {
    Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
              (__this,2,"information","MainMenu.Account.SignIn","Sign In",pSVar3,"account.login",
               in_stack_ffffffffffffffe0);
    onComplete = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
    System_Action<bool__object>___ctor();
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ApplicationManagers_AccountManager__LoginWithOAuth(provider,onComplete,0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$RefreshAccountState
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x41629c0

/* WARNING: Type propagation algorithm not settling */

void Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  bool_conflict bVar5;
  uint uVar6;
  uint uVar7;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar8;
  System_String_o *pSVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  uint value;
  uint uVar10;
  uint value_00;
  MethodInfo *pMVar11;
  byte bVar12;
  byte bVar13;
  bool bVar14;
  uint local_4c;
  
  if (DAT_05704a61 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"google");
    il2cpp_init_method_metadata(&"account.ingameDisplayName");
    il2cpp_init_method_metadata(&"account.onlineMode");
    il2cpp_init_method_metadata(&"account.methodsUnavailable");
    il2cpp_init_method_metadata(&"account.showLoginDivider");
    il2cpp_init_method_metadata(&"account.loggedOut");
    il2cpp_init_method_metadata(&"account.auth.operation");
    il2cpp_init_method_metadata(&"account.auth.busy");
    il2cpp_init_method_metadata(&"account.identity.ready");
    il2cpp_init_method_metadata(&"account.canDiscord");
    il2cpp_init_method_metadata(&"account.auth.loading");
    il2cpp_init_method_metadata(&"account-auth-display-name");
    il2cpp_init_method_metadata(&"account.identity.loading");
    il2cpp_init_method_metadata(&"email_password");
    il2cpp_init_method_metadata(&"account.loggedIn");
    il2cpp_init_method_metadata(&"account-ingame-display-name");
    il2cpp_init_method_metadata(&"account.ready");
    il2cpp_init_method_metadata(&"account.canEmailPassword");
    il2cpp_init_method_metadata(&"account.authDisplayName");
    il2cpp_init_method_metadata(&"discord");
    il2cpp_init_method_metadata(&"account.canGoogle");
    il2cpp_init_method_metadata(&"account.offlineMode");
    il2cpp_init_method_metadata(&"account.auth.idle");
    il2cpp_init_method_metadata(&"account.noMethods");
    DAT_05704a61 = '\x01';
  }
  pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    bVar12 = (byte)uVar3;
    if (*(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4) == 0) {
      pMVar11 = TypeInfo_AottgGameUiActions;
      il2cpp_init_class();
      uVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__IsAccountAuthLoading(pMVar11);
    }
    else {
      uVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__IsAccountAuthLoading(TypeInfo_AottgGameUiActions);
    }
    if (DAT_05704a63 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
      DAT_05704a63 = '\x01';
      iVar1 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
      pMVar11 = TypeInfo_AottgGameUiActions;
    }
    else {
      iVar1 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
      pMVar11 = TypeInfo_AottgGameUiActions;
    }
    TypeInfo_AottgGameUiActions = pMVar11;
    if (iVar1 == 0) {
      il2cpp_init_class();
      bVar5 = Gisketch_Aottg2UI_Game_AottgGameUiActions__IsAccountAuthLoading(pMVar11);
      cVar2 = (char)bVar5;
    }
    else {
      bVar5 = Gisketch_Aottg2UI_Game_AottgGameUiActions__IsAccountAuthLoading(pMVar11);
      cVar2 = (char)bVar5;
    }
    if (cVar2 == '\0') {
      bVar14 = *(char *)((long)&(__this->fields)._authMethodsUnavailable + 3) != '\0';
    }
    else {
      bVar14 = true;
    }
    value = 0;
    bVar13 = (byte)uVar4;
    if (bVar12 == 0) {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      value = 0;
      bVar5 = ApplicationManagers_AccountManager__get_HasRefreshToken((MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        value = (uint)(bVar13 ^ 1);
      }
    }
    uVar10 = 0;
    uVar7 = 0;
    local_4c = 0;
    uVar6 = 0;
    if ((char)(__this->fields)._authMethodsUnavailable == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar7 = 0;
      local_4c = ApplicationManagers_AccountManager__IsAuthMethodEnabled
                           ("email_password",(MethodInfo *)0x0);
      if ((char)(__this->fields)._authMethodsUnavailable == '\0') {
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        uVar6 = 0;
        uVar7 = ApplicationManagers_AccountManager__IsAuthMethodEnabled
                          ("discord",(MethodInfo *)0x0);
        uVar10 = uVar7 & 0xff;
        if ((char)(__this->fields)._authMethodsUnavailable == '\0') {
          if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          uVar6 = ApplicationManagers_AccountManager__IsAuthMethodEnabled
                            ("google",(MethodInfo *)0x0);
          uVar6 = uVar6 & 0xff;
        }
      }
      else {
        uVar10 = 0;
        uVar6 = 0;
      }
    }
    bVar5 = Gisketch_Aottg2UI_Actions_GisketchController__IsOperationActive
                      ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"account.auth.operation",
                       (MethodInfo *)0x0);
    *(byte *)((long)&(__this->fields)._authMethodsUnavailable + 1) = bVar13;
    *(bool *)((long)&(__this->fields)._authMethodsUnavailable + 2) = bVar14;
    pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar8,"account.ready",1,(MethodInfo *)0x0);
      pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                         ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0
                         );
      if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        value_00 = 0;
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                  (pGVar8,"account.loggedIn",uVar3 & 0xff,(MethodInfo *)0x0);
        pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                           ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                            (MethodInfo *)0x0);
        if (bVar12 == 0) {
          value_00 = (uint)(~bVar13 & value == 0);
        }
        if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    (pGVar8,"account.loggedOut",value_00,(MethodInfo *)0x0);
          pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                             ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                              (MethodInfo *)0x0);
          if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                      (pGVar8,"account.offlineMode",value,(MethodInfo *)0x0);
            pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                               ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                                (MethodInfo *)0x0);
            if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
              Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                        (pGVar8,"account.onlineMode",(uint)(bVar12 | bVar13),(MethodInfo *)0x0);
              pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                                 ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                                  (MethodInfo *)0x0);
              if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                          (pGVar8,"account.auth.loading",uVar4 & 0xff,(MethodInfo *)0x0);
                pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                                   ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                                    (MethodInfo *)0x0);
                if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                  Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                            (pGVar8,"account.identity.loading",(uint)bVar14,(MethodInfo *)0x0);
                  pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                                      (MethodInfo *)0x0);
                  if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                              (pGVar8,"account.identity.ready",(uint)(bVar14 ^ 1),(MethodInfo *)0x0);
                    pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                                        (MethodInfo *)0x0);
                    if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                      bVar13 = bVar13 | (byte)bVar5;
                      Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                                (pGVar8,"account.auth.busy",(uint)bVar13,(MethodInfo *)0x0);
                      pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                                         ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                                          (MethodInfo *)0x0);
                      if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                        pMVar11 = "account.auth.idle";
                        Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                                  (pGVar8,(System_String_o *)"account.auth.idle",bVar13 ^ 1,
                                   (MethodInfo *)0x0);
                        if (bVar13 == 0) {
                          Gisketch_Aottg2UI_Game_AottgGameUiActions__ResetAccountCtas
                                    (__this,pMVar11);
                        }
                        pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                                           ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this
                                            ,(MethodInfo *)0x0);
                        if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                                    (pGVar8,"account.canEmailPassword",local_4c & 0xff,(MethodInfo *)0x0);
                          pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                                             ((Gisketch_Aottg2UI_Actions_GisketchController_o *)
                                              __this,(MethodInfo *)0x0);
                          if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                            Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                                      (pGVar8,"account.canDiscord",uVar7 & 0xff,(MethodInfo *)0x0);
                            pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                                               ((Gisketch_Aottg2UI_Actions_GisketchController_o *)
                                                __this,(MethodInfo *)0x0);
                            if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                              Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                                        (pGVar8,"account.canGoogle",uVar6,(MethodInfo *)0x0);
                              pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                                                 ((Gisketch_Aottg2UI_Actions_GisketchController_o *)
                                                  __this,(MethodInfo *)0x0);
                              if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                                uVar3 = 0;
                                Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                                          (pGVar8,"account.showLoginDivider",
                                           (uint)((uVar10 != 0 || uVar6 != 0) & (byte)local_4c),
                                           (MethodInfo *)0x0);
                                pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                                                   ((Gisketch_Aottg2UI_Actions_GisketchController_o
                                                     *)__this,(MethodInfo *)0x0);
                                if ((byte)local_4c == 0) {
                                  uVar3 = (uint)(((byte)uVar7 ^ 1) & uVar6 == 0);
                                }
                                if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                                  Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                                            (pGVar8,"account.noMethods",uVar3,(MethodInfo *)0x0);
                                  pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                                                     ((
                                                  Gisketch_Aottg2UI_Actions_GisketchController_o *)
                                                  __this,(MethodInfo *)0x0);
                                  if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                                    Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                                              (pGVar8,"account.methodsUnavailable",
                                               (uint)(byte)(__this->fields)._authMethodsUnavailable,
                                               (MethodInfo *)0x0);
                                    pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                                                       ((
                                                  Gisketch_Aottg2UI_Actions_GisketchController_o *)
                                                  __this,(MethodInfo *)0x0);
                                    if (*(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4) == 0) {
                                      il2cpp_init_class();
                                    }
                                    pSVar9 = Gisketch_Aottg2UI_Game_AottgActiveProfile__CharacterName
                                                       ((MethodInfo *)0x0);
                                    if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)
                                    {
                                      Gisketch_Aottg2UI_State_GisketchUIState__Set
                                                (pGVar8,"account.ingameDisplayName",pSVar9,(MethodInfo *)0x0);
                                      pMVar11 = (MethodInfo *)__this;
                                      pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                                                         ((
                                                  Gisketch_Aottg2UI_Actions_GisketchController_o *)
                                                  __this,(MethodInfo *)0x0);
                                      pSVar9 = Gisketch_Aottg2UI_Game_AottgGameUiActions__AuthDisplayName
                                                         (pMVar11);
                                      if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0
                                         ) {
                                        Gisketch_Aottg2UI_State_GisketchUIState__Set
                                                  (pGVar8,"account.authDisplayName",pSVar9,(MethodInfo *)0x0);
                                        Gisketch_Aottg2UI_Game_AottgGameUiActions__AttachTruncation
                                                  (__this,"account-ingame-display-name",method_00);
                                        Gisketch_Aottg2UI_Game_AottgGameUiActions__AttachTruncation
                                                  (__this,"account-auth-display-name",method_01);
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
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$IsAccountAuthLoading
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameUiActions__IsAccountAuthLoading (const MethodInfo* method);
// 0x4164520

/* WARNING: Type propagation algorithm not settling */

bool_conflict Gisketch_Aottg2UI_Game_AottgGameUiActions__IsAccountAuthLoading(MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  
  if (DAT_05704a62 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704a62 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704b26 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704b26 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    cVar2 = *(char *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x98);
  }
  else {
    cVar2 = *(char *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x98);
  }
  if (cVar2 != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
      bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      cVar2 = (char)bVar3;
    }
    else {
      bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      cVar2 = (char)bVar3;
    }
    if (cVar2 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
        bVar3 = ApplicationManagers_AccountManager__get_HasRefreshToken((MethodInfo *)0x0);
        return bVar3;
      }
      bVar3 = ApplicationManagers_AccountManager__get_HasRefreshToken((MethodInfo *)0x0);
      return bVar3;
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$IsAccountIdentityLoading
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameUiActions__IsAccountIdentityLoading (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4164650

bool_conflict
Gisketch_Aottg2UI_Game_AottgGameUiActions__IsAccountIdentityLoading
          (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  uint3 uVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  MethodInfo *method_00;
  
  if (DAT_05704a63 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    DAT_05704a63 = '\x01';
  }
  method_00 = TypeInfo_AottgGameUiActions;
  if (*(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgGameUiActions__IsAccountAuthLoading(method_00);
  uVar1 = (uint3)((uint)bVar2 >> 8);
  bVar3 = (bool_conflict)CONCAT71((uint7)uVar1,1);
  if ((char)bVar2 == '\0') {
    bVar3 = CONCAT31(uVar1,*(char *)((long)&(__this->fields)._authMethodsUnavailable + 3) != '\0');
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$InGameDisplayName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameUiActions__InGameDisplayName (const MethodInfo* method);
// 0x41662c0

System_String_o * Gisketch_Aottg2UI_Game_AottgGameUiActions__InGameDisplayName(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_Game_AottgActiveProfile__CharacterName((MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$AuthDisplayName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameUiActions__AuthDisplayName (const MethodInfo* method);
// 0x41662d0

System_String_o * Gisketch_Aottg2UI_Game_AottgGameUiActions__AuthDisplayName(MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_05704a64 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"MainMenu.Account.NotSignedIn");
    il2cpp_init_method_metadata(&"Not signed in");
    DAT_05704a64 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((char)bVar1 == '\0') {
    pSVar2 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    method_00 = extraout_RDX;
    if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
      il2cpp_init_class();
      method_00 = extraout_RDX_00;
    }
    pSVar2 = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                       ("MainMenu.Account.NotSignedIn","Not signed in",method_00);
    return pSVar2;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$AttachTruncation
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__AttachTruncation (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, System_String_o* id, const MethodInfo* method);
// 0x41663e0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__AttachTruncation
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,System_String_o *id,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *__this_00;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar4;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *x_00;
  
  if (DAT_05704a65 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgTruncatedTextTooltip_AddComponent_AottgTrun);
    il2cpp_init_method_metadata(&MethodInfo_AottgTruncatedTextTooltip_GetComponent_AottgTrun);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704a65 = '\x01';
  }
  pGVar4 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = (UnityEngine_Object_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
LAB_041664ec:
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pGVar4 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
    if (pGVar4 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto LAB_04166588;
    if ((pGVar4->fields)._Manifest_k__BackingField !=
        (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      pGVar4 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                         ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0
                         );
      if ((pGVar4 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
         (pGVar2 = (pGVar4->fields)._Manifest_k__BackingField,
         pGVar2 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) goto LAB_04166588;
      if ((pGVar2->fields).screens != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0)
      {
        pGVar4 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                           ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                            (MethodInfo *)0x0);
        if (((pGVar4 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
            (pGVar2 = (pGVar4->fields)._Manifest_k__BackingField,
            pGVar2 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) ||
           (__this_00 = (pGVar2->fields).screens,
           __this_00 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0))
        goto LAB_04166588;
        x = (UnityEngine_Object_o *)
            Gisketch_Aottg2UI_Building_GisketchView__Find
                      ((Gisketch_Aottg2UI_Building_GisketchView_o *)__this_00,id,(MethodInfo *)0x0);
        goto LAB_041664ec;
      }
    }
    x = (UnityEngine_Object_o *)0x0;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (x == (UnityEngine_Object_o *)0x0) {
LAB_04166588:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    x_00 = (UnityEngine_Object_o *)
           UnityEngine_GameObject__GetComponent<object>((UnityEngine_GameObject_o *)x,MethodInfo_AottgTruncatedTextTooltip_GetComponent_AottgTrun);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      UnityEngine_GameObject__AddComponent<object>((UnityEngine_GameObject_o *)x,MethodInfo_AottgTruncatedTextTooltip_AddComponent_AottgTrun);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$LooksLikeEmail
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameUiActions__LooksLikeEmail (System_String_o* email, const MethodInfo* method);
// 0x4161d60

bool_conflict
Gisketch_Aottg2UI_Game_AottgGameUiActions__LooksLikeEmail(System_String_o *email,MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_Net_Mail_MailAddress_o *__this;
  System_String_o *b;
  
  if (DAT_05704a66 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MailAddress);
    DAT_05704a66 = '\x01';
  }
  bVar2 = 0;
  bVar1 = System_String__IsNullOrWhiteSpace(email,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (email == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar3 = System_String__Trim(email,(MethodInfo *)0x0);
    __this = (System_Net_Mail_MailAddress_o *)il2cpp_runtime_glue(TypeInfo_MailAddress);
    System_Net_Mail_MailAddress___ctor(__this,pSVar3,(MethodInfo *)0x0);
    if (__this == (System_Net_Mail_MailAddress_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar3 = System_Net_Mail_MailAddress__get_Address(__this,(MethodInfo *)0x0);
    b = System_String__Trim(email,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(pSVar3,b,(MethodInfo *)0x0);
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$FindInput
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameUiActions__FindInput (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* id, const MethodInfo* method);
// 0x4161c80

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameUiActions__FindInput
          (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *id,
          MethodInfo *method)

{
  bool_conflict bVar1;
  TMPro_TMP_InputField_o *x;
  float *pfVar2;
  
  if (DAT_05704a67 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704a67 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = Gisketch_Aottg2UI_Game_AottgGameUiActions__Input(context,id,method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pfVar2 = *(float **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (x == (TMPro_TMP_InputField_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pfVar2 = &(x->fields).m_SelectionColor.fields.a;
  }
  return *(System_String_o **)pfVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$ClearInput
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__ClearInput (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* id, const MethodInfo* method);
// 0x41666c0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__ClearInput
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *id,
               MethodInfo *method)

{
  bool_conflict bVar1;
  TMPro_TMP_InputField_o *__this;
  
  if (DAT_05704a68 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704a68 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = Gisketch_Aottg2UI_Game_AottgGameUiActions__Input(context,id,method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (__this != (TMPro_TMP_InputField_o *)0x0) {
      TMPro_TMP_InputField__set_text
                (__this,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0)
      ;
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$Input
// il2cpp: TMPro_TMP_InputField_o* Gisketch_Aottg2UI_Game_AottgGameUiActions__Input (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* id, const MethodInfo* method);
// 0x4166590

TMPro_TMP_InputField_o *
Gisketch_Aottg2UI_Game_AottgGameUiActions__Input
          (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *id,
          MethodInfo *method)

{
  uint uVar1;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  long lVar5;
  TMPro_TMP_InputField_o *__this_00;
  
  if (DAT_05704a69 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField___GetComponentsInChildren_TMP_Inp);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704a69 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = (TMPro_TMP_InputField_o *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if ((((context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar3 = UnityEngine_GameObject__get_transform
                             (context.fields.GameObject,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_Transform_o *)0x0)) ||
        (pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0),
        pUVar3 == (UnityEngine_Transform_o *)0x0)) ||
       (pSVar4 = UnityEngine_Component__GetComponentsInChildren<object>
                           ((UnityEngine_Component_o *)pUVar3,1,MethodInfo_TMP_InputField___GetComponentsInChildren_TMP_Inp),
       pSVar4 == (System_Object_array *)0x0)) {
LAB_041666a8:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    lVar5 = 0;
    do {
      uVar1 = (uint)pSVar4->max_length;
      if ((int)uVar1 <= (int)(uint)lVar5) {
        return (TMPro_TMP_InputField_o *)0x0;
      }
      if (uVar1 <= (uint)lVar5) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_00 = (TMPro_TMP_InputField_o *)pSVar4->m_Items[lVar5];
      if ((__this_00 == (TMPro_TMP_InputField_o *)0x0) ||
         (__this = (UnityEngine_Object_o *)
                   UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         __this == (UnityEngine_Object_o *)0x0)) goto LAB_041666a8;
      a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
      lVar5 = lVar5 + 1;
    } while ((char)bVar2 == '\0');
  }
  return __this_00;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$CloseTopOverlay
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__CloseTopOverlay (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4165bb0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__CloseTopOverlay
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  
  if (DAT_05704a6a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704a6a = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  pGVar2 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    if ((pGVar2->fields)._Theme_k__BackingField == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
    {
      return;
    }
    pGVar2 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
    if ((pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this_00 = (pGVar2->fields)._Theme_k__BackingField,
       __this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,1,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$AccountToast
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, int32_t variant, System_String_o* icon, System_String_o* titleKey, System_String_o* titleFallback, System_String_o* content, System_String_o* updateKey, const MethodInfo* method);
// 0x4161fc0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,int32_t variant,
               System_String_o *icon,System_String_o *titleKey,System_String_o *titleFallback,
               System_String_o *content,System_String_o *updateKey,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  System_String_o *title;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_05704a6b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&TypeInfo_AottgToastDefinition);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704a6b = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pGVar2 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
      il2cpp_init_class();
      method_00 = extraout_RDX_00;
    }
    title = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText(titleKey,titleFallback,method_00)
    ;
    __this_00 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)il2cpp_runtime_glue(TypeInfo_AottgToastDefinition);
    Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor
              (__this_00,variant,icon,title,content,updateKey,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      Gisketch_Aottg2UI_GisketchUIRoot__ShowToast(pGVar2,__this_00,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$ErrorText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameUiActions__ErrorText (System_String_o* error, const MethodInfo* method);
// 0x41667b0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameUiActions__ErrorText(System_String_o *error,MethodInfo *method)

{
  int iVar1;
  uint32_t uVar2;
  bool_conflict bVar3;
  undefined8 *puVar4;
  System_String_o *pSVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *method_00;
  undefined8 *puVar6;
  
  if (DAT_05704a6c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"OAuth sign-in timed out. Please try again.");
    il2cpp_init_method_metadata(&"MainMenu.Account.Error.DisplayNameTaken");
    il2cpp_init_method_metadata(&"Email not verified. Check your inbox.");
    il2cpp_init_method_metadata(&"bad_response");
    il2cpp_init_method_metadata(&"MainMenu.Account.Error.SessionExpired");
    il2cpp_init_method_metadata(&"username_or_email_taken");
    il2cpp_init_method_metadata(&"MainMenu.Account.Error.Network");
    il2cpp_init_method_metadata(&"OAuth sign-in did not return a code.");
    il2cpp_init_method_metadata(&"MainMenu.Account.Error.OAuthMissingCode");
    il2cpp_init_method_metadata(&"email_already_taken");
    il2cpp_init_method_metadata(&"Could not start OAuth listener. Port 7890 may be in use.");
    il2cpp_init_method_metadata(&"Email already registered.");
    il2cpp_init_method_metadata(&"MainMenu.Account.Error.EmailTaken");
    il2cpp_init_method_metadata(&"MainMenu.Account.Error.BadResponse");
    il2cpp_init_method_metadata(&"email_taken");
    il2cpp_init_method_metadata(&"Session expired, please sign in again.");
    il2cpp_init_method_metadata(&"Unknown error.");
    il2cpp_init_method_metadata(&"oauth_missing_code");
    il2cpp_init_method_metadata(&"Email is not verified.");
    il2cpp_init_method_metadata(&"network_error");
    il2cpp_init_method_metadata(&"oauth_listener_error");
    il2cpp_init_method_metadata(&"invalid_refresh_token");
    il2cpp_init_method_metadata(&"Unexpected server response.");
    il2cpp_init_method_metadata(&"oauth_timeout");
    il2cpp_init_method_metadata(&"MainMenu.Account.Error.EmailNotVerified");
    il2cpp_init_method_metadata(&"no_refresh_token");
    il2cpp_init_method_metadata(&"MainMenu.Account.Error.OAuthTimeout");
    il2cpp_init_method_metadata(&"MainMenu.Account.Error.InvalidCredentials");
    il2cpp_init_method_metadata(&"Invalid email or password.");
    il2cpp_init_method_metadata(&"Network error. Check your connection.");
    il2cpp_init_method_metadata(&"email_not_verified");
    il2cpp_init_method_metadata(&"invalid_credentials");
    il2cpp_init_method_metadata(&"MainMenu.Account.Error.Unknown");
    il2cpp_init_method_metadata(&"display_name_taken");
    il2cpp_init_method_metadata(&"Display name already taken.");
    il2cpp_init_method_metadata(&"MainMenu.Account.Error.OAuthListener");
    DAT_05704a6c = '\x01';
  }
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(error,(MethodInfo *)0x0);
  if (uVar2 < 0x6e2964a2) {
    if (uVar2 < 0x4b8649dd) {
      if (uVar2 == 0x37bfaa39) {
        bVar3 = System_String__op_Equality(error,"display_name_taken",(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          puVar4 = &"Display name already taken.";
          puVar6 = &"MainMenu.Account.Error.DisplayNameTaken";
          iVar1 = *(int *)(TypeInfo_AottgGameUiActions + 0xe4);
          method_00 = extraout_RDX_02;
          goto joined_r0x04166a60;
        }
      }
      else if (uVar2 == 0x48714d78) {
        bVar3 = System_String__op_Equality(error,"oauth_listener_error",(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          puVar4 = &"Could not start OAuth listener. Port 7890 may be in use.";
          puVar6 = &"MainMenu.Account.Error.OAuthListener";
          iVar1 = *(int *)(TypeInfo_AottgGameUiActions + 0xe4);
          method_00 = extraout_RDX_03;
          goto joined_r0x04166a60;
        }
      }
      else if (uVar2 == 0x4b8649dc) {
        puVar4 = &"no_refresh_token";
        goto LAB_04166bdf;
      }
    }
    else if (uVar2 < 0x5ef038ca) {
      if (uVar2 == 0x4e5f9fea) {
        puVar4 = &"email_not_verified";
LAB_04166c2e:
        bVar3 = System_String__op_Equality(error,(System_String_o *)*puVar4,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          puVar4 = &"Email not verified. Check your inbox.";
          puVar6 = &"MainMenu.Account.Error.EmailNotVerified";
          iVar1 = *(int *)(TypeInfo_AottgGameUiActions + 0xe4);
          method_00 = extraout_RDX_05;
          goto joined_r0x04166a60;
        }
      }
      else if ((uVar2 == 0x5ef038c9) &&
              (bVar3 = System_String__op_Equality(error,"invalid_credentials",(MethodInfo *)0x0),
              (char)bVar3 != '\0')) {
        puVar4 = &"Invalid email or password.";
        puVar6 = &"MainMenu.Account.Error.InvalidCredentials";
        iVar1 = *(int *)(TypeInfo_AottgGameUiActions + 0xe4);
        method_00 = extraout_RDX;
        goto joined_r0x04166a60;
      }
    }
    else if (uVar2 == 0x6863bfec) {
      bVar3 = System_String__op_Equality(error,"oauth_timeout",(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        puVar4 = &"OAuth sign-in timed out. Please try again.";
        puVar6 = &"MainMenu.Account.Error.OAuthTimeout";
        iVar1 = *(int *)(TypeInfo_AottgGameUiActions + 0xe4);
        method_00 = extraout_RDX_07;
        goto joined_r0x04166a60;
      }
    }
    else if ((uVar2 == 0x6e2964a1) &&
            (bVar3 = System_String__op_Equality(error,"oauth_missing_code",(MethodInfo *)0x0),
            (char)bVar3 != '\0')) {
      puVar4 = &"OAuth sign-in did not return a code.";
      puVar6 = &"MainMenu.Account.Error.OAuthMissingCode";
      iVar1 = *(int *)(TypeInfo_AottgGameUiActions + 0xe4);
      method_00 = extraout_RDX_00;
      goto joined_r0x04166a60;
    }
  }
  else if (uVar2 < 0xbcccdb09) {
    if (uVar2 == 0xa09de9fe) {
      puVar4 = &"invalid_refresh_token";
LAB_04166bdf:
      bVar3 = System_String__op_Equality(error,(System_String_o *)*puVar4,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        puVar4 = &"Session expired, please sign in again.";
        puVar6 = &"MainMenu.Account.Error.SessionExpired";
        iVar1 = *(int *)(TypeInfo_AottgGameUiActions + 0xe4);
        method_00 = extraout_RDX_04;
        goto joined_r0x04166a60;
      }
    }
    else {
      if (uVar2 == 0xb89467ae) {
        puVar4 = &"Email is not verified.";
        goto LAB_04166c2e;
      }
      if (uVar2 == 0xbcccdb08) {
        puVar4 = &"username_or_email_taken";
        goto LAB_04166cf5;
      }
    }
  }
  else if (uVar2 < 0xea218ca0) {
    if (uVar2 == 0xc13c007e) {
      bVar3 = System_String__op_Equality(error,"bad_response",(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        puVar4 = &"Unexpected server response.";
        puVar6 = &"MainMenu.Account.Error.BadResponse";
        iVar1 = *(int *)(TypeInfo_AottgGameUiActions + 0xe4);
        method_00 = extraout_RDX_06;
        goto joined_r0x04166a60;
      }
    }
    else if (uVar2 == 0xea218c9f) {
      puVar4 = &"email_taken";
      goto LAB_04166cf5;
    }
  }
  else if (uVar2 == 0xef1c5af4) {
    puVar4 = &"email_already_taken";
LAB_04166cf5:
    bVar3 = System_String__op_Equality(error,(System_String_o *)*puVar4,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      puVar4 = &"Email already registered.";
      puVar6 = &"MainMenu.Account.Error.EmailTaken";
      iVar1 = *(int *)(TypeInfo_AottgGameUiActions + 0xe4);
      method_00 = extraout_RDX_08;
      goto joined_r0x04166a60;
    }
  }
  else if ((uVar2 == 0xf34f4058) &&
          (bVar3 = System_String__op_Equality(error,"network_error",(MethodInfo *)0x0),
          (char)bVar3 != '\0')) {
    puVar4 = &"Network error. Check your connection.";
    puVar6 = &"MainMenu.Account.Error.Network";
    iVar1 = *(int *)(TypeInfo_AottgGameUiActions + 0xe4);
    method_00 = extraout_RDX_01;
    goto joined_r0x04166a60;
  }
  bVar3 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return error;
  }
  puVar4 = &"Unknown error.";
  puVar6 = &"MainMenu.Account.Error.Unknown";
  iVar1 = *(int *)(TypeInfo_AottgGameUiActions + 0xe4);
  method_00 = extraout_RDX_09;
joined_r0x04166a60:
  if (iVar1 == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_10;
  }
  pSVar5 = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                     ((System_String_o *)*puVar6,(System_String_o *)*puVar4,method_00);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$AccountText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText (System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x4161eb0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
          (System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  System_String_o *pSVar5;
  long lVar6;
  
  if (DAT_05704a6d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&TypeInfo_IGisketchLocalizer);
    DAT_05704a6d = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgGameUiActions + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgGameUiActions + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    plVar2 = (long *)**(undefined8 **)(TypeInfo_AottgGameUiActions + 0xb8);
  }
  else {
    plVar2 = (long *)**(undefined8 **)(TypeInfo_AottgGameUiActions + 0xb8);
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar3 = *plVar2;
  if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
    lVar6 = 0;
    do {
      if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar6) == TypeInfo_IGisketchLocalizer) {
        puVar4 = (undefined8 *)
                 (lVar3 + (long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar6) * 0x10 + 0x138);
        goto LAB_04161fa3;
      }
      lVar6 = lVar6 + 0x10;
    } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar6);
  }
  puVar4 = (undefined8 *)il2cpp_runtime_glue(plVar2,TypeInfo_IGisketchLocalizer,0);
LAB_04161fa3:
  pSVar5 = (System_String_o *)(*(code *)*puVar4)(plVar2,key,fallback,puVar4[1],(code *)*puVar4);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterCreditsActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterCreditsActions (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4166d80

void Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterCreditsActions
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  System_Action_GisketchActionContext__o *action;
  
  if (DAT_05704a6e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegisterCreditsActions_b__52_0);
    il2cpp_init_method_metadata(&"credits.retry");
    DAT_05704a6e = '\x01';
  }
  action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"credits.retry",action,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenCreditsScreen
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__OpenCreditsScreen (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4166e10

void Gisketch_Aottg2UI_Game_AottgGameUiActions__OpenCreditsScreen
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  System_Action_AottgCreditsResult__o *onResult;
  
  if (DAT_05704a6f == '\0') {
    il2cpp_init_method_metadata(&"credits");
    DAT_05704a6f = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this_00 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)
                  (pGVar1->fields)._Manifest_k__BackingField,
     __this_00 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)) {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
              (__this_00,"credits",(MethodInfo *)0x0);
  }
  if (DAT_05704a70 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgCreditsResult);
    il2cpp_init_method_metadata(&MethodInfo_Void_ApplyCreditsResult);
    DAT_05704a70 = '\x01';
  }
  onResult = (System_Action_AottgCreditsResult__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgCreditsResult);
  System_Action<object>___ctor();
  ApplicationManagers_Credits_AottgCreditsService__GetCredits(onResult,0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$RefreshCredits
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshCredits (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, bool forceRefresh, const MethodInfo* method);
// 0x4166ed0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshCredits
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,bool_conflict forceRefresh,
               MethodInfo *method)

{
  System_Action_AottgCreditsResult__o *onResult;
  
  if (DAT_05704a70 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgCreditsResult);
    il2cpp_init_method_metadata(&MethodInfo_Void_ApplyCreditsResult);
    DAT_05704a70 = '\x01';
  }
  onResult = (System_Action_AottgCreditsResult__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgCreditsResult);
  System_Action<object>___ctor();
  ApplicationManagers_Credits_AottgCreditsService__GetCredits
            (onResult,forceRefresh & 0xff,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$ApplyCreditsResult
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__ApplyCreditsResult (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, ApplicationManagers_Credits_AottgCreditsResult_o* result, const MethodInfo* method);
// 0x4166f40

void Gisketch_Aottg2UI_Game_AottgGameUiActions__ApplyCreditsResult
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               ApplicationManagers_Credits_AottgCreditsResult_o *result,MethodInfo *method)

{
  ushort uVar1;
  ApplicationManagers_Credits_AottgCreditsResponse_o *pAVar2;
  System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *pSVar3;
  System_Collections_Generic_IReadOnlyList_AottgCreditCategory__c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar6;
  int iVar7;
  bool_conflict bVar8;
  VirtualInvokeData *pVVar9;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar10;
  long lVar11;
  undefined8 uVar12;
  MethodInfo *in_R9;
  bool bVar13;
  
  if (DAT_05704a71 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IReadOnlyCollection_AottgCreditCategory);
    il2cpp_init_method_metadata();
    DAT_05704a71 = '\x01';
  }
  if (result == (ApplicationManagers_Credits_AottgCreditsResult_o *)0x0) {
    return;
  }
  pAVar2 = (result->fields)._Credits_k__BackingField;
  if (pAVar2 == (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
    bVar13 = false;
  }
  else {
    pSVar3 = (pAVar2->fields)._Categories_k__BackingField;
    if (pSVar3 == (System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *)0x0)
    goto LAB_0416713f;
    pSVar4 = pSVar3->klass;
    uVar1._0_1_ = (pSVar4->_2).rank;
    uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar11) == TypeInfo_IReadOnlyCollection_AottgCreditCategory) {
          pVVar9 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar11);
          goto LAB_04166fff;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar11);
    }
    pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar3,TypeInfo_IReadOnlyCollection_AottgCreditCategory,0);
LAB_04166fff:
    iVar7 = (*pVVar9->methodPtr)(pSVar3);
    bVar13 = 0 < iVar7;
  }
  iVar7 = (result->fields)._State_k__BackingField;
  bVar8 = ApplicationManagers_Credits_AottgCreditsResult__get_HasCredits(result,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    if ((iVar7 == 3) || (iVar7 == 0)) {
      if (DAT_05704b2b == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_AottgCreditsScreenState);
        DAT_05704b2b = '\x01';
      }
      **(undefined8 **)(TypeInfo_AottgCreditsScreenState + 0xb8) = 0;
      uVar12 = *(undefined8 *)(TypeInfo_AottgCreditsScreenState + 0xb8);
      goto LAB_041670ac;
    }
  }
  else {
    pAVar2 = (result->fields)._Credits_k__BackingField;
    if (DAT_05704b2b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AottgCreditsScreenState);
      DAT_05704b2b = '\x01';
    }
    **(undefined8 **)(TypeInfo_AottgCreditsScreenState + 0xb8) = pAVar2;
    uVar12 = *(undefined8 *)(TypeInfo_AottgCreditsScreenState + 0xb8);
LAB_041670ac:
    il2cpp_runtime_glue(uVar12);
  }
  pGVar10 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                      ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if ((pGVar10 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     ((pGVar10->fields)._Manifest_k__BackingField !=
      (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) {
    pGVar10 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                        ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0)
    ;
    if ((pGVar10 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
       (pGVar6 = (pGVar10->fields)._Manifest_k__BackingField,
       pGVar6 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) {
LAB_0416713f:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar8 = System_String__op_Equality
                      ((System_String_o *)(pGVar6->fields).dialogs,"credits",(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      pGVar10 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                          ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                           (MethodInfo *)0x0);
      if (pGVar10 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto LAB_0416713f;
      Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(pGVar10,(MethodInfo *)0x0);
    }
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__ApplyCreditsState
            (__this,result,(uint)bVar13,(uint)(iVar7 == 0),(uint)(iVar7 == 3),in_R9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$ApplyCreditsState
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__ApplyCreditsState (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, ApplicationManagers_Credits_AottgCreditsResult_o* result, bool hasCredits, bool loading, bool failedNoCache, const MethodInfo* method);
// 0x41671f0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__ApplyCreditsState
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               ApplicationManagers_Credits_AottgCreditsResult_o *result,bool_conflict hasCredits,
               bool_conflict loading,bool_conflict failedNoCache,MethodInfo *method)

{
  ushort uVar1;
  ApplicationManagers_Credits_AottgCreditsResponse_o *pAVar2;
  System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *pSVar3;
  System_Collections_Generic_IReadOnlyList_AottgCreditCategory__c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  bool_conflict bVar6;
  int iVar7;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar8;
  VirtualInvokeData *pVVar9;
  System_String_o *pSVar10;
  MethodInfo *method_00;
  long lVar11;
  uint value;
  
  if (DAT_05704a72 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&TypeInfo_IReadOnlyCollection_AottgCreditCategory);
    il2cpp_init_method_metadata(&"credits.failed");
    il2cpp_init_method_metadata(&"credits.error");
    il2cpp_init_method_metadata(&"credits.loading");
    il2cpp_init_method_metadata(&"credits.ready");
    il2cpp_init_method_metadata(&"credits.empty");
    il2cpp_init_method_metadata(&"credits.refreshing");
    DAT_05704a72 = '\x01';
  }
  pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if ((result == (ApplicationManagers_Credits_AottgCreditsResult_o *)0x0) ||
     (pGVar8 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    return;
  }
  pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool
              (pGVar8,"credits.loading",loading & 0xff,(MethodInfo *)0x0);
    pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      value = 0;
      Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                (pGVar8,"credits.ready",(uint)(byte)(~(byte)failedNoCache & (byte)hasCredits),
                 (MethodInfo *)0x0);
      pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                         ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0
                         );
      bVar6 = ApplicationManagers_Credits_AottgCreditsResult__get_HasCredits
                        (result,(MethodInfo *)0x0);
      pSVar10 = "credits.empty";
      if ((char)bVar6 != '\0') {
        pAVar2 = (result->fields)._Credits_k__BackingField;
        if ((pAVar2 == (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) ||
           (pSVar3 = (pAVar2->fields)._Categories_k__BackingField,
           pSVar3 == (System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *)0x0))
        goto LAB_041674b4;
        pSVar4 = pSVar3->klass;
        uVar1._0_1_ = (pSVar4->_2).rank;
        uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar5 = (pSVar4->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(long *)((long)&pIVar5->interfaceType + lVar11) == TypeInfo_IReadOnlyCollection_AottgCreditCategory) {
              pVVar9 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar11);
              goto LAB_041673d0;
            }
            lVar11 = lVar11 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar11);
        }
        pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar3,TypeInfo_IReadOnlyCollection_AottgCreditCategory,0);
LAB_041673d0:
        iVar7 = (*pVVar9->methodPtr)(pSVar3,pVVar9->method);
        value = (uint)(iVar7 == 0);
      }
      if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar8,pSVar10,value,(MethodInfo *)0x0);
        pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                           ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                            (MethodInfo *)0x0);
        if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                    (pGVar8,"credits.failed",failedNoCache & 0xff,(MethodInfo *)0x0);
          pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                             ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                              (MethodInfo *)0x0);
          if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
            Gisketch_Aottg2UI_State_GisketchUIState__SetBool
                      (pGVar8,"credits.refreshing",
                       (uint)(*(char *)((long)&(result->fields)._IsFromCache_k__BackingField + 2) !=
                              '\0' & (byte)hasCredits),(MethodInfo *)0x0);
            method_00 = (MethodInfo *)0x0;
            pGVar8 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                               ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                                (MethodInfo *)0x0);
            pSVar10 = (result->fields)._Error_k__BackingField;
            if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = Gisketch_Aottg2UI_Game_AottgGameUiActions__CreditsErrorText(pSVar10,method_00)
            ;
            if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
              Gisketch_Aottg2UI_State_GisketchUIState__Set
                        (pGVar8,"credits.error",pSVar10,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_041674b4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$CreditsErrorText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameUiActions__CreditsErrorText (System_String_o* error, const MethodInfo* method);
// 0x41674c0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameUiActions__CreditsErrorText
          (System_String_o *error,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704a73 == '\0') {
    il2cpp_init_method_metadata(&"Try again.");
    il2cpp_init_method_metadata(&"not_initialized");
    il2cpp_init_method_metadata(&"Check your connection and try again.");
    il2cpp_init_method_metadata(&"network_error");
    il2cpp_init_method_metadata(&"Credits service is not ready.");
    DAT_05704a73 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(error,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(error,"network_error",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return "Check your connection and try again.";
    }
    bVar1 = System_String__op_Equality(error,"not_initialized",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return "Credits service is not ready.";
    }
  }
  return "Try again.";
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$AddNetworkListeners
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__AddNetworkListeners (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4167580

void Gisketch_Aottg2UI_Game_AottgGameUiActions__AddNetworkListeners
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  System_Action_string__o *value;
  
  if (DAT_05704a74 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_ShowNetworkErrorToast);
    DAT_05704a74 = '\x01';
  }
  value = (System_Action_string__o *)il2cpp_runtime_glue(TypeInfo_Action_string);
  System_Action<object>___ctor();
  ApplicationManagers_AottgNetworkNotifications__add_OnNetworkError(value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$RemoveNetworkListeners
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__RemoveNetworkListeners (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x41675f0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__RemoveNetworkListeners
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  System_Action_string__o *value;
  
  if (DAT_05704a75 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_ShowNetworkErrorToast);
    DAT_05704a75 = '\x01';
  }
  value = (System_Action_string__o *)il2cpp_runtime_glue(TypeInfo_Action_string);
  System_Action<object>___ctor();
  ApplicationManagers_AottgNetworkNotifications__remove_OnNetworkError(value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$ShowNetworkErrorToast
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__ShowNetworkErrorToast (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, System_String_o* error, const MethodInfo* method);
// 0x4167660

void Gisketch_Aottg2UI_Game_AottgGameUiActions__ShowNetworkErrorToast
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,System_String_o *error,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *__this_01;
  
  if (DAT_05704a76 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgToastDefinition);
    il2cpp_init_method_metadata(&"Check your connection and try again.");
    il2cpp_init_method_metadata(&"network.error");
    il2cpp_init_method_metadata(&"exclamation");
    il2cpp_init_method_metadata(&"Network Error");
    DAT_05704a76 = '\x01';
  }
  __this_00 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                        ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0)
  ;
  if (__this_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    __this_01 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)il2cpp_runtime_glue(TypeInfo_AottgToastDefinition);
    Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor
              (__this_01,0,"exclamation","Network Error","Check your connection and try again.","network.error",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_GisketchUIRoot__ShowToast(__this_00,__this_01,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterEmoteActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterEmoteActions (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4167730

void Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterEmoteActions
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  System_Action_GisketchActionContext__o *pSVar1;
  undefined8 uVar2;
  
  if (DAT_05704a77 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext__string);
    il2cpp_init_method_metadata(&TypeInfo_AottgEmoteSlotActions);
    il2cpp_init_method_metadata(&MethodInfo_Void_OpenEmoteSticker);
    il2cpp_init_method_metadata(&MethodInfo_Void_OpenEmoteText);
    il2cpp_init_method_metadata(&MethodInfo_Void_SaveEmoteSticker);
    il2cpp_init_method_metadata(&MethodInfo_Void_SaveEmoteText);
    il2cpp_init_method_metadata(&"profile.emote.text.save");
    il2cpp_init_method_metadata(&"profile.emote.text.open");
    il2cpp_init_method_metadata(&"profile.emote.sticker.open");
    DAT_05704a77 = '\x01';
  }
  pSVar1 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"profile.emote.text.open",pSVar1,
             (MethodInfo *)0x0);
  pSVar1 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"profile.emote.sticker.open",pSVar1,
             (MethodInfo *)0x0);
  pSVar1 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"profile.emote.text.save",pSVar1,
             (MethodInfo *)0x0);
  uVar2 = il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext__string);
  System_Action<GisketchActionContext__object>___ctor();
  **(undefined8 **)(TypeInfo_AottgEmoteSlotActions + 0xb8) = uVar2;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgEmoteSlotActions + 0xb8),uVar2);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenEmoteText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__OpenEmoteText (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x41678d0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__OpenEmoteText
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  bool_conflict bVar1;
  ulong in_RAX;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  int iVar3;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_05704a78 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEmoteEditSelection);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"profile-change-emote-text");
    DAT_05704a78 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
    il2cpp_init_class();
    uStack_18 = (ulong)(uint)uStack_18;
  }
  else {
    uStack_18 = uStack_18 & 0xffffffff;
  }
  if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    iVar3 = 0;
  }
  else {
    bVar1 = System_Int32__TryParse
                      (((context.fields.Node)->fields).value,(int32_t *)((long)&uStack_18 + 4),
                       (MethodInfo *)0x0);
    iVar3 = 0;
    if ((((char)bVar1 != '\0') && (iVar3 = 0, -1 < (long)uStack_18)) &&
       (iVar3 = 7, uStack_18._4_4_ < 8)) {
      iVar3 = uStack_18._4_4_;
    }
  }
  **(int **)(TypeInfo_AottgEmoteEditSelection + 0xb8) = iVar3;
  pGVar2 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if ((pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this_00 = (pGVar2->fields)._Theme_k__BackingField,
     __this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
              ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,"profile-change-emote-text",1,
               (MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenEmoteSticker
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__OpenEmoteSticker (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4167a20

void Gisketch_Aottg2UI_Game_AottgGameUiActions__OpenEmoteSticker
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  bool_conflict bVar1;
  ulong in_RAX;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  int iVar3;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_05704a79 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEmoteEditSelection);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"profile-change-emote-sticker");
    DAT_05704a79 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
    il2cpp_init_class();
    uStack_18 = (ulong)(uint)uStack_18;
  }
  else {
    uStack_18 = uStack_18 & 0xffffffff;
  }
  if (context.fields.Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    iVar3 = 0;
  }
  else {
    bVar1 = System_Int32__TryParse
                      (((context.fields.Node)->fields).value,(int32_t *)((long)&uStack_18 + 4),
                       (MethodInfo *)0x0);
    iVar3 = 0;
    if ((((char)bVar1 != '\0') && (iVar3 = 0, -1 < (long)uStack_18)) &&
       (iVar3 = 7, uStack_18._4_4_ < 8)) {
      iVar3 = uStack_18._4_4_;
    }
  }
  *(int *)(*(long *)(TypeInfo_AottgEmoteEditSelection + 0xb8) + 4) = iVar3;
  pGVar2 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if ((pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this_00 = (pGVar2->fields)._Theme_k__BackingField,
     __this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
              ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,"profile-change-emote-sticker",1,
               (MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveEmoteText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveEmoteText (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4167b10

void Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveEmoteText
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_ListSetting_T__o *__this_00;
  Settings_TypedSetting_T__o *__this_01;
  System_String_o *__this_02;
  MethodInfo *pMVar3;
  
  if (DAT_05704a7a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEmoteEditSelection);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"profile-change-emote-text-input");
    DAT_05704a7a = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
  if (lVar2 == 0) {
    return;
  }
  __this_00 = *(Settings_ListSetting_T__o **)(lVar2 + 0x20);
  if (__this_00 != (Settings_ListSetting_T__o *)0x0) {
    pMVar3 = (MethodInfo *)(ulong)**(uint **)(TypeInfo_AottgEmoteEditSelection + 0xb8);
    __this_01 = (Settings_TypedSetting_T__o *)
                Settings_ListSetting<object>__GetItemAt
                          (__this_00,**(uint **)(TypeInfo_AottgEmoteEditSelection + 0xb8),MethodInfo_BaseSetting_GetItemAt);
    if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_02 = Gisketch_Aottg2UI_Game_AottgGameUiActions__FindInput(context,"profile-change-emote-text-input",pMVar3);
    if ((__this_02 != (System_String_o *)0x0) &&
       (pMVar3 = (MethodInfo *)System_String__Trim(__this_02,(MethodInfo *)0x0),
       __this_01 != (Settings_TypedSetting_T__o *)0x0)) {
      bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
      if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
        Settings_TypedSetting<object>__set_Value(__this_01,(Il2CppObject *)pMVar3,MethodInfo_Void_set_Value);
        Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveEmoteSettings(__this,pMVar3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(__this_01);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveEmoteSticker
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveEmoteSticker (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* sticker, const MethodInfo* method);
// 0x4167e00

void Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveEmoteSticker
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *sticker,
               MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_ListSetting_T__o *__this_00;
  Settings_TypedSetting_T__o *__this_01;
  
  if (DAT_05704a7b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEmoteEditSelection);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704a7b = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
  if (lVar2 != 0) {
    __this_00 = *(Settings_ListSetting_T__o **)(lVar2 + 0x28);
    if (__this_00 != (Settings_ListSetting_T__o *)0x0) {
      __this_01 = (Settings_TypedSetting_T__o *)
                  Settings_ListSetting<object>__GetItemAt
                            (__this_00,*(int32_t *)(*(long *)(TypeInfo_AottgEmoteEditSelection + 0xb8) + 4),MethodInfo_BaseSetting_GetItemAt
                            );
      if (__this_01 != (Settings_TypedSetting_T__o *)0x0) {
        bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
        if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
          Settings_TypedSetting<object>__set_Value(__this_01,(Il2CppObject *)sticker,MethodInfo_Void_set_Value);
          Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveEmoteSettings(__this,(MethodInfo *)sticker)
          ;
          return;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_01);
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveEmoteSettings
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveEmoteSettings (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4167ca0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveEmoteSettings
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  long *plVar1;
  long lVar2;
  System_String_o *content;
  System_String_o *title;
  System_String_o *icon;
  System_String_o *updateKey;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *__this_01;
  MethodInfo *method_00;
  
  if (DAT_05704a7c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&"Emote saved.");
    il2cpp_init_method_metadata(&"profile.save");
    il2cpp_init_method_metadata(&"Profile");
    il2cpp_init_method_metadata(&"checkmark");
    DAT_05704a7c = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar2 = *plVar1;
  method_00 = *(MethodInfo **)(lVar2 + 0x240);
  (**(code **)(lVar2 + 0x238))();
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshEmoteState(__this,method_00);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__CloseTopOverlay(__this,method_00);
  updateKey = "profile.save";
  icon = "checkmark";
  title = "Profile";
  content = "Emote saved.";
  if (DAT_05704a95 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgToastDefinition);
    DAT_05704a95 = '\x01';
  }
  __this_00 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                        ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0)
  ;
  if (__this_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    __this_01 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)il2cpp_runtime_glue(TypeInfo_AottgToastDefinition);
    Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor
              (__this_01,4,icon,title,content,updateKey,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_GisketchUIRoot__ShowToast(__this_00,__this_01,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$SlotIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgGameUiActions__SlotIndex (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x41679c0

int32_t Gisketch_Aottg2UI_Game_AottgGameUiActions__SlotIndex
                  (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  int32_t local_c;
  
  local_c = 0;
  if (context.fields.Node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    bVar1 = System_Int32__TryParse(((context.fields.Node)->fields).value,&local_c,(MethodInfo *)0x0)
    ;
    iVar2 = 0;
    if ((((char)bVar1 != '\0') && (iVar2 = 0, -1 < local_c)) && (iVar2 = 7, local_c < 8)) {
      iVar2 = local_c;
    }
    return iVar2;
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$StartProfileActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__StartProfileActions (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4168320

void Gisketch_Aottg2UI_Game_AottgGameUiActions__StartProfileActions
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  undefined1 uVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_R9;
  undefined1 in_stack_ffffffffffffff98 [15];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_38;
  
  if (DAT_05704a7d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&"loggedIn=");
    il2cpp_init_method_metadata(&"Profile.StartProfileActions");
    DAT_05704a7d = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  uVar1 = (undefined1)bVar2;
  if (*(int *)(DAT_05711048 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = System_Boolean__ToString((bool_conflict)&stack0xffffffffffffffa7,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat("loggedIn=",pSVar4,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = "Profile.StartProfileActions";
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_38,(System_String_o *)"Profile.StartProfileActions",pSVar4,(MethodInfo *)0x0);
  uVar5 = local_38.fields._area._0_4_;
  uVar6 = local_38.fields._area._4_4_;
  uVar7 = local_38.fields._detail._0_4_;
  bVar2 = local_38.fields._detail._4_4_;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    uVar5 = local_38.fields._area._0_4_;
    uVar6 = local_38.fields._area._4_4_;
    uVar7 = local_38.fields._detail._0_4_;
    bVar2 = local_38.fields._detail._4_4_;
  }
  bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    method_01 = TypeInfo_AottgGameUiActions;
    if (*(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = Gisketch_Aottg2UI_Game_AottgGameUiActions__IsAccountAuthLoading(method_01);
    if ((char)bVar3 == '\0') {
      Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyLocalToRuntime((MethodInfo *)0x0);
    }
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshProfileState(__this,method_00);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshEmoteState(__this,method_00);
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshRemoteProfileAndCharacter
              (__this,0,0,(System_Action_bool__string__o *)0x0,1,in_R9);
  }
  __this_00.fields._detail._7_1_ = uVar1;
  __this_00.fields._0_15_ = in_stack_ffffffffffffff98;
  __this_00.fields._startMs._0_4_ = uVar5;
  __this_00.fields._startMs._4_4_ = uVar6;
  __this_00.fields._enabled = uVar7;
  __this_00.fields._hotLoop = bVar2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_00,(MethodInfo *)&stack0xffffffffffffffa8);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$OpenProfileScreen
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__OpenProfileScreen (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4168550

void Gisketch_Aottg2UI_Game_AottgGameUiActions__OpenProfileScreen
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  undefined1 uVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_R9;
  undefined1 in_stack_ffffffffffffff88 [15];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_48;
  
  if (DAT_05704a7e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&"loggedIn=");
    il2cpp_init_method_metadata(&"local profile state refresh");
    il2cpp_init_method_metadata(&"Profile.OpenProfileScreen");
    il2cpp_init_method_metadata(&"profile");
    il2cpp_init_method_metadata(&"ShowScreen start");
    il2cpp_init_method_metadata(&"ShowScreen returned");
    DAT_05704a7e = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  uVar1 = (undefined1)bVar2;
  if (*(int *)(DAT_05711048 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = System_Boolean__ToString((bool_conflict)&stack0xffffffffffffff97,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat("loggedIn=",pSVar4,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_48,"Profile.OpenProfileScreen",pSVar4,(MethodInfo *)0x0);
  uVar6 = local_48.fields._area._0_4_;
  uVar7 = local_48.fields._area._4_4_;
  uVar8 = local_48.fields._detail._0_4_;
  bVar2 = local_48.fields._detail._4_4_;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
    uVar6 = local_48.fields._area._0_4_;
    uVar7 = local_48.fields._area._4_4_;
    uVar8 = local_48.fields._detail._0_4_;
    bVar2 = local_48.fields._detail._4_4_;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Profile.OpenProfileScreen","ShowScreen start",(MethodInfo *)0x0)
  ;
  pGVar5 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if ((pGVar5 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this_00 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)
                  (pGVar5->fields)._Manifest_k__BackingField,
     __this_00 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)) {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
              (__this_00,"profile",(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = "ShowScreen returned";
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
            ("Profile.OpenProfileScreen",(System_String_o *)"ShowScreen returned",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    method_01 = TypeInfo_AottgGameUiActions;
    if (*(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = Gisketch_Aottg2UI_Game_AottgGameUiActions__IsAccountAuthLoading(method_01);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = "local profile state refresh";
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
                ("Profile.OpenProfileScreen",(System_String_o *)"local profile state refresh",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyLocalToRuntime((MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshProfileState(__this,method_00);
  }
  else {
    Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshRemoteProfileAndCharacter
              (__this,1,0,(System_Action_bool__string__o *)0x0,1,in_R9);
  }
  __this_01.fields._detail._7_1_ = uVar1;
  __this_01.fields._0_15_ = in_stack_ffffffffffffff88;
  __this_01.fields._startMs._0_4_ = uVar6;
  __this_01.fields._startMs._4_4_ = uVar7;
  __this_01.fields._enabled = uVar8;
  __this_01.fields._hotLoop = bVar2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_01,(MethodInfo *)&stack0xffffffffffffff98);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$OnAccountLoggedIn
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__OnAccountLoggedIn (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4168840

void Gisketch_Aottg2UI_Game_AottgGameUiActions__OnAccountLoggedIn
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar1;
  bool_conflict bVar2;
  uint uVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar4;
  MethodInfo *in_R9;
  
  if (DAT_05704a7f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"profile");
    DAT_05704a7f = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(__this,method);
  pGVar4 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar3 = 0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pGVar4 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
    if (pGVar4 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto LAB_04168920;
    if ((pGVar4->fields)._Manifest_k__BackingField ==
        (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      uVar3 = 0;
      if (__this == (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) goto LAB_04168920;
      goto LAB_041688ff;
    }
    pGVar4 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
    if ((pGVar4 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
       (pGVar1 = (pGVar4->fields)._Manifest_k__BackingField,
       pGVar1 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) goto LAB_04168920;
    uVar3 = System_String__op_Equality
                      ((System_String_o *)(pGVar1->fields).dialogs,"profile",(MethodInfo *)0x0);
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
LAB_041688ff:
    Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshRemoteProfileAndCharacter
              (__this,uVar3 & 0xff,0,(System_Action_bool__string__o *)0x0,1,in_R9);
    return;
  }
LAB_04168920:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$OnAccountLoggedOut
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__OnAccountLoggedOut (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4168930

void Gisketch_Aottg2UI_Game_AottgGameUiActions__OnAccountLoggedOut
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._authMethodsUnavailable + 3) = 0;
  Gisketch_Aottg2UI_Game_AottgCharacterInfoState__ApplyLocalToRuntime((MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(__this,method);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RebuildProfileScreen(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$RefreshRemoteProfileAndCharacter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshRemoteProfileAndCharacter (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, bool rebuildProfileScreen, bool forceRefresh, System_Action_bool__string__o* onComplete, bool showProfileErrorToast, const MethodInfo* method);
// 0x4163130

void Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshRemoteProfileAndCharacter
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               bool_conflict rebuildProfileScreen,bool_conflict forceRefresh,
               System_Action_bool__string__o *onComplete,bool_conflict showProfileErrorToast,
               MethodInfo *method)

{
  byte bVar1;
  void *pvVar2;
  char cVar3;
  bool_conflict bVar4;
  Il2CppObject *__this_00;
  Il2CppClass *pIVar5;
  System_String_o *pSVar6;
  System_Action_bool__string__o *onComplete_00;
  MethodInfo *method_00;
  
  if (DAT_05704a80 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&MethodInfo_Void__RefreshRemoteProfileAndCharacter_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass74_0);
    il2cpp_init_method_metadata(&"Profile.RefreshRemoteProfile");
    il2cpp_init_method_metadata(&"begin rebuild=");
    il2cpp_init_method_metadata(&"not_logged_in");
    DAT_05704a80 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass74_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_00[1].monitor = __this;
  il2cpp_runtime_glue(&__this_00[1].monitor,__this);
  *(char *)&__this_00[2].klass = (char)rebuildProfileScreen;
  *(char *)((long)&__this_00[2].klass + 1) = (char)showProfileErrorToast;
  *(char *)((long)&__this_00[2].klass + 2) = (char)forceRefresh;
  __this_00[2].monitor = onComplete;
  il2cpp_runtime_glue(&__this_00[2].monitor);
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
    method_00 = TypeInfo_AottgGameUiActions;
  }
  else {
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
    method_00 = TypeInfo_AottgGameUiActions;
  }
  TypeInfo_AottgGameUiActions = method_00;
  if (cVar3 != '\0') {
    if (*(int *)((long)&method_00[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__HasCachedRemoteIdentity(method_00);
    *(byte *)((long)&(__this->fields)._authMethodsUnavailable + 3) = (byte)bVar4 ^ 1;
    Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshProfileState(__this,(MethodInfo *)onComplete);
    Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(__this,(MethodInfo *)onComplete);
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar5 = (Il2CppClass *)
             Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__NowMs((MethodInfo *)0x0);
    __this_00[1].klass = pIVar5;
    if (*(int *)(DAT_05711048 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = System_Boolean__ToString((int)__this_00 + 0x20,(MethodInfo *)0x0);
    pSVar6 = System_String__Concat("begin rebuild=",pSVar6,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Profile.RefreshRemoteProfile",pSVar6,(MethodInfo *)0x0);
    onComplete_00 = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
    System_Action<bool__object>___ctor();
    bVar1 = *(byte *)((long)&__this_00[2].klass + 2);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ApplicationManagers_AccountManager__GetProfile(onComplete_00,(uint)bVar1,(MethodInfo *)0x0);
    return;
  }
  *(undefined1 *)((long)&(__this->fields)._authMethodsUnavailable + 3) = 0;
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshProfileState(__this,(MethodInfo *)onComplete);
  pvVar2 = __this_00[2].monitor;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  (**(code **)((long)pvVar2 + 0x18))
            (*(undefined8 *)((long)pvVar2 + 0x40),0,"not_logged_in",
             *(undefined8 *)((long)pvVar2 + 0x28),*(code **)((long)pvVar2 + 0x18));
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$RefreshRemoteCharacterInfo
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshRemoteCharacterInfo (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, bool rebuildProfileScreen, bool forceRefresh, System_Action_bool__string__o* onComplete, bool showProfileErrorToast, const MethodInfo* method);
// 0x4168b90

void Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshRemoteCharacterInfo
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               bool_conflict rebuildProfileScreen,bool_conflict forceRefresh,
               System_Action_bool__string__o *onComplete,bool_conflict showProfileErrorToast,
               MethodInfo *method)

{
  code *vtable_dispatch;
  char cVar1;
  bool_conflict bVar2;
  Il2CppObject *__this_00;
  Il2CppClass *pIVar3;
  System_String_o *pSVar4;
  System_Action_bool__string__JSONNode__o *onComplete_00;
  
  if (DAT_05704a81 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string__JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&MethodInfo_Void__RefreshRemoteCharacterInfo_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass75_0);
    il2cpp_init_method_metadata(&"Profile.RefreshRemoteCharacterInfo");
    il2cpp_init_method_metadata(&"begin rebuild=");
    il2cpp_init_method_metadata(&"not_logged_in");
    DAT_05704a81 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass75_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  *(char *)&__this_00[1].monitor = (char)showProfileErrorToast;
  __this_00[2].klass = (Il2CppClass *)__this;
  il2cpp_runtime_glue(__this_00 + 2,__this);
  *(char *)&__this_00[2].monitor = (char)rebuildProfileScreen;
  __this_00[3].klass = (Il2CppClass *)onComplete;
  il2cpp_runtime_glue(__this_00 + 3);
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar1 = (char)bVar2;
  }
  else {
    bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar1 = (char)bVar2;
  }
  if (cVar1 != '\0') {
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar3 = (Il2CppClass *)
             Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__NowMs((MethodInfo *)0x0);
    __this_00[1].klass = pIVar3;
    if (*(int *)(DAT_05711048 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = System_Boolean__ToString((int)__this_00 + 0x28,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat("begin rebuild=",pSVar4,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Profile.RefreshRemoteCharacterInfo",pSVar4,(MethodInfo *)0x0);
    onComplete_00 = (System_Action_bool__string__JSONNode__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string__JSONNode);
    System_Action<bool__object__object>___ctor();
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ApplicationManagers_AccountManager__GetCharacterInfo
              (onComplete_00,forceRefresh & 0xff,(MethodInfo *)0x0);
    return;
  }
  *(undefined1 *)((long)&(__this->fields)._authMethodsUnavailable + 3) = 0;
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshProfileState(__this,(MethodInfo *)onComplete);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(__this,(MethodInfo *)onComplete);
  pIVar3 = __this_00[3].klass;
  if (pIVar3 == (Il2CppClass *)0x0) {
    return;
  }
  vtable_dispatch = (code *)(pIVar3->_1).namespaze;
  (*vtable_dispatch)
            ((pIVar3->_1).element_class,0,"not_logged_in",*(undefined8 *)&(pIVar3->_1).byval_arg.bits,
             vtable_dispatch);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$HasCachedRemoteIdentity
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameUiActions__HasCachedRemoteIdentity (const MethodInfo* method);
// 0x4168a40

bool_conflict Gisketch_Aottg2UI_Game_AottgGameUiActions__HasCachedRemoteIdentity(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  
  if (DAT_05704a82 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704a82 = '\x01';
    iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704b27 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704b27 = '\x01';
    iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    cVar1 = *(char *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x28);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x28);
  }
  if (cVar1 != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05704b28 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AccountManager);
      DAT_05704b28 = '\x01';
      iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_init_class();
    }
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_AccountManager + 0xb8) >> 8),
                    *(char *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x38) != '\0');
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$RebuildProfileScreen
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__RebuildProfileScreen (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4168950

void Gisketch_Aottg2UI_Game_AottgGameUiActions__RebuildProfileScreen
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar3;
  MethodInfo *method_00;
  
  if (DAT_05704a83 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"profile");
    DAT_05704a83 = '\x01';
  }
  pGVar3 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pGVar3 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
    if (pGVar3 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
LAB_04168a20:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pGVar3->fields)._Manifest_k__BackingField !=
        (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      pGVar3 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                         ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0
                         );
      if ((pGVar3 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
         (pGVar1 = (pGVar3->fields)._Manifest_k__BackingField,
         pGVar1 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) goto LAB_04168a20;
      method_00 = "profile";
      bVar2 = System_String__op_Equality
                        ((System_String_o *)(pGVar1->fields).dialogs,(System_String_o *)"profile"
                         ,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshProfileState(__this,method_00);
        Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshEmoteState(__this,method_00);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$RefreshCurrentScreenManifest
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshCurrentScreenManifest (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4168de0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshCurrentScreenManifest
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  
  if (DAT_05704a84 == '\0') {
    il2cpp_init_method_metadata(&"profile.save.idle");
    DAT_05704a84 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshProfileState(__this,method);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshEmoteState(__this,method);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(__this,method);
  __this_00 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                        ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0)
  ;
  if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool(__this_00,"profile.save.idle",1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$RefreshProfileState
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshProfileState (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x41646a0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshProfileState
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  System_String_o **ppSVar3;
  System_String_o *key;
  bool_conflict bVar4;
  bool_conflict bVar5;
  bool_conflict bVar6;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar7;
  System_String_o *pSVar8;
  System_String_array *pSVar9;
  System_String_o *pSVar10;
  undefined8 *puVar11;
  SimpleJSONFixed_JSONNode_o *pSVar12;
  SimpleJSONFixed_JSONNode_o *pSVar13;
  long *plVar14;
  System_String_o *pSVar15;
  System_String_o *value;
  ulong uVar16;
  MethodInfo *pMVar17;
  System_String_o **ppSVar18;
  uint value_00;
  undefined4 in_stack_ffffffffffffff78;
  uint in_stack_ffffffffffffff7c;
  undefined4 in_stack_ffffffffffffff80;
  undefined4 uVar19;
  undefined4 uVar20;
  System_String_o *pSVar21;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_50;
  
  if (DAT_05704a85 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"profile.discord.status");
    il2cpp_init_method_metadata(&"profile.identity.ready");
    il2cpp_init_method_metadata(&"google");
    il2cpp_init_method_metadata(&"profile.avatarSprite");
    il2cpp_init_method_metadata(&"profile.accountName");
    il2cpp_init_method_metadata(&"profile.characterName");
    il2cpp_init_method_metadata(&"profile.google.link.visible");
    il2cpp_init_method_metadata(&"socials=");
    il2cpp_init_method_metadata(&"guild");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"profile.characterGuild");
    il2cpp_init_method_metadata(&"profile.socials.empty");
    il2cpp_init_method_metadata(&"state=");
    il2cpp_init_method_metadata(&"profile.identity.loading");
    il2cpp_init_method_metadata(&"profile.google.status");
    il2cpp_init_method_metadata(&"profile.bio");
    il2cpp_init_method_metadata(&"profile.characterPresetGuild");
    il2cpp_init_method_metadata(&"Profile.RefreshProfileState");
    il2cpp_init_method_metadata(&"badges");
    il2cpp_init_method_metadata(&"profile.characterInfoJson");
    il2cpp_init_method_metadata(&"profile.bannerSprite");
    il2cpp_init_method_metadata(&"profile.discord.link.visible");
    il2cpp_init_method_metadata(&"guildPresetId");
    il2cpp_init_method_metadata(&"discord");
    il2cpp_init_method_metadata(&"profile.characterBadges");
    il2cpp_init_method_metadata(&"profile.patreon.status");
    il2cpp_init_method_metadata(&"profile.patreon.cta.visible");
    DAT_05704a85 = '\x01';
  }
  uVar20 = 0;
  pGVar7 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  uVar19 = CONCAT13(pGVar7 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0,
                    (int3)in_stack_ffffffffffffff80);
  if (*(int *)(DAT_05711048 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar8 = System_Boolean__ToString((bool_conflict)&stack0xffffffffffffff83,(MethodInfo *)0x0);
  pSVar8 = System_String__Concat("state=",pSVar8,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_50,"Profile.RefreshProfileState",pSVar8,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  pSVar8 = local_50.fields._area;
  pSVar21 = local_50.fields._detail;
  if (pGVar7 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) goto LAB_04165262;
  pSVar9 = Gisketch_Aottg2UI_Game_AottgActiveProfile__SocialLinks((MethodInfo *)0x0);
  pMVar17 = TypeInfo_AottgGameUiActions;
  pSVar8 = local_50.fields._area;
  pSVar21 = local_50.fields._detail;
  if (*(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4) == 0) {
    il2cpp_init_class();
    pSVar8 = local_50.fields._area;
    pSVar21 = local_50.fields._detail;
  }
  bVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__IsAccountAuthLoading(pMVar17);
  in_stack_ffffffffffffff7c = 1;
  if ((char)bVar4 == '\0') {
    in_stack_ffffffffffffff7c = (uint)*(byte *)((long)&(__this->fields)._authMethodsUnavailable + 3)
    ;
  }
  if (pSVar9 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar20 = (undefined4)pSVar9->max_length;
  pSVar10 = System_Int32__ToString((int32_t)&stack0xffffffffffffff84,(MethodInfo *)0x0);
  pSVar10 = System_String__Concat("socials=",pSVar10,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Profile.RefreshProfileState",pSVar10,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (pGVar7 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Gisketch_Aottg2UI_State_GisketchUIState__SetBool
            (pGVar7,"profile.identity.loading",(uint)(in_stack_ffffffffffffff7c != 0),(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (pGVar7 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Gisketch_Aottg2UI_State_GisketchUIState__SetBool
            (pGVar7,"profile.identity.ready",(uint)(in_stack_ffffffffffffff7c == 0),(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  pSVar10 = Gisketch_Aottg2UI_Game_AottgActiveProfile__CharacterName((MethodInfo *)0x0);
  if (pGVar7 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar7,"profile.characterName",pSVar10,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  pSVar10 = Gisketch_Aottg2UI_Game_AottgActiveProfile__AccountName((MethodInfo *)0x0);
  if (pGVar7 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar7,"profile.accountName",pSVar10,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  pSVar10 = Gisketch_Aottg2UI_Game_AottgActiveProfile__Bio((MethodInfo *)0x0);
  if (pGVar7 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar7,"profile.bio",pSVar10,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  pSVar10 = Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarSprite((MethodInfo *)0x0);
  if (pGVar7 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar7,"profile.avatarSprite",pSVar10,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  pSVar10 = Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerSprite((MethodInfo *)0x0);
  if (pGVar7 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar7,"profile.bannerSprite",pSVar10,(MethodInfo *)0x0);
  bVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsSupporter((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = ApplicationManagers_AccountManager__IsOAuthProviderLinked("discord",(MethodInfo *)0x0);
  bVar6 = ApplicationManagers_AccountManager__IsOAuthProviderLinked("google",(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704a87 == '\0') {
    il2cpp_init_method_metadata(&"Loading...");
    il2cpp_init_method_metadata(&"Not Connected");
    il2cpp_init_method_metadata(&"Thank you for supporting AoTTG 2! Perks unlocked.");
    DAT_05704a87 = '\x01';
  }
  if (pGVar7 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((byte)bVar4 == 0) {
    puVar11 = &"Not Connected";
  }
  else {
    puVar11 = &"Thank you for supporting AoTTG 2! Perks unlocked.";
  }
  if (in_stack_ffffffffffffff7c != 0) {
    puVar11 = &"Loading...";
  }
  Gisketch_Aottg2UI_State_GisketchUIState__Set
            (pGVar7,"profile.patreon.status",(System_String_o *)*puVar11,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (pGVar7 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Gisketch_Aottg2UI_State_GisketchUIState__SetBool
            (pGVar7,"profile.patreon.cta.visible",(uint)(((byte)bVar4 ^ 1) & in_stack_ffffffffffffff7c == 0),
             (MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704a86 == '\0') {
    il2cpp_init_method_metadata(&"Linked");
    il2cpp_init_method_metadata(&"Loading...");
    il2cpp_init_method_metadata(&"Not Connected");
    DAT_05704a86 = '\x01';
  }
  if (pGVar7 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((byte)bVar5 == 0) {
    puVar11 = &"Not Connected";
  }
  else {
    puVar11 = &"Linked";
  }
  if (in_stack_ffffffffffffff7c != 0) {
    puVar11 = &"Loading...";
  }
  Gisketch_Aottg2UI_State_GisketchUIState__Set
            (pGVar7,"profile.discord.status",(System_String_o *)*puVar11,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (pGVar7 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Gisketch_Aottg2UI_State_GisketchUIState__SetBool
            (pGVar7,"profile.discord.link.visible",(uint)(((byte)bVar5 ^ 1) & in_stack_ffffffffffffff7c == 0),
             (MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704a86 == '\0') {
    il2cpp_init_method_metadata(&"Linked");
    il2cpp_init_method_metadata(&"Loading...");
    il2cpp_init_method_metadata(&"Not Connected");
    DAT_05704a86 = '\x01';
  }
  if (pGVar7 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((byte)bVar6 == 0) {
    puVar11 = &"Not Connected";
  }
  else {
    puVar11 = &"Linked";
  }
  if (in_stack_ffffffffffffff7c != 0) {
    puVar11 = &"Loading...";
  }
  Gisketch_Aottg2UI_State_GisketchUIState__Set
            (pGVar7,"profile.google.status",(System_String_o *)*puVar11,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (pGVar7 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Gisketch_Aottg2UI_State_GisketchUIState__SetBool
            (pGVar7,"profile.google.link.visible",(uint)(((byte)bVar6 ^ 1) & in_stack_ffffffffffffff7c == 0),
             (MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (pGVar7 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Gisketch_Aottg2UI_State_GisketchUIState__SetBool
            (pGVar7,"profile.socials.empty",(uint)((int)pSVar9->max_length == 0),(MethodInfo *)0x0);
  ppSVar18 = pSVar9->m_Items;
  uVar16 = 0;
  do {
    uVar1 = (uint)pSVar9->max_length;
    value_00 = 0;
    if ((long)uVar16 < (long)(int)uVar1) {
      if (uVar1 <= uVar16) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar4 = System_String__IsNullOrWhiteSpace(*ppSVar18,(MethodInfo *)0x0);
      value_00 = (uint)(byte)((byte)bVar4 ^ 1);
    }
    pGVar7 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
    pSVar10 = Gisketch_Aottg2UI_Game_AottgProfileStateKeys__Social
                        ((int32_t)uVar16,(MethodInfo *)0x0);
    if (value_00 == 0) {
      ppSVar3 = *(System_String_o ***)(DAT_057110b0 + 0xb8);
    }
    else {
      ppSVar3 = ppSVar18;
      if ((uint)pSVar9->max_length <= uVar16) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    if (pGVar7 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar7,pSVar10,*ppSVar3,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
    pSVar10 = Gisketch_Aottg2UI_Game_AottgProfileStateKeys__SocialVisible
                        ((int32_t)uVar16,(MethodInfo *)0x0);
    if (pGVar7 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool(pGVar7,pSVar10,value_00,(MethodInfo *)0x0);
    uVar16 = uVar16 + 1;
    ppSVar18 = ppSVar18 + 1;
  } while (uVar16 != 8);
  pSVar12 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__Current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
LAB_04164fc4:
    pSVar10 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar13 = (SimpleJSONFixed_JSONNode_o *)
              (*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar12,"guild",(pSVar12->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar13,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') goto LAB_04164fc4;
    plVar14 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar12,"guild",(pSVar12->klass->vtable)._7_get_Item.method);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar10 = (System_String_o *)(**(code **)(*plVar14 + 0x1c8))(plVar14);
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar15 = "None";
  if ((char)bVar4 != '\0') {
    if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar13 = (SimpleJSONFixed_JSONNode_o *)
              (*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar12,"guildPresetId",(pSVar12->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar13,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pSVar15 = "None";
    if ((char)bVar4 != '\0') {
      plVar14 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                  (pSVar12,"guildPresetId",(pSVar12->klass->vtable)._7_get_Item.method)
      ;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar15 = (System_String_o *)(**(code **)(*plVar14 + 0x1c8))(plVar14);
      bVar4 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
      pSVar15 = "None";
      if ((char)bVar4 == '\0') {
        plVar14 = (long *)(*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                    (pSVar12,"guildPresetId",
                                     (pSVar12->klass->vtable)._7_get_Item.method);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar15 = (System_String_o *)(**(code **)(*plVar14 + 0x1c8))(plVar14);
        pSVar15 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel
                            (pSVar15,(MethodInfo *)0x0);
      }
    }
  }
  pGVar7 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  key = "profile.characterInfoJson";
  if ((char)bVar4 == '\0') {
    value = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    value = (System_String_o *)
            (*(pSVar12->klass->vtable)._3_ToString.methodPtr)
                      (pSVar12,(pSVar12->klass->vtable)._3_ToString.method);
  }
  if (pGVar7 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar7,key,value,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  bVar4 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
  if (pGVar7 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((char)bVar4 != '\0') {
    pSVar10 = "None";
  }
  Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar7,"profile.characterGuild",pSVar10,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (pGVar7 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar7,"profile.characterPresetGuild",pSVar15,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar17 = (MethodInfo *)0x0;
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar10 = "profile.characterBadges";
  if ((char)bVar4 == '\0') {
    pSVar12 = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar2 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
  }
  else {
    if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pMVar17 = "badges";
    pSVar12 = (SimpleJSONFixed_JSONNode_o *)
              (*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar12,"badges",(pSVar12->klass->vtable)._7_get_Item.method);
    iVar2 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  pSVar15 = Gisketch_Aottg2UI_Game_AottgGameUiActions__BadgeLabels(pSVar12,pMVar17);
  if (pGVar7 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar7,pSVar10,pSVar15,(MethodInfo *)0x0);
LAB_04165262:
  __this_00.fields._area._4_4_ = in_stack_ffffffffffffff7c;
  __this_00.fields._area._0_4_ = in_stack_ffffffffffffff78;
  __this_00.fields._detail._0_4_ = uVar19;
  __this_00.fields._detail._4_4_ = uVar20;
  __this_00.fields._startMs = (int64_t)pSVar8;
  __this_00.fields._24_8_ = pSVar21;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_00,(MethodInfo *)&stack0xffffffffffffff88);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$ConnectionStatus
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameUiActions__ConnectionStatus (bool linked, bool loading, const MethodInfo* method);
// 0x4168ec0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameUiActions__ConnectionStatus
          (bool_conflict linked,bool_conflict loading,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if (DAT_05704a86 == '\0') {
    il2cpp_init_method_metadata(&"Linked");
    il2cpp_init_method_metadata(&"Loading...");
    il2cpp_init_method_metadata(&"Not Connected");
    DAT_05704a86 = '\x01';
  }
  if ((char)linked == '\0') {
    puVar1 = &"Not Connected";
  }
  else {
    puVar1 = &"Linked";
  }
  if ((char)loading != '\0') {
    puVar1 = &"Loading...";
  }
  return (System_String_o *)*puVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$PatreonConnectionStatus
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameUiActions__PatreonConnectionStatus (bool supporter, bool loading, const MethodInfo* method);
// 0x4168e50

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameUiActions__PatreonConnectionStatus
          (bool_conflict supporter,bool_conflict loading,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if (DAT_05704a87 == '\0') {
    il2cpp_init_method_metadata(&"Loading...");
    il2cpp_init_method_metadata(&"Not Connected");
    il2cpp_init_method_metadata(&"Thank you for supporting AoTTG 2! Perks unlocked.");
    DAT_05704a87 = '\x01';
  }
  if ((char)supporter == '\0') {
    puVar1 = &"Not Connected";
  }
  else {
    puVar1 = &"Thank you for supporting AoTTG 2! Perks unlocked.";
  }
  if ((char)loading != '\0') {
    puVar1 = &"Loading...";
  }
  return (System_String_o *)*puVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$RefreshEmoteState
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshEmoteState (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4167f10

void Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshEmoteState
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_ListSetting_T__o *__this_00;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar3;
  long lVar4;
  Settings_BaseSetting_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  int index;
  
  if (DAT_05704a88 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704a88 = '\x01';
  }
  pGVar3 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if ((pGVar3 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) ||
     (lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88), lVar4 == 0)) {
    return;
  }
  index = 0;
  while ((*(Settings_ListSetting_T__o **)(lVar4 + 0x20) != (Settings_ListSetting_T__o *)0x0 &&
         (pSVar5 = Settings_ListSetting<object>__GetItemAt
                             (*(Settings_ListSetting_T__o **)(lVar4 + 0x20),index,MethodInfo_BaseSetting_GetItemAt),
         pSVar5 != (Settings_BaseSetting_o *)0x0))) {
    bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
    if (((pSVar5->klass->_2).naturalAligment < bVar1) ||
       ((pSVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) {
LAB_0416825b:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar5);
    }
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
    if ((lVar4 == 0) ||
       (__this_00 = *(Settings_ListSetting_T__o **)(lVar4 + 0x28),
       __this_00 == (Settings_ListSetting_T__o *)0x0)) break;
    pSVar7 = pSVar5[1].monitor;
    pSVar5 = Settings_ListSetting<object>__GetItemAt(__this_00,index,MethodInfo_BaseSetting_GetItemAt);
    if (pSVar5 == (Settings_BaseSetting_o *)0x0) break;
    bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
    if (((pSVar5->klass->_2).naturalAligment < bVar1) ||
       ((pSVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) goto LAB_0416825b;
    pSVar8 = pSVar5[1].monitor;
    pGVar3 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
    pSVar6 = Gisketch_Aottg2UI_Game_AottgProfileStateKeys__EmoteText(index,(MethodInfo *)0x0);
    if (pGVar3 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) break;
    Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar3,pSVar6,pSVar7,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
    pSVar7 = Gisketch_Aottg2UI_Game_AottgProfileStateKeys__EmoteStickerLabel
                       (index,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05704a89 == '\0') {
      il2cpp_init_method_metadata(&"None");
      il2cpp_init_method_metadata(&"Emoji");
      DAT_05704a89 = '\x01';
    }
    bVar2 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
    pSVar6 = "None";
    if ((char)bVar2 == '\0') {
      if (pSVar8 == (System_String_o *)0x0) break;
      pSVar6 = System_String__Replace
                         (pSVar8,"Emoji",
                          (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                          (MethodInfo *)0x0);
    }
    if (pGVar3 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) break;
    Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar3,pSVar7,pSVar6,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                       ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
    pSVar7 = Gisketch_Aottg2UI_Game_AottgProfileStateKeys__EmoteStickerSprite
                       (index,(MethodInfo *)0x0);
    bVar2 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pSVar8 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite(pSVar8,(MethodInfo *)0x0);
    }
    else {
      pSVar8 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    if (pGVar3 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) break;
    Gisketch_Aottg2UI_State_GisketchUIState__Set(pGVar3,pSVar7,pSVar8,(MethodInfo *)0x0);
    index = index + 1;
    if (index == 8) {
      return;
    }
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x88);
    if (lVar4 == 0) break;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$StickerSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameUiActions__StickerSprite (System_String_o* value, const MethodInfo* method);
// 0x41694d0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameUiActions__StickerSprite(System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite(value,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$StickerLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameUiActions__StickerLabel (System_String_o* value, const MethodInfo* method);
// 0x4169450

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameUiActions__StickerLabel(System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  
  if (DAT_05704a89 == '\0') {
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Emoji");
    DAT_05704a89 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "None";
  }
  if (value != (System_String_o *)0x0) {
    pSVar2 = System_String__Replace
                       (value,"Emoji",(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8)
                        ,(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$BadgeLabels
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameUiActions__BadgeLabels (SimpleJSONFixed_JSONNode_o* badges, const MethodInfo* method);
// 0x4168f30

/* WARNING: Removing unreachable block (ram,0x0416933a) */
/* WARNING: Removing unreachable block (ram,0x041692e0) */

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameUiActions__BadgeLabels
          (SimpleJSONFixed_JSONNode_o *badges,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  System_Object_array *pSVar4;
  char cVar5;
  bool_conflict bVar6;
  int iVar7;
  System_Collections_Generic_List_object__o *__this;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  System_String_o *pSVar11;
  System_String_array *value;
  long lVar12;
  
  if (DAT_05704a8a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&", ");
    DAT_05704a8a = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(badges,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return "None";
  }
  if (badges != (SimpleJSONFixed_JSONNode_o *)0x0) {
    iVar7 = (*(badges->klass->vtable)._11_get_Count.methodPtr)
                      (badges,(badges->klass->vtable)._11_get_Count.method);
    if (iVar7 == 0) {
      return "None";
    }
    __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor(__this,MethodInfo_List_1_System_String);
    plVar8 = (long *)(*(badges->klass->vtable)._27_get_Children.methodPtr)
                               (badges,(badges->klass->vtable)._27_get_Children.method);
    if (plVar8 != (long *)0x0) {
      lVar3 = *plVar8;
      if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
        lVar12 = 0;
        do {
          if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar12) == TypeInfo_IEnumerable_JSONNode) {
            puVar9 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar12) * 0x10 + lVar3 + 0x138);
            goto LAB_041690da;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar12);
      }
      puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IEnumerable_JSONNode,0);
LAB_041690da:
      plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      do {
        lVar3 = *plVar8;
        if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
          lVar12 = 0;
          do {
            if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
              puVar9 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar12) * 0x10 + lVar3 + 0x138)
              ;
              goto LAB_04169183;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar12);
        }
        puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IEnumerator,0);
LAB_04169183:
        cVar5 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if (cVar5 == '\0') {
          if (plVar8 == (long *)0x0) goto LAB_041692d6;
          lVar3 = *plVar8;
          if ((ulong)*(ushort *)(lVar3 + 0x12e) == 0) goto LAB_041692af;
          lVar12 = 0;
          goto LAB_041692a0;
        }
        lVar3 = *plVar8;
        if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
          lVar12 = 0;
          do {
            if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar12) == TypeInfo_IEnumerator_JSONNode) {
              puVar9 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar12) * 0x10 + lVar3 + 0x138)
              ;
              goto LAB_041691f3;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar12);
        }
        puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IEnumerator_JSONNode,0);
LAB_041691f3:
        plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar11 = (System_String_o *)(**(code **)(*plVar10 + 0x1c8))(plVar10);
        pSVar11 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeLabel
                            (pSVar11,(MethodInfo *)0x0);
        lVar3 = MethodInfo_Void_Add;
        if (__this == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar11;
          il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,pSVar11);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this,(Il2CppObject *)pSVar11,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
  goto LAB_04169330;
  while (lVar12 = lVar12 + 0x10, (ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar12) {
LAB_041692a0:
    if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
      puVar9 = (undefined8 *)
               (lVar3 + (long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
      goto LAB_041692cd;
    }
  }
LAB_041692af:
  puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IDisposable,0);
LAB_041692cd:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_041692d6:
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    value = (System_String_array *)
            System_Collections_Generic_List<object>__ToArray(__this,MethodInfo_String___ToArray);
    pSVar11 = System_String__Join(", ",value,(MethodInfo *)0x0);
    return pSVar11;
  }
LAB_04169330:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterProfileActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterProfileActions (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x4169510

void Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterProfileActions
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  System_Action_GisketchActionContext__o *pSVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_05704a8b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
    il2cpp_init_method_metadata(&MethodInfo_Void_SaveAvatar);
    il2cpp_init_method_metadata(&MethodInfo_Void_SaveBanner);
    il2cpp_init_method_metadata(&MethodInfo_Void_SaveCharacter);
    il2cpp_init_method_metadata(&MethodInfo_Void_SaveDetails);
    il2cpp_init_method_metadata(&"profile.save.character");
    il2cpp_init_method_metadata(&"profile.save.avatar");
    il2cpp_init_method_metadata(&"profile.save.details");
    il2cpp_init_method_metadata(&"profile.save.idle");
    il2cpp_init_method_metadata(&"profile.save.banner");
    DAT_05704a8b = '\x01';
  }
  pSVar1 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"profile.save.avatar",pSVar1,
             (MethodInfo *)0x0);
  pSVar1 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"profile.save.banner",pSVar1,
             (MethodInfo *)0x0);
  pSVar1 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"profile.save.details",pSVar1,
             (MethodInfo *)0x0);
  pSVar1 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  method_00 = "profile.save.character";
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
             (System_String_o *)"profile.save.character",pSVar1,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterEmoteActions(__this,method_00);
  __this_00 = Gisketch_Aottg2UI_Actions_GisketchController__get_State
                        ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0)
  ;
  if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    Gisketch_Aottg2UI_State_GisketchUIState__SetBool(__this_00,"profile.save.idle",1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveAvatar
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveAvatar (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x41696d0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveAvatar
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *avatarKey;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  if (DAT_05704a8c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgProfileDialogSelection);
    il2cpp_init_method_metadata(&"Saving avatar...");
    DAT_05704a8c = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty
                    ((System_String_o *)**(undefined8 **)(TypeInfo_AottgProfileDialogSelection + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    avatarKey = (System_String_o *)**(undefined8 **)(TypeInfo_AottgProfileDialogSelection + 0xb8);
  }
  else {
    avatarKey = Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarKey((MethodInfo *)0x0);
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveProfile
            (__this,context,(System_String_o *)0x0,(System_String_o *)0x0,avatarKey,
             (System_String_o *)0x0,(System_Collections_Generic_Dictionary_string__string__o *)0x0,
             "Saving avatar...",in_stack_ffffffffffffffe0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveBanner
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveBanner (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4169b40

void Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveBanner
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *bannerKey;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  if (DAT_05704a8d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgProfileDialogSelection);
    il2cpp_init_method_metadata(&"Saving banner...");
    DAT_05704a8d = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AottgProfileDialogSelection + 0xb8) + 8),(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bannerKey = *(System_String_o **)(*(long *)(TypeInfo_AottgProfileDialogSelection + 0xb8) + 8);
  }
  else {
    bannerKey = Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerKey((MethodInfo *)0x0);
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveProfile
            (__this,context,(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
             bannerKey,(System_Collections_Generic_Dictionary_string__string__o *)0x0,"Saving banner...",
             in_stack_ffffffffffffffe0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveDetails
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveDetails (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4169bf0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveDetails
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  System_String_o *content;
  System_String_o *title;
  System_String_o *icon;
  char cVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  System_String_o *bio;
  System_Collections_Generic_List_string__o *links;
  System_Collections_Generic_Dictionary_string__string__o *socials;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *__this_01;
  MethodInfo *method_01;
  MethodInfo *in_stack_ffffffffffffffa0;
  
  if (DAT_05704a8e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"Bio must be 512 characters or fewer.");
    il2cpp_init_method_metadata(&"Saving profile...");
    il2cpp_init_method_metadata(&"warning");
    il2cpp_init_method_metadata(&"Profile");
    il2cpp_init_method_metadata(&"profile-details-bio");
    il2cpp_init_method_metadata(&"Account name must be 3-25 characters.");
    il2cpp_init_method_metadata(&"profile-details-name");
    DAT_05704a8e = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pSVar3 = (System_String_o *)0x0;
  }
  else {
    if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = Gisketch_Aottg2UI_Game_AottgGameUiActions__FindInput(context,"profile-details-name",method);
    if (pSVar3 == (System_String_o *)0x0) goto LAB_04169f2a;
    method = (MethodInfo *)0x0;
    pSVar3 = System_String__Trim(pSVar3,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)
              Gisketch_Aottg2UI_Game_AottgGameUiActions__FindInput(context,"profile-details-bio",method);
  if (method_00 != (MethodInfo *)0x0) {
    method_01 = (MethodInfo *)0x0;
    bio = System_String__Trim((System_String_o *)method_00,(MethodInfo *)0x0);
    links = Gisketch_Aottg2UI_Game_AottgGameUiActions__SocialLinks(context,method_00);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
      bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      cVar1 = (char)bVar2;
      title = "Profile";
      icon = "warning";
    }
    else {
      bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      cVar1 = (char)bVar2;
      title = "Profile";
      icon = "warning";
    }
    "Profile" = title;
    "warning" = icon;
    if (cVar1 != '\0') {
      if (pSVar3 == (System_String_o *)0x0) goto LAB_04169f2a;
      content = "Account name must be 3-25 characters.";
      if (0x16 < (pSVar3->fields)._stringLength - 3U) goto joined_r0x04169ea6;
    }
    if (bio != (System_String_o *)0x0) {
      content = "Bio must be 512 characters or fewer.";
      if ((bio->fields)._stringLength < 0x201) {
        if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
          il2cpp_init_class();
        }
        socials = Gisketch_Aottg2UI_Game_AottgGameUiActions__ToSocials
                            ((System_Collections_Generic_IEnumerable_string__o *)links,method_01);
        Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveProfile
                  (__this,context,pSVar3,bio,(System_String_o *)0x0,(System_String_o *)0x0,socials,
                   "Saving profile...",in_stack_ffffffffffffffa0);
        return;
      }
joined_r0x04169ea6:
      if (DAT_05704a95 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_AottgToastDefinition);
        DAT_05704a95 = '\x01';
      }
      __this_00 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                             (MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        __this_01 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)
                    il2cpp_runtime_glue(TypeInfo_AottgToastDefinition);
        Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor
                  (__this_01,1,icon,title,content,(System_String_o *)0x0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_GisketchUIRoot__ShowToast(__this_00,__this_01,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
LAB_04169f2a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveCharacter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveCharacter (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x416a5e0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveCharacter
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  uint uVar3;
  uint uVar4;
  Il2CppObject *__this_00;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *value;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_Collections_Generic_IEnumerable_string__o *badges;
  System_String_o *pSVar9;
  System_String_array *nameEffectColors;
  System_String_o *pSVar10;
  System_String_array *guildEffectColors;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar12;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *pGVar13;
  System_Action_bool__string__JSONNode__o *onComplete;
  MethodInfo *pMVar14;
  
  if (DAT_05704a8f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string__JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_AottgCharacterTextField);
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&MethodInfo_Void__SaveCharacter_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass91_0);
    il2cpp_init_method_metadata(&"Guild must be 31 characters or fewer.");
    il2cpp_init_method_metadata(&"Saving character...");
    il2cpp_init_method_metadata(&"Character name must be 1-31 characters.");
    il2cpp_init_method_metadata(&"profile.save");
    il2cpp_init_method_metadata(&"profile-character-name");
    il2cpp_init_method_metadata(&"warning");
    il2cpp_init_method_metadata(&"Profile");
    il2cpp_init_method_metadata(&"profile-character-guild");
    il2cpp_init_method_metadata(&"information");
    il2cpp_init_method_metadata(&"profile-character-name-effect");
    il2cpp_init_method_metadata(&"profile-character-guild-effect");
    il2cpp_init_method_metadata(&"checkmark");
    il2cpp_init_method_metadata(&"Saved locally.");
    DAT_05704a8f = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass91_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) {
LAB_0416ad22:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_00[1].klass = (Il2CppClass *)__this;
  pMVar14 = (MethodInfo *)__this;
  il2cpp_runtime_glue(__this_00 + 1);
  if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = Gisketch_Aottg2UI_Game_AottgGameUiActions__FindInput(context,"profile-character-name",pMVar14);
  if (*(int *)(TypeInfo_AottgCharacterTextField + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value
                     ("profile-character-name",pSVar5,(MethodInfo *)0x0);
  if (pSVar5 == (System_String_o *)0x0) goto LAB_0416ad22;
  pMVar14 = (MethodInfo *)0x0;
  pSVar5 = System_String__Trim(pSVar5,(MethodInfo *)0x0);
  pSVar6 = Gisketch_Aottg2UI_Game_AottgGameUiActions__FindInput(context,"profile-character-guild",pMVar14);
  pSVar6 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__Value
                     ("profile-character-guild",pSVar6,(MethodInfo *)0x0);
  if (pSVar6 == (System_String_o *)0x0) goto LAB_0416ad22;
  value = System_String__Trim(pSVar6,(MethodInfo *)0x0);
  pSVar7 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__VisibleText(pSVar5,(MethodInfo *)0x0);
  pSVar8 = Gisketch_Aottg2UI_Game_AottgCharacterTextField__VisibleText(value,(MethodInfo *)0x0);
  pMVar14 = (MethodInfo *)0x0;
  bVar2 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
  pSVar10 = "warning";
  pSVar9 = "Profile";
  pSVar6 = "Character name must be 1-31 characters.";
  if ((char)bVar2 != '\0') {
joined_r0x0416ab5b:
    if (DAT_05704a95 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AottgToastDefinition);
      DAT_05704a95 = '\x01';
    }
    pGVar12 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                        ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0)
    ;
    if (pGVar12 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      return;
    }
    pGVar13 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)il2cpp_runtime_glue(TypeInfo_AottgToastDefinition);
    Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor
              (pGVar13,1,pSVar10,pSVar9,pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
    goto LAB_0416abc1;
  }
  if (pSVar7 == (System_String_o *)0x0) goto LAB_0416ad22;
  if (0x1f < (pSVar7->fields)._stringLength) goto joined_r0x0416ab5b;
  if (pSVar8 == (System_String_o *)0x0) goto LAB_0416ad22;
  pSVar6 = "Guild must be 31 characters or fewer.";
  if (0x1f < (pSVar8->fields)._stringLength) goto joined_r0x0416ab5b;
  if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704b29 != '\0') goto LAB_0416a88a;
LAB_0416ac1b:
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    DAT_05704b29 = '\x01';
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  else {
    if (DAT_05704b29 == '\0') goto LAB_0416ac1b;
LAB_0416a88a:
    iVar1 = *(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pSVar6 = (System_String_o *)**(undefined8 **)(TypeInfo_AottgEditCharacterDialog + 0xb8);
  badges = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__SelectedBadgeIds((MethodInfo *)0x0);
  uVar3 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectEnabled((MethodInfo *)0x0);
  pSVar9 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameEffectType((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  nameEffectColors =
       Gisketch_Aottg2UI_Game_AottgGameUiActions__EffectColors(context,"profile-character-name-effect",pMVar14);
  uVar4 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectEnabled((MethodInfo *)0x0);
  pSVar10 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildEffectType((MethodInfo *)0x0);
  guildEffectColors =
       Gisketch_Aottg2UI_Game_AottgGameUiActions__EffectColors(context,"profile-character-guild-effect",pMVar14);
  pSVar7 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__NameFont((MethodInfo *)0x0);
  pSVar8 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__GuildFont((MethodInfo *)0x0);
  pSVar11 = Gisketch_Aottg2UI_Game_AottgCharacterInfoState__WithNameAndGuild
                      (pSVar5,value,pSVar6,badges,uVar3 & 0xff,pSVar9,
                       (System_Collections_Generic_IEnumerable_string__o *)nameEffectColors,
                       uVar4 & 0xff,pSVar10,
                       (System_Collections_Generic_IEnumerable_string__o *)guildEffectColors,pSVar7,
                       pSVar8,(MethodInfo *)0x0);
  __this_00[1].monitor = pSVar11;
  il2cpp_runtime_glue(&__this_00[1].monitor,pSVar11);
  bVar2 = Gisketch_Aottg2UI_Actions_GisketchController__TryBeginOperation
                    ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                     (System_String_o *)"profile.save","Saving character...",(MethodInfo *)0x0);
  pMVar14 = "profile.save";
  pSVar9 = "information";
  pSVar6 = "Saving character...";
  pSVar5 = "Profile";
  if ((char)bVar2 != '\0') {
    if (DAT_05704a95 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AottgToastDefinition);
      DAT_05704a95 = '\x01';
    }
    pGVar12 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                        ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0)
    ;
    if (pGVar12 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pGVar13 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)il2cpp_runtime_glue(TypeInfo_AottgToastDefinition);
      Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor
                (pGVar13,2,pSVar9,pSVar5,pSVar6,(System_String_o *)pMVar14,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_GisketchUIRoot__ShowToast(pGVar12,pGVar13,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    pSVar11 = __this_00[1].monitor;
    if ((char)bVar2 != '\0') {
      onComplete = (System_Action_bool__string__JSONNode__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string__JSONNode);
      System_Action<bool__object__object>___ctor();
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      ApplicationManagers_AccountManager__UpdateCharacterInfo
                (pSVar11,onComplete,0,(MethodInfo *)0x0);
      return;
    }
    Gisketch_Aottg2UI_Game_AottgCharacterInfoState__SaveLocal(pSVar11,(MethodInfo *)0x0);
    pMVar14 = "profile.save";
    Gisketch_Aottg2UI_Actions_GisketchController__EndOperation
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
               (System_String_o *)"profile.save",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(__this,pMVar14);
    Gisketch_Aottg2UI_Game_AottgGameUiActions__CloseTopOverlay(__this,pMVar14);
    Gisketch_Aottg2UI_Game_AottgGameUiActions__RebuildProfileScreen(__this,pMVar14);
    pMVar14 = "profile.save";
    pSVar9 = "checkmark";
    pSVar6 = "Saved locally.";
    pSVar5 = "Profile";
    if (DAT_05704a95 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AottgToastDefinition);
      DAT_05704a95 = '\x01';
    }
    pGVar12 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                        ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0)
    ;
    if (pGVar12 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pGVar13 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)il2cpp_runtime_glue(TypeInfo_AottgToastDefinition);
      Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor
                (pGVar13,4,pSVar9,pSVar5,pSVar6,(System_String_o *)pMVar14,(MethodInfo *)0x0);
LAB_0416abc1:
      Gisketch_Aottg2UI_GisketchUIRoot__ShowToast(pGVar12,pGVar13,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveProfile
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveProfile (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* displayName, System_String_o* bio, System_String_o* avatarKey, System_String_o* bannerKey, System_Collections_Generic_Dictionary_string__string__o* socials, System_String_o* savingMessage, const MethodInfo* method);
// 0x4169780

void Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveProfile
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               System_String_o *displayName,System_String_o *bio,System_String_o *avatarKey,
               System_String_o *bannerKey,
               System_Collections_Generic_Dictionary_string__string__o *socials,
               System_String_o *savingMessage,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *icon;
  char cVar4;
  bool_conflict bVar5;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar6;
  MethodInfo *method_00;
  System_Action_bool__string__o *onComplete;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *__this_00;
  System_Collections_Generic_List_string__o *links;
  MethodInfo *pMVar7;
  MethodInfo *updateKey;
  
  pMVar7 = (MethodInfo *)socials;
  if (DAT_05704a90 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&MethodInfo_Void__SaveProfile_b__92_0);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"profile.save");
    il2cpp_init_method_metadata(&"Profile");
    il2cpp_init_method_metadata(&"information");
    il2cpp_init_method_metadata(&"checkmark");
    il2cpp_init_method_metadata(&"Saved locally.");
    DAT_05704a90 = '\x01';
  }
  bVar5 = Gisketch_Aottg2UI_Actions_GisketchController__TryBeginOperation
                    ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                     (System_String_o *)"profile.save",savingMessage,(MethodInfo *)0x0);
  updateKey = "profile.save";
  pSVar3 = "information";
  pSVar2 = "Profile";
  if ((char)bVar5 == '\0') {
    return;
  }
  if (DAT_05704a95 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgToastDefinition);
    DAT_05704a95 = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  pGVar6 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_AottgToastDefinition);
    Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor
              ((Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)method_00,2,pSVar3,pSVar2,
               savingMessage,(System_String_o *)updateKey,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_GisketchUIRoot__ShowToast
              (pGVar6,(Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)method_00,(MethodInfo *)0x0);
    pMVar7 = updateKey;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  else {
    bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  if (cVar4 != '\0') {
    onComplete = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
    System_Action<bool__object>___ctor();
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ApplicationManagers_AccountManager__UpdateProfile
              (displayName,bio,avatarKey,bannerKey,socials,onComplete,0,(MethodInfo *)0x0);
    return;
  }
  if (avatarKey == (System_String_o *)0x0) {
    avatarKey = Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarKey((MethodInfo *)0x0);
  }
  if (bannerKey == (System_String_o *)0x0) {
    bannerKey = Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerKey((MethodInfo *)0x0);
  }
  if (socials == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    links = Gisketch_Aottg2UI_Game_AottgActiveProfile__LocalSocialLinks((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    socials = Gisketch_Aottg2UI_Game_AottgGameUiActions__ToSocials
                        ((System_Collections_Generic_IEnumerable_string__o *)links,method_00);
    iVar1 = *(int *)(TypeInfo_AottgGameUiActions + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AottgGameUiActions + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveLocalProfile
            (displayName,bio,avatarKey,bannerKey,socials,pMVar7);
  pMVar7 = "profile.save";
  Gisketch_Aottg2UI_Actions_GisketchController__EndOperation
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
             (System_String_o *)"profile.save",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(__this,pMVar7);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__CloseTopOverlay(__this,pMVar7);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RebuildProfileScreen(__this,pMVar7);
  pMVar7 = "profile.save";
  icon = "checkmark";
  pSVar3 = "Saved locally.";
  pSVar2 = "Profile";
  if (DAT_05704a95 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgToastDefinition);
    DAT_05704a95 = '\x01';
  }
  pGVar6 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    __this_00 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)il2cpp_runtime_glue(TypeInfo_AottgToastDefinition);
    Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor
              (__this_00,4,icon,pSVar2,pSVar3,(System_String_o *)pMVar7,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_GisketchUIRoot__ShowToast(pGVar6,__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveLocalProfile
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveLocalProfile (System_String_o* displayName, System_String_o* bio, System_String_o* avatarKey, System_String_o* bannerKey, System_Collections_Generic_Dictionary_string__string__o* socials, const MethodInfo* method);
// 0x416ae70

void Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveLocalProfile
               (System_String_o *displayName,System_String_o *bio,System_String_o *avatarKey,
               System_String_o *bannerKey,
               System_Collections_Generic_Dictionary_string__string__o *socials,MethodInfo *method)

{
  long *plVar1;
  Settings_TypedSetting_T__o *pSVar2;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *collection;
  System_Collections_Generic_List_object__o *__this;
  System_String_o *value;
  Il2CppObject *value_00;
  
  if (DAT_05704a91 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704a91 = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
  if (plVar1 == (long *)0x0) {
    return;
  }
  bVar3 = System_String__IsNullOrEmpty(displayName,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if ((Settings_TypedSetting_T__o *)plVar1[6] == (Settings_TypedSetting_T__o *)0x0)
    goto LAB_0416b08c;
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)plVar1[6],(Il2CppObject *)displayName,MethodInfo_Void_set_Value);
  }
  if (bio != (System_String_o *)0x0) {
    if ((Settings_TypedSetting_T__o *)plVar1[0xb] == (Settings_TypedSetting_T__o *)0x0)
    goto LAB_0416b08c;
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)plVar1[0xb],(Il2CppObject *)bio,MethodInfo_Void_set_Value);
  }
  if ((Settings_TypedSetting_T__o *)plVar1[4] != (Settings_TypedSetting_T__o *)0x0) {
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)plVar1[4],(Il2CppObject *)avatarKey,MethodInfo_Void_set_Value);
    if (((Settings_TypedSetting_T__o *)plVar1[5] != (Settings_TypedSetting_T__o *)0x0) &&
       (Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)plVar1[5],(Il2CppObject *)bannerKey,MethodInfo_Void_set_Value),
       socials != (System_Collections_Generic_Dictionary_string__string__o *)0x0)) {
      collection = System_Collections_Generic_Dictionary<object__object>__get_Values
                             ((System_Collections_Generic_Dictionary_object__object__o *)socials,
                              MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
      __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
      System_Collections_Generic_List<object>___ctor
                (__this,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_System_String);
      pSVar2 = (Settings_TypedSetting_T__o *)plVar1[10];
      value = Gisketch_Aottg2UI_Game_AottgActiveProfile__SerializeSocialLinks
                        ((System_Collections_Generic_IEnumerable_string__o *)__this,
                         (MethodInfo *)0x0);
      if ((pSVar2 != (Settings_TypedSetting_T__o *)0x0) &&
         (Settings_TypedSetting<object>__set_Value(pSVar2,(Il2CppObject *)value,MethodInfo_Void_set_Value),
         __this != (System_Collections_Generic_List_object__o *)0x0)) {
        pSVar2 = (Settings_TypedSetting_T__o *)plVar1[9];
        if ((__this->fields)._size < 1) {
          value_00 = (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8);
        }
        else {
          value_00 = System_Collections_Generic_List<object>__get_Item(__this,0,MethodInfo_String_get_Item);
        }
        if (pSVar2 != (Settings_TypedSetting_T__o *)0x0) {
          Settings_TypedSetting<object>__set_Value(pSVar2,value_00,MethodInfo_Void_set_Value);
          (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
          return;
        }
      }
    }
  }
LAB_0416b08c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$SocialLinks
// il2cpp: System_Collections_Generic_List_string__o* Gisketch_Aottg2UI_Game_AottgGameUiActions__SocialLinks (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4169f30

System_Collections_Generic_List_string__o *
Gisketch_Aottg2UI_Game_AottgGameUiActions__SocialLinks
          (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context_00;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context_01;
  long lVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_string__o *__this;
  MethodInfo *pMVar6;
  System_String_o *pSVar7;
  int local_5c;
  System_String_o *local_58;
  UnityEngine_GameObject_o *pUStack_50;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *local_48;
  int32_t iStack_40;
  undefined4 uStack_3c;
  
  if (DAT_05704a92 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"profile-details-social-");
    DAT_05704a92 = '\x01';
  }
  __this = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,MethodInfo_List_1_System_String);
  local_5c = 0;
  if (__this == (System_Collections_Generic_List_string__o *)0x0) {
    do {
      local_48 = context.fields.Node;
      iStack_40 = context.fields.InputSource;
      uStack_3c = context.fields._28_4_;
      local_58 = context.fields.ElementId;
      pUStack_50 = context.fields.GameObject;
      pMVar6 = (MethodInfo *)System_Int32__ToString((int32_t)&local_5c,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat("profile-details-social-",(System_String_o *)pMVar6,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
        il2cpp_init_class();
      }
      context_00.fields.GameObject = pUStack_50;
      context_00.fields.ElementId = local_58;
      context_00.fields.Node = local_48;
      context_00.fields.InputSource = iStack_40;
      context_00.fields._28_4_ = uStack_3c;
      pSVar7 = Gisketch_Aottg2UI_Game_AottgGameUiActions__FindInput(context_00,pSVar7,pMVar6);
      if (pSVar7 == (System_String_o *)0x0) {
LAB_0416a187:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar7 = System_String__Trim(pSVar7,(MethodInfo *)0x0);
      bVar5 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') goto LAB_0416a187;
      local_5c = local_5c + 1;
    } while (local_5c < 8);
  }
  else {
    do {
      local_48 = context.fields.Node;
      iStack_40 = context.fields.InputSource;
      uStack_3c = context.fields._28_4_;
      local_58 = context.fields.ElementId;
      pUStack_50 = context.fields.GameObject;
      pMVar6 = (MethodInfo *)System_Int32__ToString((int32_t)&local_5c,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat("profile-details-social-",(System_String_o *)pMVar6,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
        il2cpp_init_class();
      }
      context_01.fields.GameObject = pUStack_50;
      context_01.fields.ElementId = local_58;
      context_01.fields.Node = local_48;
      context_01.fields.InputSource = iStack_40;
      context_01.fields._28_4_ = uStack_3c;
      pSVar7 = Gisketch_Aottg2UI_Game_AottgGameUiActions__FindInput(context_01,pSVar7,pMVar6);
      if (pSVar7 == (System_String_o *)0x0) goto LAB_0416a187;
      pSVar7 = System_String__Trim(pSVar7,(MethodInfo *)0x0);
      bVar5 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
      lVar4 = MethodInfo_Void_Add;
      if ((char)bVar5 == '\0') {
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this->fields)._items;
        if (pSVar3 == (System_String_array *)0x0) goto LAB_0416a187;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pSVar7;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar7,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
      }
      local_5c = local_5c + 1;
    } while (local_5c < 8);
  }
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$ToSocials
// il2cpp: System_Collections_Generic_Dictionary_string__string__o* Gisketch_Aottg2UI_Game_AottgGameUiActions__ToSocials (System_Collections_Generic_IEnumerable_string__o* links, const MethodInfo* method);
// 0x416a190

/* WARNING: Removing unreachable block (ram,0x0416a4c3) */

System_Collections_Generic_Dictionary_string__string__o *
Gisketch_Aottg2UI_Game_AottgGameUiActions__ToSocials
          (System_Collections_Generic_IEnumerable_string__o *links,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerable_string__c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  char cVar4;
  bool_conflict bVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  VirtualInvokeData *pVVar6;
  long *plVar7;
  undefined8 *puVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint local_3c;
  System_Collections_Generic_Dictionary_object__object__o *local_38;
  
  if (DAT_05704a93 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_string);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_string);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&"link");
    DAT_05704a93 = '\x01';
  }
  local_3c = 0;
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this,MethodInfo_Dictionary_2_System_String_System_String);
  if (links == (System_Collections_Generic_IEnumerable_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar2 = links->klass;
  uVar1._0_1_ = (pSVar2->_2).rank;
  uVar1._1_1_ = (pSVar2->_2).minimumAlignment;
  local_38 = __this;
  if ((ulong)uVar1 != 0) {
    pIVar3 = (pSVar2->_1).interfaceOffsets;
    lVar11 = 0;
    do {
      if (*(long *)((long)&pIVar3->interfaceType + lVar11) == TypeInfo_IEnumerable_string) {
        pVVar6 = pSVar2->vtable + *(int *)((long)&pIVar3->offset + lVar11);
        goto LAB_0416a2b1;
      }
      lVar11 = lVar11 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar11);
  }
  pVVar6 = (VirtualInvokeData *)il2cpp_runtime_glue(links,TypeInfo_IEnumerable_string,0);
LAB_0416a2b1:
  plVar7 = (long *)(*pVVar6->methodPtr)(links,pVVar6->method);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar13 = 1;
  do {
    lVar11 = *plVar7;
    if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
          puVar8 = (undefined8 *)
                   ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + lVar11 + 0x138);
          goto LAB_0416a333;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
    }
    puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IEnumerator,0);
LAB_0416a333:
    cVar4 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if (cVar4 == '\0') {
      if (plVar7 == (long *)0x0) {
        return (System_Collections_Generic_Dictionary_string__string__o *)local_38;
      }
      lVar11 = *plVar7;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) == 0) goto LAB_0416a46f;
      lVar12 = 0;
      break;
    }
    lVar11 = *plVar7;
    if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator_string) {
          puVar8 = (undefined8 *)
                   ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + lVar11 + 0x138);
          goto LAB_0416a3a3;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
    }
    puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IEnumerator_string,0);
LAB_0416a3a3:
    pSVar9 = (System_String_o *)(*(code *)*puVar8)(plVar7);
    bVar5 = System_String__IsNullOrWhiteSpace(pSVar9,(MethodInfo *)0x0);
    if (uVar13 < 9 && (char)bVar5 == '\0') {
      local_3c = uVar13;
      pSVar10 = System_Int32__ToString((int32_t)&local_3c,(MethodInfo *)0x0);
      pSVar10 = System_String__Concat("link",pSVar10,(MethodInfo *)0x0);
      if (pSVar9 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar9 = System_String__Trim(pSVar9,(MethodInfo *)0x0);
      if (local_38 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar13 = uVar13 + 1;
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (local_38,(Il2CppObject *)pSVar10,(Il2CppObject *)pSVar9,MethodInfo_Void_set_Item);
    }
  } while( true );
  while (lVar12 = lVar12 + 0x10, (ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12) {
    if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
      puVar8 = (undefined8 *)
               (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
      goto LAB_0416a48d;
    }
  }
LAB_0416a46f:
  puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IDisposable,0);
LAB_0416a48d:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return (System_Collections_Generic_Dictionary_string__string__o *)local_38;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$EffectColors
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameUiActions__EffectColors (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* prefix, const MethodInfo* method);
// 0x416ad40

System_String_array *
Gisketch_Aottg2UI_Game_AottgGameUiActions__EffectColors
          (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *prefix,
          MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *pSVar2;
  ulong uVar3;
  System_String_o **ppSVar4;
  
  if (DAT_05704a94 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgEditCharacterDialog);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIColorPicker);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"#FFFFFFFF");
    DAT_05704a94 = '\x01';
  }
  pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,4);
  if (pSVar1 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (0 < (int)pSVar1->max_length) {
    ppSVar4 = pSVar1->m_Items;
    uVar3 = 0;
    do {
      if (*(int *)(TypeInfo_AottgEditCharacterDialog + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = Gisketch_Aottg2UI_Game_AottgEditCharacterDialog__ColorInputId
                         (prefix,(int32_t)uVar3,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchUIColorPicker + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value
                         (pSVar2,"#FFFFFFFF",1,(MethodInfo *)0x0);
      if ((uint)pSVar1->max_length <= uVar3) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      *ppSVar4 = pSVar2;
      il2cpp_runtime_glue(ppSVar4,pSVar2);
      uVar3 = uVar3 + 1;
      ppSVar4 = ppSVar4 + 1;
    } while ((long)uVar3 < (long)(int)pSVar1->max_length);
  }
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$ProfileToast
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__ProfileToast (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, int32_t variant, System_String_o* icon, System_String_o* title, System_String_o* content, System_String_o* updateKey, const MethodInfo* method);
// 0x4168270

void Gisketch_Aottg2UI_Game_AottgGameUiActions__ProfileToast
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,int32_t variant,
               System_String_o *icon,System_String_o *title,System_String_o *content,
               System_String_o *updateKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *__this_01;
  
  if (DAT_05704a95 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgToastDefinition);
    DAT_05704a95 = '\x01';
  }
  __this_00 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                        ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0)
  ;
  if (__this_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    __this_01 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)il2cpp_runtime_glue(TypeInfo_AottgToastDefinition);
    Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor
              (__this_01,variant,icon,title,content,updateKey,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_GisketchUIRoot__ShowToast(__this_00,__this_01,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$Awake
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__Awake (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x416b0a0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__Awake
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  System_Action_string__o *value;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  Gisketch_Aottg2UI_Actions_GisketchController__Awake
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterMainActions(__this,method_00);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterSettingsActions(__this,method_00);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterAccountActions(__this,method_00);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterProfileActions(__this,method_00);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__AddAccountListeners(__this,method_00);
  if (DAT_05704a74 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_ShowNetworkErrorToast);
    DAT_05704a74 = '\x01';
  }
  value = (System_Action_string__o *)il2cpp_runtime_glue(TypeInfo_Action_string);
  System_Action<object>___ctor();
  ApplicationManagers_AottgNetworkNotifications__add_OnNetworkError(value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$Start
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__Start (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x416b8b0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__Start
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  System_String_array *screenIds;
  
  if (DAT_05704a96 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"profile");
    DAT_05704a96 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__StartAccountActions(__this,method);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__StartProfileActions(__this,method);
  __this_00 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                        ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0)
  ;
  if (__this_00 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    return;
  }
  screenIds = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,1);
  if (screenIds == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)screenIds->max_length != 0) {
    screenIds->m_Items[0] = "profile";
    il2cpp_runtime_glue(screenIds->m_Items);
    Gisketch_Aottg2UI_GisketchUIRoot__QueueScreenPrewarm(__this_00,screenIds,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__LateUpdate (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x416b970

void Gisketch_Aottg2UI_Game_AottgGameUiActions__LateUpdate
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  long lVar1;
  Settings_KeybindSetting_o *__this_00;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this_01;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context;
  char cVar2;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  MethodInfo *method_00;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 in_stack_ffffffffffffffc0;
  System_String_o local_38;
  undefined8 uStack_20;
  
  Gisketch_Aottg2UI_Game_AottgGameUiActions__LateUpdateAccountActions(__this,method);
  if (DAT_05704a9f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&"dialog.aottg-search-palette");
    il2cpp_init_method_metadata(&"open-search-palette-keybind");
    DAT_05704a9f = '\x01';
  }
  pGVar4 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((((char)bVar3 == '\0') &&
      (lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
    __this_00 = *(Settings_KeybindSetting_o **)(lVar1 + 0xe8);
    if (__this_00 == (Settings_KeybindSetting_o *)0x0) {
LAB_0416bb08:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar3 = Settings_KeybindSetting__GetKeyDown(__this_00,0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4) == 0) {
        method_00 = TypeInfo_AottgGameUiActions;
        il2cpp_init_class();
        bVar3 = Gisketch_Aottg2UI_Game_AottgGameUiActions__IsSearchPaletteShortcutBlocked(method_00)
        ;
        cVar2 = (char)bVar3;
      }
      else {
        bVar3 = Gisketch_Aottg2UI_Game_AottgGameUiActions__IsSearchPaletteShortcutBlocked
                          (TypeInfo_AottgGameUiActions);
        cVar2 = (char)bVar3;
      }
      if (cVar2 == '\0') {
        pGVar4 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                           ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                            (MethodInfo *)0x0);
        node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
               UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        local_38.fields._stringLength = 0;
        local_38.fields._firstChar = 0;
        local_38.fields._6_2_ = 0;
        uStack_20 = 0;
        local_38.klass = (System_String_c *)0x0;
        local_38.monitor = (void *)0x0;
        __this_01.fields.GameObject = (UnityEngine_GameObject_o *)in_stack_ffffffffffffffb0;
        __this_01.fields.ElementId = (System_String_o *)in_stack_ffffffffffffffa8;
        __this_01.fields.Node =
             (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)in_stack_ffffffffffffffb8;
        __this_01.fields._24_8_ = in_stack_ffffffffffffffc0;
        Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                  (__this_01,&local_38,"open-search-palette-keybind",node,0,(MethodInfo *)0x2);
        if (pGVar4 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto LAB_0416bb08;
        context.fields.GameObject = local_38.monitor;
        context.fields.ElementId = (System_String_o *)local_38.klass;
        context.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)local_38.fields;
        context.fields._24_8_ = uStack_20;
        Gisketch_Aottg2UI_GisketchUIRoot__HandleAction
                  (pGVar4,"dialog.aottg-search-palette",context,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__OnDestroy (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x416bb10

void Gisketch_Aottg2UI_Game_AottgGameUiActions__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  System_Action_string__o *value;
  
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RemoveAccountListeners(__this,method);
  if (DAT_05704a75 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_ShowNetworkErrorToast);
    DAT_05704a75 = '\x01';
  }
  value = (System_Action_string__o *)il2cpp_runtime_glue(TypeInfo_Action_string);
  System_Action<object>___ctor();
  ApplicationManagers_AottgNetworkNotifications__remove_OnNetworkError(value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterMainActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterMainActions (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x416b140

void Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterMainActions
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  long lVar1;
  System_String_o *actionId;
  System_Action_GisketchActionContext__o *pSVar2;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  
  if (DAT_05704a97 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegisterMainActions_b__102_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegisterMainActions_b__102_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegisterMainActions_b__102_2);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"main.patreon");
    il2cpp_init_method_metadata(&"main.tutorial");
    il2cpp_init_method_metadata(&"TutorialButton");
    il2cpp_init_method_metadata(&"main.credits");
    il2cpp_init_method_metadata(&"main.settings");
    il2cpp_init_method_metadata(&"main.quit");
    il2cpp_init_method_metadata(&"main.multiplayer");
    il2cpp_init_method_metadata(&"main.social");
    il2cpp_init_method_metadata(&"QuestButton");
    il2cpp_init_method_metadata(&"HelpButton");
    il2cpp_init_method_metadata(&"LeaderboardButton");
    il2cpp_init_method_metadata(&"ToolsButton");
    il2cpp_init_method_metadata(&"PatreonButton");
    il2cpp_init_method_metadata(&"main.tools");
    il2cpp_init_method_metadata(&"main.profile");
    il2cpp_init_method_metadata(&"main.leaderboard");
    il2cpp_init_method_metadata(&"main.singleplayer");
    il2cpp_init_method_metadata(&"SettingsButton");
    il2cpp_init_method_metadata(&"main.quests");
    il2cpp_init_method_metadata(&"MultiplayerButton");
    il2cpp_init_method_metadata(&"main.help");
    il2cpp_init_method_metadata(&"SingleplayerButton");
    il2cpp_init_method_metadata(&"SocialButton");
    DAT_05704a97 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterLegacyMain
            (__this,"main.tutorial","TutorialButton",in_RCX);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterLegacyMain
            (__this,"main.singleplayer","SingleplayerButton",in_RCX);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterLegacyMain
            (__this,"main.multiplayer","MultiplayerButton",in_RCX);
  pSVar2 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  method_00 = (MethodInfo *)0x0;
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"main.profile",pSVar2,
             (MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterLegacyMain
            (__this,"main.settings","SettingsButton",method_00);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterLegacyMain
            (__this,"main.tools","ToolsButton",method_00);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterLegacyMain
            (__this,"main.quests","QuestButton",method_00);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterLegacyMain
            (__this,"main.leaderboard","LeaderboardButton",method_00);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterLegacyMain
            (__this,"main.social","SocialButton",method_00);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterLegacyMain
            (__this,"main.help","HelpButton",method_00);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterLegacyMain
            (__this,"main.patreon","PatreonButton",method_00);
  pSVar2 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
  System_Action<GisketchActionContext>___ctor();
  Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"main.credits",pSVar2,
             (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  actionId = "main.quit";
  pSVar2 = *(System_Action_GisketchActionContext__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (pSVar2 == (System_Action_GisketchActionContext__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
    System_Action<GisketchActionContext>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_GisketchActionContext__o **)(lVar1 + 0x10) = pSVar2;
    il2cpp_runtime_glue(lVar1 + 0x10,pSVar2);
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,actionId,pSVar2,
               (MethodInfo *)0x0);
    if (DAT_05704a6e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
      il2cpp_init_method_metadata(&MethodInfo_Void__RegisterCreditsActions_b__52_0);
      il2cpp_init_method_metadata(&"credits.retry");
      DAT_05704a6e = '\x01';
    }
    pSVar2 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
    System_Action<GisketchActionContext>___ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,"credits.retry",pSVar2,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterSettingsActions
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterSettingsActions (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x416b570

void Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterSettingsActions
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_GisketchActionContext__o *pSVar3;
  
  if (DAT_05704a98 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegisterSettingsActions_b__103_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegisterSettingsActions_b__103_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegisterSettingsActions_b__103_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegisterSettingsActions_b__103_3);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"settings.load");
    il2cpp_init_method_metadata(&"settings.default");
    il2cpp_init_method_metadata(&"settings.save");
    il2cpp_init_method_metadata(&"settings.back");
    DAT_05704a98 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = "settings.save";
  pSVar3 = *(System_Action_GisketchActionContext__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (pSVar3 == (System_Action_GisketchActionContext__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
    System_Action<GisketchActionContext>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_GisketchActionContext__o **)(lVar1 + 0x18) = pSVar3;
    il2cpp_runtime_glue(lVar1 + 0x18,pSVar3);
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *)0x0) {
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,pSVar2,pSVar3,
               (MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = "settings.load";
    pSVar3 = *(System_Action_GisketchActionContext__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
    if (pSVar3 == (System_Action_GisketchActionContext__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
      System_Action<GisketchActionContext>___ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_GisketchActionContext__o **)(lVar1 + 0x20) = pSVar3;
      il2cpp_runtime_glue(lVar1 + 0x20,pSVar3);
    }
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,pSVar2,pSVar3,
               (MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = "settings.back";
    pSVar3 = *(System_Action_GisketchActionContext__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
    if (pSVar3 == (System_Action_GisketchActionContext__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
      System_Action<GisketchActionContext>___ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_GisketchActionContext__o **)(lVar1 + 0x28) = pSVar3;
      il2cpp_runtime_glue(lVar1 + 0x28,pSVar3);
    }
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,pSVar2,pSVar3,
               (MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = "settings.default";
    pSVar3 = *(System_Action_GisketchActionContext__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
    if (pSVar3 == (System_Action_GisketchActionContext__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
      System_Action<GisketchActionContext>___ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_GisketchActionContext__o **)(lVar1 + 0x30) = pSVar3;
      il2cpp_runtime_glue(lVar1 + 0x30,pSVar3);
    }
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,pSVar2,pSVar3,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$RegisterLegacyMain
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterLegacyMain (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, System_String_o* actionId, System_String_o* legacyButtonName, const MethodInfo* method);
// 0x416bb80

void Gisketch_Aottg2UI_Game_AottgGameUiActions__RegisterLegacyMain
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,System_String_o *actionId,
               System_String_o *legacyButtonName,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_GisketchActionContext__o *action;
  
  if (DAT_05704a99 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
    il2cpp_init_method_metadata(&MethodInfo_Void__RegisterLegacyMain_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass104_0);
    DAT_05704a99 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass104_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)legacyButtonName;
    il2cpp_runtime_glue(__this_00 + 1,legacyButtonName);
    action = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
    System_Action<GisketchActionContext>___ctor();
    Gisketch_Aottg2UI_Actions_GisketchController__RegisterAction
              ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,actionId,action,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$SaveSettings
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveSettings (const MethodInfo* method);
// 0x416bc60

void Gisketch_Aottg2UI_Game_AottgGameUiActions__SaveSettings(MethodInfo *method)

{
  int iVar1;
  Settings_SaveableSettingsContainer_o *pSVar2;
  uint uVar3;
  Settings_SaveableSettingsContainer_array *pSVar4;
  uint uVar5;
  MethodInfo *pMVar6;
  
  if (DAT_05704a9a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    DAT_05704a9a = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
    pMVar6 = TypeInfo_AottgGameUiActions;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
    pMVar6 = TypeInfo_AottgGameUiActions;
  }
  TypeInfo_AottgGameUiActions = pMVar6;
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__SettingsContainers(pMVar6);
  }
  else {
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__SettingsContainers(pMVar6);
  }
  if (pSVar4 == (Settings_SaveableSettingsContainer_array *)0x0) {
LAB_0416bd21:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar3 = (uint)pSVar4->max_length;
  if (0 < (int)uVar3) {
    uVar5 = 0;
    do {
      if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar2 = pSVar4->m_Items[(int)uVar5];
      if (pSVar2 == (Settings_SaveableSettingsContainer_o *)0x0) goto LAB_0416bd21;
      (*(pSVar2->klass->vtable)._16_Save.methodPtr)(pSVar2,(pSVar2->klass->vtable)._16_Save.method);
      uVar5 = uVar5 + 1;
      uVar3 = (uint)pSVar4->max_length;
    } while ((int)uVar5 < (int)uVar3);
  }
  if (*(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4) == 0) {
    pMVar6 = TypeInfo_AottgGameUiActions;
    il2cpp_init_class();
    Gisketch_Aottg2UI_Game_AottgGameUiActions__ApplySettings(pMVar6);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__ApplySettings(TypeInfo_AottgGameUiActions);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$LoadSettings
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__LoadSettings (const MethodInfo* method);
// 0x416c0a0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__LoadSettings(MethodInfo *method)

{
  int iVar1;
  Settings_SaveableSettingsContainer_o *pSVar2;
  uint uVar3;
  Settings_SaveableSettingsContainer_array *pSVar4;
  uint uVar5;
  MethodInfo *pMVar6;
  
  if (DAT_05704a9b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    DAT_05704a9b = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
    pMVar6 = TypeInfo_AottgGameUiActions;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
    pMVar6 = TypeInfo_AottgGameUiActions;
  }
  TypeInfo_AottgGameUiActions = pMVar6;
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__SettingsContainers(pMVar6);
  }
  else {
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__SettingsContainers(pMVar6);
  }
  if (pSVar4 == (Settings_SaveableSettingsContainer_array *)0x0) {
LAB_0416c161:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar3 = (uint)pSVar4->max_length;
  if (0 < (int)uVar3) {
    uVar5 = 0;
    do {
      if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar2 = pSVar4->m_Items[(int)uVar5];
      if (pSVar2 == (Settings_SaveableSettingsContainer_o *)0x0) goto LAB_0416c161;
      (*(pSVar2->klass->vtable)._17_Load.methodPtr)(pSVar2,(pSVar2->klass->vtable)._17_Load.method);
      uVar5 = uVar5 + 1;
      uVar3 = (uint)pSVar4->max_length;
    } while ((int)uVar5 < (int)uVar3);
  }
  if (*(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4) == 0) {
    pMVar6 = TypeInfo_AottgGameUiActions;
    il2cpp_init_class();
    Gisketch_Aottg2UI_Game_AottgGameUiActions__ApplySettings(pMVar6);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__ApplySettings(TypeInfo_AottgGameUiActions);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$ApplySettings
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__ApplySettings (const MethodInfo* method);
// 0x416bf90

void Gisketch_Aottg2UI_Game_AottgGameUiActions__ApplySettings(MethodInfo *method)

{
  int iVar1;
  Settings_SaveableSettingsContainer_o *pSVar2;
  uint uVar3;
  Settings_SaveableSettingsContainer_array *pSVar4;
  uint uVar5;
  MethodInfo *method_00;
  
  if (DAT_05704a9c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05704a9c = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
    method_00 = TypeInfo_AottgGameUiActions;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
    method_00 = TypeInfo_AottgGameUiActions;
  }
  TypeInfo_AottgGameUiActions = method_00;
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__SettingsContainers(method_00);
  }
  else {
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__SettingsContainers(method_00);
  }
  if (pSVar4 == (Settings_SaveableSettingsContainer_array *)0x0) {
LAB_0416c080:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar3 = (uint)pSVar4->max_length;
  if (0 < (int)uVar3) {
    uVar5 = 0;
    do {
      if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar2 = pSVar4->m_Items[(int)uVar5];
      if (pSVar2 == (Settings_SaveableSettingsContainer_o *)0x0) goto LAB_0416c080;
      (*(pSVar2->klass->vtable)._11_Apply.methodPtr)
                (pSVar2,(pSVar2->klass->vtable)._11_Apply.method);
      uVar5 = uVar5 + 1;
      uVar3 = (uint)pSVar4->max_length;
    } while ((int)uVar5 < (int)uVar3);
  }
  if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) != 2) {
    return;
  }
  Settings_SettingsManager__NotifySettingsChanged((MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$ResetSettingsToDefault
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__ResetSettingsToDefault (const MethodInfo* method);
// 0x416c180

void Gisketch_Aottg2UI_Game_AottgGameUiActions__ResetSettingsToDefault(MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  Settings_SaveableSettingsContainer_o *pSVar3;
  Settings_SaveableSettingsContainer_array *pSVar4;
  ulong uVar5;
  MethodInfo *pMVar6;
  
  if (DAT_05704a9d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05704a9d = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
    pMVar6 = TypeInfo_AottgGameUiActions;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4);
    pMVar6 = TypeInfo_AottgGameUiActions;
  }
  TypeInfo_AottgGameUiActions = pMVar6;
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__SettingsContainers(pMVar6);
  }
  else {
    pSVar4 = Gisketch_Aottg2UI_Game_AottgGameUiActions__SettingsContainers(pMVar6);
  }
  if (pSVar4 == (Settings_SaveableSettingsContainer_array *)0x0) {
LAB_0416c23e:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)pSVar4->max_length < 1) {
LAB_0416c243:
    pMVar6 = TypeInfo_AottgGameUiActions;
    if (*(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    Gisketch_Aottg2UI_Game_AottgGameUiActions__ApplySettings(pMVar6);
    return;
  }
  uVar5 = 0;
  if ((pSVar4->max_length & 0xffffffff) != 0) {
    do {
      pSVar3 = pSVar4->m_Items[uVar5];
      if (pSVar3 != *(Settings_SaveableSettingsContainer_o **)
                     (*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10)) {
        if (pSVar3 == (Settings_SaveableSettingsContainer_o *)0x0) goto LAB_0416c23e;
        (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)
                  (pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
        (*(pSVar3->klass->vtable)._16_Save.methodPtr)
                  (pSVar3,(pSVar3->klass->vtable)._16_Save.method);
      }
      uVar5 = uVar5 + 1;
      uVar2 = (uint)pSVar4->max_length;
      if ((long)(int)uVar2 <= (long)uVar5) goto LAB_0416c243;
    } while (uVar5 < uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$SettingsContainers
// il2cpp: Settings_SaveableSettingsContainer_array* Gisketch_Aottg2UI_Game_AottgGameUiActions__SettingsContainers (const MethodInfo* method);
// 0x416bd40

Settings_SaveableSettingsContainer_array *
Gisketch_Aottg2UI_Game_AottgGameUiActions__SettingsContainers(MethodInfo *method)

{
  Settings_SaveableSettingsContainer_o *pSVar1;
  Settings_SaveableSettingsContainer_array *pSVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (DAT_05704a9e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SaveableSettingsContainer);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05704a9e = '\x01';
  }
  pSVar2 = (Settings_SaveableSettingsContainer_array *)il2cpp_glue_02274930(TypeInfo_SaveableSettingsContainer,7);
  if (pSVar2 == (Settings_SaveableSettingsContainer_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar1 = *(Settings_SaveableSettingsContainer_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if (pSVar1 != (Settings_SaveableSettingsContainer_o *)0x0) {
    lVar3 = il2cpp_runtime_glue(pSVar1,(((pSVar2->obj).klass)->_1).element_class);
    if (lVar3 == 0) goto LAB_0416bf7b;
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = pSVar1;
    il2cpp_runtime_glue(pSVar2->m_Items,pSVar1);
    pSVar1 = *(Settings_SaveableSettingsContainer_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
    if (pSVar1 != (Settings_SaveableSettingsContainer_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar1,(((pSVar2->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_0416bf7b;
    }
    if ((uint)pSVar2->max_length < 2) goto LAB_0416bf76;
    pSVar2->m_Items[1] = pSVar1;
    il2cpp_runtime_glue(pSVar2->m_Items + 1,pSVar1);
    pSVar1 = *(Settings_SaveableSettingsContainer_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
    if (pSVar1 != (Settings_SaveableSettingsContainer_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar1,(((pSVar2->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_0416bf7b;
    }
    if ((uint)pSVar2->max_length < 3) goto LAB_0416bf76;
    pSVar2->m_Items[2] = pSVar1;
    il2cpp_runtime_glue(pSVar2->m_Items + 2,pSVar1);
    pSVar1 = *(Settings_SaveableSettingsContainer_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if (pSVar1 != (Settings_SaveableSettingsContainer_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar1,(((pSVar2->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_0416bf7b;
    }
    if ((uint)pSVar2->max_length < 4) goto LAB_0416bf76;
    pSVar2->m_Items[3] = pSVar1;
    il2cpp_runtime_glue(pSVar2->m_Items + 3,pSVar1);
    pSVar1 = *(Settings_SaveableSettingsContainer_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (pSVar1 != (Settings_SaveableSettingsContainer_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar1,(((pSVar2->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_0416bf7b;
    }
    if ((uint)pSVar2->max_length < 5) goto LAB_0416bf76;
    pSVar2->m_Items[4] = pSVar1;
    il2cpp_runtime_glue(pSVar2->m_Items + 4,pSVar1);
    pSVar1 = *(Settings_SaveableSettingsContainer_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (pSVar1 != (Settings_SaveableSettingsContainer_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar1,(((pSVar2->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_0416bf7b;
    }
    if (5 < (uint)pSVar2->max_length) {
      pSVar2->m_Items[5] = pSVar1;
      il2cpp_runtime_glue(pSVar2->m_Items + 5,pSVar1);
      pSVar1 = *(Settings_SaveableSettingsContainer_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
      if (pSVar1 != (Settings_SaveableSettingsContainer_o *)0x0) {
        lVar3 = il2cpp_runtime_glue(pSVar1,(((pSVar2->obj).klass)->_1).element_class);
        if (lVar3 == 0) {
LAB_0416bf7b:
          uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar4,0);
        }
      }
      if (6 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[6] = pSVar1;
        il2cpp_runtime_glue(pSVar2->m_Items + 6,pSVar1);
        return pSVar2;
      }
    }
  }
LAB_0416bf76:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$LateUpdateSearchPaletteShortcut
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions__LateUpdateSearchPaletteShortcut (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x416b980

void Gisketch_Aottg2UI_Game_AottgGameUiActions__LateUpdateSearchPaletteShortcut
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  long lVar1;
  Settings_KeybindSetting_o *__this_00;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this_01;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context;
  char cVar2;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  MethodInfo *method_00;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 in_stack_ffffffffffffffc0;
  System_String_o SStack_38;
  undefined8 uStack_20;
  
  if (DAT_05704a9f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&"dialog.aottg-search-palette");
    il2cpp_init_method_metadata(&"open-search-palette-keybind");
    DAT_05704a9f = '\x01';
  }
  pGVar4 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((((char)bVar3 == '\0') &&
      (lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
    __this_00 = *(Settings_KeybindSetting_o **)(lVar1 + 0xe8);
    if (__this_00 == (Settings_KeybindSetting_o *)0x0) {
LAB_0416bb08:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar3 = Settings_KeybindSetting__GetKeyDown(__this_00,0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)((long)&TypeInfo_AottgGameUiActions[2].parameters + 4) == 0) {
        method_00 = TypeInfo_AottgGameUiActions;
        il2cpp_init_class();
        bVar3 = Gisketch_Aottg2UI_Game_AottgGameUiActions__IsSearchPaletteShortcutBlocked(method_00)
        ;
        cVar2 = (char)bVar3;
      }
      else {
        bVar3 = Gisketch_Aottg2UI_Game_AottgGameUiActions__IsSearchPaletteShortcutBlocked
                          (TypeInfo_AottgGameUiActions);
        cVar2 = (char)bVar3;
      }
      if (cVar2 == '\0') {
        pGVar4 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                           ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                            (MethodInfo *)0x0);
        node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
               UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        SStack_38.fields._stringLength = 0;
        SStack_38.fields._firstChar = 0;
        SStack_38.fields._6_2_ = 0;
        uStack_20 = 0;
        SStack_38.klass = (System_String_c *)0x0;
        SStack_38.monitor = (void *)0x0;
        __this_01.fields.GameObject = (UnityEngine_GameObject_o *)in_stack_ffffffffffffffb0;
        __this_01.fields.ElementId = (System_String_o *)in_stack_ffffffffffffffa8;
        __this_01.fields.Node =
             (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)in_stack_ffffffffffffffb8;
        __this_01.fields._24_8_ = in_stack_ffffffffffffffc0;
        Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                  (__this_01,&SStack_38,"open-search-palette-keybind",node,0,(MethodInfo *)0x2);
        if (pGVar4 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto LAB_0416bb08;
        context.fields.GameObject = SStack_38.monitor;
        context.fields.ElementId = (System_String_o *)SStack_38.klass;
        context.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)SStack_38.fields;
        context.fields._24_8_ = uStack_20;
        Gisketch_Aottg2UI_GisketchUIRoot__HandleAction
                  (pGVar4,"dialog.aottg-search-palette",context,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$IsSearchPaletteShortcutBlocked
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameUiActions__IsSearchPaletteShortcutBlocked (const MethodInfo* method);
// 0x416c2c0

bool_conflict
Gisketch_Aottg2UI_Game_AottgGameUiActions__IsSearchPaletteShortcutBlocked(MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  UnityEngine_EventSystems_EventSystem_o *pUVar3;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *pUVar4;
  bool_conflict bVar5;
  
  if (DAT_05704aa0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05704aa0 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar4 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (lVar1 == 0) goto LAB_0416c54e;
    pUVar4 = *(UnityEngine_Object_o **)(lVar1 + 0x80);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x80), lVar1 == 0)) goto LAB_0416c54e;
      pUVar4 = (UnityEngine_Object_o *)CONCAT71((int7)((ulong)pUVar4 >> 8),1);
      if (*(char *)(lVar1 + 0x90) != '\0') {
        return (bool_conflict)pUVar4;
      }
    }
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
  bVar5 = (bool_conflict)CONCAT71((int7)((ulong)pUVar4 >> 8),1);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar4 = (UnityEngine_Object_o *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto LAB_0416c54e;
      pUVar4 = (UnityEngine_Object_o *)(pUVar3->fields).m_CurrentSelected;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = 0;
    bVar2 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (pUVar4 == (UnityEngine_Object_o *)0x0) {
LAB_0416c54e:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      x = (UnityEngine_Object_o *)
          UnityEngine_GameObject__GetComponent<object>
                    ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_TMP_InputField_GetComponent_TMP_InputField);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      bVar5 = (bool_conflict)CONCAT71((int7)((ulong)x >> 8),1);
      if ((char)bVar2 == '\0') {
        pUVar4 = (UnityEngine_Object_o *)
                 UnityEngine_GameObject__GetComponent<object>
                           ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_InputField_GetComponent_InputField);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        return bVar2;
      }
    }
  }
  return bVar5;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___ctor (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, const MethodInfo* method);
// 0x416c560

void Gisketch_Aottg2UI_Game_AottgGameUiActions___ctor
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchController___ctor
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___cctor (const MethodInfo* method);
// 0x416c570

void Gisketch_Aottg2UI_Game_AottgGameUiActions___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this;
  
  if (DAT_05704aa1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    DAT_05704aa1 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *)
           il2cpp_runtime_glue(TypeInfo_Aottg2GisketchLocalizer);
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_AottgGameUiActions + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgGameUiActions + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterAccountFormActions>b__0_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___RegisterAccountFormActions_b__0_0 (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x416c5e0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__<RegisterAccountFormActions>b__0_0
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if (DAT_05704aa2 == '\0') {
    il2cpp_init_method_metadata(&"main-menu-register");
    DAT_05704aa2 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__ShowAccountDialog(__this,"main-menu-register",1,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterAccountFormActions>b__0_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___RegisterAccountFormActions_b__0_1 (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x416c620

void Gisketch_Aottg2UI_Game_AottgGameUiActions__<RegisterAccountFormActions>b__0_1
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if (DAT_05704aa3 == '\0') {
    il2cpp_init_method_metadata(&"main-menu-forgot-password");
    DAT_05704aa3 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__ShowAccountDialog(__this,"main-menu-forgot-password",1,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<Logout>b__6_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___Logout_b__6_0 (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x416c660

void Gisketch_Aottg2UI_Game_AottgGameUiActions__<Logout>b__6_0
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,bool_conflict success,
               System_String_o *error,MethodInfo *method)

{
  MethodInfo *method_00;
  System_String_o *content;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  System_String_o *icon;
  int32_t variant;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_00000034,success);
  if (DAT_05704aa4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"MainMenu.Account.Logout");
    il2cpp_init_method_metadata(&"Logout");
    il2cpp_init_method_metadata(&"Logged out.");
    il2cpp_init_method_metadata(&"exclamation");
    il2cpp_init_method_metadata(&"account.logout");
    il2cpp_init_method_metadata(&"MainMenu.Account.LoggedOutSuccess");
    il2cpp_init_method_metadata(&"checkmark");
    DAT_05704aa4 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__EndAccountOperation(__this,method_01);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(__this,method_01);
  method_00 = extraout_RDX;
  if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_00;
  }
  if ((char)success == '\0') {
    content = Gisketch_Aottg2UI_Game_AottgGameUiActions__ErrorText(error,method_01);
    variant = 0;
    icon = "exclamation";
  }
  else {
    content = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                        ("MainMenu.Account.LoggedOutSuccess","Logged out.",method_00);
    variant = 4;
    icon = "checkmark";
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
            (__this,variant,icon,"MainMenu.Account.Logout","Logout",content,"account.logout",
             in_stack_ffffffffffffffe0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RefreshAccount>b__7_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___RefreshAccount_b__7_0 (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x416c7b0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__<RefreshAccount>b__7_0
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,bool_conflict success,
               System_String_o *error,MethodInfo *method)

{
  MethodInfo *method_00;
  System_String_o *content;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  System_String_o *icon;
  int32_t variant;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_00000034,success);
  if (DAT_05704aa5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"Account refreshed.");
    il2cpp_init_method_metadata(&"MainMenu.Account.Refresh");
    il2cpp_init_method_metadata(&"MainMenu.Account.Refreshed");
    il2cpp_init_method_metadata(&"exclamation");
    il2cpp_init_method_metadata(&"account.refresh");
    il2cpp_init_method_metadata(&"Refresh");
    il2cpp_init_method_metadata(&"checkmark");
    DAT_05704aa5 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__EndAccountOperation(__this,method_01);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(__this,method_01);
  method_00 = extraout_RDX;
  if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_00;
  }
  if ((char)success == '\0') {
    content = Gisketch_Aottg2UI_Game_AottgGameUiActions__ErrorText(error,method_01);
    variant = 0;
    icon = "exclamation";
  }
  else {
    content = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                        ("MainMenu.Account.Refreshed","Account refreshed.",method_00);
    variant = 4;
    icon = "checkmark";
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
            (__this,variant,icon,"MainMenu.Account.Refresh","Refresh",content,"account.refresh",
             in_stack_ffffffffffffffe0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<GoOnline>b__9_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___GoOnline_b__9_0 (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x416c900

void Gisketch_Aottg2UI_Game_AottgGameUiActions__<GoOnline>b__9_0
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,bool_conflict success,
               System_String_o *error,MethodInfo *method)

{
  MethodInfo *method_00;
  System_String_o *content;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  System_String_o *icon;
  int32_t variant;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_00000034,success);
  if (DAT_05704aa6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"MainMenu.Account.OnlineRestored");
    il2cpp_init_method_metadata(&"Online session restored.");
    il2cpp_init_method_metadata(&"Go Online");
    il2cpp_init_method_metadata(&"MainMenu.Account.GoOnline");
    il2cpp_init_method_metadata(&"account.goOnline");
    il2cpp_init_method_metadata(&"exclamation");
    il2cpp_init_method_metadata(&"checkmark");
    DAT_05704aa6 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__EndAccountOperation(__this,method_01);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(__this,method_01);
  method_00 = extraout_RDX;
  if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_00;
  }
  if ((char)success == '\0') {
    content = Gisketch_Aottg2UI_Game_AottgGameUiActions__ErrorText(error,method_01);
    variant = 0;
    icon = "exclamation";
  }
  else {
    content = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                        ("MainMenu.Account.OnlineRestored","Online session restored.",method_00);
    variant = 4;
    icon = "checkmark";
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
            (__this,variant,icon,"MainMenu.Account.GoOnline","Go Online",content,"account.goOnline",
             in_stack_ffffffffffffffe0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterAccountActions>b__28_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___RegisterAccountActions_b__28_0 (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x416ca50

void Gisketch_Aottg2UI_Game_AottgGameUiActions__<RegisterAccountActions>b__28_0
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if (DAT_05704a5c == '\0') {
    il2cpp_init_method_metadata(&"main-menu-login");
    DAT_05704a5c = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__ShowAccountDialog(__this,"main-menu-login",0,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterAccountActions>b__28_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___RegisterAccountActions_b__28_1 (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x416ca90

void Gisketch_Aottg2UI_Game_AottgGameUiActions__<RegisterAccountActions>b__28_1
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704aa7 == '\0') {
    il2cpp_init_method_metadata(&"discord");
    DAT_05704aa7 = '\x01';
    in_RDX = extraout_RDX;
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__LoginWithOAuth(__this,"discord",in_RDX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterAccountActions>b__28_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___RegisterAccountActions_b__28_2 (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x416cad0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__<RegisterAccountActions>b__28_2
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704aa8 == '\0') {
    il2cpp_init_method_metadata(&"google");
    DAT_05704aa8 = '\x01';
    in_RDX = extraout_RDX;
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__LoginWithOAuth(__this,"google",in_RDX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<StartAccountActions>b__31_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___StartAccountActions_b__31_0 (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x416cb10

void Gisketch_Aottg2UI_Game_AottgGameUiActions__<StartAccountActions>b__31_0
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,bool_conflict success,
               System_String_o *error,MethodInfo *method)

{
  System_String_o *content;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,success);
  if (DAT_05704aa9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"MainMenu.Account.SignIn");
    il2cpp_init_method_metadata(&"warning");
    il2cpp_init_method_metadata(&"Sign In");
    DAT_05704aa9 = '\x01';
  }
  if ((char)success == '\0') {
    *(undefined1 *)&(__this->fields)._authMethodsUnavailable = 1;
    Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(__this,method_00);
    if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    content = Gisketch_Aottg2UI_Game_AottgGameUiActions__ErrorText(error,method_00);
    Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
              (__this,1,"warning","MainMenu.Account.SignIn","Sign In",content,(System_String_o *)0x0,
               in_stack_ffffffffffffffe0);
    return;
  }
  *(undefined1 *)&(__this->fields)._authMethodsUnavailable = 0;
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RefreshAuthMethodsForDialog>b__34_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___RefreshAuthMethodsForDialog_b__34_0 (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x416cbf0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__<RefreshAuthMethodsForDialog>b__34_0
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,bool_conflict success,
               System_String_o *error,MethodInfo *method)

{
  System_String_o *content;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,success);
  if (DAT_05704aaa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"MainMenu.Account.SignIn");
    il2cpp_init_method_metadata(&"warning");
    il2cpp_init_method_metadata(&"Sign In");
    DAT_05704aaa = '\x01';
  }
  if ((char)success == '\0') {
    *(undefined1 *)&(__this->fields)._authMethodsUnavailable = 1;
    Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(__this,method_00);
    if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    content = Gisketch_Aottg2UI_Game_AottgGameUiActions__ErrorText(error,method_00);
    Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
              (__this,1,"warning","MainMenu.Account.SignIn","Sign In",content,(System_String_o *)0x0,
               in_stack_ffffffffffffffe0);
    return;
  }
  *(undefined1 *)&(__this->fields)._authMethodsUnavailable = 0;
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<LoginWithOAuth>b__37_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___LoginWithOAuth_b__37_0 (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x416ccd0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__<LoginWithOAuth>b__37_0
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,bool_conflict success,
               System_String_o *error,MethodInfo *method)

{
  System_String_o *content;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar1;
  System_String_o *icon;
  int32_t variant;
  undefined4 in_register_00000034;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  pMVar1 = (MethodInfo *)CONCAT44(in_register_00000034,success);
  if (DAT_05704aab == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"MainMenu.Account.SignIn");
    il2cpp_init_method_metadata(&"Signed in.");
    il2cpp_init_method_metadata(&"MainMenu.Account.SignedIn");
    il2cpp_init_method_metadata(&"account.login");
    il2cpp_init_method_metadata(&"exclamation");
    il2cpp_init_method_metadata(&"Sign In");
    il2cpp_init_method_metadata(&"checkmark");
    DAT_05704aab = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__EndAccountOperation(__this,pMVar1);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(__this,pMVar1);
  if ((char)success == '\0') {
    if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    content = Gisketch_Aottg2UI_Game_AottgGameUiActions__ErrorText(error,pMVar1);
    variant = 0;
    icon = "exclamation";
  }
  else {
    Gisketch_Aottg2UI_Game_AottgGameUiActions__CloseTopOverlay(__this,pMVar1);
    pMVar1 = extraout_RDX;
    if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar1 = extraout_RDX_00;
    }
    content = Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountText
                        ("MainMenu.Account.SignedIn","Signed in.",pMVar1);
    variant = 4;
    icon = "checkmark";
  }
  Gisketch_Aottg2UI_Game_AottgGameUiActions__AccountToast
            (__this,variant,icon,"MainMenu.Account.SignIn","Sign In",content,"account.login",
             in_stack_ffffffffffffffe0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterCreditsActions>b__52_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___RegisterCreditsActions_b__52_0 (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x416ce40

void Gisketch_Aottg2UI_Game_AottgGameUiActions__<RegisterCreditsActions>b__52_0
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  System_Action_AottgCreditsResult__o *onResult;
  
  if (DAT_05704a70 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgCreditsResult);
    il2cpp_init_method_metadata(&MethodInfo_Void_ApplyCreditsResult);
    DAT_05704a70 = '\x01';
  }
  onResult = (System_Action_AottgCreditsResult__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgCreditsResult);
  System_Action<object>___ctor();
  ApplicationManagers_Credits_AottgCreditsService__GetCredits(onResult,1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<SaveProfile>b__92_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___SaveProfile_b__92_0 (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x416ceb0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__<SaveProfile>b__92_0
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,bool_conflict success,
               System_String_o *error,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *__this_01;
  System_String_o *content;
  System_String_o *title;
  System_String_o *icon;
  int32_t variant;
  MethodInfo *pMVar1;
  
  if (DAT_05704aac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgGameUiActions);
    il2cpp_init_method_metadata(&"Profile saved.");
    il2cpp_init_method_metadata(&"profile.save");
    il2cpp_init_method_metadata(&"Profile");
    il2cpp_init_method_metadata(&"exclamation");
    il2cpp_init_method_metadata(&"checkmark");
    DAT_05704aac = '\x01';
  }
  pMVar1 = "profile.save";
  Gisketch_Aottg2UI_Actions_GisketchController__EndOperation
            ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
             (System_String_o *)"profile.save",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameUiActions__RefreshAccountState(__this,pMVar1);
  if ((char)success == '\0') {
    if (*(int *)(TypeInfo_AottgGameUiActions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    content = Gisketch_Aottg2UI_Game_AottgGameUiActions__ErrorText(error,pMVar1);
    pMVar1 = "profile.save";
    icon = "exclamation";
    title = "Profile";
    if (DAT_05704a95 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AottgToastDefinition);
      DAT_05704a95 = '\x01';
    }
    __this_00 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                          ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                           (MethodInfo *)0x0);
    if (__this_00 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      return;
    }
    __this_01 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)il2cpp_runtime_glue(TypeInfo_AottgToastDefinition);
    variant = 0;
  }
  else {
    Gisketch_Aottg2UI_Game_AottgGameUiActions__CloseTopOverlay(__this,pMVar1);
    Gisketch_Aottg2UI_Game_AottgGameUiActions__RebuildProfileScreen(__this,pMVar1);
    pMVar1 = "profile.save";
    icon = "checkmark";
    content = "Profile saved.";
    title = "Profile";
    if (DAT_05704a95 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AottgToastDefinition);
      DAT_05704a95 = '\x01';
    }
    __this_00 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                          ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,
                           (MethodInfo *)0x0);
    if (__this_00 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      return;
    }
    __this_01 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)il2cpp_runtime_glue(TypeInfo_AottgToastDefinition);
    variant = 4;
  }
  Gisketch_Aottg2UI_Code_AottgToastDefinition___ctor
            (__this_01,variant,icon,title,content,(System_String_o *)pMVar1,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_GisketchUIRoot__ShowToast(__this_00,__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterMainActions>b__102_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___RegisterMainActions_b__102_0 (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x416d0a0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__<RegisterMainActions>b__102_0
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameUiActions__OpenProfileScreen(__this,__,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameUiActions$$<RegisterMainActions>b__102_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameUiActions___RegisterMainActions_b__102_1 (Gisketch_Aottg2UI_Game_AottgGameUiActions_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x416d0b0

void Gisketch_Aottg2UI_Game_AottgGameUiActions__<RegisterMainActions>b__102_1
               (Gisketch_Aottg2UI_Game_AottgGameUiActions_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  System_Action_AottgCreditsResult__o *onResult;
  
  if (DAT_05704a6f == '\0') {
    il2cpp_init_method_metadata(&"credits");
    DAT_05704a6f = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Actions_GisketchController__get_Root
                     ((Gisketch_Aottg2UI_Actions_GisketchController_o *)__this,(MethodInfo *)0x0);
  if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this_00 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)
                  (pGVar1->fields)._Manifest_k__BackingField,
     __this_00 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)) {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen
              (__this_00,"credits",(MethodInfo *)0x0);
  }
  if (DAT_05704a70 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgCreditsResult);
    il2cpp_init_method_metadata(&MethodInfo_Void_ApplyCreditsResult);
    DAT_05704a70 = '\x01';
  }
  onResult = (System_Action_AottgCreditsResult__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgCreditsResult);
  System_Action<object>___ctor();
  ApplicationManagers_Credits_AottgCreditsService__GetCredits(onResult,0,(MethodInfo *)0x0);
  return;
}


