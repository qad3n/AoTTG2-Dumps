// Type: UI.MapEditorCameraPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorCameraPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorCameraPopup.cs
// --------------------------------

// UI.MapEditorCameraPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorCameraPopup__get_Title (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x5d6be50

System_String_o * UI_MapEditorCameraPopup__get_Title(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547f98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Tools");
    il2cpp_codegen_initialize_runtime_metadata(&"Camera");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547f98 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MapEditor","Tools","Camera","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MapEditorCameraPopup$$get_Width
// il2cpp: float UI_MapEditorCameraPopup__get_Width (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x5d6bef0

float UI_MapEditorCameraPopup__get_Width(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  return 645.0;
}


// UI.MapEditorCameraPopup$$get_Height
// il2cpp: float UI_MapEditorCameraPopup__get_Height (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x5d6bf00

float UI_MapEditorCameraPopup__get_Height(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  return 310.0;
}


// UI.MapEditorCameraPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorCameraPopup__get_VerticalPadding (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x5d6bf10

int32_t UI_MapEditorCameraPopup__get_VerticalPadding(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MapEditorCameraPopup$$get_VerticalSpacing
// il2cpp: float UI_MapEditorCameraPopup__get_VerticalSpacing (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x5d6bf20

float UI_MapEditorCameraPopup__get_VerticalSpacing(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.MapEditorCameraPopup$$get_DoublePanel
// il2cpp: bool UI_MapEditorCameraPopup__get_DoublePanel (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x5d6bf30

bool UI_MapEditorCameraPopup__get_DoublePanel(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.MapEditorCameraPopup$$Setup
// il2cpp: void UI_MapEditorCameraPopup__Setup (UI_MapEditorCameraPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d6bf40

void UI_MapEditorCameraPopup__Setup
               (UI_MapEditorCameraPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Collections_Generic_List_InputSettingElement__o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  UI_InputSettingElement_array *pUVar6;
  MethodInfo *pMVar7;
  int32_t fontSize;
  System_String_o *pSVar8;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  UI_InputSettingElement_o *pUVar11;
  
  if (Il2CppMethodInitialized_07547f99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_InputSettingElement_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorCameraPopup_Setup_b__19_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorCameraPopup_Setup_b__19_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"RotationZ");
    il2cpp_codegen_initialize_runtime_metadata(&"Camera");
    il2cpp_codegen_initialize_runtime_metadata(&"RotationY");
    il2cpp_codegen_initialize_runtime_metadata(&"RotationX");
    il2cpp_codegen_initialize_runtime_metadata(&"PositionZ");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"PositionY");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"PositionX");
    Il2CppMethodInitialized_07547f99 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar8 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,100.0,20.0,pSVar8,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar8 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar9,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorCameraPopup_Setup_b__19_0,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar3,__this_00,pSVar8,0.0,pUVar9,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).BottomBar;
  pSVar8 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar9,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorCameraPopup_Setup_b__19_1,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar3,__this_00,pSVar8,0.0,pUVar9,(MethodInfo *)0x0);
  pUVar3 = (__this->fields).DoublePanelLeft;
  pSVar4 = (__this->fields)._inputs;
  pSVar5 = (__this->fields)._positionX;
  pSVar8 = UI_UIManager__GetLocale
                     ("MapEditor","Camera","PositionX","",
                      "",(MethodInfo *)0x0);
  pUVar10 = UI_ElementFactory__CreateInputSetting
                      (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar8,"",120.0,
                       40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                       (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                       (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
    pUVar11 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar10,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    pMVar7 = MethodInfo_System_Collections_Generic_List_InputSettingElement_Add;
    if (pSVar4 != (System_Collections_Generic_List_InputSettingElement__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar6 = (pSVar4->fields)._items;
      if (pUVar6 != (UI_InputSettingElement_array *)0x0) {
        uVar2 = (pSVar4->fields)._size;
        if (uVar2 < (uint)pUVar6->max_length) {
          (pSVar4->fields)._size = uVar2 + 1;
          pUVar6->m_Items[(int)uVar2] = pUVar11;
          Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar11,
                     (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
        }
        pUVar3 = (__this->fields).DoublePanelLeft;
        pSVar4 = (__this->fields)._inputs;
        pSVar5 = (__this->fields)._positionY;
        pSVar8 = UI_UIManager__GetLocale
                           ("MapEditor","Camera","PositionY",
                            "","",(MethodInfo *)0x0);
        pUVar10 = UI_ElementFactory__CreateInputSetting
                            (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar8,"",
                             120.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
          pUVar11 = UnityEngine_GameObject__GetComponent_object_
                              (pUVar10,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
          pMVar7 = MethodInfo_System_Collections_Generic_List_InputSettingElement_Add;
          if (pSVar4 != (System_Collections_Generic_List_InputSettingElement__o *)0x0) {
            piVar1 = &(pSVar4->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar6 = (pSVar4->fields)._items;
            if (pUVar6 != (UI_InputSettingElement_array *)0x0) {
              uVar2 = (pSVar4->fields)._size;
              if (uVar2 < (uint)pUVar6->max_length) {
                (pSVar4->fields)._size = uVar2 + 1;
                pUVar6->m_Items[(int)uVar2] = pUVar11;
                Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar11,
                           (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
              }
              pUVar3 = (__this->fields).DoublePanelLeft;
              pSVar4 = (__this->fields)._inputs;
              pSVar5 = (__this->fields)._positionZ;
              pSVar8 = UI_UIManager__GetLocale
                                 ("MapEditor","Camera","PositionZ",
                                  "","",(MethodInfo *)0x0);
              pUVar10 = UI_ElementFactory__CreateInputSetting
                                  (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar8,
                                   "",120.0,40.0,false,
                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                   (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                                   (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
              if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                    (pUVar10,(MethodInfo_353B730 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement
                                    );
                pMVar7 = MethodInfo_System_Collections_Generic_List_InputSettingElement_Add;
                if (pSVar4 != (System_Collections_Generic_List_InputSettingElement__o *)0x0) {
                  piVar1 = &(pSVar4->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar6 = (pSVar4->fields)._items;
                  if (pUVar6 != (UI_InputSettingElement_array *)0x0) {
                    uVar2 = (pSVar4->fields)._size;
                    if (uVar2 < (uint)pUVar6->max_length) {
                      (pSVar4->fields)._size = uVar2 + 1;
                      pUVar6->m_Items[(int)uVar2] = pUVar11;
                      Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar2);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar11,
                                 (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                    }
                    pUVar3 = (__this->fields).DoublePanelRight;
                    pSVar4 = (__this->fields)._inputs;
                    pSVar5 = (__this->fields)._rotationX;
                    pSVar8 = UI_UIManager__GetLocale
                                       ("MapEditor","Camera","RotationX",
                                        "","",(MethodInfo *)0x0);
                    pUVar10 = UI_ElementFactory__CreateInputSetting
                                        (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar8,
                                         "",120.0,40.0,false,
                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                         (System_Func_string__bool__o *)0x0,
                                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                    if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                          (pUVar10,(MethodInfo_353B730 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement
                                          );
                      pMVar7 = MethodInfo_System_Collections_Generic_List_InputSettingElement_Add;
                      if (pSVar4 != (System_Collections_Generic_List_InputSettingElement__o *)0x0) {
                        piVar1 = &(pSVar4->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pUVar6 = (pSVar4->fields)._items;
                        if (pUVar6 != (UI_InputSettingElement_array *)0x0) {
                          uVar2 = (pSVar4->fields)._size;
                          if (uVar2 < (uint)pUVar6->max_length) {
                            (pSVar4->fields)._size = uVar2 + 1;
                            pUVar6->m_Items[(int)uVar2] = pUVar11;
                            Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar2);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      ((System_Collections_Generic_List_object__o *)pSVar4,
                                       (Il2CppObject *)pUVar11,
                                       (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                          }
                          pUVar3 = (__this->fields).DoublePanelRight;
                          pSVar4 = (__this->fields)._inputs;
                          pSVar5 = (__this->fields)._rotationY;
                          pSVar8 = UI_UIManager__GetLocale
                                             ("MapEditor","Camera",
                                              "RotationY","",
                                              "",(MethodInfo *)0x0);
                          pUVar10 = UI_ElementFactory__CreateInputSetting
                                              (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar8,
                                               "",120.0,40.0,false,
                                               (UnityEngine_Events_UnityAction_o *)0x0,
                                               (UnityEngine_Events_UnityAction_o *)0x0,
                                               (System_Func_string__bool__o *)0x0,
                                               (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                          if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                                (pUVar10,(MethodInfo_353B730 *)
                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement
                                                );
                            pMVar7 = MethodInfo_System_Collections_Generic_List_InputSettingElement_Add;
                            if (pSVar4 != (System_Collections_Generic_List_InputSettingElement__o *)0x0) {
                              piVar1 = &(pSVar4->fields)._version;
                              *piVar1 = *piVar1 + 1;
                              pUVar6 = (pSVar4->fields)._items;
                              if (pUVar6 != (UI_InputSettingElement_array *)0x0) {
                                uVar2 = (pSVar4->fields)._size;
                                if (uVar2 < (uint)pUVar6->max_length) {
                                  (pSVar4->fields)._size = uVar2 + 1;
                                  pUVar6->m_Items[(int)uVar2] = pUVar11;
                                  Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar2);
                                }
                                else {
                                  System_Collections_Generic_List_object___AddWithResize
                                            ((System_Collections_Generic_List_object__o *)pSVar4,
                                             (Il2CppObject *)pUVar11,
                                             (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                                }
                                pUVar3 = (__this->fields).DoublePanelRight;
                                pSVar4 = (__this->fields)._inputs;
                                pSVar5 = (__this->fields)._rotationZ;
                                pSVar8 = UI_UIManager__GetLocale
                                                   ("MapEditor","Camera",
                                                    "RotationZ","",
                                                    "",(MethodInfo *)0x0);
                                pUVar10 = UI_ElementFactory__CreateInputSetting
                                                    (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar8,
                                                     "",120.0,40.0,false,
                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                     (System_Func_string__bool__o *)0x0,
                                                     (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                                      (pUVar10,(MethodInfo_353B730 *)
                                                                                                                              
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement
                                                      );
                                  pMVar7 = MethodInfo_System_Collections_Generic_List_InputSettingElement_Add;
                                  if (pSVar4 != (System_Collections_Generic_List_InputSettingElement__o *)0x0)
                                  {
                                    piVar1 = &(pSVar4->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pUVar6 = (pSVar4->fields)._items;
                                    if (pUVar6 != (UI_InputSettingElement_array *)0x0) {
                                      uVar2 = (pSVar4->fields)._size;
                                      if (uVar2 < (uint)pUVar6->max_length) {
                                        (pSVar4->fields)._size = uVar2 + 1;
                                        pUVar6->m_Items[(int)uVar2] = pUVar11;
                                        Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar2);
                                        return;
                                      }
                                      System_Collections_Generic_List_object___AddWithResize
                                                ((System_Collections_Generic_List_object__o *)pSVar4,
                                                 (Il2CppObject *)pUVar11,
                                                 (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
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
  ThrowNullReferenceException();
}


// UI.MapEditorCameraPopup$$Show
// il2cpp: void UI_MapEditorCameraPopup__Show (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x5d6c770
// eh: try 0x5d6ca03..0x5d6ca50 -> pad 0x5d6ca59 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d6ca71..0x5d6ca76 -> pad 0x5d6ca97 cleanup
// eh: try 0x5d6ca9a..0x5d6caa4 -> pad 0x5d6caac catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d6ca55: jmp 0x5d6ca59
// asm:   0x5d6ca57: jmp 0x5d6ca59
// asm:   0x5d6ca59: mov rbx, rax
// asm:   0x5d6ca5c: cmp edx, 1
// asm:   0x5d6ca5f: jne 0x5d6ca9a
// asm:   0x5d6ca61: mov rdi, rbx
// asm:   0x5d6ca64: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d6ca69: mov rbx, qword ptr [rax]
// asm:   0x5d6ca6c: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5d6ca71: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d6ca76: lea rax, [rip + 0x152171b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputSettingElement_Dispose
// asm:   0x5d6ca7d: mov rsi, qword ptr [rax]
// asm:   0x5d6ca80: lea rdi, [rsp + 0x10]
// asm:   0x5d6ca85: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d6ca8a: test rbx, rbx
// asm:   0x5d6ca8d: je 0x5d6ca3f
// asm:   0x5d6ca8f: mov rdi, rbx
// asm:   0x5d6ca92: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d6ca97: mov rbx, rax
// asm:   0x5d6ca9a: lea rdi, [rsp + 0x28]
// asm:   0x5d6ca9f: call 0x2fdcf40  ; il2cpp_runtime_helper_02fdcf40()
// asm:   0x5d6caa4: mov rdi, rbx
// asm:   0x5d6caa7: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d6caac: mov rdi, rax
// asm:   0x5d6caaf: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorCameraPopup__Show(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  Cameras_BaseCamera_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  Settings_FloatSetting_o *pSVar3;
  System_Collections_Generic_List_InputSettingElement__o *__this_01;
  bool bVar4;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Vector3_o euler_01;
  UnityEngine_Quaternion_o UStack_58;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  undefined8 uStack_30;
  System_Collections_Generic_List_Enumerator_T__o *pSStack_28;
  
  if (Il2CppMethodInitialized_07547f9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputSettingElement_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputSettingElement_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputSettingElement_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_InputSettingElement_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    Il2CppMethodInitialized_07547f9a = '\x01';
  }
  SStack_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._current = (Il2CppObject *)0x0;
  __this_02 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    bVar4 = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0);
    if (bVar4) {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    pCVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if (((pCVar1 != (Cameras_BaseCamera_o *)0x0) &&
        (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
       (__this_00 = (pUVar2->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      pSVar3 = (__this->fields)._positionX;
      UVar5 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)pSVar3,UVar5.fields.x,
                   (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
        pSVar3 = (__this->fields)._positionY;
        UVar5 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
        if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
          Settings_TypedSetting_float___set_Value
                    ((Settings_TypedSetting_float__o *)pSVar3,UVar5.fields.y,
                     (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
          pSVar3 = (__this->fields)._positionZ;
          UVar5 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
          if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
            Settings_TypedSetting_float___set_Value
                      ((Settings_TypedSetting_float__o *)pSVar3,UVar5.fields.z,
                       (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
            pSVar3 = (__this->fields)._rotationX;
            UStack_58 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
            UVar5 = UnityEngine_Quaternion__Internal_ToEulerRad(&UStack_58,(MethodInfo *)0x0);
            euler.fields.x = UVar5.fields.x * 57.29578;
            euler.fields.y = UVar5.fields.y * 57.29578;
            euler.fields.z = UVar5.fields.z * 57.29578;
            UVar5 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
            if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
              Settings_TypedSetting_float___set_Value
                        ((Settings_TypedSetting_float__o *)pSVar3,UVar5.fields.x,
                         (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
              pSVar3 = (__this->fields)._rotationY;
              UStack_58 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
              UVar5 = UnityEngine_Quaternion__Internal_ToEulerRad(&UStack_58,(MethodInfo *)0x0);
              euler_00.fields.x = UVar5.fields.x * 57.29578;
              euler_00.fields.y = UVar5.fields.y * 57.29578;
              euler_00.fields.z = UVar5.fields.z * 57.29578;
              UVar5 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
              if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
                Settings_TypedSetting_float___set_Value
                          ((Settings_TypedSetting_float__o *)pSVar3,UVar5.fields.y,
                           (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
                pSVar3 = (__this->fields)._rotationZ;
                UStack_58 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
                UVar5 = UnityEngine_Quaternion__Internal_ToEulerRad(&UStack_58,(MethodInfo *)0x0);
                euler_01.fields.x = UVar5.fields.x * 57.29578;
                euler_01.fields.y = UVar5.fields.y * 57.29578;
                euler_01.fields.z = UVar5.fields.z * 57.29578;
                UVar5 = UnityEngine_Quaternion__Internal_MakePositive(euler_01,(MethodInfo *)0x0);
                if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
                  Settings_TypedSetting_float___set_Value
                            ((Settings_TypedSetting_float__o *)pSVar3,UVar5.fields.z,
                             (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
                  __this_01 = (__this->fields)._inputs;
                  if (__this_01 != (System_Collections_Generic_List_InputSettingElement__o *)0x0) {
                    System_Collections_Generic_List_object___GetEnumerator
                              (&SStack_48,(System_Collections_Generic_List_object__o *)__this_01,
                               (MethodInfo_395E050 *)
                               MethodInfo_System_Collections_Generic_List_InputSettingElement_GetEnumerator);
                    uStack_30 = 0;
                    pSStack_28 = &SStack_48;
                    while( true ) {
                      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                        ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                                         (MethodInfo_4C45C50 *)
                                         MethodInfo_System_Collections_Generic_List_Enumerator_InputSettingElement_MoveNext
                                        );
                      if (!bVar4) {
                        System_Collections_Generic_List_Enumerator_object___Dispose
                                  ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                                   (MethodInfo_4C45C40 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_InputSettingElement_Dispose
                                  );
                        return;
                      }
                      if (SStack_48.fields._current == (Il2CppObject *)0x0) break;
                      (*(SStack_48.fields._current)->klass->vtable[6].methodPtr)
                                (SStack_48.fields._current,
                                 (SStack_48.fields._current)->klass->vtable[6].method);
                    }
                    ThrowNullReferenceException();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorCameraPopup$$OnButtonClick
// il2cpp: void UI_MapEditorCameraPopup__OnButtonClick (UI_MapEditorCameraPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d6cac0

void UI_MapEditorCameraPopup__OnButtonClick
               (UI_MapEditorCameraPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Cameras_BaseCamera_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Settings_FloatSetting_o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  UnityEngine_Transform_o *__this_00;
  bool bVar6;
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o value_00;
  UnityEngine_Vector3_Fields local_28;
  
  if (Il2CppMethodInitialized_07547f9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07547f9b = '\x01';
  }
  bVar6 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if (bVar6) {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar6 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if (!bVar6) {
    return;
  }
  pCVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (((((pCVar1 != (Cameras_BaseCamera_o *)0x0) &&
        (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
       (pSVar3 = (__this->fields)._positionX, pSVar3 != (Settings_FloatSetting_o *)0x0)) &&
      ((pSVar4 = (__this->fields)._positionY, pSVar4 != (Settings_FloatSetting_o *)0x0 &&
       (pSVar5 = (__this->fields)._positionZ, pSVar5 != (Settings_FloatSetting_o *)0x0)))) &&
     (__this_00 = (pUVar2->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    value.fields.y = (pSVar4->fields)._value;
    value.fields.x = (pSVar3->fields)._value;
    value.fields.z = (pSVar5->fields)._value;
    UnityEngine_Transform__set_position(__this_00,value,(MethodInfo *)0x0);
    pSVar3 = (__this->fields)._rotationX;
    if (((pSVar3 != (Settings_FloatSetting_o *)0x0) &&
        (pSVar4 = (__this->fields)._rotationY, pSVar4 != (Settings_FloatSetting_o *)0x0)) &&
       (pSVar5 = (__this->fields)._rotationZ, pSVar5 != (Settings_FloatSetting_o *)0x0)) {
      local_28.x = (pSVar3->fields)._value * 0.017453292;
      local_28.y = (pSVar4->fields)._value * 0.017453292;
      local_28.z = (pSVar5->fields)._value * 0.017453292;
      value_00 = UnityEngine_Quaternion__Internal_FromEulerRad
                           ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      UnityEngine_Transform__set_rotation(__this_00,value_00,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorCameraPopup$$.ctor
// il2cpp: void UI_MapEditorCameraPopup___ctor (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x5d6cc70

void UI_MapEditorCameraPopup___ctor(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_InputSettingElement__o *__this_00;
  Settings_FloatSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547f9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_InputSettingElement_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_InputSettingElement);
    Il2CppMethodInitialized_07547f9c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_InputSettingElement);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_InputSettingElement_ctor);
  (__this->fields)._inputs = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inputs);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._positionX = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._positionX);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._positionY = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._positionY);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._positionZ = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._positionZ);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._rotationX = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rotationX);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._rotationY = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rotationY);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor(pSVar1,(MethodInfo *)0x0);
  (__this->fields)._rotationZ = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rotationZ);
  UI_PromptPopup___ctor((UI_PromptPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorCameraPopup$$<Setup>b__19_0
// il2cpp: void UI_MapEditorCameraPopup___Setup_b__19_0 (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x5d6ce00

void UI_MapEditorCameraPopup___Setup_b__19_0(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547f9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07547f9d = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorCameraPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.MapEditorCameraPopup$$<Setup>b__19_1
// il2cpp: void UI_MapEditorCameraPopup___Setup_b__19_1 (UI_MapEditorCameraPopup_o* __this, const MethodInfo* method);
// 0x5d6ce40

void UI_MapEditorCameraPopup___Setup_b__19_1(UI_MapEditorCameraPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547f9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_07547f9e = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MapEditorCameraPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


