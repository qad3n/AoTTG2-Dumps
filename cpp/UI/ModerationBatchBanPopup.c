// Type: UI.ModerationBatchBanPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ModerationBatchBanPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.ModerationBatchBanPopup$$get_Title
// il2cpp: System_String_o* UI_ModerationBatchBanPopup__get_Title (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x43d6650

System_String_o *
UI_ModerationBatchBanPopup__get_Title(UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae44b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Batch Ban");
    g_data_057ae44b = '\x01';
  }
  return "Batch Ban";
}


// UI.ModerationBatchBanPopup$$get_Width
// il2cpp: float UI_ModerationBatchBanPopup__get_Width (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x43d6680

float UI_ModerationBatchBanPopup__get_Width(UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  return 550.0;
}


// UI.ModerationBatchBanPopup$$get_Height
// il2cpp: float UI_ModerationBatchBanPopup__get_Height (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x43d6690

float UI_ModerationBatchBanPopup__get_Height(UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  return 450.0;
}


// UI.ModerationBatchBanPopup$$get_VerticalPadding
// il2cpp: int32_t UI_ModerationBatchBanPopup__get_VerticalPadding (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x43d66a0

int32_t UI_ModerationBatchBanPopup__get_VerticalPadding
                  (UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.ModerationBatchBanPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_ModerationBatchBanPopup__get_HorizontalPadding (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x43d66b0

int32_t UI_ModerationBatchBanPopup__get_HorizontalPadding
                  (UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.ModerationBatchBanPopup$$get_PanelAlignment
// il2cpp: int32_t UI_ModerationBatchBanPopup__get_PanelAlignment (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x43d66c0

int32_t UI_ModerationBatchBanPopup__get_PanelAlignment
                  (UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.ModerationBatchBanPopup$$Setup
// il2cpp: void UI_ModerationBatchBanPopup__Setup (UI_ModerationBatchBanPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43d66d0

void UI_ModerationBatchBanPopup__Setup
               (UI_ModerationBatchBanPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  UnityEngine_UI_Text_o *__this_02;
  undefined8 extraout_RDX;
  long lVar5;
  UI_TooltipPopup_o *__this_03;
  
  if (g_data_057ae44c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__13_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__13_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__13_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__13_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__13_4);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Session Ban");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Targets");
    il2cpp_runtime_helper_023445d0(&"Session Unban");
    il2cpp_runtime_helper_023445d0(&"IP Unban");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Enter session IDs or IP addresses, one per line.");
    il2cpp_runtime_helper_023445d0(&"IP Ban");
    g_data_057ae44c = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,100.0,20.0,pSVar1,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel
            ((__this->fields).SinglePanel,__this_00,"Enter session IDs or IP addresses, one per line.",0,3,(MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            ((__this->fields).SinglePanel,__this_00,
             (Settings_BaseSetting_o *)(__this->fields)._batchTargetsSetting,"Targets","",360.0,
             150.0,1,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  __this_03 = (UI_TooltipPopup_o *)(__this->fields).SinglePanel;
  lVar5 = 4;
  pUVar2 = UI_ElementFactory__CreateHorizontalGroup
                     ((UnityEngine_Transform_o *)__this_03,10.0,4,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    UI_ElementFactory__CreateDefaultButton(pUVar3,__this_00,"Session Ban",140.0,0.0,pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    UI_ElementFactory__CreateDefaultButton(pUVar3,__this_00,"IP Ban",140.0,0.0,pUVar4,(MethodInfo *)0x0);
    __this_03 = (UI_TooltipPopup_o *)(__this->fields).SinglePanel;
    lVar5 = 4;
    pUVar2 = UI_ElementFactory__CreateHorizontalGroup
                       ((UnityEngine_Transform_o *)__this_03,10.0,4,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      UI_ElementFactory__CreateDefaultButton(pUVar3,__this_00,"Session Unban",140.0,0.0,pUVar4,(MethodInfo *)0x0)
      ;
      pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      UI_ElementFactory__CreateDefaultButton(pUVar3,__this_00,"IP Unban",140.0,0.0,pUVar4,(MethodInfo *)0x0)
      ;
      pUVar3 = (__this->fields).BottomBar;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
      pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      UI_ElementFactory__CreateTextButton(pUVar3,__this_01,pSVar1,0.0,pUVar4,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
    vtableDispatch = (__this_03->klass->vtable)._22_Hide.methodPtr;
    (*vtableDispatch)
              (__this_03,(__this_03->klass->vtable)._22_Hide.method,extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae44d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae44d = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_02 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)__this_02,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this_03->fields)._label = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields)._label);
  UI_PromptPopup___ctor(__this_03,(MethodInfo *)0x0);
  return;
}


// UI.ModerationBatchBanPopup$$OnAction
// il2cpp: void UI_ModerationBatchBanPopup__OnAction (UI_ModerationBatchBanPopup_o* __this, System_Action_o* action, const MethodInfo* method);
// 0x43d6ae0

void UI_ModerationBatchBanPopup__OnAction
               (UI_ModerationBatchBanPopup_o *__this,System_Action_o *action,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  System_String_o *defaultValue;
  UnityEngine_UI_Text_o *__this_00;
  undefined8 extraout_RDX;
  
  if (action != (System_Action_o *)0x0) {
    (*(code *)(action->fields).invoke_impl)((action->fields).method_code,(action->fields).method);
    vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
    (*vtableDispatch)
              (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae44d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae44d = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_00 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (((UI_TooltipPopup_o *)__this)->fields)._label = __this_00;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)__this)->fields)._label);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ModerationBatchBanPopup$$.ctor
// il2cpp: void UI_ModerationBatchBanPopup___ctor (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x43d6b20

void UI_ModerationBatchBanPopup___ctor(UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  
  if (g_data_057ae44d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae44d = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._batchTargetsSetting = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._batchTargetsSetting);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ModerationBatchBanPopup$$<Setup>b__13_0
// il2cpp: void UI_ModerationBatchBanPopup___Setup_b__13_0 (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x43d6bb0

void UI_ModerationBatchBanPopup___Setup_b__13_0(UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  code *vtableDispatch;
  System_Int32_array *pSVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  intptr_t iVar5;
  intptr_t iVar6;
  bool_conflict bVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar11;
  System_Action_o *onTimeout;
  Il2CppObject *pIVar12;
  System_String_o *pSVar13;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 *puVar14;
  uint uVar15;
  System_String_o *unaff_RBP;
  long *plVar16;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  undefined8 unaff_R12;
  System_Action_Dictionary_byte__object___o *unaff_R13;
  undefined8 uVar17;
  System_String_o *unaff_R15;
  undefined8 uStack_38;
  long *plStack_30;
  UI_ModerationBatchBanPopup_o *pUStack_28;
  long *plStack_20;
  
  if (g_data_057ae44e == '\0') {
    plStack_20 = (long *)0x43d6bcc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    plStack_20 = (long *)0x43d6bd8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__13_5);
    g_data_057ae44e = '\x01';
  }
  plStack_20 = (long *)0x43d6bee;
  plVar9 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  plStack_20 = (long *)0x43d6c08;
  plVar10 = plVar9;
  System_Action___ctor();
  if (plVar9 != (long *)0x0) {
    plStack_20 = (long *)0x43d6c18;
    (*(code *)plVar9[3])(plVar9[8],plVar9[5]);
    UNRECOVERED_JUMPTABLE_00 = (__this->klass->vtable)._22_Hide.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  plStack_20 = (long *)0x43d6c3a;
  il2cpp_runtime_helper_022b2c90();
  plVar16 = plVar10;
  plStack_20 = plVar9;
  if (g_data_057ae44f == '\0') {
    pUStack_28 = (UI_ModerationBatchBanPopup_o *)0x43d6c59;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    plVar16 = &MethodInfo_String_get_Value;
    pUStack_28 = (UI_ModerationBatchBanPopup_o *)0x43d6c65;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae44f = '\x01';
  }
  if (plVar10[0x15] != 0) {
    pSVar13 = *(System_String_o **)(plVar10[0x15] + 0x18);
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      pUStack_28 = (UI_ModerationBatchBanPopup_o *)0x43d6c9f;
      il2cpp_runtime_helper_02337ed0();
      Anticheat_ModeratorManager__BatchSessionBan(pSVar13,(MethodInfo *)0x0);
      return;
    }
    Anticheat_ModeratorManager__BatchSessionBan(pSVar13,(MethodInfo *)0x0);
    return;
  }
  pUStack_28 = (UI_ModerationBatchBanPopup_o *)0x43d6caf;
  uStack_38 = il2cpp_runtime_helper_022b2c90();
  plStack_30 = plVar10;
  pUStack_28 = __this;
  if (g_data_057ae450 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__13_6);
    g_data_057ae450 = '\x01';
  }
  plVar9 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  plVar10 = plVar9;
  System_Action___ctor();
  if (plVar9 != (long *)0x0) {
    (*(code *)plVar9[3])(plVar9[8],plVar9[5]);
    vtableDispatch = *(code **)(*plVar16 + 0x298);
    (*vtableDispatch)(plVar16,*(undefined8 *)(*plVar16 + 0x2a0),extraout_RDX_00,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar9 = plVar10;
  if (g_data_057ae451 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    plVar9 = &MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae451 = '\x01';
  }
  if (plVar10[0x15] == 0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae452 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__13_7);
      g_data_057ae452 = '\x01';
    }
    plVar16 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    plVar10 = plVar16;
    System_Action___ctor();
    if (plVar16 != (long *)0x0) {
      (*(code *)plVar16[3])(plVar16[8],plVar16[5]);
      vtableDispatch = *(code **)(*plVar9 + 0x298);
      (*vtableDispatch)(plVar9,*(undefined8 *)(*plVar9 + 0x2a0),extraout_RDX_01,vtableDispatch);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    plVar9 = plVar10;
    if (g_data_057ae453 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      plVar9 = &MethodInfo_String_get_Value;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae453 = '\x01';
    }
    if (plVar10[0x15] != 0) {
      pSVar13 = *(System_String_o **)(plVar10[0x15] + 0x18);
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        Anticheat_ModeratorManager__BatchSessionUnban(pSVar13,(MethodInfo *)0x0);
        return;
      }
      Anticheat_ModeratorManager__BatchSessionUnban(pSVar13,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae454 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__13_8);
      g_data_057ae454 = '\x01';
    }
    plVar16 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    plVar10 = plVar16;
    System_Action___ctor();
    if (plVar16 != (long *)0x0) {
      (*(code *)plVar16[3])(plVar16[8],plVar16[5]);
      vtableDispatch = *(code **)(*plVar9 + 0x298);
      (*vtableDispatch)(plVar9,*(undefined8 *)(*plVar9 + 0x2a0),extraout_RDX_02,vtableDispatch);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    plVar9 = plVar10;
    if (g_data_057ae455 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      plVar9 = &MethodInfo_String_get_Value;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae455 = '\x01';
    }
    if (plVar10[0x15] == 0) {
      il2cpp_runtime_helper_022b2c90();
      (**(code **)(*plVar9 + 0x298))();
      return;
    }
    pSVar13 = *(System_String_o **)(plVar10[0x15] + 0x18);
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      Anticheat_ModeratorManager__BatchIPUnban(pSVar13,(MethodInfo *)0x0);
      return;
    }
    Anticheat_ModeratorManager__BatchIPUnban(pSVar13,(MethodInfo *)0x0);
    return;
  }
  __this_00 = *(System_Collections_Generic_Dictionary_byte__object__o **)(plVar10[0x15] + 0x18);
  plVar10 = &TypeInfo_ModeratorManager;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    plVar10 = (long *)il2cpp_runtime_helper_02337ed0();
    puVar14 = &uStack_38;
  }
  else {
    puVar14 = &uStack_38;
  }
  do {
    *(System_String_o **)((long)puVar14 + -8) = unaff_RBP;
    *(undefined8 *)((long)puVar14 + -0x10) = 0;
    *(long **)((long)puVar14 + -0x18) = plVar10;
    if (g_data_057aeb71 == '\0') {
      *(undefined8 *)((long)puVar14 + -0x20) = 0x44da75b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb71 = '\x01';
    }
    if (__this_00 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSVar13 = (System_String_o *)0x0;
    }
    else {
      *(undefined8 *)((long)puVar14 + -0x20) = 0x44da771;
      pSVar13 = System_String__Trim((System_String_o *)__this_00,(MethodInfo *)0x0);
    }
    *(undefined8 *)((long)puVar14 + -0x20) = 0x44da782;
    bVar7 = System_String__IsNullOrEmpty(pSVar13,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      *(undefined8 *)((long)puVar14 + -0x20) = 0x44da7f3;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae4d9 != '\0') goto label_044da7aa;
label_044da7fc:
      *(undefined8 *)((long)puVar14 + -0x20) = 0x44da808;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057ae4d9 = '\x01';
      iVar8 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      if (g_data_057ae4d9 == '\0') goto label_044da7fc;
label_044da7aa:
      iVar8 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar8 == 0) {
      *(undefined8 *)((long)puVar14 + -0x20) = 0x44da822;
      il2cpp_runtime_helper_02337ed0();
      iVar8 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    uVar15 = (uint)(*(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0') * 2 + 2;
    if (iVar8 == 0) {
      *(undefined8 *)((long)puVar14 + -0x20) = 0x44da7d7;
      il2cpp_runtime_helper_02337ed0();
    }
    plVar9 = (long *)(ulong)uVar15;
    uVar17 = *(undefined8 *)((long)puVar14 + -0x10);
    *(undefined8 *)((long)puVar14 + -8) = *(undefined8 *)((long)puVar14 + -8);
    *(System_String_o **)((long)puVar14 + -0x10) = unaff_R15;
    *(long **)((long)puVar14 + -0x18) = plVar16;
    *(System_Action_Dictionary_byte__object___o **)((long)puVar14 + -0x20) = unaff_R13;
    *(undefined8 *)((long)puVar14 + -0x28) = unaff_R12;
    *(undefined8 *)((long)puVar14 + -0x30) = uVar17;
    unaff_R12 = 3;
    if (g_data_057aeb74 == '\0') {
      *(undefined8 *)((long)puVar14 + -0x50) = 0x44da47f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
      *(undefined8 *)((long)puVar14 + -0x50) = 0x44da48b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
      *(undefined8 *)((long)puVar14 + -0x50) = 0x44da497;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      *(undefined8 *)((long)puVar14 + -0x50) = 0x44da4a3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
      *(undefined8 *)((long)puVar14 + -0x50) = 0x44da4af;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
      *(undefined8 *)((long)puVar14 + -0x50) = 0x44da4bb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      *(undefined8 *)((long)puVar14 + -0x50) = 0x44da4c7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SendBatchRoomRemove_b__0);
      *(undefined8 *)((long)puVar14 + -0x50) = 0x44da4d3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SendBatchRoomRemove_b__1);
      *(undefined8 *)((long)puVar14 + -0x50) = 0x44da4df;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass106_0);
      *(undefined8 *)((long)puVar14 + -0x50) = 0x44da4eb;
      il2cpp_runtime_helper_023445d0(&"Sending request...");
      g_data_057aeb74 = '\x01';
    }
    *(undefined8 *)((long)puVar14 + -0x50) = 0x44da501;
    pSVar11 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass106_0);
    *(undefined8 *)((long)puVar14 + -0x50) = 0x44da50e;
    __this_00 = pSVar11;
    Anticheat_ModeratorManager___c__DisplayClass106_0___ctor
              ((Anticheat_ModeratorManager___c__DisplayClass106_0_o *)pSVar11,(MethodInfo *)0x0);
    unaff_RBP = (System_String_o *)0x0;
    if (pSVar11 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      *(uint *)((long)puVar14 + -0x3c) = uVar15;
      (pSVar11->fields)._buckets = (System_Int32_array *)0x0;
      *(undefined8 *)((long)puVar14 + -0x50) = 0x44da52f;
      il2cpp_runtime_helper_022b4080(&pSVar11->fields,0);
      pSVar1 = (pSVar11->fields)._buckets;
      plVar9 = &TypeInfo_ModeratorManager;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        *(undefined8 *)((long)puVar14 + -0x50) = 0x44da6dc;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057aeb5b != '\0') goto label_044da561;
label_044da6f3:
        uVar17 = "Sending request...";
        *(undefined8 *)((long)puVar14 + -0x50) = 0x44da6ff;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb5b = '\x01';
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044da571;
label_044da716:
        *(undefined8 *)((long)puVar14 + -0x50) = 0x44da71b;
        il2cpp_runtime_helper_02337ed0();
        lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      else {
        if (g_data_057aeb5b == '\0') goto label_044da6f3;
label_044da561:
        uVar17 = "Sending request...";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044da716;
label_044da571:
        lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(lVar2 + 0x28);
        uVar4 = *(undefined8 *)(lVar2 + 0x40);
        vtableDispatch = *(code **)(lVar2 + 0x18);
        *(undefined8 *)((long)puVar14 + -0x50) = 0x44da58f;
        (*vtableDispatch)(uVar4,uVar17,uVar3);
      }
      if (pSVar1 != (System_Int32_array *)0x0) {
        iVar5 = *(intptr_t *)((long)pSVar1->m_Items + 8);
        iVar6 = *(intptr_t *)((long)pSVar1->m_Items + 0x20);
        vtableDispatch = (code *)pSVar1->max_length;
        *(undefined8 *)((long)puVar14 + -0x50) = 0x44da5a2;
        (*vtableDispatch)(iVar6,uVar17,iVar5);
      }
      *(undefined8 *)((long)puVar14 + -0x50) = 0x44da5b1;
      unaff_R13 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
      *(undefined8 *)((long)puVar14 + -0x50) = 0x44da5cb;
      System_Action_object____ctor();
      *(undefined8 *)((long)puVar14 + -0x50) = 0x44da5da;
      onTimeout = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
      *(undefined8 *)((long)puVar14 + -0x50) = 0x44da5f4;
      System_Action___ctor();
      *(undefined8 *)((long)puVar14 + -0x50) = 0x44da607;
      unaff_RBP = Anticheat_ModeratorManager__TrackRequest(15.0,unaff_R13,onTimeout,method_00);
      *(undefined8 *)((long)puVar14 + -0x50) = 0x44da619;
      pSVar11 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
      *(undefined8 *)((long)puVar14 + -0x50) = 0x44da62e;
      __this_00 = pSVar11;
      System_Collections_Generic_Dictionary_byte__object____ctor(pSVar11,MethodInfo_Dictionary_2_System_Byte_System_Object);
      if (pSVar11 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
        *(undefined8 *)((long)puVar14 + -0x50) = 0x44da64f;
        System_Collections_Generic_Dictionary_byte__object___Add
                  (pSVar11,'\0',(Il2CppObject *)unaff_RBP,MethodInfo_Void_Add);
        *(undefined4 *)((long)puVar14 + -0x34) = 3;
        *(undefined8 *)((long)puVar14 + -0x50) = 0x44da669;
        pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(undefined1 *)((long)puVar14 + -0x34));
        *(undefined8 *)((long)puVar14 + -0x50) = 0x44da67d;
        System_Collections_Generic_Dictionary_byte__object___Add(pSVar11,'\x01',pIVar12,MethodInfo_Void_Add);
        *(undefined4 *)((long)puVar14 + -0x38) = *(undefined4 *)((long)puVar14 + -0x3c);
        *(undefined8 *)((long)puVar14 + -0x50) = 0x44da693;
        pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(undefined1 *)((long)puVar14 + -0x38));
        *(undefined8 *)((long)puVar14 + -0x50) = 0x44da6a7;
        System_Collections_Generic_Dictionary_byte__object___Add(pSVar11,'\x02',pIVar12,MethodInfo_Void_Add);
        *(undefined8 *)((long)puVar14 + -0x50) = 0x44da6bb;
        System_Collections_Generic_Dictionary_byte__object___Add
                  (pSVar11,'\x03',(Il2CppObject *)pSVar13,MethodInfo_Void_Add);
        *(undefined8 *)((long)puVar14 + -0x50) = 0x44da6c8;
        Anticheat_ModeratorManager__RaiseModEvent(0xb4,pSVar11,method_01);
        return;
      }
    }
    *(undefined8 *)((long)puVar14 + -0x50) = 0x44da73c;
    plVar10 = (long *)il2cpp_runtime_helper_022b2c90();
    puVar14 = (undefined8 *)((long)puVar14 + -0x48);
    plVar16 = plVar9;
    unaff_R15 = pSVar13;
  } while( true );
}


// UI.ModerationBatchBanPopup$$<Setup>b__13_5
// il2cpp: void UI_ModerationBatchBanPopup___Setup_b__13_5 (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x43d6c40

void UI_ModerationBatchBanPopup___Setup_b__13_5(UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Il2CppMethodPointer vtableDispatch;
  System_Int32_array *pSVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  intptr_t iVar6;
  intptr_t iVar7;
  bool_conflict bVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar13;
  System_Action_o *onTimeout;
  Il2CppObject *pIVar14;
  System_String_o *pSVar15;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 *puVar16;
  uint uVar17;
  System_String_o *unaff_RBP;
  UI_ModerationBatchBanPopup_o *pUVar18;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  undefined8 unaff_R12;
  System_Action_Dictionary_byte__object___o *unaff_R13;
  undefined8 uVar19;
  System_String_o *unaff_R15;
  undefined8 uStack_20;
  UI_ModerationBatchBanPopup_o *pUStack_18;
  
  pUVar18 = __this;
  if (g_data_057ae44f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pUVar18 = (UI_ModerationBatchBanPopup_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae44f = '\x01';
  }
  pSVar1 = (__this->fields)._batchTargetsSetting;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    pSVar15 = (pSVar1->fields)._value;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      Anticheat_ModeratorManager__BatchSessionBan(pSVar15,(MethodInfo *)0x0);
      return;
    }
    Anticheat_ModeratorManager__BatchSessionBan(pSVar15,(MethodInfo *)0x0);
    return;
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  pUStack_18 = __this;
  if (g_data_057ae450 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__13_6);
    g_data_057ae450 = '\x01';
  }
  plVar10 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  plVar11 = plVar10;
  System_Action___ctor();
  if (plVar10 != (long *)0x0) {
    (*(code *)plVar10[3])(plVar10[8],plVar10[5]);
    vtableDispatch = (pUVar18->klass->vtable)._22_Hide.methodPtr;
    (*vtableDispatch)
              (pUVar18,(pUVar18->klass->vtable)._22_Hide.method,extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar10 = plVar11;
  if (g_data_057ae451 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    plVar10 = &MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae451 = '\x01';
  }
  if (plVar11[0x15] == 0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae452 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__13_7);
      g_data_057ae452 = '\x01';
    }
    plVar12 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    plVar11 = plVar12;
    System_Action___ctor();
    if (plVar12 != (long *)0x0) {
      (*(code *)plVar12[3])(plVar12[8],plVar12[5]);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar10 + 0x298);
      (*UNRECOVERED_JUMPTABLE_00)
                (plVar10,*(undefined8 *)(*plVar10 + 0x2a0),extraout_RDX_00,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    plVar10 = plVar11;
    if (g_data_057ae453 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      plVar10 = &MethodInfo_String_get_Value;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae453 = '\x01';
    }
    if (plVar11[0x15] == 0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae454 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__13_8);
        g_data_057ae454 = '\x01';
      }
      plVar12 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
      plVar11 = plVar12;
      System_Action___ctor();
      if (plVar12 == (long *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        plVar10 = plVar11;
        if (g_data_057ae455 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
          plVar10 = &MethodInfo_String_get_Value;
          il2cpp_runtime_helper_023445d0();
          g_data_057ae455 = '\x01';
        }
        if (plVar11[0x15] == 0) {
          il2cpp_runtime_helper_022b2c90();
          (**(code **)(*plVar10 + 0x298))();
          return;
        }
        pSVar15 = *(System_String_o **)(plVar11[0x15] + 0x18);
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          Anticheat_ModeratorManager__BatchIPUnban(pSVar15,(MethodInfo *)0x0);
          return;
        }
        Anticheat_ModeratorManager__BatchIPUnban(pSVar15,(MethodInfo *)0x0);
        return;
      }
      (*(code *)plVar12[3])(plVar12[8],plVar12[5]);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar10 + 0x298);
      (*UNRECOVERED_JUMPTABLE_00)
                (plVar10,*(undefined8 *)(*plVar10 + 0x2a0),extraout_RDX_01,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    pSVar15 = *(System_String_o **)(plVar11[0x15] + 0x18);
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      Anticheat_ModeratorManager__BatchSessionUnban(pSVar15,(MethodInfo *)0x0);
      return;
    }
    Anticheat_ModeratorManager__BatchSessionUnban(pSVar15,(MethodInfo *)0x0);
    return;
  }
  __this_00 = *(System_Collections_Generic_Dictionary_byte__object__o **)(plVar11[0x15] + 0x18);
  plVar11 = &TypeInfo_ModeratorManager;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    plVar11 = (long *)il2cpp_runtime_helper_02337ed0();
    puVar16 = &uStack_20;
  }
  else {
    puVar16 = &uStack_20;
  }
  do {
    *(System_String_o **)((long)puVar16 + -8) = unaff_RBP;
    *(undefined8 *)((long)puVar16 + -0x10) = 0;
    *(long **)((long)puVar16 + -0x18) = plVar11;
    if (g_data_057aeb71 == '\0') {
      *(undefined8 *)((long)puVar16 + -0x20) = 0x44da75b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb71 = '\x01';
    }
    if (__this_00 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSVar15 = (System_String_o *)0x0;
    }
    else {
      *(undefined8 *)((long)puVar16 + -0x20) = 0x44da771;
      pSVar15 = System_String__Trim((System_String_o *)__this_00,(MethodInfo *)0x0);
    }
    *(undefined8 *)((long)puVar16 + -0x20) = 0x44da782;
    bVar8 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      *(undefined8 *)((long)puVar16 + -0x20) = 0x44da7f3;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae4d9 != '\0') goto label_044da7aa;
label_044da7fc:
      *(undefined8 *)((long)puVar16 + -0x20) = 0x44da808;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057ae4d9 = '\x01';
      iVar9 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      if (g_data_057ae4d9 == '\0') goto label_044da7fc;
label_044da7aa:
      iVar9 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar9 == 0) {
      *(undefined8 *)((long)puVar16 + -0x20) = 0x44da822;
      il2cpp_runtime_helper_02337ed0();
      iVar9 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    uVar17 = (uint)(*(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0') * 2 + 2;
    if (iVar9 == 0) {
      *(undefined8 *)((long)puVar16 + -0x20) = 0x44da7d7;
      il2cpp_runtime_helper_02337ed0();
    }
    plVar10 = (long *)(ulong)uVar17;
    uVar19 = *(undefined8 *)((long)puVar16 + -0x10);
    *(undefined8 *)((long)puVar16 + -8) = *(undefined8 *)((long)puVar16 + -8);
    *(System_String_o **)((long)puVar16 + -0x10) = unaff_R15;
    *(UI_ModerationBatchBanPopup_o **)((long)puVar16 + -0x18) = pUVar18;
    *(System_Action_Dictionary_byte__object___o **)((long)puVar16 + -0x20) = unaff_R13;
    *(undefined8 *)((long)puVar16 + -0x28) = unaff_R12;
    *(undefined8 *)((long)puVar16 + -0x30) = uVar19;
    unaff_R12 = 3;
    if (g_data_057aeb74 == '\0') {
      *(undefined8 *)((long)puVar16 + -0x50) = 0x44da47f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
      *(undefined8 *)((long)puVar16 + -0x50) = 0x44da48b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
      *(undefined8 *)((long)puVar16 + -0x50) = 0x44da497;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      *(undefined8 *)((long)puVar16 + -0x50) = 0x44da4a3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
      *(undefined8 *)((long)puVar16 + -0x50) = 0x44da4af;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
      *(undefined8 *)((long)puVar16 + -0x50) = 0x44da4bb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      *(undefined8 *)((long)puVar16 + -0x50) = 0x44da4c7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SendBatchRoomRemove_b__0);
      *(undefined8 *)((long)puVar16 + -0x50) = 0x44da4d3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SendBatchRoomRemove_b__1);
      *(undefined8 *)((long)puVar16 + -0x50) = 0x44da4df;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass106_0);
      *(undefined8 *)((long)puVar16 + -0x50) = 0x44da4eb;
      il2cpp_runtime_helper_023445d0(&"Sending request...");
      g_data_057aeb74 = '\x01';
    }
    *(undefined8 *)((long)puVar16 + -0x50) = 0x44da501;
    pSVar13 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass106_0);
    *(undefined8 *)((long)puVar16 + -0x50) = 0x44da50e;
    __this_00 = pSVar13;
    Anticheat_ModeratorManager___c__DisplayClass106_0___ctor
              ((Anticheat_ModeratorManager___c__DisplayClass106_0_o *)pSVar13,(MethodInfo *)0x0);
    unaff_RBP = (System_String_o *)0x0;
    if (pSVar13 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      *(uint *)((long)puVar16 + -0x3c) = uVar17;
      (pSVar13->fields)._buckets = (System_Int32_array *)0x0;
      *(undefined8 *)((long)puVar16 + -0x50) = 0x44da52f;
      il2cpp_runtime_helper_022b4080(&pSVar13->fields,0);
      pSVar2 = (pSVar13->fields)._buckets;
      plVar10 = &TypeInfo_ModeratorManager;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        *(undefined8 *)((long)puVar16 + -0x50) = 0x44da6dc;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057aeb5b != '\0') goto label_044da561;
label_044da6f3:
        uVar19 = "Sending request...";
        *(undefined8 *)((long)puVar16 + -0x50) = 0x44da6ff;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb5b = '\x01';
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044da571;
label_044da716:
        *(undefined8 *)((long)puVar16 + -0x50) = 0x44da71b;
        il2cpp_runtime_helper_02337ed0();
        lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      else {
        if (g_data_057aeb5b == '\0') goto label_044da6f3;
label_044da561:
        uVar19 = "Sending request...";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044da716;
label_044da571:
        lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)(lVar3 + 0x28);
        uVar5 = *(undefined8 *)(lVar3 + 0x40);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar3 + 0x18);
        *(undefined8 *)((long)puVar16 + -0x50) = 0x44da58f;
        (*UNRECOVERED_JUMPTABLE_00)(uVar5,uVar19,uVar4);
      }
      if (pSVar2 != (System_Int32_array *)0x0) {
        iVar6 = *(intptr_t *)((long)pSVar2->m_Items + 8);
        iVar7 = *(intptr_t *)((long)pSVar2->m_Items + 0x20);
        UNRECOVERED_JUMPTABLE_00 = (code *)pSVar2->max_length;
        *(undefined8 *)((long)puVar16 + -0x50) = 0x44da5a2;
        (*UNRECOVERED_JUMPTABLE_00)(iVar7,uVar19,iVar6);
      }
      *(undefined8 *)((long)puVar16 + -0x50) = 0x44da5b1;
      unaff_R13 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
      *(undefined8 *)((long)puVar16 + -0x50) = 0x44da5cb;
      System_Action_object____ctor();
      *(undefined8 *)((long)puVar16 + -0x50) = 0x44da5da;
      onTimeout = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
      *(undefined8 *)((long)puVar16 + -0x50) = 0x44da5f4;
      System_Action___ctor();
      *(undefined8 *)((long)puVar16 + -0x50) = 0x44da607;
      unaff_RBP = Anticheat_ModeratorManager__TrackRequest(15.0,unaff_R13,onTimeout,method_00);
      *(undefined8 *)((long)puVar16 + -0x50) = 0x44da619;
      pSVar13 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
      *(undefined8 *)((long)puVar16 + -0x50) = 0x44da62e;
      __this_00 = pSVar13;
      System_Collections_Generic_Dictionary_byte__object____ctor(pSVar13,MethodInfo_Dictionary_2_System_Byte_System_Object);
      if (pSVar13 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
        *(undefined8 *)((long)puVar16 + -0x50) = 0x44da64f;
        System_Collections_Generic_Dictionary_byte__object___Add
                  (pSVar13,'\0',(Il2CppObject *)unaff_RBP,MethodInfo_Void_Add);
        *(undefined4 *)((long)puVar16 + -0x34) = 3;
        *(undefined8 *)((long)puVar16 + -0x50) = 0x44da669;
        pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(undefined1 *)((long)puVar16 + -0x34));
        *(undefined8 *)((long)puVar16 + -0x50) = 0x44da67d;
        System_Collections_Generic_Dictionary_byte__object___Add(pSVar13,'\x01',pIVar14,MethodInfo_Void_Add);
        *(undefined4 *)((long)puVar16 + -0x38) = *(undefined4 *)((long)puVar16 + -0x3c);
        *(undefined8 *)((long)puVar16 + -0x50) = 0x44da693;
        pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(undefined1 *)((long)puVar16 + -0x38));
        *(undefined8 *)((long)puVar16 + -0x50) = 0x44da6a7;
        System_Collections_Generic_Dictionary_byte__object___Add(pSVar13,'\x02',pIVar14,MethodInfo_Void_Add);
        *(undefined8 *)((long)puVar16 + -0x50) = 0x44da6bb;
        System_Collections_Generic_Dictionary_byte__object___Add
                  (pSVar13,'\x03',(Il2CppObject *)pSVar15,MethodInfo_Void_Add);
        *(undefined8 *)((long)puVar16 + -0x50) = 0x44da6c8;
        Anticheat_ModeratorManager__RaiseModEvent(0xb4,pSVar13,method_01);
        return;
      }
    }
    *(undefined8 *)((long)puVar16 + -0x50) = 0x44da73c;
    plVar11 = (long *)il2cpp_runtime_helper_022b2c90();
    puVar16 = (undefined8 *)((long)puVar16 + -0x48);
    pUVar18 = (UI_ModerationBatchBanPopup_o *)plVar10;
    unaff_R15 = pSVar15;
  } while( true );
}


// UI.ModerationBatchBanPopup$$<Setup>b__13_1
// il2cpp: void UI_ModerationBatchBanPopup___Setup_b__13_1 (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x43d6cb0

void UI_ModerationBatchBanPopup___Setup_b__13_1(UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  System_Int32_array *pSVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  intptr_t iVar5;
  intptr_t iVar6;
  bool_conflict bVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar12;
  System_Action_o *onTimeout;
  Il2CppObject *pIVar13;
  System_String_o *pSVar14;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined1 *puVar15;
  uint uVar16;
  System_String_o *unaff_RBP;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  undefined8 unaff_R12;
  System_Action_Dictionary_byte__object___o *unaff_R13;
  undefined8 uVar17;
  System_String_o *unaff_R15;
  undefined1 auStack_18 [8];
  
  if (g_data_057ae450 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__13_6);
    g_data_057ae450 = '\x01';
  }
  plVar9 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  plVar10 = plVar9;
  System_Action___ctor();
  if (plVar9 != (long *)0x0) {
    (*(code *)plVar9[3])(plVar9[8],plVar9[5]);
    vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
    (*vtableDispatch)
              (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar9 = plVar10;
  if (g_data_057ae451 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    plVar9 = &MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae451 = '\x01';
  }
  if (plVar10[0x15] == 0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae452 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__13_7);
      g_data_057ae452 = '\x01';
    }
    plVar11 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    plVar10 = plVar11;
    System_Action___ctor();
    if (plVar11 != (long *)0x0) {
      (*(code *)plVar11[3])(plVar11[8],plVar11[5]);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar9 + 0x298);
      (*UNRECOVERED_JUMPTABLE_00)
                (plVar9,*(undefined8 *)(*plVar9 + 0x2a0),extraout_RDX_00,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    plVar9 = plVar10;
    if (g_data_057ae453 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      plVar9 = &MethodInfo_String_get_Value;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae453 = '\x01';
    }
    if (plVar10[0x15] != 0) {
      pSVar14 = *(System_String_o **)(plVar10[0x15] + 0x18);
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        Anticheat_ModeratorManager__BatchSessionUnban(pSVar14,(MethodInfo *)0x0);
        return;
      }
      Anticheat_ModeratorManager__BatchSessionUnban(pSVar14,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae454 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__13_8);
      g_data_057ae454 = '\x01';
    }
    plVar11 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    plVar10 = plVar11;
    System_Action___ctor();
    if (plVar11 == (long *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      plVar9 = plVar10;
      if (g_data_057ae455 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        plVar9 = &MethodInfo_String_get_Value;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae455 = '\x01';
      }
      if (plVar10[0x15] == 0) {
        il2cpp_runtime_helper_022b2c90();
        (**(code **)(*plVar9 + 0x298))();
        return;
      }
      pSVar14 = *(System_String_o **)(plVar10[0x15] + 0x18);
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        Anticheat_ModeratorManager__BatchIPUnban(pSVar14,(MethodInfo *)0x0);
        return;
      }
      Anticheat_ModeratorManager__BatchIPUnban(pSVar14,(MethodInfo *)0x0);
      return;
    }
    (*(code *)plVar11[3])(plVar11[8],plVar11[5]);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar9 + 0x298);
    (*UNRECOVERED_JUMPTABLE_00)
              (plVar9,*(undefined8 *)(*plVar9 + 0x2a0),extraout_RDX_01,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  __this_00 = *(System_Collections_Generic_Dictionary_byte__object__o **)(plVar10[0x15] + 0x18);
  plVar10 = &TypeInfo_ModeratorManager;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    plVar10 = (long *)il2cpp_runtime_helper_02337ed0();
    puVar15 = auStack_18;
  }
  else {
    puVar15 = auStack_18;
  }
  do {
    *(System_String_o **)(puVar15 + -8) = unaff_RBP;
    *(undefined8 *)(puVar15 + -0x10) = 0;
    *(long **)(puVar15 + -0x18) = plVar10;
    if (g_data_057aeb71 == '\0') {
      *(undefined8 *)(puVar15 + -0x20) = 0x44da75b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb71 = '\x01';
    }
    if (__this_00 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSVar14 = (System_String_o *)0x0;
    }
    else {
      *(undefined8 *)(puVar15 + -0x20) = 0x44da771;
      pSVar14 = System_String__Trim((System_String_o *)__this_00,(MethodInfo *)0x0);
    }
    *(undefined8 *)(puVar15 + -0x20) = 0x44da782;
    bVar7 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      *(undefined8 *)(puVar15 + -0x20) = 0x44da7f3;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae4d9 != '\0') goto label_044da7aa;
label_044da7fc:
      *(undefined8 *)(puVar15 + -0x20) = 0x44da808;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057ae4d9 = '\x01';
      iVar8 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      if (g_data_057ae4d9 == '\0') goto label_044da7fc;
label_044da7aa:
      iVar8 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar8 == 0) {
      *(undefined8 *)(puVar15 + -0x20) = 0x44da822;
      il2cpp_runtime_helper_02337ed0();
      iVar8 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    uVar16 = (uint)(*(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0') * 2 + 2;
    if (iVar8 == 0) {
      *(undefined8 *)(puVar15 + -0x20) = 0x44da7d7;
      il2cpp_runtime_helper_02337ed0();
    }
    plVar9 = (long *)(ulong)uVar16;
    uVar17 = *(undefined8 *)(puVar15 + -0x10);
    *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
    *(System_String_o **)(puVar15 + -0x10) = unaff_R15;
    *(UI_ModerationBatchBanPopup_o **)(puVar15 + -0x18) = __this;
    *(System_Action_Dictionary_byte__object___o **)(puVar15 + -0x20) = unaff_R13;
    *(undefined8 *)(puVar15 + -0x28) = unaff_R12;
    *(undefined8 *)(puVar15 + -0x30) = uVar17;
    unaff_R12 = 3;
    if (g_data_057aeb74 == '\0') {
      *(undefined8 *)(puVar15 + -0x50) = 0x44da47f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
      *(undefined8 *)(puVar15 + -0x50) = 0x44da48b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
      *(undefined8 *)(puVar15 + -0x50) = 0x44da497;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      *(undefined8 *)(puVar15 + -0x50) = 0x44da4a3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
      *(undefined8 *)(puVar15 + -0x50) = 0x44da4af;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
      *(undefined8 *)(puVar15 + -0x50) = 0x44da4bb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      *(undefined8 *)(puVar15 + -0x50) = 0x44da4c7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SendBatchRoomRemove_b__0);
      *(undefined8 *)(puVar15 + -0x50) = 0x44da4d3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SendBatchRoomRemove_b__1);
      *(undefined8 *)(puVar15 + -0x50) = 0x44da4df;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass106_0);
      *(undefined8 *)(puVar15 + -0x50) = 0x44da4eb;
      il2cpp_runtime_helper_023445d0(&"Sending request...");
      g_data_057aeb74 = '\x01';
    }
    *(undefined8 *)(puVar15 + -0x50) = 0x44da501;
    pSVar12 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass106_0);
    *(undefined8 *)(puVar15 + -0x50) = 0x44da50e;
    __this_00 = pSVar12;
    Anticheat_ModeratorManager___c__DisplayClass106_0___ctor
              ((Anticheat_ModeratorManager___c__DisplayClass106_0_o *)pSVar12,(MethodInfo *)0x0);
    unaff_RBP = (System_String_o *)0x0;
    if (pSVar12 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      *(uint *)(puVar15 + -0x3c) = uVar16;
      (pSVar12->fields)._buckets = (System_Int32_array *)0x0;
      *(undefined8 *)(puVar15 + -0x50) = 0x44da52f;
      il2cpp_runtime_helper_022b4080(&pSVar12->fields,0);
      pSVar1 = (pSVar12->fields)._buckets;
      plVar9 = &TypeInfo_ModeratorManager;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        *(undefined8 *)(puVar15 + -0x50) = 0x44da6dc;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057aeb5b != '\0') goto label_044da561;
label_044da6f3:
        uVar17 = "Sending request...";
        *(undefined8 *)(puVar15 + -0x50) = 0x44da6ff;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb5b = '\x01';
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044da571;
label_044da716:
        *(undefined8 *)(puVar15 + -0x50) = 0x44da71b;
        il2cpp_runtime_helper_02337ed0();
        lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      else {
        if (g_data_057aeb5b == '\0') goto label_044da6f3;
label_044da561:
        uVar17 = "Sending request...";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044da716;
label_044da571:
        lVar2 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(lVar2 + 0x28);
        uVar4 = *(undefined8 *)(lVar2 + 0x40);
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar2 + 0x18);
        *(undefined8 *)(puVar15 + -0x50) = 0x44da58f;
        (*UNRECOVERED_JUMPTABLE_00)(uVar4,uVar17,uVar3);
      }
      if (pSVar1 != (System_Int32_array *)0x0) {
        iVar5 = *(intptr_t *)((long)pSVar1->m_Items + 8);
        iVar6 = *(intptr_t *)((long)pSVar1->m_Items + 0x20);
        UNRECOVERED_JUMPTABLE_00 = (code *)pSVar1->max_length;
        *(undefined8 *)(puVar15 + -0x50) = 0x44da5a2;
        (*UNRECOVERED_JUMPTABLE_00)(iVar6,uVar17,iVar5);
      }
      *(undefined8 *)(puVar15 + -0x50) = 0x44da5b1;
      unaff_R13 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
      *(undefined8 *)(puVar15 + -0x50) = 0x44da5cb;
      System_Action_object____ctor();
      *(undefined8 *)(puVar15 + -0x50) = 0x44da5da;
      onTimeout = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
      *(undefined8 *)(puVar15 + -0x50) = 0x44da5f4;
      System_Action___ctor();
      *(undefined8 *)(puVar15 + -0x50) = 0x44da607;
      unaff_RBP = Anticheat_ModeratorManager__TrackRequest(15.0,unaff_R13,onTimeout,method_00);
      *(undefined8 *)(puVar15 + -0x50) = 0x44da619;
      pSVar12 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
      *(undefined8 *)(puVar15 + -0x50) = 0x44da62e;
      __this_00 = pSVar12;
      System_Collections_Generic_Dictionary_byte__object____ctor(pSVar12,MethodInfo_Dictionary_2_System_Byte_System_Object);
      if (pSVar12 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
        *(undefined8 *)(puVar15 + -0x50) = 0x44da64f;
        System_Collections_Generic_Dictionary_byte__object___Add
                  (pSVar12,'\0',(Il2CppObject *)unaff_RBP,MethodInfo_Void_Add);
        *(undefined4 *)(puVar15 + -0x34) = 3;
        *(undefined8 *)(puVar15 + -0x50) = 0x44da669;
        pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,puVar15 + -0x34);
        *(undefined8 *)(puVar15 + -0x50) = 0x44da67d;
        System_Collections_Generic_Dictionary_byte__object___Add(pSVar12,'\x01',pIVar13,MethodInfo_Void_Add);
        *(undefined4 *)(puVar15 + -0x38) = *(undefined4 *)(puVar15 + -0x3c);
        *(undefined8 *)(puVar15 + -0x50) = 0x44da693;
        pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,puVar15 + -0x38);
        *(undefined8 *)(puVar15 + -0x50) = 0x44da6a7;
        System_Collections_Generic_Dictionary_byte__object___Add(pSVar12,'\x02',pIVar13,MethodInfo_Void_Add);
        *(undefined8 *)(puVar15 + -0x50) = 0x44da6bb;
        System_Collections_Generic_Dictionary_byte__object___Add
                  (pSVar12,'\x03',(Il2CppObject *)pSVar14,MethodInfo_Void_Add);
        *(undefined8 *)(puVar15 + -0x50) = 0x44da6c8;
        Anticheat_ModeratorManager__RaiseModEvent(0xb4,pSVar12,method_01);
        return;
      }
    }
    *(undefined8 *)(puVar15 + -0x50) = 0x44da73c;
    plVar10 = (long *)il2cpp_runtime_helper_022b2c90();
    puVar15 = puVar15 + -0x48;
    __this = (UI_ModerationBatchBanPopup_o *)plVar9;
    unaff_R15 = pSVar14;
  } while( true );
}


// UI.ModerationBatchBanPopup$$<Setup>b__13_6
// il2cpp: void UI_ModerationBatchBanPopup___Setup_b__13_6 (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x43d6d40

void UI_ModerationBatchBanPopup___Setup_b__13_6(UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  System_Int32_array *pSVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *vtableDispatch;
  intptr_t iVar6;
  intptr_t iVar7;
  bool_conflict bVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar12;
  System_Action_o *onTimeout;
  Il2CppObject *pIVar13;
  System_String_o *pSVar14;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 unaff_RBX;
  uint uVar15;
  System_String_o *unaff_RBP;
  UI_ModerationBatchBanPopup_o *pUVar16;
  System_Collections_Generic_Dictionary_byte__object__o *__this_00;
  undefined8 unaff_R12;
  System_Action_Dictionary_byte__object___o *unaff_R13;
  undefined8 uVar17;
  long *unaff_R14;
  long *plVar18;
  System_String_o *unaff_R15;
  
  pUVar16 = __this;
  if (g_data_057ae451 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pUVar16 = (UI_ModerationBatchBanPopup_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae451 = '\x01';
  }
  pSVar1 = (__this->fields)._batchTargetsSetting;
  if (pSVar1 == (Settings_StringSetting_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae452 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__13_7);
      g_data_057ae452 = '\x01';
    }
    plVar18 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    plVar10 = plVar18;
    System_Action___ctor();
    if (plVar18 != (long *)0x0) {
      (*(code *)plVar18[3])(plVar18[8],plVar18[5]);
      UNRECOVERED_JUMPTABLE_00 = (pUVar16->klass->vtable)._22_Hide.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pUVar16,(pUVar16->klass->vtable)._22_Hide.method,extraout_RDX,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    plVar18 = plVar10;
    if (g_data_057ae453 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      plVar18 = &MethodInfo_String_get_Value;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae453 = '\x01';
    }
    if (plVar10[0x15] == 0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae454 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__13_8);
        g_data_057ae454 = '\x01';
      }
      plVar11 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
      plVar10 = plVar11;
      System_Action___ctor();
      if (plVar11 != (long *)0x0) {
        (*(code *)plVar11[3])(plVar11[8],plVar11[5]);
        vtableDispatch = *(code **)(*plVar18 + 0x298);
        (*vtableDispatch)
                  (plVar18,*(undefined8 *)(*plVar18 + 0x2a0),extraout_RDX_00,vtableDispatch);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      plVar18 = plVar10;
      if (g_data_057ae455 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        plVar18 = &MethodInfo_String_get_Value;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae455 = '\x01';
      }
      if (plVar10[0x15] == 0) {
        il2cpp_runtime_helper_022b2c90();
        (**(code **)(*plVar18 + 0x298))();
        return;
      }
      pSVar14 = *(System_String_o **)(plVar10[0x15] + 0x18);
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        Anticheat_ModeratorManager__BatchIPUnban(pSVar14,(MethodInfo *)0x0);
        return;
      }
      Anticheat_ModeratorManager__BatchIPUnban(pSVar14,(MethodInfo *)0x0);
      return;
    }
    pSVar14 = *(System_String_o **)(plVar10[0x15] + 0x18);
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      Anticheat_ModeratorManager__BatchSessionUnban(pSVar14,(MethodInfo *)0x0);
      return;
    }
    Anticheat_ModeratorManager__BatchSessionUnban(pSVar14,(MethodInfo *)0x0);
    return;
  }
  __this_00 = (System_Collections_Generic_Dictionary_byte__object__o *)(pSVar1->fields)._value;
  plVar10 = &TypeInfo_ModeratorManager;
  if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
    plVar10 = (long *)il2cpp_runtime_helper_02337ed0();
  }
  do {
    *(System_String_o **)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(long **)((long)register0x00000020 + -0x18) = plVar10;
    if (g_data_057aeb71 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44da75b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057aeb71 = '\x01';
    }
    if (__this_00 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      pSVar14 = (System_String_o *)0x0;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44da771;
      pSVar14 = System_String__Trim((System_String_o *)__this_00,(MethodInfo *)0x0);
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44da782;
    bVar8 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44da7f3;
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae4d9 != '\0') goto label_044da7aa;
label_044da7fc:
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44da808;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      g_data_057ae4d9 = '\x01';
      iVar9 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    else {
      if (g_data_057ae4d9 == '\0') goto label_044da7fc;
label_044da7aa:
      iVar9 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    if (iVar9 == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44da822;
      il2cpp_runtime_helper_02337ed0();
      iVar9 = *(int *)(TypeInfo_ModeratorManager + 0xe4);
    }
    uVar15 = (uint)(*(char *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 8) == '\0') * 2 + 2;
    if (iVar9 == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x44da7d7;
      il2cpp_runtime_helper_02337ed0();
    }
    plVar18 = (long *)(ulong)uVar15;
    uVar17 = *(undefined8 *)((long)register0x00000020 + -0x10);
    *(undefined8 *)((long)register0x00000020 + -8) = *(undefined8 *)((long)register0x00000020 + -8);
    *(System_String_o **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(long **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(System_Action_Dictionary_byte__object___o **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x30) = uVar17;
    unaff_R12 = 3;
    if (g_data_057aeb74 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da47f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Dictionary_byte_object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da48b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da497;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da4a3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Byte_System_Object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da4af;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_byte_object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da4bb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da4c7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SendBatchRoomRemove_b__0);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da4d3;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SendBatchRoomRemove_b__1);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da4df;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass106_0);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da4eb;
      il2cpp_runtime_helper_023445d0(&"Sending request...");
      g_data_057aeb74 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da501;
    pSVar12 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass106_0);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da50e;
    __this_00 = pSVar12;
    Anticheat_ModeratorManager___c__DisplayClass106_0___ctor
              ((Anticheat_ModeratorManager___c__DisplayClass106_0_o *)pSVar12,(MethodInfo *)0x0);
    unaff_RBP = (System_String_o *)0x0;
    if (pSVar12 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      *(uint *)((long)register0x00000020 + -0x3c) = uVar15;
      (pSVar12->fields)._buckets = (System_Int32_array *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da52f;
      il2cpp_runtime_helper_022b4080(&pSVar12->fields,0);
      pSVar2 = (pSVar12->fields)._buckets;
      plVar18 = &TypeInfo_ModeratorManager;
      if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da6dc;
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057aeb5b != '\0') goto label_044da561;
label_044da6f3:
        uVar17 = "Sending request...";
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da6ff;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
        g_data_057aeb5b = '\x01';
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) goto label_044da571;
label_044da716:
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da71b;
        il2cpp_runtime_helper_02337ed0();
        lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      else {
        if (g_data_057aeb5b == '\0') goto label_044da6f3;
label_044da561:
        uVar17 = "Sending request...";
        if (*(int *)(TypeInfo_ModeratorManager + 0xe4) == 0) goto label_044da716;
label_044da571:
        lVar3 = *(long *)(*(long *)(TypeInfo_ModeratorManager + 0xb8) + 0x30);
      }
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)(lVar3 + 0x28);
        uVar5 = *(undefined8 *)(lVar3 + 0x40);
        vtableDispatch = *(code **)(lVar3 + 0x18);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da58f;
        (*vtableDispatch)(uVar5,uVar17,uVar4);
      }
      if (pSVar2 != (System_Int32_array *)0x0) {
        iVar6 = *(intptr_t *)((long)pSVar2->m_Items + 8);
        iVar7 = *(intptr_t *)((long)pSVar2->m_Items + 0x20);
        vtableDispatch = (code *)pSVar2->max_length;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da5a2;
        (*vtableDispatch)(iVar7,uVar17,iVar6);
      }
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da5b1;
      unaff_R13 = (System_Action_Dictionary_byte__object___o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Dictionary_byte_object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da5cb;
      System_Action_object____ctor();
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da5da;
      onTimeout = (System_Action_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da5f4;
      System_Action___ctor();
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da607;
      unaff_RBP = Anticheat_ModeratorManager__TrackRequest(15.0,unaff_R13,onTimeout,method_00);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da619;
      pSVar12 = (System_Collections_Generic_Dictionary_byte__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_byte_object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da62e;
      __this_00 = pSVar12;
      System_Collections_Generic_Dictionary_byte__object____ctor(pSVar12,MethodInfo_Dictionary_2_System_Byte_System_Object);
      if (pSVar12 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da64f;
        System_Collections_Generic_Dictionary_byte__object___Add
                  (pSVar12,'\0',(Il2CppObject *)unaff_RBP,MethodInfo_Void_Add);
        *(undefined4 *)((long)register0x00000020 + -0x34) = 3;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da669;
        pIVar13 = (Il2CppObject *)
                  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(undefined1 *)((long)register0x00000020 + -0x34));
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da67d;
        System_Collections_Generic_Dictionary_byte__object___Add(pSVar12,'\x01',pIVar13,MethodInfo_Void_Add);
        *(undefined4 *)((long)register0x00000020 + -0x38) = *(undefined4 *)((long)register0x00000020 + -0x3c);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da693;
        pIVar13 = (Il2CppObject *)
                  il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(undefined1 *)((long)register0x00000020 + -0x38));
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da6a7;
        System_Collections_Generic_Dictionary_byte__object___Add(pSVar12,'\x02',pIVar13,MethodInfo_Void_Add);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da6bb;
        System_Collections_Generic_Dictionary_byte__object___Add
                  (pSVar12,'\x03',(Il2CppObject *)pSVar14,MethodInfo_Void_Add);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da6c8;
        Anticheat_ModeratorManager__RaiseModEvent(0xb4,pSVar12,method_01);
        return;
      }
    }
    unaff_RBX = 0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x44da73c;
    plVar10 = (long *)il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x48);
    unaff_R14 = plVar18;
    unaff_R15 = pSVar14;
  } while( true );
}


// UI.ModerationBatchBanPopup$$<Setup>b__13_2
// il2cpp: void UI_ModerationBatchBanPopup___Setup_b__13_2 (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x43d6db0

void UI_ModerationBatchBanPopup___Setup_b__13_2(UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  System_String_o *pSVar1;
  code *vtableDispatch;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long *plVar4;
  
  if (g_data_057ae452 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__13_7);
    g_data_057ae452 = '\x01';
  }
  plVar2 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  plVar4 = plVar2;
  System_Action___ctor();
  if (plVar2 != (long *)0x0) {
    (*(code *)plVar2[3])(plVar2[8],plVar2[5]);
    UNRECOVERED_JUMPTABLE_00 = (__this->klass->vtable)._22_Hide.methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar2 = plVar4;
  if (g_data_057ae453 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    plVar2 = &MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae453 = '\x01';
  }
  if (plVar4[0x15] != 0) {
    pSVar1 = *(System_String_o **)(plVar4[0x15] + 0x18);
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) {
      Anticheat_ModeratorManager__BatchSessionUnban(pSVar1,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_02337ed0();
    Anticheat_ModeratorManager__BatchSessionUnban(pSVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae454 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__13_8);
    g_data_057ae454 = '\x01';
  }
  plVar3 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  plVar4 = plVar3;
  System_Action___ctor();
  if (plVar3 != (long *)0x0) {
    (*(code *)plVar3[3])(plVar3[8],plVar3[5]);
    vtableDispatch = *(code **)(*plVar2 + 0x298);
    (*vtableDispatch)(plVar2,*(undefined8 *)(*plVar2 + 0x2a0),extraout_RDX_00,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar2 = plVar4;
  if (g_data_057ae455 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    plVar2 = &MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae455 = '\x01';
  }
  if (plVar4[0x15] != 0) {
    pSVar1 = *(System_String_o **)(plVar4[0x15] + 0x18);
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) {
      Anticheat_ModeratorManager__BatchIPUnban(pSVar1,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_02337ed0();
    Anticheat_ModeratorManager__BatchIPUnban(pSVar1,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  (**(code **)(*plVar2 + 0x298))();
  return;
}


// UI.ModerationBatchBanPopup$$<Setup>b__13_7
// il2cpp: void UI_ModerationBatchBanPopup___Setup_b__13_7 (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x43d6e40

void UI_ModerationBatchBanPopup___Setup_b__13_7(UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *pSVar2;
  Il2CppMethodPointer vtableDispatch;
  long *plVar3;
  undefined8 extraout_RDX;
  UI_ModerationBatchBanPopup_o *pUVar4;
  long *plVar5;
  
  pUVar4 = __this;
  if (g_data_057ae453 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pUVar4 = (UI_ModerationBatchBanPopup_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae453 = '\x01';
  }
  pSVar1 = (__this->fields)._batchTargetsSetting;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    pSVar2 = (pSVar1->fields)._value;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) {
      Anticheat_ModeratorManager__BatchSessionUnban(pSVar2,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_02337ed0();
    Anticheat_ModeratorManager__BatchSessionUnban(pSVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae454 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__13_8);
    g_data_057ae454 = '\x01';
  }
  plVar3 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  plVar5 = plVar3;
  System_Action___ctor();
  if (plVar3 != (long *)0x0) {
    (*(code *)plVar3[3])(plVar3[8],plVar3[5]);
    vtableDispatch = (pUVar4->klass->vtable)._22_Hide.methodPtr;
    (*vtableDispatch)
              (pUVar4,(pUVar4->klass->vtable)._22_Hide.method,extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar3 = plVar5;
  if (g_data_057ae455 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    plVar3 = &MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae455 = '\x01';
  }
  if (plVar5[0x15] != 0) {
    pSVar2 = *(System_String_o **)(plVar5[0x15] + 0x18);
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) {
      Anticheat_ModeratorManager__BatchIPUnban(pSVar2,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_02337ed0();
    Anticheat_ModeratorManager__BatchIPUnban(pSVar2,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  (**(code **)(*plVar3 + 0x298))();
  return;
}


// UI.ModerationBatchBanPopup$$<Setup>b__13_3
// il2cpp: void UI_ModerationBatchBanPopup___Setup_b__13_3 (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x43d6eb0

void UI_ModerationBatchBanPopup___Setup_b__13_3(UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  System_String_o *targets;
  long *plVar1;
  undefined8 extraout_RDX;
  long *plVar2;
  
  if (g_data_057ae454 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__13_8);
    g_data_057ae454 = '\x01';
  }
  plVar1 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
  plVar2 = plVar1;
  System_Action___ctor();
  if (plVar1 != (long *)0x0) {
    (*(code *)plVar1[3])(plVar1[8],plVar1[5]);
    vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
    (*vtableDispatch)
              (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar1 = plVar2;
  if (g_data_057ae455 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    plVar1 = &MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae455 = '\x01';
  }
  if (plVar2[0x15] != 0) {
    targets = *(System_String_o **)(plVar2[0x15] + 0x18);
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) {
      Anticheat_ModeratorManager__BatchIPUnban(targets,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_02337ed0();
    Anticheat_ModeratorManager__BatchIPUnban(targets,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  (**(code **)(*plVar1 + 0x298))();
  return;
}


// UI.ModerationBatchBanPopup$$<Setup>b__13_8
// il2cpp: void UI_ModerationBatchBanPopup___Setup_b__13_8 (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x43d6f40

void UI_ModerationBatchBanPopup___Setup_b__13_8(UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *targets;
  UI_ModerationBatchBanPopup_o *pUVar2;
  
  pUVar2 = __this;
  if (g_data_057ae455 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ModeratorManager);
    pUVar2 = (UI_ModerationBatchBanPopup_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae455 = '\x01';
  }
  pSVar1 = (__this->fields)._batchTargetsSetting;
  if (pSVar1 != (Settings_StringSetting_o *)0x0) {
    targets = (pSVar1->fields)._value;
    if (*(int *)(TypeInfo_ModeratorManager + 0xe4) != 0) {
      Anticheat_ModeratorManager__BatchIPUnban(targets,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_02337ed0();
    Anticheat_ModeratorManager__BatchIPUnban(targets,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  (*(pUVar2->klass->vtable)._22_Hide.methodPtr)();
  return;
}


// UI.ModerationBatchBanPopup$$<Setup>b__13_4
// il2cpp: void UI_ModerationBatchBanPopup___Setup_b__13_4 (UI_ModerationBatchBanPopup_o* __this, const MethodInfo* method);
// 0x43d6fb0

void UI_ModerationBatchBanPopup___Setup_b__13_4(UI_ModerationBatchBanPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  
  vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtableDispatch);
  return;
}


