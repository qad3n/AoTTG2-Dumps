// Type: UI.MapEditorContextMenu
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/MapEditorContextMenu.cs
// Prior real C# source: none
// --------------------------------

// UI.MapEditorContextMenu.Item$$.ctor
// il2cpp: void UI_MapEditorContextMenu_Item___ctor (UI_MapEditorContextMenu_Item_o __this, System_String_o* label, System_Action_o* action, bool enabled, bool separatorBefore, const MethodInfo* method);
// 0x18229d6a0

void UI_MapEditorContextMenu_Item___ctor
               (UI_MapEditorContextMenu_Item_o *__this,System_String_o *label,System_Action_o *action,
               bool enabled,bool separatorBefore,MethodInfo *method)

{
  (__this->fields).Label = label;
  Il2CppCodeGenWriteBarrier((void **)__this,label);
  (__this->fields).Action = action;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Action,action);
  (__this->fields).Enabled = enabled;
  (__this->fields).SeparatorBefore = separatorBefore;
  return;
}


// UI.MapEditorContextMenu.<>c__DisplayClass16_0$$.ctor
// il2cpp: void UI_MapEditorContextMenu___c__DisplayClass16_0___ctor (UI_MapEditorContextMenu___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorContextMenu___c__DisplayClass16_0___ctor(UI_MapEditorContextMenu___c__DisplayClass16_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorContextMenu.<>c__DisplayClass16_0$$<CreateButton>b__0
// il2cpp: void UI_MapEditorContextMenu___c__DisplayClass16_0___CreateButton_b__0 (UI_MapEditorContextMenu___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x1822b8ee0

void UI_MapEditorContextMenu___c__DisplayClass16_0___CreateButton_b__0
               (UI_MapEditorContextMenu___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  UI_MapEditorContextMenu_o *__this_00;
  
  if ((__this->fields).item.fields.Enabled == false) {
    return;
  }
  pSVar1 = (__this->fields).item.fields.Action;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code);
  }
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorContextMenu_o *)0x0) {
    UI_MapEditorContextMenu__Hide(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorContextMenu$$get_IsOpen
// il2cpp: bool UI_MapEditorContextMenu__get_IsOpen (UI_MapEditorContextMenu_o* __this, const MethodInfo* method);
// 0x1822aaf80

bool UI_MapEditorContextMenu__get_IsOpen(UI_MapEditorContextMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843474e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843474e6 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  __this_00 = (__this->fields)._root;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorContextMenu$$get_MenuRect
// il2cpp: UnityEngine_RectTransform_o* UI_MapEditorContextMenu__get_MenuRect (UI_MapEditorContextMenu_o* __this, const MethodInfo* method);
// 0x180584c80

UnityEngine_RectTransform_o*
UI_MapEditorContextMenu__get_MenuRect(UI_MapEditorContextMenu_o* __this, MethodInfo* method)

{
  return (__this->fields)._menuRect;
}


// UI.MapEditorContextMenu$$.ctor
// il2cpp: void UI_MapEditorContextMenu___ctor (UI_MapEditorContextMenu_o* __this, UnityEngine_Transform_o* parent, System_String_o* themePanel, const MethodInfo* method);
// 0x180c8dad0

void
UI_MapEditorContextMenu___ctor(UI_MapEditorContextMenu_o* __this, UnityEngine_Transform_o* parent, System_String_o* themePanel, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._parent = _country;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._parent,_country);
  (__this->fields)._themePanel = _language;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._themePanel,_language);
  return;
}


// UI.MapEditorContextMenu$$Show
// il2cpp: void UI_MapEditorContextMenu__Show (UI_MapEditorContextMenu_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, System_Collections_Generic_IList_MapEditorContextMenu_Item__o* items, const MethodInfo* method);
// 0x1822aa960
// eh: try 0x1822aab60..0x1822aaf70 -> pad 0x183318f20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822aaa6b: nop dword ptr [rax + rax]
// asm:   0x1822aacb3: mov r8, qword ptr [rsp + 0x40]
// asm:   0x1822aacb8: cmp qword ptr [r8], 0
// asm:   0x1822aacbc: je 0x1822aaccf
// asm:   0x1822aacbe: xor ecx, ecx
// asm:   0x1822aacc0: mov r8, qword ptr [r8]
// asm:   0x1822aacc3: mov rdx, qword ptr [rip + 0x1dee636]  ; TypeInfo_System_IDisposable
// asm:   0x1822aacca: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1822aaccf: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1822aacd4: test rcx, rcx
// asm:   0x1822aacd7: jne 0x1822aaf70
// asm:   0x1822aacdd: xor r15d, r15d
// asm:   0x1822aace0: mov rsi, qword ptr [rsp + 0x100]
// asm:   0x1822aace8: movss xmm6, dword ptr [rsp + 0x20]
// asm:   0x1822aacee: mov edi, dword ptr [rsp + 0x24]
// asm:   0x1822aae01: jmp 0x1822aae06
// asm:   0x1822aae03: xorps xmm7, xmm7
// asm:   0x1822aaf05: movaps xmm11, xmm0
// asm:   0x1822aaf70: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318f20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318f25: push rbp
// asm:   0x183318f26: sub rsp, 0x20
// asm:   0x183318f2a: mov rbp, rdx
// asm:   0x183318f2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183318f31: mov rcx, qword ptr [rax]
// asm:   0x183318f34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183318f38: movabs rax, 0
// asm:   0x183318f42: add rsp, 0x20
// asm:   0x183318f46: pop rbp
// asm:   0x183318f47: ret 

void UI_MapEditorContextMenu__Show
               (UI_MapEditorContextMenu_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               System_Collections_Generic_IList_MapEditorContextMenu_Item__o *items,MethodInfo *method)

{
  float fVar1;
  undefined1 uVar2;
  char cVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar8;
  UnityEngine_RectOffset_o *pUVar9;
  Il2CppClass *pIVar10;
  Il2CppRuntimeInterfaceOffsetPair *pIVar11;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_Vector2_o value;
  System_String_o *pSVar13;
  System_Action_o *pSVar14;
  bool bVar15;
  int iVar16;
  int32_t iVar17;
  int32_t iVar18;
  UnityEngine_Transform_o *pUVar19;
  UnityEngine_Object_o *obj;
  void *pvVar20;
  VirtualInvokeData *pVVar21;
  undefined8 *puVar22;
  UnityEngine_Canvas_o *__this_00;
  UnityEngine_RectTransform_o *pUVar23;
  UnityEngine_Rect_o *pUVar24;
  ushort uVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  UnityEngine_Vector2_o value_00;
  float fVar29;
  Il2CppObject *local_d0 [2];
  undefined1 local_c0 [24];
  UI_MapEditorContextMenu_Item_o local_a8 [5];
  
  if (Il2CppMethodInitialized_1843474e7 == '\0') {
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
    Il2CppMethodInitialized_1843474e7 = '\x01';
  }
  iVar26 = 0;
  local_d0[0] = (Il2CppObject *)0x0;
  UI_MapEditorContextMenu__EnsureCreated(__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_1843474eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843474eb = '\x01';
  }
  pUVar7 = (__this->fields)._menuRect;
  if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_1822aaf5e;
  iVar16 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)pUVar7,(MethodInfo *)0x0);
  while (iVar16 = iVar16 + -1, -1 < iVar16) {
    pUVar7 = (__this->fields)._menuRect;
    if (((pUVar7 == (UnityEngine_RectTransform_o *)0x0) ||
        (pUVar19 = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)pUVar7,iVar16,(MethodInfo *)0x0)
        , pUVar19 == (UnityEngine_Transform_o *)0x0)) ||
       (obj = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0),
       obj == (UnityEngine_Object_o *)0x0)) goto label_1822aaf5e;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)obj,false,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
  }
  pUVar8 = (__this->fields)._layout;
  if ((pUVar8 == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) ||
     (pUVar9 = (pUVar8->fields).m_Padding, pUVar9 == (UnityEngine_RectOffset_o *)0x0)) goto label_1822aaf5e;
  iVar17 = UnityEngine_RectOffset__get_top(pUVar9,(MethodInfo *)0x0);
  pUVar8 = (__this->fields)._layout;
  if ((pUVar8 == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) ||
     ((pUVar9 = (pUVar8->fields).m_Padding, pUVar9 == (UnityEngine_RectOffset_o *)0x0 ||
      (iVar18 = UnityEngine_RectOffset__get_bottom(pUVar9,(MethodInfo *)0x0),
      items == (System_Collections_Generic_IList_MapEditorContextMenu_Item__o *)0x0)))) goto label_1822aaf5e;
  fVar27 = (float)(iVar18 + iVar17);
  local_d0[0] = InterfaceInvoker0_Invoke
                          (0,(Il2CppClass *)
                             TypeInfo_System_Collections_Generic_IEnumerable_MapEditorContextMenu_Item,
                           (Il2CppObject *)items);
  local_c0._0_4_ = 0.0;
  local_c0._4_4_ = 0.0;
  local_c0._8_8_ = local_d0;
  while( true ) {
    if (local_d0[0] == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar20 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_d0[0]);
    if ((char)pvVar20 == '\0') break;
    if (local_d0[0] == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar10 = local_d0[0]->klass;
    uVar4 = (pIVar10->_2).interface_offsets_count;
    uVar25 = 0;
    if (uVar4 != 0) {
      pIVar11 = (pIVar10->_1).interfaceOffsets;
      do {
        if (pIVar11[uVar25].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_MapEditorContextMenu_Item) {
          pVVar21 = pIVar10->vtable + pIVar11[uVar25].offset;
          goto label_1822aabf6;
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 < uVar4);
    }
    pVVar21 = GetInterfaceInvokeDataFromVTableSlowPath
                        (local_d0[0],
                         (Il2CppClass *)
                         TypeInfo_System_Collections_Generic_IEnumerator_MapEditorContextMenu_Item,0);
label_1822aabf6:
    puVar22 = (undefined8 *)(*pVVar21->methodPtr)(local_a8);
    pSVar13 = (System_String_o *)*puVar22;
    pSVar14 = (System_Action_o *)puVar22[1];
    uVar2 = *(undefined1 *)(puVar22 + 2);
    cVar3 = *(char *)((longlong)puVar22 + 0x11);
    uVar6 = *(undefined4 *)((longlong)puVar22 + 0x12);
    uVar5 = *(undefined2 *)((longlong)puVar22 + 0x16);
    if (cVar3 != '\0') {
      UI_MapEditorContextMenu__CreateSeparator(__this,(MethodInfo *)0x0);
      fVar27 = fVar27 + 10.0;
      iVar26 = iVar26 + 1;
    }
    local_a8[0].fields.Label = pSVar13;
    local_a8[0].fields.Action = pSVar14;
    local_a8[0].fields.Enabled = (bool)uVar2;
    local_a8[0].fields.SeparatorBefore = (bool)cVar3;
    local_a8[0].fields._18_4_ = uVar6;
    local_a8[0].fields._22_2_ = uVar5;
    UI_MapEditorContextMenu__CreateButton(__this,local_a8,(MethodInfo *)0x0);
    fVar27 = fVar27 + 28.0;
    iVar26 = iVar26 + 1;
  }
  if (local_d0[0] != (Il2CppObject *)0x0) {
    InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_d0[0]);
  }
  iVar16 = 0;
  if (-1 < iVar26 + -1) {
    iVar16 = iVar26 + -1;
  }
  pUVar8 = (__this->fields)._layout;
  if (pUVar8 == (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) goto label_1822aaf5e;
  pUVar7 = (__this->fields)._menuRect;
  if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_1822aaf5e;
  value.fields.y = (float)iVar16 * (pUVar8->fields).m_Spacing + fVar27;
  value.fields.x = 210.0;
  UnityEngine_RectTransform__set_sizeDelta(pUVar7,value,(MethodInfo *)0x0);
  pUVar7 = (__this->fields)._menuRect;
  if ((TypeInfo_UnityEngine_UI_LayoutRebuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_LayoutRebuilder);
  }
  UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar7,(MethodInfo *)0x0);
  pUVar12 = (__this->fields)._root;
  if ((pUVar12 == (UnityEngine_GameObject_o *)0x0) ||
     (pUVar19 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0),
     pUVar19 == (UnityEngine_Transform_o *)0x0)) goto label_1822aaf5e;
  UnityEngine_Transform__SetAsLastSibling(pUVar19,(MethodInfo *)0x0);
  pUVar12 = (__this->fields)._root;
  if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_1822aaf5e;
  UnityEngine_GameObject__SetActive(pUVar12,true,(MethodInfo *)0x0);
  pUVar19 = (__this->fields)._parent;
  if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_1822aaf5e;
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar19,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Canvas);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar15 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar15) {
    if (__this_00 == (UnityEngine_Canvas_o *)0x0) goto label_1822aaf5e;
    fVar27 = UnityEngine_Canvas__get_scaleFactor(__this_00,(MethodInfo *)0x0);
    if (fVar27 <= 0.0) goto label_1822aae06;
  }
  else {
label_1822aae06:
    fVar27 = 1.0;
  }
  pUVar7 = (UnityEngine_RectTransform_o *)(__this->fields)._parent;
  if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar23 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar7->klass == TypeInfo_UnityEngine_RectTransform) {
      pUVar23 = pUVar7;
    }
    if (pUVar23 == (UnityEngine_RectTransform_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pUVar23 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar7->klass == TypeInfo_UnityEngine_RectTransform) {
      pUVar23 = pUVar7;
    }
    pUVar24 = UnityEngine_RectTransform__get_rect((UnityEngine_Rect_o *)local_c0,pUVar23,(MethodInfo *)0x0);
    fVar28 = (pUVar24->fields).m_Width;
    fVar1 = (pUVar24->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      fVar29 = (eventData->fields)._position_k__BackingField.fields.x / fVar27;
      fVar27 = (eventData->fields)._position_k__BackingField.fields.y / fVar27;
      pUVar7 = (__this->fields)._menuRect;
      if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar24 = UnityEngine_RectTransform__get_rect((UnityEngine_Rect_o *)local_c0,pUVar7,(MethodInfo *)0x0)
        ;
        fVar28 = fVar28 - (pUVar24->fields).m_Width;
        if (fVar28 < 0.0) {
          fVar28 = 0.0;
        }
        if (fVar29 < 0.0) {
          fVar28 = 0.0;
        }
        else if (fVar29 <= fVar28) {
          fVar28 = fVar29;
        }
        pUVar7 = (__this->fields)._menuRect;
        if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
          pUVar24 = UnityEngine_RectTransform__get_rect
                              ((UnityEngine_Rect_o *)local_c0,pUVar7,(MethodInfo *)0x0);
          fVar29 = (pUVar24->fields).m_Height;
          if ((fVar29 <= fVar27) && (fVar29 = fVar1, fVar27 <= fVar1)) {
            fVar29 = fVar27;
          }
          pUVar7 = (__this->fields)._menuRect;
          if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
            value_00.fields.y = fVar29;
            value_00.fields.x = fVar28;
            UnityEngine_RectTransform__set_anchoredPosition(pUVar7,value_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_1822aaf5e:
  ThrowNullReferenceException();
}


// UI.MapEditorContextMenu$$Hide
// il2cpp: void UI_MapEditorContextMenu__Hide (UI_MapEditorContextMenu_o* __this, const MethodInfo* method);
// 0x1822aa8e0

void UI_MapEditorContextMenu__Hide(UI_MapEditorContextMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843474e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843474e8 = '\x01';
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
  }
  return;
}


// UI.MapEditorContextMenu$$Destroy
// il2cpp: void UI_MapEditorContextMenu__Destroy (UI_MapEditorContextMenu_o* __this, const MethodInfo* method);
// 0x1822a9f50

void UI_MapEditorContextMenu__Destroy(UI_MapEditorContextMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843474e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843474e9 = '\x01';
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
    UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
  }
  return;
}


// UI.MapEditorContextMenu$$EnsureCreated
// il2cpp: void UI_MapEditorContextMenu__EnsureCreated (UI_MapEditorContextMenu_o* __this, const MethodInfo* method);
// 0x1822a9fe0

void UI_MapEditorContextMenu__EnsureCreated(UI_MapEditorContextMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar1;
  Il2CppType *handle;
  bool bVar2;
  System_Type_array *pSVar3;
  System_Type_o *pSVar4;
  Il2CppObject *pIVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_RectTransform_o *pUVar8;
  UnityEngine_UI_Image_o *pUVar9;
  UnityEngine_UI_Button_o *__this_02;
  UnityEngine_Events_UnityAction_o *__this_03;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Outline_o *__this_04;
  UnityEngine_UI_VerticalLayoutGroup_o *pUVar10;
  UnityEngine_RectOffset_o *__this_05;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_1843474ea == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&"Menu");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditorContextMenuRoot");
    Il2CppMethodInitialized_1843474ea = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._root;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pSVar3 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar4 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar3 == (System_Type_array *)0x0) {
label_1822aa864:
    ThrowNullReferenceException();
  }
  if ((pSVar4 != (System_Type_o *)0x0) &&
     (pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar4,(((pSVar3->obj).klass)->_1).element_class),
     pIVar5 == (Il2CppObject *)0x0)) {
    pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
  }
  if ((int)pSVar3->max_length != 0) {
    pSVar3->m_Items[0] = pSVar4;
    Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pSVar4);
    pSVar4 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
    if ((pSVar4 != (System_Type_o *)0x0) &&
       (pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar4,(((pSVar3->obj).klass)->_1).element_class),
       pIVar5 == (Il2CppObject *)0x0)) {
      pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
    }
    if (1 < (uint)pSVar3->max_length) {
      pSVar3->m_Items[1] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pSVar4);
      pSVar4 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Button,(MethodInfo *)0x0);
      if ((pSVar4 != (System_Type_o *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar4,(((pSVar3->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
      if (2 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[2] = pSVar4;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 2,pSVar4);
        pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_2f1abe0(pUVar6,"MapEditorContextMenuRoot",pSVar3,(MethodInfo *)0x0);
        (__this->fields)._root = pUVar6;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._root,pUVar6);
        pUVar6 = (__this->fields)._root;
        if ((pUVar6 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0),
           pUVar7 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent_2f5a7e0(pUVar7,(__this->fields)._parent,false,(MethodInfo *)0x0);
          pUVar6 = (__this->fields)._root;
          if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
            pUVar8 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar6,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            if (Il2CppMethodInitialized_18433e3c9 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_18433e3c9 = '\x01';
            }
            if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar8,(UnityEngine_Vector2_o)
                                (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                         (MethodInfo *)0x0);
              if (Il2CppMethodInitialized_184341f36 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_184341f36 = '\x01';
              }
              UnityEngine_RectTransform__set_anchorMax
                        (pUVar8,(UnityEngine_Vector2_o)
                                (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                         (MethodInfo *)0x0);
              if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_18433e3c9 = '\x01';
              }
              UnityEngine_RectTransform__set_offsetMin
                        (pUVar8,(UnityEngine_Vector2_o)
                                (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                         (MethodInfo *)0x0);
              if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                Il2CppMethodInitialized_18433e3c9 = '\x01';
              }
              UnityEngine_RectTransform__set_offsetMax
                        (pUVar8,(UnityEngine_Vector2_o)
                                (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                         (MethodInfo *)0x0);
              pUVar6 = (__this->fields)._root;
              if ((pUVar6 != (UnityEngine_GameObject_o *)0x0) &&
                 (pUVar9 = UnityEngine_GameObject__GetComponent_object_
                                     (pUVar6,(MethodInfo_6F5650 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_Image),
                 pUVar9 != (UnityEngine_UI_Image_o *)0x0)) {
                local_18.r = 0.0;
                local_18.g = 0.0;
                local_18.b = 0.0;
                local_18.a = 0.0;
                (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                          (pUVar9,(UnityEngine_Color_o *)&local_18,
                           (pUVar9->klass->vtable)._23_set_color.method);
                (*(pUVar9->klass->vtable)._25_set_raycastTarget.methodPtr)
                          (pUVar9,true,(pUVar9->klass->vtable)._25_set_raycastTarget.method);
                pUVar6 = (__this->fields)._root;
                if ((pUVar6 != (UnityEngine_GameObject_o *)0x0) &&
                   (__this_02 = UnityEngine_GameObject__GetComponent_object_
                                          (pUVar6,(MethodInfo_6F5650 *)
                                                  MethodInfo_UnityEngine_GameObject_GetComponent_Button),
                   __this_02 != (UnityEngine_UI_Button_o *)0x0)) {
                  UnityEngine_UI_Selectable__set_transition
                            ((UnityEngine_UI_Selectable_o *)__this_02,0,(MethodInfo *)0x0);
                  __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this_02->fields).m_OnClick;
                  __this_03 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                  UnityEngine_Events_UnityAction___ctor
                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_03,(Il2CppObject *)__this
                             ,(intptr_t)MethodInfo_UI_MapEditorContextMenu_Hide,(MethodInfo *)0x0);
                  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_03,(MethodInfo *)0x0);
                    pSVar3 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,4);
                    pSVar4 = System_Type__GetTypeFromHandle
                                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,
                                        (MethodInfo *)0x0);
                    if (pSVar3 != (System_Type_array *)0x0) {
                      if ((pSVar4 != (System_Type_o *)0x0) &&
                         (pIVar5 = il2cpp_vm_Object_IsInst
                                             ((Il2CppObject *)pSVar4,(((pSVar3->obj).klass)->_1).element_class
                                             ), pIVar5 == (Il2CppObject *)0x0)) {
                        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
                      }
                      if ((int)pSVar3->max_length != 0) {
                        pSVar3->m_Items[0] = pSVar4;
                        Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pSVar4);
                        pSVar4 = System_Type__GetTypeFromHandle
                                           ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,
                                            (MethodInfo *)0x0);
                        if ((pSVar4 != (System_Type_o *)0x0) &&
                           (pIVar5 = il2cpp_vm_Object_IsInst
                                               ((Il2CppObject *)pSVar4,
                                                (((pSVar3->obj).klass)->_1).element_class),
                           pIVar5 == (Il2CppObject *)0x0)) {
                          pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                          il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
                        }
                        if (1 < (uint)pSVar3->max_length) {
                          pSVar3->m_Items[1] = pSVar4;
                          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pSVar4);
                          pSVar4 = System_Type__GetTypeFromHandle
                                             ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Outline,
                                              (MethodInfo *)0x0);
                          if ((pSVar4 != (System_Type_o *)0x0) &&
                             (pIVar5 = il2cpp_vm_Object_IsInst
                                                 ((Il2CppObject *)pSVar4,
                                                  (((pSVar3->obj).klass)->_1).element_class),
                             pIVar5 == (Il2CppObject *)0x0)) {
                            pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                            il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
                          }
                          if (2 < (uint)pSVar3->max_length) {
                            pSVar3->m_Items[2] = pSVar4;
                            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 2,pSVar4);
                            pSVar4 = System_Type__GetTypeFromHandle
                                               ((System_RuntimeTypeHandle_o)
                                                TypeRef_UnityEngine_UI_VerticalLayoutGroup,(MethodInfo *)0x0);
                            if ((pSVar4 != (System_Type_o *)0x0) &&
                               (pIVar5 = il2cpp_vm_Object_IsInst
                                                   ((Il2CppObject *)pSVar4,
                                                    (((pSVar3->obj).klass)->_1).element_class),
                               pIVar5 == (Il2CppObject *)0x0)) {
                              pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
                              il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
                            }
                            if (3 < (uint)pSVar3->max_length) {
                              pSVar3->m_Items[3] = pSVar4;
                              Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 3,pSVar4);
                              pUVar6 = il2cpp_codegen_object_new
                                                 ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                              UnityEngine_GameObject___ctor_2f1abe0
                                        (pUVar6,"Menu",pSVar3,(MethodInfo *)0x0);
                              if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                                pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
                                __this_01 = (__this->fields)._root;
                                if ((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
                                   (parent = UnityEngine_GameObject__get_transform
                                                       (__this_01,(MethodInfo *)0x0),
                                   pUVar7 != (UnityEngine_Transform_o *)0x0)) {
                                  UnityEngine_Transform__SetParent_2f5a7e0
                                            (pUVar7,parent,false,(MethodInfo *)0x0);
                                  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                                     (pUVar6,(MethodInfo_6F5650 *)
                                                                                                                          
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                     );
                                  (__this->fields)._menuRect = pUVar8;
                                  Il2CppCodeGenWriteBarrier(&(__this->fields)._menuRect,pUVar8);
                                  pUVar8 = (__this->fields)._menuRect;
                                  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                                    Il2CppMethodInitialized_18433e3c9 = '\x01';
                                  }
                                  if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                                    UnityEngine_RectTransform__set_anchorMin
                                              (pUVar8,(UnityEngine_Vector2_o)
                                                      (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector
                                                      ).fields,(MethodInfo *)0x0);
                                    pUVar8 = (__this->fields)._menuRect;
                                    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                                      il2cpp_codegen_initialize_runtime_metadata
                                                (&TypeInfo_UnityEngine_Vector2);
                                      Il2CppMethodInitialized_18433e3c9 = '\x01';
                                    }
                                    if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                                      UnityEngine_RectTransform__set_anchorMax
                                                (pUVar8,(UnityEngine_Vector2_o)
                                                        (TypeInfo_UnityEngine_Vector2->static_fields->
                                                        zeroVector).fields,(MethodInfo *)0x0);
                                      pUVar8 = (__this->fields)._menuRect;
                                      if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                                        UnityEngine_RectTransform__set_pivot
                                                  (pUVar8,(UnityEngine_Vector2_o)0x3f80000000000000,
                                                   (MethodInfo *)0x0);
                                        pUVar9 = UnityEngine_GameObject__GetComponent_object_
                                                           (pUVar6,(MethodInfo_6F5650 *)
                                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                                        if (pUVar9 != (UnityEngine_UI_Image_o *)0x0) {
                                          local_18.r = 0.09;
                                          local_18.g = 0.09;
                                          local_18.b = 0.09;
                                          local_18.a = 0.98;
                                          (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                                                    (pUVar9,(UnityEngine_Color_o *)&local_18,
                                                     (pUVar9->klass->vtable)._23_set_color.method);
                                          __this_04 = UnityEngine_GameObject__GetComponent_object_
                                                                (pUVar6,(MethodInfo_6F5650 *)
                                                                                                                                                
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Outline)
                                          ;
                                          if (__this_04 != (UnityEngine_UI_Outline_o *)0x0) {
                                            local_18.r = 0.38;
                                            local_18.g = 0.38;
                                            local_18.b = 0.38;
                                            local_18.a = 1.0;
                                            UnityEngine_UI_Shadow__set_effectColor
                                                      ((UnityEngine_UI_Shadow_o *)__this_04,
                                                       (UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
                                            UnityEngine_UI_Shadow__set_effectDistance
                                                      ((UnityEngine_UI_Shadow_o *)__this_04,
                                                       (UnityEngine_Vector2_o)0xc000000040000000,
                                                       (MethodInfo *)0x0);
                                            pUVar10 = UnityEngine_GameObject__GetComponent_object_
                                                                (pUVar6,(MethodInfo_6F5650 *)
                                                                                                                                                
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_VerticalLayoutGroup
                                                       );
                                            (__this->fields)._layout = pUVar10;
                                            Il2CppCodeGenWriteBarrier(&(__this->fields)._layout,pUVar10);
                                            pUVar10 = (__this->fields)._layout;
                                            __this_05 = il2cpp_codegen_object_new
                                                                  ((Il2CppClass *)
                                                                   TypeInfo_UnityEngine_RectOffset);
                                            UnityEngine_RectOffset___ctor_2ed1030
                                                      (__this_05,10,10,10,10,(MethodInfo *)0x0);
                                            if (pUVar10 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
                                              UnityEngine_UI_LayoutGroup__set_padding
                                                        ((UnityEngine_UI_LayoutGroup_o *)pUVar10,__this_05,
                                                         (MethodInfo *)0x0);
                                              pUVar1 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                       (__this->fields)._layout;
                                              if (pUVar1 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o
                                                             *)0x0) {
                                                UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                                                          (pUVar1,2.0,(MethodInfo *)0x0);
                                                pUVar1 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                         (__this->fields)._layout;
                                                if (pUVar1 != (
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)
                                                {
                                                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                                                            (pUVar1,true,(MethodInfo *)0x0);
                                                  pUVar1 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *
                                                           )(__this->fields)._layout;
                                                  if (pUVar1 != (
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)
                                                  {
                                                    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                                                              (pUVar1,true,(MethodInfo *)0x0);
                                                    pUVar1 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o
                                                              *)(__this->fields)._layout;
                                                    if (pUVar1 != (
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)
                                                    {
                                                      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                                                                (pUVar1,true,(MethodInfo *)0x0);
                                                      pUVar1 = (
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                                       (__this->fields)._layout;
                                                      if (pUVar1 != (
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)
                                                      {
                                                                                                                
                                                       UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                                                                 (pUVar1,false,(MethodInfo *)0x0);
                                                       pUVar6 = (__this->fields)._root;
                                                       if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                                                         UnityEngine_GameObject__SetActive
                                                                   (pUVar6,false,(MethodInfo *)0x0);
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
                              goto label_1822aa864;
                            }
                          }
                        }
                      }
                      goto label_1822aa8da;
                    }
                  }
                }
              }
            }
          }
        }
        goto label_1822aa864;
      }
    }
  }
label_1822aa8da:
  ThrowIndexOutOfRangeException();
}


// UI.MapEditorContextMenu$$ClearItems
// il2cpp: void UI_MapEditorContextMenu__ClearItems (UI_MapEditorContextMenu_o* __this, const MethodInfo* method);
// 0x1822a9670

void UI_MapEditorContextMenu__ClearItems(UI_MapEditorContextMenu_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  int index;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_1843474eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843474eb = '\x01';
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
      UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorContextMenu$$CreateButton
// il2cpp: void UI_MapEditorContextMenu__CreateButton (UI_MapEditorContextMenu_o* __this, UI_MapEditorContextMenu_Item_o item, const MethodInfo* method);
// 0x1822a9730

void UI_MapEditorContextMenu__CreateButton
               (UI_MapEditorContextMenu_o *__this,UI_MapEditorContextMenu_Item_o *item,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_RectTransform_o *parent;
  System_String_o *pSVar3;
  UnityEngine_UI_Graphic_o *pUVar4;
  System_Action_o *pSVar5;
  bool bVar6;
  undefined6 uVar7;
  bool bVar8;
  UI_MapEditorContextMenu___c__DisplayClass16_0_o *object;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_Button_o *__this_03;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_UI_Text_o *__this_04;
  Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *pUVar10;
  UnityEngine_Color_Fields local_98;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (Il2CppMethodInitialized_1843474ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_ColorBlock);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorContextMenu_c__DisplayClass16_0_CreateButton_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorContextMenu_c__DisplayClass16_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    Il2CppMethodInitialized_1843474ec = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorContextMenu_c__DisplayClass16_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_MapEditorContextMenu___c__DisplayClass16_0_o *)0x0) {
    pSVar5 = (item->fields).Action;
    bVar8 = (item->fields).Enabled;
    bVar6 = (item->fields).SeparatorBefore;
    uVar7 = *(undefined6 *)&(item->fields).field_0x12;
    (object->fields).item.fields.Label = (item->fields).Label;
    (object->fields).item.fields.Action = pSVar5;
    (object->fields).item.fields.Enabled = bVar8;
    (object->fields).item.fields.SeparatorBefore = bVar6;
    *(undefined6 *)&(object->fields).item.fields.field_0x12 = uVar7;
    Il2CppCodeGenWriteBarrier((void **)&object->fields,(void *)0x0);
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    parent = (__this->fields)._menuRect;
    pSVar3 = (__this->fields)._themePanel;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(__this_00,0x10,0.0,20.0,pSVar3,(MethodInfo *)0x0);
    pSVar3 = (object->fields).item.fields.Label;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_MapEditorContextMenu_c__DisplayClass16_0_CreateButton_b__0,
               (MethodInfo *)0x0);
    __this_02 = UI_ElementFactory__CreateDefaultButton
                          ((UnityEngine_Transform_o *)parent,__this_00,pSVar3,190.0,28.0,__this_01,
                           (MethodInfo *)0x0);
    if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
      __this_03 = UnityEngine_GameObject__GetComponent_object_
                            (__this_02,
                             (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
      if (__this_03 != (UnityEngine_UI_Button_o *)0x0) {
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)__this_03,(object->fields).item.fields.Enabled,
                   (MethodInfo *)0x0);
        UnityEngine_UI_Selectable__set_transition
                  ((UnityEngine_UI_Selectable_o *)__this_03,1,(MethodInfo *)0x0);
        pUVar4 = (__this_03->fields).m_TargetGraphic;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar8 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar8) {
          pUVar4 = (__this_03->fields).m_TargetGraphic;
          if (pUVar4 == (UnityEngine_UI_Graphic_o *)0x0) goto label_1822a9b10;
          local_98.r = 1.0;
          local_98.g = 1.0;
          local_98.b = 1.0;
          local_98.a = 1.0;
          (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                    (pUVar4,(UnityEngine_Color_o *)&local_98,(pUVar4->klass->vtable)._23_set_color.method);
        }
        if ((TypeInfo_UnityEngine_UI_ColorBlock->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_ColorBlock);
        }
        local_88.fields.m_ColorMultiplier = 1.0;
        local_88.fields.m_FadeDuration = 0.08;
        local_88.fields.m_NormalColor.fields.r = 0.0;
        local_88.fields.m_NormalColor.fields.g = 0.0;
        local_88.fields.m_NormalColor.fields.b = 0.0;
        local_88.fields.m_NormalColor.fields.a = 0.0;
        local_88.fields.m_HighlightedColor.fields.r = 1.0;
        local_88.fields.m_HighlightedColor.fields.g = 1.0;
        local_88.fields.m_HighlightedColor.fields.b = 1.0;
        local_88.fields.m_HighlightedColor.fields.a = 0.14;
        local_88.fields.m_PressedColor.fields.r = 1.0;
        local_88.fields.m_PressedColor.fields.g = 1.0;
        local_88.fields.m_PressedColor.fields.b = 1.0;
        local_88.fields.m_PressedColor.fields.a = 0.22;
        local_88.fields.m_SelectedColor.fields.r = 1.0;
        local_88.fields.m_SelectedColor.fields.g = 1.0;
        local_88.fields.m_SelectedColor.fields.b = 1.0;
        local_88.fields.m_SelectedColor.fields.a = 0.14;
        local_88.fields.m_DisabledColor.fields.r = 1.0;
        local_88.fields.m_DisabledColor.fields.g = 1.0;
        local_88.fields.m_DisabledColor.fields.b = 1.0;
        local_88.fields.m_DisabledColor.fields.a = 0.08;
        UnityEngine_UI_Selectable__set_colors
                  ((UnityEngine_UI_Selectable_o *)__this_03,&local_88,(MethodInfo *)0x0);
        pUVar9 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          pUVar9 = UnityEngine_Transform__Find(pUVar9,"Text",(MethodInfo *)0x0);
          if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
            __this_04 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar9,
                                   (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
            if (__this_04 != (UnityEngine_UI_Text_o *)0x0) {
              UnityEngine_UI_Text__set_alignment(__this_04,3,(MethodInfo *)0x0);
              if ((object->fields).item.fields.Enabled == false) {
                pUVar10 = (*(__this_04->klass->vtable)._22_get_color.methodPtr)
                                    ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)
                                     &local_98,__this_04,(__this_04->klass->vtable)._22_get_color.method);
                fVar1 = *(float *)&(pUVar10->fields).m_Ptr;
                pUVar10 = (*(__this_04->klass->vtable)._22_get_color.methodPtr)
                                    ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)
                                     &local_98,__this_04,(__this_04->klass->vtable)._22_get_color.method);
                fVar2 = *(float *)((longlong)&(pUVar10->fields).m_Ptr + 4);
                pUVar10 = (*(__this_04->klass->vtable)._22_get_color.methodPtr)
                                    ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)
                                     &local_98,__this_04,(__this_04->klass->vtable)._22_get_color.method);
                local_98.g = fVar2;
                local_98.r = fVar1;
                local_98.a = 0.4;
                local_98.b = (float)(pUVar10->fields).m_Count;
                (*(__this_04->klass->vtable)._23_set_color.methodPtr)
                          (__this_04,(UnityEngine_Color_o *)&local_98,
                           (__this_04->klass->vtable)._23_set_color.method);
              }
              return;
            }
          }
        }
      }
    }
  }
label_1822a9b10:
  ThrowNullReferenceException();
}


// UI.MapEditorContextMenu$$CreateSeparator
// il2cpp: void UI_MapEditorContextMenu__CreateSeparator (UI_MapEditorContextMenu_o* __this, const MethodInfo* method);
// 0x1822a9b20

void UI_MapEditorContextMenu__CreateSeparator(UI_MapEditorContextMenu_o *__this,MethodInfo *method)

{
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
  UnityEngine_Color_Fields local_48 [4];
  
  if (Il2CppMethodInitialized_1843474ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Separator");
    il2cpp_codegen_initialize_runtime_metadata(&"Line");
    Il2CppMethodInitialized_1843474ed = '\x01';
  }
  pSVar1 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 == (System_Type_array *)0x0) goto label_1822a9ef7;
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items,pSVar2);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)pSVar1->max_length) {
      pSVar1->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1,pSVar2);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_2f1abe0(__this_00,"Separator",pSVar1,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_2f5a7e0
                    (pUVar4,(UnityEngine_Transform_o *)(__this->fields)._menuRect,false,(MethodInfo *)0x0);
          pUVar5 = UnityEngine_GameObject__GetComponent_object_
                             (__this_00,
                              (MethodInfo_6F5650 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
          if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
            (*(pUVar5->klass->vtable)._38_set_preferredHeight.methodPtr)
                      (pUVar5,10.0,(pUVar5->klass->vtable)._38_set_preferredHeight.method);
            pSVar1 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
            pSVar2 = System_Type__GetTypeFromHandle
                               ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,
                                (MethodInfo *)0x0);
            if (pSVar1 != (System_Type_array *)0x0) {
              if (pSVar2 != (System_Type_o *)0x0) {
                pIVar3 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
                if (pIVar3 == (Il2CppObject *)0x0) {
                  pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                }
              }
              if ((int)pSVar1->max_length != 0) {
                pSVar1->m_Items[0] = pSVar2;
                Il2CppCodeGenWriteBarrier(pSVar1->m_Items,pSVar2);
                pSVar2 = System_Type__GetTypeFromHandle
                                   ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0
                                   );
                if (pSVar2 != (System_Type_o *)0x0) {
                  pIVar3 = il2cpp_vm_Object_IsInst
                                     ((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
                  if (pIVar3 == (Il2CppObject *)0x0) {
                    pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                  }
                }
                if (1 < (uint)pSVar1->max_length) {
                  pSVar1->m_Items[1] = pSVar2;
                  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1,pSVar2);
                  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                  UnityEngine_GameObject___ctor_2f1abe0
                            (__this_01,"Line",pSVar1,(MethodInfo *)0x0);
                  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar4 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                    parent = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                      UnityEngine_Transform__SetParent_2f5a7e0(pUVar4,parent,false,(MethodInfo *)0x0);
                      __this_02 = UnityEngine_GameObject__GetComponent_object_
                                            (__this_01,
                                             (MethodInfo_6F5650 *)
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
                                            (MethodInfo_6F5650 *)
                                            MethodInfo_UnityEngine_GameObject_GetComponent_Image);
                        if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                          local_48[0].r = 0.38;
                          local_48[0].g = 0.38;
                          local_48[0].b = 0.38;
                          local_48[0].a = 1.0;
                          (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                                    (pUVar6,(UnityEngine_Color_o *)local_48,
                                     (pUVar6->klass->vtable)._23_set_color.method);
                          return;
                        }
                      }
                    }
                  }
                  goto label_1822a9ef7;
                }
              }
              goto label_1822a9f3d;
            }
          }
        }
      }
label_1822a9ef7:
      ThrowNullReferenceException();
    }
  }
label_1822a9f3d:
  ThrowIndexOutOfRangeException();
}


