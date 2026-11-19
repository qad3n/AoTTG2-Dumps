// Type: UI.MobileLayoutActionListEditor
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MobileLayoutActionListEditor.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileLayoutActionListEditor.<>c__DisplayClass12_0$$.ctor
// il2cpp: void UI_MobileLayoutActionListEditor___c__DisplayClass12_0___ctor (UI_MobileLayoutActionListEditor___c__DisplayClass12_0_o* __this, const MethodInfo* method);
// 0x5cae5c0

void UI_MobileLayoutActionListEditor___c__DisplayClass12_0___ctor
               (UI_MobileLayoutActionListEditor___c__DisplayClass12_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutActionListEditor.<>c__DisplayClass12_0$$<AddAction>b__0
// il2cpp: void UI_MobileLayoutActionListEditor___c__DisplayClass12_0___AddAction_b__0 (UI_MobileLayoutActionListEditor___c__DisplayClass12_0_o* __this, const MethodInfo* method);
// 0x5cae6d0

void UI_MobileLayoutActionListEditor___c__DisplayClass12_0___AddAction_b__0
               (UI_MobileLayoutActionListEditor___c__DisplayClass12_0_o *__this,MethodInfo *method)

{
  int32_t role;
  UI_MobileLayoutActionListEditor_o *pUVar1;
  Settings_StringSetting_o *pSVar2;
  UnityEngine_Transform_o *parent;
  System_String_o *current;
  System_Action_string__o *__this_00;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07547a8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutActionListEditor_c__DisplayClass12_0_AddAction_b__2);
    Il2CppMethodInitialized_07547a8d = '\x01';
  }
  pUVar1 = (__this->fields).__4__this;
  if ((pUVar1 == (UI_MobileLayoutActionListEditor_o *)0x0) ||
     (pSVar2 = (__this->fields).setting, pSVar2 == (Settings_StringSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  parent = (pUVar1->fields)._overlayRoot;
  current = (pSVar2->fields)._value;
  role = (pUVar1->fields)._role;
  __this_00 = (__this->fields).__9__2;
  if (__this_00 == (System_Action_string__o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MobileLayoutActionListEditor_c__DisplayClass12_0_AddAction_b__2,
               (MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__2 = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2);
  }
  UI_MobileLayoutActionPickerModal__Open(parent,current,role,__this_00,in_R8);
  return;
}


// UI.MobileLayoutActionListEditor.<>c__DisplayClass12_0$$<AddAction>b__2
// il2cpp: void UI_MobileLayoutActionListEditor___c__DisplayClass12_0___AddAction_b__2 (UI_MobileLayoutActionListEditor___c__DisplayClass12_0_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5cae830

void UI_MobileLayoutActionListEditor___c__DisplayClass12_0___AddAction_b__2
               (UI_MobileLayoutActionListEditor___c__DisplayClass12_0_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_MobileLayoutActionListEditor_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_String_o *pSVar4;
  Il2CppObject *pIStack_18;
  
  if (Il2CppMethodInitialized_07547a8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_StringSetting_Text_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_07547a8e = '\x01';
  }
  pIStack_18 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).setting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pUVar1 = (__this->fields).__4__this;
    if ((pUVar1 != (UI_MobileLayoutActionListEditor_o *)0x0) &&
       (__this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields)._labels,
       __this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this_01,(Il2CppObject *)(__this->fields).setting,&pIStack_18,
                         (MethodInfo_4AAF440 *)
                         MethodInfo_System_Collections_Generic_Dictionary_StringSetting_Text_TryGetValue);
      pIVar2 = pIStack_18;
      if (!bVar3) {
        return;
      }
      pUVar1 = (__this->fields).__4__this;
      if ((pUVar1 != (UI_MobileLayoutActionListEditor_o *)0x0) &&
         (pSVar4 = UI_MobileInputBindingUtil__GetActionLabel(value,(pUVar1->fields)._role,(MethodInfo *)0x0),
         pIVar2 != (Il2CppObject *)0x0)) {
        (*pIVar2->klass->vtable[0x4b].methodPtr)(pIVar2,pSVar4,pIVar2->klass->vtable[0x4b].method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutActionListEditor.<>c__DisplayClass12_0$$<AddAction>b__1
// il2cpp: void UI_MobileLayoutActionListEditor___c__DisplayClass12_0___AddAction_b__1 (UI_MobileLayoutActionListEditor___c__DisplayClass12_0_o* __this, const MethodInfo* method);
// 0x5cae900

void UI_MobileLayoutActionListEditor___c__DisplayClass12_0___AddAction_b__1
               (UI_MobileLayoutActionListEditor___c__DisplayClass12_0_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_StringSetting__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_Object_o *obj;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_MobileLayoutActionListEditor_o *pUVar2;
  
  if (Il2CppMethodInitialized_07547a8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_StringSetting_Text_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07547a8f = '\x01';
  }
  pUVar2 = (__this->fields).__4__this;
  if ((pUVar2 != (UI_MobileLayoutActionListEditor_o *)0x0) &&
     (pSVar1 = (pUVar2->fields)._actions, pSVar1 != (System_Collections_Generic_List_StringSetting__o *)0x0))
  {
    System_Collections_Generic_List_object___Remove
              ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)(__this->fields).setting,
               (MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_StringSetting_Remove);
    pUVar2 = (__this->fields).__4__this;
    if ((pUVar2 != (UI_MobileLayoutActionListEditor_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar2->fields)._labels,
       __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (__this_00,(Il2CppObject *)(__this->fields).setting,
                 (MethodInfo_4AAED10 *)
                 MethodInfo_System_Collections_Generic_Dictionary_StringSetting_Text_Remove);
      obj = (UnityEngine_Object_o *)(__this->fields).row;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      method_01 = (MethodInfo *)0x0;
      UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).__4__this;
      if ((pUVar2 != (UI_MobileLayoutActionListEditor_o *)0x0) &&
         (pSVar1 = (pUVar2->fields)._actions,
         pSVar1 != (System_Collections_Generic_List_StringSetting__o *)0x0)) {
        if ((pSVar1->fields)._size == 0) {
          method_01 = (MethodInfo *)"None";
          UI_MobileLayoutActionListEditor__AddAction(pUVar2,"None",method_00);
          pUVar2 = (__this->fields).__4__this;
          if (pUVar2 == (UI_MobileLayoutActionListEditor_o *)0x0) goto label_05caea07;
        }
        UI_MobileLayoutActionListEditor__UpdateHeight(pUVar2,method_01);
        return;
      }
    }
  }
label_05caea07:
  ThrowNullReferenceException();
}


// UI.MobileLayoutActionListEditor$$Setup
// il2cpp: void UI_MobileLayoutActionListEditor__Setup (UI_MobileLayoutActionListEditor_o* __this, UI_ElementStyle_o* style, System_String_o* title, System_String_array* initialActionIds, UnityEngine_Transform_o* overlayRoot, int32_t role, const MethodInfo* method);
// 0x5ca7a10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ca7ddf: nop 

void UI_MobileLayoutActionListEditor__Setup
               (UI_MobileLayoutActionListEditor_o *__this,UI_ElementStyle_o *style,System_String_o *title,
               System_String_array *initialActionIds,UnityEngine_Transform_o *overlayRoot,int32_t role,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o **targetAddress;
  uint uVar1;
  System_Collections_Generic_List_StringSetting__o *pSVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar6;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_00;
  UnityEngine_Transform_o *parent;
  UI_MobileLayoutActionListEditor_o *__this_01;
  System_String_o *title_00;
  UnityEngine_Events_UnityAction_o *__this_02;
  ulong uVar7;
  MethodInfo **method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar8;
  ulong uVar9;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07547a84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutActionListEditor_Setup_b__9_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Add");
    il2cpp_codegen_initialize_runtime_metadata(&"Rows");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Header");
    Il2CppMethodInitialized_07547a84 = '\x01';
  }
  (__this->fields)._overlayRoot = overlayRoot;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._overlayRoot);
  (__this->fields)._style = style;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._style);
  (__this->fields)._role = role;
  pUVar3 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  targetAddress = &(__this->fields)._root;
  (__this->fields)._root = pUVar3;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__AddComponent_object_
                       (pUVar4,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    (__this->fields)._layoutElement = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._layoutElement);
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      method_00 = &MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup;
      pUVar6 = UnityEngine_GameObject__AddComponent_object_
                         (pUVar4,(MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup);
      if (pUVar6 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                  ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar6,6.0,(MethodInfo *)0x0);
        UnityEngine_UI_LayoutGroup__set_childAlignment
                  ((UnityEngine_UI_LayoutGroup_o *)pUVar6,0,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                  ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar6,false,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                  ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar6,false,(MethodInfo *)0x0);
        pUVar4 = UI_MobileLayoutActionListEditor__CreateRect
                           ((UI_MobileLayoutActionListEditor_o *)pUVar6,"Header",*targetAddress,
                            (MethodInfo *)method_00);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          pUVar5 = UnityEngine_GameObject__AddComponent_object_
                             (pUVar4,(MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
          if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar5->klass->vtable)._38_set_preferredHeight.methodPtr)
                      (pUVar5,36.0,(pUVar5->klass->vtable)._38_set_preferredHeight.method);
            __this_00 = UnityEngine_GameObject__AddComponent_object_
                                  (pUVar4,(MethodInfo_353B6A0 *)
                                          MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup
                                  );
            if (__this_00 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,8.0,(MethodInfo *)0x0);
              UnityEngine_UI_LayoutGroup__set_childAlignment
                        ((UnityEngine_UI_LayoutGroup_o *)__this_00,3,(MethodInfo *)0x0);
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,false,(MethodInfo *)0x0
                        );
              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,false,(MethodInfo *)0x0
                        );
              parent = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
              UI_ElementFactory__CreateDefaultLabel(parent,style,title,0,3,(MethodInfo *)0x0);
              __this_01 = (UI_MobileLayoutActionListEditor_o *)
                          UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              title_00 = UI_UIManager__GetLocaleCommon("Add",(MethodInfo *)0x0);
              __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        (__this_02,(Il2CppObject *)__this,
                         (intptr_t)MethodInfo_UI_MobileLayoutActionListEditor_Setup_b__9_0,(MethodInfo *)0x0);
              UI_ElementFactory__CreateDefaultButton
                        ((UnityEngine_Transform_o *)__this_01,style,title_00,110.0,34.0,__this_02,
                         (MethodInfo *)0x0);
              pUVar4 = UI_MobileLayoutActionListEditor__CreateRect
                                 (__this_01,"Rows",(__this->fields)._root,
                                  (MethodInfo *)__this_02);
              if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                pUVar3 = UnityEngine_GameObject__GetComponent_object_
                                   (pUVar4,(MethodInfo_353B730 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                (__this->fields)._rowsRoot = pUVar3;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._rowsRoot);
                pUVar5 = UnityEngine_GameObject__AddComponent_object_
                                   (pUVar4,(MethodInfo_353B6A0 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
                (__this->fields)._rowsLayoutElement = pUVar5;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._rowsLayoutElement);
                pUVar6 = UnityEngine_GameObject__AddComponent_object_
                                   (pUVar4,(MethodInfo_353B6A0 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_VerticalLayoutGroup)
                ;
                if (pUVar6 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar6,6.0,(MethodInfo *)0x0)
                  ;
                  UnityEngine_UI_LayoutGroup__set_childAlignment
                            ((UnityEngine_UI_LayoutGroup_o *)pUVar6,0,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar6,false,
                             (MethodInfo *)0x0);
                  method_01 = (MethodInfo *)0x0;
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)pUVar6,false,
                             (MethodInfo *)0x0);
                  pMVar8 = extraout_RDX;
                  if ((initialActionIds != (System_String_array *)0x0) &&
                     (0 < (int)initialActionIds->max_length)) {
                    uVar7 = initialActionIds->max_length & 0xffffffff;
                    uVar9 = 0;
                    do {
                      if (uVar7 <= uVar9) {
                        ThrowIndexOutOfRangeException();
                      }
                      method_01 = (MethodInfo *)initialActionIds->m_Items[uVar9];
                      UI_MobileLayoutActionListEditor__AddAction(__this,(System_String_o *)method_01,pMVar8);
                      uVar9 = uVar9 + 1;
                      uVar1 = (uint)initialActionIds->max_length;
                      uVar7 = (ulong)uVar1;
                      pMVar8 = extraout_RDX_00;
                    } while ((long)uVar9 < (long)(int)uVar1);
                  }
                  pSVar2 = (__this->fields)._actions;
                  if (pSVar2 != (System_Collections_Generic_List_StringSetting__o *)0x0) {
                    if ((pSVar2->fields)._size == 0) {
                      method_01 = (MethodInfo *)"None";
                      UI_MobileLayoutActionListEditor__AddAction(__this,"None",pMVar8);
                    }
                    UI_MobileLayoutActionListEditor__UpdateHeight(__this,method_01);
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
  ThrowNullReferenceException();
}


// UI.MobileLayoutActionListEditor$$GetActionsString
// il2cpp: System_String_o* UI_MobileLayoutActionListEditor__GetActionsString (UI_MobileLayoutActionListEditor_o* __this, const MethodInfo* method);
// 0x5caa320
// eh: try 0x5caa49f..0x5caa634 -> pad 0x5caa63d (+11 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5caa665..0x5caa66a -> pad 0x5caa68d cleanup
// eh: try 0x5caa690..0x5caa69a -> pad 0x5caa6a2 catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5caa639: jmp 0x5caa64d
// asm:   0x5caa63b: jmp 0x5caa64d
// asm:   0x5caa63d: jmp 0x5caa64d
// asm:   0x5caa63f: jmp 0x5caa64d
// asm:   0x5caa641: jmp 0x5caa64d
// asm:   0x5caa643: jmp 0x5caa64d
// asm:   0x5caa645: jmp 0x5caa64d
// asm:   0x5caa647: jmp 0x5caa64d
// asm:   0x5caa649: jmp 0x5caa64d
// asm:   0x5caa64b: jmp 0x5caa64d
// asm:   0x5caa64d: mov r14, rax
// asm:   0x5caa650: cmp edx, 1
// asm:   0x5caa653: jne 0x5caa690
// asm:   0x5caa655: mov rdi, r14
// asm:   0x5caa658: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5caa65d: mov rbx, qword ptr [rax]
// asm:   0x5caa660: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5caa665: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5caa66a: lea rax, [rip + 0x15e44b7]  ; MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose
// asm:   0x5caa671: mov rsi, qword ptr [rax]
// asm:   0x5caa674: mov rdi, rsp
// asm:   0x5caa677: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5caa67c: test rbx, rbx
// asm:   0x5caa67f: je 0x5caa5dc
// asm:   0x5caa685: mov rdi, rbx
// asm:   0x5caa688: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5caa68d: mov r14, rax
// asm:   0x5caa690: lea rdi, [rsp + 0x20]
// asm:   0x5caa695: call 0x2fdb000  ; il2cpp_runtime_helper_02fdb000()
// asm:   0x5caa69a: mov rdi, r14
// asm:   0x5caa69d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5caa6a2: mov rdi, rax
// asm:   0x5caa6a5: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
UI_MobileLayoutActionListEditor__GetActionsString
          (UI_MobileLayoutActionListEditor_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_StringSetting__o *__this_00;
  Il2CppClass *pIVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *__this_01;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  Il2CppObject *local_58;
  Settings_MobileInputBinding_o *local_50;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_07547a85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBindingRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"+");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07547a85 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (Il2CppObject *)0x0;
  local_50 = (Settings_MobileInputBinding_o *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  __this_00 = (__this->fields)._actions;
  if (__this_00 != (System_Collections_Generic_List_StringSetting__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
    local_58 = local_38;
    local_68 = (undefined1  [8])local_48._0_8_;
    puStack_60 = (undefined1 *)local_48._8_8_;
    local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
      local_48._8_8_ = local_68;
      while( true ) {
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
        if (!bVar5) break;
        if (local_58 == (Il2CppObject *)0x0) goto label_05caa62a;
        pIVar3 = local_58[2].klass;
        if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
        }
        bVar5 = Settings_MobileInputBindingRegistry__TryGetBinding
                          ((System_String_o *)pIVar3,&local_50,(MethodInfo *)0x0);
        if (bVar5) {
          ThrowNullReferenceException();
        }
      }
    }
    else {
      local_48._8_8_ = local_68;
      while( true ) {
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
        if (!bVar5) break;
        if (local_58 == (Il2CppObject *)0x0) {
label_05caa62a:
          ThrowNullReferenceException();
        }
        pIVar3 = local_58[2].klass;
        if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
        }
        bVar5 = Settings_MobileInputBindingRegistry__TryGetBinding
                          ((System_String_o *)pIVar3,&local_50,(MethodInfo *)0x0);
        if (bVar5) {
          bVar5 = System_Collections_Generic_List_object___Contains
                            ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pIVar3,
                             (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains)
          ;
          pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (!bVar5) {
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (__this_01->fields)._items;
            if (pSVar6 == (System_String_array *)0x0) {
              ThrowNullReferenceException();
            }
            uVar2 = (__this_01->fields)._size;
            if (uVar2 < (uint)pSVar6->max_length) {
              (__this_01->fields)._size = uVar2 + 1;
              pSVar6->m_Items[(int)uVar2] = (System_String_o *)pIVar3;
              Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pIVar3,
                         (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
    if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
      if ((__this_01->fields)._size == 0) {
        pSVar7 = "None";
      }
      else {
        pSVar6 = (System_String_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)__this_01,
                            (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        pSVar7 = System_String__Join("+",pSVar6,(MethodInfo *)0x0);
      }
      return pSVar7;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutActionListEditor$$SetVisible
// il2cpp: void UI_MobileLayoutActionListEditor__SetVisible (UI_MobileLayoutActionListEditor_o* __this, bool visible, const MethodInfo* method);
// 0x5cab400

void UI_MobileLayoutActionListEditor__SetVisible
               (UI_MobileLayoutActionListEditor_o *__this,bool visible,MethodInfo *method)

{
  UnityEngine_UI_LayoutElement_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547a86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a86 = '\x01';
  }
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,visible,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._layoutElement;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
label_05cab4ff:
      UI_MobileLayoutActionListEditor__RefreshLayout(__this,method_00);
      return;
    }
    pUVar1 = (__this->fields)._layoutElement;
    if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      method_00 = (MethodInfo *)(ulong)!visible;
      (*(pUVar1->klass->vtable)._28_set_ignoreLayout.methodPtr)
                (pUVar1,!visible,(pUVar1->klass->vtable)._28_set_ignoreLayout.method);
      if (visible) {
        UI_MobileLayoutActionListEditor__UpdateHeight(__this,method_00);
        goto label_05cab4ff;
      }
      pUVar1 = (__this->fields)._layoutElement;
      if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
        (*(pUVar1->klass->vtable)._34_set_minHeight.methodPtr)
                  (pUVar1,0.0,(pUVar1->klass->vtable)._34_set_minHeight.method);
        pUVar1 = (__this->fields)._layoutElement;
        if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
          (*(pUVar1->klass->vtable)._38_set_preferredHeight.methodPtr)
                    (pUVar1,0.0,(pUVar1->klass->vtable)._38_set_preferredHeight.method);
          pUVar1 = (__this->fields)._layoutElement;
          if (pUVar1 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            method_00 = (pUVar1->klass->vtable)._42_set_flexibleHeight.method;
            (*(pUVar1->klass->vtable)._42_set_flexibleHeight.methodPtr)(pUVar1,0.0,method_00);
            goto label_05cab4ff;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutActionListEditor$$AddAction
// il2cpp: void UI_MobileLayoutActionListEditor__AddAction (UI_MobileLayoutActionListEditor_o* __this, System_String_o* actionId, const MethodInfo* method);
// 0x5cadf10

void UI_MobileLayoutActionListEditor__AddAction
               (UI_MobileLayoutActionListEditor_o *__this,System_String_o *actionId,MethodInfo *method)

{
  Settings_StringSetting_o **targetAddress;
  int32_t *piVar1;
  uint uVar2;
  Settings_StringSetting_array *pSVar3;
  UI_ElementStyle_o *style;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar4;
  UI_MobileLayoutActionListEditor___c__DisplayClass12_0_o *__this_01;
  Settings_StringSetting_o *pSVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_UI_LayoutElement_o *pUVar7;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_02;
  UnityEngine_Transform_o *pUVar8;
  System_String_o *pSVar9;
  UnityEngine_Events_UnityAction_o *pUVar10;
  UnityEngine_UI_Text_o *value;
  MethodInfo *pMVar11;
  UI_MobileLayoutActionListEditor_o *__this_03;
  UnityEngine_GameObject_o **targetAddress_00;
  
  if (Il2CppMethodInitialized_07547a87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_StringSetting_Text_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_StringSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutActionListEditor_c__DisplayClass12_0_AddAction_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileLayoutActionListEditor_c__DisplayClass12_0_AddAction_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileLayoutActionListEditor_c__DisplayClass12_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"ActionRow");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    Il2CppMethodInitialized_07547a87 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MobileLayoutActionListEditor_c__DisplayClass12_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UI_MobileLayoutActionListEditor___c__DisplayClass12_0_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
    Settings_StringSetting___ctor_5b7b730(pSVar5,actionId,0x7fffffff,(MethodInfo *)0x0);
    targetAddress = &(__this_01->fields).setting;
    (__this_01->fields).setting = pSVar5;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pMVar11 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
    __this_03 = (UI_MobileLayoutActionListEditor_o *)(__this->fields)._actions;
    if (__this_03 != (UI_MobileLayoutActionListEditor_o *)0x0) {
      pSVar5 = (__this_01->fields).setting;
      piVar1 = (int32_t *)((long)&(__this_03->fields).m_CancellationTokenSource + 4);
      *piVar1 = *piVar1 + 1;
      pSVar3 = (Settings_StringSetting_array *)(__this_03->fields).m_CachedPtr;
      if (pSVar3 != (Settings_StringSetting_array *)0x0) {
        uVar2 = *(uint *)&(__this_03->fields).m_CancellationTokenSource;
        if (uVar2 < (uint)pSVar3->max_length) {
          pMVar11 = (MethodInfo *)(ulong)(uVar2 + 1);
          *(uint *)&(__this_03->fields).m_CancellationTokenSource = uVar2 + 1;
          __this_03 = (UI_MobileLayoutActionListEditor_o *)(pSVar3->m_Items + (int)uVar2);
          pSVar3->m_Items[(int)uVar2] = pSVar5;
          Il2CppCodeGenWriteBarrier((void **)__this_03);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pSVar5,
                     (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
        }
        pUVar6 = UI_MobileLayoutActionListEditor__CreateRect
                           (__this_03,"ActionRow",(__this->fields)._rowsRoot,pMVar11);
        targetAddress_00 = &(__this_01->fields).row;
        (__this_01->fields).row = pUVar6;
        Il2CppCodeGenWriteBarrier(targetAddress_00);
        pUVar6 = (__this_01->fields).row;
        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
          pUVar7 = UnityEngine_GameObject__AddComponent_object_
                             (pUVar6,(MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
          if (pUVar7 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar7->klass->vtable)._38_set_preferredHeight.methodPtr)
                      (pUVar7,36.0,(pUVar7->klass->vtable)._38_set_preferredHeight.method);
            if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
              __this_02 = UnityEngine_GameObject__AddComponent_object_
                                    (*targetAddress_00,
                                     (MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
              if (__this_02 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                          ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,8.0,(MethodInfo *)0x0
                          );
                UnityEngine_UI_LayoutGroup__set_childAlignment
                          ((UnityEngine_UI_LayoutGroup_o *)__this_02,3,(MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                          ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,false,
                           (MethodInfo *)0x0);
                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                          ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,false,
                           (MethodInfo *)0x0);
                if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar8 = UnityEngine_GameObject__get_transform(*targetAddress_00,(MethodInfo *)0x0);
                  if (*targetAddress != (Settings_StringSetting_o *)0x0) {
                    style = (__this->fields)._style;
                    pSVar9 = UI_MobileInputBindingUtil__GetActionLabel
                                       (((*targetAddress)->fields)._value,(__this->fields)._role,
                                        (MethodInfo *)0x0);
                    pUVar10 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                    UnityEngine_Events_UnityAction___ctor
                              (pUVar10,(Il2CppObject *)__this_01,
                               (intptr_t)
                               MethodInfo_UI_MobileLayoutActionListEditor_c__DisplayClass12_0_AddAction_b__0,
                               (MethodInfo *)0x0);
                    pUVar6 = UI_ElementFactory__CreateDefaultButton
                                       (pUVar8,style,pSVar9,220.0,34.0,pUVar10,(MethodInfo *)0x0);
                    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar8 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
                      if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                        pUVar8 = UnityEngine_Transform__Find(pUVar8,"Text",(MethodInfo *)0x0);
                        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                        }
                        bVar4 = UnityEngine_Object__op_Inequality
                                          ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,
                                           (MethodInfo *)0x0);
                        if (bVar4) {
                          if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_05cae375;
                          __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                                      (__this->fields)._labels;
                          pSVar5 = *targetAddress;
                          value = UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)pUVar8,
                                             (MethodInfo_34B0830 *)
                                             MethodInfo_UnityEngine_Component_GetComponent_Text);
                          if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                          goto label_05cae375;
                          System_Collections_Generic_Dictionary_object__object___set_Item
                                    (__this_00,(Il2CppObject *)pSVar5,(Il2CppObject *)value,
                                     (MethodInfo_4AAD4C0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_StringSetting_Text_set_Item
                                    );
                        }
                        if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar8 = UnityEngine_GameObject__get_transform(*targetAddress_00,(MethodInfo *)0x0);
                          pMVar11 = (MethodInfo *)(__this->fields)._style;
                          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                          }
                          pSVar9 = UI_UIManager__GetLocaleCommon("Delete",(MethodInfo *)0x0);
                          pUVar10 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                          UnityEngine_Events_UnityAction___ctor
                                    (pUVar10,(Il2CppObject *)__this_01,
                                     (intptr_t)
                                     MethodInfo_UI_MobileLayoutActionListEditor_c__DisplayClass12_0_AddAction_b__1
                                     ,(MethodInfo *)0x0);
                          UI_ElementFactory__CreateDefaultButton
                                    (pUVar8,(UI_ElementStyle_o *)pMVar11,pSVar9,82.0,34.0,pUVar10,
                                     (MethodInfo *)0x0);
                          UI_MobileLayoutActionListEditor__UpdateHeight(__this,pMVar11);
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
label_05cae375:
  ThrowNullReferenceException();
}


// UI.MobileLayoutActionListEditor$$UpdateHeight
// il2cpp: void UI_MobileLayoutActionListEditor__UpdateHeight (UI_MobileLayoutActionListEditor_o* __this, const MethodInfo* method);
// 0x5cae380

void UI_MobileLayoutActionListEditor__UpdateHeight
               (UI_MobileLayoutActionListEditor_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_StringSetting__o *pSVar2;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  bool bVar4;
  int iVar5;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547a88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547a88 = '\x01';
  }
  pSVar2 = (__this->fields)._actions;
  if (pSVar2 == (System_Collections_Generic_List_StringSetting__o *)0x0) {
label_05cae495:
    ThrowNullReferenceException();
  }
  iVar1 = (pSVar2->fields)._size;
  iVar5 = 1;
  if (1 < iVar1) {
    iVar5 = iVar1;
  }
  pUVar3 = (__this->fields)._rowsLayoutElement;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar3 = (__this->fields)._rowsLayoutElement;
    if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cae495;
    (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
              (pUVar3,(float)iVar5 * 42.0,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
  }
  pUVar3 = (__this->fields)._layoutElement;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar3 = (__this->fields)._layoutElement;
    if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cae495;
    method_00 = (pUVar3->klass->vtable)._38_set_preferredHeight.method;
    (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)(pUVar3,(float)iVar5 * 42.0 + 48.0,method_00);
  }
  UI_MobileLayoutActionListEditor__RefreshLayout(__this,method_00);
  return;
}


// UI.MobileLayoutActionListEditor$$RefreshLayout
// il2cpp: void UI_MobileLayoutActionListEditor__RefreshLayout (UI_MobileLayoutActionListEditor_o* __this, const MethodInfo* method);
// 0x5cae4a0

void UI_MobileLayoutActionListEditor__RefreshLayout
               (UI_MobileLayoutActionListEditor_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  
  if (Il2CppMethodInitialized_07547a89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_LayoutRebuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    Il2CppMethodInitialized_07547a89 = '\x01';
  }
  pUVar3 = (__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pUVar3 = (__this->fields)._root;
    if ((TypeInfo_UnityEngine_UI_LayoutRebuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_LayoutRebuilder);
    }
    UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar3,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._root;
    if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar2 = (UnityEngine_RectTransform_o *)
             UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pUVar3,(MethodInfo *)0x0);
    pUVar3 = (UnityEngine_RectTransform_o *)0x0;
    if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar3 = (UnityEngine_RectTransform_o *)0x0, pUVar2->klass == TypeInfo_UnityEngine_RectTransform)) {
      pUVar3 = pUVar2;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_UnityEngine_UI_LayoutRebuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_LayoutRebuilder);
      }
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar3,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// UI.MobileLayoutActionListEditor$$CreateRect
// il2cpp: UnityEngine_GameObject_o* UI_MobileLayoutActionListEditor__CreateRect (UI_MobileLayoutActionListEditor_o* __this, System_String_o* name, UnityEngine_RectTransform_o* parent, const MethodInfo* method);
// 0x5cadd50

UnityEngine_GameObject_o *
UI_MobileLayoutActionListEditor__CreateRect
          (UI_MobileLayoutActionListEditor_o *__this,System_String_o *name,UnityEngine_RectTransform_o *parent
          ,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  
  if (Il2CppMethodInitialized_07547a8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_07547a8a = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this_00,name,components,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__GetComponent_object_
                            (__this_00,
                             (MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510
                  ((UnityEngine_Transform_o *)__this_01,(UnityEngine_Transform_o *)parent,false,
                   (MethodInfo *)0x0);
        UnityEngine_RectTransform__set_anchorMin
                  (__this_01,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_anchorMax
                  (__this_01,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        UnityEngine_RectTransform__set_sizeDelta
                  (__this_01,
                   (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                   (MethodInfo *)0x0);
        return __this_00;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutActionListEditor$$.ctor
// il2cpp: void UI_MobileLayoutActionListEditor___ctor (UI_MobileLayoutActionListEditor_o* __this, const MethodInfo* method);
// 0x5cae5d0

void UI_MobileLayoutActionListEditor___ctor(UI_MobileLayoutActionListEditor_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_StringSetting__o *__this_00;
  System_Collections_Generic_Dictionary_StringSetting__Text__o *__this_01;
  
  if (Il2CppMethodInitialized_07547a8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_StringSetting_Text_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_StringSetting_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_StringSetting_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_StringSetting);
    Il2CppMethodInitialized_07547a8b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_StringSetting)
  ;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_StringSetting_ctor);
  (__this->fields)._actions = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._actions);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_StringSetting_Text);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_StringSetting_Text_ctor);
  (__this->fields)._labels = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labels);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutActionListEditor$$<Setup>b__9_0
// il2cpp: void UI_MobileLayoutActionListEditor___Setup_b__9_0 (UI_MobileLayoutActionListEditor_o* __this, const MethodInfo* method);
// 0x5cae690

void UI_MobileLayoutActionListEditor___Setup_b__9_0
               (UI_MobileLayoutActionListEditor_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547a8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07547a8c = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MobileLayoutActionListEditor__AddAction(__this,"None",in_RDX);
  return;
}


