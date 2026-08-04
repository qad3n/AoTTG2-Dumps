// Type: UI.CharacterEditorEditStatsPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorEditStatsPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorEditStatsPopup.cs
// --------------------------------

// UI.CharacterEditorEditStatsPopup$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorEditStatsPopup__get_Title (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x435fcc0

System_String_o *
UI_CharacterEditorEditStatsPopup__get_Title(UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae199 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"CharacterEditor");
    il2cpp_runtime_helper_023445d0(&"Stats");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae199 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("CharacterEditor","Stats","Title","","",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorEditStatsPopup$$get_Width
// il2cpp: float UI_CharacterEditorEditStatsPopup__get_Width (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x435fd60

float UI_CharacterEditorEditStatsPopup__get_Width
                (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  return 325.0;
}


// UI.CharacterEditorEditStatsPopup$$get_Height
// il2cpp: float UI_CharacterEditorEditStatsPopup__get_Height (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x435fd70

float UI_CharacterEditorEditStatsPopup__get_Height
                (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  return 425.0;
}


// UI.CharacterEditorEditStatsPopup$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorEditStatsPopup__get_VerticalSpacing (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x435fd80

float UI_CharacterEditorEditStatsPopup__get_VerticalSpacing
                (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.CharacterEditorEditStatsPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorEditStatsPopup__get_HorizontalPadding (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x435fd90

int32_t UI_CharacterEditorEditStatsPopup__get_HorizontalPadding
                  (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorEditStatsPopup$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorEditStatsPopup__get_VerticalPadding (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x435fda0

int32_t UI_CharacterEditorEditStatsPopup__get_VerticalPadding
                  (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorEditStatsPopup$$Setup
// il2cpp: void UI_CharacterEditorEditStatsPopup__Setup (UI_CharacterEditorEditStatsPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x435fdb0

void UI_CharacterEditorEditStatsPopup__Setup
               (UI_CharacterEditorEditStatsPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  UnityEngine_Transform_o *pUVar3;
  long lVar4;
  Settings_SetSettingsContainer_T__o *pSVar5;
  UnityEngine_Transform_c *str;
  Settings_IntSetting_o *pSVar6;
  Settings_IntSetting_c *pSVar7;
  Il2CppMethodPointer vtableDispatch;
  MethodInfo *pMVar8;
  Settings_IntSetting_o *pSVar9;
  Settings_IntSetting_o *pSVar10;
  UnityEngine_UI_Text_o *pUVar11;
  void *pvVar12;
  long *plVar13;
  code *pcVar14;
  Il2CppClass *pIVar15;
  Settings_TypedSetting_T__c *pSVar16;
  System_String_o *subCategory;
  System_String_o *category;
  int32_t iVar17;
  bool_conflict bVar18;
  System_String_o *pSVar19;
  Il2CppClass *pIVar20;
  UnityEngine_Events_UnityAction_o *pUVar21;
  MethodInfo_2A23FA0 **__this_00;
  UI_CharacterEditorEditStatsPopup_o *pUVar22;
  UnityEngine_GameObject_o *__this_01;
  Il2CppClass *pIVar23;
  undefined8 uVar24;
  Characters_HumanStats_o *__this_02;
  Settings_IntSetting_o *pSVar25;
  Il2CppRGCTXData *__this_03;
  int iVar26;
  UI_CharacterEditorEditStatsPopup_o *unaff_RBX;
  undefined1 *puVar27;
  uint uVar28;
  Characters_HumanStats_o *unaff_RBP;
  uint uVar29;
  UI_CharacterEditorEditStatsPopup_o **ppUVar30;
  Il2CppClass *unaff_R12;
  UI_CharacterEditorEditStatsPopup_o *unaff_R13;
  long *unaff_R14;
  long *plVar31;
  System_String_o *unaff_R15;
  
  puVar27 = &stack0xffffffffffffff88;
  if (g_data_057ae19a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_4);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__17_5);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanStats);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Acceleration");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"CharacterEditor");
    il2cpp_runtime_helper_023445d0(&"Stats");
    il2cpp_runtime_helper_023445d0(&"Speed");
    il2cpp_runtime_helper_023445d0(&"Ammunition");
    il2cpp_runtime_helper_023445d0(&"Gas");
    il2cpp_runtime_helper_023445d0(&"Save");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Points Left");
    g_data_057ae19a = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar19 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pIVar20 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)pIVar20,0x18,130.0,20.0,pSVar19,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar19 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  plVar31 = &TypeInfo_UnityAction;
  pUVar21 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton
            (pUVar3,(UI_ElementStyle_o *)pIVar20,pSVar19,0.0,pUVar21,(MethodInfo *)0x0);
  pSVar19 = (System_String_o *)(__this->fields).BottomBar;
  __this_00 = (MethodInfo_2A23FA0 **)UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar22 = (UI_CharacterEditorEditStatsPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  pIVar23 = pIVar20;
  UI_ElementFactory__CreateTextButton
            ((UnityEngine_Transform_o *)pSVar19,(UI_ElementStyle_o *)pIVar20,(System_String_o *)__this_00,0.0,
             (UnityEngine_Events_UnityAction_o *)pUVar22,(MethodInfo *)0x0);
  subCategory = "Stats";
  category = "CharacterEditor";
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar4 == 0) ||
     (pSVar5 = *(Settings_SetSettingsContainer_T__o **)(lVar4 + 0x20),
     pSVar5 == (Settings_SetSettingsContainer_T__o *)0x0)) goto label_04360481;
  pUVar22 = (UI_CharacterEditorEditStatsPopup_o *)
            Settings_SetSettingsContainer_object___GetSelectedSet(pSVar5,MethodInfo_BaseSetSetting_GetSelectedSet);
  if (pUVar22 == (UI_CharacterEditorEditStatsPopup_o *)0x0) {
label_043600b6:
    plVar31 = &TypeInfo_HumanStats;
    __this_00 = (MethodInfo_2A23FA0 **)il2cpp_runtime_helper_023052d0(TypeInfo_HumanStats);
    pIVar23 = (Il2CppClass *)0x0;
    Characters_HumanStats___ctor
              ((Characters_HumanStats_o *)__this_00,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
    pSVar19 = category;
    if ((pUVar22 == (UI_CharacterEditorEditStatsPopup_o *)0x0) ||
       (pUVar3 = pUVar22[1].fields.SinglePanel, pUVar3 == (UnityEngine_Transform_o *)0x0)) {
label_04360481:
      il2cpp_runtime_helper_022b2c90();
      category = pSVar19;
      goto label_04360486;
    }
    str = pUVar3[1].klass;
    if (*(int *)(TypeInfo_HumanStats + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar22 = (UI_CharacterEditorEditStatsPopup_o *)
              Characters_HumanStats__Deserialize
                        ((Characters_HumanStats_o *)__this_00,(System_String_o *)str,(MethodInfo *)0x0);
    pIVar23 = pIVar20;
    __this_01 = UI_ElementFactory__CreateDefaultLabel
                          ((__this->fields).SinglePanel,(UI_ElementStyle_o *)pIVar20,"Points Left",0,4,
                           (MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_04360481;
    pIVar23 = (Il2CppClass *)UnityEngine_GameObject__GetComponent_object_(__this_01,MethodInfo_Text_GetComponent_Text);
    (__this->fields)._pointsLeftLabel = (UnityEngine_UI_Text_o *)pIVar23;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._pointsLeftLabel);
    if ((pUVar22 == (UI_CharacterEditorEditStatsPopup_o *)0x0) ||
       (pSVar25 = (__this->fields).Speed, pSVar25 == (Settings_IntSetting_o *)0x0)) goto label_04360481;
    uVar29 = (uint)(pUVar22->fields).m_CachedPtr;
    pIVar23 = (Il2CppClass *)(ulong)uVar29;
    __this_00 = &MethodInfo_Void_set_Value;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar25,uVar29,MethodInfo_Void_set_Value);
    pSVar25 = (__this->fields).Acceleration;
    if (pSVar25 == (Settings_IntSetting_o *)0x0) goto label_04360481;
    uVar29 = *(uint *)((long)&(pUVar22->fields).m_CancellationTokenSource + 4);
    pIVar23 = (Il2CppClass *)(ulong)uVar29;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar25,uVar29,MethodInfo_Void_set_Value);
    pSVar25 = (__this->fields).Gas;
    if (pSVar25 == (Settings_IntSetting_o *)0x0) goto label_04360481;
    uVar29 = *(uint *)((long)&(pUVar22->fields).m_CachedPtr + 4);
    pIVar23 = (Il2CppClass *)(ulong)uVar29;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar25,uVar29,MethodInfo_Void_set_Value);
    pSVar25 = (__this->fields).Ammunition;
    if (pSVar25 == (Settings_IntSetting_o *)0x0) goto label_04360481;
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar25,
               *(int32_t *)&(pUVar22->fields).m_CancellationTokenSource,MethodInfo_Void_set_Value);
    pUVar3 = (__this->fields).SinglePanel;
    pSVar25 = (__this->fields).Acceleration;
    pSVar19 = UI_UIManager__GetLocale
                        (category,subCategory,"Acceleration","","",(MethodInfo *)0x0);
    pUVar21 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    UI_ElementFactory__CreateIncrementSetting
              (pUVar3,(UI_ElementStyle_o *)pIVar20,(Settings_BaseSetting_o *)pSVar25,pSVar19,"",33.0
               ,30.0,(System_String_array *)0x0,pUVar21,(System_Func_bool__o *)0x0,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).SinglePanel;
    pSVar25 = (__this->fields).Speed;
    pSVar19 = UI_UIManager__GetLocale
                        (category,subCategory,"Speed","","",(MethodInfo *)0x0);
    pUVar21 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    UI_ElementFactory__CreateIncrementSetting
              (pUVar3,(UI_ElementStyle_o *)pIVar20,(Settings_BaseSetting_o *)pSVar25,pSVar19,"",33.0
               ,30.0,(System_String_array *)0x0,pUVar21,(System_Func_bool__o *)0x0,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).SinglePanel;
    pSVar25 = (__this->fields).Gas;
    pSVar19 = UI_UIManager__GetLocale
                        (category,subCategory,"Gas","","",(MethodInfo *)0x0);
    pUVar21 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    UI_ElementFactory__CreateIncrementSetting
              (pUVar3,(UI_ElementStyle_o *)pIVar20,(Settings_BaseSetting_o *)pSVar25,pSVar19,"",33.0
               ,30.0,(System_String_array *)0x0,pUVar21,(System_Func_bool__o *)0x0,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).SinglePanel;
    pSVar25 = (__this->fields).Ammunition;
    pSVar19 = UI_UIManager__GetLocale
                        (category,subCategory,"Ammunition","","",(MethodInfo *)0x0);
    pUVar21 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    UI_ElementFactory__CreateIncrementSetting
              (pUVar3,(UI_ElementStyle_o *)pIVar20,(Settings_BaseSetting_o *)pSVar25,pSVar19,"",33.0
               ,30.0,(System_String_array *)0x0,pUVar21,(System_Func_bool__o *)0x0,(MethodInfo *)0x0);
    pIVar23 = (Il2CppClass *)(__this->fields).Speed;
    puVar27 = (undefined1 *)register0x00000020;
    pUVar22 = __this;
    pIVar20 = unaff_R12;
    __this = unaff_R13;
  }
  else {
    bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    pIVar23 = TypeInfo_HumanCustomSet;
    if ((bVar1 <= (pUVar22->klass->_2).naturalAligment) &&
       ((pUVar22->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_HumanCustomSet)) goto label_043600b6;
label_04360486:
    unaff_R15 = category;
    unaff_R14 = plVar31;
    unaff_RBP = (Characters_HumanStats_o *)__this_00;
    unaff_RBX = pUVar22;
    pUVar22 = unaff_RBX;
    il2cpp_runtime_helper_022b2fd0();
  }
  *(Characters_HumanStats_o **)(puVar27 + -8) = unaff_RBP;
  *(System_String_o **)(puVar27 + -0x10) = unaff_R15;
  *(long **)(puVar27 + -0x18) = unaff_R14;
  *(Il2CppClass **)(puVar27 + -0x20) = pIVar20;
  *(UI_CharacterEditorEditStatsPopup_o **)(puVar27 + -0x28) = unaff_RBX;
  plVar31 = (long *)pIVar23;
  ppUVar30 = (UI_CharacterEditorEditStatsPopup_o **)pUVar22;
  if (g_data_057ae19c == '\0') {
    *(undefined8 *)(puVar27 + -0x40) = 0x43604b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    *(undefined8 *)(puVar27 + -0x40) = 0x43604c3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    *(undefined8 *)(puVar27 + -0x40) = 0x43604cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    ppUVar30 = &"Points left: ";
    *(undefined8 *)(puVar27 + -0x40) = 0x43604db;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae19c = '\x01';
  }
  *(undefined4 *)(puVar27 + -0x2c) = 0;
  pSVar25 = (pUVar22->fields).Speed;
  if ((((pSVar25 != (Settings_IntSetting_o *)0x0) &&
       (pSVar6 = (pUVar22->fields).Gas, pSVar6 != (Settings_IntSetting_o *)0x0)) &&
      (plVar31 = (long *)(pUVar22->fields).Ammunition, (Il2CppClass *)plVar31 != (Il2CppClass *)0x0)) &&
     (ppUVar30 = (UI_CharacterEditorEditStatsPopup_o **)(pUVar22->fields).Acceleration,
     (UI_CharacterEditorEditStatsPopup_o *)ppUVar30 != (UI_CharacterEditorEditStatsPopup_o *)0x0)) {
    iVar26 = (pSVar25->fields)._value + (pSVar6->fields)._value +
             *(int *)((long)&((Settings_TypedSetting_T__Fields *)&(((Il2CppClass *)plVar31)->_1).name)->
                             DefaultValue + 4) +
             *(int *)((long)&(((UI_CharacterEditorEditStatsPopup_o *)ppUVar30)->fields).m_CachedPtr + 4);
    if (iVar26 < 0x141) {
label_04360617:
      pSVar6 = (pUVar22->fields).Gas;
      if ((pSVar6 != (Settings_IntSetting_o *)0x0) &&
         (pSVar9 = (pUVar22->fields).Ammunition, pSVar9 != (Settings_IntSetting_o *)0x0)) {
        pSVar10 = (pUVar22->fields).Acceleration;
        plVar31 = (long *)0x0;
        if (pSVar10 != (Settings_IntSetting_o *)0x0) {
          iVar26 = (pSVar25->fields)._value;
          uVar29 = (pSVar6->fields)._value;
          pIVar20 = (Il2CppClass *)(ulong)uVar29;
          uVar2 = (pSVar9->fields)._value;
          unaff_R15 = (System_String_o *)(ulong)uVar2;
          uVar28 = (pSVar10->fields)._value;
          pIVar23 = (Il2CppClass *)(ulong)uVar28;
          pUVar11 = (pUVar22->fields)._pointsLeftLabel;
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            *(undefined8 *)(puVar27 + -0x40) = 0x4360675;
            il2cpp_runtime_helper_02337ed0();
          }
          uVar28 = iVar26 + uVar29 + uVar2 + uVar28;
          unaff_RBP = (Characters_HumanStats_o *)(ulong)uVar28;
          *(undefined8 *)(puVar27 + -0x40) = 0x436068e;
          iVar17 = System_Math__Max_3cb7c30(0,0x140 - uVar28,(MethodInfo *)0x0);
          *(int32_t *)(puVar27 + -0x2c) = iVar17;
          *(undefined8 *)(puVar27 + -0x40) = 0x436069e;
          plVar31 = (long *)System_Int32__ToString((int32_t)(puVar27 + -0x2c),(MethodInfo *)0x0);
          *(undefined8 *)(puVar27 + -0x40) = 0x43606b2;
          ppUVar30 = (UI_CharacterEditorEditStatsPopup_o **)"Points left: ";
          pSVar19 = System_String__Concat_3ae5ba0
                              ((System_String_o *)"Points left: ",(System_String_o *)plVar31,(MethodInfo *)0x0);
          pUVar22 = (UI_CharacterEditorEditStatsPopup_o *)0x0;
          if (pUVar11 != (UnityEngine_UI_Text_o *)0x0) {
            pMVar8 = (pUVar11->klass->vtable)._75_set_text.method;
            vtableDispatch = (pUVar11->klass->vtable)._75_set_text.methodPtr;
            *(undefined8 *)(puVar27 + -0x40) = 0x43606cd;
            (*vtableDispatch)(pUVar11,pSVar19,pMVar8);
            return;
          }
        }
      }
    }
    else if (pIVar23 != (Il2CppClass *)0x0) {
      uVar29 = (*(int *)((long)&((Settings_TypedSetting_T__Fields *)&(pIVar23->_1).name)->DefaultValue + 4) -
               iVar26) + 0x140;
      plVar31 = (long *)(ulong)uVar29;
      *(undefined8 *)(puVar27 + -0x40) = 0x4360569;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pIVar23,uVar29,MethodInfo_Void_set_Value);
      if (*(int *)((long)&((Settings_TypedSetting_T__Fields *)&(pIVar23->_1).name)->DefaultValue + 4) < 0) {
        pSVar25 = (pUVar22->fields).Speed;
        ppUVar30 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
        if (pSVar25 != (Settings_IntSetting_o *)0x0) {
          pSVar7 = pSVar25->klass;
          plVar31 = (long *)(pSVar7->vtable)._4_SetDefault.method;
          vtableDispatch = (pSVar7->vtable)._4_SetDefault.methodPtr;
          *(undefined8 *)(puVar27 + -0x40) = 0x4360594;
          (*vtableDispatch)();
          pSVar25 = (pUVar22->fields).Gas;
          ppUVar30 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
          if (pSVar25 != (Settings_IntSetting_o *)0x0) {
            pSVar7 = pSVar25->klass;
            plVar31 = (long *)(pSVar7->vtable)._4_SetDefault.method;
            vtableDispatch = (pSVar7->vtable)._4_SetDefault.methodPtr;
            *(undefined8 *)(puVar27 + -0x40) = 0x43605b4;
            (*vtableDispatch)();
            pSVar25 = (pUVar22->fields).Ammunition;
            ppUVar30 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
            if (pSVar25 != (Settings_IntSetting_o *)0x0) {
              pSVar7 = pSVar25->klass;
              plVar31 = (long *)(pSVar7->vtable)._4_SetDefault.method;
              vtableDispatch = (pSVar7->vtable)._4_SetDefault.methodPtr;
              *(undefined8 *)(puVar27 + -0x40) = 0x43605d4;
              (*vtableDispatch)();
              pSVar25 = (pUVar22->fields).Acceleration;
              ppUVar30 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
              if (pSVar25 != (Settings_IntSetting_o *)0x0) {
                pMVar8 = (pSVar25->klass->vtable)._4_SetDefault.method;
                vtableDispatch = (pSVar25->klass->vtable)._4_SetDefault.methodPtr;
                *(undefined8 *)(puVar27 + -0x40) = 0x43605f4;
                (*vtableDispatch)(pSVar25,pMVar8);
                goto label_043605f4;
              }
            }
          }
        }
      }
      else {
label_043605f4:
        plVar31 = (long *)(pUVar22->klass->vtable)._23_SyncSettingElements.method;
        vtableDispatch = (pUVar22->klass->vtable)._23_SyncSettingElements.methodPtr;
        *(undefined8 *)(puVar27 + -0x40) = 0x4360607;
        ppUVar30 = (UI_CharacterEditorEditStatsPopup_o **)pUVar22;
        (*vtableDispatch)();
        pSVar25 = (pUVar22->fields).Speed;
        if (pSVar25 != (Settings_IntSetting_o *)0x0) goto label_04360617;
      }
    }
  }
  *(undefined8 *)(puVar27 + -0x40) = 0x43606df;
  uVar24 = il2cpp_runtime_helper_022b2c90();
  *(Characters_HumanStats_o **)(puVar27 + -0x40) = unaff_RBP;
  *(System_String_o **)(puVar27 + -0x48) = unaff_R15;
  *(Il2CppClass **)(puVar27 + -0x50) = pIVar23;
  *(UI_CharacterEditorEditStatsPopup_o **)(puVar27 + -0x58) = __this;
  *(Il2CppClass **)(puVar27 + -0x60) = pIVar20;
  *(UI_CharacterEditorEditStatsPopup_o **)(puVar27 + -0x68) = pUVar22;
  *(undefined8 *)(puVar27 + -0x70) = uVar24;
  if (g_data_057ae19b == '\0') {
    *(undefined8 *)(puVar27 + -0x78) = 0x436070a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorMenu);
    *(undefined8 *)(puVar27 + -0x78) = 0x4360716;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    *(undefined8 *)(puVar27 + -0x78) = 0x4360722;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanStats);
    *(undefined8 *)(puVar27 + -0x78) = 0x436072e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    *(undefined8 *)(puVar27 + -0x78) = 0x436073a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)(puVar27 + -0x78) = 0x4360746;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    *(undefined8 *)(puVar27 + -0x78) = 0x4360752;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    *(undefined8 *)(puVar27 + -0x78) = 0x436075e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    *(undefined8 *)(puVar27 + -0x78) = 0x436076a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    *(undefined8 *)(puVar27 + -0x78) = 0x4360776;
    il2cpp_runtime_helper_023445d0(&"Back");
    *(undefined8 *)(puVar27 + -0x78) = 0x4360782;
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae19b = '\x01';
  }
  *(undefined8 *)(puVar27 + -0x78) = 0x436079d;
  bVar18 = System_String__op_Equality((System_String_o *)plVar31,"Back",(MethodInfo *)0x0);
  if ((char)bVar18 != '\0') {
    (*(((UI_CharacterEditorEditStatsPopup_o *)ppUVar30)->klass->vtable)._22_Hide.methodPtr)
              (ppUVar30,(((UI_CharacterEditorEditStatsPopup_o *)ppUVar30)->klass->vtable)._22_Hide.method);
    return;
  }
  *(undefined8 *)(puVar27 + -0x78) = 0x43607d9;
  bVar18 = System_String__op_Equality((System_String_o *)plVar31,"Save",(MethodInfo *)0x0);
  if ((char)bVar18 == '\0') {
    return;
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar4 != 0) &&
     (pSVar5 = *(Settings_SetSettingsContainer_T__o **)(lVar4 + 0x20),
     pSVar5 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    *(undefined8 *)(puVar27 + -0x78) = 0x436081c;
    pIVar20 = (Il2CppClass *)Settings_SetSettingsContainer_object___GetSelectedSet(pSVar5,MethodInfo_BaseSetSetting_GetSelectedSet);
    pIVar23 = pIVar20;
    if (pIVar20 != (Il2CppClass *)0x0) {
      pvVar12 = (pIVar20->_1).image;
      bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      if ((*(byte *)((long)pvVar12 + 0x130) < bVar1) ||
         (*(Il2CppClass **)(*(long *)((long)pvVar12 + 200) + -8 + (ulong)bVar1 * 8) != TypeInfo_HumanCustomSet))
      goto label_04360a15;
    }
    *(undefined8 *)(puVar27 + -0x78) = 0x4360866;
    plVar31 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanStats);
    *(undefined8 *)(puVar27 + -0x78) = 0x4360875;
    Characters_HumanStats___ctor
              ((Characters_HumanStats_o *)plVar31,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
    if ((pIVar20 != (Il2CppClass *)0x0) &&
       (pvVar12 = (pIVar20->_2).genericContainerHandle, pvVar12 != (void *)0x0)) {
      pSVar19 = *(System_String_o **)((long)pvVar12 + 0x18);
      if (*(int *)(TypeInfo_HumanStats + 0xe4) == 0) {
        *(undefined8 *)(puVar27 + -0x78) = 0x43608a4;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar27 + -0x78) = 0x43608b1;
      __this_02 = Characters_HumanStats__Deserialize
                            ((Characters_HumanStats_o *)plVar31,pSVar19,(MethodInfo *)0x0);
      pSVar25 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar30)->fields).Speed;
      if ((pSVar25 != (Settings_IntSetting_o *)0x0) && (__this_02 != (Characters_HumanStats_o *)0x0)) {
        (__this_02->fields).Speed = (pSVar25->fields)._value;
        pSVar25 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar30)->fields).Acceleration;
        if (pSVar25 != (Settings_IntSetting_o *)0x0) {
          (__this_02->fields).Acceleration = (pSVar25->fields)._value;
          pSVar25 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar30)->fields).Gas;
          if (pSVar25 != (Settings_IntSetting_o *)0x0) {
            (__this_02->fields).Gas = (pSVar25->fields)._value;
            pSVar25 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar30)->fields).Ammunition;
            if (pSVar25 != (Settings_IntSetting_o *)0x0) {
              (__this_02->fields).Ammunition = (pSVar25->fields)._value;
              plVar31 = (pIVar20->_2).genericContainerHandle;
              *(undefined8 *)(puVar27 + -0x78) = 0x4360923;
              pSVar19 = Characters_HumanStats__Serialize(__this_02,(MethodInfo *)0x0);
              if ((Il2CppClass *)plVar31 != (Il2CppClass *)0x0) {
                *(undefined8 *)(puVar27 + -0x78) = 0x4360941;
                Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)plVar31,(Il2CppObject *)pSVar19,MethodInfo_Void_set_Value);
                plVar13 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
                if (plVar13 != (long *)0x0) {
                  uVar24 = *(undefined8 *)(*plVar13 + 0x240);
                  pcVar14 = *(code **)(*plVar13 + 0x238);
                  *(undefined8 *)(puVar27 + -0x78) = 0x4360969;
                  (*pcVar14)(plVar13,uVar24);
                  plVar31 = &TypeInfo_UIManager;
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    *(undefined8 *)(puVar27 + -0x78) = 0x4360981;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pIVar15 = *(Il2CppClass **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                  if (pIVar15 != (Il2CppClass *)0x0) {
                    pSVar16 = (pIVar15->_1).image;
                    bVar1 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
                    pIVar23 = pIVar15;
                    if ((bVar1 <= (pSVar16->_2).naturalAligment) &&
                       ((pSVar16->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorMenu)) {
                      pSVar16 = (pIVar15->_1).image;
                      bVar1 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
                      if ((bVar1 <= (pSVar16->_2).naturalAligment) &&
                         ((pSVar16->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorMenu)) {
                        vtableDispatch = (pSVar16->vtable)._8_DeserializeFromJsonString.methodPtr;
                        (*vtableDispatch)
                                  (pIVar15,0,(pSVar16->vtable)._8_DeserializeFromJsonString.method,
                                   vtableDispatch);
                        return;
                      }
                    }
                    goto label_04360a15;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined8 *)(puVar27 + -0x78) = 0x4360a12;
  il2cpp_runtime_helper_022b2c90();
  pIVar20 = pIVar23;
label_04360a15:
  *(undefined8 *)(puVar27 + -0x78) = 0x4360a1a;
  il2cpp_runtime_helper_022b2fd0();
  *(UI_CharacterEditorEditStatsPopup_o ***)(puVar27 + -0x78) = ppUVar30;
  *(Il2CppClass **)(puVar27 + -0x80) = pIVar20;
  *(long **)(puVar27 + -0x88) = plVar31;
  if (g_data_057ae19d == '\0') {
    *(undefined8 *)(puVar27 + -0x90) = 0x4360a3d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    g_data_057ae19d = '\x01';
  }
  *(undefined8 *)(puVar27 + -0x90) = 0x4360a53;
  pSVar25 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  *(undefined8 *)(puVar27 + -0x90) = 0x4360a70;
  Settings_IntSetting___ctor_40f39a0(pSVar25,0x50,0x32,100,(MethodInfo *)0x0);
  (pIVar23->_1).implementedInterfaces = (Il2CppClass **)pSVar25;
  *(undefined8 *)(puVar27 + -0x90) = 0x4360a86;
  il2cpp_runtime_helper_022b4080(&(pIVar23->_1).implementedInterfaces,pSVar25);
  *(undefined8 *)(puVar27 + -0x90) = 0x4360a8e;
  pSVar25 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  *(undefined8 *)(puVar27 + -0x90) = 0x4360aab;
  Settings_IntSetting___ctor_40f39a0(pSVar25,0x50,0x32,100,(MethodInfo *)0x0);
  (pIVar23->_1).interfaceOffsets = (Il2CppRuntimeInterfaceOffsetPair *)pSVar25;
  *(undefined8 *)(puVar27 + -0x90) = 0x4360ac1;
  il2cpp_runtime_helper_022b4080(&(pIVar23->_1).interfaceOffsets,pSVar25);
  *(undefined8 *)(puVar27 + -0x90) = 0x4360ac9;
  pSVar25 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  *(undefined8 *)(puVar27 + -0x90) = 0x4360ae6;
  Settings_IntSetting___ctor_40f39a0(pSVar25,0x50,0x32,100,(MethodInfo *)0x0);
  pIVar23->static_fields = pSVar25;
  *(undefined8 *)(puVar27 + -0x90) = 0x4360afc;
  il2cpp_runtime_helper_022b4080(&pIVar23->static_fields,pSVar25);
  *(undefined8 *)(puVar27 + -0x90) = 0x4360b04;
  __this_03 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  *(undefined8 *)(puVar27 + -0x90) = 0x4360b21;
  Settings_IntSetting___ctor_40f39a0((Settings_IntSetting_o *)__this_03,0x50,0x32,100,(MethodInfo *)0x0);
  pIVar23->rgctx_data = __this_03;
  *(undefined8 *)(puVar27 + -0x90) = 0x4360b37;
  il2cpp_runtime_helper_022b4080(&pIVar23->rgctx_data);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)pIVar23,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditStatsPopup$$OnButtonClick
// il2cpp: void UI_CharacterEditorEditStatsPopup__OnButtonClick (UI_CharacterEditorEditStatsPopup_o* __this, System_String_o* button, const MethodInfo* method);
// 0x43606e0

void UI_CharacterEditorEditStatsPopup__OnButtonClick
               (UI_CharacterEditorEditStatsPopup_o *__this,System_String_o *button,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_SetSettingsContainer_T__o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_c *str;
  Settings_TypedSetting_T__o *__this_01;
  long *plVar4;
  UI_TooltipPopup_o *pUVar5;
  UI_TooltipPopup_c *pUVar6;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar7;
  Characters_HumanStats_o *pCVar8;
  System_String_o *value;
  UnityEngine_UI_Text_o *__this_02;
  Settings_IntSetting_o *pSVar9;
  UI_TooltipPopup_o *unaff_R14;
  
  if (g_data_057ae19b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanStats);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae19b = '\x01';
  }
  bVar7 = System_String__op_Equality(button,"Back",(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar7 = System_String__op_Equality(button,"Save",(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar2 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    unaff_R14 = (UI_TooltipPopup_o *)
                Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (unaff_R14 != (UI_TooltipPopup_o *)0x0) {
      bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      if (((unaff_R14->klass->_2).naturalAligment < bVar1) ||
         ((unaff_R14->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) goto label_04360a15;
    }
    pCVar8 = (Characters_HumanStats_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanStats);
    Characters_HumanStats___ctor(pCVar8,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
    if ((unaff_R14 != (UI_TooltipPopup_o *)0x0) &&
       (pUVar3 = unaff_R14[1].fields.DoublePanelLeft, pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      str = pUVar3[1].klass;
      if (*(int *)(TypeInfo_HumanStats + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar8 = Characters_HumanStats__Deserialize(pCVar8,(System_String_o *)str,(MethodInfo *)0x0);
      pSVar9 = (__this->fields).Speed;
      if ((pSVar9 != (Settings_IntSetting_o *)0x0) && (pCVar8 != (Characters_HumanStats_o *)0x0)) {
        (pCVar8->fields).Speed = (pSVar9->fields)._value;
        pSVar9 = (__this->fields).Acceleration;
        if (pSVar9 != (Settings_IntSetting_o *)0x0) {
          (pCVar8->fields).Acceleration = (pSVar9->fields)._value;
          pSVar9 = (__this->fields).Gas;
          if (pSVar9 != (Settings_IntSetting_o *)0x0) {
            (pCVar8->fields).Gas = (pSVar9->fields)._value;
            pSVar9 = (__this->fields).Ammunition;
            if (pSVar9 != (Settings_IntSetting_o *)0x0) {
              (pCVar8->fields).Ammunition = (pSVar9->fields)._value;
              __this_01 = (Settings_TypedSetting_T__o *)unaff_R14[1].fields.DoublePanelLeft;
              value = Characters_HumanStats__Serialize(pCVar8,(MethodInfo *)0x0);
              if (__this_01 != (Settings_TypedSetting_T__o *)0x0) {
                Settings_TypedSetting_object___set_Value(__this_01,(Il2CppObject *)value,MethodInfo_Void_set_Value);
                plVar4 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
                if (plVar4 != (long *)0x0) {
                  (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUVar5 = *(UI_TooltipPopup_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                  if (pUVar5 != (UI_TooltipPopup_o *)0x0) {
                    bVar1 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
                    unaff_R14 = pUVar5;
                    if ((bVar1 <= (pUVar5->klass->_2).naturalAligment) &&
                       ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorMenu)) {
                      pUVar6 = pUVar5->klass;
                      bVar1 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
                      if ((bVar1 <= (pUVar6->_2).naturalAligment) &&
                         ((pUVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorMenu)) {
                        vtableDispatch = (pUVar6->vtable)._8_get_BorderHorizontalPadding.methodPtr;
                        (*vtableDispatch)
                                  (pUVar5,0,(pUVar6->vtable)._8_get_BorderHorizontalPadding.method,
                                   vtableDispatch);
                        return;
                      }
                    }
                    goto label_04360a15;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04360a15:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae19d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    g_data_057ae19d = '\x01';
  }
  __this_02 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0((Settings_IntSetting_o *)__this_02,0x50,0x32,100,(MethodInfo *)0x0);
  (unaff_R14->fields)._label = __this_02;
  il2cpp_runtime_helper_022b4080(&(unaff_R14->fields)._label,__this_02);
  pSVar9 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar9,0x50,0x32,100,(MethodInfo *)0x0);
  (unaff_R14->fields)._panel = (UnityEngine_RectTransform_o *)pSVar9;
  il2cpp_runtime_helper_022b4080(&(unaff_R14->fields)._panel,pSVar9);
  pSVar9 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar9,0x50,0x32,100,(MethodInfo *)0x0);
  (unaff_R14->fields).Caller = (UnityEngine_Component_o *)pSVar9;
  il2cpp_runtime_helper_022b4080(&(unaff_R14->fields).Caller,pSVar9);
  pSVar9 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar9,0x50,0x32,100,(MethodInfo *)0x0);
  *(Settings_IntSetting_o **)&(unaff_R14->fields)._offset = pSVar9;
  il2cpp_runtime_helper_022b4080(&(unaff_R14->fields)._offset);
  UI_BasePopup___ctor(unaff_R14,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditStatsPopup$$OnStatChanged
// il2cpp: void UI_CharacterEditorEditStatsPopup__OnStatChanged (UI_CharacterEditorEditStatsPopup_o* __this, Settings_IntSetting_o* setting, const MethodInfo* method);
// 0x4360490

void UI_CharacterEditorEditStatsPopup__OnStatChanged
               (UI_CharacterEditorEditStatsPopup_o *__this,Settings_IntSetting_o *setting,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_c *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  long lVar8;
  Settings_SetSettingsContainer_T__o *__this_00;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Transform_c *str;
  Settings_TypedSetting_T__o *__this_01;
  long *plVar10;
  UI_TooltipPopup_o *pUVar11;
  UI_TooltipPopup_c *pUVar12;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar13;
  MethodInfo *str1;
  System_String_o *pSVar14;
  Characters_HumanStats_o *pCVar15;
  UnityEngine_UI_Text_o *pUVar16;
  Settings_IntSetting_o *pSVar17;
  int iVar18;
  uint uVar19;
  UI_CharacterEditorEditStatsPopup_o **ppUVar20;
  int32_t iStack_2c;
  
  str1 = (MethodInfo *)setting;
  ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)__this;
  if (g_data_057ae19c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    ppUVar20 = &"Points left: ";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae19c = '\x01';
  }
  iStack_2c = 0;
  pSVar17 = (__this->fields).Speed;
  if ((((pSVar17 != (Settings_IntSetting_o *)0x0) &&
       (pSVar4 = (__this->fields).Gas, pSVar4 != (Settings_IntSetting_o *)0x0)) &&
      (str1 = (MethodInfo *)(__this->fields).Ammunition, str1 != (MethodInfo *)0x0)) &&
     (ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)(__this->fields).Acceleration,
     (UI_CharacterEditorEditStatsPopup_o *)ppUVar20 != (UI_CharacterEditorEditStatsPopup_o *)0x0)) {
    iVar18 = (pSVar17->fields)._value + (pSVar4->fields)._value +
             ((Settings_IntSetting_Fields *)&str1->invoker_method)->_value +
             *(int *)((long)&(((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).m_CachedPtr + 4);
    if (iVar18 < 0x141) {
label_04360617:
      pSVar4 = (__this->fields).Gas;
      if ((pSVar4 != (Settings_IntSetting_o *)0x0) &&
         (pSVar6 = (__this->fields).Ammunition, pSVar6 != (Settings_IntSetting_o *)0x0)) {
        pSVar7 = (__this->fields).Acceleration;
        str1 = (MethodInfo *)0x0;
        if (pSVar7 != (Settings_IntSetting_o *)0x0) {
          iVar18 = (pSVar17->fields)._value;
          iVar2 = (pSVar4->fields)._value;
          iVar3 = (pSVar6->fields)._value;
          uVar19 = (pSVar7->fields)._value;
          setting = (Settings_IntSetting_o *)(ulong)uVar19;
          pUVar16 = (__this->fields)._pointsLeftLabel;
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iStack_2c = System_Math__Max_3cb7c30(0,0x140 - (iVar18 + iVar2 + iVar3 + uVar19),(MethodInfo *)0x0);
          str1 = (MethodInfo *)System_Int32__ToString((int32_t)&iStack_2c,(MethodInfo *)0x0);
          ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)"Points left: ";
          pSVar14 = System_String__Concat_3ae5ba0
                              ((System_String_o *)"Points left: ",(System_String_o *)str1,(MethodInfo *)0x0);
          if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar16->klass->vtable)._75_set_text.methodPtr)
                      (pUVar16,pSVar14,(pUVar16->klass->vtable)._75_set_text.method);
            return;
          }
        }
      }
    }
    else if (setting != (Settings_IntSetting_o *)0x0) {
      uVar19 = ((setting->fields)._value - iVar18) + 0x140;
      str1 = (MethodInfo *)(ulong)uVar19;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)setting,uVar19,MethodInfo_Void_set_Value);
      if ((setting->fields)._value < 0) {
        pSVar17 = (__this->fields).Speed;
        ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
        if (pSVar17 != (Settings_IntSetting_o *)0x0) {
          pSVar5 = pSVar17->klass;
          str1 = (pSVar5->vtable)._4_SetDefault.method;
          (*(pSVar5->vtable)._4_SetDefault.methodPtr)();
          pSVar17 = (__this->fields).Gas;
          ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
          if (pSVar17 != (Settings_IntSetting_o *)0x0) {
            pSVar5 = pSVar17->klass;
            str1 = (pSVar5->vtable)._4_SetDefault.method;
            (*(pSVar5->vtable)._4_SetDefault.methodPtr)();
            pSVar17 = (__this->fields).Ammunition;
            ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
            if (pSVar17 != (Settings_IntSetting_o *)0x0) {
              pSVar5 = pSVar17->klass;
              str1 = (pSVar5->vtable)._4_SetDefault.method;
              (*(pSVar5->vtable)._4_SetDefault.methodPtr)();
              pSVar17 = (__this->fields).Acceleration;
              ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
              if (pSVar17 != (Settings_IntSetting_o *)0x0) {
                (*(pSVar17->klass->vtable)._4_SetDefault.methodPtr)
                          (pSVar17,(pSVar17->klass->vtable)._4_SetDefault.method);
                goto label_043605f4;
              }
            }
          }
        }
      }
      else {
label_043605f4:
        str1 = (__this->klass->vtable)._23_SyncSettingElements.method;
        ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)__this;
        (*(__this->klass->vtable)._23_SyncSettingElements.methodPtr)();
        pSVar17 = (__this->fields).Speed;
        if (pSVar17 != (Settings_IntSetting_o *)0x0) goto label_04360617;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae19b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanStats);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae19b = '\x01';
  }
  bVar13 = System_String__op_Equality((System_String_o *)str1,"Back",(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    (*(((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->klass->vtable)._22_Hide.methodPtr)
              (ppUVar20,(((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->klass->vtable)._22_Hide.method);
    return;
  }
  bVar13 = System_String__op_Equality((System_String_o *)str1,"Save",(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return;
  }
  lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar8 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar8 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    setting = (Settings_IntSetting_o *)
              Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if ((UI_TooltipPopup_o *)setting != (UI_TooltipPopup_o *)0x0) {
      bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      if (((((UI_TooltipPopup_o *)setting)->klass->_2).naturalAligment < bVar1) ||
         ((((UI_TooltipPopup_o *)setting)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet))
      goto label_04360a15;
    }
    pCVar15 = (Characters_HumanStats_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanStats);
    Characters_HumanStats___ctor(pCVar15,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
    if (((UI_TooltipPopup_o *)setting != (UI_TooltipPopup_o *)0x0) &&
       (pUVar9 = (((UI_TooltipPopup_o *)((long)setting + 200))->fields).DoublePanelLeft,
       pUVar9 != (UnityEngine_Transform_o *)0x0)) {
      str = pUVar9[1].klass;
      if (*(int *)(TypeInfo_HumanStats + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar15 = Characters_HumanStats__Deserialize(pCVar15,(System_String_o *)str,(MethodInfo *)0x0);
      pSVar17 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).Speed;
      if ((pSVar17 != (Settings_IntSetting_o *)0x0) && (pCVar15 != (Characters_HumanStats_o *)0x0)) {
        (pCVar15->fields).Speed = (pSVar17->fields)._value;
        pSVar17 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).Acceleration;
        if (pSVar17 != (Settings_IntSetting_o *)0x0) {
          (pCVar15->fields).Acceleration = (pSVar17->fields)._value;
          pSVar17 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).Gas;
          if (pSVar17 != (Settings_IntSetting_o *)0x0) {
            (pCVar15->fields).Gas = (pSVar17->fields)._value;
            pSVar17 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).Ammunition;
            if (pSVar17 != (Settings_IntSetting_o *)0x0) {
              (pCVar15->fields).Ammunition = (pSVar17->fields)._value;
              __this_01 = (Settings_TypedSetting_T__o *)
                          (((UI_TooltipPopup_o *)((long)setting + 200))->fields).DoublePanelLeft;
              pSVar14 = Characters_HumanStats__Serialize(pCVar15,(MethodInfo *)0x0);
              if (__this_01 != (Settings_TypedSetting_T__o *)0x0) {
                Settings_TypedSetting_object___set_Value(__this_01,(Il2CppObject *)pSVar14,MethodInfo_Void_set_Value);
                plVar10 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
                if (plVar10 != (long *)0x0) {
                  (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUVar11 = *(UI_TooltipPopup_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                  if (pUVar11 != (UI_TooltipPopup_o *)0x0) {
                    bVar1 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
                    setting = (Settings_IntSetting_o *)pUVar11;
                    if ((bVar1 <= (pUVar11->klass->_2).naturalAligment) &&
                       ((pUVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorMenu)) {
                      pUVar12 = pUVar11->klass;
                      bVar1 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
                      if ((bVar1 <= (pUVar12->_2).naturalAligment) &&
                         ((pUVar12->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorMenu)) {
                        vtableDispatch = (pUVar12->vtable)._8_get_BorderHorizontalPadding.methodPtr;
                        (*vtableDispatch)
                                  (pUVar11,0,(pUVar12->vtable)._8_get_BorderHorizontalPadding.method,
                                   vtableDispatch);
                        return;
                      }
                    }
                    goto label_04360a15;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04360a15:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae19d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    g_data_057ae19d = '\x01';
  }
  pUVar16 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0((Settings_IntSetting_o *)pUVar16,0x50,0x32,100,(MethodInfo *)0x0);
  (((UI_TooltipPopup_o *)setting)->fields)._label = pUVar16;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)setting)->fields)._label,pUVar16);
  pSVar17 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar17,0x50,0x32,100,(MethodInfo *)0x0);
  (((UI_TooltipPopup_o *)setting)->fields)._panel = (UnityEngine_RectTransform_o *)pSVar17;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)setting)->fields)._panel,pSVar17);
  pSVar17 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar17,0x50,0x32,100,(MethodInfo *)0x0);
  (((UI_TooltipPopup_o *)setting)->fields).Caller = (UnityEngine_Component_o *)pSVar17;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)setting)->fields).Caller,pSVar17);
  pSVar17 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar17,0x50,0x32,100,(MethodInfo *)0x0);
  *(Settings_IntSetting_o **)&(((UI_TooltipPopup_o *)setting)->fields)._offset = pSVar17;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)setting)->fields)._offset);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)setting,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditStatsPopup$$.ctor
// il2cpp: void UI_CharacterEditorEditStatsPopup___ctor (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x4360a20

void UI_CharacterEditorEditStatsPopup___ctor(UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  
  if (g_data_057ae19d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    g_data_057ae19d = '\x01';
  }
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0x50,0x32,100,(MethodInfo *)0x0);
  (__this->fields).Speed = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Speed,pSVar1);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0x50,0x32,100,(MethodInfo *)0x0);
  (__this->fields).Acceleration = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Acceleration,pSVar1);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0x50,0x32,100,(MethodInfo *)0x0);
  (__this->fields).Ammunition = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Ammunition,pSVar1);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0x50,0x32,100,(MethodInfo *)0x0);
  (__this->fields).Gas = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Gas);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_0
// il2cpp: void UI_CharacterEditorEditStatsPopup___Setup_b__17_0 (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x4360b50

void UI_CharacterEditorEditStatsPopup___Setup_b__17_0
               (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae19e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae19e = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorEditStatsPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_1
// il2cpp: void UI_CharacterEditorEditStatsPopup___Setup_b__17_1 (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x4360b90

void UI_CharacterEditorEditStatsPopup___Setup_b__17_1
               (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae19f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae19f = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorEditStatsPopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_2
// il2cpp: void UI_CharacterEditorEditStatsPopup___Setup_b__17_2 (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x4360bd0

void UI_CharacterEditorEditStatsPopup___Setup_b__17_2
               (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_c *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  long lVar8;
  Settings_SetSettingsContainer_T__o *__this_00;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Transform_c *str;
  Settings_TypedSetting_T__o *__this_01;
  long *plVar10;
  UI_TooltipPopup_c *pUVar11;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar12;
  UI_TooltipPopup_o *pUVar13;
  System_String_o *pSVar14;
  UI_TooltipPopup_o *__this_02;
  Characters_HumanStats_o *pCVar15;
  UnityEngine_UI_Text_o *pUVar16;
  Settings_IntSetting_o *pSVar17;
  int iVar18;
  uint uVar19;
  UI_CharacterEditorEditStatsPopup_o **ppUVar20;
  int32_t iStack_2c;
  
  __this_02 = (UI_TooltipPopup_o *)(__this->fields).Acceleration;
  pUVar13 = __this_02;
  ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)__this;
  if (g_data_057ae19c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    ppUVar20 = &"Points left: ";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae19c = '\x01';
  }
  iStack_2c = 0;
  pSVar17 = (__this->fields).Speed;
  if ((((pSVar17 != (Settings_IntSetting_o *)0x0) &&
       (pSVar4 = (__this->fields).Gas, pSVar4 != (Settings_IntSetting_o *)0x0)) &&
      (pUVar13 = (UI_TooltipPopup_o *)(__this->fields).Ammunition, pUVar13 != (UI_TooltipPopup_o *)0x0)) &&
     (ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)(__this->fields).Acceleration,
     (UI_CharacterEditorEditStatsPopup_o *)ppUVar20 != (UI_CharacterEditorEditStatsPopup_o *)0x0)) {
    iVar18 = (pSVar17->fields)._value + (pSVar4->fields)._value +
             *(int32_t *)((long)&(pUVar13->fields).m_CachedPtr + 4) +
             *(int *)((long)&(((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).m_CachedPtr + 4);
    if (iVar18 < 0x141) {
label_04360617:
      pSVar4 = (__this->fields).Gas;
      if ((pSVar4 != (Settings_IntSetting_o *)0x0) &&
         (pSVar6 = (__this->fields).Ammunition, pSVar6 != (Settings_IntSetting_o *)0x0)) {
        pSVar7 = (__this->fields).Acceleration;
        pUVar13 = (UI_TooltipPopup_o *)0x0;
        if (pSVar7 != (Settings_IntSetting_o *)0x0) {
          iVar18 = (pSVar17->fields)._value;
          iVar2 = (pSVar4->fields)._value;
          iVar3 = (pSVar6->fields)._value;
          uVar19 = (pSVar7->fields)._value;
          __this_02 = (UI_TooltipPopup_o *)(ulong)uVar19;
          pUVar16 = (__this->fields)._pointsLeftLabel;
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iStack_2c = System_Math__Max_3cb7c30(0,0x140 - (iVar18 + iVar2 + iVar3 + uVar19),(MethodInfo *)0x0);
          pUVar13 = (UI_TooltipPopup_o *)System_Int32__ToString((int32_t)&iStack_2c,(MethodInfo *)0x0);
          ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)"Points left: ";
          pSVar14 = System_String__Concat_3ae5ba0
                              ((System_String_o *)"Points left: ",(System_String_o *)pUVar13,(MethodInfo *)0x0);
          if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar16->klass->vtable)._75_set_text.methodPtr)
                      (pUVar16,pSVar14,(pUVar16->klass->vtable)._75_set_text.method);
            return;
          }
        }
      }
    }
    else if (__this_02 != (UI_TooltipPopup_o *)0x0) {
      uVar19 = (*(int32_t *)((long)&(__this_02->fields).m_CachedPtr + 4) - iVar18) + 0x140;
      pUVar13 = (UI_TooltipPopup_o *)(ulong)uVar19;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_02,uVar19,MethodInfo_Void_set_Value);
      if (*(int32_t *)((long)&(__this_02->fields).m_CachedPtr + 4) < 0) {
        pSVar17 = (__this->fields).Speed;
        ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
        if (pSVar17 != (Settings_IntSetting_o *)0x0) {
          pSVar5 = pSVar17->klass;
          pUVar13 = (UI_TooltipPopup_o *)(pSVar5->vtable)._4_SetDefault.method;
          (*(pSVar5->vtable)._4_SetDefault.methodPtr)();
          pSVar17 = (__this->fields).Gas;
          ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
          if (pSVar17 != (Settings_IntSetting_o *)0x0) {
            pSVar5 = pSVar17->klass;
            pUVar13 = (UI_TooltipPopup_o *)(pSVar5->vtable)._4_SetDefault.method;
            (*(pSVar5->vtable)._4_SetDefault.methodPtr)();
            pSVar17 = (__this->fields).Ammunition;
            ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
            if (pSVar17 != (Settings_IntSetting_o *)0x0) {
              pSVar5 = pSVar17->klass;
              pUVar13 = (UI_TooltipPopup_o *)(pSVar5->vtable)._4_SetDefault.method;
              (*(pSVar5->vtable)._4_SetDefault.methodPtr)();
              pSVar17 = (__this->fields).Acceleration;
              ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
              if (pSVar17 != (Settings_IntSetting_o *)0x0) {
                (*(pSVar17->klass->vtable)._4_SetDefault.methodPtr)
                          (pSVar17,(pSVar17->klass->vtable)._4_SetDefault.method);
                goto label_043605f4;
              }
            }
          }
        }
      }
      else {
label_043605f4:
        pUVar13 = (UI_TooltipPopup_o *)(__this->klass->vtable)._23_SyncSettingElements.method;
        ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)__this;
        (*(__this->klass->vtable)._23_SyncSettingElements.methodPtr)();
        pSVar17 = (__this->fields).Speed;
        if (pSVar17 != (Settings_IntSetting_o *)0x0) goto label_04360617;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae19b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanStats);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae19b = '\x01';
  }
  bVar12 = System_String__op_Equality((System_String_o *)pUVar13,"Back",(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    (*(((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->klass->vtable)._22_Hide.methodPtr)
              (ppUVar20,(((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->klass->vtable)._22_Hide.method);
    return;
  }
  bVar12 = System_String__op_Equality((System_String_o *)pUVar13,"Save",(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    return;
  }
  lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar8 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar8 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    __this_02 = (UI_TooltipPopup_o *)
                Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (__this_02 != (UI_TooltipPopup_o *)0x0) {
      bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      if (((__this_02->klass->_2).naturalAligment < bVar1) ||
         ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) goto label_04360a15;
    }
    pCVar15 = (Characters_HumanStats_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanStats);
    Characters_HumanStats___ctor(pCVar15,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
    if ((__this_02 != (UI_TooltipPopup_o *)0x0) &&
       (pUVar9 = __this_02[1].fields.DoublePanelLeft, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
      str = pUVar9[1].klass;
      if (*(int *)(TypeInfo_HumanStats + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar15 = Characters_HumanStats__Deserialize(pCVar15,(System_String_o *)str,(MethodInfo *)0x0);
      pSVar17 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).Speed;
      if ((pSVar17 != (Settings_IntSetting_o *)0x0) && (pCVar15 != (Characters_HumanStats_o *)0x0)) {
        (pCVar15->fields).Speed = (pSVar17->fields)._value;
        pSVar17 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).Acceleration;
        if (pSVar17 != (Settings_IntSetting_o *)0x0) {
          (pCVar15->fields).Acceleration = (pSVar17->fields)._value;
          pSVar17 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).Gas;
          if (pSVar17 != (Settings_IntSetting_o *)0x0) {
            (pCVar15->fields).Gas = (pSVar17->fields)._value;
            pSVar17 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).Ammunition;
            if (pSVar17 != (Settings_IntSetting_o *)0x0) {
              (pCVar15->fields).Ammunition = (pSVar17->fields)._value;
              __this_01 = (Settings_TypedSetting_T__o *)__this_02[1].fields.DoublePanelLeft;
              pSVar14 = Characters_HumanStats__Serialize(pCVar15,(MethodInfo *)0x0);
              if (__this_01 != (Settings_TypedSetting_T__o *)0x0) {
                Settings_TypedSetting_object___set_Value(__this_01,(Il2CppObject *)pSVar14,MethodInfo_Void_set_Value);
                plVar10 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
                if (plVar10 != (long *)0x0) {
                  (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUVar13 = *(UI_TooltipPopup_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                  if (pUVar13 != (UI_TooltipPopup_o *)0x0) {
                    bVar1 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
                    __this_02 = pUVar13;
                    if ((bVar1 <= (pUVar13->klass->_2).naturalAligment) &&
                       ((pUVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorMenu)) {
                      pUVar11 = pUVar13->klass;
                      bVar1 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
                      if ((bVar1 <= (pUVar11->_2).naturalAligment) &&
                         ((pUVar11->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorMenu)) {
                        vtableDispatch = (pUVar11->vtable)._8_get_BorderHorizontalPadding.methodPtr;
                        (*vtableDispatch)
                                  (pUVar13,0,(pUVar11->vtable)._8_get_BorderHorizontalPadding.method,
                                   vtableDispatch);
                        return;
                      }
                    }
                    goto label_04360a15;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04360a15:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae19d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    g_data_057ae19d = '\x01';
  }
  pUVar16 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0((Settings_IntSetting_o *)pUVar16,0x50,0x32,100,(MethodInfo *)0x0);
  (__this_02->fields)._label = pUVar16;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._label,pUVar16);
  pSVar17 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar17,0x50,0x32,100,(MethodInfo *)0x0);
  (__this_02->fields)._panel = (UnityEngine_RectTransform_o *)pSVar17;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._panel,pSVar17);
  pSVar17 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar17,0x50,0x32,100,(MethodInfo *)0x0);
  (__this_02->fields).Caller = (UnityEngine_Component_o *)pSVar17;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).Caller,pSVar17);
  pSVar17 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar17,0x50,0x32,100,(MethodInfo *)0x0);
  *(Settings_IntSetting_o **)&(__this_02->fields)._offset = pSVar17;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._offset);
  UI_BasePopup___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_3
// il2cpp: void UI_CharacterEditorEditStatsPopup___Setup_b__17_3 (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x4360be0

void UI_CharacterEditorEditStatsPopup___Setup_b__17_3
               (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_c *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  long lVar8;
  Settings_SetSettingsContainer_T__o *__this_00;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Transform_c *str;
  Settings_TypedSetting_T__o *__this_01;
  long *plVar10;
  UI_TooltipPopup_c *pUVar11;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar12;
  UI_TooltipPopup_o *pUVar13;
  System_String_o *pSVar14;
  UI_TooltipPopup_o *__this_02;
  Characters_HumanStats_o *pCVar15;
  UnityEngine_UI_Text_o *pUVar16;
  Settings_IntSetting_o *pSVar17;
  int iVar18;
  uint uVar19;
  UI_CharacterEditorEditStatsPopup_o **ppUVar20;
  int32_t iStack_2c;
  
  __this_02 = (UI_TooltipPopup_o *)(__this->fields).Speed;
  pUVar13 = __this_02;
  ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)__this;
  if (g_data_057ae19c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    ppUVar20 = &"Points left: ";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae19c = '\x01';
  }
  iStack_2c = 0;
  pSVar17 = (__this->fields).Speed;
  if ((((pSVar17 != (Settings_IntSetting_o *)0x0) &&
       (pSVar4 = (__this->fields).Gas, pSVar4 != (Settings_IntSetting_o *)0x0)) &&
      (pUVar13 = (UI_TooltipPopup_o *)(__this->fields).Ammunition, pUVar13 != (UI_TooltipPopup_o *)0x0)) &&
     (ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)(__this->fields).Acceleration,
     (UI_CharacterEditorEditStatsPopup_o *)ppUVar20 != (UI_CharacterEditorEditStatsPopup_o *)0x0)) {
    iVar18 = (pSVar17->fields)._value + (pSVar4->fields)._value +
             *(int32_t *)((long)&(pUVar13->fields).m_CachedPtr + 4) +
             *(int *)((long)&(((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).m_CachedPtr + 4);
    if (iVar18 < 0x141) {
label_04360617:
      pSVar4 = (__this->fields).Gas;
      if ((pSVar4 != (Settings_IntSetting_o *)0x0) &&
         (pSVar6 = (__this->fields).Ammunition, pSVar6 != (Settings_IntSetting_o *)0x0)) {
        pSVar7 = (__this->fields).Acceleration;
        pUVar13 = (UI_TooltipPopup_o *)0x0;
        if (pSVar7 != (Settings_IntSetting_o *)0x0) {
          iVar18 = (pSVar17->fields)._value;
          iVar2 = (pSVar4->fields)._value;
          iVar3 = (pSVar6->fields)._value;
          uVar19 = (pSVar7->fields)._value;
          __this_02 = (UI_TooltipPopup_o *)(ulong)uVar19;
          pUVar16 = (__this->fields)._pointsLeftLabel;
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iStack_2c = System_Math__Max_3cb7c30(0,0x140 - (iVar18 + iVar2 + iVar3 + uVar19),(MethodInfo *)0x0);
          pUVar13 = (UI_TooltipPopup_o *)System_Int32__ToString((int32_t)&iStack_2c,(MethodInfo *)0x0);
          ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)"Points left: ";
          pSVar14 = System_String__Concat_3ae5ba0
                              ((System_String_o *)"Points left: ",(System_String_o *)pUVar13,(MethodInfo *)0x0);
          if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar16->klass->vtable)._75_set_text.methodPtr)
                      (pUVar16,pSVar14,(pUVar16->klass->vtable)._75_set_text.method);
            return;
          }
        }
      }
    }
    else if (__this_02 != (UI_TooltipPopup_o *)0x0) {
      uVar19 = (*(int32_t *)((long)&(__this_02->fields).m_CachedPtr + 4) - iVar18) + 0x140;
      pUVar13 = (UI_TooltipPopup_o *)(ulong)uVar19;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_02,uVar19,MethodInfo_Void_set_Value);
      if (*(int32_t *)((long)&(__this_02->fields).m_CachedPtr + 4) < 0) {
        pSVar17 = (__this->fields).Speed;
        ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
        if (pSVar17 != (Settings_IntSetting_o *)0x0) {
          pSVar5 = pSVar17->klass;
          pUVar13 = (UI_TooltipPopup_o *)(pSVar5->vtable)._4_SetDefault.method;
          (*(pSVar5->vtable)._4_SetDefault.methodPtr)();
          pSVar17 = (__this->fields).Gas;
          ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
          if (pSVar17 != (Settings_IntSetting_o *)0x0) {
            pSVar5 = pSVar17->klass;
            pUVar13 = (UI_TooltipPopup_o *)(pSVar5->vtable)._4_SetDefault.method;
            (*(pSVar5->vtable)._4_SetDefault.methodPtr)();
            pSVar17 = (__this->fields).Ammunition;
            ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
            if (pSVar17 != (Settings_IntSetting_o *)0x0) {
              pSVar5 = pSVar17->klass;
              pUVar13 = (UI_TooltipPopup_o *)(pSVar5->vtable)._4_SetDefault.method;
              (*(pSVar5->vtable)._4_SetDefault.methodPtr)();
              pSVar17 = (__this->fields).Acceleration;
              ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
              if (pSVar17 != (Settings_IntSetting_o *)0x0) {
                (*(pSVar17->klass->vtable)._4_SetDefault.methodPtr)
                          (pSVar17,(pSVar17->klass->vtable)._4_SetDefault.method);
                goto label_043605f4;
              }
            }
          }
        }
      }
      else {
label_043605f4:
        pUVar13 = (UI_TooltipPopup_o *)(__this->klass->vtable)._23_SyncSettingElements.method;
        ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)__this;
        (*(__this->klass->vtable)._23_SyncSettingElements.methodPtr)();
        pSVar17 = (__this->fields).Speed;
        if (pSVar17 != (Settings_IntSetting_o *)0x0) goto label_04360617;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae19b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanStats);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae19b = '\x01';
  }
  bVar12 = System_String__op_Equality((System_String_o *)pUVar13,"Back",(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    (*(((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->klass->vtable)._22_Hide.methodPtr)
              (ppUVar20,(((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->klass->vtable)._22_Hide.method);
    return;
  }
  bVar12 = System_String__op_Equality((System_String_o *)pUVar13,"Save",(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    return;
  }
  lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar8 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar8 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    __this_02 = (UI_TooltipPopup_o *)
                Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (__this_02 != (UI_TooltipPopup_o *)0x0) {
      bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      if (((__this_02->klass->_2).naturalAligment < bVar1) ||
         ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) goto label_04360a15;
    }
    pCVar15 = (Characters_HumanStats_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanStats);
    Characters_HumanStats___ctor(pCVar15,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
    if ((__this_02 != (UI_TooltipPopup_o *)0x0) &&
       (pUVar9 = __this_02[1].fields.DoublePanelLeft, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
      str = pUVar9[1].klass;
      if (*(int *)(TypeInfo_HumanStats + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar15 = Characters_HumanStats__Deserialize(pCVar15,(System_String_o *)str,(MethodInfo *)0x0);
      pSVar17 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).Speed;
      if ((pSVar17 != (Settings_IntSetting_o *)0x0) && (pCVar15 != (Characters_HumanStats_o *)0x0)) {
        (pCVar15->fields).Speed = (pSVar17->fields)._value;
        pSVar17 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).Acceleration;
        if (pSVar17 != (Settings_IntSetting_o *)0x0) {
          (pCVar15->fields).Acceleration = (pSVar17->fields)._value;
          pSVar17 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).Gas;
          if (pSVar17 != (Settings_IntSetting_o *)0x0) {
            (pCVar15->fields).Gas = (pSVar17->fields)._value;
            pSVar17 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).Ammunition;
            if (pSVar17 != (Settings_IntSetting_o *)0x0) {
              (pCVar15->fields).Ammunition = (pSVar17->fields)._value;
              __this_01 = (Settings_TypedSetting_T__o *)__this_02[1].fields.DoublePanelLeft;
              pSVar14 = Characters_HumanStats__Serialize(pCVar15,(MethodInfo *)0x0);
              if (__this_01 != (Settings_TypedSetting_T__o *)0x0) {
                Settings_TypedSetting_object___set_Value(__this_01,(Il2CppObject *)pSVar14,MethodInfo_Void_set_Value);
                plVar10 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
                if (plVar10 != (long *)0x0) {
                  (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUVar13 = *(UI_TooltipPopup_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                  if (pUVar13 != (UI_TooltipPopup_o *)0x0) {
                    bVar1 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
                    __this_02 = pUVar13;
                    if ((bVar1 <= (pUVar13->klass->_2).naturalAligment) &&
                       ((pUVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorMenu)) {
                      pUVar11 = pUVar13->klass;
                      bVar1 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
                      if ((bVar1 <= (pUVar11->_2).naturalAligment) &&
                         ((pUVar11->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorMenu)) {
                        vtableDispatch = (pUVar11->vtable)._8_get_BorderHorizontalPadding.methodPtr;
                        (*vtableDispatch)
                                  (pUVar13,0,(pUVar11->vtable)._8_get_BorderHorizontalPadding.method,
                                   vtableDispatch);
                        return;
                      }
                    }
                    goto label_04360a15;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04360a15:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae19d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    g_data_057ae19d = '\x01';
  }
  pUVar16 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0((Settings_IntSetting_o *)pUVar16,0x50,0x32,100,(MethodInfo *)0x0);
  (__this_02->fields)._label = pUVar16;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._label,pUVar16);
  pSVar17 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar17,0x50,0x32,100,(MethodInfo *)0x0);
  (__this_02->fields)._panel = (UnityEngine_RectTransform_o *)pSVar17;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._panel,pSVar17);
  pSVar17 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar17,0x50,0x32,100,(MethodInfo *)0x0);
  (__this_02->fields).Caller = (UnityEngine_Component_o *)pSVar17;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).Caller,pSVar17);
  pSVar17 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar17,0x50,0x32,100,(MethodInfo *)0x0);
  *(Settings_IntSetting_o **)&(__this_02->fields)._offset = pSVar17;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._offset);
  UI_BasePopup___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_4
// il2cpp: void UI_CharacterEditorEditStatsPopup___Setup_b__17_4 (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x4360bf0

void UI_CharacterEditorEditStatsPopup___Setup_b__17_4
               (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_c *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  long lVar8;
  Settings_SetSettingsContainer_T__o *__this_00;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Transform_c *str;
  Settings_TypedSetting_T__o *__this_01;
  long *plVar10;
  UI_TooltipPopup_c *pUVar11;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar12;
  UI_TooltipPopup_o *pUVar13;
  System_String_o *pSVar14;
  UI_TooltipPopup_o *__this_02;
  Characters_HumanStats_o *pCVar15;
  UnityEngine_UI_Text_o *pUVar16;
  Settings_IntSetting_o *pSVar17;
  int iVar18;
  uint uVar19;
  UI_CharacterEditorEditStatsPopup_o **ppUVar20;
  int32_t iStack_2c;
  
  __this_02 = (UI_TooltipPopup_o *)(__this->fields).Gas;
  pUVar13 = __this_02;
  ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)__this;
  if (g_data_057ae19c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    ppUVar20 = &"Points left: ";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae19c = '\x01';
  }
  iStack_2c = 0;
  pSVar17 = (__this->fields).Speed;
  if ((((pSVar17 != (Settings_IntSetting_o *)0x0) &&
       (pSVar4 = (__this->fields).Gas, pSVar4 != (Settings_IntSetting_o *)0x0)) &&
      (pUVar13 = (UI_TooltipPopup_o *)(__this->fields).Ammunition, pUVar13 != (UI_TooltipPopup_o *)0x0)) &&
     (ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)(__this->fields).Acceleration,
     (UI_CharacterEditorEditStatsPopup_o *)ppUVar20 != (UI_CharacterEditorEditStatsPopup_o *)0x0)) {
    iVar18 = (pSVar17->fields)._value + (pSVar4->fields)._value +
             *(int32_t *)((long)&(pUVar13->fields).m_CachedPtr + 4) +
             *(int *)((long)&(((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).m_CachedPtr + 4);
    if (iVar18 < 0x141) {
label_04360617:
      pSVar4 = (__this->fields).Gas;
      if ((pSVar4 != (Settings_IntSetting_o *)0x0) &&
         (pSVar6 = (__this->fields).Ammunition, pSVar6 != (Settings_IntSetting_o *)0x0)) {
        pSVar7 = (__this->fields).Acceleration;
        pUVar13 = (UI_TooltipPopup_o *)0x0;
        if (pSVar7 != (Settings_IntSetting_o *)0x0) {
          iVar18 = (pSVar17->fields)._value;
          iVar2 = (pSVar4->fields)._value;
          iVar3 = (pSVar6->fields)._value;
          uVar19 = (pSVar7->fields)._value;
          __this_02 = (UI_TooltipPopup_o *)(ulong)uVar19;
          pUVar16 = (__this->fields)._pointsLeftLabel;
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iStack_2c = System_Math__Max_3cb7c30(0,0x140 - (iVar18 + iVar2 + iVar3 + uVar19),(MethodInfo *)0x0);
          pUVar13 = (UI_TooltipPopup_o *)System_Int32__ToString((int32_t)&iStack_2c,(MethodInfo *)0x0);
          ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)"Points left: ";
          pSVar14 = System_String__Concat_3ae5ba0
                              ((System_String_o *)"Points left: ",(System_String_o *)pUVar13,(MethodInfo *)0x0);
          if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar16->klass->vtable)._75_set_text.methodPtr)
                      (pUVar16,pSVar14,(pUVar16->klass->vtable)._75_set_text.method);
            return;
          }
        }
      }
    }
    else if (__this_02 != (UI_TooltipPopup_o *)0x0) {
      uVar19 = (*(int32_t *)((long)&(__this_02->fields).m_CachedPtr + 4) - iVar18) + 0x140;
      pUVar13 = (UI_TooltipPopup_o *)(ulong)uVar19;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_02,uVar19,MethodInfo_Void_set_Value);
      if (*(int32_t *)((long)&(__this_02->fields).m_CachedPtr + 4) < 0) {
        pSVar17 = (__this->fields).Speed;
        ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
        if (pSVar17 != (Settings_IntSetting_o *)0x0) {
          pSVar5 = pSVar17->klass;
          pUVar13 = (UI_TooltipPopup_o *)(pSVar5->vtable)._4_SetDefault.method;
          (*(pSVar5->vtable)._4_SetDefault.methodPtr)();
          pSVar17 = (__this->fields).Gas;
          ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
          if (pSVar17 != (Settings_IntSetting_o *)0x0) {
            pSVar5 = pSVar17->klass;
            pUVar13 = (UI_TooltipPopup_o *)(pSVar5->vtable)._4_SetDefault.method;
            (*(pSVar5->vtable)._4_SetDefault.methodPtr)();
            pSVar17 = (__this->fields).Ammunition;
            ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
            if (pSVar17 != (Settings_IntSetting_o *)0x0) {
              pSVar5 = pSVar17->klass;
              pUVar13 = (UI_TooltipPopup_o *)(pSVar5->vtable)._4_SetDefault.method;
              (*(pSVar5->vtable)._4_SetDefault.methodPtr)();
              pSVar17 = (__this->fields).Acceleration;
              ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
              if (pSVar17 != (Settings_IntSetting_o *)0x0) {
                (*(pSVar17->klass->vtable)._4_SetDefault.methodPtr)
                          (pSVar17,(pSVar17->klass->vtable)._4_SetDefault.method);
                goto label_043605f4;
              }
            }
          }
        }
      }
      else {
label_043605f4:
        pUVar13 = (UI_TooltipPopup_o *)(__this->klass->vtable)._23_SyncSettingElements.method;
        ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)__this;
        (*(__this->klass->vtable)._23_SyncSettingElements.methodPtr)();
        pSVar17 = (__this->fields).Speed;
        if (pSVar17 != (Settings_IntSetting_o *)0x0) goto label_04360617;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae19b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanStats);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae19b = '\x01';
  }
  bVar12 = System_String__op_Equality((System_String_o *)pUVar13,"Back",(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    (*(((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->klass->vtable)._22_Hide.methodPtr)
              (ppUVar20,(((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->klass->vtable)._22_Hide.method);
    return;
  }
  bVar12 = System_String__op_Equality((System_String_o *)pUVar13,"Save",(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    return;
  }
  lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar8 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar8 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    __this_02 = (UI_TooltipPopup_o *)
                Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (__this_02 != (UI_TooltipPopup_o *)0x0) {
      bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      if (((__this_02->klass->_2).naturalAligment < bVar1) ||
         ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) goto label_04360a15;
    }
    pCVar15 = (Characters_HumanStats_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanStats);
    Characters_HumanStats___ctor(pCVar15,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
    if ((__this_02 != (UI_TooltipPopup_o *)0x0) &&
       (pUVar9 = __this_02[1].fields.DoublePanelLeft, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
      str = pUVar9[1].klass;
      if (*(int *)(TypeInfo_HumanStats + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar15 = Characters_HumanStats__Deserialize(pCVar15,(System_String_o *)str,(MethodInfo *)0x0);
      pSVar17 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).Speed;
      if ((pSVar17 != (Settings_IntSetting_o *)0x0) && (pCVar15 != (Characters_HumanStats_o *)0x0)) {
        (pCVar15->fields).Speed = (pSVar17->fields)._value;
        pSVar17 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).Acceleration;
        if (pSVar17 != (Settings_IntSetting_o *)0x0) {
          (pCVar15->fields).Acceleration = (pSVar17->fields)._value;
          pSVar17 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).Gas;
          if (pSVar17 != (Settings_IntSetting_o *)0x0) {
            (pCVar15->fields).Gas = (pSVar17->fields)._value;
            pSVar17 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).Ammunition;
            if (pSVar17 != (Settings_IntSetting_o *)0x0) {
              (pCVar15->fields).Ammunition = (pSVar17->fields)._value;
              __this_01 = (Settings_TypedSetting_T__o *)__this_02[1].fields.DoublePanelLeft;
              pSVar14 = Characters_HumanStats__Serialize(pCVar15,(MethodInfo *)0x0);
              if (__this_01 != (Settings_TypedSetting_T__o *)0x0) {
                Settings_TypedSetting_object___set_Value(__this_01,(Il2CppObject *)pSVar14,MethodInfo_Void_set_Value);
                plVar10 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
                if (plVar10 != (long *)0x0) {
                  (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUVar13 = *(UI_TooltipPopup_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                  if (pUVar13 != (UI_TooltipPopup_o *)0x0) {
                    bVar1 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
                    __this_02 = pUVar13;
                    if ((bVar1 <= (pUVar13->klass->_2).naturalAligment) &&
                       ((pUVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorMenu)) {
                      pUVar11 = pUVar13->klass;
                      bVar1 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
                      if ((bVar1 <= (pUVar11->_2).naturalAligment) &&
                         ((pUVar11->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorMenu)) {
                        vtableDispatch = (pUVar11->vtable)._8_get_BorderHorizontalPadding.methodPtr;
                        (*vtableDispatch)
                                  (pUVar13,0,(pUVar11->vtable)._8_get_BorderHorizontalPadding.method,
                                   vtableDispatch);
                        return;
                      }
                    }
                    goto label_04360a15;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04360a15:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae19d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    g_data_057ae19d = '\x01';
  }
  pUVar16 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0((Settings_IntSetting_o *)pUVar16,0x50,0x32,100,(MethodInfo *)0x0);
  (__this_02->fields)._label = pUVar16;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._label,pUVar16);
  pSVar17 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar17,0x50,0x32,100,(MethodInfo *)0x0);
  (__this_02->fields)._panel = (UnityEngine_RectTransform_o *)pSVar17;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._panel,pSVar17);
  pSVar17 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar17,0x50,0x32,100,(MethodInfo *)0x0);
  (__this_02->fields).Caller = (UnityEngine_Component_o *)pSVar17;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).Caller,pSVar17);
  pSVar17 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar17,0x50,0x32,100,(MethodInfo *)0x0);
  *(Settings_IntSetting_o **)&(__this_02->fields)._offset = pSVar17;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._offset);
  UI_BasePopup___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditStatsPopup$$<Setup>b__17_5
// il2cpp: void UI_CharacterEditorEditStatsPopup___Setup_b__17_5 (UI_CharacterEditorEditStatsPopup_o* __this, const MethodInfo* method);
// 0x4360c00

void UI_CharacterEditorEditStatsPopup___Setup_b__17_5
               (UI_CharacterEditorEditStatsPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_c *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  long lVar8;
  Settings_SetSettingsContainer_T__o *__this_00;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Transform_c *str;
  Settings_TypedSetting_T__o *__this_01;
  long *plVar10;
  UI_TooltipPopup_c *pUVar11;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar12;
  UI_TooltipPopup_o *pUVar13;
  System_String_o *pSVar14;
  UI_TooltipPopup_o *__this_02;
  Characters_HumanStats_o *pCVar15;
  UnityEngine_UI_Text_o *pUVar16;
  Settings_IntSetting_o *pSVar17;
  int iVar18;
  uint uVar19;
  UI_CharacterEditorEditStatsPopup_o **ppUVar20;
  int32_t iStack_2c;
  
  __this_02 = (UI_TooltipPopup_o *)(__this->fields).Ammunition;
  pUVar13 = __this_02;
  ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)__this;
  if (g_data_057ae19c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    ppUVar20 = &"Points left: ";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae19c = '\x01';
  }
  iStack_2c = 0;
  pSVar17 = (__this->fields).Speed;
  if ((((pSVar17 != (Settings_IntSetting_o *)0x0) &&
       (pSVar4 = (__this->fields).Gas, pSVar4 != (Settings_IntSetting_o *)0x0)) &&
      (pUVar13 = (UI_TooltipPopup_o *)(__this->fields).Ammunition, pUVar13 != (UI_TooltipPopup_o *)0x0)) &&
     (ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)(__this->fields).Acceleration,
     (UI_CharacterEditorEditStatsPopup_o *)ppUVar20 != (UI_CharacterEditorEditStatsPopup_o *)0x0)) {
    iVar18 = (pSVar17->fields)._value + (pSVar4->fields)._value +
             *(int32_t *)((long)&(pUVar13->fields).m_CachedPtr + 4) +
             *(int *)((long)&(((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).m_CachedPtr + 4);
    if (iVar18 < 0x141) {
label_04360617:
      pSVar4 = (__this->fields).Gas;
      if ((pSVar4 != (Settings_IntSetting_o *)0x0) &&
         (pSVar6 = (__this->fields).Ammunition, pSVar6 != (Settings_IntSetting_o *)0x0)) {
        pSVar7 = (__this->fields).Acceleration;
        pUVar13 = (UI_TooltipPopup_o *)0x0;
        if (pSVar7 != (Settings_IntSetting_o *)0x0) {
          iVar18 = (pSVar17->fields)._value;
          iVar2 = (pSVar4->fields)._value;
          iVar3 = (pSVar6->fields)._value;
          uVar19 = (pSVar7->fields)._value;
          __this_02 = (UI_TooltipPopup_o *)(ulong)uVar19;
          pUVar16 = (__this->fields)._pointsLeftLabel;
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iStack_2c = System_Math__Max_3cb7c30(0,0x140 - (iVar18 + iVar2 + iVar3 + uVar19),(MethodInfo *)0x0);
          pUVar13 = (UI_TooltipPopup_o *)System_Int32__ToString((int32_t)&iStack_2c,(MethodInfo *)0x0);
          ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)"Points left: ";
          pSVar14 = System_String__Concat_3ae5ba0
                              ((System_String_o *)"Points left: ",(System_String_o *)pUVar13,(MethodInfo *)0x0);
          if (pUVar16 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar16->klass->vtable)._75_set_text.methodPtr)
                      (pUVar16,pSVar14,(pUVar16->klass->vtable)._75_set_text.method);
            return;
          }
        }
      }
    }
    else if (__this_02 != (UI_TooltipPopup_o *)0x0) {
      uVar19 = (*(int32_t *)((long)&(__this_02->fields).m_CachedPtr + 4) - iVar18) + 0x140;
      pUVar13 = (UI_TooltipPopup_o *)(ulong)uVar19;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_02,uVar19,MethodInfo_Void_set_Value);
      if (*(int32_t *)((long)&(__this_02->fields).m_CachedPtr + 4) < 0) {
        pSVar17 = (__this->fields).Speed;
        ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
        if (pSVar17 != (Settings_IntSetting_o *)0x0) {
          pSVar5 = pSVar17->klass;
          pUVar13 = (UI_TooltipPopup_o *)(pSVar5->vtable)._4_SetDefault.method;
          (*(pSVar5->vtable)._4_SetDefault.methodPtr)();
          pSVar17 = (__this->fields).Gas;
          ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
          if (pSVar17 != (Settings_IntSetting_o *)0x0) {
            pSVar5 = pSVar17->klass;
            pUVar13 = (UI_TooltipPopup_o *)(pSVar5->vtable)._4_SetDefault.method;
            (*(pSVar5->vtable)._4_SetDefault.methodPtr)();
            pSVar17 = (__this->fields).Ammunition;
            ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
            if (pSVar17 != (Settings_IntSetting_o *)0x0) {
              pSVar5 = pSVar17->klass;
              pUVar13 = (UI_TooltipPopup_o *)(pSVar5->vtable)._4_SetDefault.method;
              (*(pSVar5->vtable)._4_SetDefault.methodPtr)();
              pSVar17 = (__this->fields).Acceleration;
              ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)0x0;
              if (pSVar17 != (Settings_IntSetting_o *)0x0) {
                (*(pSVar17->klass->vtable)._4_SetDefault.methodPtr)
                          (pSVar17,(pSVar17->klass->vtable)._4_SetDefault.method);
                goto label_043605f4;
              }
            }
          }
        }
      }
      else {
label_043605f4:
        pUVar13 = (UI_TooltipPopup_o *)(__this->klass->vtable)._23_SyncSettingElements.method;
        ppUVar20 = (UI_CharacterEditorEditStatsPopup_o **)__this;
        (*(__this->klass->vtable)._23_SyncSettingElements.methodPtr)();
        pSVar17 = (__this->fields).Speed;
        if (pSVar17 != (Settings_IntSetting_o *)0x0) goto label_04360617;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae19b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanStats);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae19b = '\x01';
  }
  bVar12 = System_String__op_Equality((System_String_o *)pUVar13,"Back",(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    (*(((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->klass->vtable)._22_Hide.methodPtr)
              (ppUVar20,(((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->klass->vtable)._22_Hide.method);
    return;
  }
  bVar12 = System_String__op_Equality((System_String_o *)pUVar13,"Save",(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    return;
  }
  lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar8 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar8 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    __this_02 = (UI_TooltipPopup_o *)
                Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (__this_02 != (UI_TooltipPopup_o *)0x0) {
      bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      if (((__this_02->klass->_2).naturalAligment < bVar1) ||
         ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) goto label_04360a15;
    }
    pCVar15 = (Characters_HumanStats_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanStats);
    Characters_HumanStats___ctor(pCVar15,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
    if ((__this_02 != (UI_TooltipPopup_o *)0x0) &&
       (pUVar9 = __this_02[1].fields.DoublePanelLeft, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
      str = pUVar9[1].klass;
      if (*(int *)(TypeInfo_HumanStats + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar15 = Characters_HumanStats__Deserialize(pCVar15,(System_String_o *)str,(MethodInfo *)0x0);
      pSVar17 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).Speed;
      if ((pSVar17 != (Settings_IntSetting_o *)0x0) && (pCVar15 != (Characters_HumanStats_o *)0x0)) {
        (pCVar15->fields).Speed = (pSVar17->fields)._value;
        pSVar17 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).Acceleration;
        if (pSVar17 != (Settings_IntSetting_o *)0x0) {
          (pCVar15->fields).Acceleration = (pSVar17->fields)._value;
          pSVar17 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).Gas;
          if (pSVar17 != (Settings_IntSetting_o *)0x0) {
            (pCVar15->fields).Gas = (pSVar17->fields)._value;
            pSVar17 = (((UI_CharacterEditorEditStatsPopup_o *)ppUVar20)->fields).Ammunition;
            if (pSVar17 != (Settings_IntSetting_o *)0x0) {
              (pCVar15->fields).Ammunition = (pSVar17->fields)._value;
              __this_01 = (Settings_TypedSetting_T__o *)__this_02[1].fields.DoublePanelLeft;
              pSVar14 = Characters_HumanStats__Serialize(pCVar15,(MethodInfo *)0x0);
              if (__this_01 != (Settings_TypedSetting_T__o *)0x0) {
                Settings_TypedSetting_object___set_Value(__this_01,(Il2CppObject *)pSVar14,MethodInfo_Void_set_Value);
                plVar10 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
                if (plVar10 != (long *)0x0) {
                  (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUVar13 = *(UI_TooltipPopup_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                  if (pUVar13 != (UI_TooltipPopup_o *)0x0) {
                    bVar1 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
                    __this_02 = pUVar13;
                    if ((bVar1 <= (pUVar13->klass->_2).naturalAligment) &&
                       ((pUVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorMenu)) {
                      pUVar11 = pUVar13->klass;
                      bVar1 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
                      if ((bVar1 <= (pUVar11->_2).naturalAligment) &&
                         ((pUVar11->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorMenu)) {
                        vtableDispatch = (pUVar11->vtable)._8_get_BorderHorizontalPadding.methodPtr;
                        (*vtableDispatch)
                                  (pUVar13,0,(pUVar11->vtable)._8_get_BorderHorizontalPadding.method,
                                   vtableDispatch);
                        return;
                      }
                    }
                    goto label_04360a15;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04360a15:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae19d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    g_data_057ae19d = '\x01';
  }
  pUVar16 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0((Settings_IntSetting_o *)pUVar16,0x50,0x32,100,(MethodInfo *)0x0);
  (__this_02->fields)._label = pUVar16;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._label,pUVar16);
  pSVar17 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar17,0x50,0x32,100,(MethodInfo *)0x0);
  (__this_02->fields)._panel = (UnityEngine_RectTransform_o *)pSVar17;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._panel,pSVar17);
  pSVar17 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar17,0x50,0x32,100,(MethodInfo *)0x0);
  (__this_02->fields).Caller = (UnityEngine_Component_o *)pSVar17;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).Caller,pSVar17);
  pSVar17 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar17,0x50,0x32,100,(MethodInfo *)0x0);
  *(Settings_IntSetting_o **)&(__this_02->fields)._offset = pSVar17;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._offset);
  UI_BasePopup___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


