// Type: UI.MapEditorCustomLogicPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorCustomLogicPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorCustomLogicPopup.cs
// --------------------------------

// UI.MapEditorCustomLogicPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorCustomLogicPopup__get_Title (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x4425b80

System_String_o *
UI_MapEditorCustomLogicPopup__get_Title(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae661 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Custom Logic");
    g_data_057ae661 = '\x01';
  }
  return "Custom Logic";
}


// UI.MapEditorCustomLogicPopup$$get_Width
// il2cpp: float UI_MapEditorCustomLogicPopup__get_Width (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x4425bb0

float UI_MapEditorCustomLogicPopup__get_Width(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.MapEditorCustomLogicPopup$$get_Height
// il2cpp: float UI_MapEditorCustomLogicPopup__get_Height (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x4425bc0

float UI_MapEditorCustomLogicPopup__get_Height(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  return 585.0;
}


// UI.MapEditorCustomLogicPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorCustomLogicPopup__get_VerticalPadding (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x4425bd0

int32_t UI_MapEditorCustomLogicPopup__get_VerticalPadding
                  (UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MapEditorCustomLogicPopup$$get_VerticalSpacing
// il2cpp: float UI_MapEditorCustomLogicPopup__get_VerticalSpacing (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x4425be0

float UI_MapEditorCustomLogicPopup__get_VerticalSpacing
                (UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.MapEditorCustomLogicPopup$$Setup
// il2cpp: void UI_MapEditorCustomLogicPopup__Setup (UI_MapEditorCustomLogicPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4425bf0

void UI_MapEditorCustomLogicPopup__Setup
               (UI_MapEditorCustomLogicPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *pUVar2;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  UnityEngine_Object_o *pUVar3;
  long lVar4;
  System_Threading_CancellationTokenSource_o *pSVar5;
  System_Threading_CancellationTokenSource_c *pSVar6;
  code *vtableDispatch;
  undefined8 uVar7;
  UnityEngine_GameObject_c *pUVar8;
  undefined8 uVar9;
  void *pvVar10;
  System_String_c *pSVar11;
  UI_MapEditorTopPanel_o *__this_00;
  int32_t iVar12;
  bool_conflict bVar13;
  System_String_o *pSVar14;
  UI_ElementStyle_o *pUVar15;
  UnityEngine_Events_UnityAction_o *pUVar16;
  UnityEngine_GameObject_o *pUVar17;
  UnityEngine_UI_Text_o *pUVar18;
  Il2CppClass *__this_01;
  Il2CppClass *a;
  UnityEngine_GameObject_o *pUVar19;
  CustomLogic_CustomLogicEvaluator_o *pCVar20;
  Settings_StringSetting_o *__this_02;
  undefined8 extraout_RDX;
  UI_BasePopup_o *__this_03;
  
  if (g_data_057ae662 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__14_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__14_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae662 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  iVar12 = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                     (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar14 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar15 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar15,iVar12,130.0,20.0,pSVar14,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar16 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar2,pUVar15,pSVar14,0.0,pUVar16,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  pSVar14 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar16 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar2,pUVar15,pSVar14,0.0,pUVar16,(MethodInfo *)0x0);
  __this_03 = (UI_BasePopup_o *)(__this->fields).SinglePanel;
  pUVar17 = UI_ElementFactory__CreateDefaultLabel
                      ((UnityEngine_Transform_o *)__this_03,pUVar15,(System_String_o *)"",0,4,
                       (MethodInfo *)0x0);
  if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
    pUVar18 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar17,MethodInfo_Text_GetComponent_Text);
    (__this->fields)._error = pUVar18;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._error,pUVar18);
    pUVar18 = (__this->fields)._error;
    __this_03 = (UI_BasePopup_o *)0x0;
    if (pUVar18 != (UnityEngine_UI_Text_o *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = (pUVar18->klass->vtable)._23_set_color.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (0x3f800000,0,pUVar18,(pUVar18->klass->vtable)._23_set_color.method,extraout_RDX,
                 UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae663 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae663 = '\x01';
  }
  __this_01 = TypeInfo_MapEditorGameManager;
  pUVar17 = *(UnityEngine_GameObject_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pUVar17 == (UnityEngine_GameObject_o *)0x0) {
    __this_03[1].fields.m_CachedPtr = 0;
label_04425f36:
    il2cpp_runtime_helper_022b4080(&__this_03[1].fields);
    pUVar3 = __this_03[1].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar13 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      pUVar3 = __this_03[1].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
    }
    iVar12 = (*(__this_03->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this_03,(__this_03->klass->vtable)._41_get_ButtonFontSize.method);
    pSVar14 = (System_String_o *)
              (*(__this_03->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this_03,(__this_03->klass->vtable)._4_get_ThemePanel.method);
    pUVar15 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(pUVar15,iVar12,130.0,20.0,pSVar14,(MethodInfo *)0x0);
    pUVar17 = (UnityEngine_GameObject_o *)0x0;
    UI_BasePopup__Show(__this_03,(MethodInfo *)0x0);
    lVar4 = __this_03[1].fields.m_CachedPtr;
    if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x28), lVar4 != 0)) &&
       (__this_03[1].klass != (UI_BasePopup_c *)0x0)) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_03[1].klass,*(Il2CppObject **)(lVar4 + 0x40),
                 MethodInfo_Void_set_Value);
      pUVar17 = UI_ElementFactory__CreateInputSetting
                          ((__this_03->fields).SinglePanel,pUVar15,
                           (Settings_BaseSetting_o *)__this_03[1].klass,(System_String_o *)"",
                           (System_String_o *)"",450.0,400.0,1,
                           (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                           (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                           (MethodInfo *)0x0);
      __this_03[1].monitor = pUVar17;
      il2cpp_runtime_helper_022b4080(&__this_03[1].monitor);
      pSVar5 = __this_03[1].fields.m_CancellationTokenSource;
      if (pSVar5 != (System_Threading_CancellationTokenSource_o *)0x0) {
        pSVar6 = pSVar5->klass;
        vtableDispatch = *(code **)&pSVar6[3]._2.field_count;
        uVar7._0_2_ = pSVar6[3]._2.interfaces_count;
        uVar7._2_2_ = pSVar6[3]._2.interface_offsets_count;
        uVar7._4_1_ = pSVar6[3]._2.typeHierarchyDepth;
        uVar7._5_1_ = pSVar6[3]._2.genericRecursionDepth;
        uVar7._6_1_ = pSVar6[3]._2.rank;
        uVar7._7_1_ = pSVar6[3]._2.minimumAlignment;
        (*vtableDispatch)(pSVar5,"",uVar7,vtableDispatch);
        return;
      }
    }
    __this_01 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
    if ((bVar1 <= (pUVar17->klass->_2).naturalAligment) &&
       ((pUVar17->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MapEditorGameManager)) {
      __this_03[1].fields.m_CachedPtr = (intptr_t)pUVar17;
      if ((bVar1 <= (pUVar17->klass->_2).naturalAligment) &&
         ((pUVar17->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == __this_01)) goto label_04425f36;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae664 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae664 = '\x01';
  }
  bVar13 = System_String__op_Equality((System_String_o *)__this_01,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') goto label_04426188;
  bVar13 = System_String__op_Equality((System_String_o *)__this_01,"Save",(MethodInfo *)0x0);
  a = "";
  if ((char)bVar13 == '\0') {
    return;
  }
  if (pUVar17[7].klass != (UnityEngine_GameObject_c *)0x0) {
    __this_01 = (Il2CppClass *)((pUVar17[7].klass)->_1).namespaze;
    bVar13 = System_String__op_Inequality
                       ((System_String_o *)__this_01,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8)
                        ,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      if (pUVar17[7].klass == (UnityEngine_GameObject_c *)0x0) goto label_044264b4;
      pSVar14 = (System_String_o *)((pUVar17[7].klass)->_1).namespaze;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      a = (Il2CppClass *)CustomLogic_CustomLogicManager__TryParseLogic(pSVar14,(MethodInfo *)0x0);
    }
    __this_01 = a;
    bVar13 = System_String__op_Inequality
                       ((System_String_o *)a,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                        (MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      lVar4 = pUVar17[7].fields.m_CachedPtr;
      if ((lVar4 != 0) && (pUVar17[7].klass != (UnityEngine_GameObject_c *)0x0)) {
        lVar4 = *(long *)(lVar4 + 0x28);
        __this_01 = (Il2CppClass *)0x0;
        if (lVar4 != 0) {
          *(char **)(lVar4 + 0x40) = ((pUVar17[7].klass)->_1).namespaze;
          __this_01 = (Il2CppClass *)(lVar4 + 0x40);
          il2cpp_runtime_helper_022b4080();
          if (pUVar17[7].klass != (UnityEngine_GameObject_c *)0x0) {
            lVar4 = pUVar17[7].fields.m_CachedPtr;
            __this_01 = (Il2CppClass *)((pUVar17[7].klass)->_1).namespaze;
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar20 = CustomLogic_CustomLogicManager__GetEditorEvaluator
                                ((System_String_o *)__this_01,1,(MethodInfo *)0x0);
            if (lVar4 != 0) {
              *(CustomLogic_CustomLogicEvaluator_o **)(lVar4 + 0x30) = pCVar20;
              il2cpp_runtime_helper_022b4080(lVar4 + 0x30,pCVar20);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this_01 = *(Il2CppClass **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              if (__this_01 != (Il2CppClass *)0x0) {
                pSVar11 = (__this_01->_1).image;
                bVar1 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
                if (((pSVar11->_2).naturalAligment < bVar1) ||
                   ((pSVar11->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MapEditorMenu)) goto label_044264b9;
                __this_00 = (UI_MapEditorTopPanel_o *)(__this_01->_1).interfaceOffsets;
                __this_01 = (Il2CppClass *)0x0;
                if (__this_00 != (UI_MapEditorTopPanel_o *)0x0) {
                  UI_MapEditorTopPanel__Save(__this_00,(MethodInfo *)TypeInfo_MapEditorMenu);
label_04426188:
                  pUVar8 = pUVar17->klass;
                  uVar9._0_2_ = pUVar8[1]._2.interfaces_count;
                  uVar9._2_2_ = pUVar8[1]._2.interface_offsets_count;
                  uVar9._4_1_ = pUVar8[1]._2.typeHierarchyDepth;
                  uVar9._5_1_ = pUVar8[1]._2.genericRecursionDepth;
                  uVar9._6_1_ = pUVar8[1]._2.rank;
                  uVar9._7_1_ = pUVar8[1]._2.minimumAlignment;
                  (**(code **)&pUVar8[1]._2.field_count)(pUVar17,uVar9);
                  return;
                }
              }
            }
          }
        }
      }
    }
    else {
      pUVar8 = pUVar17[8].klass;
      __this_01 = (Il2CppClass *)0x0;
      if (pUVar8 != (UnityEngine_GameObject_c *)0x0) {
        pvVar10 = (pUVar8->_1).image;
        (**(code **)((long)pvVar10 + 0x5e8))(pUVar8,a,*(undefined8 *)((long)pvVar10 + 0x5f0));
        pUVar3 = pUVar17[7].monitor;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar13 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar13 != '\0') {
          pUVar3 = pUVar17[7].monitor;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
        }
        iVar12 = (**(code **)&pUVar17->klass[2]._2.initializationExceptionGCHandle)
                           (pUVar17,*(undefined8 *)&pUVar17->klass[2]._2.cctor_finished);
        pSVar14 = (System_String_o *)(*pUVar17->klass[1]._1.image)(pUVar17,pUVar17->klass[1]._1.gc_desc);
        pUVar15 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
        UI_ElementStyle___ctor(pUVar15,iVar12,130.0,20.0,pSVar14,(MethodInfo *)0x0);
        pUVar19 = UI_ElementFactory__CreateInputSetting
                            (pUVar17[1].monitor,pUVar15,(Settings_BaseSetting_o *)pUVar17[7].klass,
                             (System_String_o *)"",(System_String_o *)"",450.0,400.0,1,
                             (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                             (MethodInfo *)0x0);
        pUVar17[7].monitor = pUVar19;
        il2cpp_runtime_helper_022b4080(&pUVar17[7].monitor,pUVar19);
        return;
      }
    }
  }
label_044264b4:
  il2cpp_runtime_helper_022b2c90();
label_044264b9:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae665 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae665 = '\x01';
  }
  pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_02 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_02,pSVar14,0x7fffffff,(MethodInfo *)0x0);
  (__this_01->_1).implementedInterfaces = (Il2CppClass **)__this_02;
  il2cpp_runtime_helper_022b4080(&(__this_01->_1).implementedInterfaces);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCustomLogicPopup$$Show
// il2cpp: void UI_MapEditorCustomLogicPopup__Show (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x4425e40

void UI_MapEditorCustomLogicPopup__Show(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  float *pfVar2;
  byte bVar3;
  UnityEngine_Object_o *pUVar4;
  GameManagers_MapEditorGameManager_o *pGVar5;
  Map_MapScript_o *pMVar6;
  UnityEngine_UI_Text_o *pUVar7;
  Il2CppMethodPointer vtableDispatch;
  long lVar8;
  GameManagers_MapEditorGameManager_c *pGVar9;
  void *pvVar10;
  long lVar11;
  System_String_c *pSVar12;
  UI_MapEditorTopPanel_o *__this_00;
  bool_conflict bVar13;
  int32_t iVar14;
  System_String_o *pSVar15;
  UI_ElementStyle_o *pUVar16;
  GameManagers_MapEditorGameManager_o *pGVar17;
  Il2CppClass *__this_01;
  Il2CppClass *a;
  UnityEngine_GameObject_o *pUVar18;
  CustomLogic_CustomLogicEvaluator_o *pCVar19;
  Settings_StringSetting_o *pSVar20;
  
  if (g_data_057ae663 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae663 = '\x01';
  }
  __this_01 = TypeInfo_MapEditorGameManager;
  pGVar17 = *(GameManagers_MapEditorGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pGVar17 == (GameManagers_MapEditorGameManager_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
label_04425f36:
    il2cpp_runtime_helper_022b4080(&(__this->fields)._gameManager);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._logicInput;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ppUVar1 = &(__this->fields)._logicInput;
    bVar13 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      pUVar4 = (UnityEngine_Object_o *)*ppUVar1;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(pUVar4,(MethodInfo *)0x0);
    }
    iVar14 = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
    pSVar15 = (System_String_o *)
              (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUVar16 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(pUVar16,iVar14,130.0,20.0,pSVar15,(MethodInfo *)0x0);
    pGVar17 = (GameManagers_MapEditorGameManager_o *)0x0;
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    pGVar5 = (__this->fields)._gameManager;
    if (((pGVar5 != (GameManagers_MapEditorGameManager_o *)0x0) &&
        (pMVar6 = (pGVar5->fields).MapScript, pMVar6 != (Map_MapScript_o *)0x0)) &&
       (pSVar20 = (__this->fields)._logic, pSVar20 != (Settings_StringSetting_o *)0x0)) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar20,(Il2CppObject *)(pMVar6->fields).Logic,MethodInfo_Void_set_Value);
      pGVar17 = (GameManagers_MapEditorGameManager_o *)
                UI_ElementFactory__CreateInputSetting
                          ((__this->fields).SinglePanel,pUVar16,
                           (Settings_BaseSetting_o *)(__this->fields)._logic,(System_String_o *)"",
                           (System_String_o *)"",450.0,400.0,1,
                           (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                           (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                           (MethodInfo *)0x0);
      (__this->fields)._logicInput = (UnityEngine_GameObject_o *)pGVar17;
      il2cpp_runtime_helper_022b4080(ppUVar1);
      pUVar7 = (__this->fields)._error;
      if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
        vtableDispatch = (pUVar7->klass->vtable)._75_set_text.methodPtr;
        (*vtableDispatch)
                  (pUVar7,"",(pUVar7->klass->vtable)._75_set_text.method,vtableDispatch);
        return;
      }
    }
    __this_01 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar3 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
    if ((bVar3 <= (pGVar17->klass->_2).naturalAligment) &&
       ((pGVar17->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_MapEditorGameManager)) {
      (__this->fields)._gameManager = pGVar17;
      if ((bVar3 <= (pGVar17->klass->_2).naturalAligment) &&
         ((pGVar17->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == __this_01)) goto label_04425f36;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae664 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae664 = '\x01';
  }
  bVar13 = System_String__op_Equality((System_String_o *)__this_01,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') goto label_04426188;
  bVar13 = System_String__op_Equality((System_String_o *)__this_01,"Save",(MethodInfo *)0x0);
  a = "";
  if ((char)bVar13 == '\0') {
    return;
  }
  lVar8 = *(long *)&(pGVar17->fields)._isDrag;
  if (lVar8 != 0) {
    __this_01 = *(Il2CppClass **)(lVar8 + 0x18);
    bVar13 = System_String__op_Inequality
                       ((System_String_o *)__this_01,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8)
                        ,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      lVar8 = *(long *)&(pGVar17->fields)._isDrag;
      if (lVar8 == 0) goto label_044264b4;
      pSVar15 = *(System_String_o **)(lVar8 + 0x18);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      a = (Il2CppClass *)CustomLogic_CustomLogicManager__TryParseLogic(pSVar15,(MethodInfo *)0x0);
    }
    __this_01 = a;
    bVar13 = System_String__op_Inequality
                       ((System_String_o *)a,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                        (MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      lVar8 = *(long *)&(pGVar17->fields)._lightsOn;
      if ((lVar8 != 0) && (lVar11 = *(long *)&(pGVar17->fields)._isDrag, lVar11 != 0)) {
        lVar8 = *(long *)(lVar8 + 0x28);
        __this_01 = (Il2CppClass *)0x0;
        if (lVar8 != 0) {
          *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)(lVar11 + 0x18);
          __this_01 = (Il2CppClass *)(lVar8 + 0x40);
          il2cpp_runtime_helper_022b4080();
          lVar8 = *(long *)&(pGVar17->fields)._isDrag;
          if (lVar8 != 0) {
            lVar11 = *(long *)&(pGVar17->fields)._lightsOn;
            __this_01 = *(Il2CppClass **)(lVar8 + 0x18);
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar19 = CustomLogic_CustomLogicManager__GetEditorEvaluator
                                ((System_String_o *)__this_01,1,(MethodInfo *)0x0);
            if (lVar11 != 0) {
              *(CustomLogic_CustomLogicEvaluator_o **)(lVar11 + 0x30) = pCVar19;
              il2cpp_runtime_helper_022b4080(lVar11 + 0x30,pCVar19);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this_01 = *(Il2CppClass **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              if (__this_01 != (Il2CppClass *)0x0) {
                pSVar12 = (__this_01->_1).image;
                bVar3 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
                if (((pSVar12->_2).naturalAligment < bVar3) ||
                   ((pSVar12->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_MapEditorMenu)) goto label_044264b9;
                __this_00 = (UI_MapEditorTopPanel_o *)(__this_01->_1).interfaceOffsets;
                __this_01 = (Il2CppClass *)0x0;
                if (__this_00 != (UI_MapEditorTopPanel_o *)0x0) {
                  UI_MapEditorTopPanel__Save(__this_00,(MethodInfo *)TypeInfo_MapEditorMenu);
label_04426188:
                  (*(pGVar17->klass->vtable)._22_unknown.methodPtr)
                            (pGVar17,(pGVar17->klass->vtable)._22_unknown.method);
                  return;
                }
              }
            }
          }
        }
      }
    }
    else {
      pGVar9 = pGVar17[1].klass;
      __this_01 = (Il2CppClass *)0x0;
      if (pGVar9 != (GameManagers_MapEditorGameManager_c *)0x0) {
        pvVar10 = (pGVar9->_1).image;
        (**(code **)((long)pvVar10 + 0x5e8))(pGVar9,a,*(undefined8 *)((long)pvVar10 + 0x5f0));
        pUVar4 = *(UnityEngine_Object_o **)&(pGVar17->fields)._dragStart.fields.y;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pfVar2 = &(pGVar17->fields)._dragStart.fields.y;
        bVar13 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar13 != '\0') {
          pUVar4 = *(UnityEngine_Object_o **)pfVar2;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Object__Destroy_4e01c60(pUVar4,(MethodInfo *)0x0);
        }
        iVar14 = (*(pGVar17->klass->vtable)._41_OnJoinedRoom.methodPtr)
                           (pGVar17,(pGVar17->klass->vtable)._41_OnJoinedRoom.method);
        pSVar15 = (System_String_o *)
                  (*(pGVar17->klass->vtable)._4_unknown.methodPtr)
                            (pGVar17,(pGVar17->klass->vtable)._4_unknown.method);
        pUVar16 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
        UI_ElementStyle___ctor(pUVar16,iVar14,130.0,20.0,pSVar15,(MethodInfo *)0x0);
        pUVar18 = UI_ElementFactory__CreateInputSetting
                            ((UnityEngine_Transform_o *)(pGVar17->fields).pvCache,pUVar16,
                             *(Settings_BaseSetting_o **)&(pGVar17->fields)._isDrag,
                             (System_String_o *)"",(System_String_o *)"",450.0,400.0,1,
                             (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                             (MethodInfo *)0x0);
        *(UnityEngine_GameObject_o **)&(pGVar17->fields)._dragStart.fields.y = pUVar18;
        il2cpp_runtime_helper_022b4080(pfVar2,pUVar18);
        return;
      }
    }
  }
label_044264b4:
  il2cpp_runtime_helper_022b2c90();
label_044264b9:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae665 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae665 = '\x01';
  }
  pSVar15 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar20 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar20,pSVar15,0x7fffffff,(MethodInfo *)0x0);
  (__this_01->_1).implementedInterfaces = (Il2CppClass **)pSVar20;
  il2cpp_runtime_helper_022b4080(&(__this_01->_1).implementedInterfaces);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCustomLogicPopup$$OnButtonClick
// il2cpp: void UI_MapEditorCustomLogicPopup__OnButtonClick (UI_MapEditorCustomLogicPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x44260e0

void UI_MapEditorCustomLogicPopup__OnButtonClick
               (UI_MapEditorCustomLogicPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  byte bVar2;
  Settings_StringSetting_o *pSVar3;
  UnityEngine_Object_o *pUVar4;
  GameManagers_MapEditorGameManager_o *pGVar5;
  Map_MapScript_o *pMVar6;
  UI_MapEditorTopPanel_o *__this_00;
  bool_conflict bVar7;
  int32_t fontSize;
  UI_TooltipPopup_o *a;
  System_String_o *pSVar8;
  UI_ElementStyle_o *__this_01;
  UnityEngine_GameObject_o *pUVar9;
  CustomLogic_CustomLogicEvaluator_o *pCVar10;
  UnityEngine_UI_Text_o *pUVar11;
  
  if (g_data_057ae664 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae664 = '\x01';
  }
  bVar7 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') goto label_04426188;
  bVar7 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  a = "";
  if ((char)bVar7 == '\0') {
    return;
  }
  pSVar3 = (__this->fields)._logic;
  if (pSVar3 != (Settings_StringSetting_o *)0x0) {
    name = (pSVar3->fields)._value;
    bVar7 = System_String__op_Inequality
                      (name,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      pSVar3 = (__this->fields)._logic;
      if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_044264b4;
      pSVar8 = (pSVar3->fields)._value;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      a = (UI_TooltipPopup_o *)CustomLogic_CustomLogicManager__TryParseLogic(pSVar8,(MethodInfo *)0x0);
    }
    name = (System_String_o *)a;
    bVar7 = System_String__op_Inequality
                      ((System_String_o *)a,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                       (MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      pGVar5 = (__this->fields)._gameManager;
      if (((pGVar5 != (GameManagers_MapEditorGameManager_o *)0x0) &&
          (pSVar3 = (__this->fields)._logic, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
         (pMVar6 = (pGVar5->fields).MapScript, name = (System_String_o *)0x0, pMVar6 != (Map_MapScript_o *)0x0
         )) {
        (pMVar6->fields).Logic = (pSVar3->fields)._value;
        name = (System_String_o *)&(pMVar6->fields).Logic;
        il2cpp_runtime_helper_022b4080();
        pSVar3 = (__this->fields)._logic;
        if (pSVar3 != (Settings_StringSetting_o *)0x0) {
          pGVar5 = (__this->fields)._gameManager;
          name = (pSVar3->fields)._value;
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pCVar10 = CustomLogic_CustomLogicManager__GetEditorEvaluator(name,1,(MethodInfo *)0x0);
          if (pGVar5 != (GameManagers_MapEditorGameManager_o *)0x0) {
            (pGVar5->fields).LogicEvaluator = pCVar10;
            il2cpp_runtime_helper_022b4080(&(pGVar5->fields).LogicEvaluator,pCVar10);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            name = *(System_String_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if ((UI_TooltipPopup_o *)name != (UI_TooltipPopup_o *)0x0) {
              bVar2 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
              if (((((UI_TooltipPopup_o *)name)->klass->_2).naturalAligment < bVar2) ||
                 ((((UI_TooltipPopup_o *)name)->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapEditorMenu))
              goto label_044264b9;
              __this_00 = (UI_MapEditorTopPanel_o *)(((UI_TooltipPopup_o *)name)->fields)._panel;
              name = (System_String_o *)0x0;
              if (__this_00 != (UI_MapEditorTopPanel_o *)0x0) {
                UI_MapEditorTopPanel__Save(__this_00,(MethodInfo *)TypeInfo_MapEditorMenu);
label_04426188:
                (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
                return;
              }
            }
          }
        }
      }
    }
    else {
      pUVar11 = (__this->fields)._error;
      name = (System_String_o *)0x0;
      if (pUVar11 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar11->klass->vtable)._75_set_text.methodPtr)
                  (pUVar11,a,(pUVar11->klass->vtable)._75_set_text.method);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._logicInput;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        ppUVar1 = &(__this->fields)._logicInput;
        bVar7 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          pUVar4 = (UnityEngine_Object_o *)*ppUVar1;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Object__Destroy_4e01c60(pUVar4,(MethodInfo *)0x0);
        }
        fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                             (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
        pSVar8 = (System_String_o *)
                 (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
        UI_ElementStyle___ctor(__this_01,fontSize,130.0,20.0,pSVar8,(MethodInfo *)0x0);
        pUVar9 = UI_ElementFactory__CreateInputSetting
                           ((__this->fields).SinglePanel,__this_01,
                            (Settings_BaseSetting_o *)(__this->fields)._logic,(System_String_o *)"",
                            (System_String_o *)"",450.0,400.0,1,
                            (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                            (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                            (MethodInfo *)0x0);
        (__this->fields)._logicInput = pUVar9;
        il2cpp_runtime_helper_022b4080(ppUVar1,pUVar9);
        return;
      }
    }
  }
label_044264b4:
  il2cpp_runtime_helper_022b2c90();
label_044264b9:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae665 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae665 = '\x01';
  }
  pSVar8 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pUVar11 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)pUVar11,pSVar8,0x7fffffff,(MethodInfo *)0x0);
  (((UI_TooltipPopup_o *)name)->fields)._label = pUVar11;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)name)->fields)._label);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)name,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCustomLogicPopup$$.ctor
// il2cpp: void UI_MapEditorCustomLogicPopup___ctor (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x44264c0

void UI_MapEditorCustomLogicPopup___ctor(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  
  if (g_data_057ae665 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae665 = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._logic = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._logic);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCustomLogicPopup$$<Setup>b__14_0
// il2cpp: void UI_MapEditorCustomLogicPopup___Setup_b__14_0 (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x4426550

void UI_MapEditorCustomLogicPopup___Setup_b__14_0(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae666 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae666 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorCustomLogicPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.MapEditorCustomLogicPopup$$<Setup>b__14_1
// il2cpp: void UI_MapEditorCustomLogicPopup___Setup_b__14_1 (UI_MapEditorCustomLogicPopup_o* __this, const MethodInfo* method);
// 0x4426590

void UI_MapEditorCustomLogicPopup___Setup_b__14_1(UI_MapEditorCustomLogicPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae667 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    g_data_057ae667 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorCustomLogicPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


