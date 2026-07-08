// Type: UI.MapEditorCameraPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MapEditorCameraPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MapEditorMenu/MapEditorCameraPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.MapEditorCameraPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorCameraPopup__get_Title (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x410ebe0

System_String_o *
UI_MapEditorCameraPopup__get_Title(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  if (DAT_057048b1 == '\0') {
    il2cpp_init_method_metadata(&"Camera");
    DAT_057048b1 = '\x01';
  }
  return "Camera";
}


// UI.MapEditorCameraPopup$$get_Width
// il2cpp: float UI_MapEditorCameraPopup__get_Width (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x410ec10

float UI_MapEditorCameraPopup__get_Width(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  return 645.0;
}


// UI.MapEditorCameraPopup$$get_Height
// il2cpp: float UI_MapEditorCameraPopup__get_Height (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x410ec20

float UI_MapEditorCameraPopup__get_Height(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  return 310.0;
}


// UI.MapEditorCameraPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorCameraPopup__get_VerticalPadding (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x410ec30

int32_t UI_MapEditorCameraPopup__get_VerticalPadding
                  (UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MapEditorCameraPopup$$get_VerticalSpacing
// il2cpp: float UI_MapEditorCameraPopup__get_VerticalSpacing (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x410ec40

float UI_MapEditorCameraPopup__get_VerticalSpacing
                (UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.MapEditorCameraPopup$$get_DoublePanel
// il2cpp: bool UI_MapEditorCameraPopup__get_DoublePanel (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x410ec50

bool_conflict
UI_MapEditorCameraPopup__get_DoublePanel(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorCameraPopup$$Setup
// il2cpp: void UI_MapEditorCameraPopup__Setup (UI_MapEditorCameraPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x410ec60

void UI_MapEditorCameraPopup__Setup
               (UI_MapEditorCameraPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Collections_Generic_List_InputSettingElement__o *pSVar4;
  UI_InputSettingElement_array *pUVar5;
  long lVar6;
  int32_t fontSize;
  System_String_o *pSVar7;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  UI_InputSettingElement_o *pUVar10;
  
  if (DAT_057048b2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__19_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__19_1);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Rotation Z");
    il2cpp_init_method_metadata(&"Rotation Y");
    il2cpp_init_method_metadata(&"Position X");
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Position Z");
    il2cpp_init_method_metadata(&"Position Y");
    il2cpp_init_method_metadata(&"Rotation X");
    il2cpp_init_method_metadata(&"Save");
    il2cpp_init_method_metadata(&"");
    DAT_057048b2 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar7 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,100.0,20.0,pSVar7,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar7 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar3,__this_00,pSVar7,0.0,pUVar8,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).BottomBar;
  pSVar7 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar3,__this_00,pSVar7,0.0,pUVar8,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._inputs;
  pUVar9 = UI_ElementFactory__CreateInputSetting
                     ((__this->fields).DoublePanelLeft,__this_00,
                      (Settings_BaseSetting_o *)(__this->fields)._positionX,"Position X",
                      "",120.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                      (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                      (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
    pUVar10 = (UI_InputSettingElement_o *)
              UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    lVar6 = MethodInfo_Void_Add;
    if (pSVar4 != (System_Collections_Generic_List_InputSettingElement__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar5 = (pSVar4->fields)._items;
      if (pUVar5 != (UI_InputSettingElement_array *)0x0) {
        uVar2 = (pSVar4->fields)._size;
        if (uVar2 < (uint)pUVar5->max_length) {
          (pSVar4->fields)._size = uVar2 + 1;
          pUVar5->m_Items[(int)uVar2] = pUVar10;
          il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar2,pUVar10);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar10,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        pSVar4 = (__this->fields)._inputs;
        pUVar9 = UI_ElementFactory__CreateInputSetting
                           ((__this->fields).DoublePanelLeft,__this_00,
                            (Settings_BaseSetting_o *)(__this->fields)._positionY,"Position Y",
                            "",120.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                            (UnityEngine_Events_UnityAction_o *)0x0,
                            (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                            (MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
          pUVar10 = (UI_InputSettingElement_o *)
                    UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
          lVar6 = MethodInfo_Void_Add;
          if (pSVar4 != (System_Collections_Generic_List_InputSettingElement__o *)0x0) {
            piVar1 = &(pSVar4->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar5 = (pSVar4->fields)._items;
            if (pUVar5 != (UI_InputSettingElement_array *)0x0) {
              uVar2 = (pSVar4->fields)._size;
              if (uVar2 < (uint)pUVar5->max_length) {
                (pSVar4->fields)._size = uVar2 + 1;
                pUVar5->m_Items[(int)uVar2] = pUVar10;
                il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar2,pUVar10);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar4,
                           (Il2CppObject *)pUVar10,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              pSVar4 = (__this->fields)._inputs;
              pUVar9 = UI_ElementFactory__CreateInputSetting
                                 ((__this->fields).DoublePanelLeft,__this_00,
                                  (Settings_BaseSetting_o *)(__this->fields)._positionZ,"Position Z"
                                  ,"",120.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0
                                  ,(UnityEngine_Events_UnityAction_o *)0x0,
                                  (System_Func_string__bool__o *)0x0,
                                  (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
              if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                pUVar10 = (UI_InputSettingElement_o *)
                          UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
                lVar6 = MethodInfo_Void_Add;
                if (pSVar4 != (System_Collections_Generic_List_InputSettingElement__o *)0x0) {
                  piVar1 = &(pSVar4->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar5 = (pSVar4->fields)._items;
                  if (pUVar5 != (UI_InputSettingElement_array *)0x0) {
                    uVar2 = (pSVar4->fields)._size;
                    if (uVar2 < (uint)pUVar5->max_length) {
                      (pSVar4->fields)._size = uVar2 + 1;
                      pUVar5->m_Items[(int)uVar2] = pUVar10;
                      il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar2,pUVar10);
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar4,
                                 (Il2CppObject *)pUVar10,
                                 *(MethodInfo_35A7350 **)
                                  (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                    }
                    pSVar4 = (__this->fields)._inputs;
                    pUVar9 = UI_ElementFactory__CreateInputSetting
                                       ((__this->fields).DoublePanelRight,__this_00,
                                        (Settings_BaseSetting_o *)(__this->fields)._rotationX,
                                        "Rotation X","",120.0,40.0,0,
                                        (UnityEngine_Events_UnityAction_o *)0x0,
                                        (UnityEngine_Events_UnityAction_o *)0x0,
                                        (System_Func_string__bool__o *)0x0,
                                        (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                    if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar10 = (UI_InputSettingElement_o *)
                                UnityEngine_GameObject__GetComponent<object>(pUVar9,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
                      lVar6 = MethodInfo_Void_Add;
                      if (pSVar4 != (System_Collections_Generic_List_InputSettingElement__o *)0x0) {
                        piVar1 = &(pSVar4->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pUVar5 = (pSVar4->fields)._items;
                        if (pUVar5 != (UI_InputSettingElement_array *)0x0) {
                          uVar2 = (pSVar4->fields)._size;
                          if (uVar2 < (uint)pUVar5->max_length) {
                            (pSVar4->fields)._size = uVar2 + 1;
                            pUVar5->m_Items[(int)uVar2] = pUVar10;
                            il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar2,pUVar10);
                          }
                          else {
                            System_Collections_Generic_List<object>__AddWithResize
                                      ((System_Collections_Generic_List_object__o *)pSVar4,
                                       (Il2CppObject *)pUVar10,
                                       *(MethodInfo_35A7350 **)
                                        (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                          }
                          pSVar4 = (__this->fields)._inputs;
                          pUVar9 = UI_ElementFactory__CreateInputSetting
                                             ((__this->fields).DoublePanelRight,__this_00,
                                              (Settings_BaseSetting_o *)(__this->fields)._rotationY,
                                              "Rotation Y","",120.0,40.0,0,
                                              (UnityEngine_Events_UnityAction_o *)0x0,
                                              (UnityEngine_Events_UnityAction_o *)0x0,
                                              (System_Func_string__bool__o *)0x0,
                                              (System_Func_string__string__o *)0x0,(MethodInfo *)0x0
                                             );
                          if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar10 = (UI_InputSettingElement_o *)
                                      UnityEngine_GameObject__GetComponent<object>
                                                (pUVar9,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
                            lVar6 = MethodInfo_Void_Add;
                            if (pSVar4 != (System_Collections_Generic_List_InputSettingElement__o *)
                                          0x0) {
                              piVar1 = &(pSVar4->fields)._version;
                              *piVar1 = *piVar1 + 1;
                              pUVar5 = (pSVar4->fields)._items;
                              if (pUVar5 != (UI_InputSettingElement_array *)0x0) {
                                uVar2 = (pSVar4->fields)._size;
                                if (uVar2 < (uint)pUVar5->max_length) {
                                  (pSVar4->fields)._size = uVar2 + 1;
                                  pUVar5->m_Items[(int)uVar2] = pUVar10;
                                  il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar2,pUVar10);
                                }
                                else {
                                  System_Collections_Generic_List<object>__AddWithResize
                                            ((System_Collections_Generic_List_object__o *)pSVar4,
                                             (Il2CppObject *)pUVar10,
                                             *(MethodInfo_35A7350 **)
                                              (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                                }
                                pSVar4 = (__this->fields)._inputs;
                                pUVar9 = UI_ElementFactory__CreateInputSetting
                                                   ((__this->fields).DoublePanelRight,__this_00,
                                                    (Settings_BaseSetting_o *)
                                                    (__this->fields)._rotationZ,"Rotation Z",
                                                    "",120.0,40.0,0,
                                                    (UnityEngine_Events_UnityAction_o *)0x0,
                                                    (UnityEngine_Events_UnityAction_o *)0x0,
                                                    (System_Func_string__bool__o *)0x0,
                                                    (System_Func_string__string__o *)0x0,
                                                    (MethodInfo *)0x0);
                                if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar10 = (UI_InputSettingElement_o *)
                                            UnityEngine_GameObject__GetComponent<object>
                                                      (pUVar9,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
                                  lVar6 = MethodInfo_Void_Add;
                                  if (pSVar4 != (System_Collections_Generic_List_InputSettingElement__o
                                                 *)0x0) {
                                    piVar1 = &(pSVar4->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pUVar5 = (pSVar4->fields)._items;
                                    if (pUVar5 != (UI_InputSettingElement_array *)0x0) {
                                      uVar2 = (pSVar4->fields)._size;
                                      if (uVar2 < (uint)pUVar5->max_length) {
                                        (pSVar4->fields)._size = uVar2 + 1;
                                        pUVar5->m_Items[(int)uVar2] = pUVar10;
                                        il2cpp_runtime_glue(pUVar5->m_Items + (int)uVar2,pUVar10);
                                        return;
                                      }
                                      System_Collections_Generic_List<object>__AddWithResize
                                                ((System_Collections_Generic_List_object__o *)pSVar4
                                                 ,(Il2CppObject *)pUVar10,
                                                 *(MethodInfo_35A7350 **)
                                                  (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                                );
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


// UI.MapEditorCameraPopup$$Show
// il2cpp: void UI_MapEditorCameraPopup__Show (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x410f330

void UI_MapEditorCameraPopup__Show(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Transform_o *__this_00;
  Settings_FloatSetting_o *pSVar2;
  System_Collections_Generic_List_InputSettingElement__o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Vector3_o euler_01;
  UnityEngine_Quaternion_o UVar5;
  System_Collections_Generic_List_T__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  Il2CppObject *pIVar8;
  
  if (DAT_057048b3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_InputSettingElement_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UI_InputSettingElement__Get);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_057048b3 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  pIVar8 = (Il2CppObject *)0x0;
  __this_04 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_04 != (UnityEngine_GameObject_o *)0x0) {
    bVar3 = UnityEngine_GameObject__get_activeSelf(__this_04,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) &&
       (__this_00 = *(UnityEngine_Transform_o **)(lVar1 + 0x10),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      pSVar2 = (__this->fields)._positionX;
      UVar4 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      if (pSVar2 != (Settings_FloatSetting_o *)0x0) {
        Settings_TypedSetting<float>__set_Value
                  ((Settings_TypedSetting_float__o *)pSVar2,UVar4.fields.x,MethodInfo_Void_set_Value);
        pSVar2 = (__this->fields)._positionY;
        UVar4 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
        if (pSVar2 != (Settings_FloatSetting_o *)0x0) {
          Settings_TypedSetting<float>__set_Value
                    ((Settings_TypedSetting_float__o *)pSVar2,UVar4.fields.y,MethodInfo_Void_set_Value);
          pSVar2 = (__this->fields)._positionZ;
          UVar4 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
          if (pSVar2 != (Settings_FloatSetting_o *)0x0) {
            Settings_TypedSetting<float>__set_Value
                      ((Settings_TypedSetting_float__o *)pSVar2,UVar4.fields.z,MethodInfo_Void_set_Value);
            pSVar2 = (__this->fields)._rotationX;
            UVar5 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
            UVar4 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar5,(MethodInfo *)0x0);
            euler.fields.x = UVar4.fields.x * 57.29578;
            euler.fields.y = UVar4.fields.y * 57.29578;
            euler.fields.z = UVar4.fields.z * 57.29578;
            UVar4 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
            if (pSVar2 != (Settings_FloatSetting_o *)0x0) {
              Settings_TypedSetting<float>__set_Value
                        ((Settings_TypedSetting_float__o *)pSVar2,UVar4.fields.x,MethodInfo_Void_set_Value);
              pSVar2 = (__this->fields)._rotationY;
              UVar5 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
              UVar4 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar5,(MethodInfo *)0x0);
              euler_00.fields.x = UVar4.fields.x * 57.29578;
              euler_00.fields.y = UVar4.fields.y * 57.29578;
              euler_00.fields.z = UVar4.fields.z * 57.29578;
              UVar4 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
              if (pSVar2 != (Settings_FloatSetting_o *)0x0) {
                Settings_TypedSetting<float>__set_Value
                          ((Settings_TypedSetting_float__o *)pSVar2,UVar4.fields.y,MethodInfo_Void_set_Value);
                pSVar2 = (__this->fields)._rotationZ;
                UVar5 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
                UVar4 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar5,(MethodInfo *)0x0);
                euler_01.fields.x = UVar4.fields.x * 57.29578;
                euler_01.fields.y = UVar4.fields.y * 57.29578;
                euler_01.fields.z = UVar4.fields.z * 57.29578;
                UVar4 = UnityEngine_Quaternion__Internal_MakePositive(euler_01,(MethodInfo *)0x0);
                if (pSVar2 != (Settings_FloatSetting_o *)0x0) {
                  Settings_TypedSetting<float>__set_Value
                            ((Settings_TypedSetting_float__o *)pSVar2,UVar4.fields.z,MethodInfo_Void_set_Value);
                  __this_01 = (__this->fields)._inputs;
                  if (__this_01 != (System_Collections_Generic_List_InputSettingElement__o *)0x0) {
                    System_Collections_Generic_List<object>__GetEnumerator
                              ((System_Collections_Generic_List_Enumerator_T__o *)
                               &stack0xffffffffffffffc8,
                               (System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T__Enumerator_UI_InputSettingElement__Get);
                    while( true ) {
                      __this_02.fields._8_8_ = pIVar7;
                      __this_02.fields._list = pSVar6;
                      __this_02.fields._current = pIVar8;
                      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                        (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
                      if ((char)bVar3 == '\0') {
                        __this_03.fields._8_8_ = pIVar7;
                        __this_03.fields._list = pSVar6;
                        __this_03.fields._current = pIVar8;
                        System_Collections_Generic_List_Enumerator<object>__Dispose
                                  (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
                        return;
                      }
                      if (pIVar8 == (Il2CppObject *)0x0) break;
                      (*pIVar8->klass->vtable[6].methodPtr)(pIVar8,pIVar8->klass->vtable[6].method);
                    }
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
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


// UI.MapEditorCameraPopup$$OnButtonClick
// il2cpp: void UI_MapEditorCameraPopup__OnButtonClick (UI_MapEditorCameraPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x410f670

void UI_MapEditorCameraPopup__OnButtonClick
               (UI_MapEditorCameraPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  long lVar1;
  Settings_FloatSetting_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  UnityEngine_Transform_o *__this_00;
  bool_conflict bVar5;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o value_00;
  
  if (DAT_057048b4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Save");
    DAT_057048b4 = '\x01';
  }
  bVar5 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    bVar5 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (((((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) &&
         (pSVar2 = (__this->fields)._positionX, pSVar2 != (Settings_FloatSetting_o *)0x0)) &&
        ((pSVar3 = (__this->fields)._positionY, pSVar3 != (Settings_FloatSetting_o *)0x0 &&
         (pSVar4 = (__this->fields)._positionZ, pSVar4 != (Settings_FloatSetting_o *)0x0)))) &&
       (__this_00 = *(UnityEngine_Transform_o **)(lVar1 + 0x10),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      value.fields.y = (pSVar3->fields)._value;
      value.fields.x = (pSVar2->fields)._value;
      value.fields.z = (pSVar4->fields)._value;
      UnityEngine_Transform__set_position(__this_00,value,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._rotationX;
      if (((pSVar2 != (Settings_FloatSetting_o *)0x0) &&
          (pSVar3 = (__this->fields)._rotationY, pSVar3 != (Settings_FloatSetting_o *)0x0)) &&
         (pSVar4 = (__this->fields)._rotationZ, pSVar4 != (Settings_FloatSetting_o *)0x0)) {
        euler.fields.x = (pSVar2->fields)._value * 0.017453292;
        euler.fields.y = (pSVar3->fields)._value * 0.017453292;
        euler.fields.z = (pSVar4->fields)._value * 0.017453292;
        value_00 = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation(__this_00,value_00,(MethodInfo *)0x0);
        goto LAB_0410f7cd;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0410f7cd:
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.MapEditorCameraPopup$$.ctor
// il2cpp: void UI_MapEditorCameraPopup___ctor (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x410f800

void UI_MapEditorCameraPopup___ctor(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_InputSettingElement__o *__this_00;
  Settings_FloatSetting_o *pSVar1;
  
  if (DAT_057048b5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UI_InputSettingElement);
    il2cpp_init_method_metadata(&TypeInfo_List_InputSettingElement);
    DAT_057048b5 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_InputSettingElement__o *)
              il2cpp_runtime_glue(TypeInfo_List_InputSettingElement);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_InputSettingElement);
  (__this->fields)._inputs = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._inputs);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._positionX = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._positionX);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._positionY = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._positionY);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._positionZ = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._positionZ);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._rotationX = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._rotationX);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._rotationY = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._rotationY);
  pSVar1 = (Settings_FloatSetting_o *)il2cpp_runtime_glue(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._rotationZ = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._rotationZ);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCameraPopup$$<Setup>b__19_0
// il2cpp: void UI_MapEditorCameraPopup___Setup_b__19_0 (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x410f990

void UI_MapEditorCameraPopup__<Setup>b__19_0(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057048b6 == '\0') {
    il2cpp_init_method_metadata(&"Save");
    DAT_057048b6 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorCameraPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.MapEditorCameraPopup$$<Setup>b__19_1
// il2cpp: void UI_MapEditorCameraPopup___Setup_b__19_1 (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x410f9d0

void UI_MapEditorCameraPopup__<Setup>b__19_1(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057048b7 == '\0') {
    il2cpp_init_method_metadata(&"Cancel");
    DAT_057048b7 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorCameraPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


