// Type: UI.MapEditorContextMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MapEditorContextMenu.cs
// Prior real C# source: none
// --------------------------------

// UI.MapEditorContextMenu.Item$$.ctor
// il2cpp: void UI_MapEditorContextMenu_Item___ctor (UI_MapEditorContextMenu_Item_o __this, System_String_o* label, System_Action_o* action, bool enabled, bool separatorBefore, const MethodInfo* method);
// 0x5d6ea30

void UI_MapEditorContextMenu_Item___ctor
               (UI_MapEditorContextMenu_Item_o *__this,System_String_o *label,System_Action_o *action,
               bool enabled,bool separatorBefore,MethodInfo *method)

{
  (__this->fields).Label = label;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields).Action = action;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Action);
  (__this->fields).Enabled = enabled;
  (__this->fields).SeparatorBefore = separatorBefore;
  return;
}


// UI.MapEditorContextMenu.<>c__DisplayClass16_0$$.ctor
// il2cpp: void UI_MapEditorContextMenu___c__DisplayClass16_0___ctor (UI_MapEditorContextMenu___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x5d6ea10

void UI_MapEditorContextMenu___c__DisplayClass16_0___ctor
               (UI_MapEditorContextMenu___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorContextMenu.<>c__DisplayClass16_0$$<CreateButton>b__0
// il2cpp: void UI_MapEditorContextMenu___c__DisplayClass16_0___CreateButton_b__0 (UI_MapEditorContextMenu___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x5d6ea70

void UI_MapEditorContextMenu___c__DisplayClass16_0___CreateButton_b__0
               (UI_MapEditorContextMenu___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  UI_MapEditorContextMenu_o *pUVar2;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar3;
  
  if ((__this->fields).item.fields.Enabled == false) {
    return;
  }
  pSVar1 = (__this->fields).item.fields.Action;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code);
  }
  pUVar2 = (__this->fields).__4__this;
  if (pUVar2 != (UI_MapEditorContextMenu_o *)0x0) {
    if (Il2CppMethodInitialized_07547fa1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07547fa1 = '\x01';
    }
    x = (UnityEngine_Object_o *)(pUVar2->fields)._root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    __this_00 = (pUVar2->fields)._root;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorContextMenu$$get_IsOpen
// il2cpp: bool UI_MapEditorContextMenu__get_IsOpen (UI_MapEditorContextMenu_o* __this, const MethodInfo* method);
// 0x5d6ce80

bool UI_MapEditorContextMenu__get_IsOpen(UI_MapEditorContextMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547f9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547f9f = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._root;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// UI.MapEditorContextMenu$$get_MenuRect
// il2cpp: UnityEngine_RectTransform_o* UI_MapEditorContextMenu__get_MenuRect (UI_MapEditorContextMenu_o* __this, const MethodInfo* method);
// 0x5d6cf00

UnityEngine_RectTransform_o *
UI_MapEditorContextMenu__get_MenuRect(UI_MapEditorContextMenu_o *__this,MethodInfo *method)

{
  return (__this->fields)._menuRect;
}


// UI.MapEditorContextMenu$$.ctor
// il2cpp: void UI_MapEditorContextMenu___ctor (UI_MapEditorContextMenu_o* __this, UnityEngine_Transform_o* parent, System_String_o* themePanel, const MethodInfo* method);
// 0x5d6cf10

void UI_MapEditorContextMenu___ctor
               (UI_MapEditorContextMenu_o *__this,UnityEngine_Transform_o *parent,System_String_o *themePanel,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._parent);
  (__this->fields)._themePanel = themePanel;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._themePanel);
  return;
}


// UI.MapEditorContextMenu$$Show
// il2cpp: void UI_MapEditorContextMenu__Show (UI_MapEditorContextMenu_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, System_Collections_Generic_IList_MapEditorContextMenu_Item__o* items, const MethodInfo* method);
// 0x5d6cf50
// eh: try 0x5d6d15f..0x5d6d5ae -> pad 0x5d6d5d1 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5d6d5ef..0x5d6d5f4 -> pad 0x5d6d5f9 cleanup
// eh: try 0x5d6d5fc..0x5d6d609 -> pad 0x5d6d611 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d6d129: nop dword ptr [rax]
// asm:   0x5d6d5b3: xor ebp, ebp
// asm:   0x5d6d5b5: jmp 0x5d6d2d4
// asm:   0x5d6d5ba: mov rdi, r15
// asm:   0x5d6d5bd: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d6d5c7: jmp 0x5d6d5d1
// asm:   0x5d6d5c9: jmp 0x5d6d5d1
// asm:   0x5d6d5cb: jmp 0x5d6d5d1
// asm:   0x5d6d5cd: jmp 0x5d6d5d1
// asm:   0x5d6d5cf: jmp 0x5d6d5d1
// asm:   0x5d6d5d1: mov rbx, rax
// asm:   0x5d6d5d4: cmp edx, 1
// asm:   0x5d6d5d7: jne 0x5d6d5fc
// asm:   0x5d6d5d9: mov rdi, rbx
// asm:   0x5d6d5dc: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d6d5e1: mov r15, qword ptr [rax]
// asm:   0x5d6d5e4: mov qword ptr [rsp + 0x88], r15
// asm:   0x5d6d5ec: xor r14d, r14d
// asm:   0x5d6d5ef: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d6d5f4: jmp 0x5d6d2e2
// asm:   0x5d6d5f9: mov rbx, rax
// asm:   0x5d6d5fc: lea rdi, [rsp + 0x88]
// asm:   0x5d6d604: call 0x2fdcf70  ; il2cpp_runtime_helper_02fdcf70()
// asm:   0x5d6d609: mov rdi, rbx
// asm:   0x5d6d60c: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d6d611: mov rdi, rax
// asm:   0x5d6d614: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorContextMenu__Show
               (UI_MapEditorContextMenu_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               System_Collections_Generic_IList_MapEditorContextMenu_Item__o *items,MethodInfo *method)

{
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar1;
  UnityEngine_RectOffset_o *pUVar2;
  System_Collections_Generic_IList_MapEditorContextMenu_Item__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Il2CppMethodPointer pIVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  UI_MapEditorContextMenu_Item_o item;
  UnityEngine_Vector2_Fields UVar8;
  byte bVar9;
  undefined2 uVar10;
  bool bVar11;
  int32_t iVar12;
  int32_t iVar13;
  VirtualInvokeData *pVVar14;
  UnityEngine_Transform_o *pUVar15;
  UnityEngine_Canvas_o *__this_00;
  ulong uVar16;
  int iVar17;
  UnityEngine_EventSystems_PointerEventData_o *method_00;
  MethodInfo *pMVar18;
  long lVar19;
  uint uVar20;
  float fVar21;
  UnityEngine_Vector2_o value;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar25;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar26;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar27;
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  UnityEngine_Rect_o UVar34;
  MethodInfo *local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  UnityEngine_Vector2_Fields local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  byte bStack_87;
  undefined4 uStack_86;
  undefined2 uStack_82;
  undefined8 local_80;
  MethodInfo **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  byte local_5f;
  undefined4 local_5e;
  undefined2 local_5a;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  method_00 = eventData;
  if (Il2CppMethodInitialized_07547fa0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_MapEditorContextMenu_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_MapEditorContextMenu_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_LayoutRebuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07547fa0 = '\x01';
  }
  local_e0 = (MethodInfo *)0x0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  UI_MapEditorContextMenu__EnsureCreated(__this,(MethodInfo *)method_00);
  UI_MapEditorContextMenu__ClearItems(__this,(MethodInfo *)method_00);
  pUVar1 = (__this->fields)._layout;
  if ((pUVar1 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).m_Padding, pUVar2 != (UnityEngine_RectOffset_o *)0x0)) {
    iVar12 = UnityEngine_RectOffset__get_top(pUVar2,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._layout;
    if ((pUVar1 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) &&
       ((pUVar2 = (pUVar1->fields).m_Padding, local_a8 = (UnityEngine_Vector2_Fields)eventData,
        pUVar2 != (UnityEngine_RectOffset_o *)0x0 &&
        (iVar13 = UnityEngine_RectOffset__get_bottom(pUVar2,(MethodInfo *)0x0),
        items != (System_Collections_Generic_IList_MapEditorContextMenu_Item__o *)0x0)))) {
      pSVar3 = items->klass;
      uVar16 = (ulong)(pSVar3->_2).interface_offsets_count;
      if (uVar16 != 0) {
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar19 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerable_MapEditorContextMenu_Item__c **)
               ((long)&pIVar4->interfaceType + lVar19) ==
              TypeInfo_System_Collections_Generic_IEnumerable_MapEditorContextMenu_Item) {
            pVVar14 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar19);
            goto label_05d6d0d1;
          }
          lVar19 = lVar19 + 0x10;
        } while (uVar16 * 0x10 != lVar19);
      }
      pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                          ((Il2CppObject *)items,
                           (Il2CppClass *)
                           TypeInfo_System_Collections_Generic_IEnumerable_MapEditorContextMenu_Item,0);
label_05d6d0d1:
      local_d8 = ZEXT416((uint)(float)(iVar13 + iVar12));
      local_e0 = (MethodInfo *)(*pVVar14->methodPtr)((Il2CppObject *)items,pVVar14->method);
      local_80 = 0;
      local_78 = &local_e0;
      if (local_e0 != (MethodInfo *)0x0) {
        iVar17 = 0;
        do {
          pMVar18 = local_e0;
          pIVar5 = local_e0->methodPointer;
          if ((ulong)*(ushort *)(pIVar5 + 0x12e) != 0) {
            lVar19 = 0;
            do {
              if (*(System_Collections_IEnumerator_c **)(*(long *)(pIVar5 + 0xb0) + lVar19) ==
                  TypeInfo_System_Collections_IEnumerator) {
                pVVar14 = (VirtualInvokeData *)
                          (pIVar5 + (long)*(int *)(*(long *)(pIVar5 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
                goto label_05d6d183;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)*(ushort *)(pIVar5 + 0x12e) * 0x10 != lVar19);
          }
          pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                              ((Il2CppObject *)local_e0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator
                               ,0);
label_05d6d183:
          bVar11 = (*pVVar14->methodPtr)((Il2CppObject *)pMVar18,pVVar14->method);
          pMVar18 = local_e0;
          if (!bVar11) {
            if (local_e0 == (MethodInfo *)0x0) goto label_05d6d356;
            pIVar5 = local_e0->methodPointer;
            if ((ulong)*(ushort *)(pIVar5 + 0x12e) == 0) goto label_05d6d32f;
            lVar19 = 0;
            goto label_05d6d320;
          }
          if (local_e0 == (MethodInfo *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar5 = local_e0->methodPointer;
          if ((ulong)*(ushort *)(pIVar5 + 0x12e) != 0) {
            lVar19 = 0;
            do {
              if (*(System_Collections_Generic_IEnumerator_MapEditorContextMenu_Item__c **)
                   (*(long *)(pIVar5 + 0xb0) + lVar19) ==
                  TypeInfo_System_Collections_Generic_IEnumerator_MapEditorContextMenu_Item) {
                pVVar14 = (VirtualInvokeData *)
                          (pIVar5 + (long)*(int *)(*(long *)(pIVar5 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
                goto label_05d6d202;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)*(ushort *)(pIVar5 + 0x12e) * 0x10 != lVar19);
          }
          pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                              ((Il2CppObject *)local_e0,
                               (Il2CppClass *)
                               TypeInfo_System_Collections_Generic_IEnumerator_MapEditorContextMenu_Item,0);
label_05d6d202:
          (*pVVar14->methodPtr)(&local_70,pMVar18,pVVar14->method);
          uVar10 = local_5a;
          uVar28 = local_5e;
          bVar9 = local_5f;
          local_b8 = local_60;
          local_c8 = local_70;
          uStack_c0 = uStack_68;
          if ((local_5f & 1) != 0) {
            UI_MapEditorContextMenu__CreateSeparator(__this,pMVar18);
            local_d8._0_4_ = (float)local_d8._0_4_ + 10.0;
            iVar17 = iVar17 + 1;
          }
          local_88 = local_b8;
          local_98 = local_c8;
          uStack_90 = uStack_c0;
          uStack_82 = uVar10;
          uStack_86 = uVar28;
          bStack_87 = bVar9;
          item.fields.SeparatorBefore = (bool)bVar9;
          item.fields.Enabled = (bool)local_b8;
          item.fields._18_4_ = uVar28;
          item.fields._22_2_ = uVar10;
          item.fields.Action = (System_Action_o *)uStack_c0;
          item.fields.Label = (System_String_o *)local_c8;
          UI_MapEditorContextMenu__CreateButton(__this,item,pMVar18);
          local_d8._0_4_ = (float)local_d8._0_4_ + 28.0;
          iVar17 = iVar17 + 1;
        } while (local_e0 != (MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  goto label_05d6d5ae;
  while (lVar19 = lVar19 + 0x10, (ulong)*(ushort *)(pIVar5 + 0x12e) * 0x10 != lVar19) {
label_05d6d320:
    if (*(System_IDisposable_c **)(*(long *)(pIVar5 + 0xb0) + lVar19) == TypeInfo_System_IDisposable) {
      pVVar14 = (VirtualInvokeData *)
                (pIVar5 + (long)*(int *)(*(long *)(pIVar5 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
      goto label_05d6d34d;
    }
  }
label_05d6d32f:
  pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                      ((Il2CppObject *)local_e0,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05d6d34d:
  (*pVVar14->methodPtr)((Il2CppObject *)pMVar18,pVVar14->method);
label_05d6d356:
  pUVar1 = (__this->fields)._layout;
  if ((pUVar1 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) &&
     (pUVar6 = (__this->fields)._menuRect, pUVar6 != (UnityEngine_RectTransform_o *)0x0)) {
    iVar17 = iVar17 + -1;
    if (iVar17 < 1) {
      iVar17 = 0;
    }
    value.fields.y = (float)local_d8._0_4_ + (float)iVar17 * (pUVar1->fields).m_Spacing;
    value.fields.x = 210.0;
    uVar28 = local_d8._8_4_;
    uVar29 = local_d8._12_4_;
    UnityEngine_RectTransform__set_sizeDelta(pUVar6,value,(MethodInfo *)0x0);
    pUVar6 = (__this->fields)._menuRect;
    if ((TypeInfo_UnityEngine_UI_LayoutRebuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_LayoutRebuilder);
    }
    UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar6,(MethodInfo *)0x0);
    pUVar7 = (__this->fields)._root;
    if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar15 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
       pUVar15 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetAsLastSibling(pUVar15,(MethodInfo *)0x0);
      pUVar7 = (__this->fields)._root;
      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar7,true,(MethodInfo *)0x0);
        pUVar15 = (__this->fields)._parent;
        if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
          __this_00 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar15,
                                 (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar11 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if (bVar11) {
            if (__this_00 == (UnityEngine_Canvas_o *)0x0) goto label_05d6d5ae;
            fVar21 = UnityEngine_Canvas__get_scaleFactor(__this_00,(MethodInfo *)0x0);
            uVar25 = extraout_XMM0_Db;
            uVar26 = extraout_XMM0_Dc;
            uVar27 = extraout_XMM0_Dd;
          }
          else {
            fVar21 = 1.0;
            uVar25 = 0;
            uVar26 = 0;
            uVar27 = 0;
          }
          UVar8 = local_a8;
          pUVar6 = (UnityEngine_RectTransform_o *)(__this->fields)._parent;
          if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
            local_d8._4_4_ = uVar25;
            local_d8._0_4_ = fVar21;
            local_d8._8_4_ = uVar26;
            local_d8._12_4_ = uVar27;
            if (pUVar6->klass != TypeInfo_UnityEngine_RectTransform) {
              il2cpp_codegen_raise_invalid_cast_exception();
            }
            UVar34 = UnityEngine_RectTransform__get_rect(pUVar6,(MethodInfo *)0x0);
            local_48._8_4_ = uVar28;
            local_48._0_8_ = UVar34.fields._8_8_;
            local_48._12_4_ = uVar29;
            if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
            }
            if ((UVar8 != (UnityEngine_Vector2_Fields)0x0) &&
               (pUVar6 = (__this->fields)._menuRect, pUVar6 != (UnityEngine_RectTransform_o *)0x0)) {
              local_a8 = *(UnityEngine_Vector2_Fields *)((long)UVar8 + 0x144);
              uStack_a0 = 0;
              UVar34 = UnityEngine_RectTransform__get_rect(pUVar6,(MethodInfo *)0x0);
              local_58._8_4_ = uVar28;
              local_58._0_8_ = UVar34.fields._8_8_;
              local_58._12_4_ = uVar29;
              pUVar6 = (__this->fields)._menuRect;
              if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                UVar34 = UnityEngine_RectTransform__get_rect(pUVar6,(MethodInfo *)0x0);
                pUVar6 = (__this->fields)._menuRect;
                if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                  fVar30 = (float)(~-(uint)(0.0 < (float)local_d8._0_4_) & 0x3f800000 |
                                  local_d8._0_4_ & -(uint)(0.0 < (float)local_d8._0_4_));
                  auVar33._8_8_ = uStack_a0;
                  auVar33._0_4_ = local_a8.x;
                  auVar33._4_4_ = local_a8.y;
                  fVar21 = local_a8.y;
                  fVar31 = fVar21 / fVar30;
                  auVar22._0_4_ = local_a8.x / fVar30;
                  auVar22._4_12_ = auVar33._4_12_;
                  auVar24._0_8_ = auVar22._0_8_;
                  auVar24._8_4_ = fVar21;
                  auVar24._12_4_ = fVar21;
                  auVar23._8_8_ = auVar24._8_8_;
                  auVar23._4_4_ = fVar31;
                  auVar23._0_4_ = auVar22._0_4_;
                  fVar30 = local_48._0_4_ - (float)local_58._0_4_;
                  fVar21 = 0.0;
                  if (0.0 <= fVar30) {
                    fVar21 = fVar30;
                  }
                  auVar32._4_12_ = local_48._4_12_;
                  auVar32._0_4_ = fVar21;
                  auVar33 = minps(auVar32,auVar23);
                  uVar20 = -(uint)(UVar34.fields.m_Height <= fVar31);
                  UnityEngine_RectTransform__set_anchoredPosition
                            (pUVar6,(UnityEngine_Vector2_o)
                                    ((ulong)(~uVar20 & (uint)UVar34.fields.m_Height) << 0x20 |
                                    CONCAT44(auVar33._4_4_ & uVar20,
                                             auVar33._0_4_ & -(uint)(0.0 <= auVar22._0_4_))),(MethodInfo *)0x0
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
label_05d6d5ae:
  ThrowNullReferenceException();
}


// UI.MapEditorContextMenu$$Hide
// il2cpp: void UI_MapEditorContextMenu__Hide (UI_MapEditorContextMenu_o* __this, const MethodInfo* method);
// 0x5d6e910

void UI_MapEditorContextMenu__Hide(UI_MapEditorContextMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547fa1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547fa1 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._root;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MapEditorContextMenu$$Destroy
// il2cpp: void UI_MapEditorContextMenu__Destroy (UI_MapEditorContextMenu_o* __this, const MethodInfo* method);
// 0x5d6e990

void UI_MapEditorContextMenu__Destroy(UI_MapEditorContextMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547fa2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547fa2 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.MapEditorContextMenu$$EnsureCreated
// il2cpp: void UI_MapEditorContextMenu__EnsureCreated (UI_MapEditorContextMenu_o* __this, const MethodInfo* method);
// 0x5d6d620

void UI_MapEditorContextMenu__EnsureCreated(UI_MapEditorContextMenu_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  UnityEngine_RectTransform_o **targetAddress_00;
  UnityEngine_UI_VerticalLayoutGroup_o **targetAddress_01;
  UnityEngine_Object_o *x;
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_String_o *panel;
  Il2CppType *handle;
  bool bVar1;
  System_Type_array *pSVar2;
  System_Type_o *pSVar3;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_UI_Image_o *pUVar8;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Outline_o *__this_03;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar9;
  UnityEngine_RectOffset_o *__this_04;
  UnityEngine_Color_o UVar10;
  
  if (Il2CppMethodInitialized_07547fa3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Outline);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorContextMenu_Hide);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Outline);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Menu");
    il2cpp_codegen_initialize_runtime_metadata(&"LineColor");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditorContextMenuRoot");
    il2cpp_codegen_initialize_runtime_metadata(&"ContextMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"BackgroundColor");
    Il2CppMethodInitialized_07547fa3 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pSVar2 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar2 == (System_Type_array *)0x0) goto label_05d6df59;
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d6df63;
  }
  if ((int)pSVar2->max_length == 0) goto label_05d6df5e;
  pSVar2->m_Items[0] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d6df63;
  }
  if ((pSVar2->max_length & 0xfffffffe) == 0) goto label_05d6df5e;
  pSVar2->m_Items[1] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Button,(MethodInfo *)0x0);
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d6df63;
  }
  if ((uint)pSVar2->max_length < 3) goto label_05d6df5e;
  targetAddress = &(__this->fields)._root;
  pSVar2->m_Items[2] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(pUVar5,"MapEditorContextMenuRoot",pSVar2,(MethodInfo *)0x0);
  *targetAddress = pUVar5;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if (*targetAddress == (UnityEngine_GameObject_o *)0x0) {
label_05d6df59:
    ThrowNullReferenceException();
  }
  pUVar6 = UnityEngine_GameObject__get_transform(*targetAddress,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_05d6df59;
  UnityEngine_Transform__SetParent_692d510(pUVar6,(__this->fields)._parent,false,(MethodInfo *)0x0);
  pUVar5 = (__this->fields)._root;
  if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_05d6df59;
  pUVar7 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar5,(MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_05d6df59;
  UnityEngine_RectTransform__set_anchorMin
            (pUVar7,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07542885 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07542885 = '\x01';
  }
  UnityEngine_RectTransform__set_anchorMax
            (pUVar7,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMin
            (pUVar7,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMax
            (pUVar7,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  if (*targetAddress == (UnityEngine_GameObject_o *)0x0) goto label_05d6df59;
  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                     (*targetAddress,
                      (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
  if (pUVar8 == (UnityEngine_UI_Image_o *)0x0) goto label_05d6df59;
  (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
            (pUVar8,(UnityEngine_Color_o)ZEXT816(0),(pUVar8->klass->vtable)._23_set_color.method);
  (*(pUVar8->klass->vtable)._25_set_raycastTarget.methodPtr)
            (pUVar8,true,(pUVar8->klass->vtable)._25_set_raycastTarget.method);
  if (*targetAddress == (UnityEngine_GameObject_o *)0x0) goto label_05d6df59;
  __this_01 = UnityEngine_GameObject__GetComponent_object_
                        (*targetAddress,
                         (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
  if (__this_01 == (UnityEngine_UI_Button_o *)0x0) goto label_05d6df59;
  UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)__this_01,0,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this_01->fields).m_OnClick;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (__this_02,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MapEditorContextMenu_Hide,
             (MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_05d6df59;
  UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_02,(MethodInfo *)0x0);
  pSVar2 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,4);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
  if (pSVar2 == (System_Type_array *)0x0) goto label_05d6df59;
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d6df63;
  }
  if ((int)pSVar2->max_length == 0) goto label_05d6df5e;
  pSVar2->m_Items[0] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d6df63;
  }
  if ((pSVar2->max_length & 0xfffffffe) == 0) goto label_05d6df5e;
  pSVar2->m_Items[1] = pSVar3;
  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
  pSVar3 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Outline,(MethodInfo *)0x0);
  if (pSVar3 != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_05d6df63;
  }
  if (2 < (uint)pSVar2->max_length) {
    pSVar2->m_Items[2] = pSVar3;
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
    pSVar3 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_VerticalLayoutGroup,
                        (MethodInfo *)0x0);
    if (pSVar3 != (System_Type_o *)0x0) {
      pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((pSVar2->obj).klass)->_1).element_class);
      if (pIVar4 == (Il2CppObject *)0x0) {
label_05d6df63:
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
    }
    if ((pSVar2->max_length & 0xfffffffc) != 0) {
      pSVar2->m_Items[3] = pSVar3;
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3);
      pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(pUVar5,"Menu",pSVar2,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        pUVar6 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
        if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
          parent = UnityEngine_GameObject__get_transform(*targetAddress,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_692d510(pUVar6,parent,false,(MethodInfo *)0x0);
            pUVar7 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar5,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            targetAddress_00 = &(__this->fields)._menuRect;
            (__this->fields)._menuRect = pUVar7;
            Il2CppCodeGenWriteBarrier(targetAddress_00);
            pUVar7 = (__this->fields)._menuRect;
            if (Il2CppMethodInitialized_0753ecc8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_0753ecc8 = '\x01';
            }
            if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar7,(UnityEngine_Vector2_o)
                                (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                         (MethodInfo *)0x0);
              pUVar7 = *targetAddress_00;
              if (Il2CppMethodInitialized_0753ecc8 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_0753ecc8 = '\x01';
              }
              if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_anchorMax
                          (pUVar7,(UnityEngine_Vector2_o)
                                  (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                           (MethodInfo *)0x0);
                if (*targetAddress_00 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_pivot
                            (*targetAddress_00,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
                  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                     (pUVar5,(MethodInfo_353B730 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                  panel = (__this->fields)._themePanel;
                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                  }
                  UVar10 = UI_UIManager__GetThemeColor
                                     (panel,"ContextMenu","BackgroundColor","DefaultPanel",
                                      (MethodInfo *)0x0);
                  if (pUVar8 != (UnityEngine_UI_Image_o *)0x0) {
                    (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                              (pUVar8,UVar10,(pUVar8->klass->vtable)._23_set_color.method);
                    __this_03 = UnityEngine_GameObject__GetComponent_object_
                                          (pUVar5,(MethodInfo_353B730 *)
                                                  MethodInfo_UnityEngine_GameObject_GetComponent_Outline);
                    UVar10 = UI_UIManager__GetThemeColor
                                       ((__this->fields)._themePanel,"ContextMenu",
                                        "LineColor","DefaultPanel",(MethodInfo *)0x0);
                    if (__this_03 != (UnityEngine_UI_Outline_o *)0x0) {
                      UnityEngine_UI_Shadow__set_effectColor
                                ((UnityEngine_UI_Shadow_o *)__this_03,UVar10,(MethodInfo *)0x0);
                      UnityEngine_UI_Shadow__set_effectDistance
                                ((UnityEngine_UI_Shadow_o *)__this_03,
                                 (UnityEngine_Vector2_o)0xc000000040000000,(MethodInfo *)0x0);
                      pUVar9 = UnityEngine_GameObject__GetComponent_object_
                                         (pUVar5,(MethodInfo_353B730 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup
                                         );
                      targetAddress_01 = &(__this->fields)._layout;
                      (__this->fields)._layout = pUVar9;
                      Il2CppCodeGenWriteBarrier(targetAddress_01);
                      pUVar9 = (__this->fields)._layout;
                      __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RectOffset);
                      UnityEngine_RectOffset___ctor_68cd0a0(__this_04,10,10,10,10,(MethodInfo *)0x0);
                      if (pUVar9 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
                        UnityEngine_UI_LayoutGroup__set_padding
                                  ((UnityEngine_UI_LayoutGroup_o *)pUVar9,__this_04,(MethodInfo *)0x0);
                        if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)*targetAddress_01 !=
                            (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                          UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                                    ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)*targetAddress_01,2.0
                                     ,(MethodInfo *)0x0);
                          if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)*targetAddress_01 !=
                              (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                                      ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)*targetAddress_01,
                                       true,(MethodInfo *)0x0);
                            if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)*targetAddress_01 !=
                                (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                              UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                                        ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)*targetAddress_01
                                         ,true,(MethodInfo *)0x0);
                              if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)*targetAddress_01 !=
                                  (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                                          ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                           *targetAddress_01,true,(MethodInfo *)0x0);
                                if ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)*targetAddress_01 !=
                                    (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                             *targetAddress_01,false,(MethodInfo *)0x0);
                                  if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
                                    UnityEngine_GameObject__SetActive(*targetAddress,false,(MethodInfo *)0x0);
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
      goto label_05d6df59;
    }
  }
label_05d6df5e:
  ThrowIndexOutOfRangeException();
}


// UI.MapEditorContextMenu$$ClearItems
// il2cpp: void UI_MapEditorContextMenu__ClearItems (UI_MapEditorContextMenu_o* __this, const MethodInfo* method);
// 0x5d6df80
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d6dfc0: lea r15, [rip + 0x150d429]  ; TypeInfo_UnityEngine_Object
// asm:   0x5d6dfc7: jmp 0x5d6dfde

void UI_MapEditorContextMenu__ClearItems(UI_MapEditorContextMenu_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  int index;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_07547fa4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547fa4 = '\x01';
  }
  pUVar1 = (__this->fields)._menuRect;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    index = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)pUVar1,(MethodInfo *)0x0);
    while( true ) {
      index = index + -1;
      if (index < 0) {
        return;
      }
      pUVar1 = (__this->fields)._menuRect;
      if (((pUVar1 == (UnityEngine_RectTransform_o *)0x0) ||
          (__this_00 = UnityEngine_Transform__GetChild
                                 ((UnityEngine_Transform_o *)pUVar1,index,(MethodInfo *)0x0),
          __this_00 == (UnityEngine_Transform_o *)0x0)) ||
         (obj = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         obj == (UnityEngine_Object_o *)0x0)) break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)obj,false,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorContextMenu$$CreateButton
// il2cpp: void UI_MapEditorContextMenu__CreateButton (UI_MapEditorContextMenu_o* __this, UI_MapEditorContextMenu_Item_o item, const MethodInfo* method);
// 0x5d6e480

void UI_MapEditorContextMenu__CreateButton
               (UI_MapEditorContextMenu_o *__this,UI_MapEditorContextMenu_Item_o item,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_RectTransform_o *parent;
  UnityEngine_UI_Graphic_o *pUVar2;
  UnityEngine_UI_ColorBlock_o value;
  bool bVar3;
  UI_MapEditorContextMenu___c__DisplayClass16_0_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_UI_Button_o *__this_04;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Text_o *__this_05;
  UnityEngine_Color_o UVar5;
  UnityEngine_Color_o UVar6;
  UnityEngine_Color_o UVar7;
  float fStack_a4;
  float local_98;
  
  if (Il2CppMethodInitialized_07547fa5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_ColorBlock);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorContextMenu_c__DisplayClass16_0_CreateButton_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorContextMenu_c__DisplayClass16_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultButton");
    Il2CppMethodInitialized_07547fa5 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorContextMenu_c__DisplayClass16_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UI_MapEditorContextMenu___c__DisplayClass16_0_o *)0x0) {
    (__this_00->fields).item.fields.Enabled = item.fields.Enabled;
    (__this_00->fields).item.fields.SeparatorBefore = item.fields.SeparatorBefore;
    *(undefined6 *)&(__this_00->fields).item.fields.field_0x12 = item.fields._18_6_;
    (__this_00->fields).item.fields.Label = item.fields.Label;
    (__this_00->fields).item.fields.Action = item.fields.Action;
    Il2CppCodeGenWriteBarrier((void **)&__this_00->fields);
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    pSVar1 = (__this->fields)._themePanel;
    parent = (__this->fields)._menuRect;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(__this_01,0x10,0.0,20.0,pSVar1,(MethodInfo *)0x0);
    pSVar1 = (__this_00->fields).item.fields.Label;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (__this_02,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_UI_MapEditorContextMenu_c__DisplayClass16_0_CreateButton_b__0,
               (MethodInfo *)0x0);
    __this_03 = UI_ElementFactory__CreateDefaultButton
                          ((UnityEngine_Transform_o *)parent,__this_01,pSVar1,190.0,28.0,__this_02,
                           (MethodInfo *)0x0);
    if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
      __this_04 = UnityEngine_GameObject__GetComponent_object_
                            (__this_03,
                             (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
      if (__this_04 != (UnityEngine_UI_Button_o *)0x0) {
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)__this_04,(__this_00->fields).item.fields.Enabled,
                   (MethodInfo *)0x0);
        UnityEngine_UI_Selectable__set_transition
                  ((UnityEngine_UI_Selectable_o *)__this_04,1,(MethodInfo *)0x0);
        pUVar2 = (__this_04->fields).m_TargetGraphic;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pUVar2 = (__this_04->fields).m_TargetGraphic;
          if (pUVar2 == (UnityEngine_UI_Graphic_o *)0x0) goto label_05d6e909;
          UVar5.fields.b = (float)(int)g_data_01005870;
          UVar5.fields.a = (float)g_data_01005870._4_4_;
          UVar5.fields.r = (float)(int)g_data_01005870;
          UVar5.fields.g = (float)g_data_01005870._4_4_;
          (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                    (pUVar2,UVar5,(pUVar2->klass->vtable)._23_set_color.method);
        }
        pSVar1 = (__this->fields)._themePanel;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        UVar5 = UI_UIManager__GetThemeColor
                          (pSVar1,"DefaultButton","TextColor","DefaultPanel",
                           (MethodInfo *)0x0);
        UVar5.fields.b = UVar5.fields.b;
        if ((TypeInfo_UnityEngine_UI_ColorBlock->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_ColorBlock);
        }
        value.fields.m_DisabledColor.fields.a = 0.08;
        value.fields.m_DisabledColor.fields.b = UVar5.fields.b;
        value.fields.m_HighlightedColor.fields.a = 0.14;
        value.fields.m_HighlightedColor.fields.b = UVar5.fields.b;
        value.fields.m_PressedColor.fields.a = 0.22;
        value.fields.m_PressedColor.fields.b = UVar5.fields.b;
        value.fields.m_SelectedColor.fields.a = 0.14;
        value.fields.m_SelectedColor.fields.b = UVar5.fields.b;
        value.fields.m_HighlightedColor.fields.r = UVar5.fields.r;
        value.fields.m_HighlightedColor.fields.g = UVar5.fields.g;
        value.fields.m_NormalColor.fields.r = 0.0;
        value.fields.m_NormalColor.fields.g = 0.0;
        value.fields.m_NormalColor.fields.b = 0.0;
        value.fields.m_NormalColor.fields.a = 0.0;
        value.fields.m_PressedColor.fields.r = UVar5.fields.r;
        value.fields.m_PressedColor.fields.g = UVar5.fields.g;
        value.fields.m_SelectedColor.fields.r = UVar5.fields.r;
        value.fields.m_SelectedColor.fields.g = UVar5.fields.g;
        value.fields.m_DisabledColor.fields.r = UVar5.fields.r;
        value.fields.m_DisabledColor.fields.g = UVar5.fields.g;
        value.fields.m_ColorMultiplier = 1.0;
        value.fields.m_FadeDuration = 0.08;
        UnityEngine_UI_Selectable__set_colors
                  ((UnityEngine_UI_Selectable_o *)__this_04,value,(MethodInfo *)0x0);
        pUVar4 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          pUVar4 = UnityEngine_Transform__Find(pUVar4,"Text",(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            __this_05 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar4,
                                   (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
            if (__this_05 != (UnityEngine_UI_Text_o *)0x0) {
              UnityEngine_UI_Text__set_alignment(__this_05,3,(MethodInfo *)0x0);
              if ((__this_00->fields).item.fields.Enabled == false) {
                UVar5 = (*(__this_05->klass->vtable)._22_get_color.methodPtr)
                                  (__this_05,(__this_05->klass->vtable)._22_get_color.method);
                UVar6 = (*(__this_05->klass->vtable)._22_get_color.methodPtr)
                                  (__this_05,(__this_05->klass->vtable)._22_get_color.method);
                UVar7 = (*(__this_05->klass->vtable)._22_get_color.methodPtr)
                                  (__this_05,(__this_05->klass->vtable)._22_get_color.method);
                local_98 = UVar5.fields.r;
                fStack_a4 = UVar6.fields.g;
                UVar7.fields.g = fStack_a4;
                UVar7.fields.r = local_98;
                UVar7.fields.a = 0.4;
                (*(__this_05->klass->vtable)._23_set_color.methodPtr)
                          (__this_05,UVar7,(__this_05->klass->vtable)._23_set_color.method);
                return;
              }
              return;
            }
          }
        }
      }
    }
  }
label_05d6e909:
  ThrowNullReferenceException();
}


// UI.MapEditorContextMenu$$WithAlpha
// il2cpp: UnityEngine_Color_o UI_MapEditorContextMenu__WithAlpha (UnityEngine_Color_o color, float alpha, const MethodInfo* method);
// 0x5d6ea20

UnityEngine_Color_o
UI_MapEditorContextMenu__WithAlpha(UnityEngine_Color_o color,float alpha,MethodInfo *method)

{
  UnityEngine_Color_o UVar1;
  
  UVar1.fields._0_8_ = color.fields._0_8_;
  UVar1.fields.a = alpha;
  UVar1.fields.b = color.fields.b;
  return (UnityEngine_Color_o)UVar1.fields;
}


// UI.MapEditorContextMenu$$CreateSeparator
// il2cpp: void UI_MapEditorContextMenu__CreateSeparator (UI_MapEditorContextMenu_o* __this, const MethodInfo* method);
// 0x5d6e040

void UI_MapEditorContextMenu__CreateSeparator(UI_MapEditorContextMenu_o *__this,MethodInfo *method)

{
  System_String_o *panel;
  Il2CppType *handle;
  System_Type_array *pSVar1;
  System_Type_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_Color_o UVar7;
  
  if (Il2CppMethodInitialized_07547fa6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"LineColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Separator");
    il2cpp_codegen_initialize_runtime_metadata(&"Line");
    il2cpp_codegen_initialize_runtime_metadata(&"ContextMenu");
    Il2CppMethodInitialized_07547fa6 = '\x01';
  }
  pSVar1 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 == (System_Type_array *)0x0) goto label_05d6e466;
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_05d6e470;
  }
  if ((int)pSVar1->max_length == 0) goto label_05d6e46b;
  pSVar1->m_Items[0] = pSVar2;
  Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_05d6e470;
  }
  if ((pSVar1->max_length & 0xfffffffe) == 0) goto label_05d6e46b;
  pSVar1->m_Items[1] = pSVar2;
  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(__this_00,"Separator",pSVar1,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
label_05d6e466:
    ThrowNullReferenceException();
  }
  pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05d6e466;
  UnityEngine_Transform__SetParent_692d510
            (pUVar4,(UnityEngine_Transform_o *)(__this->fields)._menuRect,false,(MethodInfo *)0x0);
  pUVar5 = UnityEngine_GameObject__GetComponent_object_
                     (__this_00,
                      (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if (pUVar5 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05d6e466;
  (*(pUVar5->klass->vtable)._38_set_preferredHeight.methodPtr)
            (pUVar5,10.0,(pUVar5->klass->vtable)._38_set_preferredHeight.method);
  pSVar1 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
  if (pSVar1 == (System_Type_array *)0x0) goto label_05d6e466;
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_05d6e470;
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
label_05d6e470:
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if ((pSVar1->max_length & 0xfffffffe) != 0) {
      pSVar1->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(__this_01,"Line",pSVar1,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        pUVar4 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
        parent = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510(pUVar4,parent,false,(MethodInfo *)0x0);
          __this_02 = UnityEngine_GameObject__GetComponent_object_
                                (__this_01,
                                 (MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMin
                      (__this_02,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_anchorMax
                      (__this_02,(UnityEngine_Vector2_o)0x3f0000003f800000,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_sizeDelta
                      (__this_02,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
            pUVar6 = UnityEngine_GameObject__GetComponent_object_
                               (__this_01,
                                (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
            panel = (__this->fields)._themePanel;
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            UVar7 = UI_UIManager__GetThemeColor
                              (panel,"ContextMenu","LineColor","DefaultPanel",
                               (MethodInfo *)0x0);
            if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
              (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                        (pUVar6,UVar7,(pUVar6->klass->vtable)._23_set_color.method);
              return;
            }
          }
        }
      }
      goto label_05d6e466;
    }
  }
label_05d6e46b:
  ThrowIndexOutOfRangeException();
}


