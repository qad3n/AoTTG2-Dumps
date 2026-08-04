// Type: UI.NewImportPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/NewImportPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/NewImportPopup.cs
// --------------------------------

// UI.NewImportPopup$$get_Title
// il2cpp: System_String_o* UI_NewImportPopup__get_Title (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x434fc60

System_String_o * UI_NewImportPopup__get_Title(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae131 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"New");
    g_data_057ae131 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("New",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.NewImportPopup$$get_Width
// il2cpp: float UI_NewImportPopup__get_Width (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x434fcc0

float UI_NewImportPopup__get_Width(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.NewImportPopup$$get_Height
// il2cpp: float UI_NewImportPopup__get_Height (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x434fcd0

float UI_NewImportPopup__get_Height(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  return 615.0;
}


// UI.NewImportPopup$$get_VerticalPadding
// il2cpp: int32_t UI_NewImportPopup__get_VerticalPadding (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x434fce0

int32_t UI_NewImportPopup__get_VerticalPadding(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.NewImportPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_NewImportPopup__get_HorizontalPadding (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x434fcf0

int32_t UI_NewImportPopup__get_HorizontalPadding(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.NewImportPopup$$get_VerticalSpacing
// il2cpp: float UI_NewImportPopup__get_VerticalSpacing (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x434fd00

float UI_NewImportPopup__get_VerticalSpacing(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.NewImportPopup$$get_DefaultInputHeight
// il2cpp: float UI_NewImportPopup__get_DefaultInputHeight (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x434fd10

float UI_NewImportPopup__get_DefaultInputHeight(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  return 380.0;
}


// UI.NewImportPopup$$Setup
// il2cpp: void UI_NewImportPopup__Setup (UI_NewImportPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x434fd20

void UI_NewImportPopup__Setup(UI_NewImportPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  Settings_TypedSetting_T__o *pSVar3;
  System_Threading_CancellationTokenSource_o *pSVar4;
  System_Threading_CancellationTokenSource_c *pSVar5;
  undefined8 uVar6;
  long lVar7;
  int32_t fontSize;
  bool_conflict bVar8;
  System_String_o *pSVar9;
  UI_BasePopup_c *pUVar10;
  UnityEngine_Events_UnityAction_o *pUVar11;
  UnityEngine_GameObject_o *pUVar12;
  UI_InputSettingElement_o *pUVar13;
  UI_BasePopup_c *pUVar14;
  Settings_StringSetting_o *pSVar15;
  MethodInfo *pMVar16;
  undefined1 extraout_DL;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  UI_BasePopup_o *__this_00;
  UI_BasePopup_o *__this_01;
  System_Threading_CancellationTokenSource_o *__this_02;
  
  if (g_data_057ae132 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__21_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae132 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar9 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar10 = (UI_BasePopup_c *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)pUVar10,fontSize,100.0,20.0,pSVar9,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar11 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton
            (pUVar1,(UI_ElementStyle_o *)pUVar10,pSVar9,0.0,pUVar11,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar9 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar11 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton
            (pUVar1,(UI_ElementStyle_o *)pUVar10,pSVar9,0.0,pUVar11,(MethodInfo *)0x0);
  __this_00 = (UI_BasePopup_o *)(__this->fields).SinglePanel;
  pSVar15 = (__this->fields).FileName;
  pSVar9 = UI_UIManager__GetLocaleCommon("Name",(MethodInfo *)0x0);
  pUVar14 = pUVar10;
  pUVar12 = UI_ElementFactory__CreateInputSetting
                      ((UnityEngine_Transform_o *)__this_00,(UI_ElementStyle_o *)pUVar10,
                       (Settings_BaseSetting_o *)pSVar15,pSVar9,"",460.0,40.0,0,
                       (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                       (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                       (MethodInfo *)0x0);
  if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
    pUVar13 = (UI_InputSettingElement_o *)UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    (__this->fields)._nameElement = pUVar13;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._nameElement,pUVar13);
    __this_00 = (UI_BasePopup_o *)(__this->fields).SinglePanel;
    pUVar14 = pUVar10;
    pUVar12 = UI_ElementFactory__CreateInputSetting
                        ((UnityEngine_Transform_o *)__this_00,(UI_ElementStyle_o *)pUVar10,
                         (Settings_BaseSetting_o *)(__this->fields).ImportSetting,
                         (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),"",460.0,380.0,1,
                         (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                         (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                         (MethodInfo *)0x0);
    if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
      pUVar13 = (UI_InputSettingElement_o *)UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_InputSettingElement_GetComponent_InputSettingElement)
      ;
      (__this->fields)._importElement = pUVar13;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._importElement,pUVar13);
      __this_00 = (UI_BasePopup_o *)(__this->fields).SinglePanel;
      pUVar12 = UI_ElementFactory__CreateDefaultLabel
                          ((UnityEngine_Transform_o *)__this_00,(UI_ElementStyle_o *)pUVar10,"",0,4,
                           (MethodInfo *)0x0);
      pUVar14 = pUVar10;
      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
        pUVar14 = (UI_BasePopup_c *)UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Text_GetComponent_Text);
        (__this->fields)._errorText = (UnityEngine_UI_Text_o *)pUVar14;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._errorText);
        pUVar2 = (__this->fields)._errorText;
        __this_00 = (UI_BasePopup_o *)0x0;
        if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
          vtableDispatch = (pUVar2->klass->vtable)._23_set_color.methodPtr;
          (*vtableDispatch)
                    (0x3f800000,0,pUVar2,(pUVar2->klass->vtable)._23_set_color.method,extraout_RDX_00,
                     vtableDispatch);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae133 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae133 = '\x01';
  }
  pUVar10 = (UI_BasePopup_c *)0x0;
  __this_01 = __this_00;
  pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
    pMVar16 = (MethodInfo *)0x0;
    bVar8 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    UI_BasePopup__Show(__this_00,pMVar16);
    __this_00[1].klass = pUVar14;
    il2cpp_runtime_helper_022b4080(__this_00 + 1);
    *(undefined1 *)&__this_00[1].fields.DoublePanelRight = extraout_DL;
    pSVar3 = (Settings_TypedSetting_T__o *)__this_00[1].fields.SinglePanel;
    __this_01 = (UI_BasePopup_o *)0x0;
    pUVar10 = pUVar14;
    if (pSVar3 != (Settings_TypedSetting_T__o *)0x0) {
      pUVar10 = (UI_BasePopup_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      Settings_TypedSetting_object___set_Value(pSVar3,(Il2CppObject *)pUVar10,MethodInfo_Void_set_Value);
      pSVar3 = (Settings_TypedSetting_T__o *)__this_00[1].fields.DoublePanelLeft;
      __this_01 = (UI_BasePopup_o *)0x0;
      if (pSVar3 != (Settings_TypedSetting_T__o *)0x0) {
        pUVar10 = (UI_BasePopup_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        Settings_TypedSetting_object___set_Value(pSVar3,(Il2CppObject *)pUVar10,MethodInfo_Void_set_Value);
        __this_01 = (UI_BasePopup_o *)__this_00[1].fields.m_CancellationTokenSource;
        if (__this_01 != (UI_BasePopup_o *)0x0) {
          pUVar10 = (UI_BasePopup_c *)0x0;
          pUVar12 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar12,0,(MethodInfo *)0x0);
            (*(__this_00->klass->vtable)._23_SyncSettingElements.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._23_SyncSettingElements.method);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar4 = __this_01[1].fields.m_CancellationTokenSource;
  __this_02 = (System_Threading_CancellationTokenSource_o *)0x0;
  if (pSVar4 != (System_Threading_CancellationTokenSource_o *)0x0) {
    (**(code **)&pSVar4->klass[3]._2.field_count)();
    __this_02 = __this_01[1].fields.m_CancellationTokenSource;
    if (__this_02 != (System_Threading_CancellationTokenSource_o *)0x0) {
      pUVar10 = (UI_BasePopup_c *)0x0;
      pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar12,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae134 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae134 = '\x01';
  }
  bVar8 = System_String__op_Equality((System_String_o *)pUVar10,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
label_0435025a:
    pSVar5 = __this_02->klass;
    uVar6._0_4_ = pSVar5[1]._2.static_fields_size;
    uVar6._4_4_ = pSVar5[1]._2.thread_static_fields_size;
    (**(code **)&pSVar5[1]._2.element_size)(__this_02,uVar6);
    return;
  }
  bVar8 = System_String__op_Equality((System_String_o *)pUVar10,"Save",(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    lVar7 = *(long *)&__this_02[2].fields._disposed;
    if (lVar7 == 0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae135 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
        g_data_057ae135 = '\x01';
      }
      pSVar9 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSVar15 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      Settings_StringSetting___ctor_40f74f0(pSVar15,pSVar9,0x7fffffff,(MethodInfo *)0x0);
      (pUVar10->_2).typeHierarchy = (Il2CppClass **)pSVar15;
      il2cpp_runtime_helper_022b4080(&pUVar10->_2,pSVar15);
      pSVar9 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pMVar16 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      Settings_StringSetting___ctor_40f74f0
                ((Settings_StringSetting_o *)pMVar16,pSVar9,0x7fffffff,(MethodInfo *)0x0);
      (pUVar10->_2).unity_user_data = pMVar16;
      il2cpp_runtime_helper_022b4080(&(pUVar10->_2).unity_user_data);
      UI_BasePopup___ctor((UI_TooltipPopup_o *)pUVar10,pMVar16);
      return;
    }
    (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
    if (*(char *)&__this_02[3].fields._registeredCallbacksLists == '\0') goto label_0435025a;
  }
  return;
}


// UI.NewImportPopup$$Show
// il2cpp: void UI_NewImportPopup__Show (UI_NewImportPopup_o* __this, UnityEngine_Events_UnityAction_o* onSave, bool manualHide, const MethodInfo* method);
// 0x43500a0

void UI_NewImportPopup__Show
               (UI_NewImportPopup_o *__this,UnityEngine_Events_UnityAction_o *onSave,bool_conflict manualHide,
               MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UnityEngine_UI_Text_o *pUVar2;
  long lVar3;
  System_String_o *pSVar4;
  bool_conflict bVar5;
  UnityEngine_GameObject_o *pUVar6;
  UI_TooltipPopup_c *__this_00;
  MethodInfo *pMVar7;
  UI_TooltipPopup_o *__this_01;
  UnityEngine_UI_Text_o *__this_02;
  UnityEngine_UI_Text_o *__this_03;
  
  if (g_data_057ae133 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae133 = '\x01';
  }
  __this_01 = (UI_TooltipPopup_o *)0x0;
  __this_02 = (UnityEngine_UI_Text_o *)__this;
  pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
    pMVar7 = (MethodInfo *)0x0;
    bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,pMVar7);
    (__this->fields)._onSave = onSave;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._onSave);
    *(char *)&(__this->fields)._manualHide = (char)manualHide;
    pSVar1 = (__this->fields).ImportSetting;
    __this_02 = (UnityEngine_UI_Text_o *)0x0;
    __this_01 = (UI_TooltipPopup_o *)onSave;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      __this_01 = (UI_TooltipPopup_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)__this_01,MethodInfo_Void_set_Value);
      pSVar1 = (__this->fields).FileName;
      __this_02 = (UnityEngine_UI_Text_o *)0x0;
      if (pSVar1 != (Settings_StringSetting_o *)0x0) {
        __this_01 = (UI_TooltipPopup_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)__this_01,MethodInfo_Void_set_Value);
        __this_02 = (__this->fields)._errorText;
        if (__this_02 != (UnityEngine_UI_Text_o *)0x0) {
          __this_01 = (UI_TooltipPopup_o *)0x0;
          pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar6,0,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._23_SyncSettingElements.methodPtr)
                      (__this,(__this->klass->vtable)._23_SyncSettingElements.method);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = *(UnityEngine_UI_Text_o **)&(__this_02->fields).m_Maskable;
  __this_03 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar2->klass->vtable)._75_set_text.methodPtr)();
    __this_03 = *(UnityEngine_UI_Text_o **)&(__this_02->fields).m_Maskable;
    if (__this_03 != (UnityEngine_UI_Text_o *)0x0) {
      __this_01 = (UI_TooltipPopup_o *)0x0;
      pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar6,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae134 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae134 = '\x01';
  }
  bVar5 = System_String__op_Equality((System_String_o *)__this_01,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
label_0435025a:
    (*(__this_03->klass->vtable)._22_get_color.methodPtr)
              (__this_03,(__this_03->klass->vtable)._22_get_color.method);
    return;
  }
  bVar5 = System_String__op_Equality((System_String_o *)__this_01,"Save",(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    lVar3 = *(long *)&(__this_03->fields)._useLegacyMeshGeneration_k__BackingField;
    if (lVar3 == 0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae135 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
        g_data_057ae135 = '\x01';
      }
      pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      __this_00 = (UI_TooltipPopup_c *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      Settings_StringSetting___ctor_40f74f0
                ((Settings_StringSetting_o *)__this_00,pSVar4,0x7fffffff,(MethodInfo *)0x0);
      __this_01[1].klass = __this_00;
      il2cpp_runtime_helper_022b4080(__this_01 + 1,__this_00);
      pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pMVar7 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      Settings_StringSetting___ctor_40f74f0
                ((Settings_StringSetting_o *)pMVar7,pSVar4,0x7fffffff,(MethodInfo *)0x0);
      __this_01[1].monitor = pMVar7;
      il2cpp_runtime_helper_022b4080(&__this_01[1].monitor);
      UI_BasePopup___ctor(__this_01,pMVar7);
      return;
    }
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    if ((char)(__this_03->fields).m_ShouldRecalculate == '\0') goto label_0435025a;
  }
  return;
}


// UI.NewImportPopup$$ShowError
// il2cpp: void UI_NewImportPopup__ShowError (UI_NewImportPopup_o* __this, System_String_o* error, const MethodInfo* method);
// 0x43501c0

void UI_NewImportPopup__ShowError(UI_NewImportPopup_o *__this,System_String_o *error,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  long lVar2;
  System_String_o *pSVar3;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *__this_00;
  UI_TooltipPopup_c *__this_01;
  MethodInfo *method_00;
  UnityEngine_UI_Text_o *__this_02;
  
  pUVar1 = (__this->fields)._errorText;
  __this_02 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,error,(pUVar1->klass->vtable)._75_set_text.method);
    __this_02 = (__this->fields)._errorText;
    if (__this_02 != (UnityEngine_UI_Text_o *)0x0) {
      error = (System_String_o *)0x0;
      __this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae134 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae134 = '\x01';
  }
  bVar4 = System_String__op_Equality(error,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
label_0435025a:
    (*(__this_02->klass->vtable)._22_get_color.methodPtr)
              (__this_02,(__this_02->klass->vtable)._22_get_color.method);
    return;
  }
  bVar4 = System_String__op_Equality(error,"Save",(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    lVar2 = *(long *)&(__this_02->fields)._useLegacyMeshGeneration_k__BackingField;
    if (lVar2 == 0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae135 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
        g_data_057ae135 = '\x01';
      }
      pSVar3 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      __this_01 = (UI_TooltipPopup_c *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      Settings_StringSetting___ctor_40f74f0
                ((Settings_StringSetting_o *)__this_01,pSVar3,0x7fffffff,(MethodInfo *)0x0);
      ((UI_TooltipPopup_o *)((long)error + 200))->klass = __this_01;
      il2cpp_runtime_helper_022b4080((UI_TooltipPopup_o *)((long)error + 200),__this_01);
      pSVar3 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      Settings_StringSetting___ctor_40f74f0
                ((Settings_StringSetting_o *)method_00,pSVar3,0x7fffffff,(MethodInfo *)0x0);
      ((UI_TooltipPopup_o *)((long)error + 200))->monitor = method_00;
      il2cpp_runtime_helper_022b4080(&((UI_TooltipPopup_o *)((long)error + 200))->monitor);
      UI_BasePopup___ctor((UI_TooltipPopup_o *)error,method_00);
      return;
    }
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    if ((char)(__this_02->fields).m_ShouldRecalculate == '\0') goto label_0435025a;
  }
  return;
}


// UI.NewImportPopup$$OnButtonClick
// il2cpp: void UI_NewImportPopup__OnButtonClick (UI_NewImportPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4350210

void UI_NewImportPopup__OnButtonClick(UI_NewImportPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  System_String_o *pSVar2;
  bool_conflict bVar3;
  UI_TooltipPopup_c *__this_00;
  MethodInfo *method_00;
  
  if (g_data_057ae134 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae134 = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
label_0435025a:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar3 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar1 = (__this->fields)._onSave;
    if (pUVar1 == (UnityEngine_Events_UnityAction_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae135 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
        g_data_057ae135 = '\x01';
      }
      pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      __this_00 = (UI_TooltipPopup_c *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      Settings_StringSetting___ctor_40f74f0
                ((Settings_StringSetting_o *)__this_00,pSVar2,0x7fffffff,(MethodInfo *)0x0);
      ((UI_TooltipPopup_o *)((long)name + 200))->klass = __this_00;
      il2cpp_runtime_helper_022b4080((UI_TooltipPopup_o *)((long)name + 200),__this_00);
      pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      Settings_StringSetting___ctor_40f74f0
                ((Settings_StringSetting_o *)method_00,pSVar2,0x7fffffff,(MethodInfo *)0x0);
      ((UI_TooltipPopup_o *)((long)name + 200))->monitor = method_00;
      il2cpp_runtime_helper_022b4080(&((UI_TooltipPopup_o *)((long)name + 200))->monitor);
      UI_BasePopup___ctor((UI_TooltipPopup_o *)name,method_00);
      return;
    }
    (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
    if ((char)(__this->fields)._manualHide == '\0') goto label_0435025a;
  }
  return;
}


// UI.NewImportPopup$$.ctor
// il2cpp: void UI_NewImportPopup___ctor (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x43502c0

void UI_NewImportPopup___ctor(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *__this_00;
  MethodInfo *method_00;
  
  if (g_data_057ae135 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae135 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_00,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ImportSetting = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ImportSetting,__this_00);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)method_00,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).FileName = (Settings_StringSetting_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).FileName);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.NewImportPopup$$<Setup>b__21_0
// il2cpp: void UI_NewImportPopup___Setup_b__21_0 (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x43503a0

void UI_NewImportPopup___Setup_b__21_0(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae136 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae136 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_NewImportPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.NewImportPopup$$<Setup>b__21_1
// il2cpp: void UI_NewImportPopup___Setup_b__21_1 (UI_NewImportPopup_o* __this, const MethodInfo* method);
// 0x43503e0

void UI_NewImportPopup___Setup_b__21_1(UI_NewImportPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae137 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    g_data_057ae137 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_NewImportPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


