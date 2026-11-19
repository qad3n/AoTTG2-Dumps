// Type: UI.RoleSpritePickPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/RoleSpritePickPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.RoleSpritePickPopup.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_RoleSpritePickPopup___c__DisplayClass21_0___ctor (UI_RoleSpritePickPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x5cc38e0

void UI_RoleSpritePickPopup___c__DisplayClass21_0___ctor
               (UI_RoleSpritePickPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.RoleSpritePickPopup.<>c__DisplayClass21_0$$<CreateItem>b__0
// il2cpp: bool UI_RoleSpritePickPopup___c__DisplayClass21_0___CreateItem_b__0 (UI_RoleSpritePickPopup___c__DisplayClass21_0_o* __this, PatreonEffects_RoleSpriteDefinition_o definition, const MethodInfo* method);
// 0x5cc3ab0

bool UI_RoleSpritePickPopup___c__DisplayClass21_0___CreateItem_b__0
               (UI_RoleSpritePickPopup___c__DisplayClass21_0_o *__this,
               PatreonEffects_RoleSpriteDefinition_o definition,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__op_Equality(definition.fields.RoleName,(__this->fields).value,(MethodInfo *)0x0);
  return bVar1;
}


// UI.RoleSpritePickPopup.<>c__DisplayClass21_0$$<CreateItem>b__1
// il2cpp: void UI_RoleSpritePickPopup___c__DisplayClass21_0___CreateItem_b__1 (UI_RoleSpritePickPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x5cc3ad0

void UI_RoleSpritePickPopup___c__DisplayClass21_0___CreateItem_b__1
               (UI_RoleSpritePickPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  System_String_o *value;
  UI_RoleSpritePickPopup_o *__this_00;
  System_String_o *displayText;
  MethodInfo *in_RCX;
  
  pTVar1 = (__this->fields).tmp;
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    value = (__this->fields).value;
    __this_00 = (__this->fields).__4__this;
    displayText = (*(pTVar1->klass->vtable)._65_get_text.methodPtr)
                            (pTVar1,(pTVar1->klass->vtable)._65_get_text.method);
    if (__this_00 != (UI_RoleSpritePickPopup_o *)0x0) {
      UI_RoleSpritePickPopup__OnSelect(__this_00,value,displayText,in_RCX);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.RoleSpritePickPopup$$get_Title
// il2cpp: System_String_o* UI_RoleSpritePickPopup__get_Title (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x5cc2620

System_String_o * UI_RoleSpritePickPopup__get_Title(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// UI.RoleSpritePickPopup$$get_Width
// il2cpp: float UI_RoleSpritePickPopup__get_Width (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x5cc2640

float UI_RoleSpritePickPopup__get_Width(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  return 760.0;
}


// UI.RoleSpritePickPopup$$get_Height
// il2cpp: float UI_RoleSpritePickPopup__get_Height (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x5cc2650

float UI_RoleSpritePickPopup__get_Height(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  return 620.0;
}


// UI.RoleSpritePickPopup$$get_ScrollBar
// il2cpp: bool UI_RoleSpritePickPopup__get_ScrollBar (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x5cc2660

bool UI_RoleSpritePickPopup__get_ScrollBar(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.RoleSpritePickPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_RoleSpritePickPopup__get_HorizontalPadding (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x5cc2670

int32_t UI_RoleSpritePickPopup__get_HorizontalPadding(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.RoleSpritePickPopup$$get_VerticalPadding
// il2cpp: int32_t UI_RoleSpritePickPopup__get_VerticalPadding (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x5cc2680

int32_t UI_RoleSpritePickPopup__get_VerticalPadding(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.RoleSpritePickPopup$$get_VerticalSpacing
// il2cpp: float UI_RoleSpritePickPopup__get_VerticalSpacing (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x5cc2690

float UI_RoleSpritePickPopup__get_VerticalSpacing(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.RoleSpritePickPopup$$Setup
// il2cpp: void UI_RoleSpritePickPopup__Setup (UI_RoleSpritePickPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cc26a0

void UI_RoleSpritePickPopup__Setup(UI_RoleSpritePickPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *__this_01;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547b31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_07547b31 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (__this_01,(Il2CppObject *)__this,(intptr_t)(__this->klass->vtable)._22_Hide.method,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar1,0.0,__this_01,(MethodInfo *)0x0);
  return;
}


// UI.RoleSpritePickPopup$$Show
// il2cpp: void UI_RoleSpritePickPopup__Show (UI_RoleSpritePickPopup_o* __this, Settings_StringSetting_o* setting, TMPro_TextMeshProUGUI_o* label, UnityEngine_Events_UnityAction_o* onSelect, const MethodInfo* method);
// 0x5cc27c0
// eh: try 0x5cc28d0..0x5cc2900 -> pad 0x5cc2964 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cc297c..0x5cc2981 -> pad 0x5cc29a4 cleanup
// eh: try 0x5cc29a7..0x5cc29b1 -> pad 0x5cc29b9 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cc2962: jmp 0x5cc2964
// asm:   0x5cc2964: mov rbx, rax
// asm:   0x5cc2967: cmp edx, 1
// asm:   0x5cc296a: jne 0x5cc29a7
// asm:   0x5cc296c: mov rdi, rbx
// asm:   0x5cc296f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cc2974: mov rbx, qword ptr [rax]
// asm:   0x5cc2977: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5cc297c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cc2981: lea rax, [rip + 0x15cb3f0]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5cc2988: mov rsi, qword ptr [rax]
// asm:   0x5cc298b: mov rdi, rsp
// asm:   0x5cc298e: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5cc2993: test rbx, rbx
// asm:   0x5cc2996: je 0x5cc2914
// asm:   0x5cc299c: mov rdi, rbx
// asm:   0x5cc299f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cc29a4: mov rbx, rax
// asm:   0x5cc29a7: lea rdi, [rsp + 0x20]
// asm:   0x5cc29ac: call 0x2fdb290  ; il2cpp_runtime_helper_02fdb290()
// asm:   0x5cc29b1: mov rdi, rbx
// asm:   0x5cc29b4: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cc29b9: mov rdi, rax
// asm:   0x5cc29bc: call 0x2ab61e0  ; __clang_call_terminate()

void UI_RoleSpritePickPopup__Show
               (UI_RoleSpritePickPopup_o *__this,Settings_StringSetting_o *setting,
               TMPro_TextMeshProUGUI_o *label,UnityEngine_Events_UnityAction_o *onSelect,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  Il2CppObject *obj;
  bool bVar3;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_07547b32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547b32 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  (__this->fields)._setting = setting;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setting);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label);
  (__this->fields)._onSelect = onSelect;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSelect);
  pSVar2 = (__this->fields)._items;
  if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)pSVar2,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_38 = 0;
    local_30 = (undefined1 *)&local_58;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      obj = local_58.fields._current;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
    }
    method_00 = MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose)
    ;
    pSVar2 = (__this->fields)._items;
    if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        method_00 = (MethodInfo *)0x0;
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      UI_RoleSpritePickPopup__BuildItems(__this,method_00);
      UI_BasePopup__Show((UI_BasePopup_o *)__this,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.RoleSpritePickPopup$$BuildItems
// il2cpp: void UI_RoleSpritePickPopup__BuildItems (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x5cc29d0
// eh: try 0x5cc2baf..0x5cc2c6c -> pad 0x5cc2c79 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cc2c95..0x5cc2c9a -> pad 0x5cc2d22 cleanup
// eh: try 0x5cc2d25..0x5cc2d2f -> pad 0x5cc2d37 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cc2b0f: nop 
// asm:   0x5cc2b9d: nop dword ptr [rax]
// asm:   0x5cc2c0d: nop dword ptr [rax]
// asm:   0x5cc2c71: jmp 0x5cc2c79
// asm:   0x5cc2c73: jmp 0x5cc2c79
// asm:   0x5cc2c75: jmp 0x5cc2c79
// asm:   0x5cc2c77: jmp 0x5cc2c79
// asm:   0x5cc2c79: mov rbx, rax
// asm:   0x5cc2c7c: cmp edx, 1
// asm:   0x5cc2c7f: jne 0x5cc2d25
// asm:   0x5cc2c85: mov rdi, rbx
// asm:   0x5cc2c88: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cc2c8d: mov r15, qword ptr [rax]
// asm:   0x5cc2c90: mov qword ptr [rsp + 8], r15
// asm:   0x5cc2c95: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cc2cc9: nop dword ptr [rax]
// asm:   0x5cc2d1a: mov rdi, r15
// asm:   0x5cc2d1d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cc2d22: mov rbx, rax
// asm:   0x5cc2d25: lea rdi, [rsp + 8]
// asm:   0x5cc2d2a: call 0x2fdb2c0  ; il2cpp_runtime_helper_02fdb2c0()
// asm:   0x5cc2d2f: mov rdi, rbx
// asm:   0x5cc2d32: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cc2d37: mov rdi, rax
// asm:   0x5cc2d3a: call 0x2ab61e0  ; __clang_call_terminate()

void UI_RoleSpritePickPopup__BuildItems(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  System_String_o *pSVar4;
  UI_ElementStyle_o *__this_00;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  ulong uVar7;
  long lVar8;
  MethodInfo *in_R8;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_07547b33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_RoleSpriteDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_RoleSpriteDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07547b33 = '\x01';
  }
  pSVar4 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x1a,120.0,20.0,pSVar4,(MethodInfo *)0x0);
  UI_RoleSpritePickPopup__CreateItem
            (__this,__this_00,"None",(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
             in_R8);
  if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
  }
  pIVar5 = (Il2CppObject *)
           PatreonEffects_RoleSpriteHelpers__GetEligibleRoleSprites
                     ((Photon_Realtime_Player_o *)0x0,(MethodInfo *)0x0);
  if (pIVar5 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = pIVar5->klass;
  uVar7 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar7 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar8 = 0;
    do {
      if (*(System_Collections_Generic_IEnumerable_RoleSpriteDefinition__c **)
           ((long)&pIVar2->interfaceType + lVar8) ==
          TypeInfo_System_Collections_Generic_IEnumerable_RoleSpriteDefinition) {
        pVVar6 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar8);
        goto label_05cc2b41;
      }
      lVar8 = lVar8 + 0x10;
    } while (uVar7 * 0x10 != lVar8);
  }
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar5,(Il2CppClass *)
                             TypeInfo_System_Collections_Generic_IEnumerable_RoleSpriteDefinition,0);
label_05cc2b41:
  local_48 = (*pVVar6->methodPtr)(pIVar5,pVVar6->method);
  local_38 = (undefined1 *)&local_48;
  local_40 = 0;
  do {
    pIVar5 = local_48;
    if (local_48 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar1 = local_48->klass;
    uVar7 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar2->interfaceType + lVar8) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar6 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar8);
          goto label_05cc2bd3;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_48,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05cc2bd3:
    bVar3 = (*pVVar6->methodPtr)(pIVar5,pVVar6->method);
    pIVar5 = local_48;
    if (!bVar3) {
      if (local_48 == (Il2CppObject *)0x0) {
        return;
      }
      pIVar1 = local_48->klass;
      uVar7 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar7 == 0) goto label_05cc2cdf;
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar8 = 0;
      break;
    }
    if (local_48 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar1 = local_48->klass;
    uVar7 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(System_Collections_Generic_IEnumerator_RoleSpriteDefinition__c **)
             ((long)&pIVar2->interfaceType + lVar8) ==
            TypeInfo_System_Collections_Generic_IEnumerator_RoleSpriteDefinition) {
          pVVar6 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar8);
          goto label_05cc2c43;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_48,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IEnumerator_RoleSpriteDefinition,0);
label_05cc2c43:
    pSVar4 = (System_String_o *)(*pVVar6->methodPtr)(pIVar5,pVVar6->method);
    UI_RoleSpritePickPopup__CreateItem(__this,__this_00,pSVar4,pSVar4,in_R8);
  } while( true );
  while (lVar8 = lVar8 + 0x10, uVar7 * 0x10 != lVar8) {
    if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar8) == TypeInfo_System_IDisposable) {
      pVVar6 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar8);
      goto label_05cc2cfd;
    }
  }
label_05cc2cdf:
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(local_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05cc2cfd:
  (*pVVar6->methodPtr)(pIVar5,pVVar6->method);
  return;
}


// UI.RoleSpritePickPopup$$CreateItem
// il2cpp: void UI_RoleSpritePickPopup__CreateItem (UI_RoleSpritePickPopup_o* __this, UI_ElementStyle_o* style, System_String_o* displayName, System_String_o* value, const MethodInfo* method);
// 0x5cc2d40

void UI_RoleSpritePickPopup__CreateItem
               (UI_RoleSpritePickPopup_o *__this,UI_ElementStyle_o *style,System_String_o *displayName,
               System_String_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  PatreonEffects_RoleSpriteDefinition_array *source;
  UnityEngine_Events_UnityEvent_o *__this_01;
  UnityEngine_UI_ColorBlock_o value_00;
  Il2CppType *handle;
  MethodInfo *pMVar4;
  bool bVar5;
  UI_RoleSpritePickPopup___c__DisplayClass21_0_o *__this_02;
  System_Type_array *pSVar6;
  System_Type_o *pSVar7;
  Il2CppObject *pIVar8;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_UI_LayoutElement_o *pUVar11;
  UnityEngine_UI_Image_o *pUVar12;
  UnityEngine_UI_Button_o *__this_04;
  UnityEngine_GameObject_o *__this_05;
  UnityEngine_RectTransform_o *__this_06;
  TMPro_TextMeshProUGUI_o *pTVar13;
  TMPro_TMP_FontAsset_o *value_01;
  TMPro_TMP_SpriteAsset_o *value_02;
  System_String_o *pSVar14;
  System_Func_RoleSpriteDefinition__bool__o *__this_07;
  UnityEngine_Events_UnityAction_o *__this_08;
  TMPro_TextMeshProUGUI_o **targetAddress;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  PatreonEffects_RoleSpriteDefinition_o PVar15;
  UnityEngine_Color_o UVar16;
  UnityEngine_Color_o UVar17;
  int32_t local_c4;
  UI_ElementStyle_o *local_c0;
  System_String_o *local_b8;
  UI_RoleSpritePickPopup___c__DisplayClass21_0_Fields *local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_c0 = style;
  if (Il2CppMethodInitialized_07547b34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_ColorBlock);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_First_RoleSpriteDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_RoleSpriteDefinition_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TMP_SpriteAsset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_TMPro_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_RoleSpritePickPopup_c__DisplayClass21_0_CreateItem_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_RoleSpritePickPopup_c__DisplayClass21_0_CreateItem_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_RoleSpritePickPopup_c__DisplayClass21_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"<sprite={0}> {1}");
    il2cpp_codegen_initialize_runtime_metadata(&"RoleSpriteButton");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Profile/ProfileIconsAtlas_256");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultLabel");
    Il2CppMethodInitialized_07547b34 = '\x01';
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_RoleSpritePickPopup_c__DisplayClass21_0);
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  if (__this_02 == (UI_RoleSpritePickPopup___c__DisplayClass21_0_o *)0x0) goto label_05cc38b9;
  local_b0 = &__this_02->fields;
  (__this_02->fields).value = value;
  Il2CppCodeGenWriteBarrier(&local_b0->value);
  (__this_02->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_02->fields).__4__this);
  pSVar6 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,5);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar7 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar6 == (System_Type_array *)0x0) goto label_05cc38b9;
  if (pSVar7 != (System_Type_o *)0x0) {
    pIVar8 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar7,(((pSVar6->obj).klass)->_1).element_class);
    if (pIVar8 == (Il2CppObject *)0x0) goto label_05cc38c3;
  }
  if ((int)pSVar6->max_length == 0) goto label_05cc38be;
  pSVar6->m_Items[0] = pSVar7;
  Il2CppCodeGenWriteBarrier(pSVar6->m_Items);
  pSVar7 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
  if (pSVar7 != (System_Type_o *)0x0) {
    pIVar8 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar7,(((pSVar6->obj).klass)->_1).element_class);
    if (pIVar8 == (Il2CppObject *)0x0) goto label_05cc38c3;
  }
  if ((pSVar6->max_length & 0xfffffffe) == 0) goto label_05cc38be;
  pSVar6->m_Items[1] = pSVar7;
  Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1);
  pSVar7 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
  if (pSVar7 != (System_Type_o *)0x0) {
    pIVar8 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar7,(((pSVar6->obj).klass)->_1).element_class);
    if (pIVar8 == (Il2CppObject *)0x0) goto label_05cc38c3;
  }
  if ((uint)pSVar6->max_length < 3) goto label_05cc38be;
  pSVar6->m_Items[2] = pSVar7;
  Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 2);
  pSVar7 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Button,(MethodInfo *)0x0);
  if (pSVar7 != (System_Type_o *)0x0) {
    pIVar8 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar7,(((pSVar6->obj).klass)->_1).element_class);
    if (pIVar8 == (Il2CppObject *)0x0) goto label_05cc38c3;
  }
  if ((pSVar6->max_length & 0xfffffffc) == 0) goto label_05cc38be;
  pSVar6->m_Items[3] = pSVar7;
  Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 3);
  pSVar7 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
  if (pSVar7 != (System_Type_o *)0x0) {
    pIVar8 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar7,(((pSVar6->obj).klass)->_1).element_class);
    if (pIVar8 == (Il2CppObject *)0x0) goto label_05cc38c3;
  }
  local_b8 = displayName;
  if ((uint)pSVar6->max_length < 5) goto label_05cc38be;
  pSVar6->m_Items[4] = pSVar7;
  Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 4);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(__this_03,"RoleSpriteButton",pSVar6,(MethodInfo *)0x0);
  if (__this_03 == (UnityEngine_GameObject_o *)0x0) goto label_05cc38b9;
  pUVar9 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
  pUVar10 = (__this->fields).SinglePanel;
  if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_05cc38b9;
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
  if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_05cc38b9;
  UnityEngine_Transform__SetParent_692d510(pUVar9,pUVar10,false,(MethodInfo *)0x0);
  pMVar4 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
  __this_00 = (__this->fields)._items;
  if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05cc38b9;
  piVar1 = &(__this_00->fields)._version;
  *piVar1 = *piVar1 + 1;
  pUVar3 = (__this_00->fields)._items;
  if (pUVar3 == (UnityEngine_GameObject_array *)0x0) goto label_05cc38b9;
  uVar2 = (__this_00->fields)._size;
  if (uVar2 < (uint)pUVar3->max_length) {
    (__this_00->fields)._size = uVar2 + 1;
    pUVar3->m_Items[(int)uVar2] = __this_03;
    Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_03,
               (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
  }
  pUVar11 = UnityEngine_GameObject__GetComponent_object_
                      (__this_03,
                       (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if (pUVar11 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cc38b9;
  (*(pUVar11->klass->vtable)._36_set_preferredWidth.methodPtr)
            (pUVar11,680.0,(pUVar11->klass->vtable)._36_set_preferredWidth.method);
  (*(pUVar11->klass->vtable)._38_set_preferredHeight.methodPtr)
            (pUVar11,42.0,(pUVar11->klass->vtable)._38_set_preferredHeight.method);
  if (local_c0 == (UI_ElementStyle_o *)0x0) goto label_05cc38b9;
  pSVar14 = (local_c0->fields).ThemePanel;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  UVar16 = UI_UIManager__GetThemeColor
                     (pSVar14,"DefaultLabel","TextColor","DefaultPanel",
                      (MethodInfo *)0x0);
  local_98._8_4_ = extraout_XMM0_Dc;
  local_98._0_8_ = UVar16.fields._0_8_;
  local_98._12_4_ = extraout_XMM0_Dd;
  local_a8._8_4_ = in_XMM1_Dc;
  local_a8._0_8_ = UVar16.fields._8_8_;
  local_a8._12_4_ = in_XMM1_Dd;
  pUVar12 = UnityEngine_GameObject__GetComponent_object_
                      (__this_03,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
  if (pUVar12 == (UnityEngine_UI_Image_o *)0x0) goto label_05cc38b9;
  UVar16.fields.a = 1.0;
  UVar16.fields.b = (float)local_a8._0_4_;
  UVar16.fields.r = (float)local_98._0_4_;
  UVar16.fields.g = (float)local_98._4_4_;
  (*(pUVar12->klass->vtable)._23_set_color.methodPtr)
            (pUVar12,UVar16,(pUVar12->klass->vtable)._23_set_color.method);
  __this_04 = UnityEngine_GameObject__GetComponent_object_
                        (__this_03,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button
                        );
  if ((TypeInfo_UnityEngine_UI_ColorBlock->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_ColorBlock);
  }
  if (__this_04 == (UnityEngine_UI_Button_o *)0x0) goto label_05cc38b9;
  local_88 = 0x3f8000003f800000;
  uStack_80 = 0x3da3d70a3f800000;
  local_78 = 0x3f8000003f800000;
  uStack_70 = 0x3e23d70a3f800000;
  local_68 = 0x3f8000003f800000;
  uStack_60 = 0x3e75c28f3f800000;
  local_58 = 0x3f8000003f800000;
  uStack_50 = 0x3e23d70a3f800000;
  local_48 = 0x3f8000003f800000;
  uStack_40 = 0x3d4ccccd3f800000;
  local_38 = 0x3dcccccd3f800000;
  value_00.fields.m_NormalColor.fields.b = 1.0;
  value_00.fields.m_NormalColor.fields.a = 0.08;
  value_00.fields.m_NormalColor.fields.r = 1.0;
  value_00.fields.m_NormalColor.fields.g = 1.0;
  value_00.fields.m_HighlightedColor.fields.r = 1.0;
  value_00.fields.m_HighlightedColor.fields.g = 1.0;
  value_00.fields.m_HighlightedColor.fields.b = 1.0;
  value_00.fields.m_HighlightedColor.fields.a = 0.16;
  value_00.fields.m_PressedColor.fields.r = 1.0;
  value_00.fields.m_PressedColor.fields.g = 1.0;
  value_00.fields.m_PressedColor.fields.b = 1.0;
  value_00.fields.m_PressedColor.fields.a = 0.24;
  value_00.fields.m_SelectedColor.fields.r = 1.0;
  value_00.fields.m_SelectedColor.fields.g = 1.0;
  value_00.fields.m_SelectedColor.fields.b = 1.0;
  value_00.fields.m_SelectedColor.fields.a = 0.16;
  value_00.fields.m_DisabledColor.fields.r = 1.0;
  value_00.fields.m_DisabledColor.fields.g = 1.0;
  value_00.fields.m_DisabledColor.fields.b = 1.0;
  value_00.fields.m_DisabledColor.fields.a = 0.05;
  value_00.fields.m_ColorMultiplier = 1.0;
  value_00.fields.m_FadeDuration = 0.1;
  UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)__this_04,value_00,(MethodInfo *)0x0);
  pSVar6 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  pSVar7 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
  if (pSVar6 == (System_Type_array *)0x0) goto label_05cc38b9;
  if (pSVar7 != (System_Type_o *)0x0) {
    pIVar8 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar7,(((pSVar6->obj).klass)->_1).element_class);
    if (pIVar8 == (Il2CppObject *)0x0) goto label_05cc38c3;
  }
  if ((int)pSVar6->max_length == 0) goto label_05cc38be;
  pSVar6->m_Items[0] = pSVar7;
  Il2CppCodeGenWriteBarrier(pSVar6->m_Items);
  pSVar7 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
  if (pSVar7 != (System_Type_o *)0x0) {
    pIVar8 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar7,(((pSVar6->obj).klass)->_1).element_class);
    if (pIVar8 == (Il2CppObject *)0x0) goto label_05cc38c3;
  }
  if ((pSVar6->max_length & 0xfffffffe) != 0) {
    pSVar6->m_Items[1] = pSVar7;
    Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1);
    pSVar7 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_TMPro_TextMeshProUGUI,(MethodInfo *)0x0);
    if (pSVar7 != (System_Type_o *)0x0) {
      pIVar8 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar7,(((pSVar6->obj).klass)->_1).element_class);
      if (pIVar8 == (Il2CppObject *)0x0) {
label_05cc38c3:
        pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
      }
    }
    if (2 < (uint)pSVar6->max_length) {
      pSVar6->m_Items[2] = pSVar7;
      Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 2);
      __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(__this_05,"Text",pSVar6,(MethodInfo *)0x0);
      if (__this_05 != (UnityEngine_GameObject_o *)0x0) {
        pUVar10 = UnityEngine_GameObject__get_transform(__this_05,(MethodInfo *)0x0);
        pUVar9 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
        if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510(pUVar10,pUVar9,false,(MethodInfo *)0x0);
          __this_06 = UnityEngine_GameObject__GetComponent_object_
                                (__this_05,
                                 (MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          if (__this_06 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMin
                      (__this_06,
                       (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields
                       ,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_07542885 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_07542885 = '\x01';
            }
            UnityEngine_RectTransform__set_anchorMax
                      (__this_06,
                       (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                       (MethodInfo *)0x0);
            UnityEngine_RectTransform__set_offsetMin
                      (__this_06,(UnityEngine_Vector2_o)0x41600000,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_offsetMax
                      (__this_06,(UnityEngine_Vector2_o)0xc1600000,(MethodInfo *)0x0);
            pTVar13 = UnityEngine_GameObject__GetComponent_object_
                                (__this_05,
                                 (MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_TextMeshProUGUI);
            targetAddress = &(__this_02->fields).tmp;
            (__this_02->fields).tmp = pTVar13;
            Il2CppCodeGenWriteBarrier(targetAddress);
            pTVar13 = (__this_02->fields).tmp;
            if (pTVar13 != (TMPro_TextMeshProUGUI_o *)0x0) {
              TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)pTVar13,true,(MethodInfo *)0x0);
              if (*targetAddress != (TMPro_TextMeshProUGUI_o *)0x0) {
                TMPro_TMP_Text__set_fontSize
                          ((TMPro_TMP_Text_o *)*targetAddress,(float)(local_c0->fields).FontSize,
                           (MethodInfo *)0x0);
                if (*targetAddress != (TMPro_TextMeshProUGUI_o *)0x0) {
                  TMPro_TMP_Text__set_fontStyle((TMPro_TMP_Text_o *)*targetAddress,1,(MethodInfo *)0x0);
                  if (*targetAddress != (TMPro_TextMeshProUGUI_o *)0x0) {
                    TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)*targetAddress,0x1001,(MethodInfo *)0x0)
                    ;
                    pTVar13 = *targetAddress;
                    if (pTVar13 != (TMPro_TextMeshProUGUI_o *)0x0) {
                      UVar17.fields.b = (float)local_a8._0_4_;
                      UVar17.fields.a = (float)local_a8._4_4_;
                      UVar17.fields.r = (float)local_98._0_4_;
                      UVar17.fields.g = (float)local_98._4_4_;
                      (*(pTVar13->klass->vtable)._23_set_color.methodPtr)
                                (pTVar13,UVar17,(pTVar13->klass->vtable)._23_set_color.method);
                      value_01 = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                                           ("text",400,(System_String_o *)0x0,(MethodInfo *)0x0
                                           );
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar5 = UnityEngine_Object__op_Inequality
                                        ((UnityEngine_Object_o *)value_01,(UnityEngine_Object_o *)0x0,
                                         (MethodInfo *)0x0);
                      if (bVar5) {
                        if (*targetAddress == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05cc38b9;
                        TMPro_TMP_Text__set_font
                                  ((TMPro_TMP_Text_o *)*targetAddress,value_01,(MethodInfo *)0x0);
                      }
                      value_02 = UnityEngine_Resources__Load_object_
                                           ("UI/Icons/Profile/ProfileIconsAtlas_256",
                                            (MethodInfo_3665C30 *)
                                            MethodInfo_UnityEngine_Resources_Load_TMP_SpriteAsset);
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar5 = UnityEngine_Object__op_Inequality
                                        ((UnityEngine_Object_o *)value_02,(UnityEngine_Object_o *)0x0,
                                         (MethodInfo *)0x0);
                      if (bVar5) {
                        if (*targetAddress == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05cc38b9;
                        TMPro_TMP_Text__set_spriteAsset
                                  ((TMPro_TMP_Text_o *)*targetAddress,value_02,(MethodInfo *)0x0);
                      }
                      pTVar13 = *targetAddress;
                      bVar5 = System_String__IsNullOrEmpty(local_b0->value,(MethodInfo *)0x0);
                      if (bVar5) {
                        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                        }
                        pSVar14 = UI_UIManager__GetLocaleCommon("None",(MethodInfo *)0x0);
                      }
                      else {
                        if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init
                                    ((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
                        }
                        source = TypeInfo_PatreonEffects_RoleSpriteHelpers->static_fields->Definitions;
                        __this_07 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_System_Func_RoleSpriteDefinition_bool);
                        System_Func_RoleSpriteDefinition__bool____ctor
                                  (__this_07,(Il2CppObject *)__this_02,
                                   (intptr_t)
                                   MethodInfo_UI_RoleSpritePickPopup_c__DisplayClass21_0_CreateItem_b__0,
                                   (MethodInfo_4F1A950 *)0x0);
                        PVar15 = System_Linq_Enumerable__First_RoleSpriteDefinition_
                                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                            (System_Func_TSource__bool__o *)__this_07,
                                            (MethodInfo_34EC0F0 *)
                                            MethodInfo_System_Linq_Enumerable_First_RoleSpriteDefinition);
                        local_c4 = PVar15.fields.SpriteIndex;
                        pIVar8 = il2cpp_vm_Object_Box(g_data_07556710,&local_c4);
                        pSVar14 = System_String__Format_5302c50
                                            ("<sprite={0}> {1}",pIVar8,(Il2CppObject *)local_b8,
                                             (MethodInfo *)0x0);
                      }
                      if (pTVar13 != (TMPro_TextMeshProUGUI_o *)0x0) {
                        (*(pTVar13->klass->vtable)._66_set_text.methodPtr)
                                  (pTVar13,pSVar14,(pTVar13->klass->vtable)._66_set_text.method);
                        __this_01 = (UnityEngine_Events_UnityEvent_o *)(__this_04->fields).m_OnClick;
                        __this_08 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                        UnityEngine_Events_UnityAction___ctor
                                  (__this_08,(Il2CppObject *)__this_02,
                                   (intptr_t)
                                   MethodInfo_UI_RoleSpritePickPopup_c__DisplayClass21_0_CreateItem_b__1,
                                   (MethodInfo *)0x0);
                        if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                          UnityEngine_Events_UnityEvent__AddListener(__this_01,__this_08,(MethodInfo *)0x0);
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
label_05cc38b9:
      ThrowNullReferenceException();
    }
  }
label_05cc38be:
  ThrowIndexOutOfRangeException();
}


// UI.RoleSpritePickPopup$$OnSelect
// il2cpp: void UI_RoleSpritePickPopup__OnSelect (UI_RoleSpritePickPopup_o* __this, System_String_o* value, System_String_o* displayText, const MethodInfo* method);
// 0x5cc38f0

void UI_RoleSpritePickPopup__OnSelect
               (UI_RoleSpritePickPopup_o *__this,System_String_o *value,System_String_o *displayText,
               MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07547b35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07547b35 = '\x01';
  }
  __this_00 = (__this->fields)._setting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  }
  pTVar1 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pTVar1 = (__this->fields)._label;
    bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      displayText = UI_UIManager__GetLocaleCommon("None",(MethodInfo *)0x0);
    }
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pTVar1->klass->vtable)._66_set_text.methodPtr)
              (pTVar1,displayText,(pTVar1->klass->vtable)._66_set_text.method);
  }
  pUVar2 = (__this->fields)._onSelect;
  if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
    (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.RoleSpritePickPopup$$.ctor
// il2cpp: void UI_RoleSpritePickPopup___ctor (UI_RoleSpritePickPopup_o* __this, const MethodInfo* method);
// 0x5cc3a30

void UI_RoleSpritePickPopup___ctor(UI_RoleSpritePickPopup_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547b36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_07547b36 = '\x01';
  }
  method_00 = (MethodInfo *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)method_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._items = (System_Collections_Generic_List_GameObject__o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._items);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


