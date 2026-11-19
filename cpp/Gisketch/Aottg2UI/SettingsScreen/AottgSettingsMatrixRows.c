// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsMatrixRows.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows.<>c__DisplayClass10_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass10_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x5e47c50

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass10_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass10_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows.<>c__DisplayClass10_0$$<BuildPair>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass10_0___BuildPair_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass10_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* pair, const MethodInfo* method);
// 0x5e48140

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass10_0___BuildPair_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass10_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *pair,MethodInfo *method)

{
  int32_t index;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *pGVar1;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar2;
  MethodInfo *in_RCX;
  
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *)0x0) {
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__BuildCell
              (pGVar1,pair,(__this->fields).index,in_RCX);
    pGVar1 = (__this->fields).__4__this;
    if ((pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *)0x0) &&
       (pGVar2 = (pGVar1->fields)._rows, pGVar2 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0)) {
      index = (__this->fields).rightIndex;
      if (index < (int)pGVar2->max_length) {
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__BuildCell(pGVar1,pair,index,in_RCX);
        return;
      }
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__BuildSpacer
                (pGVar1,pair,(__this->fields).index,in_RCX);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows.<>c__DisplayClass11_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass11_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x5e47e90

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass11_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass11_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows.<>c__DisplayClass11_0$$<BuildCell>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass11_0___BuildCell_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass11_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* cell, const MethodInfo* method);
// 0x5e481a0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e481c1: mov rax, qword ptr [rax + rcx*8 + 0x20]
// asm:   0x5e481c6: mov rdi, rsi
// asm:   0x5e481c9: mov rsi, rax
// asm:   0x5e481cc: xor edx, edx
// asm:   0x5e481ce: pop rax
// asm:   0x5e481cf: jmp 0x536a680  ; Gisketch_Aottg2UI_Code_AottgUi__Component()

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass11_0___BuildCell_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass11_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *cell,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *pGVar2;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar3;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar4;
  
  pGVar2 = (__this->fields).__4__this;
  if ((pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *)0x0) &&
     (pGVar3 = (pGVar2->fields)._rows, pGVar3 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0)) {
    uVar1 = (__this->fields).index;
    if ((uint)pGVar3->max_length <= uVar1) {
      ThrowIndexOutOfRangeException();
    }
    if (cell != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar4 = pGVar3->m_Items[(int)uVar1];
      if (pGVar4 == (Gisketch_Aottg2UI_Code_AottgComponent_o *)0x0) {
        return;
      }
      (*(pGVar4->klass->vtable)._4_Build.methodPtr)(pGVar4,cell,(pGVar4->klass->vtable)._4_Build.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows.<>c__DisplayClass7_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass7_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x5e47a40

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass7_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass7_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows.<>c__DisplayClass7_0$$<AddVirtualScrollItems>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass7_0___AddVirtualScrollItems_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass7_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* pair, const MethodInfo* method);
// 0x5e481e0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass7_0___AddVirtualScrollItems_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass7_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *pair,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this_00;
  MethodInfo *in_RCX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__BuildPair
            (__this_00,pair,(__this->fields).i,in_RCX);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, System_String_o* id, Gisketch_Aottg2UI_Code_AottgComponent_array* rows, const MethodInfo* method);
// 0x5e472a0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,System_String_o *id,
               Gisketch_Aottg2UI_Code_AottgComponent_array *rows,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075485f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    Il2CppMethodInitialized_075485f7 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  if (rows == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    rows = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,0);
  }
  (__this->fields)._rows = rows;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rows);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__ApplyCompactLayout(__this,(MethodInfo *)rows);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__Build (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e47420

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *id;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_Action_AottgUi__o *method_00;
  
  if (Il2CppMethodInitialized_075485f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_Build_b__4_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_075485f8 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  method_00 = __this_00;
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_Build_b__4_0,
             (MethodInfo_4A81BE0 *)0x0);
  id = (__this->fields)._id;
  layout = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__MatrixLayout((MethodInfo *)method_00);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,"clear",__this_00,id,layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$ApplySearchContext
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__ApplySearchContext (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x5e475a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e4767f: jmp 0x5e475f0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__ApplySearchContext
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context,MethodInfo *method)

{
  uint uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  VirtualInvokeData *pVVar4;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar5;
  Il2CppObject *obj;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if (Il2CppMethodInitialized_075485f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable);
    Il2CppMethodInitialized_075485f9 = '\x01';
  }
  pGVar5 = (__this->fields)._rows;
  if (pGVar5 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    uVar7 = 0;
    do {
      uVar1 = (uint)pGVar5->max_length;
      if ((long)(int)uVar1 <= (long)uVar7) {
        return;
      }
      if (uVar1 <= uVar7) {
        ThrowIndexOutOfRangeException();
      }
      obj = il2cpp_vm_Object_IsInst
                      ((Il2CppObject *)pGVar5->m_Items[uVar7],
                       (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable);
      if (obj != (Il2CppObject *)0x0) {
        pIVar2 = obj->klass;
        uVar6 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar6 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar8 = 0;
          do {
            if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable_c **)
                 ((long)&pIVar3->interfaceType + lVar8) ==
                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable) {
              pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
              goto label_05e475fa;
            }
            lVar8 = lVar8 + 0x10;
          } while (uVar6 * 0x10 != lVar8);
        }
        pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)
                                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable,0);
label_05e475fa:
        (*pVVar4->methodPtr)(obj,context,pVVar4->method);
      }
      uVar7 = uVar7 + 1;
      pGVar5 = (__this->fields)._rows;
    } while (pGVar5 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__SyncState (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5e476c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e4777c: nop dword ptr [rax]
// asm:   0x5e4778f: jmp 0x5e47710

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__SyncState
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  uint uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  VirtualInvokeData *pVVar4;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar5;
  Il2CppObject *obj;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if (Il2CppMethodInitialized_075485fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync);
    Il2CppMethodInitialized_075485fa = '\x01';
  }
  pGVar5 = (__this->fields)._rows;
  if (pGVar5 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    uVar7 = 0;
    do {
      uVar1 = (uint)pGVar5->max_length;
      if ((long)(int)uVar1 <= (long)uVar7) {
        return;
      }
      if (uVar1 <= uVar7) {
        ThrowIndexOutOfRangeException();
      }
      obj = il2cpp_vm_Object_IsInst
                      ((Il2CppObject *)pGVar5->m_Items[uVar7],
                       (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync);
      if (obj != (Il2CppObject *)0x0) {
        pIVar2 = obj->klass;
        uVar6 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar6 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar8 = 0;
          do {
            if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync_c **)
                 ((long)&pIVar3->interfaceType + lVar8) ==
                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync) {
              pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
              goto label_05e4771a;
            }
            lVar8 = lVar8 + 0x10;
          } while (uVar6 * 0x10 != lVar8);
        }
        pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)
                                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync,0);
label_05e4771a:
        (*pVVar4->methodPtr)(obj,root,pVVar4->method);
      }
      uVar7 = uVar7 + 1;
      pGVar5 = (__this->fields)._rows;
    } while (pGVar5 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$AddVirtualScrollItems
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__AddVirtualScrollItems (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, System_Collections_Generic_List_GisketchNodeDefinition__o* items, Gisketch_Aottg2UI_Code_AottgUi_o* owner, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x5e477c0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e47901: mov dword ptr [rsp + 0x2c], eax
// asm:   0x5e47905: cmp byte ptr [rip + 0x1700cf4], 0
// asm:   0x5e4790c: jne 0x5e47921
// asm:   0x5e47a1c: jmp 0x5e47921

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__AddVirtualScrollItems
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,
               System_Collections_Generic_List_GisketchNodeDefinition__o *items,
               Gisketch_Aottg2UI_Code_AottgUi_o *owner,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *item;
  int iVar4;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass7_0_o *__this_00;
  System_String_o *str2;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar6;
  System_Action_AottgUi__o *__this_01;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar7;
  MethodInfo *pMVar8;
  System_Action_AottgUi__o **targetAddress;
  int local_3c;
  Gisketch_Aottg2UI_Code_AottgUi_o *local_38;
  
  local_38 = owner;
  if (Il2CppMethodInitialized_075485fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass7_0_AddVirtualScrollItem
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass7_0);
    Il2CppMethodInitialized_075485fb = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass7_0)
  ;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass7_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    pMVar8 = (MethodInfo *)__this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    if ((items == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) ||
       (local_38 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) {
      return;
    }
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__ApplySearchContext(__this,context,pMVar8);
    (__this_00->fields).i = 0;
    pGVar7 = (__this->fields)._rows;
    if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
      targetAddress = &(__this_00->fields).__9__0;
      iVar4 = 0;
      do {
        iVar2 = (int)pGVar7->max_length;
        if ((iVar2 - (iVar2 + 1 >> 0x1f)) + 1 >> 1 <= iVar4) {
          return;
        }
        __this_01 = *targetAddress;
        if (__this_01 == (System_Action_AottgUi__o *)0x0) {
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass7_0_AddVirtualScrollItem
                     ,(MethodInfo_4A81BE0 *)0x0);
          (__this_00->fields).__9__0 = __this_01;
          Il2CppCodeGenWriteBarrier(targetAddress);
          iVar4 = (__this_00->fields).i;
        }
        local_3c = iVar4;
        if (Il2CppMethodInitialized_07548600 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"-pair-");
          Il2CppMethodInitialized_07548600 = '\x01';
        }
        pSVar5 = (__this->fields)._id;
        str2 = System_Int32__ToString(&local_3c,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat_5301f10(pSVar5,"-pair-",str2,(MethodInfo *)0x0);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__BuildDetached(local_38,__this_01,pSVar5,(MethodInfo *)0x0);
        pMVar8 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
        if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) break;
        if (pGVar6->max_length != 0) {
          if ((int)pGVar6->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          item = pGVar6->m_Items[0];
          piVar1 = &(items->fields)._version;
          *piVar1 = *piVar1 + 1;
          pGVar6 = (items->fields)._items;
          if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) break;
          uVar3 = (items->fields)._size;
          if (uVar3 < (uint)pGVar6->max_length) {
            (items->fields)._size = uVar3 + 1;
            pGVar6->m_Items[(int)uVar3] = item;
            Il2CppCodeGenWriteBarrier(pGVar6->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)items,(Il2CppObject *)item,
                       (MethodInfo_395D230 *)pMVar8->klass->rgctx_data[0xe].method);
          }
        }
        iVar4 = (__this_00->fields).i + 1;
        (__this_00->fields).i = iVar4;
        pGVar7 = (__this->fields)._rows;
      } while (pGVar7 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$ApplyCompactLayout
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__ApplyCompactLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, const MethodInfo* method);
// 0x5e47320
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e473ce: nop 
// asm:   0x5e473df: jmp 0x5e47360

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__ApplyCompactLayout
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,MethodInfo *method)

{
  uint uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  VirtualInvokeData *pVVar4;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar5;
  Il2CppObject *obj;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if (Il2CppMethodInitialized_075485fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware);
    Il2CppMethodInitialized_075485fc = '\x01';
  }
  pGVar5 = (__this->fields)._rows;
  if (pGVar5 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    uVar7 = 0;
    do {
      uVar1 = (uint)pGVar5->max_length;
      if ((long)(int)uVar1 <= (long)uVar7) {
        return;
      }
      if (uVar1 <= uVar7) {
        ThrowIndexOutOfRangeException();
      }
      obj = il2cpp_vm_Object_IsInst
                      ((Il2CppObject *)pGVar5->m_Items[uVar7],
                       (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware);
      if (obj != (Il2CppObject *)0x0) {
        pIVar2 = obj->klass;
        uVar6 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar6 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar8 = 0;
          do {
            if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware_c **)
                 ((long)&pIVar3->interfaceType + lVar8) ==
                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware) {
              pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
              goto label_05e4736a;
            }
            lVar8 = lVar8 + 0x10;
          } while (uVar6 * 0x10 != lVar8);
        }
        pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)
                                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware,0);
label_05e4736a:
        (*pVVar4->methodPtr)(obj,1,pVVar4->method);
      }
      uVar7 = uVar7 + 1;
      pGVar5 = (__this->fields)._rows;
    } while (pGVar5 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$RowsPerColumn
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__RowsPerColumn (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, const MethodInfo* method);
// 0x5e47ab0

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__RowsPerColumn
                  (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar2;
  
  pGVar2 = (__this->fields)._rows;
  if (pGVar2 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (int)pGVar2->max_length;
  return (iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$BuildPair
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__BuildPair (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, int32_t index, const MethodInfo* method);
// 0x5e47ae0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__BuildPair
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,int32_t index,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass10_0_o *__this_00;
  System_Action_AottgUi__o *__this_01;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *method_00;
  int32_t local_24;
  
  if (Il2CppMethodInitialized_075485fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass10_0_BuildPair_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass10_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_075485fd = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass10_0
                        );
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass10_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    (__this_00->fields).index = index;
    pGVar2 = (__this->fields)._rows;
    if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
      iVar1 = (int)pGVar2->max_length;
      (__this_00->fields).rightIndex = ((iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1) + index;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass10_0_BuildPair_b__0
                 ,(MethodInfo_4A81BE0 *)0x0);
      local_24 = (__this_00->fields).index;
      if (Il2CppMethodInitialized_07548600 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"-pair-");
        Il2CppMethodInitialized_07548600 = '\x01';
      }
      method_00 = (MethodInfo *)(__this->fields)._id;
      pSVar3 = System_Int32__ToString(&local_24,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_5301f10
                         ((System_String_o *)method_00,"-pair-",pSVar3,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__PairLayout(method_00);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",__this_01,pSVar3,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$BuildCell
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__BuildCell (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* pair, int32_t index, const MethodInfo* method);
// 0x5e47d40

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__BuildCell
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *pair,int32_t index,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass11_0_o *__this_00;
  System_Action_AottgUi__o *__this_01;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *method_00;
  int32_t iStack_24;
  
  if (Il2CppMethodInitialized_075485fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass11_0_BuildCell_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass11_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_075485fe = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass11_0
                        );
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass11_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    (__this_00->fields).index = index;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass11_0_BuildCell_b__0
               ,(MethodInfo_4A81BE0 *)0x0);
    iStack_24 = (__this_00->fields).index;
    if (Il2CppMethodInitialized_07548601 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"-cell-");
      Il2CppMethodInitialized_07548601 = '\x01';
    }
    method_00 = (MethodInfo *)(__this->fields)._id;
    pSVar1 = System_Int32__ToString(&iStack_24,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_5301f10
                       ((System_String_o *)method_00,"-cell-",pSVar1,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__CellLayout(method_00);
    if (pair != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pair,"clear",__this_01,pSVar1,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$BuildSpacer
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__BuildSpacer (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* pair, int32_t index, const MethodInfo* method);
// 0x5e47fc0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__BuildSpacer
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *pair,int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *method_00;
  int32_t iStack_1c;
  
  if (Il2CppMethodInitialized_075485ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_075485ff = '\x01';
  }
  iStack_1c = index;
  if (Il2CppMethodInitialized_07548602 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-spacer-");
    Il2CppMethodInitialized_07548602 = '\x01';
  }
  method_00 = (MethodInfo *)(__this->fields)._id;
  pSVar1 = System_Int32__ToString(&iStack_1c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5301f10
                     ((System_String_o *)method_00,"-spacer-",pSVar1,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__CellLayout(method_00);
  if (pair == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (pair,"clear",(System_Action_AottgUi__o *)0x0,pSVar1,layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$PairId
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__PairId (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, int32_t index, const MethodInfo* method);
// 0x5e47a50

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__PairId
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,int32_t index,MethodInfo *method
          )

{
  System_String_o *str2;
  System_String_o *pSVar1;
  int32_t local_c;
  
  local_c = index;
  if (Il2CppMethodInitialized_07548600 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-pair-");
    Il2CppMethodInitialized_07548600 = '\x01';
  }
  pSVar1 = (__this->fields)._id;
  str2 = System_Int32__ToString(&local_c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5301f10(pSVar1,"-pair-",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$CellId
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__CellId (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, int32_t index, const MethodInfo* method);
// 0x5e47ea0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__CellId
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,int32_t index,MethodInfo *method
          )

{
  System_String_o *str2;
  System_String_o *pSVar1;
  int32_t local_c;
  
  local_c = index;
  if (Il2CppMethodInitialized_07548601 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-cell-");
    Il2CppMethodInitialized_07548601 = '\x01';
  }
  pSVar1 = (__this->fields)._id;
  str2 = System_Int32__ToString(&local_c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5301f10(pSVar1,"-cell-",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$SpacerId
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__SpacerId (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, int32_t index, const MethodInfo* method);
// 0x5e48080

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__SpacerId
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,int32_t index,MethodInfo *method
          )

{
  System_String_o *str2;
  System_String_o *pSVar1;
  int32_t local_c;
  
  local_c = index;
  if (Il2CppMethodInitialized_07548602 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-spacer-");
    Il2CppMethodInitialized_07548602 = '\x01';
  }
  pSVar1 = (__this->fields)._id;
  str2 = System_Int32__ToString(&local_c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5301f10(pSVar1,"-spacer-",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$MatrixLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__MatrixLayout (const MethodInfo* method);
// 0x5e474d0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__MatrixLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07548603 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07548603 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,6.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$PairLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__PairLayout (const MethodInfo* method);
// 0x5e47c60

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__PairLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07548604 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_07548604 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,72.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$CellLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__CellLayout (const MethodInfo* method);
// 0x5e47f00

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__CellLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07548605 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_07548605 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$<Build>b__4_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___Build_b__4_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* matrix, const MethodInfo* method);
// 0x5e480e0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___Build_b__4_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *matrix,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar2;
  uint uVar3;
  int32_t index;
  
  pGVar2 = (__this->fields)._rows;
  if (pGVar2 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    index = 0;
    do {
      iVar1 = (int)pGVar2->max_length;
      uVar3 = -(iVar1 + 1 >> 0x1f);
      if ((int)(iVar1 + uVar3 + 1) >> 1 <= index) {
        return;
      }
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__BuildPair
                (__this,matrix,index,(MethodInfo *)(ulong)uVar3);
      index = index + 1;
      pGVar2 = (__this->fields)._rows;
    } while (pGVar2 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0);
  }
  ThrowNullReferenceException();
}


