// Type: UI.IconPickPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/IconPickPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/IconPickPopup.cs
// --------------------------------

// UI.IconPickPopup.<>c__DisplayClass25_0$$.ctor
// il2cpp: void UI_IconPickPopup___c__DisplayClass25_0___ctor (UI_IconPickPopup___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_IconPickPopup___c__DisplayClass25_0___ctor(UI_IconPickPopup___c__DisplayClass25_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.IconPickPopup.<>c__DisplayClass25_0$$<CreateRow>b__0
// il2cpp: void UI_IconPickPopup___c__DisplayClass25_0___CreateRow_b__0 (UI_IconPickPopup___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x1821d0b10

void UI_IconPickPopup___c__DisplayClass25_0___CreateRow_b__0
               (UI_IconPickPopup___c__DisplayClass25_0_o *__this,MethodInfo *method)

{
  UI_IconPickPopup_o *pUVar1;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_IconPickPopup_o *)0x0) {
    (*(pUVar1->klass->vtable)._62_OnSelectObject.methodPtr)
              (pUVar1,(__this->fields).itemName,(__this->fields).index,
               (pUVar1->klass->vtable)._62_OnSelectObject.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.IconPickPopup$$get_Title
// il2cpp: System_String_o* UI_IconPickPopup__get_Title (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x1818c6010

System_String_o*
UI_IconPickPopup__get_Title(UI_IconPickPopup_o* __this, MethodInfo* method)

{
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.IconPickPopup$$get_Width
// il2cpp: float UI_IconPickPopup__get_Width (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x18210fa90

float
UI_IconPickPopup__get_Width(UI_IconPickPopup_o* __this, MethodInfo* method)

{
  return 1000.0;
}


// UI.IconPickPopup$$get_Height
// il2cpp: float UI_IconPickPopup__get_Height (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x1821bb440

float
UI_IconPickPopup__get_Height(UI_IconPickPopup_o* __this, MethodInfo* method)

{
  return 800.0;
}


// UI.IconPickPopup$$get_ScrollBar
// il2cpp: bool UI_IconPickPopup__get_ScrollBar (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_IconPickPopup__get_ScrollBar(UI_IconPickPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.IconPickPopup$$get_VerticalSpacing
// il2cpp: float UI_IconPickPopup__get_VerticalSpacing (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x1820b9980

float
UI_IconPickPopup__get_VerticalSpacing(UI_IconPickPopup_o* __this, MethodInfo* method)

{
  return 10.0;
}


// UI.IconPickPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_IconPickPopup__get_HorizontalPadding (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x181b56090

int32_t
UI_IconPickPopup__get_HorizontalPadding(UI_IconPickPopup_o* __this, MethodInfo* method)

{
  return 10;
}


// UI.IconPickPopup$$get_VerticalPadding
// il2cpp: int32_t UI_IconPickPopup__get_VerticalPadding (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x181b56090

int32_t
UI_IconPickPopup__get_VerticalPadding(UI_IconPickPopup_o* __this, MethodInfo* method)

{
  return 10;
}


// UI.IconPickPopup$$Setup
// il2cpp: void UI_IconPickPopup__Setup (UI_IconPickPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821c3ff0

void UI_IconPickPopup__Setup(UI_IconPickPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_184346f16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_IconPickPopup_Setup_b__22_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_184346f16 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
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
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_IconPickPopup_Setup_b__22_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar1,0.0,__this_01,(MethodInfo *)0x0);
  return;
}


// UI.IconPickPopup$$Show
// il2cpp: void UI_IconPickPopup__Show (UI_IconPickPopup_o* __this, Settings_BaseSetting_o* setting, UnityEngine_UI_Text_o* label, System_String_array* options, System_String_array* icons, System_String_array* tooltips, UnityEngine_Events_UnityAction_o* onSelect, UI_TooltipPopup_o* tooltipPopup, System_Int32_array* intOptionValues, const MethodInfo* method);
// 0x1821c4130
// eh: try 0x1821c42e0..0x1821c431b -> pad 0x183315a20 catch Il2CppExceptionWrapper
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821c42dd: nop dword ptr [rax]
// asm:   0x1821c432c: mov rdx, qword ptr [rip + 0x1ebc1b5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x1821c4333: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1821c4338: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821c433d: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821c4342: test rcx, rcx
// asm:   0x1821c4345: jne 0x1821c45a9
// asm:   0x1821c434b: xor r13d, r13d
// asm:   0x1821c434e: mov r14, qword ptr [rsp + 0xb8]
// asm:   0x1821c4356: mov rdi, qword ptr [rsp + 0xa0]
// asm:   0x1821c4476: mov rsi, r13
// asm:   0x1821c448f: nop 
// asm:   0x1821c45a9: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

void UI_IconPickPopup__Show
               (UI_IconPickPopup_o *__this,Settings_BaseSetting_o *setting,UnityEngine_UI_Text_o *label,
               System_String_array *options,System_String_array *icons,System_String_array *tooltips,
               UnityEngine_Events_UnityAction_o *onSelect,UI_TooltipPopup_o *tooltipPopup,
               System_Int32_array *intOptionValues,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  UnityEngine_Object_o *obj;
  bool bVar3;
  int iVar4;
  System_Collections_Generic_List_TSource__o *pSVar5;
  System_Collections_Generic_List_List_T___o *__this_00;
  System_Collections_Generic_List_List_T___o *__this_01;
  System_Collections_Generic_List_List_T___o *__this_02;
  System_Collections_Generic_List_string__o *items;
  System_Collections_Generic_List_string__o *tooltips_00;
  Il2CppClass *pIVar6;
  System_Exception_o *pSVar7;
  System_String_o *pSVar8;
  MethodInfo *pMVar9;
  System_Collections_Generic_List_List_T___o *pSVar10;
  System_Collections_Generic_List_string__o *local_res20;
  undefined1 local_60 [16];
  UnityEngine_Object_o *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  UnityEngine_Object_o *local_38;
  
  if (Il2CppMethodInitialized_184346f17 == '\0') {
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
    Il2CppMethodInitialized_184346f17 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (UnityEngine_Object_o *)0x0;
  (__this->fields)._intOptionValues = intOptionValues;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._intOptionValues,intOptionValues);
  (__this->fields)._setting = setting;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setting,setting);
  (__this->fields)._onSelect = onSelect;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSelect,onSelect);
  (__this->fields)._options = options;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._options,options);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label,label);
  pSVar2 = (__this->fields)._groups;
  if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_T__o *)pSVar2,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_48 = (undefined1  [8])local_60._0_8_;
    pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
    local_38 = local_50;
    pSVar10 = (System_Collections_Generic_List_List_T___o *)0x0;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
    while (bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext),
          obj = local_38, bVar3) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    pSVar2 = (__this->fields)._groups;
    if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar4 = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < iVar4) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar4,(MethodInfo *)0x0);
      }
      if ((options != (System_String_array *)0x0) && (icons != (System_String_array *)0x0)) {
        if ((int)options->max_length != (int)icons->max_length) {
          pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          pSVar7 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar6);
          pSVar8 = il2cpp_codegen_get_runtime_metadata(&"Options and icons not equal length");
          System_Exception___ctor_1b6abf0(pSVar7,pSVar8,(MethodInfo *)0x0);
          pMVar9 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_IconPickPopup_Show);
          il2cpp_codegen_raise_exception((Il2CppObject *)pSVar7,pMVar9);
        }
        if ((tooltips != (System_String_array *)0x0) &&
           ((int)options->max_length != (int)tooltips->max_length)) {
          pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          pSVar7 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar6);
          pSVar8 = il2cpp_codegen_get_runtime_metadata(&"Options and tooltips not equal length");
          System_Exception___ctor_1b6abf0(pSVar7,pSVar8,(MethodInfo *)0x0);
          pMVar9 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_IconPickPopup_Show);
          il2cpp_codegen_raise_exception((Il2CppObject *)pSVar7,pMVar9);
        }
        pSVar5 = System_Linq_Enumerable__ToList_object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)options,
                            (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        __this_00 = Utility_Util__GroupItems_object_
                              ((System_Collections_Generic_List_T__o *)pSVar5,7,
                               (MethodInfo_86AC50 *)MethodInfo_Utility_Util_GroupItems_string);
        pSVar5 = System_Linq_Enumerable__ToList_object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)icons,
                            (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
        __this_01 = Utility_Util__GroupItems_object_
                              ((System_Collections_Generic_List_T__o *)pSVar5,7,
                               (MethodInfo_86AC50 *)MethodInfo_Utility_Util_GroupItems_string);
        __this_02 = pSVar10;
        if (tooltips != (System_String_array *)0x0) {
          pSVar5 = System_Linq_Enumerable__ToList_object_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)tooltips,
                              (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
          if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
          }
          __this_02 = Utility_Util__GroupItems_object_
                                ((System_Collections_Generic_List_T__o *)pSVar5,7,
                                 (MethodInfo_86AC50 *)MethodInfo_Utility_Util_GroupItems_string);
        }
        (__this->fields)._currentIndex = 0;
        if (__this_00 != (System_Collections_Generic_List_List_T___o *)0x0) {
          do {
            iVar4 = (int)pSVar10;
            if ((__this_00->fields)._size <= iVar4) {
              UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
              return;
            }
            if ((__this_02 == (System_Collections_Generic_List_List_T___o *)0x0) ||
               ((__this_02->fields)._size <= iVar4)) {
              items = (System_Collections_Generic_List_string__o *)
                      System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,iVar4,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_List_string_get_Item);
              if (__this_01 == (System_Collections_Generic_List_List_T___o *)0x0) break;
              local_res20 = (System_Collections_Generic_List_string__o *)
                            System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                      ((System_Collections_Generic_List_object__o *)__this_01,iVar4,
                                       (MethodInfo_92B830 *)
                                       MethodInfo_System_Collections_Generic_List_List_string_get_Item);
              tooltips_00 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
              System_Collections_Generic_List_object____ctor
                        ((System_Collections_Generic_LowLevelList_T__o *)tooltips_00,
                         (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
            }
            else {
              items = (System_Collections_Generic_List_string__o *)
                      System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,iVar4,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_List_string_get_Item);
              if (__this_01 == (System_Collections_Generic_List_List_T___o *)0x0) break;
              local_res20 = (System_Collections_Generic_List_string__o *)
                            System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                      ((System_Collections_Generic_List_object__o *)__this_01,iVar4,
                                       (MethodInfo_92B830 *)
                                       MethodInfo_System_Collections_Generic_List_List_string_get_Item);
              tooltips_00 = (System_Collections_Generic_List_string__o *)
                            System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                      ((System_Collections_Generic_List_object__o *)__this_02,iVar4,
                                       (MethodInfo_92B830 *)
                                       MethodInfo_System_Collections_Generic_List_List_string_get_Item);
            }
            UI_IconPickPopup__CreateRow(__this,items,local_res20,tooltips_00,tooltipPopup,(MethodInfo *)0x0);
            pSVar10 = (System_Collections_Generic_List_List_T___o *)(ulonglong)(iVar4 + 1);
          } while( true );
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.IconPickPopup$$OnBottomBarButtonClick
// il2cpp: void UI_IconPickPopup__OnBottomBarButtonClick (UI_IconPickPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x180a37400

void
UI_IconPickPopup__OnBottomBarButtonClick(UI_IconPickPopup_o* __this, System_String_o* name, MethodInfo* method)

{
  Unity_VisualScripting_IGraph_o *pUVar1;
  
  pUVar1 = (Unity_VisualScripting_IGraph_o *)
           (*(__this->klass->vtable)._22_unknown.methodPtr)(__this,(__this->klass->vtable)._22_unknown.method)
  ;
  return pUVar1;
}


// UI.IconPickPopup$$CreateRow
// il2cpp: void UI_IconPickPopup__CreateRow (UI_IconPickPopup_o* __this, System_Collections_Generic_List_string__o* items, System_Collections_Generic_List_string__o* icons, System_Collections_Generic_List_string__o* tooltips, UI_TooltipPopup_o* tooltipPopup, const MethodInfo* method);
// 0x1821c3760
// eh: try 0x1821c3a48..0x1821c3db5 -> pad 0x18333f250 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 48 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821c3be3: nop 
// asm:   0x1821c3beb: mov rdi, qword ptr [rsp + 0x40]
// asm:   0x1821c3bf0: mov rbx, qword ptr [rdi + 0x10]
// asm:   0x1821c3bf4: lea rcx, [rip + 0x1f2136d]  ; "Failed to load icon: "
// asm:   0x1821c3bfb: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1821c3c00: mov rcx, rax
// asm:   0x1821c3c03: xor r8d, r8d
// asm:   0x1821c3c06: mov rdx, rbx
// asm:   0x1821c3c09: call 0x181969e50  ; System_String__Concat()
// asm:   0x1821c3c0e: mov rbx, rax
// asm:   0x1821c3c11: lea rcx, [rip + 0x1f37820]  ; TypeInfo_UnityEngine_Debug
// asm:   0x1821c3c18: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1821c3c1d: cmp dword ptr [rax + 0xe4], 0
// asm:   0x1821c3c24: jne 0x1821c3c2e
// asm:   0x1821c3c26: mov rcx, rax
// asm:   0x1821c3c29: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x1821c3c2e: xor edx, edx
// asm:   0x1821c3c30: mov rcx, rbx
// asm:   0x1821c3c33: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x1821c3c38: mov r13, qword ptr [rsp + 0xd8]
// asm:   0x1821c3c40: mov r12, qword ptr [rsp + 0xc0]
// asm:   0x1821c3c48: mov rsi, qword ptr [rsp + 0x48]
// asm:   0x1821c3c4d: mov qword ptr [rsp + 0x38], rsi
// asm:   0x1821c3c52: mov ebx, dword ptr [rsp + 0x30]
// asm:   0x1821c3c56: mov r14, qword ptr [rsp + 0x50]
// asm:   0x18333f250: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f255: push rbx
// asm:   0x18333f256: push rbp
// asm:   0x18333f257: sub rsp, 0x38
// asm:   0x18333f25b: mov rbp, rdx
// asm:   0x18333f25e: mov rbx, qword ptr [rbp + 0x68]
// asm:   0x18333f262: mov rdx, qword ptr [rbx]
// asm:   0x18333f265: mov rdx, qword ptr [rdx]
// asm:   0x18333f268: mov rcx, qword ptr [rip + 0x1015b61]
// asm:   0x18333f26f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333f274: test al, al
// asm:   0x18333f276: je 0x18333f284
// asm:   0x18333f278: movabs rax, 0
// asm:   0x18333f282: jmp 0x18333f29c
// asm:   0x18333f284: mov rax, qword ptr [rbx]
// asm:   0x18333f287: mov qword ptr [rbp + 0x60], rax
// asm:   0x18333f28b: lea rdx, [rip + 0xc9ccf6]
// asm:   0x18333f292: lea rcx, [rbp + 0x60]
// asm:   0x18333f296: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333f29c: add rsp, 0x38
// asm:   0x18333f2a0: pop rbp
// asm:   0x18333f2a1: pop rbx
// asm:   0x18333f2a2: ret 

void UI_IconPickPopup__CreateRow
               (UI_IconPickPopup_o *__this,System_Collections_Generic_List_string__o *items,
               System_Collections_Generic_List_string__o *icons,
               System_Collections_Generic_List_string__o *tooltips,UI_TooltipPopup_o *tooltipPopup,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  UnityEngine_Events_UnityEvent_o *__this_01;
  MethodInfo *pMVar4;
  bool bVar5;
  UnityEngine_GameObject_o *__this_02;
  UI_IconPickPopup___c__DisplayClass25_0_o *object;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Object_o *uo;
  System_String_o *pSVar7;
  UnityEngine_UI_Button_o *pUVar8;
  UnityEngine_Events_UnityAction_o *__this_03;
  System_String_o *name;
  UnityEngine_Texture_o *pUVar9;
  UnityEngine_UI_RawImage_o *__this_04;
  UI_HoverTooltip_o *pUVar10;
  UnityEngine_UI_Text_o *pUVar11;
  UnityEngine_Color_o *pUVar12;
  int index;
  UnityEngine_Texture_o *value;
  float spacing;
  UnityEngine_Object_o *local_68 [4];
  UnityEngine_Color_o local_48;
  
  if (Il2CppMethodInitialized_184346f18 == '\0') {
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
    Il2CppMethodInitialized_184346f18 = '\x01';
  }
  pUVar6 = (__this->fields).SinglePanel;
  spacing = (*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)(__this);
  __this_02 = UI_ElementFactory__CreateHorizontalGroup(pUVar6,spacing,3,(MethodInfo *)0x0);
  pMVar4 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
  __this_00 = (__this->fields)._groups;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (__this_00->fields)._items;
    if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pUVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pUVar3->m_Items[(int)uVar2] = __this_02;
        Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,__this_02);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_02,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      index = 0;
      if (items != (System_Collections_Generic_List_string__o *)0x0) {
        while( true ) {
          if ((items->fields)._size <= index) {
            return;
          }
          object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_IconPickPopup_c__DisplayClass25_0);
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
          if (object == (UI_IconPickPopup___c__DisplayClass25_0_o *)0x0) break;
          (object->fields).__4__this = __this;
          Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
          if (__this_02 == (UnityEngine_GameObject_o *)0x0) break;
          pUVar6 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
          uo = (UnityEngine_Object_o *)
               UI_ElementFactory__InstantiateAndBind(pUVar6,"Prefabs/Misc/MapEditorObjectButton",(MethodInfo *)0x0);
          local_68[0] = uo;
          pSVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)items,index,
                              (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item)
          ;
          (object->fields).itemName = pSVar7;
          Il2CppCodeGenWriteBarrier(&(object->fields).itemName,pSVar7);
          (object->fields).index = (__this->fields)._currentIndex;
          if (uo == (UnityEngine_Object_o *)0x0) break;
          pUVar8 = UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)uo,
                              (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
          if (pUVar8 == (UnityEngine_UI_Button_o *)0x0) break;
          __this_01 = (UnityEngine_Events_UnityEvent_o *)(pUVar8->fields).m_OnClick;
          __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_03,(Il2CppObject *)object,
                     (intptr_t)MethodInfo_UI_IconPickPopup_c__DisplayClass25_0_CreateRow_b__0,
                     (MethodInfo *)0x0);
          if (__this_01 == (UnityEngine_Events_UnityEvent_o *)0x0) break;
          UnityEngine_Events_UnityEvent__AddListener(__this_01,__this_03,(MethodInfo *)0x0);
          piVar1 = &(__this->fields)._currentIndex;
          *piVar1 = *piVar1 + 1;
          if (icons == (System_Collections_Generic_List_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)icons,index,
                              (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item)
          ;
          bVar5 = System_String__op_Inequality
                            (pSVar7,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                             (MethodInfo *)0x0);
          if (bVar5) {
            pSVar7 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
            name = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)icons,index,
                              (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item)
            ;
            if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
            }
            pUVar9 = (UnityEngine_Texture_o *)
                     ApplicationManagers_ResourceManager__LoadAsset(pSVar7,name,true,(MethodInfo *)0x0);
            value = (UnityEngine_Texture_o *)0x0;
            if (pUVar9 != (UnityEngine_Texture_o *)0x0) {
              if (pUVar9->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
                value = pUVar9;
              }
              if (value == (UnityEngine_Texture_o *)0x0) {
                il2cpp_codegen_raise_invalid_cast_exception(pUVar9);
              }
            }
            pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)uo,(MethodInfo *)0x0);
            if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar6 = UnityEngine_Transform__Find(pUVar6,"Icon",(MethodInfo *)0x0);
            if (pUVar6 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            __this_04 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar6,
                                   (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage
                                  );
            if (__this_04 == (UnityEngine_UI_RawImage_o *)0x0) {
              ThrowNullReferenceException();
            }
            UnityEngine_UI_RawImage__set_texture(__this_04,value,(MethodInfo *)0x0);
            if (tooltips == (System_Collections_Generic_List_string__o *)0x0) {
              ThrowNullReferenceException();
            }
            if (index < (tooltips->fields)._size) {
              pSVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 ((System_Collections_Generic_List_object__o *)tooltips,index,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_string_get_Item);
              bVar5 = System_String__op_Inequality
                                (pSVar7,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                                 (MethodInfo *)0x0);
              if (bVar5) {
                pUVar10 = Unity_VisualScripting_ComponentHolderProtocol__GetOrAddComponent_object_
                                    (uo,(MethodInfo_664430 *)
                                        MethodInfo_Unity_VisualScripting_ComponentHolderProtocol_GetOrAddComponent_HoverTooltip
                                    );
                pSVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                   ((System_Collections_Generic_List_object__o *)tooltips,index,
                                    (MethodInfo_92B830 *)
                                    MethodInfo_System_Collections_Generic_List_string_get_Item);
                if (pUVar10 == (UI_HoverTooltip_o *)0x0) {
                  ThrowNullReferenceException();
                }
                (pUVar10->fields).Message = pSVar7;
                Il2CppCodeGenWriteBarrier(&(pUVar10->fields).Message,pSVar7);
                (pUVar10->fields).PopupOverride = tooltipPopup;
                Il2CppCodeGenWriteBarrier(&(pUVar10->fields).PopupOverride,tooltipPopup);
              }
            }
          }
          pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)uo,(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_Transform_o *)0x0) break;
          pUVar6 = UnityEngine_Transform__Find(pUVar6,"Text",(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_Transform_o *)0x0) break;
          pUVar11 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar6,
                               (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
          if (pUVar11 == (UnityEngine_UI_Text_o *)0x0) break;
          (*(pUVar11->klass->vtable)._75_set_text.methodPtr)
                    (pUVar11,(object->fields).itemName,(pUVar11->klass->vtable)._75_set_text.method);
          pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)uo,(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_Transform_o *)0x0) break;
          pUVar6 = UnityEngine_Transform__Find(pUVar6,"Text",(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_Transform_o *)0x0) break;
          pUVar11 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar6,
                               (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pUVar12 = UI_UIManager__GetThemeColor
                              (&local_48,"DefaultPanel","DefaultLabel","TextColor",
                               "DefaultPanel",(MethodInfo *)0x0);
          if (pUVar11 == (UnityEngine_UI_Text_o *)0x0) break;
          local_68[0] = *(UnityEngine_Object_o **)&pUVar12->fields;
          local_68[1]._0_4_ = (pUVar12->fields).b;
          local_68[1]._4_4_ = (pUVar12->fields).a;
          (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
                    (pUVar11,(UnityEngine_Color_o *)local_68,(pUVar11->klass->vtable)._23_set_color.method);
          index = index + 1;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.IconPickPopup$$OnSelectObject
// il2cpp: void UI_IconPickPopup__OnSelectObject (UI_IconPickPopup_o* __this, System_String_o* name, int32_t index, const MethodInfo* method);
// 0x1821c3dc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821c3f01: jmp 0x1821c3f48

void UI_IconPickPopup__OnSelectObject
               (UI_IconPickPopup_o *__this,System_String_o *name,int32_t index,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  UnityEngine_UI_Text_o *pUVar3;
  Settings_TypedSetting_T__o *__this_00;
  Settings_TypedSetting_T__c *pSVar4;
  Settings_TypedSetting_int__o *__this_01;
  Settings_TypedSetting_int__c *pSVar5;
  System_Int32_array *pSVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  bool bVar8;
  Settings_TypedSetting_T__o *pSVar9;
  
  if (Il2CppMethodInitialized_184346f19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184346f19 = '\x01';
  }
  pUVar3 = (__this->fields)._label;
  if (pUVar3 == (UnityEngine_UI_Text_o *)0x0) {
label_1821c3fc6:
    ThrowNullReferenceException();
  }
  (*(pUVar3->klass->vtable)._75_set_text.methodPtr)(pUVar3,name,(pUVar3->klass->vtable)._75_set_text.method);
  __this_00 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
  if (__this_00 != (Settings_TypedSetting_T__o *)0x0) {
    pSVar4 = __this_00->klass;
    bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if (((pSVar4->_2).typeHierarchyDepth < bVar2) ||
       ((pSVar4->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    pSVar9 = (Settings_TypedSetting_T__o *)0x0;
    if (bVar8) {
      pSVar9 = __this_00;
    }
    if (pSVar9 == (Settings_TypedSetting_T__o *)0x0) {
      bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if ((bVar2 <= (pSVar4->_2).typeHierarchyDepth) &&
         ((pSVar4->_2).typeHierarchy[(ulonglong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        __this_01 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
        bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
        pSVar5 = __this_01->klass;
        if ((__this->fields)._intOptionValues == (System_Int32_array *)0x0) {
          if (((pSVar5->_2).typeHierarchyDepth < bVar2) ||
             ((pSVar5->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)
             ) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_01);
          }
        }
        else {
          if (((pSVar5->_2).typeHierarchyDepth < bVar2) ||
             ((pSVar5->_2).typeHierarchy[(ulonglong)(TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth - 1]
              != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_01);
          }
          pSVar6 = (__this->fields)._intOptionValues;
          if (pSVar6 == (System_Int32_array *)0x0) goto label_1821c3fc6;
          uVar1 = (uint)pSVar6->max_length;
          if (index < (int)uVar1) {
            if (uVar1 <= (uint)index) {
              ThrowIndexOutOfRangeException();
            }
            index = pSVar6->m_Items[index];
          }
        }
        Settings_TypedSetting_int___set_Value
                  (__this_01,index,(MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      }
    }
    else {
      bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if (((pSVar4->_2).typeHierarchyDepth < bVar2) ||
         ((pSVar4->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting))
      {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_Settings_StringSetting);
      }
      Settings_TypedSetting_object___set_Value
                (__this_00,(Il2CppObject *)name,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    }
  }
  pUVar7 = (__this->fields)._onSelect;
  if (pUVar7 != (UnityEngine_Events_UnityAction_o *)0x0) {
    (*(code *)(pUVar7->fields).invoke_impl)((pUVar7->fields).method_code,(pUVar7->fields).method);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.IconPickPopup$$.ctor
// il2cpp: void UI_IconPickPopup___ctor (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x1821c4690

void UI_IconPickPopup___ctor(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_184346f1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_184346f1a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._groups = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._groups,__this_00);
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.IconPickPopup$$<Setup>b__22_0
// il2cpp: void UI_IconPickPopup___Setup_b__22_0 (UI_IconPickPopup_o* __this, const MethodInfo* method);
// 0x1821c4650

void UI_IconPickPopup___Setup_b__22_0(UI_IconPickPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_184346f1b = '\x01';
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


