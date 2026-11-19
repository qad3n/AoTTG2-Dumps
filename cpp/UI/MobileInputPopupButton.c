// Type: UI.MobileInputPopupButton
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MobileInputPopupButton.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileInputPopupButton.SlideButton$$.ctor
// il2cpp: void UI_MobileInputPopupButton_SlideButton___ctor (UI_MobileInputPopupButton_SlideButton_o __this, UnityEngine_RectTransform_o* rect, UI_MobileInputButton_o* button, const MethodInfo* method);
// 0x5c70ff0

void UI_MobileInputPopupButton_SlideButton___ctor
               (UI_MobileInputPopupButton_SlideButton_o *__this,UnityEngine_RectTransform_o *rect,
               UI_MobileInputButton_o *button,MethodInfo *method)

{
  (__this->fields).Rect = rect;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields).Button = button;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Button);
  return;
}


// UI.MobileInputPopupButton$$Setup
// il2cpp: void UI_MobileInputPopupButton__Setup (UI_MobileInputPopupButton_o* __this, int32_t mode, UI_MobileInputSkin_o* normalSkin, UI_MobileInputSkin_o* openSkin, int32_t shape, const MethodInfo* method);
// 0x5c6c720

void UI_MobileInputPopupButton__Setup
               (UI_MobileInputPopupButton_o *__this,int32_t mode,UI_MobileInputSkin_o *normalSkin,
               UI_MobileInputSkin_o *openSkin,int32_t shape,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075478ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    Il2CppMethodInitialized_075478ff = '\x01';
  }
  (__this->fields)._mode = mode;
  (__this->fields)._normalSkin = normalSkin;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._normalSkin);
  (__this->fields)._openSkin = openSkin;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._openSkin);
  (__this->fields)._shape = shape;
  pUVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
  (__this->fields)._image = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._image);
  UI_MobileInputPopupButton__SetOpen(__this,false,method_00);
  return;
}


// UI.MobileInputPopupButton$$RegisterChild
// il2cpp: void UI_MobileInputPopupButton__RegisterChild (UI_MobileInputPopupButton_o* __this, UnityEngine_GameObject_o* childObject, UnityEngine_RectTransform_o* rect, UI_MobileInputButton_o* button, const MethodInfo* method);
// 0x5c6cc50

void UI_MobileInputPopupButton__RegisterChild
               (UI_MobileInputPopupButton_o *__this,UnityEngine_GameObject_o *childObject,
               UnityEngine_RectTransform_o *rect,UI_MobileInputButton_o *button,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  System_Collections_Generic_List_MobileInputPopupButton_SlideButton__o *__this_01;
  UI_MobileInputPopupButton_SlideButton_array *pUVar4;
  UI_MobileInputPopupButton_SlideButton_o item;
  MethodInfo *pMVar5;
  bool bVar6;
  UnityEngine_RectTransform_o *local_40;
  UI_MobileInputButton_o *local_38;
  
  if (Il2CppMethodInitialized_07547900 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputPopupButton_SlideButton_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547900 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)childObject,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar6) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)button,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pMVar5 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
      if (!bVar6) {
        __this_00 = (__this->fields)._childObjects;
        if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (__this_00->fields)._items;
          if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pUVar3->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pUVar3->m_Items[(int)uVar2] = childObject;
              Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)childObject,
                         (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
            }
            __this_01 = (__this->fields)._slideButtons;
            local_38 = (UI_MobileInputButton_o *)0x0;
            local_40 = rect;
            Il2CppCodeGenWriteBarrier(&local_40);
            local_38 = button;
            Il2CppCodeGenWriteBarrier(&local_38);
            pMVar5 = MethodInfo_System_Collections_Generic_List_MobileInputPopupButton_SlideButton_Add;
            if (__this_01 != (System_Collections_Generic_List_MobileInputPopupButton_SlideButton__o *)0x0) {
              item.fields.Button = local_38;
              item.fields.Rect = local_40;
              piVar1 = &(__this_01->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar4 = (__this_01->fields)._items;
              if (pUVar4 != (UI_MobileInputPopupButton_SlideButton_array *)0x0) {
                uVar2 = (__this_01->fields)._size;
                if (uVar2 < (uint)pUVar4->max_length) {
                  (__this_01->fields)._size = uVar2 + 1;
                  pUVar4->m_Items[(int)uVar2].fields.Rect = local_40;
                  pUVar4->m_Items[(int)uVar2].fields.Button = local_38;
                  Il2CppCodeGenWriteBarrier((void **)(pUVar4->m_Items + (int)uVar2));
                }
                else {
                  System_Collections_Generic_List_MobileInputPopupButton_SlideButton___AddWithResize
                            (__this_01,item,(MethodInfo_3ACB470 *)pMVar5->klass->rgctx_data[0xe].method);
                }
                if (childObject != (UnityEngine_GameObject_o *)0x0) {
                  UnityEngine_GameObject__SetActive(childObject,(__this->fields)._open,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  return;
}


// UI.MobileInputPopupButton$$OnDisable
// il2cpp: void UI_MobileInputPopupButton__OnDisable (UI_MobileInputPopupButton_o* __this, const MethodInfo* method);
// 0x5c71020

void UI_MobileInputPopupButton__OnDisable(UI_MobileInputPopupButton_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  (__this->fields)._pointerId = -0x80000000;
  (__this->fields)._eventCamera = (UnityEngine_Camera_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._eventCamera);
  (__this->fields)._pressed = false;
  UI_MobileInputPopupButton__SetActiveSlideButton(__this,(UI_MobileInputButton_o *)0x0,method_00);
  UI_MobileInputPopupButton__SetOpen(__this,false,method_01);
  return;
}


// UI.MobileInputPopupButton$$Update
// il2cpp: void UI_MobileInputPopupButton__Update (UI_MobileInputPopupButton_o* __this, const MethodInfo* method);
// 0x5c71090

void UI_MobileInputPopupButton__Update(UI_MobileInputPopupButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  UI_MobileInputButton_o *button;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  UnityEngine_Vector2_Fields local_10;
  
  local_10.x = 0.0;
  local_10.y = 0.0;
  if (((__this->fields)._pressed != false) && ((__this->fields)._open != false)) {
    method_03 = (MethodInfo *)&local_10;
    bVar1 = Utility_MobilePlatformUtility__TryGetHeldPointerPosition
                      ((__this->fields)._pointerId,(UnityEngine_Vector2_o *)method_03,(MethodInfo *)0x0);
    if (bVar1) {
      button = UI_MobileInputPopupButton__GetSlideButton(__this,(UnityEngine_Vector2_o)local_10,method_03);
      UI_MobileInputPopupButton__SetActiveSlideButton(__this,button,method_00);
    }
    else {
      if ((__this->fields)._mode == 2) {
        UI_MobileInputPopupButton__TriggerActiveSlideButton(__this,method_03);
      }
      (__this->fields)._pointerId = -0x80000000;
      (__this->fields)._eventCamera = (UnityEngine_Camera_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._eventCamera);
      (__this->fields)._pressed = false;
      UI_MobileInputPopupButton__SetActiveSlideButton(__this,(UI_MobileInputButton_o *)0x0,method_01);
      if (((__this->fields)._mode & 0xfffffffdU) == 0) {
        UI_MobileInputPopupButton__SetOpen(__this,false,method_02);
        return;
      }
    }
  }
  return;
}


// UI.MobileInputPopupButton$$OnInitializePotentialDrag
// il2cpp: void UI_MobileInputPopupButton__OnInitializePotentialDrag (UI_MobileInputPopupButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c711a0

void UI_MobileInputPopupButton__OnInitializePotentialDrag
               (UI_MobileInputPopupButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  (eventData->fields)._useDragThreshold_k__BackingField = false;
  return;
}


// UI.MobileInputPopupButton$$OnPointerDown
// il2cpp: void UI_MobileInputPopupButton__OnPointerDown (UI_MobileInputPopupButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c711c0

void UI_MobileInputPopupButton__OnPointerDown
               (UI_MobileInputPopupButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  MethodInfo *method_00;
  UI_MobileInputButton_o *button;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._pointerId = (eventData->fields)._pointerId_k__BackingField;
  method_00 = (MethodInfo *)
              UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0);
  (__this->fields)._eventCamera = (UnityEngine_Camera_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._eventCamera);
  (__this->fields)._pressed = true;
  if (((__this->fields)._mode & 0xfffffffdU) == 0) {
    method_00 = (MethodInfo *)0x1;
    UI_MobileInputPopupButton__SetOpen(__this,true,method_01);
  }
  if ((__this->fields)._open == false) {
    return;
  }
  button = UI_MobileInputPopupButton__GetSlideButton
                     (__this,(UnityEngine_Vector2_o)(eventData->fields)._position_k__BackingField.fields,
                      method_00);
  UI_MobileInputPopupButton__SetActiveSlideButton(__this,button,method_02);
  return;
}


// UI.MobileInputPopupButton$$OnDrag
// il2cpp: void UI_MobileInputPopupButton__OnDrag (UI_MobileInputPopupButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c71250

void UI_MobileInputPopupButton__OnDrag
               (UI_MobileInputPopupButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  return;
}


// UI.MobileInputPopupButton$$OnPointerUp
// il2cpp: void UI_MobileInputPopupButton__OnPointerUp (UI_MobileInputPopupButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c71260

void UI_MobileInputPopupButton__OnPointerUp
               (UI_MobileInputPopupButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((eventData->fields)._pointerId_k__BackingField == (__this->fields)._pointerId) {
    if ((__this->fields)._mode == 2) {
      UI_MobileInputPopupButton__TriggerActiveSlideButton(__this,(MethodInfo *)eventData);
    }
    (__this->fields)._pointerId = -0x80000000;
    (__this->fields)._eventCamera = (UnityEngine_Camera_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._eventCamera);
    (__this->fields)._pressed = false;
    UI_MobileInputPopupButton__SetActiveSlideButton(__this,(UI_MobileInputButton_o *)0x0,method_00);
    if (((__this->fields)._mode & 0xfffffffdU) == 0) {
      UI_MobileInputPopupButton__SetOpen(__this,false,method_01);
      return;
    }
  }
  return;
}


// UI.MobileInputPopupButton$$ReleasePointer
// il2cpp: void UI_MobileInputPopupButton__ReleasePointer (UI_MobileInputPopupButton_o* __this, const MethodInfo* method);
// 0x5c71150

void UI_MobileInputPopupButton__ReleasePointer(UI_MobileInputPopupButton_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((__this->fields)._mode == 2) {
    UI_MobileInputPopupButton__TriggerActiveSlideButton(__this,method);
  }
  (__this->fields)._pointerId = -0x80000000;
  (__this->fields)._eventCamera = (UnityEngine_Camera_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._eventCamera);
  (__this->fields)._pressed = false;
  UI_MobileInputPopupButton__SetActiveSlideButton(__this,(UI_MobileInputButton_o *)0x0,method_00);
  if (((__this->fields)._mode & 0xfffffffdU) == 0) {
    UI_MobileInputPopupButton__SetOpen(__this,false,method_01);
    return;
  }
  return;
}


// UI.MobileInputPopupButton$$OnPointerClick
// il2cpp: void UI_MobileInputPopupButton__OnPointerClick (UI_MobileInputPopupButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c71380

void UI_MobileInputPopupButton__OnPointerClick
               (UI_MobileInputPopupButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  if ((__this->fields)._mode == 1) {
    UI_MobileInputPopupButton__SetOpen(__this,(__this->fields)._open == false,method);
    return;
  }
  return;
}


// UI.MobileInputPopupButton$$SetOpen
// il2cpp: void UI_MobileInputPopupButton__SetOpen (UI_MobileInputPopupButton_o* __this, bool open, const MethodInfo* method);
// 0x5c70dc0
// eh: try 0x5c70ea3..0x5c70f7f -> pad 0x5c70f8c (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c70fa4..0x5c70fa9 -> pad 0x5c70fce cleanup
// eh: try 0x5c70fd1..0x5c70fdb -> pad 0x5c70fe3 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c70f84: jmp 0x5c70f8c
// asm:   0x5c70f86: jmp 0x5c70f8c
// asm:   0x5c70f88: jmp 0x5c70f8c
// asm:   0x5c70f8a: jmp 0x5c70f8c
// asm:   0x5c70f8c: mov rbx, rax
// asm:   0x5c70f8f: cmp edx, 1
// asm:   0x5c70f92: jne 0x5c70fd1
// asm:   0x5c70f94: mov rdi, rbx
// asm:   0x5c70f97: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c70f9c: mov rbx, qword ptr [rax]
// asm:   0x5c70f9f: mov qword ptr [rsp + 8], rbx
// asm:   0x5c70fa4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c70fa9: lea rax, [rip + 0x161cdc8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5c70fb0: mov rsi, qword ptr [rax]
// asm:   0x5c70fb3: lea rdi, [rsp + 0x20]
// asm:   0x5c70fb8: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c70fbd: test rbx, rbx
// asm:   0x5c70fc0: je 0x5c70f02
// asm:   0x5c70fc6: mov rdi, rbx
// asm:   0x5c70fc9: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c70fce: mov rbx, rax
// asm:   0x5c70fd1: lea rdi, [rsp + 8]
// asm:   0x5c70fd6: call 0x2fd9f00  ; il2cpp_runtime_helper_02fd9f00()
// asm:   0x5c70fdb: mov rdi, rbx
// asm:   0x5c70fde: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c70fe3: mov rdi, rax
// asm:   0x5c70fe6: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MobileInputPopupButton__SetOpen(UI_MobileInputPopupButton_o *__this,bool open,MethodInfo *method)

{
  int32_t shape;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_UI_Image_o *pUVar1;
  UI_MobileInputSkin_o *skin;
  Il2CppObject *x;
  bool bVar2;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  undefined1 local_60 [16];
  UnityEngine_Object_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_07547901 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547901 = '\x01';
  }
  if ((__this->fields)._open != open) {
    (__this->fields)._open = open;
    __this_00 = (__this->fields)._childObjects;
    if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_48.fields._current = (Il2CppObject *)local_50;
    local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
    local_48.fields._index = local_60._8_4_;
    local_48.fields._version = local_60._12_4_;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = &local_48;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      x = local_48.fields._current;
      if (!bVar2) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)x,open,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              (&local_48,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose)
    ;
    if (!open) {
      UI_MobileInputPopupButton__SetActiveSlideButton(__this,(UI_MobileInputButton_o *)0x0,method_00);
    }
    pUVar1 = (__this->fields)._image;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (__this->fields)._image;
      skin = (&(__this->fields)._normalSkin)[open];
      shape = (__this->fields)._shape;
      if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
      }
      UI_MobileControlSkinManager__ApplySkin(pUVar1,skin,shape,in_RCX);
    }
  }
  return;
}


// UI.MobileInputPopupButton$$SetInputFromScreenPosition
// il2cpp: void UI_MobileInputPopupButton__SetInputFromScreenPosition (UI_MobileInputPopupButton_o* __this, UnityEngine_Vector2_o screenPosition, const MethodInfo* method);
// 0x5c71130

void UI_MobileInputPopupButton__SetInputFromScreenPosition
               (UI_MobileInputPopupButton_o *__this,UnityEngine_Vector2_o screenPosition,MethodInfo *method)

{
  UI_MobileInputButton_o *button;
  MethodInfo *method_00;
  
  button = UI_MobileInputPopupButton__GetSlideButton(__this,screenPosition,method);
  UI_MobileInputPopupButton__SetActiveSlideButton(__this,button,method_00);
  return;
}


// UI.MobileInputPopupButton$$GetSlideButton
// il2cpp: UI_MobileInputButton_o* UI_MobileInputPopupButton__GetSlideButton (UI_MobileInputPopupButton_o* __this, UnityEngine_Vector2_o screenPosition, const MethodInfo* method);
// 0x5c714e0

UI_MobileInputButton_o *
UI_MobileInputPopupButton__GetSlideButton
          (UI_MobileInputPopupButton_o *__this,UnityEngine_Vector2_o screenPosition,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *rectTransform;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  int index;
  System_Collections_Generic_List_MobileInputPopupButton_SlideButton__o *__this_01;
  UI_MobileInputPopupButton_SlideButton_o UVar2;
  
  if (Il2CppMethodInitialized_07547902 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputPopupButton_SlideButton_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputPopupButton_SlideButton_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547902 = '\x01';
  }
  __this_01 = (__this->fields)._slideButtons;
  if (__this_01 != (System_Collections_Generic_List_MobileInputPopupButton_SlideButton__o *)0x0) {
    index = 0;
    do {
      if ((__this_01->fields)._size <= index) {
        return (UI_MobileInputButton_o *)0x0;
      }
      UVar2 = System_Collections_Generic_List_MobileInputPopupButton_SlideButton___get_Item
                        (__this_01,index,
                         (MethodInfo_3ACB100 *)
                         MethodInfo_System_Collections_Generic_List_MobileInputPopupButton_SlideButton_get_Item
                        );
      rectTransform = UVar2.fields.Rect;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)rectTransform,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((rectTransform == (UnityEngine_RectTransform_o *)0x0) ||
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)rectTransform,(MethodInfo *)0x0),
           __this_00 == (UnityEngine_GameObject_o *)0x0)) break;
        bVar1 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
        if ((bVar1) &&
           (bVar1 = UI_MobileInputPopupButton__ContainsScreenPoint
                              (__this,rectTransform,screenPosition,18.0,method_00), bVar1)) {
          return UVar2.fields.Button;
        }
      }
      index = index + 1;
      __this_01 = (__this->fields)._slideButtons;
    } while (__this_01 != (System_Collections_Generic_List_MobileInputPopupButton_SlideButton__o *)0x0);
  }
  ThrowNullReferenceException();
}


// UI.MobileInputPopupButton$$SetActiveSlideButton
// il2cpp: void UI_MobileInputPopupButton__SetActiveSlideButton (UI_MobileInputPopupButton_o* __this, UI_MobileInputButton_o* button, const MethodInfo* method);
// 0x5c713a0

void UI_MobileInputPopupButton__SetActiveSlideButton
               (UI_MobileInputPopupButton_o *__this,UI_MobileInputButton_o *button,MethodInfo *method)

{
  UI_MobileInputButton_o **targetAddress;
  UI_MobileInputButton_o *pUVar1;
  bool bVar2;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07547903 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547903 = '\x01';
  }
  pUVar1 = (__this->fields)._activeSlideButton;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)button,(MethodInfo *)0x0);
  if (!bVar2) {
    targetAddress = &(__this->fields)._activeSlideButton;
    pUVar1 = *targetAddress;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (__this->fields)._activeSlideButton;
      if ((__this->fields)._mode == 2) {
        if (pUVar1 == (UI_MobileInputButton_o *)0x0) goto label_05c714cf;
        UI_MobileInputButton__SetHighlighted(pUVar1,false,method_00);
      }
      else {
        if (pUVar1 == (UI_MobileInputButton_o *)0x0) goto label_05c714cf;
        UI_MobileInputButton__SetPressed_5b6de60(pUVar1,false,(System_Func_MobileInput__bool__o *)0x0,in_RCX);
      }
    }
    *targetAddress = button;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar1 = *targetAddress;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (__this->fields)._activeSlideButton;
      if ((__this->fields)._mode == 2) {
        if (pUVar1 != (UI_MobileInputButton_o *)0x0) {
          UI_MobileInputButton__SetHighlighted(pUVar1,true,method_01);
          return;
        }
      }
      else if (pUVar1 != (UI_MobileInputButton_o *)0x0) {
        UI_MobileInputButton__SetPressed_5b6de60(pUVar1,true,(System_Func_MobileInput__bool__o *)0x0,in_RCX);
        return;
      }
label_05c714cf:
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.MobileInputPopupButton$$SetSlideButtonPressed
// il2cpp: void UI_MobileInputPopupButton__SetSlideButtonPressed (UI_MobileInputPopupButton_o* __this, UI_MobileInputButton_o* button, bool pressed, const MethodInfo* method);
// 0x5c718d0

void UI_MobileInputPopupButton__SetSlideButtonPressed
               (UI_MobileInputPopupButton_o *__this,UI_MobileInputButton_o *button,bool pressed,
               MethodInfo *method)

{
  undefined7 in_register_00000011;
  
  if ((__this->fields)._mode == 2) {
    if (button != (UI_MobileInputButton_o *)0x0) {
      UI_MobileInputButton__SetHighlighted
                (button,pressed,(MethodInfo *)CONCAT71(in_register_00000011,pressed));
      return;
    }
  }
  else if (button != (UI_MobileInputButton_o *)0x0) {
    UI_MobileInputButton__SetPressed_5b6de60(button,pressed,(System_Func_MobileInput__bool__o *)0x0,method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MobileInputPopupButton$$TriggerActiveSlideButton
// il2cpp: void UI_MobileInputPopupButton__TriggerActiveSlideButton (UI_MobileInputPopupButton_o* __this, const MethodInfo* method);
// 0x5c712d0

void UI_MobileInputPopupButton__TriggerActiveSlideButton
               (UI_MobileInputPopupButton_o *__this,MethodInfo *method)

{
  UI_MobileInputButton_o *pUVar1;
  Settings_MobileInput_array *pSVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_07547904 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547904 = '\x01';
  }
  pUVar1 = (__this->fields)._activeSlideButton;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    pUVar1 = (__this->fields)._activeSlideButton;
    if ((pUVar1 == (UI_MobileInputButton_o *)0x0) ||
       (pSVar2 = (pUVar1->fields)._inputs, pSVar2 == (Settings_MobileInput_array *)0x0)) {
label_05c7136f:
      ThrowNullReferenceException();
    }
    uVar4 = (uint)pSVar2->max_length;
    if (0 < (int)uVar4) {
      uVar5 = 0;
      do {
        if (uVar4 <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        if (pSVar2->m_Items[(int)uVar5] == (Settings_MobileInput_o *)0x0) goto label_05c7136f;
        Settings_MobileInput__PressForOneFrame(pSVar2->m_Items[(int)uVar5],(MethodInfo *)0x0);
        uVar5 = uVar5 + 1;
        uVar4 = (uint)pSVar2->max_length;
      } while ((int)uVar5 < (int)uVar4);
    }
  }
  return;
}


// UI.MobileInputPopupButton$$ContainsScreenPoint
// il2cpp: bool UI_MobileInputPopupButton__ContainsScreenPoint (UI_MobileInputPopupButton_o* __this, UnityEngine_RectTransform_o* rectTransform, UnityEngine_Vector2_o screenPosition, float padding, const MethodInfo* method);
// 0x5c71600
// asm: 12 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c716be: cmp byte ptr [rip + 0x18d368f], 0
// asm:   0x5c716c5: je 0x5c71734
// asm:   0x5c716d7: cmp byte ptr [rip + 0x18d3677], 0
// asm:   0x5c716de: je 0x5c7176d
// asm:   0x5c71714: ucomiss xmm3, xmm1
// asm:   0x5c71717: jae 0x5c717d8
// asm:   0x5c7171d: jmp 0x5c71852
// asm:   0x5c71806: jmp 0x5c7183e
// asm:   0x5c718b0: addss xmm4, xmm0
// asm:   0x5c718b4: ucomiss xmm4, xmm3
// asm:   0x5c718b7: seta r15b
// asm:   0x5c718bb: jmp 0x5c71855

bool UI_MobileInputPopupButton__ContainsScreenPoint
               (UI_MobileInputPopupButton_o *__this,UnityEngine_RectTransform_o *rectTransform,
               UnityEngine_Vector2_o screenPosition,float padding,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Camera_o *cam;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Rect_o UVar11;
  UnityEngine_Vector2_Fields local_50;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (Il2CppMethodInitialized_07547905 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07547905 = '\x01';
  }
  local_50.x = 0.0;
  local_50.y = 0.0;
  cam = (__this->fields)._eventCamera;
  if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
  }
  bVar5 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                    (rectTransform,screenPosition,cam,(UnityEngine_Vector2_o *)&local_50,(MethodInfo *)0x0);
  if (bVar5) {
    if (rectTransform == (UnityEngine_RectTransform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UVar11 = UnityEngine_RectTransform__get_rect(rectTransform,(MethodInfo *)0x0);
    fVar6 = UVar11.fields.m_YMin;
    fStack_40 = (float)in_XMM1_Dc;
    local_48 = (undefined1  [8])UVar11.fields._8_8_;
    fStack_3c = (float)in_XMM1_Dd;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (Il2CppMethodInitialized_07544d54 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
      Il2CppMethodInitialized_07544d54 = '\x01';
      uVar1 = (TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = *(uint32_t *)((long)TypeInfo_UnityEngine_Rect + 0xe4);
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (Il2CppMethodInitialized_07544d55 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
      Il2CppMethodInitialized_07544d55 = '\x01';
      uVar1 = (TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (((Il2CppClass *)TypeInfo_UnityEngine_Rect)->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fVar7 = UVar11.fields.m_XMin - padding;
    fVar8 = local_50.x;
    fVar9 = local_50.y;
    fVar10 = local_38;
    fVar4 = fVar6;
    fVar2 = fStack_34;
    fVar3 = local_28;
    if (g_data_0754205c == '\0') {
      local_38 = fVar7;
      fStack_34 = fVar6;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
      g_data_0754205c = '\x01';
      fVar7 = local_38;
      fVar10 = local_38;
      fVar4 = fStack_34;
      fVar2 = fStack_34;
      fVar3 = local_28;
    }
    fStack_34 = fVar4;
    local_38 = fVar7;
    if (local_38 <= fVar8) {
      local_28 = ((((float)local_48._0_4_ + UVar11.fields.m_XMin) - local_38) + local_38 + padding) - local_38
      ;
      if ((((Il2CppClass *)TypeInfo_UnityEngine_Rect)->_2).cctor_finished_or_no_cctor == 0) {
        uStack_24 = local_48._4_4_;
        uStack_20 = fStack_40;
        uStack_1c = fStack_3c;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        fVar7 = local_38 + local_28;
      }
      else {
        fVar7 = local_38 + local_28;
        local_38 = fVar10;
        fStack_34 = fVar2;
        local_28 = fVar3;
      }
      if ((fVar8 < fVar7) && (fVar10 = fVar6 - padding, fVar10 <= fVar9)) {
        local_48._4_4_ = (float)local_48._4_4_ + fVar6;
        local_48._0_4_ = (((float)local_48._4_4_ - fVar10) + fVar10 + padding) - fVar10;
        if ((((Il2CppClass *)TypeInfo_UnityEngine_Rect)->_2).cctor_finished_or_no_cctor == 0) {
          fStack_40 = (float)local_48._4_4_;
          fStack_3c = (float)local_48._4_4_;
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        return fVar9 < fVar10 + (float)local_48._0_4_;
      }
    }
    return false;
  }
  return false;
}


// UI.MobileInputPopupButton$$ResetPress
// il2cpp: void UI_MobileInputPopupButton__ResetPress (UI_MobileInputPopupButton_o* __this, const MethodInfo* method);
// 0x5c71060

void UI_MobileInputPopupButton__ResetPress(UI_MobileInputPopupButton_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  (__this->fields)._pointerId = -0x80000000;
  (__this->fields)._eventCamera = (UnityEngine_Camera_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._eventCamera);
  (__this->fields)._pressed = false;
  UI_MobileInputPopupButton__SetActiveSlideButton(__this,(UI_MobileInputButton_o *)0x0,method_00);
  return;
}


// UI.MobileInputPopupButton$$.ctor
// il2cpp: void UI_MobileInputPopupButton___ctor (UI_MobileInputPopupButton_o* __this, const MethodInfo* method);
// 0x5c71910

void UI_MobileInputPopupButton___ctor(UI_MobileInputPopupButton_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_MobileInputPopupButton_SlideButton__o *__this_01;
  
  if (Il2CppMethodInitialized_07547906 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputPopupButton_SlideButton_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_MobileInputPopupButton_SlideButton);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_07547906 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._childObjects = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._childObjects);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_MobileInputPopupButton_SlideButton);
  System_Collections_Generic_List_MobileInputPopupButton_SlideButton____ctor
            (__this_01,
             (MethodInfo_3ACAAF0 *)
             MethodInfo_System_Collections_Generic_List_MobileInputPopupButton_SlideButton_ctor);
  (__this->fields)._slideButtons = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._slideButtons);
  (__this->fields)._pointerId = -0x80000000;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


