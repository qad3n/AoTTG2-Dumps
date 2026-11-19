// Type: Gisketch.Aottg2UI.Building.GisketchView
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchView.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchView.<>c__DisplayClass20_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0___ctor (Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x53942d0

void Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0___ctor
               (Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchView.<>c__DisplayClass20_0$$<UnregisterSubtree>b__0
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0___UnregisterSubtree_b__0 (Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0_o* __this, Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, const MethodInfo* method);
// 0x53944f0

bool Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0___UnregisterSubtree_b__0
               (Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0_o *__this,
               Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,MethodInfo *method)

{
  bool bVar1;
  
  if (entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    return true;
  }
  bVar1 = Gisketch_Aottg2UI_Building_GisketchView__IsInSubtree
                    ((entry->fields)._Target_k__BackingField,(__this->fields).root,method);
  return bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchView.<>c__DisplayClass20_0$$<UnregisterSubtree>b__1
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0___UnregisterSubtree_b__1 (Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0_o* __this, Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target, const MethodInfo* method);
// 0x5394510

bool Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0___UnregisterSubtree_b__1
               (Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0_o *__this,
               Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_RDX;
  
  bVar1 = Gisketch_Aottg2UI_Building_GisketchView__IsInSubtree
                    (target.fields.GameObject,(__this->fields).root,in_RDX);
  return bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchView$$get_Root
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Building_GisketchView__get_Root (Gisketch_Aottg2UI_Building_GisketchView_o* __this, const MethodInfo* method);
// 0x5393710

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Building_GisketchView__get_Root
          (Gisketch_Aottg2UI_Building_GisketchView_o *__this,MethodInfo *method)

{
  return (__this->fields)._Root_k__BackingField;
}


// Gisketch.Aottg2UI.Building.GisketchView$$set_Root
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView__set_Root (Gisketch_Aottg2UI_Building_GisketchView_o* __this, UnityEngine_GameObject_o* value, const MethodInfo* method);
// 0x5393720

void Gisketch_Aottg2UI_Building_GisketchView__set_Root
               (Gisketch_Aottg2UI_Building_GisketchView_o *__this,UnityEngine_GameObject_o *value,
               MethodInfo *method)

{
  (__this->fields)._Root_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Root_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchView$$get_MotionTargets
// il2cpp: System_Collections_Generic_List_GisketchMotionTarget__o* Gisketch_Aottg2UI_Building_GisketchView__get_MotionTargets (Gisketch_Aottg2UI_Building_GisketchView_o* __this, const MethodInfo* method);
// 0x5393730

System_Collections_Generic_List_GisketchMotionTarget__o *
Gisketch_Aottg2UI_Building_GisketchView__get_MotionTargets
          (Gisketch_Aottg2UI_Building_GisketchView_o *__this,MethodInfo *method)

{
  return (__this->fields)._MotionTargets_k__BackingField;
}


// Gisketch.Aottg2UI.Building.GisketchView$$get_SearchEntries
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Building_GisketchView__get_SearchEntries (Gisketch_Aottg2UI_Building_GisketchView_o* __this, const MethodInfo* method);
// 0x5393740

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Building_GisketchView__get_SearchEntries
          (Gisketch_Aottg2UI_Building_GisketchView_o *__this,MethodInfo *method)

{
  return (__this->fields)._SearchEntries_k__BackingField;
}


// Gisketch.Aottg2UI.Building.GisketchView$$get_LayoutDirty
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchView__get_LayoutDirty (Gisketch_Aottg2UI_Building_GisketchView_o* __this, const MethodInfo* method);
// 0x5393750

bool Gisketch_Aottg2UI_Building_GisketchView__get_LayoutDirty
               (Gisketch_Aottg2UI_Building_GisketchView_o *__this,MethodInfo *method)

{
  return (__this->fields)._LayoutDirty_k__BackingField;
}


// Gisketch.Aottg2UI.Building.GisketchView$$set_LayoutDirty
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView__set_LayoutDirty (Gisketch_Aottg2UI_Building_GisketchView_o* __this, bool value, const MethodInfo* method);
// 0x5393760

void Gisketch_Aottg2UI_Building_GisketchView__set_LayoutDirty
               (Gisketch_Aottg2UI_Building_GisketchView_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._LayoutDirty_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.Building.GisketchView$$SetRoot
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView__SetRoot (Gisketch_Aottg2UI_Building_GisketchView_o* __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x5393770

void Gisketch_Aottg2UI_Building_GisketchView__SetRoot
               (Gisketch_Aottg2UI_Building_GisketchView_o *__this,UnityEngine_GameObject_o *root,
               MethodInfo *method)

{
  (__this->fields)._Root_k__BackingField = root;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Root_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchView$$MarkLayoutDirty
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView__MarkLayoutDirty (Gisketch_Aottg2UI_Building_GisketchView_o* __this, const MethodInfo* method);
// 0x5393780

void Gisketch_Aottg2UI_Building_GisketchView__MarkLayoutDirty
               (Gisketch_Aottg2UI_Building_GisketchView_o *__this,MethodInfo *method)

{
  (__this->fields)._LayoutDirty_k__BackingField = true;
  return;
}


// Gisketch.Aottg2UI.Building.GisketchView$$MarkLayoutSettled
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView__MarkLayoutSettled (Gisketch_Aottg2UI_Building_GisketchView_o* __this, const MethodInfo* method);
// 0x5393790

void Gisketch_Aottg2UI_Building_GisketchView__MarkLayoutSettled
               (Gisketch_Aottg2UI_Building_GisketchView_o *__this,MethodInfo *method)

{
  (__this->fields)._LayoutDirty_k__BackingField = false;
  return;
}


// Gisketch.Aottg2UI.Building.GisketchView$$Register
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView__Register (Gisketch_Aottg2UI_Building_GisketchView_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* styleMotion, const MethodInfo* method);
// 0x53937a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5393906: jmp 0x539395e

void Gisketch_Aottg2UI_Building_GisketchView__Register
               (Gisketch_Aottg2UI_Building_GisketchView_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,UnityEngine_GameObject_o *go,
               Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *styleMotion,MethodInfo *method)

{
  int32_t *piVar1;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **ppGVar2;
  uint uVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_01;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar6;
  System_Collections_Generic_List_GisketchMotionTarget__o *__this_02;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_array *pGVar7;
  UnityEngine_Vector3_o *pUVar8;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o item;
  bool bVar9;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this_03;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar10;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o local_58;
  
  if (Il2CppMethodInitialized_07542b41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b41 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    return;
  }
  bVar9 = System_String__IsNullOrEmpty((node->fields).id,(MethodInfo *)0x0);
  pMVar10 = extraout_RDX;
  if (!bVar9) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._elements;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05393a97;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,(Il2CppObject *)(node->fields).id,(Il2CppObject *)go,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_set_Item);
    pMVar10 = extraout_RDX_00;
  }
  bVar9 = Gisketch_Aottg2UI_Building_GisketchView__IsSearchable(node,go,pMVar10);
  if (bVar9) {
    __this_01 = (__this->fields)._SearchEntries_k__BackingField;
    __this_03 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
    Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor(__this_03,node,go,(MethodInfo *)0x0);
    pMVar10 = MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add;
    if (__this_01 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto label_05393a97;
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar4 = (__this_01->fields)._items;
    if (pGVar4 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) goto label_05393a97;
    uVar3 = (__this_01->fields)._size;
    if (uVar3 < (uint)pGVar4->max_length) {
      (__this_01->fields)._size = uVar3 + 1;
      pGVar4->m_Items[(int)uVar3] = __this_03;
      Il2CppCodeGenWriteBarrier(pGVar4->m_Items + (int)uVar3);
      goto label_053938ee;
    }
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_03,
               (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
    enter = (node->fields).enter;
    if (enter == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) goto label_0539392e;
label_053938fa:
    pGVar5 = (node->fields).bind;
  }
  else {
label_053938ee:
    enter = (node->fields).enter;
    if (enter != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) goto label_053938fa;
label_0539392e:
    pGVar6 = (node->fields).motion;
    enter = styleMotion;
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
      enter = pGVar6;
    }
    pGVar5 = (node->fields).bind;
  }
  if (((pGVar5 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) &&
      (bVar9 = System_String__IsNullOrEmpty((pGVar5->fields).visible,(MethodInfo *)0x0), !bVar9)) ||
     (((enter == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0 ||
       (bVar9 = System_String__IsNullOrEmpty((enter->fields).preset,(MethodInfo *)0x0), bVar9)) &&
      ((pGVar6 = (node->fields).exit, pGVar6 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0 ||
       (bVar9 = System_String__IsNullOrEmpty((pGVar6->fields).preset,(MethodInfo *)0x0), bVar9)))))) {
    return;
  }
  __this_02 = (__this->fields)._MotionTargets_k__BackingField;
  local_58.fields.Exit = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  local_58.fields.RestScale.fields.x = 0.0;
  local_58.fields.RestScale.fields.y = 0.0;
  local_58.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
  local_58.fields.Enter = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  local_58.fields.RestScale.fields.z = 0.0;
  local_58.fields.RestAlpha = 0.0;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget___ctor(&local_58,go,enter,(node->fields).exit,method);
  pMVar10 = MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_Add;
  if (__this_02 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
    piVar1 = &(__this_02->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar7 = (__this_02->fields)._items;
    if (pGVar7 != (Gisketch_Aottg2UI_Building_GisketchMotionTarget_array *)0x0) {
      uVar3 = (__this_02->fields)._size;
      if (uVar3 < (uint)pGVar7->max_length) {
        (__this_02->fields)._size = uVar3 + 1;
        *(undefined8 *)&pGVar7->m_Items[(int)uVar3].fields.RestScale.fields.z = local_58.fields._32_8_;
        ppGVar2 = &pGVar7->m_Items[(int)uVar3].fields.Exit;
        *ppGVar2 = local_58.fields.Exit;
        pUVar8 = (UnityEngine_Vector3_o *)(ppGVar2 + 1);
        (pUVar8->fields).x = local_58.fields.RestScale.fields.x;
        (pUVar8->fields).y = local_58.fields.RestScale.fields.y;
        pGVar7->m_Items[(int)uVar3].fields.GameObject = local_58.fields.GameObject;
        pGVar7->m_Items[(int)uVar3].fields.Enter = local_58.fields.Enter;
        Il2CppCodeGenWriteBarrier((void **)(pGVar7->m_Items + (int)uVar3));
        return;
      }
      item.fields.Enter = local_58.fields.Enter;
      item.fields.GameObject = local_58.fields.GameObject;
      item.fields.Exit = local_58.fields.Exit;
      item.fields.RestScale.fields.x = local_58.fields.RestScale.fields.x;
      item.fields.RestScale.fields.y = local_58.fields.RestScale.fields.y;
      item.fields.RestScale.fields.z = local_58.fields.RestScale.fields.z;
      item.fields.RestAlpha = local_58.fields.RestAlpha;
      System_Collections_Generic_List_GisketchMotionTarget___AddWithResize
                (__this_02,item,(MethodInfo_3902CA0 *)pMVar10->klass->rgctx_data[0xe].method);
      return;
    }
  }
label_05393a97:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchView$$Find
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Building_GisketchView__Find (Gisketch_Aottg2UI_Building_GisketchView_o* __this, System_String_o* id, const MethodInfo* method);
// 0x5393de0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Building_GisketchView__Find
          (Gisketch_Aottg2UI_Building_GisketchView_o *__this,System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_GameObject_o *local_20;
  
  if (Il2CppMethodInitialized_07542b42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_TryGetValue);
    Il2CppMethodInitialized_07542b42 = '\x01';
  }
  local_20 = (UnityEngine_GameObject_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  pUVar2 = (UnityEngine_GameObject_o *)0x0;
  if (!bVar1) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._elements;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)id,(Il2CppObject **)&local_20,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_TryGetValue);
    if (bVar1) {
      pUVar2 = local_20;
    }
    else {
      pUVar2 = (UnityEngine_GameObject_o *)0x0;
    }
  }
  return pUVar2;
}


// Gisketch.Aottg2UI.Building.GisketchView$$UnregisterSubtree
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView__UnregisterSubtree (Gisketch_Aottg2UI_Building_GisketchView_o* __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x5393e70
// eh: try 0x53940bf..0x5394156 -> pad 0x5394268 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x539428a..0x539428f -> pad 0x53942b2 cleanup
// eh: try 0x53942b5..0x53942bf -> pad 0x53942c7 catch (...) [compiler noexcept guard]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5394095: mov r13, rsp
// asm:   0x5394098: lea r15, [rip + 0x1f028b9]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x539409f: jmp 0x53940ca
// asm:   0x5394127: mov rbp, rsp
// asm:   0x539412a: nop word ptr [rax + rax]
// asm:   0x539418d: nop dword ptr [rax]
// asm:   0x5394268: jmp 0x5394272
// asm:   0x539426a: jmp 0x5394272
// asm:   0x539426c: jmp 0x5394272
// asm:   0x539426e: jmp 0x5394272
// asm:   0x5394270: jmp 0x5394272
// asm:   0x5394272: mov r12, rax
// asm:   0x5394275: cmp edx, 1
// asm:   0x5394278: jne 0x53942b5
// asm:   0x539427a: mov rdi, r12
// asm:   0x539427d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5394282: mov rbp, qword ptr [rax]
// asm:   0x5394285: mov qword ptr [rsp + 0x40], rbp
// asm:   0x539428a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x539428f: lea rax, [rip + 0x1efbcea]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_GameObject_Dispose
// asm:   0x5394296: mov rsi, qword ptr [rax]
// asm:   0x5394299: mov rdi, rsp
// asm:   0x539429c: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x53942a1: test rbp, rbp
// asm:   0x53942a4: je 0x5394168
// asm:   0x53942aa: mov rdi, rbp
// asm:   0x53942ad: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x53942b2: mov r12, rax
// asm:   0x53942b5: lea rdi, [rsp + 0x40]
// asm:   0x53942ba: call 0x2d4bc00  ; il2cpp_runtime_helper_02d4bc00()
// asm:   0x53942bf: mov rdi, r12
// asm:   0x53942c2: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x53942c7: mov rdi, rax
// asm:   0x53942ca: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Building_GisketchView__UnregisterSubtree
               (Gisketch_Aottg2UI_Building_GisketchView_o *__this,UnityEngine_GameObject_o *root,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Object_o *x;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_String_array *pSVar4;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_00;
  System_Collections_Generic_List_GisketchMotionTarget__o *__this_01;
  MethodInfo *pMVar5;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar6;
  undefined1 *puVar7;
  bool bVar8;
  Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0_o *pGVar9;
  System_Collections_Generic_List_string__o *__this_02;
  System_String_o *pSVar10;
  System_Predicate_T__o *pSVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int index;
  Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0_Fields *targetAddress;
  undefined1 local_98 [8];
  undefined1 *puStack_90;
  System_String_o *local_88;
  UnityEngine_GameObject_o *pUStack_80;
  undefined8 local_78;
  Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0_o *local_68;
  Gisketch_Aottg2UI_Building_GisketchView_o *local_60;
  undefined1 local_58 [16];
  System_String_o *local_48;
  UnityEngine_GameObject_o *pUStack_40;
  int32_t local_38;
  undefined4 uStack_34;
  
  if (Il2CppMethodInitialized_07542b43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_GameObject_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_GameObject_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_RemoveAll);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_RemoveAll);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_GisketchMotionTarget);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Building_GisketchView_c__DisplayClass20_0_UnregisterSubtree_b__0)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Building_GisketchView_c__DisplayClass20_0_UnregisterSubtree_b__1)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchView_c__DisplayClass20_0);
    Il2CppMethodInitialized_07542b43 = '\x01';
  }
  local_88 = (System_String_o *)0x0;
  pUStack_80 = (UnityEngine_GameObject_o *)0x0;
  local_98 = (undefined1  [8])0x0;
  puStack_90 = (undefined1 *)0x0;
  local_78._0_4_ = 0;
  local_78._4_4_ = 0;
  pGVar9 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchView_c__DisplayClass20_0);
  System_Object___ctor((Il2CppObject *)pGVar9,(MethodInfo *)0x0);
  if (pGVar9 != (Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0_o *)0x0) {
    targetAddress = &pGVar9->fields;
    (pGVar9->fields).root = root;
    Il2CppCodeGenWriteBarrier(&targetAddress->root);
    x = (UnityEngine_Object_o *)(pGVar9->fields).root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      return;
    }
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_02,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._elements;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      local_68 = pGVar9;
      local_60 = __this;
      System_Collections_Generic_Dictionary_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_58,pSVar3,
                 (MethodInfo_4AAD970 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_GetEnumerator);
      local_78._0_4_ = local_38;
      local_78._4_4_ = uStack_34;
      local_88 = local_48;
      pUStack_80 = pUStack_40;
      local_98 = (undefined1  [8])local_58._0_8_;
      puStack_90 = (undefined1 *)local_58._8_8_;
      local_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_58._8_8_ = local_98;
      puVar7 = local_98;
      if (__this_02 == (System_Collections_Generic_List_string__o *)0x0) {
        do {
          local_58._8_8_ = puVar7;
          bVar8 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                            ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_98,
                             (MethodInfo_4CE66D0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_GameObject_MoveNext
                            );
          if (!bVar8) goto label_05394156;
          bVar8 = Gisketch_Aottg2UI_Building_GisketchView__IsInSubtree
                            (pUStack_80,targetAddress->root,method_01);
          puVar7 = (undefined1 *)local_58._8_8_;
        } while (!bVar8);
label_05394151:
        ThrowNullReferenceException();
      }
      while (bVar8 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                               ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_98
                                ,(MethodInfo_4CE66D0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_GameObject_MoveNext
                               ), pSVar10 = local_88, bVar8) {
        bVar8 = Gisketch_Aottg2UI_Building_GisketchView__IsInSubtree(pUStack_80,targetAddress->root,method_00)
        ;
        pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (bVar8) {
          piVar1 = &(__this_02->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_02->fields)._items;
          if (pSVar4 == (System_String_array *)0x0) goto label_05394151;
          uVar2 = (__this_02->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (__this_02->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = pSVar10;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)pSVar10,
                       (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
          }
        }
      }
label_05394156:
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_98,
                 (MethodInfo_4CE67F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_GameObject_Dispose);
      pGVar6 = local_60;
      if (__this_02 != (System_Collections_Generic_List_string__o *)0x0) {
        if (0 < (__this_02->fields)._size) {
          index = 0;
          do {
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pGVar6->fields)._elements;
            pSVar10 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this_02,index,
                                 (MethodInfo_395CF20 *)
                                 MethodInfo_System_Collections_Generic_List_string_get_Item);
            if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05394263;
            System_Collections_Generic_Dictionary_object__object___Remove
                      (pSVar3,(Il2CppObject *)pSVar10,
                       (MethodInfo_4AAED10 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Remove);
            index = index + 1;
          } while (index < (__this_02->fields)._size);
        }
        __this_00 = (pGVar6->fields)._SearchEntries_k__BackingField;
        pSVar11 = (System_Predicate_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_GisketchSearchEntry);
        pGVar9 = local_68;
        System_Predicate_object____ctor
                  ((System_Predicate_object__o *)pSVar11,(Il2CppObject *)local_68,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Building_GisketchView_c__DisplayClass20_0_UnregisterSubtree_b__0
                   ,(MethodInfo_3DC95B0 *)0x0);
        if (__this_00 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
          System_Collections_Generic_List_object___RemoveAll
                    ((System_Collections_Generic_List_object__o *)__this_00,pSVar11,
                     (MethodInfo_395EF50 *)
                     MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_RemoveAll);
          __this_01 = (pGVar6->fields)._MotionTargets_k__BackingField;
          pSVar11 = (System_Predicate_T__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_GisketchMotionTarget);
          System_Predicate_GisketchMotionTarget____ctor
                    ((System_Predicate_GisketchMotionTarget__o *)pSVar11,(Il2CppObject *)pGVar9,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Building_GisketchView_c__DisplayClass20_0_UnregisterSubtree_b__1
                     ,(MethodInfo_3DC80B0 *)0x0);
          if (__this_01 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
            System_Collections_Generic_List_GisketchMotionTarget___RemoveAll
                      (__this_01,pSVar11,
                       (MethodInfo_3904EB0 *)
                       MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_RemoveAll);
            return;
          }
        }
      }
    }
  }
label_05394263:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchView$$IsSearchable
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchView__IsSearchable (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x5393aa0

bool Gisketch_Aottg2UI_Building_GisketchView__IsSearchable
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,UnityEngine_GameObject_o *go,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  bool bVar2;
  UnityEngine_UI_Selectable_o *x;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *x_00;
  
  if (Il2CppMethodInitialized_07542b44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFocusRing);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Selectable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b44 = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((!bVar2) &&
       ((pGVar1 = (node->fields).search, pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0 ||
        ((pGVar1->fields).hidden == false)))) {
      if (go == (UnityEngine_GameObject_o *)0x0) {
label_05393bf8:
        ThrowNullReferenceException();
      }
      x = UnityEngine_GameObject__GetComponent_object_
                    (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Selectable);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if (x == (UnityEngine_UI_Selectable_o *)0x0) goto label_05393bf8;
        bVar2 = (*(x->klass->vtable)._9_IsActive.methodPtr)(x,(x->klass->vtable)._9_IsActive.method);
        if (bVar2) {
          bVar2 = (*(x->klass->vtable)._24_IsInteractable.methodPtr)
                            (x,(x->klass->vtable)._24_IsInteractable.method);
          if ((bVar2) && ((x->fields).m_Navigation.fields.m_Mode != 0)) {
            x_00 = UnityEngine_GameObject__GetComponent_object_
                             (go,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFocusRing);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar2 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            return bVar2;
          }
        }
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Building.GisketchView$$HasMotion
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchView__HasMotion (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, const MethodInfo* method);
// 0x5393c30

bool Gisketch_Aottg2UI_Building_GisketchView__HasMotion
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,MethodInfo *method)

{
  bool bVar1;
  
  if (motion == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    return false;
  }
  bVar1 = System_String__IsNullOrEmpty((motion->fields).preset,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchView$$HasVisibleBinding
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchView__HasVisibleBinding (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x5393c00

bool Gisketch_Aottg2UI_Building_GisketchView__HasVisibleBinding
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar1;
  bool bVar2;
  
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar1 = (node->fields).bind;
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    return false;
  }
  bVar2 = System_String__IsNullOrEmpty((pGVar1->fields).visible,(MethodInfo *)0x0);
  return !bVar2;
}


// Gisketch.Aottg2UI.Building.GisketchView$$IsInSubtree
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchView__IsInSubtree (UnityEngine_GameObject_o* value, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x53942e0

bool Gisketch_Aottg2UI_Building_GisketchView__IsInSubtree
               (UnityEngine_GameObject_o *value,UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this;
  UnityEngine_Transform_o *parent;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07542b45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b45 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = false;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = false;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)root,(MethodInfo *)0x0);
      bVar2 = true;
      if (!bVar1) {
        if (value != (UnityEngine_GameObject_o *)0x0) {
          __this = UnityEngine_GameObject__get_transform(value,(MethodInfo *)0x0);
          if (root != (UnityEngine_GameObject_o *)0x0) {
            parent = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
            if (__this != (UnityEngine_Transform_o *)0x0) {
              bVar1 = UnityEngine_Transform__IsChildOf(__this,parent,(MethodInfo *)0x0);
              return bVar1;
            }
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Building.GisketchView$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView___ctor (Gisketch_Aottg2UI_Building_GisketchView_o* __this, const MethodInfo* method);
// 0x53943d0

void Gisketch_Aottg2UI_Building_GisketchView___ctor
               (Gisketch_Aottg2UI_Building_GisketchView_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GameObject__o *__this_00;
  System_Collections_Generic_List_GisketchMotionTarget__o *__this_01;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_02;
  
  if (Il2CppMethodInitialized_07542b46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_GameObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GisketchMotionTarget)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
    Il2CppMethodInitialized_07542b46 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_GameObject);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ctor);
  (__this->fields)._elements = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._elements);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchMotionTarget);
  System_Collections_Generic_List_GisketchMotionTarget____ctor
            (__this_01,
             (MethodInfo_39022B0 *)MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_ctor);
  (__this->fields)._MotionTargets_k__BackingField = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._MotionTargets_k__BackingField);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
  (__this->fields)._SearchEntries_k__BackingField = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._SearchEntries_k__BackingField);
  (__this->fields)._LayoutDirty_k__BackingField = true;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


