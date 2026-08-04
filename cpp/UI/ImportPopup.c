// Type: UI.ImportPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ImportPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ImportPopup.cs
// --------------------------------

// UI.ImportPopup$$get_Title
// il2cpp: System_String_o* UI_ImportPopup__get_Title (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x434e550

System_String_o * UI_ImportPopup__get_Title(UI_ImportPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae11f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Import");
    g_data_057ae11f = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Import",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ImportPopup$$get_Width
// il2cpp: float UI_ImportPopup__get_Width (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x434e5b0

float UI_ImportPopup__get_Width(UI_ImportPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.ImportPopup$$get_Height
// il2cpp: float UI_ImportPopup__get_Height (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x434e5c0

float UI_ImportPopup__get_Height(UI_ImportPopup_o *__this,MethodInfo *method)

{
  return 585.0;
}


// UI.ImportPopup$$get_VerticalPadding
// il2cpp: int32_t UI_ImportPopup__get_VerticalPadding (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x434e5d0

int32_t UI_ImportPopup__get_VerticalPadding(UI_ImportPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.ImportPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_ImportPopup__get_HorizontalPadding (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x434e5e0

int32_t UI_ImportPopup__get_HorizontalPadding(UI_ImportPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.ImportPopup$$get_VerticalSpacing
// il2cpp: float UI_ImportPopup__get_VerticalSpacing (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x434e5f0

float UI_ImportPopup__get_VerticalSpacing(UI_ImportPopup_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.ImportPopup$$get_DefaultInputHeight
// il2cpp: float UI_ImportPopup__get_DefaultInputHeight (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x434e600

float UI_ImportPopup__get_DefaultInputHeight(UI_ImportPopup_o *__this,MethodInfo *method)

{
  return 430.0;
}


// UI.ImportPopup$$get_TextHeight
// il2cpp: float UI_ImportPopup__get_TextHeight (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x434e610

float UI_ImportPopup__get_TextHeight(UI_ImportPopup_o *__this,MethodInfo *method)

{
  return 32.0;
}


// UI.ImportPopup$$Setup
// il2cpp: void UI_ImportPopup__Setup (UI_ImportPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x434e620

void UI_ImportPopup__Setup(UI_ImportPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_01;
  Settings_TypedSetting_T__o *__this_00;
  undefined8 uVar2;
  long *plVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  System_Threading_CancellationTokenSource_c *pSVar4;
  undefined8 uVar5;
  long lVar6;
  int32_t fontSize;
  bool_conflict bVar7;
  System_String_o *pSVar8;
  UI_BasePopup_c *pUVar9;
  UnityEngine_Events_UnityAction_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_UI_Text_o *pUVar12;
  UI_InputSettingElement_o *pUVar13;
  UI_BasePopup_c *pUVar14;
  Il2CppObject *pIVar15;
  MethodInfo *pMVar16;
  Il2CppClass *pIVar17;
  undefined1 extraout_DL;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  UI_BasePopup_c *pUVar18;
  UI_BasePopup_o *__this_01;
  UI_BasePopup_o *__this_02;
  System_Threading_CancellationTokenSource_o *pSVar19;
  undefined4 uVar20;
  
  if (g_data_057ae120 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__22_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__22_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae120 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar8 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar9 = (UI_BasePopup_c *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)pUVar9,fontSize,120.0,20.0,pSVar8,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,(UI_ElementStyle_o *)pUVar9,pSVar8,0.0,pUVar10,(MethodInfo *)0x0)
  ;
  pUVar1 = (__this->fields).BottomBar;
  pSVar8 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,(UI_ElementStyle_o *)pUVar9,pSVar8,0.0,pUVar10,(MethodInfo *)0x0)
  ;
  __this_01 = (UI_BasePopup_o *)(__this->fields).SinglePanel;
  pUVar18 = (UI_BasePopup_c *)0x0;
  pUVar14 = pUVar9;
  pUVar11 = UI_ElementFactory__CreateDefaultLabel
                      ((UnityEngine_Transform_o *)__this_01,(UI_ElementStyle_o *)pUVar9,
                       (System_String_o *)"",0,4,(MethodInfo *)0x0);
  if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
    pUVar12 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Text_GetComponent_Text);
    (__this->fields)._topText = pUVar12;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._topText,pUVar12);
    __this_01 = (UI_BasePopup_o *)(__this->fields).SinglePanel;
    pUVar18 = (UI_BasePopup_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    pUVar14 = pUVar9;
    pUVar11 = UI_ElementFactory__CreateInputSetting
                        ((UnityEngine_Transform_o *)__this_01,(UI_ElementStyle_o *)pUVar9,
                         (Settings_BaseSetting_o *)(__this->fields).ImportSetting,(System_String_o *)pUVar18,
                         (System_String_o *)"",460.0,430.0,1,(UnityEngine_Events_UnityAction_o *)0x0
                         ,(UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
      pUVar13 = (UI_InputSettingElement_o *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_InputSettingElement_GetComponent_InputSettingElement)
      ;
      (__this->fields)._element = pUVar13;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._element,pUVar13);
      __this_01 = (UI_BasePopup_o *)(__this->fields).SinglePanel;
      pUVar18 = (UI_BasePopup_c *)0x0;
      pUVar11 = UI_ElementFactory__CreateDefaultLabel
                          ((UnityEngine_Transform_o *)__this_01,(UI_ElementStyle_o *)pUVar9,
                           (System_String_o *)"",0,4,(MethodInfo *)0x0);
      pUVar14 = pUVar9;
      if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
        pUVar14 = (UI_BasePopup_c *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Text_GetComponent_Text);
        (__this->fields)._errorText = (UnityEngine_UI_Text_o *)pUVar14;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._errorText);
        pUVar12 = (__this->fields)._errorText;
        __this_01 = (UI_BasePopup_o *)0x0;
        if (pUVar12 != (UnityEngine_UI_Text_o *)0x0) {
          UNRECOVERED_JUMPTABLE_01 = (pUVar12->klass->vtable)._23_set_color.methodPtr;
          (*UNRECOVERED_JUMPTABLE_01)
                    (0x3f800000,0,pUVar12,(pUVar12->klass->vtable)._23_set_color.method,extraout_RDX_00,
                     UNRECOVERED_JUMPTABLE_01);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae121 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae121 = '\x01';
  }
  pUVar9 = (UI_BasePopup_c *)0x0;
  __this_02 = __this_01;
  pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
    pMVar16 = (MethodInfo *)0x0;
    bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar11,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    UI_BasePopup__Show(__this_01,pMVar16);
    __this_01[1].klass = pUVar14;
    il2cpp_runtime_helper_022b4080(__this_01 + 1);
    *(undefined1 *)&__this_01[1].fields.DoublePanelLeft = extraout_DL;
    __this_00 = (Settings_TypedSetting_T__o *)__this_01[1].fields.SinglePanel;
    __this_02 = (UI_BasePopup_o *)0x0;
    pUVar9 = pUVar14;
    if (__this_00 != (Settings_TypedSetting_T__o *)0x0) {
      pUVar9 = (UI_BasePopup_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      Settings_TypedSetting_object___set_Value(__this_00,(Il2CppObject *)pUVar9,MethodInfo_Void_set_Value);
      __this_02 = (UI_BasePopup_o *)__this_01[1].fields.m_CachedPtr;
      if (__this_02 != (UI_BasePopup_o *)0x0) {
        pUVar9 = (UI_BasePopup_c *)0x0;
        pUVar11 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
        if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar11,0,(MethodInfo *)0x0);
          pUVar9 = "";
          bVar7 = System_String__op_Equality
                            ((System_String_o *)pUVar18,(System_String_o *)"",(MethodInfo *)0x0);
          __this_02 = (UI_BasePopup_o *)__this_01[1].fields.m_CancellationTokenSource;
          if (__this_02 != (UI_BasePopup_o *)0x0) {
            pUVar9 = (UI_BasePopup_c *)0x0;
            pUVar11 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
              if ((char)bVar7 == '\0') {
                pUVar9 = (UI_BasePopup_c *)0x1;
                UnityEngine_GameObject__SetActive(pUVar11,1,(MethodInfo *)0x0);
                pSVar19 = __this_01[1].fields.m_CancellationTokenSource;
                __this_02 = (UI_BasePopup_o *)0x0;
                if (pSVar19 != (System_Threading_CancellationTokenSource_o *)0x0) {
                  pSVar4 = pSVar19->klass;
                  uVar2._0_2_ = pSVar4[3]._2.interfaces_count;
                  uVar2._2_2_ = pSVar4[3]._2.interface_offsets_count;
                  uVar2._4_1_ = pSVar4[3]._2.typeHierarchyDepth;
                  uVar2._5_1_ = pSVar4[3]._2.genericRecursionDepth;
                  uVar2._6_1_ = pSVar4[3]._2.rank;
                  uVar2._7_1_ = pSVar4[3]._2.minimumAlignment;
                  (**(code **)&pSVar4[3]._2.field_count)(pSVar19,pUVar18,uVar2);
                  __this_02 = __this_01[1].monitor;
                  pUVar9 = pUVar18;
                  if (__this_02 != (UI_BasePopup_o *)0x0) {
                    pUVar9 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
                    pIVar15 = UnityEngine_Component__GetComponent_object_
                                        ((UnityEngine_Component_o *)__this_02,
                                         (MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    if (pIVar15 != (Il2CppObject *)0x0) {
                      pIVar17 = pIVar15->klass;
                      pUVar9 = (UI_BasePopup_c *)pIVar17->vtable[0x26].method;
                      uVar20 = 0x43c70000;
                      goto label_0434eb2b;
                    }
                  }
                }
              }
              else {
                pUVar9 = (UI_BasePopup_c *)0x0;
                UnityEngine_GameObject__SetActive(pUVar11,0,(MethodInfo *)0x0);
                __this_02 = __this_01[1].monitor;
                if (__this_02 != (UI_BasePopup_o *)0x0) {
                  pUVar9 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
                  pIVar15 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)__this_02,(MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement
                                      );
                  if (pIVar15 != (Il2CppObject *)0x0) {
                    pIVar17 = pIVar15->klass;
                    pUVar9 = (UI_BasePopup_c *)pIVar17->vtable[0x26].method;
                    uVar20 = 0x43d70000;
label_0434eb2b:
                    (*pIVar17->vtable[0x26].methodPtr)(uVar20,pIVar15);
                    plVar3 = __this_01[1].monitor;
                    __this_02 = (UI_BasePopup_o *)0x0;
                    if (plVar3 != (long *)0x0) {
                      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar3 + 0x198);
                      (*UNRECOVERED_JUMPTABLE_00)
                                (plVar3,*(undefined8 *)(*plVar3 + 0x1a0),extraout_RDX_01,
                                 UNRECOVERED_JUMPTABLE_00);
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
  il2cpp_runtime_helper_022b2c90();
  pUVar18 = pUVar9;
  if (g_data_057ae122 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    g_data_057ae122 = '\x01';
  }
  plVar3 = (long *)__this_02[1].fields.m_CachedPtr;
  pSVar19 = (System_Threading_CancellationTokenSource_o *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x5e8))(plVar3,pUVar9,*(undefined8 *)(*plVar3 + 0x5f0));
    pSVar19 = (System_Threading_CancellationTokenSource_o *)__this_02[1].fields.m_CachedPtr;
    pUVar18 = pUVar9;
    if (pSVar19 != (System_Threading_CancellationTokenSource_o *)0x0) {
      pUVar18 = (UI_BasePopup_c *)0x0;
      pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar19,(MethodInfo *)0x0);
      if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
        pUVar18 = (UI_BasePopup_c *)0x1;
        UnityEngine_GameObject__SetActive(pUVar11,1,(MethodInfo *)0x0);
        pSVar19 = __this_02[1].fields.m_CancellationTokenSource;
        if (pSVar19 != (System_Threading_CancellationTokenSource_o *)0x0) {
          pUVar18 = (UI_BasePopup_c *)0x0;
          pUVar11 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pSVar19,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
            pUVar18 = (UI_BasePopup_c *)0x0;
            bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar11,(MethodInfo *)0x0);
            pSVar19 = __this_02[1].monitor;
            if (pSVar19 != (System_Threading_CancellationTokenSource_o *)0x0) {
              pUVar18 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
              pIVar15 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pSVar19,(MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar15 != (Il2CppObject *)0x0) {
                pIVar17 = pIVar15->klass;
                UNRECOVERED_JUMPTABLE_01 = pIVar17->vtable[0x26].methodPtr;
                if ((char)bVar7 == '\0') {
                  uVar20 = 0x43c70000;
                }
                else {
                  uVar20 = 0x43b70000;
                }
                (*UNRECOVERED_JUMPTABLE_01)
                          (uVar20,pIVar15,pIVar17->vtable[0x26].method,pIVar17,UNRECOVERED_JUMPTABLE_01);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae123 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae123 = '\x01';
  }
  bVar7 = System_String__op_Equality((System_String_o *)pUVar18,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
label_0434ecba:
    pSVar4 = pSVar19->klass;
    uVar5._0_4_ = pSVar4[1]._2.static_fields_size;
    uVar5._4_4_ = pSVar4[1]._2.thread_static_fields_size;
    (**(code **)&pSVar4[1]._2.element_size)(pSVar19,uVar5);
    return;
  }
  bVar7 = System_String__op_Equality((System_String_o *)pUVar18,"Save",(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    lVar6 = *(long *)&pSVar19[2].fields._disposed;
    if (lVar6 == 0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae124 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
        g_data_057ae124 = '\x01';
      }
      pSVar8 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pMVar16 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      Settings_StringSetting___ctor_40f74f0
                ((Settings_StringSetting_o *)pMVar16,pSVar8,0x7fffffff,(MethodInfo *)0x0);
      (pUVar18->_2).typeHierarchy = (Il2CppClass **)pMVar16;
      il2cpp_runtime_helper_022b4080(&pUVar18->_2);
      UI_BasePopup___ctor((UI_TooltipPopup_o *)pUVar18,pMVar16);
      return;
    }
    (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
    if (*(char *)&pSVar19[3].fields._kernelEvent == '\0') goto label_0434ecba;
  }
  return;
}


// UI.ImportPopup$$Show
// il2cpp: void UI_ImportPopup__Show (UI_ImportPopup_o* __this, UnityEngine_Events_UnityAction_o* onSave, bool manualHide, System_String_o* topText, const MethodInfo* method);
// 0x434e950

void UI_ImportPopup__Show
               (UI_ImportPopup_o *__this,UnityEngine_Events_UnityAction_o *onSave,bool_conflict manualHide,
               System_String_o *topText,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  UnityEngine_UI_Text_o *pUVar2;
  long lVar3;
  System_String_o *defaultValue;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *pUVar5;
  Il2CppObject *pIVar6;
  UI_TooltipPopup_c *method_00;
  Il2CppClass *pIVar7;
  undefined8 extraout_RDX;
  MethodInfo *method_01;
  UI_TooltipPopup_o *value;
  UI_TooltipPopup_o *__this_01;
  UnityEngine_UI_Text_o *__this_02;
  UnityEngine_UI_Text_o *__this_03;
  undefined4 uVar8;
  
  if (g_data_057ae121 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae121 = '\x01';
  }
  value = (UI_TooltipPopup_o *)0x0;
  __this_02 = (UnityEngine_UI_Text_o *)__this;
  pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
    method_01 = (MethodInfo *)0x0;
    bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,method_01);
    (__this->fields)._onSave = onSave;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._onSave);
    *(char *)&(__this->fields)._manualHide = (char)manualHide;
    __this_00 = (__this->fields).ImportSetting;
    __this_02 = (UnityEngine_UI_Text_o *)0x0;
    value = (UI_TooltipPopup_o *)onSave;
    if (__this_00 != (Settings_StringSetting_o *)0x0) {
      value = (UI_TooltipPopup_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,MethodInfo_Void_set_Value);
      __this_02 = (__this->fields)._errorText;
      if (__this_02 != (UnityEngine_UI_Text_o *)0x0) {
        value = (UI_TooltipPopup_o *)0x0;
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0)
        ;
        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
          value = "";
          bVar4 = System_String__op_Equality(topText,(System_String_o *)"",(MethodInfo *)0x0);
          __this_02 = (__this->fields)._topText;
          if (__this_02 != (UnityEngine_UI_Text_o *)0x0) {
            value = (UI_TooltipPopup_o *)0x0;
            pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
              if ((char)bVar4 == '\0') {
                value = (UI_TooltipPopup_o *)0x1;
                UnityEngine_GameObject__SetActive(pUVar5,1,(MethodInfo *)0x0);
                pUVar2 = (__this->fields)._topText;
                __this_02 = (UnityEngine_UI_Text_o *)0x0;
                if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
                  (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                            (pUVar2,topText,(pUVar2->klass->vtable)._75_set_text.method);
                  __this_02 = (UnityEngine_UI_Text_o *)(__this->fields)._element;
                  value = (UI_TooltipPopup_o *)topText;
                  if (__this_02 != (UnityEngine_UI_Text_o *)0x0) {
                    value = MethodInfo_LayoutElement_GetComponent_LayoutElement;
                    pIVar6 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)__this_02,
                                        (MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    if (pIVar6 != (Il2CppObject *)0x0) {
                      pIVar7 = pIVar6->klass;
                      value = (UI_TooltipPopup_o *)pIVar7->vtable[0x26].method;
                      uVar8 = 0x43c70000;
                      goto label_0434eb2b;
                    }
                  }
                }
              }
              else {
                value = (UI_TooltipPopup_o *)0x0;
                UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
                __this_02 = (UnityEngine_UI_Text_o *)(__this->fields)._element;
                if (__this_02 != (UnityEngine_UI_Text_o *)0x0) {
                  value = MethodInfo_LayoutElement_GetComponent_LayoutElement;
                  pIVar6 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)__this_02,(MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement)
                  ;
                  if (pIVar6 != (Il2CppObject *)0x0) {
                    pIVar7 = pIVar6->klass;
                    value = (UI_TooltipPopup_o *)pIVar7->vtable[0x26].method;
                    uVar8 = 0x43d70000;
label_0434eb2b:
                    (*pIVar7->vtable[0x26].methodPtr)(uVar8,pIVar6);
                    pUVar1 = (__this->fields)._element;
                    __this_02 = (UnityEngine_UI_Text_o *)0x0;
                    if (pUVar1 != (UI_InputSettingElement_o *)0x0) {
                      UNRECOVERED_JUMPTABLE_00 = (pUVar1->klass->vtable)._6_SyncElement.methodPtr;
                      (*UNRECOVERED_JUMPTABLE_00)
                                (pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method,extraout_RDX,
                                 UNRECOVERED_JUMPTABLE_00);
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
  il2cpp_runtime_helper_022b2c90();
  __this_01 = value;
  if (g_data_057ae122 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    g_data_057ae122 = '\x01';
  }
  pUVar2 = (UnityEngine_UI_Text_o *)(__this_02->fields).m_ParentMask;
  __this_03 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
              (pUVar2,value,(pUVar2->klass->vtable)._75_set_text.method);
    __this_03 = (UnityEngine_UI_Text_o *)(__this_02->fields).m_ParentMask;
    __this_01 = value;
    if (__this_03 != (UnityEngine_UI_Text_o *)0x0) {
      __this_01 = (UI_TooltipPopup_o *)0x0;
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = (UI_TooltipPopup_o *)0x1;
        UnityEngine_GameObject__SetActive(pUVar5,1,(MethodInfo *)0x0);
        __this_03 = *(UnityEngine_UI_Text_o **)&(__this_02->fields).m_Maskable;
        if (__this_03 != (UnityEngine_UI_Text_o *)0x0) {
          __this_01 = (UI_TooltipPopup_o *)0x0;
          pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
            __this_01 = (UI_TooltipPopup_o *)0x0;
            bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
            __this_03 = (UnityEngine_UI_Text_o *)(__this_02->fields).m_MaskMaterial;
            if (__this_03 != (UnityEngine_UI_Text_o *)0x0) {
              __this_01 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
              pIVar6 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)__this_03,(MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar6 != (Il2CppObject *)0x0) {
                pIVar7 = pIVar6->klass;
                UNRECOVERED_JUMPTABLE_00 = pIVar7->vtable[0x26].methodPtr;
                if ((char)bVar4 == '\0') {
                  uVar8 = 0x43c70000;
                }
                else {
                  uVar8 = 0x43b70000;
                }
                (*UNRECOVERED_JUMPTABLE_00)
                          (uVar8,pIVar6,pIVar7->vtable[0x26].method,pIVar7,UNRECOVERED_JUMPTABLE_00);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae123 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae123 = '\x01';
  }
  bVar4 = System_String__op_Equality((System_String_o *)__this_01,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
label_0434ecba:
    (*(__this_03->klass->vtable)._22_get_color.methodPtr)
              (__this_03,(__this_03->klass->vtable)._22_get_color.method);
    return;
  }
  bVar4 = System_String__op_Equality((System_String_o *)__this_01,"Save",(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    lVar3 = *(long *)&(__this_03->fields)._useLegacyMeshGeneration_k__BackingField;
    if (lVar3 == 0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae124 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
        g_data_057ae124 = '\x01';
      }
      defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      method_00 = (UI_TooltipPopup_c *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      Settings_StringSetting___ctor_40f74f0
                ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
      __this_01[1].klass = method_00;
      il2cpp_runtime_helper_022b4080(__this_01 + 1);
      UI_BasePopup___ctor(__this_01,(MethodInfo *)method_00);
      return;
    }
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    if (*(char *)&(__this_03->fields).m_OnCullStateChanged == '\0') goto label_0434ecba;
  }
  return;
}


// UI.ImportPopup$$ShowError
// il2cpp: void UI_ImportPopup__ShowError (UI_ImportPopup_o* __this, System_String_o* error, const MethodInfo* method);
// 0x434eb70

void UI_ImportPopup__ShowError(UI_ImportPopup_o *__this,System_String_o *error,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  Il2CppClass *pIVar2;
  Il2CppMethodPointer vtableDispatch;
  long lVar3;
  System_String_o *defaultValue;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *pUVar5;
  Il2CppObject *pIVar6;
  UI_TooltipPopup_c *method_00;
  UI_TooltipPopup_o *__this_00;
  UnityEngine_UI_Text_o *__this_01;
  undefined4 uVar7;
  
  __this_00 = (UI_TooltipPopup_o *)error;
  if (g_data_057ae122 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    g_data_057ae122 = '\x01';
  }
  pUVar1 = (__this->fields)._errorText;
  __this_01 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,error,(pUVar1->klass->vtable)._75_set_text.method);
    __this_01 = (__this->fields)._errorText;
    __this_00 = (UI_TooltipPopup_o *)error;
    if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
      __this_00 = (UI_TooltipPopup_o *)0x0;
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = (UI_TooltipPopup_o *)0x1;
        UnityEngine_GameObject__SetActive(pUVar5,1,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._topText;
        if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
          __this_00 = (UI_TooltipPopup_o *)0x0;
          pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
            __this_00 = (UI_TooltipPopup_o *)0x0;
            bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
            __this_01 = (UnityEngine_UI_Text_o *)(__this->fields)._element;
            if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
              __this_00 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
              pIVar6 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)__this_01,(MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar6 != (Il2CppObject *)0x0) {
                pIVar2 = pIVar6->klass;
                vtableDispatch = pIVar2->vtable[0x26].methodPtr;
                if ((char)bVar4 == '\0') {
                  uVar7 = 0x43c70000;
                }
                else {
                  uVar7 = 0x43b70000;
                }
                (*vtableDispatch)
                          (uVar7,pIVar6,pIVar2->vtable[0x26].method,pIVar2,vtableDispatch);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae123 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae123 = '\x01';
  }
  bVar4 = System_String__op_Equality((System_String_o *)__this_00,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
label_0434ecba:
    (*(__this_01->klass->vtable)._22_get_color.methodPtr)
              (__this_01,(__this_01->klass->vtable)._22_get_color.method);
    return;
  }
  bVar4 = System_String__op_Equality((System_String_o *)__this_00,"Save",(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    lVar3 = *(long *)&(__this_01->fields)._useLegacyMeshGeneration_k__BackingField;
    if (lVar3 == 0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae124 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
        g_data_057ae124 = '\x01';
      }
      defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      method_00 = (UI_TooltipPopup_c *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      Settings_StringSetting___ctor_40f74f0
                ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
      __this_00[1].klass = method_00;
      il2cpp_runtime_helper_022b4080(__this_00 + 1);
      UI_BasePopup___ctor(__this_00,(MethodInfo *)method_00);
      return;
    }
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    if (*(char *)&(__this_01->fields).m_OnCullStateChanged == '\0') goto label_0434ecba;
  }
  return;
}


// UI.ImportPopup$$OnButtonClick
// il2cpp: void UI_ImportPopup__OnButtonClick (UI_ImportPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x434ec70

void UI_ImportPopup__OnButtonClick(UI_ImportPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  System_String_o *defaultValue;
  bool_conflict bVar2;
  UI_TooltipPopup_c *method_00;
  
  if (g_data_057ae123 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae123 = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
label_0434ecba:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar2 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields)._onSave;
    if (pUVar1 == (UnityEngine_Events_UnityAction_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae124 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
        g_data_057ae124 = '\x01';
      }
      defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      method_00 = (UI_TooltipPopup_c *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      Settings_StringSetting___ctor_40f74f0
                ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
      ((UI_TooltipPopup_o *)((long)name + 200))->klass = method_00;
      il2cpp_runtime_helper_022b4080((UI_TooltipPopup_o *)((long)name + 200));
      UI_BasePopup___ctor((UI_TooltipPopup_o *)name,(MethodInfo *)method_00);
      return;
    }
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
    if ((char)(__this->fields)._manualHide == '\0') goto label_0434ecba;
  }
  return;
}


// UI.ImportPopup$$.ctor
// il2cpp: void UI_ImportPopup___ctor (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x434ed20

void UI_ImportPopup___ctor(UI_ImportPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  MethodInfo *method_00;
  
  if (g_data_057ae124 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae124 = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ImportSetting = (Settings_StringSetting_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ImportSetting);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.ImportPopup$$<Setup>b__22_0
// il2cpp: void UI_ImportPopup___Setup_b__22_0 (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x434edb0

void UI_ImportPopup___Setup_b__22_0(UI_ImportPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  System_String_o *defaultValue;
  bool_conflict bVar2;
  UI_TooltipPopup_c *method_00;
  UI_TooltipPopup_o *__this_00;
  
  if (g_data_057ae125 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae125 = '\x01';
  }
  __this_00 = "Save";
  if (g_data_057ae123 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae123 = '\x01';
  }
  bVar2 = System_String__op_Equality((System_String_o *)__this_00,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
label_0434ecba:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar2 = System_String__op_Equality
                    ((System_String_o *)__this_00,(System_String_o *)"Save",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields)._onSave;
    if (pUVar1 == (UnityEngine_Events_UnityAction_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae124 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
        g_data_057ae124 = '\x01';
      }
      defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      method_00 = (UI_TooltipPopup_c *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      Settings_StringSetting___ctor_40f74f0
                ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
      __this_00[1].klass = method_00;
      il2cpp_runtime_helper_022b4080(__this_00 + 1);
      UI_BasePopup___ctor(__this_00,(MethodInfo *)method_00);
      return;
    }
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
    if ((char)(__this->fields)._manualHide == '\0') goto label_0434ecba;
  }
  return;
}


// UI.ImportPopup$$<Setup>b__22_1
// il2cpp: void UI_ImportPopup___Setup_b__22_1 (UI_ImportPopup_o* __this, const MethodInfo* method);
// 0x434edf0

void UI_ImportPopup___Setup_b__22_1(UI_ImportPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  System_String_o *defaultValue;
  bool_conflict bVar2;
  UI_TooltipPopup_c *method_00;
  UI_TooltipPopup_o *__this_00;
  
  if (g_data_057ae126 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    g_data_057ae126 = '\x01';
  }
  __this_00 = "Cancel";
  if (g_data_057ae123 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae123 = '\x01';
  }
  bVar2 = System_String__op_Equality
                    ((System_String_o *)__this_00,(System_String_o *)"Cancel",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
label_0434ecba:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar2 = System_String__op_Equality((System_String_o *)__this_00,"Save",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields)._onSave;
    if (pUVar1 == (UnityEngine_Events_UnityAction_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae124 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
        g_data_057ae124 = '\x01';
      }
      defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      method_00 = (UI_TooltipPopup_c *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      Settings_StringSetting___ctor_40f74f0
                ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
      __this_00[1].klass = method_00;
      il2cpp_runtime_helper_022b4080(__this_00 + 1);
      UI_BasePopup___ctor(__this_00,(MethodInfo *)method_00);
      return;
    }
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
    if ((char)(__this->fields)._manualHide == '\0') goto label_0434ecba;
  }
  return;
}


