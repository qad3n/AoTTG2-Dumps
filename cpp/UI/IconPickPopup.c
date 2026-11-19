// Type: UI.IconPickPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/IconPickPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/IconPickPopup.cs
// --------------------------------

// UI.IconPickPopup.<>c__DisplayClass25_0$$.ctor
// il2cpp: void UI_IconPickPopup___c__DisplayClass25_0___ctor (UI_IconPickPopup___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x5cc0300

void UI_IconPickPopup___c__DisplayClass25_0___ctor
               (UI_IconPickPopup___c__DisplayClass25_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.IconPickPopup.<>c__DisplayClass25_0$$<CreateRow>b__0
// il2cpp: void UI_IconPickPopup___c__DisplayClass25_0___CreateRow_b__0 (UI_IconPickPopup___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x5cc0540

void UI_IconPickPopup___c__DisplayClass25_0___CreateRow_b__0
               (UI_IconPickPopup___c__DisplayClass25_0_o *__this,MethodInfo *method)

{
  UI_IconPickPopup_o *pUVar1;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 == (UI_IconPickPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._62_OnSelectObject.methodPtr)
            (pUVar1,(__this->fields).itemName,(__this->fields).index,
             (pUVar1->klass->vtable)._62_OnSelectObject.method);
  return;
}


// UI.IconPickPopup$$get_Title
// il2cpp: System_String_o* UI_IconPickPopup__get_Title (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x5cbf390

System_String_o * UI_IconPickPopup__get_Title(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// UI.IconPickPopup$$get_Width
// il2cpp: float UI_IconPickPopup__get_Width (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x5cbf3b0

float UI_IconPickPopup__get_Width(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  return 1000.0;
}


// UI.IconPickPopup$$get_Height
// il2cpp: float UI_IconPickPopup__get_Height (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x5cbf3c0

float UI_IconPickPopup__get_Height(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  return 800.0;
}


// UI.IconPickPopup$$get_ScrollBar
// il2cpp: bool UI_IconPickPopup__get_ScrollBar (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x5cbf3d0

bool UI_IconPickPopup__get_ScrollBar(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.IconPickPopup$$get_VerticalSpacing
// il2cpp: float UI_IconPickPopup__get_VerticalSpacing (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x5cbf3e0

float UI_IconPickPopup__get_VerticalSpacing(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.IconPickPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_IconPickPopup__get_HorizontalPadding (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x5cbf3f0

int32_t UI_IconPickPopup__get_HorizontalPadding(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.IconPickPopup$$get_VerticalPadding
// il2cpp: int32_t UI_IconPickPopup__get_VerticalPadding (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x5cbf400

int32_t UI_IconPickPopup__get_VerticalPadding(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.IconPickPopup$$Setup
// il2cpp: void UI_IconPickPopup__Setup (UI_IconPickPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cbf410

void UI_IconPickPopup__Setup(UI_IconPickPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *__this_01;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547b10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_IconPickPopup_Setup_b__22_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_07547b10 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,70.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (__this_01,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_IconPickPopup_Setup_b__22_0,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar1,0.0,__this_01,(MethodInfo *)0x0);
  return;
}


// UI.IconPickPopup$$Show
// il2cpp: void UI_IconPickPopup__Show (UI_IconPickPopup_o* __this, Settings_BaseSetting_o* setting, UnityEngine_UI_Text_o* label, System_String_array* options, System_String_array* icons, System_String_array* tooltips, UnityEngine_Events_UnityAction_o* onSelect, UI_TooltipPopup_o* tooltipPopup, System_Int32_array* intOptionValues, const MethodInfo* method);
// 0x5cbf540
// eh: try 0x5cbf720..0x5cbf74f -> pad 0x5cbfaff (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cbfb17..0x5cbfb1c -> pad 0x5cbfb46 cleanup
// eh: try 0x5cbfb49..0x5cbfb53 -> pad 0x5cbfb5b catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cbf98f: mov rcx, rbx
// asm:   0x5cbf992: add rcx, 0x18
// asm:   0x5cbfa2e: jmp 0x5cbfa5d
// asm:   0x5cbfafd: jmp 0x5cbfaff
// asm:   0x5cbfaff: mov rbx, rax
// asm:   0x5cbfb02: cmp edx, 1
// asm:   0x5cbfb05: jne 0x5cbfb49
// asm:   0x5cbfb07: mov rdi, rbx
// asm:   0x5cbfb0a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cbfb0f: mov rbx, qword ptr [rax]
// asm:   0x5cbfb12: mov qword ptr [rsp + 0x40], rbx
// asm:   0x5cbfb17: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cbfb1c: lea rax, [rip + 0x15ce255]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5cbfb23: mov rsi, qword ptr [rax]
// asm:   0x5cbfb26: lea rdi, [rsp + 0x20]
// asm:   0x5cbfb2b: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5cbfb30: test rbx, rbx
// asm:   0x5cbfb33: mov r12, qword ptr [rsp + 0x18]
// asm:   0x5cbfb38: je 0x5cbf765
// asm:   0x5cbfb3e: mov rdi, rbx
// asm:   0x5cbfb41: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cbfb46: mov rbx, rax
// asm:   0x5cbfb49: lea rdi, [rsp + 0x40]
// asm:   0x5cbfb4e: call 0x2fdb260  ; il2cpp_runtime_helper_02fdb260()
// asm:   0x5cbfb53: mov rdi, rbx
// asm:   0x5cbfb56: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cbfb5b: mov rdi, rax
// asm:   0x5cbfb5e: call 0x2ab61e0  ; __clang_call_terminate()

void UI_IconPickPopup__Show
               (UI_IconPickPopup_o *__this,Settings_BaseSetting_o *setting,UnityEngine_UI_Text_o *label,
               System_String_array *options,System_String_array *icons,System_String_array *tooltips,
               UnityEngine_Events_UnityAction_o *onSelect,UI_TooltipPopup_o *tooltipPopup,
               System_Int32_array *intOptionValues,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  UnityEngine_Object_o *obj;
  bool bVar3;
  System_Collections_Generic_List_TSource__o *pSVar4;
  System_Collections_Generic_List_List_T___o *__this_00;
  System_Collections_Generic_List_List_T___o *pSVar5;
  System_Collections_Generic_List_List_T___o *__this_01;
  System_Collections_Generic_List_string__o *pSVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  Il2CppClass *pIVar8;
  System_Exception_o *__this_02;
  System_String_o *message;
  int32_t *piVar9;
  int32_t iVar10;
  MethodInfo *pMVar11;
  System_String_o **metadataPointer;
  System_String_array *method_00;
  undefined1 local_78 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_70;
  UnityEngine_Object_o *local_68;
  undefined1 local_58 [16];
  UnityEngine_Object_o *local_48;
  int32_t *local_40;
  System_Collections_Generic_List_List_T___o *local_38;
  
  method_00 = tooltips;
  if (Il2CppMethodInitialized_07547b11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_GroupItems_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07547b11 = '\x01';
  }
  local_78 = (undefined1  [8])0x0;
  pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_68 = (UnityEngine_Object_o *)0x0;
  (__this->fields)._intOptionValues = intOptionValues;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._intOptionValues);
  (__this->fields)._setting = setting;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setting);
  (__this->fields)._onSelect = onSelect;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSelect);
  (__this->fields)._options = options;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._options);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label);
  pSVar2 = (__this->fields)._groups;
  if (pSVar2 == (System_Collections_Generic_List_GameObject__o *)0x0) {
label_05cbfaf8:
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
             (System_Collections_Generic_List_object__o *)pSVar2,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
  local_68 = local_48;
  local_78 = (undefined1  [8])local_58._0_8_;
  pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)local_58._8_8_;
  local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_58._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_78;
  while (bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                            (MethodInfo_4C45C50 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext),
        obj = local_68, bVar3) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
  pSVar2 = (__this->fields)._groups;
  if (pSVar2 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05cbfaf8;
  piVar9 = &(pSVar2->fields)._version;
  *piVar9 = *piVar9 + 1;
  iVar10 = (pSVar2->fields)._size;
  (pSVar2->fields)._size = 0;
  if (0 < iVar10) {
    System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar10,(MethodInfo *)0x0);
  }
  if ((options == (System_String_array *)0x0) || (icons == (System_String_array *)0x0)) goto label_05cbfaf8;
  iVar1 = (int)options->max_length;
  if (iVar1 != (int)icons->max_length) {
    pIVar8 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar8);
    metadataPointer = &"Options and icons not equal length";
label_05cbfab4:
    message = il2cpp_codegen_get_runtime_metadata(metadataPointer);
    System_Exception___ctor_54fa440(__this_02,message,(MethodInfo *)0x0);
    pMVar11 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_IconPickPopup_Show);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar11);
  }
  if ((tooltips != (System_String_array *)0x0) && (iVar1 != (int)tooltips->max_length)) {
    pIVar8 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar8);
    metadataPointer = &"Options and tooltips not equal length";
    goto label_05cbfab4;
  }
  pSVar4 = System_Linq_Enumerable__ToList_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)options,
                      (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  __this_00 = Utility_Util__GroupItems_object_
                        ((System_Collections_Generic_List_T__o *)pSVar4,7,
                         (MethodInfo_377D5D0 *)MethodInfo_Utility_Util_GroupItems_string);
  pSVar4 = System_Linq_Enumerable__ToList_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)icons,
                      (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
  pMVar11 = (MethodInfo *)0x7;
  pSVar5 = Utility_Util__GroupItems_object_
                     ((System_Collections_Generic_List_T__o *)pSVar4,7,
                      (MethodInfo_377D5D0 *)MethodInfo_Utility_Util_GroupItems_string);
  if (tooltips == (System_String_array *)0x0) {
    (__this->fields)._currentIndex = 0;
    if (__this_00 == (System_Collections_Generic_List_List_T___o *)0x0) goto label_05cbfaf8;
  }
  else {
    pSVar4 = System_Linq_Enumerable__ToList_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)tooltips,
                        (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pMVar11 = (MethodInfo *)0x7;
    __this_01 = Utility_Util__GroupItems_object_
                          ((System_Collections_Generic_List_T__o *)pSVar4,7,
                           (MethodInfo_377D5D0 *)MethodInfo_Utility_Util_GroupItems_string);
    (__this->fields)._currentIndex = 0;
    if (__this_00 == (System_Collections_Generic_List_List_T___o *)0x0) goto label_05cbfaf8;
    piVar9 = &(__this_00->fields)._size;
    if (__this_01 != (System_Collections_Generic_List_List_T___o *)0x0) {
      iVar1 = *piVar9;
      if (pSVar5 == (System_Collections_Generic_List_List_T___o *)0x0) {
        if (0 < iVar1) {
          System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)__this_00,0,
                     (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_List_string_get_Item);
          goto label_05cbfaf8;
        }
      }
      else if (0 < iVar1) {
        iVar10 = 0;
        local_40 = piVar9;
        local_38 = pSVar5;
        do {
          pSVar5 = local_38;
          iVar1 = (__this_01->fields)._size;
          pMVar11 = (MethodInfo *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,iVar10,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_List_string_get_Item);
          pSVar6 = (System_Collections_Generic_List_string__o *)
                   System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar5,iVar10,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_List_string_get_Item);
          if (iVar10 < iVar1) {
            pSVar7 = (System_Collections_Generic_List_string__o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_01,iVar10,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_List_string_get_Item);
          }
          else {
            pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string)
            ;
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_List_object__o *)pSVar7,
                       (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
          }
          UI_IconPickPopup__CreateRow
                    (__this,(System_Collections_Generic_List_string__o *)pMVar11,pSVar6,pSVar7,tooltipPopup,
                     (MethodInfo *)method_00);
          iVar10 = iVar10 + 1;
        } while (iVar10 < *local_40);
      }
      goto label_05cbfa5d;
    }
  }
  piVar9 = &(__this_00->fields)._size;
  if (pSVar5 == (System_Collections_Generic_List_List_T___o *)0x0) {
    if (0 < *piVar9) {
      System_Collections_Generic_List_object___get_Item
                ((System_Collections_Generic_List_object__o *)__this_00,0,
                 (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_List_string_get_Item);
      ThrowNullReferenceException();
    }
  }
  else if (0 < *piVar9) {
    iVar10 = 0;
    do {
      pMVar11 = (MethodInfo *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,iVar10,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_List_string_get_Item);
      pSVar6 = (System_Collections_Generic_List_string__o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar5,iVar10,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_List_string_get_Item);
      pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)pSVar7,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      UI_IconPickPopup__CreateRow
                (__this,(System_Collections_Generic_List_string__o *)pMVar11,pSVar6,pSVar7,tooltipPopup,
                 (MethodInfo *)method_00);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (__this_00->fields)._size);
  }
label_05cbfa5d:
  UI_BasePopup__Show((UI_BasePopup_o *)__this,pMVar11);
  return;
}


// UI.IconPickPopup$$OnBottomBarButtonClick
// il2cpp: void UI_IconPickPopup__OnBottomBarButtonClick (UI_IconPickPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5cc02e0

void UI_IconPickPopup__OnBottomBarButtonClick
               (UI_IconPickPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.IconPickPopup$$CreateRow
// il2cpp: void UI_IconPickPopup__CreateRow (UI_IconPickPopup_o* __this, System_Collections_Generic_List_string__o* items, System_Collections_Generic_List_string__o* icons, System_Collections_Generic_List_string__o* tooltips, UI_TooltipPopup_o* tooltipPopup, const MethodInfo* method);
// 0x5cbfb70
// eh: try 0x5cbfe80..0x5cc01a0 -> pad 0x5cc01bf (+19 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5cc01ea..0x5cc02bd -> pad 0x5cc02bf (+1 call sites) cleanup
// eh: try 0x5cc02c2..0x5cc02c7 -> pad 0x5cc02cf catch (...) [compiler noexcept guard]
// asm: 62 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cc0157: jmp 0x5cc024c
// asm:   0x5cc01a5: jmp 0x5cc01c1
// asm:   0x5cc01a7: jmp 0x5cc01c1
// asm:   0x5cc01a9: jmp 0x5cc01c1
// asm:   0x5cc01ab: jmp 0x5cc01c1
// asm:   0x5cc01ad: jmp 0x5cc01c1
// asm:   0x5cc01af: jmp 0x5cc01c1
// asm:   0x5cc01b1: jmp 0x5cc01c1
// asm:   0x5cc01b3: jmp 0x5cc01c1
// asm:   0x5cc01b5: jmp 0x5cc01c1
// asm:   0x5cc01b7: jmp 0x5cc01c1
// asm:   0x5cc01b9: jmp 0x5cc01c1
// asm:   0x5cc01bb: jmp 0x5cc01c1
// asm:   0x5cc01bd: jmp 0x5cc01c1
// asm:   0x5cc01bf: jmp 0x5cc01c1
// asm:   0x5cc01c1: mov rbx, rax
// asm:   0x5cc01c4: cmp edx, 1
// asm:   0x5cc01c7: jne 0x5cc02c7
// asm:   0x5cc01cd: mov rdi, rbx
// asm:   0x5cc01d0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cc01d5: mov rbp, rax
// asm:   0x5cc01d8: lea rax, [rip + 0x18964e9]
// asm:   0x5cc01df: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5cc01e3: mov rax, qword ptr [rbp]
// asm:   0x5cc01e7: mov rsi, qword ptr [rax]
// asm:   0x5cc01ea: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5cc01ef: test al, al
// asm:   0x5cc01f1: je 0x5cc029b
// asm:   0x5cc01f7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cc01fc: mov rbx, qword ptr [r13]
// asm:   0x5cc0200: lea rdi, [rip + 0x161ba09]  ; "Failed to load icon: "
// asm:   0x5cc0207: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5cc020c: mov rdi, rax
// asm:   0x5cc020f: mov rsi, rbx
// asm:   0x5cc0212: xor edx, edx
// asm:   0x5cc0214: call 0x53f0320  ; System_String__Concat()
// asm:   0x5cc0219: mov rbx, rax
// asm:   0x5cc021c: lea rdi, [rip + 0x15b7425]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5cc0223: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5cc0228: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5cc022f: jne 0x5cc0239
// asm:   0x5cc0231: mov rdi, rax
// asm:   0x5cc0234: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5cc0239: mov rdi, rbx
// asm:   0x5cc023c: xor esi, esi
// asm:   0x5cc023e: call 0x69c42a0  ; UnityEngine_Debug__Log()
// asm:   0x5cc0243: jmp 0x5cc0040
// asm:   0x5cc029b: mov edi, 8
// asm:   0x5cc02a0: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5cc02a5: mov rcx, qword ptr [rbp]
// asm:   0x5cc02a9: mov qword ptr [rax], rcx
// asm:   0x5cc02ac: lea rsi, [rip + 0x116d24d]
// asm:   0x5cc02b3: mov rdi, rax
// asm:   0x5cc02b6: xor edx, edx
// asm:   0x5cc02b8: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5cc02bd: jmp 0x5cc02bf
// asm:   0x5cc02bf: mov rbx, rax
// asm:   0x5cc02c2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cc02c7: mov rdi, rbx
// asm:   0x5cc02ca: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cc02cf: mov rdi, rax
// asm:   0x5cc02d2: call 0x2ab61e0  ; __clang_call_terminate()

void UI_IconPickPopup__CreateRow
               (UI_IconPickPopup_o *__this,System_Collections_Generic_List_string__o *items,
               System_Collections_Generic_List_string__o *icons,
               System_Collections_Generic_List_string__o *tooltips,UI_TooltipPopup_o *tooltipPopup,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar4;
  UnityEngine_Events_UnityEvent_o *__this_01;
  MethodInfo *pMVar5;
  bool bVar6;
  UnityEngine_GameObject_o *__this_02;
  UI_IconPickPopup___c__DisplayClass25_0_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Object_o *uo;
  System_String_o *pSVar9;
  UnityEngine_UI_Button_o *pUVar10;
  UnityEngine_Events_UnityAction_o *__this_03;
  System_String_o *name;
  UnityEngine_Texture_o *value;
  UnityEngine_UI_RawImage_o *__this_04;
  UI_HoverTooltip_o *pUVar11;
  UnityEngine_UI_Text_o *pUVar12;
  int32_t index;
  float spacing;
  UnityEngine_Color_o UVar13;
  
  if (Il2CppMethodInitialized_07547b12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Unity_VisualScripting_ComponentHolderProtocol_GetOrAddComponent_HoverTooltip);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_IconPickPopup_c__DisplayClass25_0_CreateRow_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_IconPickPopup_c__DisplayClass25_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Misc/MapEditorObjectButton");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultLabel");
    Il2CppMethodInitialized_07547b12 = '\x01';
  }
  pUVar8 = (__this->fields).SinglePanel;
  spacing = (*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                      (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method);
  __this_02 = UI_ElementFactory__CreateHorizontalGroup(pUVar8,spacing,3,(MethodInfo *)0x0);
  pMVar5 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
  __this_00 = (__this->fields)._groups;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (__this_00->fields)._items;
    if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pUVar4->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pUVar4->m_Items[(int)uVar2] = __this_02;
        Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_02,
                   (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
      }
      if (items != (System_Collections_Generic_List_string__o *)0x0) {
        iVar3 = (items->fields)._size;
        if (__this_02 == (UnityEngine_GameObject_o *)0x0) {
          if (0 < iVar3) {
            pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_IconPickPopup_c__DisplayClass25_0);
            System_Object___ctor((Il2CppObject *)pUVar7,(MethodInfo *)0x0);
            if (pUVar7 != (UI_IconPickPopup___c__DisplayClass25_0_o *)0x0) {
              (pUVar7->fields).__4__this = __this;
              Il2CppCodeGenWriteBarrier(&(pUVar7->fields).__4__this);
              ThrowNullReferenceException();
            }
            goto label_05cc027c;
          }
        }
        else if (0 < iVar3) {
          index = 0;
          do {
            pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_IconPickPopup_c__DisplayClass25_0);
            System_Object___ctor((Il2CppObject *)pUVar7,(MethodInfo *)0x0);
            if (pUVar7 == (UI_IconPickPopup___c__DisplayClass25_0_o *)0x0) goto label_05cc027c;
            (pUVar7->fields).__4__this = __this;
            Il2CppCodeGenWriteBarrier(&(pUVar7->fields).__4__this);
            pUVar8 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
            uo = (UnityEngine_Object_o *)
                 UI_ElementFactory__InstantiateAndBind(pUVar8,"Prefabs/Misc/MapEditorObjectButton",(MethodInfo *)0x0);
            pSVar9 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)items,index,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_string_get_Item);
            (pUVar7->fields).itemName = pSVar9;
            Il2CppCodeGenWriteBarrier(&(pUVar7->fields).itemName);
            (pUVar7->fields).index = (__this->fields)._currentIndex;
            if ((uo == (UnityEngine_Object_o *)0x0) ||
               (pUVar10 = UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)uo,
                                     (MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_Button),
               pUVar10 == (UnityEngine_UI_Button_o *)0x0)) goto label_05cc027c;
            __this_01 = (UnityEngine_Events_UnityEvent_o *)(pUVar10->fields).m_OnClick;
            __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      (__this_03,(Il2CppObject *)pUVar7,
                       (intptr_t)MethodInfo_UI_IconPickPopup_c__DisplayClass25_0_CreateRow_b__0,
                       (MethodInfo *)0x0);
            if (__this_01 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_05cc027c;
            UnityEngine_Events_UnityEvent__AddListener(__this_01,__this_03,(MethodInfo *)0x0);
            piVar1 = &(__this->fields)._currentIndex;
            *piVar1 = *piVar1 + 1;
            if (icons == (System_Collections_Generic_List_string__o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar9 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)icons,index,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_string_get_Item);
            bVar6 = System_String__op_Inequality
                              (pSVar9,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                               (MethodInfo *)0x0);
            if (bVar6) {
              pSVar9 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
              name = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)icons,index,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_string_get_Item);
              if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager)
                ;
              }
              value = (UnityEngine_Texture_o *)
                      ApplicationManagers_ResourceManager__LoadAsset(pSVar9,name,true,false,(MethodInfo *)0x0)
              ;
              if ((value != (UnityEngine_Texture_o *)0x0) &&
                 (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
                il2cpp_codegen_raise_invalid_cast_exception(value);
              }
              pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)uo,(MethodInfo *)0x0)
              ;
              if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
                ThrowNullReferenceException();
              }
              pUVar8 = UnityEngine_Transform__Find(pUVar8,"Icon",(MethodInfo *)0x0);
              if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
                ThrowNullReferenceException();
              }
              __this_04 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar8,
                                     (MethodInfo_34B0830 *)
                                     MethodInfo_UnityEngine_Component_GetComponent_RawImage);
              if (__this_04 == (UnityEngine_UI_RawImage_o *)0x0) {
                ThrowNullReferenceException();
              }
              UnityEngine_UI_RawImage__set_texture(__this_04,value,(MethodInfo *)0x0);
              if (tooltips == (System_Collections_Generic_List_string__o *)0x0) {
                ThrowNullReferenceException();
              }
              if (index < (tooltips->fields)._size) {
                pSVar9 = System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)tooltips,index,
                                    (MethodInfo_395CF20 *)
                                    MethodInfo_System_Collections_Generic_List_string_get_Item);
                bVar6 = System_String__op_Inequality
                                  (pSVar9,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                                   (MethodInfo *)0x0);
                if (bVar6) {
                  pUVar11 = Unity_VisualScripting_ComponentHolderProtocol__GetOrAddComponent_object_
                                      (uo,(MethodInfo_34B1EB0 *)
                                          MethodInfo_Unity_VisualScripting_ComponentHolderProtocol_GetOrAddComponent_HoverTooltip
                                      );
                  pSVar9 = System_Collections_Generic_List_object___get_Item
                                     ((System_Collections_Generic_List_object__o *)tooltips,index,
                                      (MethodInfo_395CF20 *)
                                      MethodInfo_System_Collections_Generic_List_string_get_Item);
                  if (pUVar11 == (UI_HoverTooltip_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  (pUVar11->fields).Message = pSVar9;
                  Il2CppCodeGenWriteBarrier(&(pUVar11->fields).Message);
                  (pUVar11->fields).PopupOverride = tooltipPopup;
                  Il2CppCodeGenWriteBarrier(&(pUVar11->fields).PopupOverride);
                }
              }
            }
            pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)uo,(MethodInfo *)0x0);
            if (((pUVar8 == (UnityEngine_Transform_o *)0x0) ||
                (pUVar8 = UnityEngine_Transform__Find(pUVar8,"Text",(MethodInfo *)0x0),
                pUVar8 == (UnityEngine_Transform_o *)0x0)) ||
               (pUVar12 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar8,
                                     (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text)
               , pUVar12 == (UnityEngine_UI_Text_o *)0x0)) goto label_05cc027c;
            (*(pUVar12->klass->vtable)._75_set_text.methodPtr)
                      (pUVar12,(pUVar7->fields).itemName,(pUVar12->klass->vtable)._75_set_text.method);
            pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)uo,(MethodInfo *)0x0);
            if ((pUVar8 == (UnityEngine_Transform_o *)0x0) ||
               (pUVar8 = UnityEngine_Transform__Find(pUVar8,"Text",(MethodInfo *)0x0),
               pUVar8 == (UnityEngine_Transform_o *)0x0)) goto label_05cc027c;
            pUVar12 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar8,
                                 (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            UVar13 = UI_UIManager__GetThemeColor
                               ("DefaultPanel","DefaultLabel","TextColor",
                                "DefaultPanel",(MethodInfo *)0x0);
            if (pUVar12 == (UnityEngine_UI_Text_o *)0x0) goto label_05cc027c;
            (*(pUVar12->klass->vtable)._23_set_color.methodPtr)
                      (pUVar12,UVar13,(pUVar12->klass->vtable)._23_set_color.method);
            index = index + 1;
          } while (index < (items->fields)._size);
        }
        return;
      }
    }
  }
label_05cc027c:
  ThrowNullReferenceException();
}


// UI.IconPickPopup$$OnSelectObject
// il2cpp: void UI_IconPickPopup__OnSelectObject (UI_IconPickPopup_o* __this, System_String_o* name, int32_t index, const MethodInfo* method);
// 0x5cc0310
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cc046c: jmp 0x5cc042e

void UI_IconPickPopup__OnSelectObject
               (UI_IconPickPopup_o *__this,System_String_o *name,int32_t index,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  UnityEngine_UI_Text_o *pUVar4;
  Settings_TypedSetting_T__o *__this_00;
  Settings_TypedSetting_T__c *pSVar5;
  System_Int32_array *pSVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  
  if (Il2CppMethodInitialized_07547b13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07547b13 = '\x01';
  }
  pUVar4 = (__this->fields)._label;
  if (pUVar4 == (UnityEngine_UI_Text_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar4->klass->vtable)._75_set_text.methodPtr)(pUVar4,name,(pUVar4->klass->vtable)._75_set_text.method);
  __this_00 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
  if (__this_00 != (Settings_TypedSetting_T__o *)0x0) {
    pSVar5 = __this_00->klass;
    bVar1 = (pSVar5->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pSVar5->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
      Settings_TypedSetting_object___set_Value
                (__this_00,(Il2CppObject *)name,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pUVar7 = (__this->fields)._onSelect;
      goto joined_r0x05cc0421;
    }
    bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pSVar5->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
      pSVar6 = (__this->fields)._intOptionValues;
      if ((pSVar6 != (System_Int32_array *)0x0) && (uVar3 = (uint)pSVar6->max_length, index < (int)uVar3)) {
        if (uVar3 <= (uint)index) {
          ThrowIndexOutOfRangeException();
        }
        index = pSVar6->m_Items[index];
      }
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)__this_00,index,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    }
  }
  pUVar7 = (__this->fields)._onSelect;
joined_r0x05cc0421:
  if (pUVar7 != (UnityEngine_Events_UnityAction_o *)0x0) {
    (*(code *)(pUVar7->fields).invoke_impl)((pUVar7->fields).method_code,(pUVar7->fields).method);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.IconPickPopup$$.ctor
// il2cpp: void UI_IconPickPopup___ctor (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x5cc0480

void UI_IconPickPopup___ctor(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547b14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_07547b14 = '\x01';
  }
  method_00 = (MethodInfo *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)method_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._groups = (System_Collections_Generic_List_GameObject__o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._groups);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.IconPickPopup$$<Setup>b__22_0
// il2cpp: void UI_IconPickPopup___Setup_b__22_0 (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x5cc0500

void UI_IconPickPopup___Setup_b__22_0(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547b15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_07547b15 = '\x01';
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


