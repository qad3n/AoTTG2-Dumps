// Type: UI.MapEditorCameraPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorCameraPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorCameraPopup.cs
// --------------------------------

// UI.MapEditorCameraPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorCameraPopup__get_Title (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x44230b0

System_String_o * UI_MapEditorCameraPopup__get_Title(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae64d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Camera");
    g_data_057ae64d = '\x01';
  }
  return "Camera";
}


// UI.MapEditorCameraPopup$$get_Width
// il2cpp: float UI_MapEditorCameraPopup__get_Width (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x44230e0

float UI_MapEditorCameraPopup__get_Width(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  return 645.0;
}


// UI.MapEditorCameraPopup$$get_Height
// il2cpp: float UI_MapEditorCameraPopup__get_Height (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x44230f0

float UI_MapEditorCameraPopup__get_Height(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  return 310.0;
}


// UI.MapEditorCameraPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorCameraPopup__get_VerticalPadding (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x4423100

int32_t UI_MapEditorCameraPopup__get_VerticalPadding(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MapEditorCameraPopup$$get_VerticalSpacing
// il2cpp: float UI_MapEditorCameraPopup__get_VerticalSpacing (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x4423110

float UI_MapEditorCameraPopup__get_VerticalSpacing(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.MapEditorCameraPopup$$get_DoublePanel
// il2cpp: bool UI_MapEditorCameraPopup__get_DoublePanel (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x4423120

bool_conflict UI_MapEditorCameraPopup__get_DoublePanel(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorCameraPopup$$Setup
// il2cpp: void UI_MapEditorCameraPopup__Setup (UI_MapEditorCameraPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4423130

void UI_MapEditorCameraPopup__Setup
               (UI_MapEditorCameraPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Collections_Generic_List_InputSettingElement__o *pSVar4;
  UI_InputSettingElement_array *pUVar5;
  long lVar6;
  Settings_TypedSetting_float__o *pSVar7;
  System_Threading_CancellationTokenSource_o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  int32_t fontSize;
  bool_conflict bVar8;
  System_String_o *pSVar9;
  UI_ElementStyle_o *__this_05;
  UnityEngine_Events_UnityAction_o *pUVar10;
  UI_BasePopup_o *pUVar11;
  UI_InputSettingElement_o *pUVar12;
  UnityEngine_GameObject_o *__this_06;
  long *plVar13;
  UI_BasePopup_o *__this_07;
  UnityEngine_Quaternion_o UVar14;
  undefined1 auVar15 [12];
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Vector3_o euler_01;
  System_Collections_Generic_List_T__o *pSVar17;
  Il2CppMethodPointer pIVar18;
  Il2CppObject *pIVar19;
  
  if (g_data_057ae64e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__19_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__19_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Rotation Z");
    il2cpp_runtime_helper_023445d0(&"Rotation Y");
    il2cpp_runtime_helper_023445d0(&"Position X");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Position Z");
    il2cpp_runtime_helper_023445d0(&"Position Y");
    il2cpp_runtime_helper_023445d0(&"Rotation X");
    il2cpp_runtime_helper_023445d0(&"Save");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae64e = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar9 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_05 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_05,fontSize,100.0,20.0,pSVar9,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar3,__this_05,pSVar9,0.0,pUVar10,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).BottomBar;
  pSVar9 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar3,__this_05,pSVar9,0.0,pUVar10,(MethodInfo *)0x0);
  __this_07 = (UI_BasePopup_o *)(__this->fields).DoublePanelLeft;
  pSVar4 = (__this->fields)._inputs;
  pUVar11 = (UI_BasePopup_o *)
            UI_ElementFactory__CreateInputSetting
                      ((UnityEngine_Transform_o *)__this_07,__this_05,
                       (Settings_BaseSetting_o *)(__this->fields)._positionX,"Position X","",120.0,
                       40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                       (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                       (MethodInfo *)0x0);
  if ((pUVar11 != (UI_BasePopup_o *)0x0) &&
     (pUVar12 = (UI_InputSettingElement_o *)
                UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar11,MethodInfo_InputSettingElement_GetComponent_InputSettingElement)
     , lVar6 = MethodInfo_Void_Add, __this_07 = pUVar11,
     pSVar4 != (System_Collections_Generic_List_InputSettingElement__o *)0x0)) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar5 = (pSVar4->fields)._items;
    if (pUVar5 != (UI_InputSettingElement_array *)0x0) {
      uVar2 = (pSVar4->fields)._size;
      if (uVar2 < (uint)pUVar5->max_length) {
        (pSVar4->fields)._size = uVar2 + 1;
        pUVar5->m_Items[(int)uVar2] = pUVar12;
        il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2,pUVar12);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar12,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      __this_07 = (UI_BasePopup_o *)(__this->fields).DoublePanelLeft;
      pSVar4 = (__this->fields)._inputs;
      pUVar11 = (UI_BasePopup_o *)
                UI_ElementFactory__CreateInputSetting
                          ((UnityEngine_Transform_o *)__this_07,__this_05,
                           (Settings_BaseSetting_o *)(__this->fields)._positionY,"Position Y","",
                           120.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                           (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                           (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      if ((pUVar11 != (UI_BasePopup_o *)0x0) &&
         (pUVar12 = (UI_InputSettingElement_o *)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)pUVar11,MethodInfo_InputSettingElement_GetComponent_InputSettingElement), lVar6 = MethodInfo_Void_Add,
         __this_07 = pUVar11, pSVar4 != (System_Collections_Generic_List_InputSettingElement__o *)0x0)) {
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar5 = (pSVar4->fields)._items;
        if (pUVar5 != (UI_InputSettingElement_array *)0x0) {
          uVar2 = (pSVar4->fields)._size;
          if (uVar2 < (uint)pUVar5->max_length) {
            (pSVar4->fields)._size = uVar2 + 1;
            pUVar5->m_Items[(int)uVar2] = pUVar12;
            il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2,pUVar12);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar12,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          __this_07 = (UI_BasePopup_o *)(__this->fields).DoublePanelLeft;
          pSVar4 = (__this->fields)._inputs;
          pUVar11 = (UI_BasePopup_o *)
                    UI_ElementFactory__CreateInputSetting
                              ((UnityEngine_Transform_o *)__this_07,__this_05,
                               (Settings_BaseSetting_o *)(__this->fields)._positionZ,"Position Z",""
                               ,120.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                               (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                               (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
          if ((pUVar11 != (UI_BasePopup_o *)0x0) &&
             (pUVar12 = (UI_InputSettingElement_o *)
                        UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)pUVar11,MethodInfo_InputSettingElement_GetComponent_InputSettingElement), lVar6 = MethodInfo_Void_Add,
             __this_07 = pUVar11, pSVar4 != (System_Collections_Generic_List_InputSettingElement__o *)0x0)) {
            piVar1 = &(pSVar4->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar5 = (pSVar4->fields)._items;
            if (pUVar5 != (UI_InputSettingElement_array *)0x0) {
              uVar2 = (pSVar4->fields)._size;
              if (uVar2 < (uint)pUVar5->max_length) {
                (pSVar4->fields)._size = uVar2 + 1;
                pUVar5->m_Items[(int)uVar2] = pUVar12;
                il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2,pUVar12);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar12,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              __this_07 = (UI_BasePopup_o *)(__this->fields).DoublePanelRight;
              pSVar4 = (__this->fields)._inputs;
              pUVar11 = (UI_BasePopup_o *)
                        UI_ElementFactory__CreateInputSetting
                                  ((UnityEngine_Transform_o *)__this_07,__this_05,
                                   (Settings_BaseSetting_o *)(__this->fields)._rotationX,"Rotation X",
                                   "",120.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                                   (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                                   (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
              if ((pUVar11 != (UI_BasePopup_o *)0x0) &&
                 (pUVar12 = (UI_InputSettingElement_o *)
                            UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)pUVar11,MethodInfo_InputSettingElement_GetComponent_InputSettingElement), lVar6 = MethodInfo_Void_Add
                 , __this_07 = pUVar11,
                 pSVar4 != (System_Collections_Generic_List_InputSettingElement__o *)0x0)) {
                piVar1 = &(pSVar4->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar5 = (pSVar4->fields)._items;
                if (pUVar5 != (UI_InputSettingElement_array *)0x0) {
                  uVar2 = (pSVar4->fields)._size;
                  if (uVar2 < (uint)pUVar5->max_length) {
                    (pSVar4->fields)._size = uVar2 + 1;
                    pUVar5->m_Items[(int)uVar2] = pUVar12;
                    il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2,pUVar12);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar12,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                  }
                  __this_07 = (UI_BasePopup_o *)(__this->fields).DoublePanelRight;
                  pSVar4 = (__this->fields)._inputs;
                  pUVar11 = (UI_BasePopup_o *)
                            UI_ElementFactory__CreateInputSetting
                                      ((UnityEngine_Transform_o *)__this_07,__this_05,
                                       (Settings_BaseSetting_o *)(__this->fields)._rotationY,"Rotation Y",
                                       "",120.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                       (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0
                                       ,(MethodInfo *)0x0);
                  if ((pUVar11 != (UI_BasePopup_o *)0x0) &&
                     (pUVar12 = (UI_InputSettingElement_o *)
                                UnityEngine_GameObject__GetComponent_object_
                                          ((UnityEngine_GameObject_o *)pUVar11,MethodInfo_InputSettingElement_GetComponent_InputSettingElement),
                     lVar6 = MethodInfo_Void_Add, __this_07 = pUVar11,
                     pSVar4 != (System_Collections_Generic_List_InputSettingElement__o *)0x0)) {
                    piVar1 = &(pSVar4->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar5 = (pSVar4->fields)._items;
                    if (pUVar5 != (UI_InputSettingElement_array *)0x0) {
                      uVar2 = (pSVar4->fields)._size;
                      if (uVar2 < (uint)pUVar5->max_length) {
                        (pSVar4->fields)._size = uVar2 + 1;
                        pUVar5->m_Items[(int)uVar2] = pUVar12;
                        il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2,pUVar12);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar12
                                   ,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                  );
                      }
                      __this_07 = (UI_BasePopup_o *)(__this->fields).DoublePanelRight;
                      pSVar4 = (__this->fields)._inputs;
                      pUVar11 = (UI_BasePopup_o *)
                                UI_ElementFactory__CreateInputSetting
                                          ((UnityEngine_Transform_o *)__this_07,__this_05,
                                           (Settings_BaseSetting_o *)(__this->fields)._rotationZ,"Rotation Z",
                                           "",120.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                           (System_Func_string__bool__o *)0x0,
                                           (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                      if ((pUVar11 != (UI_BasePopup_o *)0x0) &&
                         (pUVar12 = (UI_InputSettingElement_o *)
                                    UnityEngine_GameObject__GetComponent_object_
                                              ((UnityEngine_GameObject_o *)pUVar11,MethodInfo_InputSettingElement_GetComponent_InputSettingElement),
                         lVar6 = MethodInfo_Void_Add, __this_07 = pUVar11,
                         pSVar4 != (System_Collections_Generic_List_InputSettingElement__o *)0x0)) {
                        piVar1 = &(pSVar4->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pUVar5 = (pSVar4->fields)._items;
                        if (pUVar5 != (UI_InputSettingElement_array *)0x0) {
                          uVar2 = (pSVar4->fields)._size;
                          if ((uint)pUVar5->max_length <= uVar2) {
                            System_Collections_Generic_List_object___AddWithResize
                                      ((System_Collections_Generic_List_object__o *)pSVar4,
                                       (Il2CppObject *)pUVar12,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                            return;
                          }
                          (pSVar4->fields)._size = uVar2 + 1;
                          pUVar5->m_Items[(int)uVar2] = pUVar12;
                          il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar2,pUVar12);
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae64f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_InputSettingElement_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae64f = '\x01';
  }
  pSVar17 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar18 = (Il2CppMethodPointer)0x0;
  pIVar19 = (Il2CppObject *)0x0;
  __this_06 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0);
  if (__this_06 != (UnityEngine_GameObject_o *)0x0) {
    bVar8 = UnityEngine_GameObject__get_activeSelf(__this_06,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    UI_BasePopup__Show(__this_07,(MethodInfo *)0x0);
    lVar6 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x28), lVar6 != 0)) &&
       (pUVar3 = *(UnityEngine_Transform_o **)(lVar6 + 0x10), pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      pSVar7 = __this_07[1].monitor;
      UVar16 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
      if (pSVar7 != (Settings_TypedSetting_float__o *)0x0) {
        Settings_TypedSetting_float___set_Value(pSVar7,UVar16.fields.x,MethodInfo_Void_set_Value);
        pSVar7 = (Settings_TypedSetting_float__o *)__this_07[1].fields.m_CachedPtr;
        UVar16 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
        if (pSVar7 != (Settings_TypedSetting_float__o *)0x0) {
          Settings_TypedSetting_float___set_Value(pSVar7,UVar16.fields.y,MethodInfo_Void_set_Value);
          __this_00 = __this_07[1].fields.m_CancellationTokenSource;
          UVar16 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
          if (__this_00 != (System_Threading_CancellationTokenSource_o *)0x0) {
            Settings_TypedSetting_float___set_Value
                      ((Settings_TypedSetting_float__o *)__this_00,UVar16.fields.z,MethodInfo_Void_set_Value);
            pSVar7 = (Settings_TypedSetting_float__o *)__this_07[1].fields.SinglePanel;
            UVar14 = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
            UVar16 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar14,(MethodInfo *)0x0);
            euler.fields.x = UVar16.fields.x * 57.29578;
            euler.fields.y = UVar16.fields.y * 57.29578;
            euler.fields.z = UVar16.fields.z * 57.29578;
            UVar16 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
            if (pSVar7 != (Settings_TypedSetting_float__o *)0x0) {
              Settings_TypedSetting_float___set_Value(pSVar7,UVar16.fields.x,MethodInfo_Void_set_Value);
              pSVar7 = (Settings_TypedSetting_float__o *)__this_07[1].fields.DoublePanelLeft;
              UVar14 = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
              UVar16 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar14,(MethodInfo *)0x0);
              euler_00.fields.x = UVar16.fields.x * 57.29578;
              euler_00.fields.y = UVar16.fields.y * 57.29578;
              euler_00.fields.z = UVar16.fields.z * 57.29578;
              UVar16 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
              if (pSVar7 != (Settings_TypedSetting_float__o *)0x0) {
                Settings_TypedSetting_float___set_Value(pSVar7,UVar16.fields.y,MethodInfo_Void_set_Value);
                pSVar7 = (Settings_TypedSetting_float__o *)__this_07[1].fields.DoublePanelRight;
                UVar14 = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
                UVar16 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar14,(MethodInfo *)0x0);
                euler_01.fields.x = UVar16.fields.x * 57.29578;
                euler_01.fields.y = UVar16.fields.y * 57.29578;
                euler_01.fields.z = UVar16.fields.z * 57.29578;
                UVar16 = UnityEngine_Quaternion__Internal_MakePositive(euler_01,(MethodInfo *)0x0);
                if (pSVar7 != (Settings_TypedSetting_float__o *)0x0) {
                  Settings_TypedSetting_float___set_Value(pSVar7,UVar16.fields.z,MethodInfo_Void_set_Value);
                  if (__this_07[1].klass != (UI_BasePopup_c *)0x0) {
                    System_Collections_Generic_List_object___GetEnumerator
                              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff70,
                               (System_Collections_Generic_List_object__o *)__this_07[1].klass,MethodInfo_List_1_T_Enumerator_UI_InputSettingElement_GetEnumerator);
                    while( true ) {
                      __this_01.fields._8_8_ = pIVar18;
                      __this_01.fields._list = pSVar17;
                      __this_01.fields._current = pIVar19;
                      bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70);
                      if ((char)bVar8 == '\0') {
                        __this_02.fields._8_8_ = pIVar18;
                        __this_02.fields._list = pSVar17;
                        __this_02.fields._current = pIVar19;
                        System_Collections_Generic_List_Enumerator_object___Dispose
                                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
                        return;
                      }
                      if (pIVar19 == (Il2CppObject *)0x0) break;
                      (*pIVar19->klass->vtable[6].methodPtr)(pIVar19,pIVar19->klass->vtable[6].method);
                    }
                    il2cpp_runtime_helper_022b2c90();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  auVar15 = il2cpp_runtime_helper_022b2c90();
  if (auVar15._8_4_ == 1) {
    plVar13 = (long *)__cxa_begin_catch(auVar15._0_8_);
    lVar6 = *plVar13;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar18;
    __this_03.fields._list = pSVar17;
    __this_03.fields._current = pIVar19;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
    if (lVar6 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar6);
  }
  __this_04.fields._8_8_ = pIVar18;
  __this_04.fields._list = pSVar17;
  __this_04.fields._current = pIVar19;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
  _Unwind_Resume(auVar15._0_8_);
}


// UI.MapEditorCameraPopup$$Show
// il2cpp: void UI_MapEditorCameraPopup__Show (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x4423800

void UI_MapEditorCameraPopup__Show(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Transform_o *__this_00;
  Settings_FloatSetting_o *pSVar2;
  System_Collections_Generic_List_InputSettingElement__o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *__this_06;
  long *plVar4;
  UnityEngine_Quaternion_o UVar5;
  undefined1 auVar6 [12];
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Vector3_o euler_01;
  System_Collections_Generic_List_T__o *pSVar8;
  Il2CppMethodPointer pIVar9;
  Il2CppObject *pIVar10;
  
  if (g_data_057ae64f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_InputSettingElement_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae64f = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  pIVar10 = (Il2CppObject *)0x0;
  __this_06 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_06 != (UnityEngine_GameObject_o *)0x0) {
    bVar3 = UnityEngine_GameObject__get_activeSelf(__this_06,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) &&
       (__this_00 = *(UnityEngine_Transform_o **)(lVar1 + 0x10), __this_00 != (UnityEngine_Transform_o *)0x0))
    {
      pSVar2 = (__this->fields)._positionX;
      UVar7 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      if (pSVar2 != (Settings_FloatSetting_o *)0x0) {
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)pSVar2,UVar7.fields.x,MethodInfo_Void_set_Value);
        pSVar2 = (__this->fields)._positionY;
        UVar7 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
        if (pSVar2 != (Settings_FloatSetting_o *)0x0) {
          Settings_TypedSetting_float___set_Value
                    ((Settings_TypedSetting_float__o *)pSVar2,UVar7.fields.y,MethodInfo_Void_set_Value);
          pSVar2 = (__this->fields)._positionZ;
          UVar7 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
          if (pSVar2 != (Settings_FloatSetting_o *)0x0) {
            Settings_TypedSetting_float___set_Value
                      ((Settings_TypedSetting_float__o *)pSVar2,UVar7.fields.z,MethodInfo_Void_set_Value);
            pSVar2 = (__this->fields)._rotationX;
            UVar5 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
            UVar7 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar5,(MethodInfo *)0x0);
            euler.fields.x = UVar7.fields.x * 57.29578;
            euler.fields.y = UVar7.fields.y * 57.29578;
            euler.fields.z = UVar7.fields.z * 57.29578;
            UVar7 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
            if (pSVar2 != (Settings_FloatSetting_o *)0x0) {
              Settings_TypedSetting_float___set_Value
                        ((Settings_TypedSetting_float__o *)pSVar2,UVar7.fields.x,MethodInfo_Void_set_Value);
              pSVar2 = (__this->fields)._rotationY;
              UVar5 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
              UVar7 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar5,(MethodInfo *)0x0);
              euler_00.fields.x = UVar7.fields.x * 57.29578;
              euler_00.fields.y = UVar7.fields.y * 57.29578;
              euler_00.fields.z = UVar7.fields.z * 57.29578;
              UVar7 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
              if (pSVar2 != (Settings_FloatSetting_o *)0x0) {
                Settings_TypedSetting_float___set_Value
                          ((Settings_TypedSetting_float__o *)pSVar2,UVar7.fields.y,MethodInfo_Void_set_Value);
                pSVar2 = (__this->fields)._rotationZ;
                UVar5 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
                UVar7 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar5,(MethodInfo *)0x0);
                euler_01.fields.x = UVar7.fields.x * 57.29578;
                euler_01.fields.y = UVar7.fields.y * 57.29578;
                euler_01.fields.z = UVar7.fields.z * 57.29578;
                UVar7 = UnityEngine_Quaternion__Internal_MakePositive(euler_01,(MethodInfo *)0x0);
                if (pSVar2 != (Settings_FloatSetting_o *)0x0) {
                  Settings_TypedSetting_float___set_Value
                            ((Settings_TypedSetting_float__o *)pSVar2,UVar7.fields.z,MethodInfo_Void_set_Value);
                  __this_01 = (__this->fields)._inputs;
                  if (__this_01 != (System_Collections_Generic_List_InputSettingElement__o *)0x0) {
                    System_Collections_Generic_List_object___GetEnumerator
                              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                               (System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T_Enumerator_UI_InputSettingElement_GetEnumerator);
                    while( true ) {
                      __this_02.fields._8_8_ = pIVar9;
                      __this_02.fields._list = pSVar8;
                      __this_02.fields._current = pIVar10;
                      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                        (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
                      if ((char)bVar3 == '\0') {
                        __this_03.fields._8_8_ = pIVar9;
                        __this_03.fields._list = pSVar8;
                        __this_03.fields._current = pIVar10;
                        System_Collections_Generic_List_Enumerator_object___Dispose
                                  (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
                        return;
                      }
                      if (pIVar10 == (Il2CppObject *)0x0) break;
                      (*pIVar10->klass->vtable[6].methodPtr)(pIVar10,pIVar10->klass->vtable[6].method);
                    }
                    il2cpp_runtime_helper_022b2c90();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  auVar6 = il2cpp_runtime_helper_022b2c90();
  if (auVar6._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar1 = *plVar4;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar9;
    __this_04.fields._list = pSVar8;
    __this_04.fields._current = pIVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_05.fields._8_8_ = pIVar9;
  __this_05.fields._list = pSVar8;
  __this_05.fields._current = pIVar10;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar6._0_8_);
}


// UI.MapEditorCameraPopup$$OnButtonClick
// il2cpp: void UI_MapEditorCameraPopup__OnButtonClick (UI_MapEditorCameraPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4423b40

void UI_MapEditorCameraPopup__OnButtonClick
               (UI_MapEditorCameraPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  long lVar1;
  Settings_FloatSetting_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  UI_TooltipPopup_o *__this_00;
  bool_conflict bVar4;
  UnityEngine_UI_Text_o *__this_01;
  Settings_FloatSetting_o *pSVar5;
  UI_TooltipPopup_c *__this_02;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o euler;
  
  if (g_data_057ae650 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae650 = '\x01';
  }
  bVar4 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    bVar4 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (((((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) &&
         (pSVar5 = (__this->fields)._positionX, pSVar5 != (Settings_FloatSetting_o *)0x0)) &&
        ((pSVar2 = (__this->fields)._positionY, pSVar2 != (Settings_FloatSetting_o *)0x0 &&
         (pSVar3 = (__this->fields)._positionZ, pSVar3 != (Settings_FloatSetting_o *)0x0)))) &&
       (__this_00 = *(UI_TooltipPopup_o **)(lVar1 + 0x10), __this_00 != (UI_TooltipPopup_o *)0x0)) {
      value_00.fields.y = (pSVar2->fields)._value;
      value_00.fields.x = (pSVar5->fields)._value;
      value_00.fields.z = (pSVar3->fields)._value;
      name = (System_String_o *)__this_00;
      UnityEngine_Transform__set_position((UnityEngine_Transform_o *)__this_00,value_00,(MethodInfo *)0x0);
      pSVar5 = (__this->fields)._rotationX;
      if (((pSVar5 != (Settings_FloatSetting_o *)0x0) &&
          (pSVar2 = (__this->fields)._rotationY, pSVar2 != (Settings_FloatSetting_o *)0x0)) &&
         (pSVar3 = (__this->fields)._rotationZ, pSVar3 != (Settings_FloatSetting_o *)0x0)) {
        euler.fields.x = (pSVar5->fields)._value * 0.017453292;
        euler.fields.y = (pSVar2->fields)._value * 0.017453292;
        euler.fields.z = (pSVar3->fields)._value * 0.017453292;
        value = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)__this_00,value,(MethodInfo *)0x0);
        goto label_04423c9d;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae651 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_InputSettingElement);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_InputSettingElement);
      g_data_057ae651 = '\x01';
    }
    __this_01 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_InputSettingElement);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UI_InputSettingElement);
    (((UI_TooltipPopup_o *)name)->fields)._label = __this_01;
    il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)name)->fields)._label);
    pSVar5 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
    Settings_FloatSetting___ctor(pSVar5,(MethodInfo *)0x0);
    (((UI_TooltipPopup_o *)name)->fields)._panel = (UnityEngine_RectTransform_o *)pSVar5;
    il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)name)->fields)._panel);
    pSVar5 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
    Settings_FloatSetting___ctor(pSVar5,(MethodInfo *)0x0);
    (((UI_TooltipPopup_o *)name)->fields).Caller = (UnityEngine_Component_o *)pSVar5;
    il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)name)->fields).Caller);
    pSVar5 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
    Settings_FloatSetting___ctor(pSVar5,(MethodInfo *)0x0);
    *(Settings_FloatSetting_o **)&(((UI_TooltipPopup_o *)name)->fields)._offset = pSVar5;
    il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)name)->fields)._offset);
    __this_02 = (UI_TooltipPopup_c *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
    Settings_FloatSetting___ctor((Settings_FloatSetting_o *)__this_02,(MethodInfo *)0x0);
    ((UI_TooltipPopup_o *)((long)name + 200))->klass = __this_02;
    il2cpp_runtime_helper_022b4080((UI_TooltipPopup_o *)((long)name + 200));
    pSVar5 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
    Settings_FloatSetting___ctor(pSVar5,(MethodInfo *)0x0);
    ((UI_TooltipPopup_o *)((long)name + 200))->monitor = pSVar5;
    il2cpp_runtime_helper_022b4080(&((UI_TooltipPopup_o *)((long)name + 200))->monitor);
    pSVar5 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
    Settings_FloatSetting___ctor(pSVar5,(MethodInfo *)0x0);
    (((UI_TooltipPopup_o *)((long)name + 200))->fields).m_CachedPtr = (intptr_t)pSVar5;
    il2cpp_runtime_helper_022b4080(&((UI_TooltipPopup_o *)((long)name + 200))->fields);
    UI_PromptPopup___ctor((UI_TooltipPopup_o *)name,(MethodInfo *)0x0);
    return;
  }
label_04423c9d:
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.MapEditorCameraPopup$$.ctor
// il2cpp: void UI_MapEditorCameraPopup___ctor (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x4423cd0

void UI_MapEditorCameraPopup___ctor(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_InputSettingElement__o *__this_00;
  Settings_FloatSetting_o *pSVar1;
  
  if (g_data_057ae651 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_InputSettingElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_InputSettingElement);
    g_data_057ae651 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_InputSettingElement__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_InputSettingElement);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_InputSettingElement);
  (__this->fields)._inputs = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._inputs);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._positionX = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._positionX);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._positionY = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._positionY);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._positionZ = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._positionZ);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._rotationX = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._rotationX);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._rotationY = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._rotationY);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._rotationZ = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._rotationZ);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCameraPopup$$<Setup>b__19_0
// il2cpp: void UI_MapEditorCameraPopup___Setup_b__19_0 (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x4423e60

void UI_MapEditorCameraPopup___Setup_b__19_0(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae652 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae652 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorCameraPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.MapEditorCameraPopup$$<Setup>b__19_1
// il2cpp: void UI_MapEditorCameraPopup___Setup_b__19_1 (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x4423ea0

void UI_MapEditorCameraPopup___Setup_b__19_1(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae653 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    g_data_057ae653 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorCameraPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


