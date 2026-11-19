// Type: Anticheat.ModeratorManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Anticheat/ModeratorManager.cs
// Prior real C# source: none
// --------------------------------

// Anticheat.ModeratorManager.<>c__DisplayClass100_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass100_0___ctor (Anticheat_ModeratorManager___c__DisplayClass100_0_o* __this, const MethodInfo* method);
// 0x5e352e0

void Anticheat_ModeratorManager___c__DisplayClass100_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass100_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass100_0$$<RequestRegionBanList>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass100_0___RequestRegionBanList_b__0 (Anticheat_ModeratorManager___c__DisplayClass100_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x5e36080
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e360ed: cmp byte ptr [rip + 0x1712464], 0
// asm:   0x5e360f4: je 0x5e36204
// asm:   0x5e36245: jmp 0x5e36129

void Anticheat_ModeratorManager___c__DisplayClass100_0___RequestRegionBanList_b__0
               (Anticheat_ModeratorManager___c__DisplayClass100_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  uint32_t uVar1;
  undefined8 uVar2;
  System_Action_string__o *pSVar3;
  System_Action_string__o *pSVar4;
  System_Action_RegionBanPage__o *pSVar5;
  int32_t iVar6;
  int32_t iVar7;
  System_Collections_Generic_Dictionary_byte__object__array *entries;
  Anticheat_RegionBanEntry_array *pAVar8;
  Anticheat_RegionBanPage_o *__this_00;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07548574 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_RegionBanPage);
    Il2CppMethodInitialized_07548574 = '\x01';
  }
  uVar2 = **(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar3 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar4 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    pSVar4 = *(System_Action_string__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
  }
  if (pSVar4 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar4->fields).invoke_impl)((pSVar4->fields).method_code,uVar2,(pSVar4->fields).method);
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,uVar2,(pSVar3->fields).method);
  }
  iVar6 = Anticheat_ModeratorManager__ReadInt(data,1,0,in_RCX);
  iVar7 = Anticheat_ModeratorManager__ReadInt(data,2,-1,in_RCX);
  method_01 = (MethodInfo *)0x3;
  entries = Anticheat_ModeratorManager__GetResponseEntries(data,3,method_00);
  pAVar8 = Anticheat_ModeratorManager__ParseRegionBanEntries(entries,method_01);
  pSVar5 = TypeInfo_Anticheat_ModeratorManager->static_fields->RegionBanListReceived;
  if (pSVar5 == (System_Action_RegionBanPage__o *)0x0) {
    return;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_RegionBanPage);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Anticheat_RegionBanPage_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).Count = iVar6;
  (__this_00->fields).EndIndex = iVar7;
  (__this_00->fields).Entries = pAVar8;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Entries);
  (*(code *)(pSVar5->fields).invoke_impl)((pSVar5->fields).method_code,__this_00,(pSVar5->fields).method);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass100_0$$<RequestRegionBanList>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass100_0___RequestRegionBanList_b__1 (Anticheat_ModeratorManager___c__DisplayClass100_0_o* __this, const MethodInfo* method);
// 0x5e36270
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e362b7: lea rax, [rip + 0x14b0b52]  ; "Request timed out"
// asm:   0x5e362be: mov r14, qword ptr [rax]
// asm:   0x5e362c1: cmp byte ptr [rip + 0x1712290], 0
// asm:   0x5e362c8: je 0x5e36327
// asm:   0x5e3635e: jmp 0x5e362f4

void Anticheat_ModeratorManager___c__DisplayClass100_0___RequestRegionBanList_b__1
               (Anticheat_ModeratorManager___c__DisplayClass100_0_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07548575 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Request timed out");
    Il2CppMethodInitialized_07548575 = '\x01';
  }
  pSVar2 = (__this->fields).localStatus;
  pSVar4 = "Request timed out";
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar4 = "Request timed out";
  }
  "Request timed out" = pSVar4;
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    pSVar3 = *(System_Action_string__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pSVar4,(pSVar3->fields).method);
  }
  if (pSVar2 == (System_Action_string__o *)0x0) {
    return;
  }
  (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar4,(pSVar2->fields).method);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass106_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass106_0___ctor (Anticheat_ModeratorManager___c__DisplayClass106_0_o* __this, const MethodInfo* method);
// 0x5e35e40

void Anticheat_ModeratorManager___c__DisplayClass106_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass106_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass106_0$$<SendBatchRoomRemove>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass106_0___SendBatchRoomRemove_b__0 (Anticheat_ModeratorManager___c__DisplayClass106_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x5e36370
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e3666e: cmp byte ptr [rip + 0x1711ee3], 0
// asm:   0x5e36675: je 0x5e3687c
// asm:   0x5e367ce: cmp byte ptr [rip + 0x1711d83], 0
// asm:   0x5e367d5: je 0x5e36831
// asm:   0x5e36868: jmp 0x5e36801
// asm:   0x5e368bd: jmp 0x5e366aa

void Anticheat_ModeratorManager___c__DisplayClass106_0___SendBatchRoomRemove_b__0
               (Anticheat_ModeratorManager___c__DisplayClass106_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  bool bVar4;
  Il2CppObject *obj;
  Il2CppObject *pIVar5;
  int *piVar6;
  System_String_o *pSVar7;
  System_String_array *values;
  int iVar8;
  int iVar9;
  int iVar10;
  int32_t iStack_3c;
  int32_t iStack_38;
  int iStack_34;
  
  if (Il2CppMethodInitialized_07548576 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&" failed.");
    il2cpp_codegen_initialize_runtime_metadata(&"Rate limited. Retry in ");
    il2cpp_codegen_initialize_runtime_metadata(&"Done: ");
    il2cpp_codegen_initialize_runtime_metadata(&" processed, ");
    il2cpp_codegen_initialize_runtime_metadata(&"s.");
    Il2CppMethodInitialized_07548576 = '\x01';
  }
  iStack_38 = 0;
  iStack_3c = 0;
  if (data != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                      (data,1,(MethodInfo_49C86C0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    if (bVar4) {
      obj = System_Collections_Generic_Dictionary_byte__object___get_Item
                      (data,1,(MethodInfo_49C83F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
      if (obj == (Il2CppObject *)0x0) goto label_05e368c2;
      if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_075566f0 + 0x40)) goto label_05e368c7;
      il2cpp_vm_Object_Unbox(obj);
    }
    bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                      (data,2,(MethodInfo_49C86C0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    if (bVar4) {
      pIVar5 = System_Collections_Generic_Dictionary_byte__object___get_Item
                         (data,2,(MethodInfo_49C83F0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
      if (pIVar5 == (Il2CppObject *)0x0) {
        pIVar5 = (Il2CppObject *)0x0;
      }
      else if (pIVar5->klass != g_data_07556758) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar5);
      }
    }
    else {
      pIVar5 = *(Il2CppObject **)g_data_07556758->static_fields;
    }
    bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                      (data,3,(MethodInfo_49C86C0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    iVar10 = 0;
    iVar9 = 0;
    if (bVar4) {
      obj = System_Collections_Generic_Dictionary_byte__object___get_Item
                      (data,3,(MethodInfo_49C83F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
      if (obj == (Il2CppObject *)0x0) goto label_05e368c2;
      if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) goto label_05e368c7;
      piVar6 = il2cpp_vm_Object_Unbox(obj);
      iVar9 = *piVar6;
    }
    iStack_34 = iVar9;
    bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                      (data,4,(MethodInfo_49C86C0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    if (bVar4) {
      obj = System_Collections_Generic_Dictionary_byte__object___get_Item
                      (data,4,(MethodInfo_49C83F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
      if (obj == (Il2CppObject *)0x0) goto label_05e368c2;
      if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) goto label_05e368c7;
      piVar6 = il2cpp_vm_Object_Unbox(obj);
      iVar10 = *piVar6;
    }
    iStack_38 = iVar10;
    bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                      (data,5,(MethodInfo_49C86C0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    iVar8 = 0;
    if (bVar4) {
      obj = System_Collections_Generic_Dictionary_byte__object___get_Item
                      (data,5,(MethodInfo_49C83F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
      if (obj == (Il2CppObject *)0x0) goto label_05e368c2;
      if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
label_05e368c7:
        il2cpp_codegen_raise_invalid_cast_exception(obj);
      }
      piVar6 = il2cpp_vm_Object_Unbox(obj);
      iVar8 = *piVar6;
    }
    iStack_3c = iVar8;
    if (0 < iVar9) {
      pSVar7 = System_Int32__ToString(&iStack_34,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat_5301f10
                         ("Rate limited. Retry in ",pSVar7,"s.",(MethodInfo *)0x0);
label_05e367b4:
      pSVar2 = (__this->fields).localStatus;
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      if (Il2CppMethodInitialized_07548558 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
        Il2CppMethodInitialized_07548558 = '\x01';
        uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = *(uint32_t *)((long)TypeInfo_Anticheat_ModeratorManager + 0xe4);
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
        pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
      }
      else {
        pSVar3 = *(System_Action_string__o **)
                  ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
      }
      if (pSVar3 != (System_Action_string__o *)0x0) {
        (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pSVar7,(pSVar3->fields).method);
      }
      if (pSVar2 != (System_Action_string__o *)0x0) {
        (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar7,(pSVar2->fields).method);
      }
      return;
    }
    if ((iVar10 < 1) && (iVar8 < 1)) {
      pSVar2 = (__this->fields).localStatus;
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      if (Il2CppMethodInitialized_07548558 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
        Il2CppMethodInitialized_07548558 = '\x01';
        uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = *(uint32_t *)((long)TypeInfo_Anticheat_ModeratorManager + 0xe4);
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
        pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
      }
      else {
        pSVar3 = *(System_Action_string__o **)
                  ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
      }
      if (pSVar3 != (System_Action_string__o *)0x0) {
        (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pIVar5,(pSVar3->fields).method);
      }
      if (pSVar2 == (System_Action_string__o *)0x0) {
        return;
      }
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pIVar5,(pSVar2->fields).method);
      return;
    }
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = "Done: ";
        Il2CppCodeGenWriteBarrier(values->m_Items);
        pSVar7 = System_Int32__ToString(&iStack_38,(MethodInfo *)0x0);
        if ((values->max_length & 0xfffffffe) != 0) {
          values->m_Items[1] = pSVar7;
          Il2CppCodeGenWriteBarrier(values->m_Items + 1);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = " processed, ";
            Il2CppCodeGenWriteBarrier(values->m_Items + 2);
            pSVar7 = System_Int32__ToString(&iStack_3c,(MethodInfo *)0x0);
            if ((values->max_length & 0xfffffffc) != 0) {
              values->m_Items[3] = pSVar7;
              Il2CppCodeGenWriteBarrier(values->m_Items + 3);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = " failed.";
                Il2CppCodeGenWriteBarrier(values->m_Items + 4);
                pSVar7 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
                goto label_05e367b4;
              }
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_05e368c2:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager.<>c__DisplayClass106_0$$<SendBatchRoomRemove>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass106_0___SendBatchRoomRemove_b__1 (Anticheat_ModeratorManager___c__DisplayClass106_0_o* __this, const MethodInfo* method);
// 0x5e368e0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e36927: lea rax, [rip + 0x14b04e2]  ; "Request timed out"
// asm:   0x5e3692e: mov r14, qword ptr [rax]
// asm:   0x5e36931: cmp byte ptr [rip + 0x1711c20], 0
// asm:   0x5e36938: je 0x5e36997
// asm:   0x5e369ce: jmp 0x5e36964

void Anticheat_ModeratorManager___c__DisplayClass106_0___SendBatchRoomRemove_b__1
               (Anticheat_ModeratorManager___c__DisplayClass106_0_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07548577 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Request timed out");
    Il2CppMethodInitialized_07548577 = '\x01';
  }
  pSVar2 = (__this->fields).localStatus;
  pSVar4 = "Request timed out";
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar4 = "Request timed out";
  }
  "Request timed out" = pSVar4;
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    pSVar3 = *(System_Action_string__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pSVar4,(pSVar3->fields).method);
  }
  if (pSVar2 == (System_Action_string__o *)0x0) {
    return;
  }
  (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar4,(pSVar2->fields).method);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass85_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass85_0___ctor (Anticheat_ModeratorManager___c__DisplayClass85_0_o* __this, const MethodInfo* method);
// 0x5e32750

void Anticheat_ModeratorManager___c__DisplayClass85_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass85_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass85_0$$<RequestPlayerList>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass85_0___RequestPlayerList_b__0 (Anticheat_ModeratorManager___c__DisplayClass85_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x5e369e0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e36a3a: cmp byte ptr [rip + 0x1711b17], 0
// asm:   0x5e36a41: je 0x5e36aa2
// asm:   0x5e36adb: jmp 0x5e36a6e

void Anticheat_ModeratorManager___c__DisplayClass85_0___RequestPlayerList_b__0
               (Anticheat_ModeratorManager___c__DisplayClass85_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  MethodInfo *method_00;
  MethodInfo *pMVar4;
  
  method_00 = (MethodInfo *)data;
  if (Il2CppMethodInitialized_07548578 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548578 = '\x01';
  }
  pMVar4 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar2 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    pSVar3 = *(System_Action_string__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    method_00 = pMVar4;
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pMVar4,(pSVar3->fields).method);
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pMVar4,(pSVar2->fields).method);
    method_00 = pMVar4;
  }
  Anticheat_ModeratorManager__PopulatePlayerList(data,method_00);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass85_0$$<RequestPlayerList>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass85_0___RequestPlayerList_b__1 (Anticheat_ModeratorManager___c__DisplayClass85_0_o* __this, const MethodInfo* method);
// 0x5e36ae0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e36b27: lea rax, [rip + 0x14b02e2]  ; "Request timed out"
// asm:   0x5e36b2e: mov r14, qword ptr [rax]
// asm:   0x5e36b31: cmp byte ptr [rip + 0x1711a20], 0
// asm:   0x5e36b38: je 0x5e36b97
// asm:   0x5e36bce: jmp 0x5e36b64

void Anticheat_ModeratorManager___c__DisplayClass85_0___RequestPlayerList_b__1
               (Anticheat_ModeratorManager___c__DisplayClass85_0_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07548579 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Request timed out");
    Il2CppMethodInitialized_07548579 = '\x01';
  }
  pSVar2 = (__this->fields).localStatus;
  pSVar4 = "Request timed out";
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar4 = "Request timed out";
  }
  "Request timed out" = pSVar4;
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    pSVar3 = *(System_Action_string__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pSVar4,(pSVar3->fields).method);
  }
  if (pSVar2 == (System_Action_string__o *)0x0) {
    return;
  }
  (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar4,(pSVar2->fields).method);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass89_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass89_0___ctor (Anticheat_ModeratorManager___c__DisplayClass89_0_o* __this, const MethodInfo* method);
// 0x5e32cd0

void Anticheat_ModeratorManager___c__DisplayClass89_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass89_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass89_0$$<KickPlayer>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass89_0___KickPlayer_b__0 (Anticheat_ModeratorManager___c__DisplayClass89_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x5e36be0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e36d15: cmp byte ptr [rip + 0x171183c], 0
// asm:   0x5e36d1c: je 0x5e36d99
// asm:   0x5e36dda: jmp 0x5e36d4d

void Anticheat_ModeratorManager___c__DisplayClass89_0___KickPlayer_b__0
               (Anticheat_ModeratorManager___c__DisplayClass89_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  bool bVar4;
  Il2CppObject *obj;
  char *pcVar5;
  Il2CppClass *pIVar6;
  Il2CppClass *method_00;
  char cVar7;
  
  if (Il2CppMethodInitialized_0754857a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_0754857a = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_05e36de8:
    ThrowNullReferenceException();
  }
  bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,1,(MethodInfo_49C86C0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  cVar7 = '\0';
  if (bVar4) {
    obj = System_Collections_Generic_Dictionary_byte__object___get_Item
                    (data,1,(MethodInfo_49C83F0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (obj == (Il2CppObject *)0x0) goto label_05e36de8;
    if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_075566f0 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception(obj);
    }
    pcVar5 = il2cpp_vm_Object_Unbox(obj);
    cVar7 = *pcVar5;
  }
  method_00 = (Il2CppClass *)0x2;
  bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,2,(MethodInfo_49C86C0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar4) {
    method_00 = (Il2CppClass *)0x2;
    pIVar6 = (Il2CppClass *)
             System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,2,(MethodInfo_49C83F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (pIVar6 == (Il2CppClass *)0x0) {
      pIVar6 = (Il2CppClass *)0x0;
    }
    else {
      method_00 = g_data_07556758;
      if ((pIVar6->_1).image != g_data_07556758) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar6);
      }
    }
  }
  else {
    pIVar6 = *(Il2CppClass **)g_data_07556758->static_fields;
  }
  pSVar2 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    pSVar3 = *(System_Action_string__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    method_00 = pIVar6;
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pIVar6,(pSVar3->fields).method);
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pIVar6,(pSVar2->fields).method);
    method_00 = pIVar6;
  }
  if (cVar7 == '\0') {
    return;
  }
  pSVar2 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RequestPlayerList(pSVar2,(MethodInfo *)method_00);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass89_0$$<KickPlayer>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass89_0___KickPlayer_b__1 (Anticheat_ModeratorManager___c__DisplayClass89_0_o* __this, const MethodInfo* method);
// 0x5e36e00
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e36e47: lea rax, [rip + 0x14affc2]  ; "Request timed out"
// asm:   0x5e36e4e: mov r14, qword ptr [rax]
// asm:   0x5e36e51: cmp byte ptr [rip + 0x1711700], 0
// asm:   0x5e36e58: je 0x5e36eb7
// asm:   0x5e36eee: jmp 0x5e36e84

void Anticheat_ModeratorManager___c__DisplayClass89_0___KickPlayer_b__1
               (Anticheat_ModeratorManager___c__DisplayClass89_0_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_0754857b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Request timed out");
    Il2CppMethodInitialized_0754857b = '\x01';
  }
  pSVar2 = (__this->fields).localStatus;
  pSVar4 = "Request timed out";
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar4 = "Request timed out";
  }
  "Request timed out" = pSVar4;
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    pSVar3 = *(System_Action_string__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pSVar4,(pSVar3->fields).method);
  }
  if (pSVar2 == (System_Action_string__o *)0x0) {
    return;
  }
  (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar4,(pSVar2->fields).method);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass90_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass90_0___ctor (Anticheat_ModeratorManager___c__DisplayClass90_0_o* __this, const MethodInfo* method);
// 0x5e33050

void Anticheat_ModeratorManager___c__DisplayClass90_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass90_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass90_0$$<RoomBan>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass90_0___RoomBan_b__0 (Anticheat_ModeratorManager___c__DisplayClass90_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x5e36f00
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e37035: cmp byte ptr [rip + 0x171151c], 0
// asm:   0x5e3703c: je 0x5e370b9
// asm:   0x5e370fa: jmp 0x5e3706d

void Anticheat_ModeratorManager___c__DisplayClass90_0___RoomBan_b__0
               (Anticheat_ModeratorManager___c__DisplayClass90_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  bool bVar4;
  Il2CppObject *obj;
  char *pcVar5;
  Il2CppClass *pIVar6;
  Il2CppClass *method_00;
  char cVar7;
  
  if (Il2CppMethodInitialized_0754857c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_0754857c = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_05e37108:
    ThrowNullReferenceException();
  }
  bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,1,(MethodInfo_49C86C0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  cVar7 = '\0';
  if (bVar4) {
    obj = System_Collections_Generic_Dictionary_byte__object___get_Item
                    (data,1,(MethodInfo_49C83F0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (obj == (Il2CppObject *)0x0) goto label_05e37108;
    if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_075566f0 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception(obj);
    }
    pcVar5 = il2cpp_vm_Object_Unbox(obj);
    cVar7 = *pcVar5;
  }
  method_00 = (Il2CppClass *)0x2;
  bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,2,(MethodInfo_49C86C0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar4) {
    method_00 = (Il2CppClass *)0x2;
    pIVar6 = (Il2CppClass *)
             System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,2,(MethodInfo_49C83F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (pIVar6 == (Il2CppClass *)0x0) {
      pIVar6 = (Il2CppClass *)0x0;
    }
    else {
      method_00 = g_data_07556758;
      if ((pIVar6->_1).image != g_data_07556758) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar6);
      }
    }
  }
  else {
    pIVar6 = *(Il2CppClass **)g_data_07556758->static_fields;
  }
  pSVar2 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    pSVar3 = *(System_Action_string__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    method_00 = pIVar6;
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pIVar6,(pSVar3->fields).method);
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pIVar6,(pSVar2->fields).method);
    method_00 = pIVar6;
  }
  if (cVar7 == '\0') {
    return;
  }
  pSVar2 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RequestPlayerList(pSVar2,(MethodInfo *)method_00);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass90_0$$<RoomBan>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass90_0___RoomBan_b__1 (Anticheat_ModeratorManager___c__DisplayClass90_0_o* __this, const MethodInfo* method);
// 0x5e37120
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e37167: lea rax, [rip + 0x14afca2]  ; "Request timed out"
// asm:   0x5e3716e: mov r14, qword ptr [rax]
// asm:   0x5e37171: cmp byte ptr [rip + 0x17113e0], 0
// asm:   0x5e37178: je 0x5e371d7
// asm:   0x5e3720e: jmp 0x5e371a4

void Anticheat_ModeratorManager___c__DisplayClass90_0___RoomBan_b__1
               (Anticheat_ModeratorManager___c__DisplayClass90_0_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_0754857d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Request timed out");
    Il2CppMethodInitialized_0754857d = '\x01';
  }
  pSVar2 = (__this->fields).localStatus;
  pSVar4 = "Request timed out";
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar4 = "Request timed out";
  }
  "Request timed out" = pSVar4;
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    pSVar3 = *(System_Action_string__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pSVar4,(pSVar3->fields).method);
  }
  if (pSVar2 == (System_Action_string__o *)0x0) {
    return;
  }
  (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar4,(pSVar2->fields).method);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass91_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass91_0___ctor (Anticheat_ModeratorManager___c__DisplayClass91_0_o* __this, const MethodInfo* method);
// 0x5e335d0

void Anticheat_ModeratorManager___c__DisplayClass91_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass91_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass91_0$$<RoomBanPlayerEntry>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass91_0___RoomBanPlayerEntry_b__0 (Anticheat_ModeratorManager___c__DisplayClass91_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x5e37220
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e37355: cmp byte ptr [rip + 0x17111fc], 0
// asm:   0x5e3735c: je 0x5e373d9
// asm:   0x5e3741a: jmp 0x5e3738d

void Anticheat_ModeratorManager___c__DisplayClass91_0___RoomBanPlayerEntry_b__0
               (Anticheat_ModeratorManager___c__DisplayClass91_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  bool bVar4;
  Il2CppObject *obj;
  char *pcVar5;
  Il2CppClass *pIVar6;
  Il2CppClass *method_00;
  char cVar7;
  
  if (Il2CppMethodInitialized_0754857e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_0754857e = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_05e37428:
    ThrowNullReferenceException();
  }
  bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,1,(MethodInfo_49C86C0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  cVar7 = '\0';
  if (bVar4) {
    obj = System_Collections_Generic_Dictionary_byte__object___get_Item
                    (data,1,(MethodInfo_49C83F0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (obj == (Il2CppObject *)0x0) goto label_05e37428;
    if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_075566f0 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception(obj);
    }
    pcVar5 = il2cpp_vm_Object_Unbox(obj);
    cVar7 = *pcVar5;
  }
  method_00 = (Il2CppClass *)0x2;
  bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,2,(MethodInfo_49C86C0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar4) {
    method_00 = (Il2CppClass *)0x2;
    pIVar6 = (Il2CppClass *)
             System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,2,(MethodInfo_49C83F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (pIVar6 == (Il2CppClass *)0x0) {
      pIVar6 = (Il2CppClass *)0x0;
    }
    else {
      method_00 = g_data_07556758;
      if ((pIVar6->_1).image != g_data_07556758) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar6);
      }
    }
  }
  else {
    pIVar6 = *(Il2CppClass **)g_data_07556758->static_fields;
  }
  pSVar2 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    pSVar3 = *(System_Action_string__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    method_00 = pIVar6;
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pIVar6,(pSVar3->fields).method);
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pIVar6,(pSVar2->fields).method);
    method_00 = pIVar6;
  }
  if (cVar7 == '\0') {
    return;
  }
  pSVar2 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RequestPlayerList(pSVar2,(MethodInfo *)method_00);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass91_0$$<RoomBanPlayerEntry>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass91_0___RoomBanPlayerEntry_b__1 (Anticheat_ModeratorManager___c__DisplayClass91_0_o* __this, const MethodInfo* method);
// 0x5e37440
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e37487: lea rax, [rip + 0x14af982]  ; "Request timed out"
// asm:   0x5e3748e: mov r14, qword ptr [rax]
// asm:   0x5e37491: cmp byte ptr [rip + 0x17110c0], 0
// asm:   0x5e37498: je 0x5e374f7
// asm:   0x5e3752e: jmp 0x5e374c4

void Anticheat_ModeratorManager___c__DisplayClass91_0___RoomBanPlayerEntry_b__1
               (Anticheat_ModeratorManager___c__DisplayClass91_0_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_0754857f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Request timed out");
    Il2CppMethodInitialized_0754857f = '\x01';
  }
  pSVar2 = (__this->fields).localStatus;
  pSVar4 = "Request timed out";
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar4 = "Request timed out";
  }
  "Request timed out" = pSVar4;
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    pSVar3 = *(System_Action_string__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pSVar4,(pSVar3->fields).method);
  }
  if (pSVar2 == (System_Action_string__o *)0x0) {
    return;
  }
  (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar4,(pSVar2->fields).method);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass92_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass92_0___ctor (Anticheat_ModeratorManager___c__DisplayClass92_0_o* __this, const MethodInfo* method);
// 0x5e33a10

void Anticheat_ModeratorManager___c__DisplayClass92_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass92_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass92_0$$<RoomUnban>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass92_0___RoomUnban_b__0 (Anticheat_ModeratorManager___c__DisplayClass92_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x5e37540
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e37679: cmp byte ptr [rip + 0x1710ed8], 0
// asm:   0x5e37680: je 0x5e3772d
// asm:   0x5e376e6: cmp byte ptr [rip + 0x1710e77], 0
// asm:   0x5e376ed: je 0x5e3778e
// asm:   0x5e3776e: jmp 0x5e376b5

void Anticheat_ModeratorManager___c__DisplayClass92_0___RoomUnban_b__0
               (Anticheat_ModeratorManager___c__DisplayClass92_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  bool bVar4;
  Il2CppObject *pIVar5;
  char *pcVar6;
  Il2CppClass *in_RCX;
  char cVar7;
  
  if (Il2CppMethodInitialized_07548580 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548580 = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_05e377bc:
    ThrowNullReferenceException();
  }
  bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,1,(MethodInfo_49C86C0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  cVar7 = '\0';
  if (bVar4) {
    pIVar5 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,1,(MethodInfo_49C83F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (pIVar5 == (Il2CppObject *)0x0) goto label_05e377bc;
    in_RCX = (pIVar5->klass->_1).element_class;
    if (in_RCX != *(Il2CppClass **)(g_data_075566f0 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar5);
    }
    pcVar6 = il2cpp_vm_Object_Unbox(pIVar5);
    cVar7 = *pcVar6;
  }
  bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,2,(MethodInfo_49C86C0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar4) {
    pIVar5 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,2,(MethodInfo_49C83F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (pIVar5 == (Il2CppObject *)0x0) {
      pIVar5 = (Il2CppObject *)0x0;
    }
    else if (pIVar5->klass != g_data_07556758) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar5);
    }
  }
  else {
    pIVar5 = *(Il2CppObject **)g_data_07556758->static_fields;
  }
  pSVar2 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    pSVar3 = *(System_Action_string__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pIVar5,(pSVar3->fields).method);
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pIVar5,(pSVar2->fields).method);
  }
  if (cVar7 == '\0') {
    return;
  }
  pSVar2 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_07548564 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548564 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RequestRoomBanList_5d33a70(0,0x32,pSVar2,(MethodInfo *)in_RCX);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass92_0$$<RoomUnban>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass92_0___RoomUnban_b__1 (Anticheat_ModeratorManager___c__DisplayClass92_0_o* __this, const MethodInfo* method);
// 0x5e377d0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e37817: lea rax, [rip + 0x14af5f2]  ; "Request timed out"
// asm:   0x5e3781e: mov r14, qword ptr [rax]
// asm:   0x5e37821: cmp byte ptr [rip + 0x1710d30], 0
// asm:   0x5e37828: je 0x5e37887
// asm:   0x5e378be: jmp 0x5e37854

void Anticheat_ModeratorManager___c__DisplayClass92_0___RoomUnban_b__1
               (Anticheat_ModeratorManager___c__DisplayClass92_0_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07548581 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Request timed out");
    Il2CppMethodInitialized_07548581 = '\x01';
  }
  pSVar2 = (__this->fields).localStatus;
  pSVar4 = "Request timed out";
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar4 = "Request timed out";
  }
  "Request timed out" = pSVar4;
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    pSVar3 = *(System_Action_string__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pSVar4,(pSVar3->fields).method);
  }
  if (pSVar2 == (System_Action_string__o *)0x0) {
    return;
  }
  (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar4,(pSVar2->fields).method);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass94_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass94_0___ctor (Anticheat_ModeratorManager___c__DisplayClass94_0_o* __this, const MethodInfo* method);
// 0x5e33d60

void Anticheat_ModeratorManager___c__DisplayClass94_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass94_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass94_0$$<RequestRoomBanList>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass94_0___RequestRoomBanList_b__0 (Anticheat_ModeratorManager___c__DisplayClass94_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x5e378d0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e3793d: cmp byte ptr [rip + 0x1710c14], 0
// asm:   0x5e37944: je 0x5e37a54
// asm:   0x5e37a95: jmp 0x5e37979

void Anticheat_ModeratorManager___c__DisplayClass94_0___RequestRoomBanList_b__0
               (Anticheat_ModeratorManager___c__DisplayClass94_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  uint32_t uVar1;
  undefined8 uVar2;
  System_Action_string__o *pSVar3;
  System_Action_string__o *pSVar4;
  System_Action_RoomBanPage__o *pSVar5;
  int32_t iVar6;
  int32_t iVar7;
  System_Collections_Generic_Dictionary_byte__object__array *entries;
  Anticheat_RoomBanEntry_array *pAVar8;
  Anticheat_RoomBanPage_o *__this_00;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07548582 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_RoomBanPage);
    Il2CppMethodInitialized_07548582 = '\x01';
  }
  uVar2 = **(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar3 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar4 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    pSVar4 = *(System_Action_string__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
  }
  if (pSVar4 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar4->fields).invoke_impl)((pSVar4->fields).method_code,uVar2,(pSVar4->fields).method);
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,uVar2,(pSVar3->fields).method);
  }
  iVar6 = Anticheat_ModeratorManager__ReadInt(data,1,0,in_RCX);
  iVar7 = Anticheat_ModeratorManager__ReadInt(data,2,-1,in_RCX);
  method_01 = (MethodInfo *)0x3;
  entries = Anticheat_ModeratorManager__GetResponseEntries(data,3,method_00);
  pAVar8 = Anticheat_ModeratorManager__ParseRoomBanEntries(entries,method_01);
  pSVar5 = TypeInfo_Anticheat_ModeratorManager->static_fields->RoomBanListReceived;
  if (pSVar5 == (System_Action_RoomBanPage__o *)0x0) {
    return;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_RoomBanPage);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Anticheat_RoomBanPage_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).Count = iVar6;
  (__this_00->fields).EndIndex = iVar7;
  (__this_00->fields).Entries = pAVar8;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Entries);
  (*(code *)(pSVar5->fields).invoke_impl)((pSVar5->fields).method_code,__this_00,(pSVar5->fields).method);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass94_0$$<RequestRoomBanList>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass94_0___RequestRoomBanList_b__1 (Anticheat_ModeratorManager___c__DisplayClass94_0_o* __this, const MethodInfo* method);
// 0x5e37ac0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e37b07: lea rax, [rip + 0x14af302]  ; "Request timed out"
// asm:   0x5e37b0e: mov r14, qword ptr [rax]
// asm:   0x5e37b11: cmp byte ptr [rip + 0x1710a40], 0
// asm:   0x5e37b18: je 0x5e37b77
// asm:   0x5e37bae: jmp 0x5e37b44

void Anticheat_ModeratorManager___c__DisplayClass94_0___RequestRoomBanList_b__1
               (Anticheat_ModeratorManager___c__DisplayClass94_0_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07548583 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Request timed out");
    Il2CppMethodInitialized_07548583 = '\x01';
  }
  pSVar2 = (__this->fields).localStatus;
  pSVar4 = "Request timed out";
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar4 = "Request timed out";
  }
  "Request timed out" = pSVar4;
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    pSVar3 = *(System_Action_string__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pSVar4,(pSVar3->fields).method);
  }
  if (pSVar2 == (System_Action_string__o *)0x0) {
    return;
  }
  (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar4,(pSVar2->fields).method);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass96_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass96_0___ctor (Anticheat_ModeratorManager___c__DisplayClass96_0_o* __this, const MethodInfo* method);
// 0x5e346c0

void Anticheat_ModeratorManager___c__DisplayClass96_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass96_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass96_0$$<RegionBan>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass96_0___RegionBan_b__0 (Anticheat_ModeratorManager___c__DisplayClass96_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x5e37bc0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e37cf9: cmp byte ptr [rip + 0x1710858], 0
// asm:   0x5e37d00: je 0x5e37dad
// asm:   0x5e37d66: cmp byte ptr [rip + 0x17107fd], 0
// asm:   0x5e37d6d: je 0x5e37e0e
// asm:   0x5e37dee: jmp 0x5e37d35

void Anticheat_ModeratorManager___c__DisplayClass96_0___RegionBan_b__0
               (Anticheat_ModeratorManager___c__DisplayClass96_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  bool bVar4;
  Il2CppObject *pIVar5;
  char *pcVar6;
  Il2CppClass *in_RCX;
  char cVar7;
  
  if (Il2CppMethodInitialized_07548584 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548584 = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_05e37e3c:
    ThrowNullReferenceException();
  }
  bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,1,(MethodInfo_49C86C0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  cVar7 = '\0';
  if (bVar4) {
    pIVar5 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,1,(MethodInfo_49C83F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (pIVar5 == (Il2CppObject *)0x0) goto label_05e37e3c;
    in_RCX = (pIVar5->klass->_1).element_class;
    if (in_RCX != *(Il2CppClass **)(g_data_075566f0 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar5);
    }
    pcVar6 = il2cpp_vm_Object_Unbox(pIVar5);
    cVar7 = *pcVar6;
  }
  bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,2,(MethodInfo_49C86C0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar4) {
    pIVar5 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,2,(MethodInfo_49C83F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (pIVar5 == (Il2CppObject *)0x0) {
      pIVar5 = (Il2CppObject *)0x0;
    }
    else if (pIVar5->klass != g_data_07556758) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar5);
    }
  }
  else {
    pIVar5 = *(Il2CppObject **)g_data_07556758->static_fields;
  }
  pSVar2 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    pSVar3 = *(System_Action_string__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pIVar5,(pSVar3->fields).method);
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pIVar5,(pSVar2->fields).method);
  }
  if (cVar7 == '\0') {
    return;
  }
  pSVar2 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_0754856a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_0754856a = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RequestRegionBanList_5d34ff0(0,0x32,pSVar2,(MethodInfo *)in_RCX);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass96_0$$<RegionBan>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass96_0___RegionBan_b__1 (Anticheat_ModeratorManager___c__DisplayClass96_0_o* __this, const MethodInfo* method);
// 0x5e37e50
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e37e97: lea rax, [rip + 0x14aef72]  ; "Request timed out"
// asm:   0x5e37e9e: mov r14, qword ptr [rax]
// asm:   0x5e37ea1: cmp byte ptr [rip + 0x17106b0], 0
// asm:   0x5e37ea8: je 0x5e37f07
// asm:   0x5e37f3e: jmp 0x5e37ed4

void Anticheat_ModeratorManager___c__DisplayClass96_0___RegionBan_b__1
               (Anticheat_ModeratorManager___c__DisplayClass96_0_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07548585 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Request timed out");
    Il2CppMethodInitialized_07548585 = '\x01';
  }
  pSVar2 = (__this->fields).localStatus;
  pSVar4 = "Request timed out";
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar4 = "Request timed out";
  }
  "Request timed out" = pSVar4;
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    pSVar3 = *(System_Action_string__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pSVar4,(pSVar3->fields).method);
  }
  if (pSVar2 == (System_Action_string__o *)0x0) {
    return;
  }
  (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar4,(pSVar2->fields).method);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass97_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass97_0___ctor (Anticheat_ModeratorManager___c__DisplayClass97_0_o* __this, const MethodInfo* method);
// 0x5e34c40

void Anticheat_ModeratorManager___c__DisplayClass97_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass97_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass97_0$$<RegionBanPlayerEntry>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass97_0___RegionBanPlayerEntry_b__0 (Anticheat_ModeratorManager___c__DisplayClass97_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x5e37f50
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e38089: cmp byte ptr [rip + 0x17104c8], 0
// asm:   0x5e38090: je 0x5e3813d
// asm:   0x5e380f6: cmp byte ptr [rip + 0x171046d], 0
// asm:   0x5e380fd: je 0x5e3819e
// asm:   0x5e3817e: jmp 0x5e380c5

void Anticheat_ModeratorManager___c__DisplayClass97_0___RegionBanPlayerEntry_b__0
               (Anticheat_ModeratorManager___c__DisplayClass97_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  bool bVar4;
  Il2CppObject *pIVar5;
  char *pcVar6;
  Il2CppClass *in_RCX;
  char cVar7;
  
  if (Il2CppMethodInitialized_07548586 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548586 = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_05e381cc:
    ThrowNullReferenceException();
  }
  bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,1,(MethodInfo_49C86C0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  cVar7 = '\0';
  if (bVar4) {
    pIVar5 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,1,(MethodInfo_49C83F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (pIVar5 == (Il2CppObject *)0x0) goto label_05e381cc;
    in_RCX = (pIVar5->klass->_1).element_class;
    if (in_RCX != *(Il2CppClass **)(g_data_075566f0 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar5);
    }
    pcVar6 = il2cpp_vm_Object_Unbox(pIVar5);
    cVar7 = *pcVar6;
  }
  bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,2,(MethodInfo_49C86C0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar4) {
    pIVar5 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,2,(MethodInfo_49C83F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (pIVar5 == (Il2CppObject *)0x0) {
      pIVar5 = (Il2CppObject *)0x0;
    }
    else if (pIVar5->klass != g_data_07556758) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar5);
    }
  }
  else {
    pIVar5 = *(Il2CppObject **)g_data_07556758->static_fields;
  }
  pSVar2 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    pSVar3 = *(System_Action_string__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pIVar5,(pSVar3->fields).method);
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pIVar5,(pSVar2->fields).method);
  }
  if (cVar7 == '\0') {
    return;
  }
  pSVar2 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_0754856a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_0754856a = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RequestRegionBanList_5d34ff0(0,0x32,pSVar2,(MethodInfo *)in_RCX);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass97_0$$<RegionBanPlayerEntry>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass97_0___RegionBanPlayerEntry_b__1 (Anticheat_ModeratorManager___c__DisplayClass97_0_o* __this, const MethodInfo* method);
// 0x5e381e0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e38227: lea rax, [rip + 0x14aebe2]  ; "Request timed out"
// asm:   0x5e3822e: mov r14, qword ptr [rax]
// asm:   0x5e38231: cmp byte ptr [rip + 0x1710320], 0
// asm:   0x5e38238: je 0x5e38297
// asm:   0x5e382ce: jmp 0x5e38264

void Anticheat_ModeratorManager___c__DisplayClass97_0___RegionBanPlayerEntry_b__1
               (Anticheat_ModeratorManager___c__DisplayClass97_0_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07548587 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Request timed out");
    Il2CppMethodInitialized_07548587 = '\x01';
  }
  pSVar2 = (__this->fields).localStatus;
  pSVar4 = "Request timed out";
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar4 = "Request timed out";
  }
  "Request timed out" = pSVar4;
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    pSVar3 = *(System_Action_string__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pSVar4,(pSVar3->fields).method);
  }
  if (pSVar2 == (System_Action_string__o *)0x0) {
    return;
  }
  (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar4,(pSVar2->fields).method);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass98_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass98_0___ctor (Anticheat_ModeratorManager___c__DisplayClass98_0_o* __this, const MethodInfo* method);
// 0x5e34f90

void Anticheat_ModeratorManager___c__DisplayClass98_0___ctor
               (Anticheat_ModeratorManager___c__DisplayClass98_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass98_0$$<RegionUnban>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass98_0___RegionUnban_b__0 (Anticheat_ModeratorManager___c__DisplayClass98_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x5e382e0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e38419: cmp byte ptr [rip + 0x1710138], 0
// asm:   0x5e38420: je 0x5e384cd
// asm:   0x5e38486: cmp byte ptr [rip + 0x17100dd], 0
// asm:   0x5e3848d: je 0x5e3852e
// asm:   0x5e3850e: jmp 0x5e38455

void Anticheat_ModeratorManager___c__DisplayClass98_0___RegionUnban_b__0
               (Anticheat_ModeratorManager___c__DisplayClass98_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  bool bVar4;
  Il2CppObject *pIVar5;
  char *pcVar6;
  Il2CppClass *in_RCX;
  char cVar7;
  
  if (Il2CppMethodInitialized_07548588 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548588 = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_05e3855c:
    ThrowNullReferenceException();
  }
  bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,1,(MethodInfo_49C86C0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  cVar7 = '\0';
  if (bVar4) {
    pIVar5 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,1,(MethodInfo_49C83F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (pIVar5 == (Il2CppObject *)0x0) goto label_05e3855c;
    in_RCX = (pIVar5->klass->_1).element_class;
    if (in_RCX != *(Il2CppClass **)(g_data_075566f0 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar5);
    }
    pcVar6 = il2cpp_vm_Object_Unbox(pIVar5);
    cVar7 = *pcVar6;
  }
  bVar4 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,2,(MethodInfo_49C86C0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar4) {
    pIVar5 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,2,(MethodInfo_49C83F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (pIVar5 == (Il2CppObject *)0x0) {
      pIVar5 = (Il2CppObject *)0x0;
    }
    else if (pIVar5->klass != g_data_07556758) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar5);
    }
  }
  else {
    pIVar5 = *(Il2CppObject **)g_data_07556758->static_fields;
  }
  pSVar2 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    pSVar3 = *(System_Action_string__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pIVar5,(pSVar3->fields).method);
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pIVar5,(pSVar2->fields).method);
  }
  if (cVar7 == '\0') {
    return;
  }
  pSVar2 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_0754856a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_0754856a = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RequestRegionBanList_5d34ff0(0,0x32,pSVar2,(MethodInfo *)in_RCX);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass98_0$$<RegionUnban>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass98_0___RegionUnban_b__1 (Anticheat_ModeratorManager___c__DisplayClass98_0_o* __this, const MethodInfo* method);
// 0x5e38570
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e385b7: lea rax, [rip + 0x14ae852]  ; "Request timed out"
// asm:   0x5e385be: mov r14, qword ptr [rax]
// asm:   0x5e385c1: cmp byte ptr [rip + 0x170ff90], 0
// asm:   0x5e385c8: je 0x5e38627
// asm:   0x5e3865e: jmp 0x5e385f4

void Anticheat_ModeratorManager___c__DisplayClass98_0___RegionUnban_b__1
               (Anticheat_ModeratorManager___c__DisplayClass98_0_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07548589 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Request timed out");
    Il2CppMethodInitialized_07548589 = '\x01';
  }
  pSVar2 = (__this->fields).localStatus;
  pSVar4 = "Request timed out";
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar4 = "Request timed out";
  }
  "Request timed out" = pSVar4;
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    pSVar3 = *(System_Action_string__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pSVar4,(pSVar3->fields).method);
  }
  if (pSVar2 == (System_Action_string__o *)0x0) {
    return;
  }
  (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar4,(pSVar2->fields).method);
  return;
}


// Anticheat.ModeratorManager$$get_IsAuthenticated
// il2cpp: bool Anticheat_ModeratorManager__get_IsAuthenticated (const MethodInfo* method);
// 0x5e2ef00

bool Anticheat_ModeratorManager__get_IsAuthenticated(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07548539 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548539 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    return TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField;
  }
  return (bool)*(undefined1 *)((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 8);
}


// Anticheat.ModeratorManager$$set_IsAuthenticated
// il2cpp: void Anticheat_ModeratorManager__set_IsAuthenticated (bool value, const MethodInfo* method);
// 0x5e2ef70

void Anticheat_ModeratorManager__set_IsAuthenticated(bool value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754853a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_0754853a = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField = value;
  return;
}


// Anticheat.ModeratorManager$$get_AuthLevel
// il2cpp: int32_t Anticheat_ModeratorManager__get_AuthLevel (const MethodInfo* method);
// 0x5e2efc0

int32_t Anticheat_ModeratorManager__get_AuthLevel(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754853b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_0754853b = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    return TypeInfo_Anticheat_ModeratorManager->static_fields->_AuthLevel_k__BackingField;
  }
  return *(int32_t *)((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0xc);
}


// Anticheat.ModeratorManager$$set_AuthLevel
// il2cpp: void Anticheat_ModeratorManager__set_AuthLevel (int32_t value, const MethodInfo* method);
// 0x5e2f030

void Anticheat_ModeratorManager__set_AuthLevel(int32_t value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754853c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_0754853c = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  TypeInfo_Anticheat_ModeratorManager->static_fields->_AuthLevel_k__BackingField = value;
  return;
}


// Anticheat.ModeratorManager$$get_AuthUsername
// il2cpp: System_String_o* Anticheat_ModeratorManager__get_AuthUsername (const MethodInfo* method);
// 0x5e2f080

System_String_o * Anticheat_ModeratorManager__get_AuthUsername(MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_0754853d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_0754853d = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pSVar2 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
  }
  else {
    pSVar2 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
  }
  if (pSVar2 == (System_String_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  return pSVar2;
}


// Anticheat.ModeratorManager$$get_ActivePlayers
// il2cpp: System_Collections_Generic_Dictionary_int__PlayerEntry__o* Anticheat_ModeratorManager__get_ActivePlayers (const MethodInfo* method);
// 0x5e2f100

System_Collections_Generic_Dictionary_int__PlayerEntry__o *
Anticheat_ModeratorManager__get_ActivePlayers(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754853e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_0754853e = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    return TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
  }
  return *(System_Collections_Generic_Dictionary_int__PlayerEntry__o **)
          ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x10);
}


// Anticheat.ModeratorManager$$set_ActivePlayers
// il2cpp: void Anticheat_ModeratorManager__set_ActivePlayers (System_Collections_Generic_Dictionary_int__PlayerEntry__o* value, const MethodInfo* method);
// 0x5e2f170

void Anticheat_ModeratorManager__set_ActivePlayers
               (System_Collections_Generic_Dictionary_int__PlayerEntry__o *value,MethodInfo *method)

{
  Anticheat_ModeratorManager_StaticFields *pAVar1;
  
  if (Il2CppMethodInitialized_0754853f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_0754853f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pAVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields;
  pAVar1->_ActivePlayers_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&pAVar1->_ActivePlayers_k__BackingField);
  return;
}


// Anticheat.ModeratorManager$$get_PastPlayers
// il2cpp: System_Collections_Generic_List_PlayerEntry__o* Anticheat_ModeratorManager__get_PastPlayers (const MethodInfo* method);
// 0x5e2f1d0

System_Collections_Generic_List_PlayerEntry__o *
Anticheat_ModeratorManager__get_PastPlayers(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07548540 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548540 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    return TypeInfo_Anticheat_ModeratorManager->static_fields->_PastPlayers_k__BackingField;
  }
  return *(System_Collections_Generic_List_PlayerEntry__o **)
          ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x18);
}


// Anticheat.ModeratorManager$$set_PastPlayers
// il2cpp: void Anticheat_ModeratorManager__set_PastPlayers (System_Collections_Generic_List_PlayerEntry__o* value, const MethodInfo* method);
// 0x5e2f240

void Anticheat_ModeratorManager__set_PastPlayers
               (System_Collections_Generic_List_PlayerEntry__o *value,MethodInfo *method)

{
  Anticheat_ModeratorManager_StaticFields *pAVar1;
  
  if (Il2CppMethodInitialized_07548541 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548541 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pAVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields;
  pAVar1->_PastPlayers_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&pAVar1->_PastPlayers_k__BackingField);
  return;
}


// Anticheat.ModeratorManager$$add_AuthChanged
// il2cpp: void Anticheat_ModeratorManager__add_AuthChanged (System_Action_o* value, const MethodInfo* method);
// 0x5e2f2a0

void Anticheat_ModeratorManager__add_AuthChanged(System_Action_o *value,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Delegate_o *value_00;
  System_Action_o *a;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548542 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548542 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  a = TypeInfo_Anticheat_ModeratorManager->static_fields->AuthChanged;
  do {
    value_00 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((System_Action_c *)value_00->klass != TypeInfo_System_Action)) {
      il2cpp_codegen_raise_invalid_cast_exception(value_00);
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Anticheat_ModeratorManager->static_fields->AuthChanged,value_00,a);
    bVar2 = pSVar1 != a;
    a = pSVar1;
  } while (bVar2);
  return;
}


// Anticheat.ModeratorManager$$remove_AuthChanged
// il2cpp: void Anticheat_ModeratorManager__remove_AuthChanged (System_Action_o* value, const MethodInfo* method);
// 0x5e2f380

void Anticheat_ModeratorManager__remove_AuthChanged(System_Action_o *value,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Delegate_o *value_00;
  System_Action_o *source;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548543 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548543 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  source = TypeInfo_Anticheat_ModeratorManager->static_fields->AuthChanged;
  do {
    value_00 = System_Delegate__Remove
                         ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((System_Action_c *)value_00->klass != TypeInfo_System_Action)) {
      il2cpp_codegen_raise_invalid_cast_exception(value_00);
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Anticheat_ModeratorManager->static_fields->AuthChanged,value_00,source);
    bVar2 = pSVar1 != source;
    source = pSVar1;
  } while (bVar2);
  return;
}


// Anticheat.ModeratorManager$$add_PlayerListChanged
// il2cpp: void Anticheat_ModeratorManager__add_PlayerListChanged (System_Action_o* value, const MethodInfo* method);
// 0x5e2f460

void Anticheat_ModeratorManager__add_PlayerListChanged(System_Action_o *value,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Delegate_o *value_00;
  System_Action_o *a;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548544 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548544 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  a = TypeInfo_Anticheat_ModeratorManager->static_fields->PlayerListChanged;
  do {
    value_00 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((System_Action_c *)value_00->klass != TypeInfo_System_Action)) {
      il2cpp_codegen_raise_invalid_cast_exception(value_00);
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Anticheat_ModeratorManager->static_fields->PlayerListChanged,value_00,a);
    bVar2 = pSVar1 != a;
    a = pSVar1;
  } while (bVar2);
  return;
}


// Anticheat.ModeratorManager$$remove_PlayerListChanged
// il2cpp: void Anticheat_ModeratorManager__remove_PlayerListChanged (System_Action_o* value, const MethodInfo* method);
// 0x5e2f540

void Anticheat_ModeratorManager__remove_PlayerListChanged(System_Action_o *value,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Delegate_o *value_00;
  System_Action_o *source;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548545 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548545 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  source = TypeInfo_Anticheat_ModeratorManager->static_fields->PlayerListChanged;
  do {
    value_00 = System_Delegate__Remove
                         ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((System_Action_c *)value_00->klass != TypeInfo_System_Action)) {
      il2cpp_codegen_raise_invalid_cast_exception(value_00);
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Anticheat_ModeratorManager->static_fields->PlayerListChanged,value_00,source
                       );
    bVar2 = pSVar1 != source;
    source = pSVar1;
  } while (bVar2);
  return;
}


// Anticheat.ModeratorManager$$add_StatusMessage
// il2cpp: void Anticheat_ModeratorManager__add_StatusMessage (System_Action_string__o* value, const MethodInfo* method);
// 0x5e2f620

void Anticheat_ModeratorManager__add_StatusMessage(System_Action_string__o *value,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  System_Action_string__o *pSVar2;
  System_Delegate_o *obj;
  Il2CppObject *value_00;
  System_Action_string__o *a;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07548546 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548546 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  a = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  do {
    obj = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_string;
    value_00 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      value_00 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_string);
      if (value_00 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage,value_00,a);
    bVar3 = pSVar2 != a;
    a = pSVar2;
  } while (bVar3);
  return;
}


// Anticheat.ModeratorManager$$remove_StatusMessage
// il2cpp: void Anticheat_ModeratorManager__remove_StatusMessage (System_Action_string__o* value, const MethodInfo* method);
// 0x5e2f710

void Anticheat_ModeratorManager__remove_StatusMessage(System_Action_string__o *value,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  System_Action_string__o *pSVar2;
  System_Delegate_o *obj;
  Il2CppObject *value_00;
  System_Action_string__o *source;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07548547 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548547 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  source = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  do {
    obj = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_string;
    value_00 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      value_00 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_string);
      if (value_00 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage,value_00,source);
    bVar3 = pSVar2 != source;
    source = pSVar2;
  } while (bVar3);
  return;
}


// Anticheat.ModeratorManager$$add_RoomBanListReceived
// il2cpp: void Anticheat_ModeratorManager__add_RoomBanListReceived (System_Action_RoomBanPage__o* value, const MethodInfo* method);
// 0x5e2f800

void Anticheat_ModeratorManager__add_RoomBanListReceived
               (System_Action_RoomBanPage__o *value,MethodInfo *method)

{
  System_Action_RoomBanPage__c *pSVar1;
  System_Action_RoomBanPage__o *pSVar2;
  System_Delegate_o *obj;
  Il2CppObject *value_00;
  System_Action_RoomBanPage__o *a;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07548548 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_RoomBanPage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548548 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  a = TypeInfo_Anticheat_ModeratorManager->static_fields->RoomBanListReceived;
  do {
    obj = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_RoomBanPage;
    value_00 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      value_00 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_RoomBanPage);
      if (value_00 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Anticheat_ModeratorManager->static_fields->RoomBanListReceived,value_00,a);
    bVar3 = pSVar2 != a;
    a = pSVar2;
  } while (bVar3);
  return;
}


// Anticheat.ModeratorManager$$remove_RoomBanListReceived
// il2cpp: void Anticheat_ModeratorManager__remove_RoomBanListReceived (System_Action_RoomBanPage__o* value, const MethodInfo* method);
// 0x5e2f8f0

void Anticheat_ModeratorManager__remove_RoomBanListReceived
               (System_Action_RoomBanPage__o *value,MethodInfo *method)

{
  System_Action_RoomBanPage__c *pSVar1;
  System_Action_RoomBanPage__o *pSVar2;
  System_Delegate_o *obj;
  Il2CppObject *value_00;
  System_Action_RoomBanPage__o *source;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07548549 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_RoomBanPage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548549 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  source = TypeInfo_Anticheat_ModeratorManager->static_fields->RoomBanListReceived;
  do {
    obj = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_RoomBanPage;
    value_00 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      value_00 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_RoomBanPage);
      if (value_00 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Anticheat_ModeratorManager->static_fields->RoomBanListReceived,value_00,
                        source);
    bVar3 = pSVar2 != source;
    source = pSVar2;
  } while (bVar3);
  return;
}


// Anticheat.ModeratorManager$$add_RegionBanListReceived
// il2cpp: void Anticheat_ModeratorManager__add_RegionBanListReceived (System_Action_RegionBanPage__o* value, const MethodInfo* method);
// 0x5e2f9e0

void Anticheat_ModeratorManager__add_RegionBanListReceived
               (System_Action_RegionBanPage__o *value,MethodInfo *method)

{
  System_Action_RegionBanPage__c *pSVar1;
  System_Action_RegionBanPage__o *pSVar2;
  System_Delegate_o *obj;
  Il2CppObject *value_00;
  System_Action_RegionBanPage__o *a;
  bool bVar3;
  
  if (Il2CppMethodInitialized_0754854a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_RegionBanPage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_0754854a = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  a = TypeInfo_Anticheat_ModeratorManager->static_fields->RegionBanListReceived;
  do {
    obj = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_RegionBanPage;
    value_00 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      value_00 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_RegionBanPage);
      if (value_00 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Anticheat_ModeratorManager->static_fields->RegionBanListReceived,value_00,a)
    ;
    bVar3 = pSVar2 != a;
    a = pSVar2;
  } while (bVar3);
  return;
}


// Anticheat.ModeratorManager$$remove_RegionBanListReceived
// il2cpp: void Anticheat_ModeratorManager__remove_RegionBanListReceived (System_Action_RegionBanPage__o* value, const MethodInfo* method);
// 0x5e2fad0

void Anticheat_ModeratorManager__remove_RegionBanListReceived
               (System_Action_RegionBanPage__o *value,MethodInfo *method)

{
  System_Action_RegionBanPage__c *pSVar1;
  System_Action_RegionBanPage__o *pSVar2;
  System_Delegate_o *obj;
  Il2CppObject *value_00;
  System_Action_RegionBanPage__o *source;
  bool bVar3;
  
  if (Il2CppMethodInitialized_0754854b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_RegionBanPage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_0754854b = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  source = TypeInfo_Anticheat_ModeratorManager->static_fields->RegionBanListReceived;
  do {
    obj = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_RegionBanPage;
    value_00 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      value_00 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_RegionBanPage);
      if (value_00 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Anticheat_ModeratorManager->static_fields->RegionBanListReceived,value_00,
                        source);
    bVar3 = pSVar2 != source;
    source = pSVar2;
  } while (bVar3);
  return;
}


// Anticheat.ModeratorManager$$Init
// il2cpp: void Anticheat_ModeratorManager__Init (const MethodInfo* method);
// 0x5e2fbc0

void Anticheat_ModeratorManager__Init(MethodInfo *method)

{
  Anticheat_ModeratorManager_o *pAVar1;
  
  if (Il2CppMethodInitialized_0754854c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_ModeratorManager);
    Il2CppMethodInitialized_0754854c = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pAVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_Anticheat_ModeratorManager->static_fields->_instance,
                      (MethodInfo_3680650 *)
                      MethodInfo_Utility_SingletonFactory_CreateSingleton_ModeratorManager);
  TypeInfo_Anticheat_ModeratorManager->static_fields->_instance = pAVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Anticheat_ModeratorManager->static_fields->_instance);
  return;
}


// Anticheat.ModeratorManager$$OnEnable
// il2cpp: void Anticheat_ModeratorManager__OnEnable (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x5e2fc40

void Anticheat_ModeratorManager__OnEnable(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754854d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Anticheat_ModeratorManager_ClearAuth);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Anticheat_ModeratorManager_UpdateAuthFromRoles);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_0754854d = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  Photon_Pun_PhotonNetwork__AddCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (pSVar1,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Anticheat_ModeratorManager_UpdateAuthFromRoles,
             (MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  ApplicationManagers_AccountManager__add_OnLoggedIn(pSVar1,(MethodInfo *)0x0);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (pSVar1,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Anticheat_ModeratorManager_ClearAuth,
             (MethodInfo *)0x0);
  ApplicationManagers_AccountManager__add_OnLoggedOut(pSVar1,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager$$OnDisable
// il2cpp: void Anticheat_ModeratorManager__OnDisable (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x5e2fd40

void Anticheat_ModeratorManager__OnDisable(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754854e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Anticheat_ModeratorManager_ClearAuth);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Anticheat_ModeratorManager_UpdateAuthFromRoles);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_0754854e = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  Photon_Pun_PhotonNetwork__RemoveCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (pSVar1,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Anticheat_ModeratorManager_UpdateAuthFromRoles,
             (MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  ApplicationManagers_AccountManager__remove_OnLoggedIn(pSVar1,(MethodInfo *)0x0);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (pSVar1,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Anticheat_ModeratorManager_ClearAuth,
             (MethodInfo *)0x0);
  ApplicationManagers_AccountManager__remove_OnLoggedOut(pSVar1,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager$$Update
// il2cpp: void Anticheat_ModeratorManager__Update (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x5e2fe40

void Anticheat_ModeratorManager__Update(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  Anticheat_ModeratorManager__TickTimeouts(__this,method);
  return;
}


// Anticheat.ModeratorManager$$OnEvent
// il2cpp: void Anticheat_ModeratorManager__OnEvent (Anticheat_ModeratorManager_o* __this, ExitGames_Client_Photon_EventData_o* photonEvent, const MethodInfo* method);
// 0x5e30380
// eh: try 0x5e30584..0x5e30701 -> pad 0x5e30713 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e3072b..0x5e30730 -> pad 0x5e30753 cleanup
// eh: try 0x5e30756..0x5e30760 -> pad 0x5e30768 catch (...) [compiler noexcept guard]
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e3055f: lea r12, [rip + 0x146b182]  ; MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_MoveNext
// asm:   0x5e30566: mov rbx, rsp
// asm:   0x5e30569: lea r13, [rip + 0x146b180]  ; MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_get_Current
// asm:   0x5e30570: lea rbp, [rip + 0x1458dd9]  ; MethodInfo_System_Collections_Generic_Dictionary_byte_object_set_Item
// asm:   0x5e30577: nop word ptr [rax + rax]
// asm:   0x5e306d2: mov rdx, qword ptr [rax + 0x28]
// asm:   0x5e306d6: mov rdi, qword ptr [rax + 0x40]
// asm:   0x5e306da: mov rsi, r15
// asm:   0x5e306dd: call qword ptr [rax + 0x18]
// asm:   0x5e306e0: jmp 0x5e30485
// asm:   0x5e30709: jmp 0x5e30713
// asm:   0x5e3070b: jmp 0x5e30713
// asm:   0x5e3070d: jmp 0x5e30713
// asm:   0x5e3070f: jmp 0x5e30713
// asm:   0x5e30711: jmp 0x5e30713
// asm:   0x5e30713: mov rbx, rax
// asm:   0x5e30716: cmp edx, 1
// asm:   0x5e30719: jne 0x5e30756
// asm:   0x5e3071b: mov rdi, rbx
// asm:   0x5e3071e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e30723: mov rbx, qword ptr [rax]
// asm:   0x5e30726: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5e3072b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e30730: lea rax, [rip + 0x146afa9]  ; MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_Dispose
// asm:   0x5e30737: mov rsi, qword ptr [rax]
// asm:   0x5e3073a: mov rdi, rsp
// asm:   0x5e3073d: call 0x3ea2fd0  ; ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___Dispose()
// asm:   0x5e30742: test rbx, rbx
// asm:   0x5e30745: je 0x5e305d9
// asm:   0x5e3074b: mov rdi, rbx
// asm:   0x5e3074e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e30753: mov rbx, rax
// asm:   0x5e30756: lea rdi, [rsp + 0x18]
// asm:   0x5e3075b: call 0x2fe0f40  ; il2cpp_runtime_helper_02fe0f40()
// asm:   0x5e30760: mov rdi, rbx
// asm:   0x5e30763: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e30768: mov rdi, rax
// asm:   0x5e3076b: call 0x2ab61e0  ; __clang_call_terminate()

void Anticheat_ModeratorManager__OnEvent
               (Anticheat_ModeratorManager_o *__this,ExitGames_Client_Photon_EventData_o *photonEvent,
               MethodInfo *method)

{
  uint8_t uVar1;
  ExitGames_Client_Photon_ParameterDictionary_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__Fields *pEVar4;
  bool bVar5;
  int32_t iVar6;
  System_Collections_Generic_Dictionary_byte__object__o *__this_01;
  Il2CppObject *key;
  MethodInfo *method_00;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o EVar7;
  System_Collections_Generic_KeyValuePair_K__V__o SVar8;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__Fields EStack_58;
  Il2CppObject *pIStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  if (Il2CppMethodInitialized_0754854f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_Dictionary_byte_object_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Action_Dictionary_byte_object_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_byte_object_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_byte_object_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_get_Current);
    Il2CppMethodInitialized_0754854f = '\x01';
  }
  pIStack_48 = (Il2CppObject *)0x0;
  EStack_58._index = 0;
  EStack_58._4_4_ = 0;
  if (photonEvent == (ExitGames_Client_Photon_EventData_o *)0x0) {
label_05e306e5:
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)0x0;
  iVar6 = ExitGames_Client_Photon_EventData__get_Sender(photonEvent,(MethodInfo *)0x0);
  if (iVar6 == -1) {
    uVar1 = (photonEvent->fields).Code;
    if (uVar1 == 0xbe) {
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
      System_Collections_Generic_Dictionary_byte__object____ctor
                (__this_01,
                 (MethodInfo_49C7870 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
      __this_00 = (photonEvent->fields).Parameters;
      if (__this_00 != (ExitGames_Client_Photon_ParameterDictionary_o *)0x0) {
        EVar7 = ExitGames_Client_Photon_ParameterDictionary__GetEnumerator(__this_00,(MethodInfo *)0x0);
        EStack_58._dict = EVar7.fields._dict;
        puStack_38 = (undefined1 *)&EStack_58;
        EStack_58._index = EVar7.fields._index;
        uStack_40 = 0;
        pEVar4 = &EStack_58;
        if (__this_01 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
          bVar5 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___MoveNext
                            ((ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o *)
                             &EStack_58,
                             (MethodInfo_3DA2F70 *)
                             MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_MoveNext
                            );
          if (bVar5) {
            ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___get_Current
                      ((ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o *)&EStack_58,
                       (MethodInfo_3DA2EE0 *)
                       MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_get_Current
                      );
            ThrowNullReferenceException();
          }
        }
        else {
          while (puStack_38 = (undefined1 *)pEVar4,
                bVar5 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___MoveNext
                                  ((ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o *)
                                   &EStack_58,
                                   (MethodInfo_3DA2F70 *)
                                   MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_MoveNext
                                  ), bVar5) {
            SVar8 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___get_Current
                              ((ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o *)
                               &EStack_58,
                               (MethodInfo_3DA2EE0 *)
                               MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_get_Current
                              );
            System_Collections_Generic_Dictionary_byte__object___set_Item
                      (__this_01,(uint8_t)SVar8.fields.key,SVar8.fields.value,
                       (MethodInfo_49C8480 *)
                       MethodInfo_System_Collections_Generic_Dictionary_byte_object_set_Item);
            pEVar4 = (ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__Fields *)
                     puStack_38;
          }
        }
        ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___Dispose
                  ((ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o *)&EStack_58,
                   (MethodInfo_3DA2FD0 *)
                   MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_Dispose);
        if (__this_01 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
          return;
        }
        bVar5 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                          (__this_01,0,
                           (MethodInfo_49C86C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
        if (!bVar5) {
          return;
        }
        key = System_Collections_Generic_Dictionary_byte__object___get_Item
                        (__this_01,0,
                         (MethodInfo_49C83F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
        if ((key != (Il2CppObject *)0x0) && (key->klass != g_data_07556758)) {
          il2cpp_codegen_raise_invalid_cast_exception(key);
        }
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._pendingCallbacks
        ;
        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          bVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                            (pSVar2,key,&pIStack_48,
                             (MethodInfo_4AAF440 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_Action_Dictionary_byte_object_TryGetValue
                            );
          if (!bVar5) {
            return;
          }
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._pendingCallbacks;
          if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Remove
                      (pSVar2,key,
                       (MethodInfo_4AAED10 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Action_Dictionary_byte_object_Remove
                      );
            pSVar3 = (__this->fields)._pendingTimestamps;
            if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
              System_Collections_Generic_Dictionary_object__float___Remove
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,key,
                         (MethodInfo_4AB6C10 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_float_Remove);
              pSVar3 = (__this->fields)._pendingTimeouts;
              if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                System_Collections_Generic_Dictionary_object__float___Remove
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,key,
                           (MethodInfo_4AB6C10 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_float_Remove);
                pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (__this->fields)._pendingTimeoutCallbacks;
                if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  System_Collections_Generic_Dictionary_object__object___Remove
                            (pSVar2,key,
                             (MethodInfo_4AAED10 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_Action_Remove);
                  if (pIStack_48 == (Il2CppObject *)0x0) {
                    return;
                  }
                  (*pIStack_48[1].monitor)(pIStack_48[4].klass,__this_01,pIStack_48[2].monitor);
                  return;
                }
              }
            }
          }
        }
      }
      goto label_05e306e5;
    }
    if (uVar1 == 0xbd) {
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      Anticheat_ModeratorManager__HandlePlayerJoinNotification(photonEvent,method_00);
      return;
    }
    if (uVar1 == 0xbc) {
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      Anticheat_ModeratorManager__HandlePlayerListNotification(photonEvent,method_00);
      return;
    }
  }
  return;
}


// Anticheat.ModeratorManager$$OnPlayerEnteredRoom
// il2cpp: void Anticheat_ModeratorManager__OnPlayerEnteredRoom (Anticheat_ModeratorManager_o* __this, Photon_Realtime_Player_o* newPlayer, const MethodInfo* method);
// 0x5e30ec0

void Anticheat_ModeratorManager__OnPlayerEnteredRoom
               (Anticheat_ModeratorManager_o *__this,Photon_Realtime_Player_o *newPlayer,MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnPlayerLeftRoom
// il2cpp: void Anticheat_ModeratorManager__OnPlayerLeftRoom (Anticheat_ModeratorManager_o* __this, Photon_Realtime_Player_o* otherPlayer, const MethodInfo* method);
// 0x5e30ed0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e30f63: jmp 0x5e31135
// asm:   0x5e30ffe: jmp 0x5e31135
// asm:   0x5e31082: jmp 0x5e31135

void Anticheat_ModeratorManager__OnPlayerLeftRoom
               (Anticheat_ModeratorManager_o *__this,Photon_Realtime_Player_o *otherPlayer,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t key;
  uint uVar2;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  System_Collections_Generic_List_PlayerEntry__o *__this_00;
  Anticheat_PlayerEntry_array *pAVar4;
  System_Action_o *pSVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  Anticheat_PlayerEntry_o *pAStack_18;
  
  if (Il2CppMethodInitialized_07548550 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_PlayerEntry_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548550 = '\x01';
  }
  pAStack_18 = (Anticheat_PlayerEntry_o *)0x0;
  if (otherPlayer == (Photon_Realtime_Player_o *)0x0) goto label_05e31135;
  key = (otherPlayer->fields).actorNumber;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    if (Il2CppMethodInitialized_07547eef != '\0') goto label_05e30f47;
label_05e30f76:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eef = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e30f53;
label_05e30f95:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_07547eef == '\0') goto label_05e30f76;
label_05e30f47:
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e30f95;
label_05e30f53:
    pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
  }
  if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05e31135;
  bVar7 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                    (pSVar3,key,(Il2CppObject **)&pAStack_18,
                     (MethodInfo_4A114B0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_TryGetValue);
  if (!bVar7) {
    return;
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    if (Il2CppMethodInitialized_07547eef != '\0') goto label_05e30fe2;
label_05e31011:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eef = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e30fee;
label_05e31030:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_07547eef == '\0') goto label_05e31011;
label_05e30fe2:
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e31030;
label_05e30fee:
    pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
  }
  if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05e31135;
  System_Collections_Generic_Dictionary_int__object___Remove
            (pSVar3,key,
             (MethodInfo_4A10DC0 *)MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_Remove);
  if (Il2CppMethodInitialized_07547ef0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547ef0 = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e31072;
label_05e310a6:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    __this_00 = TypeInfo_Anticheat_ModeratorManager->static_fields->_PastPlayers_k__BackingField;
    pMVar6 = MethodInfo_System_Collections_Generic_List_PlayerEntry_Add;
  }
  else {
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e310a6;
label_05e31072:
    __this_00 = TypeInfo_Anticheat_ModeratorManager->static_fields->_PastPlayers_k__BackingField;
    pMVar6 = MethodInfo_System_Collections_Generic_List_PlayerEntry_Add;
  }
  MethodInfo_System_Collections_Generic_List_PlayerEntry_Add = pMVar6;
  if (__this_00 != (System_Collections_Generic_List_PlayerEntry__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pAVar4 = (__this_00->fields)._items;
    if (pAVar4 != (Anticheat_PlayerEntry_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pAVar4->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pAVar4->m_Items[(int)uVar2] = pAStack_18;
        Il2CppCodeGenWriteBarrier(pAVar4->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pAStack_18,
                   (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
      }
      pSVar5 = TypeInfo_Anticheat_ModeratorManager->static_fields->PlayerListChanged;
      if (pSVar5 != (System_Action_o *)0x0) {
        (*(code *)(pSVar5->fields).invoke_impl)((pSVar5->fields).method_code,(pSVar5->fields).method);
      }
      return;
    }
  }
label_05e31135:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$OnRoomPropertiesUpdate
// il2cpp: void Anticheat_ModeratorManager__OnRoomPropertiesUpdate (Anticheat_ModeratorManager_o* __this, ExitGames_Client_Photon_Hashtable_o* propertiesThatChanged, const MethodInfo* method);
// 0x5e31140

void Anticheat_ModeratorManager__OnRoomPropertiesUpdate
               (Anticheat_ModeratorManager_o *__this,
               ExitGames_Client_Photon_Hashtable_o *propertiesThatChanged,MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnPlayerPropertiesUpdate
// il2cpp: void Anticheat_ModeratorManager__OnPlayerPropertiesUpdate (Anticheat_ModeratorManager_o* __this, Photon_Realtime_Player_o* targetPlayer, ExitGames_Client_Photon_Hashtable_o* changedProps, const MethodInfo* method);
// 0x5e31150

void Anticheat_ModeratorManager__OnPlayerPropertiesUpdate
               (Anticheat_ModeratorManager_o *__this,Photon_Realtime_Player_o *targetPlayer,
               ExitGames_Client_Photon_Hashtable_o *changedProps,MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnMasterClientSwitched
// il2cpp: void Anticheat_ModeratorManager__OnMasterClientSwitched (Anticheat_ModeratorManager_o* __this, Photon_Realtime_Player_o* newMasterClient, const MethodInfo* method);
// 0x5e31160

void Anticheat_ModeratorManager__OnMasterClientSwitched
               (Anticheat_ModeratorManager_o *__this,Photon_Realtime_Player_o *newMasterClient,
               MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnJoinedRoom
// il2cpp: void Anticheat_ModeratorManager__OnJoinedRoom (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x5e31170

void Anticheat_ModeratorManager__OnJoinedRoom(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07548551 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548551 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Anticheat_ModeratorManager;
  }
  else {
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Anticheat_ModeratorManager;
  }
  TypeInfo_Anticheat_ModeratorManager = (Anticheat_ModeratorManager_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    Anticheat_ModeratorManager__UpdateAuthFromRoles((MethodInfo *)klass);
    return;
  }
  Anticheat_ModeratorManager__UpdateAuthFromRoles((MethodInfo *)klass);
  return;
}


// Anticheat.ModeratorManager$$OnLeftRoom
// il2cpp: void Anticheat_ModeratorManager__OnLeftRoom (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x5e31610
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e3166e: jmp 0x5e3181b
// asm:   0x5e31763: jmp 0x5e3181b

void Anticheat_ModeratorManager__OnLeftRoom(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_List_PlayerEntry__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_string__float__o *pSVar4;
  Anticheat_ModeratorManager_c *method_00;
  
  if (Il2CppMethodInitialized_07548552 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_Dictionary_byte_object_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_PlayerEntry_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548552 = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e316d9;
label_05e31638:
    Anticheat_ModeratorManager__ClearAuth((MethodInfo *)TypeInfo_Anticheat_ModeratorManager);
    if (Il2CppMethodInitialized_07547eef != '\0') goto label_05e3164a;
label_05e316f0:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eef = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e31713;
label_05e3165a:
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
  }
  else {
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e31638;
label_05e316d9:
    method_00 = TypeInfo_Anticheat_ModeratorManager;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    Anticheat_ModeratorManager__ClearAuth((MethodInfo *)method_00);
    if (Il2CppMethodInitialized_07547eef == '\0') goto label_05e316f0;
label_05e3164a:
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e3165a;
label_05e31713:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
  }
  if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05e3181b;
  System_Collections_Generic_Dictionary_int__object___Clear
            (__this_00,
             (MethodInfo_4A0F8F0 *)MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_Clear);
  if (Il2CppMethodInitialized_07547ef0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547ef0 = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e31787;
label_05e31753:
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->_PastPlayers_k__BackingField;
  }
  else {
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e31753;
label_05e31787:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->_PastPlayers_k__BackingField;
  }
  if (pSVar2 != (System_Collections_Generic_List_PlayerEntry__o *)0x0) {
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._pendingCallbacks;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Clear
                (pSVar3,(MethodInfo_4AAD690 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_Action_Dictionary_byte_object_Clear
                );
      pSVar4 = (__this->fields)._pendingTimestamps;
      if (pSVar4 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        System_Collections_Generic_Dictionary_object__float___Clear
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                   (MethodInfo_4AB5620 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Clear);
        pSVar4 = (__this->fields)._pendingTimeouts;
        if (pSVar4 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
          System_Collections_Generic_Dictionary_object__float___Clear
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                     (MethodInfo_4AB5620 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Clear
                    );
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._pendingTimeoutCallbacks;
          if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Clear
                      (pSVar3,(MethodInfo_4AAD690 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_Action_Clear);
            return;
          }
        }
      }
    }
  }
label_05e3181b:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$UpdateAuthFromRoles
// il2cpp: void Anticheat_ModeratorManager__UpdateAuthFromRoles (const MethodInfo* method);
// 0x5e311d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e311fc: jmp 0x5e3144f
// asm:   0x5e3130f: jmp 0x5e31447

void Anticheat_ModeratorManager__UpdateAuthFromRoles(MethodInfo *method)

{
  uint32_t uVar1;
  void *pvVar2;
  long lVar3;
  bool bVar4;
  System_String_array *source;
  Il2CppClass *pIVar5;
  Anticheat_ModeratorManager_c *method_00;
  
  if (Il2CppMethodInitialized_07548553 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Contains_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"admin");
    il2cpp_codegen_initialize_runtime_metadata(&"moderator");
    il2cpp_codegen_initialize_runtime_metadata(&"trusted");
    Il2CppMethodInitialized_07548553 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e31263;
label_05e311f0:
    source = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e311f0;
label_05e31263:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    source = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
  }
  if (source == (System_String_array *)0x0) {
label_05e3144f:
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      method_00 = TypeInfo_Anticheat_ModeratorManager;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      Anticheat_ModeratorManager__ClearAuth((MethodInfo *)method_00);
      return;
    }
    Anticheat_ModeratorManager__ClearAuth((MethodInfo *)TypeInfo_Anticheat_ModeratorManager);
    return;
  }
  bVar4 = System_Linq_Enumerable__Contains_object_
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                     (Il2CppObject *)"admin",
                     (MethodInfo_34E5FD0 *)MethodInfo_System_Linq_Enumerable_Contains_string);
  if (!bVar4) {
    bVar4 = System_Linq_Enumerable__Contains_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                       (Il2CppObject *)"moderator",
                       (MethodInfo_34E5FD0 *)MethodInfo_System_Linq_Enumerable_Contains_string);
    if (!bVar4) {
      bVar4 = System_Linq_Enumerable__Contains_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (Il2CppObject *)"trusted",
                         (MethodInfo_34E5FD0 *)MethodInfo_System_Linq_Enumerable_Contains_string);
      if (!bVar4) goto label_05e3144f;
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
        if (g_data_07548590 == '\0') goto label_05e31593;
label_05e313f7:
        if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e31407;
label_05e315b6:
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
        pIVar5 = (Il2CppClass *)TypeInfo_Anticheat_ModeratorManager;
        TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField = true;
        if (g_data_07548591 == '\0') goto label_05e315d6;
label_05e3141f:
        uVar1 = (pIVar5->_2).cctor_finished_or_no_cctor;
      }
      else {
        if (g_data_07548590 != '\0') goto label_05e313f7;
label_05e31593:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
        g_data_07548590 = '\x01';
        if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e315b6;
label_05e31407:
        pIVar5 = (Il2CppClass *)TypeInfo_Anticheat_ModeratorManager;
        TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField = true;
        if (g_data_07548591 != '\0') goto label_05e3141f;
label_05e315d6:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
        g_data_07548591 = '\x01';
        uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
        pIVar5 = (Il2CppClass *)TypeInfo_Anticheat_ModeratorManager;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init(pIVar5);
        pIVar5 = (Il2CppClass *)TypeInfo_Anticheat_ModeratorManager;
      }
      pvVar2 = pIVar5->static_fields;
      *(undefined4 *)((long)pvVar2 + 0xc) = 0;
      lVar3 = *(long *)((long)pvVar2 + 0x20);
      goto joined_r0x05e31441;
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      if (g_data_07548590 == '\0') goto label_05e31512;
label_05e31355:
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e31365;
label_05e31535:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      pIVar5 = (Il2CppClass *)TypeInfo_Anticheat_ModeratorManager;
      TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField = true;
      if (g_data_07548591 == '\0') goto label_05e31555;
label_05e3137d:
      uVar1 = (pIVar5->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (g_data_07548590 != '\0') goto label_05e31355;
label_05e31512:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      g_data_07548590 = '\x01';
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e31535;
label_05e31365:
      pIVar5 = (Il2CppClass *)TypeInfo_Anticheat_ModeratorManager;
      TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField = true;
      if (g_data_07548591 != '\0') goto label_05e3137d;
label_05e31555:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      g_data_07548591 = '\x01';
      uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
      pIVar5 = (Il2CppClass *)TypeInfo_Anticheat_ModeratorManager;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init(pIVar5);
      pIVar5 = (Il2CppClass *)TypeInfo_Anticheat_ModeratorManager;
    }
    pvVar2 = pIVar5->static_fields;
    *(undefined4 *)((long)pvVar2 + 0xc) = 1;
    lVar3 = *(long *)((long)pvVar2 + 0x20);
    goto joined_r0x05e31441;
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    if (g_data_07548590 == '\0') goto label_05e31491;
label_05e312bf:
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e312cf;
label_05e314b4:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pIVar5 = (Il2CppClass *)TypeInfo_Anticheat_ModeratorManager;
    TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField = true;
    if (g_data_07548591 == '\0') goto label_05e314d4;
label_05e312e7:
    uVar1 = (pIVar5->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_07548590 != '\0') goto label_05e312bf;
label_05e31491:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    g_data_07548590 = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e314b4;
label_05e312cf:
    pIVar5 = (Il2CppClass *)TypeInfo_Anticheat_ModeratorManager;
    TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField = true;
    if (g_data_07548591 != '\0') goto label_05e312e7;
label_05e314d4:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    g_data_07548591 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
    pIVar5 = (Il2CppClass *)TypeInfo_Anticheat_ModeratorManager;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar5);
    pIVar5 = (Il2CppClass *)TypeInfo_Anticheat_ModeratorManager;
  }
  pvVar2 = pIVar5->static_fields;
  *(undefined4 *)((long)pvVar2 + 0xc) = 2;
  lVar3 = *(long *)((long)pvVar2 + 0x20);
joined_r0x05e31441:
  if (lVar3 == 0) {
    return;
  }
  (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
  return;
}


// Anticheat.ModeratorManager$$ClearAuth
// il2cpp: void Anticheat_ModeratorManager__ClearAuth (const MethodInfo* method);
// 0x5e31820
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e31992: jmp 0x5e31b23
// asm:   0x5e31b85: jmp 0x5e31aaa

void Anticheat_ModeratorManager__ClearAuth(MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  System_Action_o *pSVar3;
  code *vtableDispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  undefined8 extraout_RDX_12;
  undefined8 extraout_RDX_13;
  undefined8 extraout_RDX_14;
  undefined8 extraout_RDX_15;
  undefined8 extraout_RDX_16;
  int iVar4;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07548554 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548554 = '\x01';
    in_RDX = extraout_RDX;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e31902;
label_05e31847:
    if (Il2CppMethodInitialized_07547eed != '\0') goto label_05e31854;
label_05e31914:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eed = '\x01';
    in_RDX = extraout_RDX_01;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e31937;
label_05e31864:
    cVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField;
    uVar2 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e31847;
label_05e31902:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    in_RDX = extraout_RDX_00;
    if (Il2CppMethodInitialized_07547eed == '\0') goto label_05e31914;
label_05e31854:
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e31864;
label_05e31937:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    cVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField;
    uVar2 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
    in_RDX = extraout_RDX_02;
  }
  if (cVar1 == '\0') {
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      in_RDX = extraout_RDX_08;
      if (g_data_07547eee == '\0') goto label_05e31a2a;
label_05e3196b:
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e3197b;
label_05e31a4d:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      iVar4 = TypeInfo_Anticheat_ModeratorManager->static_fields->_AuthLevel_k__BackingField;
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
        in_RDX = extraout_RDX_13;
        goto joined_r0x05e31b1d;
      }
      in_RDX = extraout_RDX_10;
      if (g_data_07548590 != '\0') goto label_05e31a79;
label_05e31b23:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      g_data_07548590 = '\x01';
      in_RDX = extraout_RDX_14;
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e31b46;
label_05e31a89:
      klass = (Il2CppClass *)TypeInfo_Anticheat_ModeratorManager;
      TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField = false;
      if (g_data_07548591 != '\0') goto label_05e31aa1;
label_05e31b66:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      g_data_07548591 = '\x01';
      uVar2 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
      klass = (Il2CppClass *)TypeInfo_Anticheat_ModeratorManager;
      in_RDX = extraout_RDX_16;
    }
    else {
      if (g_data_07547eee != '\0') goto label_05e3196b;
label_05e31a2a:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      g_data_07547eee = '\x01';
      in_RDX = extraout_RDX_09;
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e31a4d;
label_05e3197b:
      iVar4 = TypeInfo_Anticheat_ModeratorManager->static_fields->_AuthLevel_k__BackingField;
joined_r0x05e31b1d:
      if (g_data_07548590 == '\0') goto label_05e31b23;
label_05e31a79:
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e31a89;
label_05e31b46:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      klass = (Il2CppClass *)TypeInfo_Anticheat_ModeratorManager;
      TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField = false;
      in_RDX = extraout_RDX_15;
      if (g_data_07548591 == '\0') goto label_05e31b66;
label_05e31aa1:
      uVar2 = (klass->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init(klass);
      klass = (Il2CppClass *)TypeInfo_Anticheat_ModeratorManager;
      in_RDX = extraout_RDX_11;
    }
    *(undefined4 *)((long)klass->static_fields + 0xc) = 0xffffffff;
    if (iVar4 == -1) {
      return;
    }
    goto label_05e31ac5;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    in_RDX = extraout_RDX_03;
    if (g_data_07548590 == '\0') goto label_05e319a9;
label_05e31890:
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e318a0;
label_05e319cc:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    klass = (Il2CppClass *)TypeInfo_Anticheat_ModeratorManager;
    TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField = false;
    in_RDX = extraout_RDX_05;
    if (g_data_07548591 == '\0') goto label_05e319ec;
label_05e318b8:
    uVar2 = (klass->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_07548590 != '\0') goto label_05e31890;
label_05e319a9:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    g_data_07548590 = '\x01';
    in_RDX = extraout_RDX_04;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e319cc;
label_05e318a0:
    klass = (Il2CppClass *)TypeInfo_Anticheat_ModeratorManager;
    TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField = false;
    if (g_data_07548591 != '\0') goto label_05e318b8;
label_05e319ec:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    g_data_07548591 = '\x01';
    uVar2 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Anticheat_ModeratorManager;
    in_RDX = extraout_RDX_06;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    klass = (Il2CppClass *)TypeInfo_Anticheat_ModeratorManager;
    in_RDX = extraout_RDX_07;
  }
  *(undefined4 *)((long)klass->static_fields + 0xc) = 0xffffffff;
label_05e31ac5:
  if ((klass->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->AuthChanged;
    in_RDX = extraout_RDX_12;
  }
  else {
    pSVar3 = *(System_Action_o **)((long)klass->static_fields + 0x20);
  }
  if (pSVar3 == (System_Action_o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar3->fields).invoke_impl;
  (*vtableDispatch)((pSVar3->fields).method_code,(pSVar3->fields).method,in_RDX,vtableDispatch);
  return;
}


// Anticheat.ModeratorManager$$OnFriendListUpdate
// il2cpp: void Anticheat_ModeratorManager__OnFriendListUpdate (Anticheat_ModeratorManager_o* __this, System_Collections_Generic_List_FriendInfo__o* friendList, const MethodInfo* method);
// 0x5e31b90

void Anticheat_ModeratorManager__OnFriendListUpdate
               (Anticheat_ModeratorManager_o *__this,System_Collections_Generic_List_FriendInfo__o *friendList
               ,MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnCreatedRoom
// il2cpp: void Anticheat_ModeratorManager__OnCreatedRoom (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x5e31ba0

void Anticheat_ModeratorManager__OnCreatedRoom(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnCreateRoomFailed
// il2cpp: void Anticheat_ModeratorManager__OnCreateRoomFailed (Anticheat_ModeratorManager_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x5e31bb0

void Anticheat_ModeratorManager__OnCreateRoomFailed
               (Anticheat_ModeratorManager_o *__this,int16_t returnCode,System_String_o *message,
               MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnJoinRoomFailed
// il2cpp: void Anticheat_ModeratorManager__OnJoinRoomFailed (Anticheat_ModeratorManager_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x5e31bc0

void Anticheat_ModeratorManager__OnJoinRoomFailed
               (Anticheat_ModeratorManager_o *__this,int16_t returnCode,System_String_o *message,
               MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$OnJoinRandomFailed
// il2cpp: void Anticheat_ModeratorManager__OnJoinRandomFailed (Anticheat_ModeratorManager_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x5e31bd0

void Anticheat_ModeratorManager__OnJoinRandomFailed
               (Anticheat_ModeratorManager_o *__this,int16_t returnCode,System_String_o *message,
               MethodInfo *method)

{
  return;
}


// Anticheat.ModeratorManager$$TickTimeouts
// il2cpp: void Anticheat_ModeratorManager__TickTimeouts (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x5e2fe50
// eh: try 0x5e30034..0x5e302ac -> pad 0x5e3031d (+17 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e302e6..0x5e302eb -> pad 0x5e3030a cleanup
// eh: try 0x5e3030d..0x5e30317 -> pad 0x5e30374 catch (...) [compiler noexcept guard]
// eh: try 0x5e30335..0x5e3033a -> pad 0x5e3035f cleanup
// eh: try 0x5e30362..0x5e3036c -> pad 0x5e30374 catch (...) [compiler noexcept guard]
// asm: 60 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e302ac: mov r15, rax
// asm:   0x5e302af: xor r14d, r14d
// asm:   0x5e302b2: jmp 0x5e30320
// asm:   0x5e302b4: jmp 0x5e3031d
// asm:   0x5e302b6: jmp 0x5e3031d
// asm:   0x5e302b8: jmp 0x5e302ce
// asm:   0x5e302ba: jmp 0x5e302ce
// asm:   0x5e302bc: jmp 0x5e302ce
// asm:   0x5e302be: jmp 0x5e302ce
// asm:   0x5e302c0: jmp 0x5e302ce
// asm:   0x5e302c2: jmp 0x5e302ce
// asm:   0x5e302c4: jmp 0x5e302ce
// asm:   0x5e302c6: jmp 0x5e302ce
// asm:   0x5e302c8: jmp 0x5e302ce
// asm:   0x5e302ca: jmp 0x5e302ce
// asm:   0x5e302cc: jmp 0x5e302ce
// asm:   0x5e302ce: mov r15, rax
// asm:   0x5e302d1: cmp edx, 1
// asm:   0x5e302d4: jne 0x5e3030d
// asm:   0x5e302d6: mov rdi, r15
// asm:   0x5e302d9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e302de: mov rbx, qword ptr [rax]
// asm:   0x5e302e1: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5e302e6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e302eb: lea rax, [rip + 0x145e806]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5e302f2: mov rsi, qword ptr [rax]
// asm:   0x5e302f5: lea rdi, [rsp + 0x40]
// asm:   0x5e302fa: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5e302ff: test rbx, rbx
// asm:   0x5e30302: je 0x5e3026a
// asm:   0x5e30308: jmp 0x5e30357
// asm:   0x5e3030a: mov r15, rax
// asm:   0x5e3030d: lea rdi, [rsp + 0x10]
// asm:   0x5e30312: call 0x2fe0fa0  ; il2cpp_runtime_helper_02fe0fa0()
// asm:   0x5e30317: jmp 0x5e3036c
// asm:   0x5e30319: jmp 0x5e3031d
// asm:   0x5e3031b: jmp 0x5e3031d
// asm:   0x5e3031d: mov r15, rax
// asm:   0x5e30320: cmp edx, 1
// asm:   0x5e30323: jne 0x5e30362
// asm:   0x5e30325: mov rdi, r15
// asm:   0x5e30328: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e3032d: mov rbx, qword ptr [rax]
// asm:   0x5e30330: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5e30335: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e3033a: lea rax, [rip + 0x145fe07]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_float_Dispose
// asm:   0x5e30341: mov rsi, qword ptr [rax]
// asm:   0x5e30344: lea rdi, [rsp + 0x60]
// asm:   0x5e30349: call 0x4de7d40  ; System_Collections_Generic_Dictionary_Enumerator_object__float___Dispose()
// asm:   0x5e3034e: test rbx, rbx
// asm:   0x5e30351: je 0x5e3012a
// asm:   0x5e30357: mov rdi, rbx
// asm:   0x5e3035a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e3035f: mov r15, rax
// asm:   0x5e30362: lea rdi, [rsp + 0x10]
// asm:   0x5e30367: call 0x2fe0f70  ; il2cpp_runtime_helper_02fe0f70()
// asm:   0x5e3036c: mov rdi, r15
// asm:   0x5e3036f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e30374: mov rdi, rax
// asm:   0x5e30377: call 0x2ab61e0  ; __clang_call_terminate()

void Anticheat_ModeratorManager__TickTimeouts(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  System_String_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  MethodInfo *pMVar6;
  System_String_o *key;
  undefined8 item;
  float fVar7;
  bool bVar8;
  int32_t iVar9;
  System_Collections_Generic_List_string__o *__this_00;
  float fVar10;
  float fVar11;
  undefined1 auStack_a8 [16];
  System_String_o *pSStack_98;
  Il2CppObject *pIStack_90;
  int32_t iStack_88;
  undefined4 uStack_84;
  Il2CppObject *pIStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  System_String_o *pSStack_68;
  undefined1 auStack_58 [24];
  Il2CppObject *pIStack_40;
  undefined8 uStack_38;
  
  if (Il2CppMethodInitialized_07548555 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_Dictionary_byte_object_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_float_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_float_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_float_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_float_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_07548555 = '\x01';
  }
  auStack_58._16_8_ = (Il2CppObject *)0x0;
  pIStack_40 = (Il2CppObject *)0x0;
  auStack_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  auStack_58._8_4_ = 0;
  auStack_58._12_4_ = 0;
  uStack_38._0_4_ = 0;
  uStack_38._4_4_ = 0;
  auStack_78 = (undefined1  [8])0x0;
  uStack_70._0_4_ = 0;
  uStack_70._4_4_ = 0;
  pSStack_68 = (System_String_o *)0x0;
  pIStack_80 = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields)._pendingTimestamps;
  if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
label_05e3029a:
    ThrowNullReferenceException();
  }
  iVar9 = System_Collections_Generic_Dictionary_object__float___get_Count
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                     (MethodInfo_4AB5070 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Count);
  if (iVar9 != 0) {
    fVar10 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
    pSVar3 = (__this->fields)._pendingTimestamps;
    if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_05e3029a;
    System_Collections_Generic_Dictionary_object__float___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_a8,
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
               (MethodInfo_4AB58A0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_float_GetEnumerator);
    uStack_38._0_4_ = iStack_88;
    uStack_38._4_4_ = uStack_84;
    auStack_58._16_8_ = pSStack_98;
    pIStack_40 = pIStack_90;
    auStack_58._0_8_ = auStack_a8._0_8_;
    auStack_58._8_8_ = auStack_a8._8_8_;
    auStack_a8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    __this_00 = (System_Collections_Generic_List_string__o *)0x0;
    auStack_a8._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58;
    while( true ) {
      bVar8 = System_Collections_Generic_Dictionary_Enumerator_object__float___MoveNext
                        ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58,
                         (MethodInfo_4CE7C10 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_float_MoveNext);
      item = auStack_58._16_8_;
      if (!bVar8) break;
      pSVar3 = (__this->fields)._pendingTimeouts;
      if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        ThrowNullReferenceException();
      }
      fVar7 = pIStack_40._0_4_;
      fVar11 = System_Collections_Generic_Dictionary_object__float___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                          (Il2CppObject *)auStack_58._16_8_,
                          (MethodInfo_4AB53E0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
      if (fVar11 <= fVar10 - fVar7) {
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
          System_Collections_Generic_List_object____ctor
                    ((System_Collections_Generic_List_object__o *)__this_00,
                     (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
          if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
            ThrowNullReferenceException();
          }
        }
        pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_00->fields)._items;
        if (pSVar4 == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = (System_String_o *)item;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__float___Dispose
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58,
               (MethodInfo_4CE7D40 *)
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_float_Dispose);
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a8,
                 (System_Collections_Generic_List_object__o *)__this_00,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      pSStack_68 = pSStack_98;
      auStack_78 = (undefined1  [8])auStack_a8._0_8_;
      uStack_70 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_a8._8_8_;
      auStack_a8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      auStack_a8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_78;
      while( true ) {
        bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)auStack_78,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        key = pSStack_68;
        if (!bVar8) break;
        pSVar3 = (__this->fields)._pendingTimestamps;
        if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Dictionary_object__float___Remove
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,(Il2CppObject *)pSStack_68,
                   (MethodInfo_4AB6C10 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Remove)
        ;
        pSVar3 = (__this->fields)._pendingTimeouts;
        if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Dictionary_object__float___Remove
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,(Il2CppObject *)key,
                   (MethodInfo_4AB6C10 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Remove)
        ;
        pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._pendingCallbacks
        ;
        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar5,(Il2CppObject *)key,
                   (MethodInfo_4AAED10 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_Action_Dictionary_byte_object_Remove
                  );
        pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._pendingTimeoutCallbacks;
        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Dictionary_object__object___TryGetValue
                  (pSVar5,(Il2CppObject *)key,&pIStack_80,
                   (MethodInfo_4AAF440 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_Action_TryGetValue);
        pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._pendingTimeoutCallbacks;
        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar5,(Il2CppObject *)key,
                   (MethodInfo_4AAED10 *)MethodInfo_System_Collections_Generic_Dictionary_string_Action_Remove
                  );
        if (pIStack_80 != (Il2CppObject *)0x0) {
          (*pIStack_80[1].monitor)(pIStack_80[4].klass,pIStack_80[2].monitor);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)auStack_78,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    }
  }
  return;
}


// Anticheat.ModeratorManager$$TrackRequest
// il2cpp: System_String_o* Anticheat_ModeratorManager__TrackRequest (float timeoutSec, System_Action_Dictionary_byte__object___o* onResponse, System_Action_o* onTimeout, const MethodInfo* method);
// 0x5e31be0

System_String_o *
Anticheat_ModeratorManager__TrackRequest
          (float timeoutSec,System_Action_Dictionary_byte__object___o *onResponse,System_Action_o *onTimeout,
          MethodInfo *method)

{
  Anticheat_ModeratorManager_o *pAVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  System_String_o *key;
  float value;
  System_Guid_o local_38;
  
  if (Il2CppMethodInitialized_07548556 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_Dictionary_byte_object_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548556 = '\x01';
  }
  local_38 = System_Guid__NewGuid((MethodInfo *)0x0);
  key = System_Guid__ToString(&local_38,(MethodInfo *)0x0);
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pAVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->_instance;
  if ((pAVar1 != (Anticheat_ModeratorManager_o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pAVar1->fields)._pendingCallbacks,
     pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar2,(Il2CppObject *)key,(Il2CppObject *)onResponse,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Action_Dictionary_byte_object_set_Item)
    ;
    pAVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->_instance;
    if (pAVar1 != (Anticheat_ModeratorManager_o *)0x0) {
      pSVar3 = (pAVar1->fields)._pendingTimestamps;
      value = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
      if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        System_Collections_Generic_Dictionary_object__float___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,(Il2CppObject *)key,value,
                   (MethodInfo_4AB5450 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
        pAVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->_instance;
        if ((pAVar1 != (Anticheat_ModeratorManager_o *)0x0) &&
           (pSVar3 = (pAVar1->fields)._pendingTimeouts,
           pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0)) {
          System_Collections_Generic_Dictionary_object__float___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,(Il2CppObject *)key,
                     timeoutSec,
                     (MethodInfo_4AB5450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
          if (onTimeout != (System_Action_o *)0x0) {
            if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
            }
            pAVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->_instance;
            if ((pAVar1 == (Anticheat_ModeratorManager_o *)0x0) ||
               (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (pAVar1->fields)._pendingTimeoutCallbacks,
               pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_05e31d71;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar2,(Il2CppObject *)key,(Il2CppObject *)onTimeout,
                       (MethodInfo_4AAD4C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Action_set_Item);
          }
          return key;
        }
      }
    }
  }
label_05e31d71:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$RaiseModEvent
// il2cpp: void Anticheat_ModeratorManager__RaiseModEvent (uint8_t code, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x5e31d80

void Anticheat_ModeratorManager__RaiseModEvent
               (uint8_t code,System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  Photon_Realtime_RaiseEventOptions_o *__this;
  System_Int32_array *pSVar1;
  Photon_Realtime_Player_o *pPVar2;
  
  if (Il2CppMethodInitialized_07548557 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Realtime_RaiseEventOptions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ExitGames_Client_Photon_SendOptions);
    Il2CppMethodInitialized_07548557 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Photon_Realtime_RaiseEventOptions);
  Photon_Realtime_RaiseEventOptions___ctor(__this,(MethodInfo *)0x0);
  pSVar1 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if ((pPVar2 != (Photon_Realtime_Player_o *)0x0) && (pSVar1 != (System_Int32_array *)0x0)) {
    if ((int)pSVar1->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar1->m_Items[0] = (pPVar2->fields).actorNumber;
    if (__this != (Photon_Realtime_RaiseEventOptions_o *)0x0) {
      (__this->fields).TargetActors = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields).TargetActors);
      if ((TypeInfo_ExitGames_Client_Photon_SendOptions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ExitGames_Client_Photon_SendOptions);
      }
      Photon_Pun_PhotonNetwork__RaiseEvent
                (code,(Il2CppObject *)data,__this,
                 (ExitGames_Client_Photon_SendOptions_o)
                 (TypeInfo_ExitGames_Client_Photon_SendOptions->static_fields->SendReliable).fields,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$InvokeStatus
// il2cpp: void Anticheat_ModeratorManager__InvokeStatus (System_String_o* text, System_Action_string__o* localStatus, const MethodInfo* method);
// 0x5e31ea0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e31f3e: jmp 0x5e31ee5

void Anticheat_ModeratorManager__InvokeStatus
               (System_String_o *text,System_Action_string__o *localStatus,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    pSVar2 = *(System_Action_string__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x30);
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,text,(pSVar2->fields).method);
  }
  if (localStatus == (System_Action_string__o *)0x0) {
    return;
  }
  (*(code *)(localStatus->fields).invoke_impl)
            ((localStatus->fields).method_code,text,(localStatus->fields).method);
  return;
}


// Anticheat.ModeratorManager$$GetResponseEntries
// il2cpp: System_Collections_Generic_Dictionary_byte__object__array* Anticheat_ModeratorManager__GetResponseEntries (System_Collections_Generic_Dictionary_byte__object__o* data, uint8_t entriesKey, const MethodInfo* method);
// 0x5e31f50
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e3205d: nop dword ptr [rax]
// asm:   0x5e320b9: jmp 0x5e320f3
// asm:   0x5e320e9: nop dword ptr [rax]
// asm:   0x5e32123: jmp 0x5e32128

System_Collections_Generic_Dictionary_byte__object__array *
Anticheat_ModeratorManager__GetResponseEntries
          (System_Collections_Generic_Dictionary_byte__object__o *data,uint8_t entriesKey,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  System_Collections_Generic_Dictionary_byte__object__array *pSVar4;
  ulong uVar5;
  Il2CppObject *pIVar6;
  Il2CppClass *pIVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  Il2CppObject *obj;
  
  if (Il2CppMethodInitialized_07548559 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_byte_object__array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07548559 = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_05e3213f:
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,entriesKey,
                     (MethodInfo_49C86C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar2) {
    pIVar3 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,entriesKey,
                        (MethodInfo_49C83F0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    pSVar4 = (System_Collections_Generic_Dictionary_byte__object__array *)
             il2cpp_vm_Object_IsInst(pIVar3,TypeInfo_System_Collections_Generic_Dictionary_byte_object__array)
    ;
    if (pSVar4 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
      return pSVar4;
    }
    pIVar3 = il2cpp_vm_Object_IsInst(pIVar3,TypeInfo_object_array);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pSVar4 = (System_Collections_Generic_Dictionary_byte__object__array *)
               SZArrayNew(TypeInfo_System_Collections_Generic_Dictionary_byte_object__array,
                          *(uint32_t *)&pIVar3[1].monitor);
      if ((int)pIVar3[1].monitor < 1) {
        return pSVar4;
      }
      if (pSVar4 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
        uVar5 = (ulong)pIVar3[1].monitor & 0xffffffff;
        lVar10 = 0x20;
        uVar9 = 0;
        do {
          if (uVar5 <= uVar9) goto label_05e3213a;
          obj = *(Il2CppObject **)((long)&pIVar3->klass + lVar10);
          if (obj == (Il2CppObject *)0x0) {
label_05e320f0:
            obj = (Il2CppObject *)0x0;
          }
          else {
            pIVar7 = obj->klass;
            bVar1 = (pIVar7->_2).typeHierarchyDepth;
            bVar8 = (TypeInfo_System_Collections_Generic_Dictionary_byte_object->_2).typeHierarchyDepth;
            if ((bVar8 <= bVar1) &&
               ((pIVar7->_2).typeHierarchy[(ulong)bVar8 - 1] ==
                (Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object)) {
              pIVar6 = il2cpp_vm_Object_IsInst(obj,(((pSVar4->obj).klass)->_1).element_class);
              if (pIVar6 == (Il2CppObject *)0x0) {
                pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
              }
              pIVar7 = obj->klass;
              bVar8 = (TypeInfo_System_Collections_Generic_Dictionary_byte_object->_2).typeHierarchyDepth;
              if (bVar8 <= (pIVar7->_2).typeHierarchyDepth) goto label_05e320a8;
              goto label_05e320f0;
            }
            if (bVar1 < bVar8) goto label_05e320f0;
label_05e320a8:
            if ((pIVar7->_2).typeHierarchy[(ulong)bVar8 - 1] !=
                (Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object) goto label_05e320f0;
          }
          if ((uint)pSVar4->max_length <= uVar9) {
label_05e3213a:
            ThrowIndexOutOfRangeException();
          }
          *(Il2CppObject **)((long)pSVar4->m_Items + lVar10 + -0x20) = obj;
          Il2CppCodeGenWriteBarrier((void **)((long)pSVar4->m_Items + lVar10 + -0x20));
          uVar9 = uVar9 + 1;
          uVar5 = (ulong)*(uint *)&pIVar3[1].monitor;
          lVar10 = lVar10 + 8;
          if ((long)(int)*(uint *)&pIVar3[1].monitor <= (long)uVar9) {
            return pSVar4;
          }
        } while( true );
      }
      goto label_05e3213f;
    }
  }
  return (System_Collections_Generic_Dictionary_byte__object__array *)0x0;
}


// Anticheat.ModeratorManager$$ReadInt
// il2cpp: int32_t Anticheat_ModeratorManager__ReadInt (System_Collections_Generic_Dictionary_byte__object__o* data, uint8_t key, int32_t defaultValue, const MethodInfo* method);
// 0x5e32160

int32_t Anticheat_ModeratorManager__ReadInt
                  (System_Collections_Generic_Dictionary_byte__object__o *data,uint8_t key,
                  int32_t defaultValue,MethodInfo *method)

{
  System_String_c *pSVar1;
  bool bVar2;
  uint in_EAX;
  Il2CppObject *pIVar3;
  System_String_o *s;
  uint *puVar4;
  short *psVar5;
  byte *pbVar6;
  undefined8 uStack_28;
  
  uStack_28._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_0754855a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    Il2CppMethodInitialized_0754855a = '\x01';
  }
  uStack_28 = (ulong)(uint)uStack_28;
  if (data != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                      (data,key,(MethodInfo_49C86C0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    if (bVar2) {
      pIVar3 = System_Collections_Generic_Dictionary_byte__object___get_Item
                         (data,key,(MethodInfo_49C83F0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
      if (pIVar3 != (Il2CppObject *)0x0) {
        s = (System_String_o *)
            System_Collections_Generic_Dictionary_byte__object___get_Item
                      (data,key,(MethodInfo_49C83F0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
        if (s != (System_String_o *)0x0) {
          pSVar1 = s->klass;
          if (pSVar1 == g_data_07556710) {
            puVar4 = il2cpp_vm_Object_Unbox((Il2CppObject *)s);
            defaultValue = *puVar4;
          }
          else if (pSVar1 == g_data_07556730) {
            puVar4 = (uint *)il2cpp_runtime_helper_02abd3a0(s);
            defaultValue = *puVar4;
          }
          else if (pSVar1 == g_data_07556700) {
            psVar5 = (short *)il2cpp_runtime_helper_02abd3a0(s);
            defaultValue = (int32_t)*psVar5;
          }
          else if (pSVar1 == g_data_075566e0) {
            pbVar6 = (byte *)il2cpp_runtime_helper_02abd3a0(s);
            defaultValue = (int32_t)*pbVar6;
          }
          else if (pSVar1 == g_data_07556758) {
            bVar2 = System_Int32__TryParse(s,(int32_t *)((long)&uStack_28 + 4),(MethodInfo *)0x0);
            if (bVar2) {
              defaultValue = uStack_28._4_4_;
            }
          }
        }
      }
    }
  }
  return defaultValue;
}


// Anticheat.ModeratorManager$$ParsePlayerEntry
// il2cpp: Anticheat_PlayerEntry_o* Anticheat_ModeratorManager__ParsePlayerEntry (System_Collections_Generic_Dictionary_byte__object__o* entry, const MethodInfo* method);
// 0x5e32280
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e3232c: jmp 0x5e32422
// asm:   0x5e32349: test rbx, rbx
// asm:   0x5e323a5: jmp 0x5e32422
// asm:   0x5e323c8: jmp 0x5e324b9

Anticheat_PlayerEntry_o *
Anticheat_ModeratorManager__ParsePlayerEntry
          (System_Collections_Generic_Dictionary_byte__object__o *entry,MethodInfo *method)

{
  bool bVar1;
  Anticheat_PlayerEntry_o *__this;
  System_String_o *pSVar2;
  Il2CppObject *obj;
  int32_t *piVar3;
  int32_t iVar4;
  
  if (Il2CppMethodInitialized_0754855b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_PlayerEntry);
    Il2CppMethodInitialized_0754855b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_PlayerEntry);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (entry == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_05e324b9:
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (entry,0,(MethodInfo_49C86C0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar1) {
    pSVar2 = (System_String_o *)
             System_Collections_Generic_Dictionary_byte__object___get_Item
                       (entry,0,(MethodInfo_49C83F0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (pSVar2 == (System_String_o *)0x0) {
      pSVar2 = (System_String_o *)0x0;
    }
    else if (pSVar2->klass != g_data_07556758) goto label_05e32422;
  }
  else {
    pSVar2 = g_data_07556758->static_fields->Empty;
  }
  if (__this == (Anticheat_PlayerEntry_o *)0x0) goto label_05e324b9;
  (__this->fields).SessionId = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SessionId);
  bVar1 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (entry,1,(MethodInfo_49C86C0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar1) {
    pSVar2 = (System_String_o *)
             System_Collections_Generic_Dictionary_byte__object___get_Item
                       (entry,1,(MethodInfo_49C83F0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (pSVar2 == (System_String_o *)0x0) {
      pSVar2 = (System_String_o *)0x0;
    }
    else if (pSVar2->klass != g_data_07556758) goto label_05e32422;
  }
  else {
    pSVar2 = g_data_07556758->static_fields->Empty;
  }
  (__this->fields).IPAddress = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).IPAddress);
  bVar1 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (entry,2,(MethodInfo_49C86C0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar1) {
    pSVar2 = (System_String_o *)
             System_Collections_Generic_Dictionary_byte__object___get_Item
                       (entry,2,(MethodInfo_49C83F0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (pSVar2 == (System_String_o *)0x0) {
      pSVar2 = (System_String_o *)0x0;
    }
    else if (pSVar2->klass != g_data_07556758) {
label_05e32422:
      il2cpp_codegen_raise_invalid_cast_exception(pSVar2,g_data_07556758);
    }
  }
  else {
    pSVar2 = g_data_07556758->static_fields->Empty;
  }
  (__this->fields).Username = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Username);
  bVar1 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (entry,3,(MethodInfo_49C86C0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  iVar4 = 0;
  if (bVar1) {
    obj = System_Collections_Generic_Dictionary_byte__object___get_Item
                    (entry,3,(MethodInfo_49C83F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (obj == (Il2CppObject *)0x0) goto label_05e324b9;
    if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception(obj);
    }
    piVar3 = il2cpp_vm_Object_Unbox(obj);
    iVar4 = *piVar3;
  }
  (__this->fields).ActorNumber = iVar4;
  return __this;
}


// Anticheat.ModeratorManager$$RequestPlayerList
// il2cpp: void Anticheat_ModeratorManager__RequestPlayerList (System_Action_string__o* localStatus, const MethodInfo* method);
// 0x5e324e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e32741: jmp 0x5e3260d

void Anticheat_ModeratorManager__RequestPlayerList(System_Action_string__o *localStatus,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  Anticheat_ModeratorManager___c__DisplayClass85_0_o *__this;
  System_Action_Dictionary_byte__object___o *__this_00;
  System_Action_o *__this_01;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_byte__object__o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_0754855c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ModeratorManager_c__DisplayClass85_0_RequestPlayerList_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ModeratorManager_c__DisplayClass85_0_RequestPlayerList_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager_c__DisplayClass85_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Sending request...");
    Il2CppMethodInitialized_0754855c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager_c__DisplayClass85_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass85_0_o *)0x0) goto label_05e32746;
  (__this->fields).localStatus = localStatus;
  Il2CppCodeGenWriteBarrier(&(__this->fields).localStatus);
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    if (Il2CppMethodInitialized_07548558 == '\0') goto label_05e32700;
label_05e325de:
    pSVar3 = "Sending request...";
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e325ef;
label_05e32724:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    if (Il2CppMethodInitialized_07548558 != '\0') goto label_05e325de;
label_05e32700:
    pSVar3 = "Sending request...";
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e32724;
label_05e325ef:
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Dictionary_byte_object);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass85_0_RequestPlayerList_b__0,
             (MethodInfo_4A81BE0 *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass85_0_RequestPlayerList_b__1,
             (MethodInfo *)0x0);
  pSVar3 = Anticheat_ModeratorManager__TrackRequest(5.0,__this_00,__this_01,method_00);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
  System_Collections_Generic_Dictionary_byte__object____ctor
            (__this_02,(MethodInfo_49C7870 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor
            );
  if (__this_02 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,0,(Il2CppObject *)pSVar3,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    Anticheat_ModeratorManager__RaiseModEvent(0xb6,__this_02,method_01);
    return;
  }
label_05e32746:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$PopulatePlayerList
// il2cpp: void Anticheat_ModeratorManager__PopulatePlayerList (System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x5e32760
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e32788: cmp byte ptr [rip + 0x1715760], 0
// asm:   0x5e3278f: je 0x5e32806
// asm:   0x5e327b5: jmp 0x5e329c3
// asm:   0x5e3292d: jmp 0x5e3295c

void Anticheat_ModeratorManager__PopulatePlayerList
               (System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  uint32_t uVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  System_Collections_Generic_Dictionary_byte__object__o *entry;
  System_Action_o *pSVar4;
  System_Collections_Generic_Dictionary_byte__object__array *pSVar5;
  ulong uVar6;
  Anticheat_PlayerEntry_o *value;
  MethodInfo *method_00;
  ulong uVar7;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_0754855d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_0754855d = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_07547eef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eef = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
  }
  else {
    pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x10);
  }
  if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
label_05e329c3:
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_int__object___Clear
            (pSVar3,(MethodInfo_4A0F8F0 *)
                    MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_Clear);
  method_01 = (MethodInfo *)0x1;
  pSVar5 = Anticheat_ModeratorManager__GetResponseEntries(data,1,method_00);
  if ((pSVar5 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) &&
     (0 < (int)pSVar5->max_length)) {
    uVar6 = pSVar5->max_length & 0xffffffff;
    uVar7 = 0;
    do {
      if (uVar6 <= uVar7) {
        ThrowIndexOutOfRangeException();
      }
      entry = pSVar5->m_Items[uVar7];
      if (entry != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
        if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
        }
        value = Anticheat_ModeratorManager__ParsePlayerEntry(entry,method_01);
        if (value == (Anticheat_PlayerEntry_o *)0x0) goto label_05e329c3;
        if (0 < (value->fields).ActorNumber) {
          if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
            if (Il2CppMethodInitialized_07547eef != '\0') goto label_05e3291d;
label_05e3293d:
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
            Il2CppMethodInitialized_07547eef = '\x01';
            uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
          }
          else {
            if (Il2CppMethodInitialized_07547eef == '\0') goto label_05e3293d;
label_05e3291d:
            uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
          }
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
          }
          pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
          if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05e329c3;
          uVar2 = (value->fields).ActorNumber;
          method_01 = (MethodInfo *)(ulong)uVar2;
          System_Collections_Generic_Dictionary_int__object___set_Item
                    (pSVar3,uVar2,(Il2CppObject *)value,
                     (MethodInfo_4A0F720 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_set_Item);
        }
      }
      uVar7 = uVar7 + 1;
      uVar2 = (uint)pSVar5->max_length;
      uVar6 = (ulong)uVar2;
    } while ((long)uVar7 < (long)(int)uVar2);
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar4 = TypeInfo_Anticheat_ModeratorManager->static_fields->PlayerListChanged;
  }
  else {
    pSVar4 = TypeInfo_Anticheat_ModeratorManager->static_fields->PlayerListChanged;
  }
  if (pSVar4 == (System_Action_o *)0x0) {
    return;
  }
  (*(code *)(pSVar4->fields).invoke_impl)((pSVar4->fields).method_code,(pSVar4->fields).method);
  return;
}


// Anticheat.ModeratorManager$$HandlePlayerListNotification
// il2cpp: void Anticheat_ModeratorManager__HandlePlayerListNotification (ExitGames_Client_Photon_EventData_o* photonEvent, const MethodInfo* method);
// 0x5e30770
// eh: try 0x5e308a3..0x5e30af7 -> pad 0x5e30b01 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e30b19..0x5e30b1e -> pad 0x5e30b41 cleanup
// eh: try 0x5e30b44..0x5e30b4e -> pad 0x5e30b56 catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e3087f: lea r14, [rip + 0x146ae62]  ; MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_MoveNext
// asm:   0x5e30886: mov rbx, rsp
// asm:   0x5e30889: lea r12, [rip + 0x146ae60]  ; MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_get_Current
// asm:   0x5e30890: lea r13, [rip + 0x1458ab9]  ; MethodInfo_System_Collections_Generic_Dictionary_byte_object_set_Item
// asm:   0x5e30897: nop word ptr [rax + rax]
// asm:   0x5e30930: jmp 0x5e30ad6
// asm:   0x5e30a5d: jmp 0x5e30a8c
// asm:   0x5e30af7: jmp 0x5e30b01
// asm:   0x5e30af9: jmp 0x5e30b01
// asm:   0x5e30afb: jmp 0x5e30b01
// asm:   0x5e30afd: jmp 0x5e30b01
// asm:   0x5e30aff: jmp 0x5e30b01
// asm:   0x5e30b01: mov r14, rax
// asm:   0x5e30b04: cmp edx, 1
// asm:   0x5e30b07: jne 0x5e30b44
// asm:   0x5e30b09: mov rdi, r14
// asm:   0x5e30b0c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e30b11: mov rbx, qword ptr [rax]
// asm:   0x5e30b14: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5e30b19: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e30b1e: lea rax, [rip + 0x146abbb]  ; MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_Dispose
// asm:   0x5e30b25: mov rsi, qword ptr [rax]
// asm:   0x5e30b28: mov rdi, rsp
// asm:   0x5e30b2b: call 0x3ea2fd0  ; ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___Dispose()
// asm:   0x5e30b30: test rbx, rbx
// asm:   0x5e30b33: je 0x5e308f8
// asm:   0x5e30b39: mov rdi, rbx
// asm:   0x5e30b3c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e30b41: mov r14, rax
// asm:   0x5e30b44: lea rdi, [rsp + 0x10]
// asm:   0x5e30b49: call 0x2fe0fd0  ; il2cpp_runtime_helper_02fe0fd0()
// asm:   0x5e30b4e: mov rdi, r14
// asm:   0x5e30b51: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e30b56: mov rdi, rax
// asm:   0x5e30b59: call 0x2ab61e0  ; __clang_call_terminate()

void Anticheat_ModeratorManager__HandlePlayerListNotification
               (ExitGames_Client_Photon_EventData_o *photonEvent,MethodInfo *method)

{
  uint32_t uVar1;
  uint uVar2;
  ExitGames_Client_Photon_ParameterDictionary_o *__this;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  System_Action_o *pSVar4;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__Fields *pEVar5;
  bool bVar6;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar7;
  System_Collections_Generic_Dictionary_byte__object__array *pSVar8;
  ulong uVar9;
  Anticheat_PlayerEntry_o *value;
  MethodInfo *method_00;
  ulong uVar10;
  MethodInfo *method_01;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o EVar11;
  System_Collections_Generic_KeyValuePair_K__V__o SVar12;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__Fields EStack_48;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  
  if (Il2CppMethodInitialized_0754855e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_byte_object_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_byte_object_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_get_Current);
    Il2CppMethodInitialized_0754855e = '\x01';
  }
  EStack_48._index = 0;
  EStack_48._4_4_ = 0;
  pSVar7 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
  System_Collections_Generic_Dictionary_byte__object____ctor
            (pSVar7,(MethodInfo_49C7870 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
  if ((photonEvent == (ExitGames_Client_Photon_EventData_o *)0x0) ||
     (__this = (photonEvent->fields).Parameters,
     __this == (ExitGames_Client_Photon_ParameterDictionary_o *)0x0)) goto label_05e30ad6;
  EVar11 = ExitGames_Client_Photon_ParameterDictionary__GetEnumerator(__this,(MethodInfo *)0x0);
  EStack_48._dict = EVar11.fields._dict;
  puStack_30 = (undefined1 *)&EStack_48;
  EStack_48._index = EVar11.fields._index;
  uStack_38 = 0;
  pEVar5 = &EStack_48;
  if (pSVar7 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    bVar6 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___MoveNext
                      ((ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o *)&EStack_48,
                       (MethodInfo_3DA2F70 *)
                       MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_MoveNext
                      );
    if (bVar6) {
      ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___get_Current
                ((ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o *)&EStack_48,
                 (MethodInfo_3DA2EE0 *)
                 MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_get_Current);
      ThrowNullReferenceException();
    }
  }
  else {
    while (puStack_30 = (undefined1 *)pEVar5,
          bVar6 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___MoveNext
                            ((ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o *)
                             &EStack_48,
                             (MethodInfo_3DA2F70 *)
                             MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_MoveNext
                            ), bVar6) {
      SVar12 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___get_Current
                         ((ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o *)
                          &EStack_48,
                          (MethodInfo_3DA2EE0 *)
                          MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_get_Current
                         );
      System_Collections_Generic_Dictionary_byte__object___set_Item
                (pSVar7,(uint8_t)SVar12.fields.key,SVar12.fields.value,
                 (MethodInfo_49C8480 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_set_Item);
      pEVar5 = (ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__Fields *)puStack_30;
    }
  }
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___Dispose
            ((ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o *)&EStack_48,
             (MethodInfo_3DA2FD0 *)
             MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_Dispose);
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    if (Il2CppMethodInitialized_07547eef != '\0') goto label_05e30914;
label_05e30943:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eef = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07547eef == '\0') goto label_05e30943;
label_05e30914:
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
  }
  else {
    pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 0x10);
  }
  if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary_int__object___Clear
              (pSVar3,(MethodInfo_4A0F8F0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_Clear);
    method_01 = (MethodInfo *)0x0;
    pSVar8 = Anticheat_ModeratorManager__GetResponseEntries(pSVar7,0,method_00);
    if ((pSVar8 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) &&
       (0 < (int)pSVar8->max_length)) {
      uVar9 = pSVar8->max_length & 0xffffffff;
      uVar10 = 0;
      do {
        if (uVar9 <= uVar10) {
          ThrowIndexOutOfRangeException();
        }
        pSVar7 = pSVar8->m_Items[uVar10];
        if (pSVar7 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
          if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
          }
          value = Anticheat_ModeratorManager__ParsePlayerEntry(pSVar7,method_01);
          if (value == (Anticheat_PlayerEntry_o *)0x0) goto label_05e30ad6;
          if (0 < (value->fields).ActorNumber) {
            if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
              if (Il2CppMethodInitialized_07547eef != '\0') goto label_05e30a4d;
label_05e30a6d:
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
              Il2CppMethodInitialized_07547eef = '\x01';
              uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
            }
            else {
              if (Il2CppMethodInitialized_07547eef == '\0') goto label_05e30a6d;
label_05e30a4d:
              uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
            }
            if (uVar1 == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
            }
            pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
            if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05e30ad6;
            uVar2 = (value->fields).ActorNumber;
            method_01 = (MethodInfo *)(ulong)uVar2;
            System_Collections_Generic_Dictionary_int__object___set_Item
                      (pSVar3,uVar2,(Il2CppObject *)value,
                       (MethodInfo_4A0F720 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_set_Item);
          }
        }
        uVar10 = uVar10 + 1;
        uVar2 = (uint)pSVar8->max_length;
        uVar9 = (ulong)uVar2;
      } while ((long)uVar10 < (long)(int)uVar2);
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar4 = TypeInfo_Anticheat_ModeratorManager->static_fields->PlayerListChanged;
    if (pSVar4 != (System_Action_o *)0x0) {
      (*(code *)(pSVar4->fields).invoke_impl)((pSVar4->fields).method_code,(pSVar4->fields).method);
    }
    return;
  }
label_05e30ad6:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$HandlePlayerJoinNotification
// il2cpp: void Anticheat_ModeratorManager__HandlePlayerJoinNotification (ExitGames_Client_Photon_EventData_o* photonEvent, const MethodInfo* method);
// 0x5e30b60
// eh: try 0x5e30c83..0x5e30e55 -> pad 0x5e30e5f (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e30e77..0x5e30e7c -> pad 0x5e30e9f cleanup
// eh: try 0x5e30ea2..0x5e30eac -> pad 0x5e30eb4 catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e30c5f: lea r14, [rip + 0x146aa82]  ; MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_MoveNext
// asm:   0x5e30c66: mov rbx, rsp
// asm:   0x5e30c69: lea r12, [rip + 0x146aa80]  ; MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_get_Current
// asm:   0x5e30c70: lea r13, [rip + 0x14586d9]  ; MethodInfo_System_Collections_Generic_Dictionary_byte_object_set_Item
// asm:   0x5e30c77: nop word ptr [rax + rax]
// asm:   0x5e30e55: jmp 0x5e30e5f
// asm:   0x5e30e57: jmp 0x5e30e5f
// asm:   0x5e30e59: jmp 0x5e30e5f
// asm:   0x5e30e5b: jmp 0x5e30e5f
// asm:   0x5e30e5d: jmp 0x5e30e5f
// asm:   0x5e30e5f: mov r14, rax
// asm:   0x5e30e62: cmp edx, 1
// asm:   0x5e30e65: jne 0x5e30ea2
// asm:   0x5e30e67: mov rdi, r14
// asm:   0x5e30e6a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e30e6f: mov rbx, qword ptr [rax]
// asm:   0x5e30e72: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5e30e77: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e30e7c: lea rax, [rip + 0x146a85d]  ; MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_Dispose
// asm:   0x5e30e83: mov rsi, qword ptr [rax]
// asm:   0x5e30e86: mov rdi, rsp
// asm:   0x5e30e89: call 0x3ea2fd0  ; ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___Dispose()
// asm:   0x5e30e8e: test rbx, rbx
// asm:   0x5e30e91: je 0x5e30cd8
// asm:   0x5e30e97: mov rdi, rbx
// asm:   0x5e30e9a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e30e9f: mov r14, rax
// asm:   0x5e30ea2: lea rdi, [rsp + 0x10]
// asm:   0x5e30ea7: call 0x2fe1000  ; il2cpp_runtime_helper_02fe1000()
// asm:   0x5e30eac: mov rdi, r14
// asm:   0x5e30eaf: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e30eb4: mov rdi, rax
// asm:   0x5e30eb7: call 0x2ab61e0  ; __clang_call_terminate()

void Anticheat_ModeratorManager__HandlePlayerJoinNotification
               (ExitGames_Client_Photon_EventData_o *photonEvent,MethodInfo *method)

{
  ExitGames_Client_Photon_ParameterDictionary_o *__this;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Action_o *pSVar1;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__Fields *pEVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar4;
  System_Collections_Generic_Dictionary_byte__object__array *pSVar5;
  Anticheat_PlayerEntry_o *value;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o EVar6;
  System_Collections_Generic_KeyValuePair_K__V__o SVar7;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__Fields local_48;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_0754855f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_byte_object_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_byte_object_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_get_Current);
    Il2CppMethodInitialized_0754855f = '\x01';
  }
  local_48._index = 0;
  local_48._4_4_ = 0;
  pSVar4 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
  System_Collections_Generic_Dictionary_byte__object____ctor
            (pSVar4,(MethodInfo_49C7870 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
  if ((photonEvent == (ExitGames_Client_Photon_EventData_o *)0x0) ||
     (__this = (photonEvent->fields).Parameters,
     __this == (ExitGames_Client_Photon_ParameterDictionary_o *)0x0)) goto label_05e30e34;
  EVar6 = ExitGames_Client_Photon_ParameterDictionary__GetEnumerator(__this,(MethodInfo *)0x0);
  local_48._dict = EVar6.fields._dict;
  local_30 = (undefined1 *)&local_48;
  local_48._index = EVar6.fields._index;
  local_38 = 0;
  pEVar2 = &local_48;
  if (pSVar4 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    bVar3 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___MoveNext
                      ((ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o *)&local_48,
                       (MethodInfo_3DA2F70 *)
                       MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_MoveNext
                      );
    if (bVar3) {
      ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___get_Current
                ((ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o *)&local_48,
                 (MethodInfo_3DA2EE0 *)
                 MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_get_Current);
      ThrowNullReferenceException();
    }
  }
  else {
    while (local_30 = (undefined1 *)pEVar2,
          bVar3 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___MoveNext
                            ((ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o *)
                             &local_48,
                             (MethodInfo_3DA2F70 *)
                             MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_MoveNext
                            ), bVar3) {
      SVar7 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___get_Current
                        ((ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o *)&local_48,
                         (MethodInfo_3DA2EE0 *)
                         MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_get_Current
                        );
      System_Collections_Generic_Dictionary_byte__object___set_Item
                (pSVar4,(uint8_t)SVar7.fields.key,SVar7.fields.value,
                 (MethodInfo_49C8480 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_set_Item);
      pEVar2 = (ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__Fields *)local_30;
    }
  }
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___Dispose
            ((ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o *)&local_48,
             (MethodInfo_3DA2FD0 *)
             MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_Dispose);
  method_00 = extraout_RDX;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    method_00 = extraout_RDX_00;
  }
  method_01 = (MethodInfo *)0x0;
  pSVar5 = Anticheat_ModeratorManager__GetResponseEntries(pSVar4,0,method_00);
  if (pSVar5 == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
    return;
  }
  if (pSVar5->max_length == 0) {
    return;
  }
  if ((int)pSVar5->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pSVar4 = pSVar5->m_Items[0];
  if (pSVar4 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    return;
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  value = Anticheat_ModeratorManager__ParsePlayerEntry(pSVar4,method_01);
  if (value == (Anticheat_PlayerEntry_o *)0x0) goto label_05e30e34;
  if ((value->fields).ActorNumber < 1) goto label_05e30da6;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    if (Il2CppMethodInitialized_07547eef != '\0') goto label_05e30d6d;
label_05e30df5:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eef = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e30d7d;
label_05e30e18:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
  }
  else {
    if (Il2CppMethodInitialized_07547eef == '\0') goto label_05e30df5;
label_05e30d6d:
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e30e18;
label_05e30d7d:
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
  }
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary_int__object___set_Item
              (__this_00,(value->fields).ActorNumber,(Il2CppObject *)value,
               (MethodInfo_4A0F720 *)MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_set_Item
              );
label_05e30da6:
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->PlayerListChanged;
    if (pSVar1 != (System_Action_o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
    }
    return;
  }
label_05e30e34:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$KickPlayer
// il2cpp: void Anticheat_ModeratorManager__KickPlayer (int32_t actorNumber, System_Action_string__o* localStatus, const MethodInfo* method);
// 0x5e329d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e32cb9: jmp 0x5e32b04

void Anticheat_ModeratorManager__KickPlayer
               (int32_t actorNumber,System_Action_string__o *localStatus,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  Anticheat_ModeratorManager___c__DisplayClass89_0_o *__this;
  System_Action_Dictionary_byte__object___o *__this_00;
  System_Action_o *__this_01;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_byte__object__o *__this_02;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int32_t aiStack_34 [3];
  
  if (Il2CppMethodInitialized_07548560 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ModeratorManager_c__DisplayClass89_0_KickPlayer_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ModeratorManager_c__DisplayClass89_0_KickPlayer_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager_c__DisplayClass89_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Sending request...");
    Il2CppMethodInitialized_07548560 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager_c__DisplayClass89_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass89_0_o *)0x0) goto label_05e32cbe;
  (__this->fields).localStatus = localStatus;
  Il2CppCodeGenWriteBarrier(&(__this->fields).localStatus);
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    if (Il2CppMethodInitialized_07548558 == '\0') goto label_05e32c78;
label_05e32ad5:
    pSVar3 = "Sending request...";
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e32ae6;
label_05e32c9c:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    if (Il2CppMethodInitialized_07548558 != '\0') goto label_05e32ad5;
label_05e32c78:
    pSVar3 = "Sending request...";
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e32c9c;
label_05e32ae6:
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Dictionary_byte_object);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass89_0_KickPlayer_b__0,
             (MethodInfo_4A81BE0 *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass89_0_KickPlayer_b__1,
             (MethodInfo *)0x0);
  pSVar3 = Anticheat_ModeratorManager__TrackRequest(5.0,__this_00,__this_01,method_00);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
  System_Collections_Generic_Dictionary_byte__object____ctor
            (__this_02,(MethodInfo_49C7870 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor
            );
  if (__this_02 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,0,(Il2CppObject *)pSVar3,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    aiStack_34[2] = 1;
    pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,aiStack_34 + 2);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,1,pIVar4,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    aiStack_34[1] = 0;
    pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,aiStack_34 + 1);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,2,pIVar4,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    aiStack_34[0] = actorNumber;
    pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,aiStack_34);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,3,pIVar4,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_02,method_01);
    return;
  }
label_05e32cbe:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$RoomBan
// il2cpp: void Anticheat_ModeratorManager__RoomBan (int32_t actorNumber, bool ipBan, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x5e32ce0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e33038: jmp 0x5e32e1f

void Anticheat_ModeratorManager__RoomBan
               (int32_t actorNumber,bool ipBan,System_Action_string__o *localStatus,System_String_o *reason,
               MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  Anticheat_ModeratorManager___c__DisplayClass90_0_o *__this;
  System_Action_Dictionary_byte__object___o *__this_00;
  System_Action_o *__this_01;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_byte__object__o *__this_02;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  int32_t local_3c [3];
  
  if (Il2CppMethodInitialized_07548561 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ModeratorManager_c__DisplayClass90_0_RoomBan_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ModeratorManager_c__DisplayClass90_0_RoomBan_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager_c__DisplayClass90_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Sending request...");
    Il2CppMethodInitialized_07548561 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager_c__DisplayClass90_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass90_0_o *)0x0) goto label_05e3303d;
  (__this->fields).localStatus = localStatus;
  Il2CppCodeGenWriteBarrier(&(__this->fields).localStatus);
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    if (Il2CppMethodInitialized_07548558 == '\0') goto label_05e32fe8;
label_05e32df1:
    pSVar3 = "Sending request...";
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e32e01;
label_05e33012:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    if (Il2CppMethodInitialized_07548558 != '\0') goto label_05e32df1;
label_05e32fe8:
    pSVar3 = "Sending request...";
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e33012;
label_05e32e01:
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Dictionary_byte_object);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass90_0_RoomBan_b__0,
             (MethodInfo_4A81BE0 *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass90_0_RoomBan_b__1,
             (MethodInfo *)0x0);
  pSVar3 = Anticheat_ModeratorManager__TrackRequest(5.0,__this_00,__this_01,method_00);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
  System_Collections_Generic_Dictionary_byte__object____ctor
            (__this_02,(MethodInfo_49C7870 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor
            );
  if (__this_02 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,0,(Il2CppObject *)pSVar3,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    local_3c[2] = ipBan | 2;
    pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,local_3c + 2);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,1,pIVar4,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    local_3c[1] = 0;
    pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,local_3c + 1);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,2,pIVar4,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    local_3c[0] = actorNumber;
    pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,local_3c);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,3,pIVar4,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    if (reason == (System_String_o *)0x0) {
      reason = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,4,(Il2CppObject *)reason,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    method_01 = extraout_RDX;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      method_01 = extraout_RDX_00;
    }
    Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_02,method_01);
    return;
  }
label_05e3303d:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$RoomBanPlayerEntry
// il2cpp: void Anticheat_ModeratorManager__RoomBanPlayerEntry (Anticheat_PlayerEntry_o* player, bool ipBan, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x5e33060
// asm: 16 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e331a2: lea rax, [rip + 0x14b23c7]  ; "Player has no IP address to ban."
// asm:   0x5e331a9: mov rbx, qword ptr [rax]
// asm:   0x5e331ac: cmp byte ptr [rip + 0x17153a5], 0
// asm:   0x5e331b3: je 0x5e331e5
// asm:   0x5e331b5: jmp 0x5e331f8
// asm:   0x5e331d2: lea rax, [rip + 0x14ac84f]  ; "Invalid player entry."
// asm:   0x5e331d9: mov rbx, qword ptr [rax]
// asm:   0x5e331dc: cmp byte ptr [rip + 0x1715375], 0
// asm:   0x5e331e3: jne 0x5e331f8
// asm:   0x5e3327d: lea rax, [rip + 0x14b22f4]  ; "Player has no session ID to ban."
// asm:   0x5e33284: mov rbx, qword ptr [rax]
// asm:   0x5e33287: cmp byte ptr [rip + 0x17152ca], 0
// asm:   0x5e33294: jmp 0x5e331f8
// asm:   0x5e332b5: jmp 0x5e33226
// asm:   0x5e3331e: jmp 0x5e33346
// asm:   0x5e33574: jmp 0x5e33397

void Anticheat_ModeratorManager__RoomBanPlayerEntry
               (Anticheat_PlayerEntry_o *player,bool ipBan,System_Action_string__o *localStatus,
               System_String_o *reason,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  System_String_o *pSVar4;
  bool bVar5;
  Anticheat_ModeratorManager___c__DisplayClass91_0_o *__this;
  System_Action_Dictionary_byte__object___o *__this_00;
  System_Action_o *__this_01;
  System_String_o *pSVar6;
  System_Collections_Generic_Dictionary_byte__object__o *__this_02;
  Il2CppObject *pIVar7;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  Anticheat_ModeratorManager___c__DisplayClass91_0_Fields *targetAddress;
  int local_3c;
  int local_38;
  uint local_34;
  
  if (Il2CppMethodInitialized_07548562 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ModeratorManager_c__DisplayClass91_0_RoomBanPlayerEntry_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ModeratorManager_c__DisplayClass91_0_RoomBanPlayerEntry_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager_c__DisplayClass91_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Player has no session ID to ban.");
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid player entry.");
    il2cpp_codegen_initialize_runtime_metadata(&"Sending request...");
    il2cpp_codegen_initialize_runtime_metadata(&"Player has no IP address to ban.");
    Il2CppMethodInitialized_07548562 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager_c__DisplayClass91_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass91_0_o *)0x0) goto label_05e335bd;
  targetAddress = &__this->fields;
  (__this->fields).localStatus = localStatus;
  Il2CppCodeGenWriteBarrier(&targetAddress->localStatus);
  if (player == (Anticheat_PlayerEntry_o *)0x0) {
    pSVar2 = targetAddress->localStatus;
    pSVar4 = "Invalid player entry.";
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      pSVar4 = "Invalid player entry.";
    }
joined_r0x05e3328e:
    if (Il2CppMethodInitialized_07548558 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_07548558 = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
    }
    else {
      pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
    }
    if (pSVar3 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pSVar4,(pSVar3->fields).method);
    }
    if (pSVar2 == (System_Action_string__o *)0x0) {
      return;
    }
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar4,(pSVar2->fields).method);
    return;
  }
  if (ipBan) {
    bVar5 = System_String__IsNullOrEmpty((player->fields).IPAddress,(MethodInfo *)0x0);
    if (bVar5) {
      pSVar2 = targetAddress->localStatus;
      pSVar4 = "Player has no IP address to ban.";
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
        pSVar4 = "Player has no IP address to ban.";
      }
      goto joined_r0x05e3328e;
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      if (Il2CppMethodInitialized_07547eed == '\0') goto label_05e3358b;
label_05e332df:
      uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (Il2CppMethodInitialized_07547eed != '\0') goto label_05e332df;
label_05e3358b:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_07547eed = '\x01';
      uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    local_3c = (uint)(TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField ==
                     false) * 2 + 2;
    pSVar4 = (player->fields).IPAddress;
    pSVar2 = targetAddress->localStatus;
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar5 = System_String__IsNullOrEmpty((player->fields).SessionId,(MethodInfo *)0x0);
    if (bVar5) {
      pSVar2 = targetAddress->localStatus;
      pSVar4 = "Player has no session ID to ban.";
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
        pSVar4 = "Player has no session ID to ban.";
      }
      goto joined_r0x05e3328e;
    }
    local_3c = 1;
    pSVar4 = (player->fields).SessionId;
    pSVar2 = targetAddress->localStatus;
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar6 = "Sending request...";
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e33551;
label_05e33379:
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e33379;
label_05e33551:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pSVar6,(pSVar3->fields).method);
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar6,(pSVar2->fields).method);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Dictionary_byte_object);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass91_0_RoomBanPlayerEntry_b__0,
             (MethodInfo_4A81BE0 *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass91_0_RoomBanPlayerEntry_b__1,
             (MethodInfo *)0x0);
  pSVar6 = Anticheat_ModeratorManager__TrackRequest(5.0,__this_00,__this_01,method_00);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
  System_Collections_Generic_Dictionary_byte__object____ctor
            (__this_02,(MethodInfo_49C7870 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor
            );
  if (__this_02 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,0,(Il2CppObject *)pSVar6,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    local_34 = ipBan | 2;
    pIVar7 = il2cpp_vm_Object_Box(g_data_07556710,&local_34);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,1,pIVar7,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    local_38 = local_3c;
    pIVar7 = il2cpp_vm_Object_Box(g_data_07556710,&local_38);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,2,pIVar7,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,3,(Il2CppObject *)pSVar4,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    if (reason == (System_String_o *)0x0) {
      reason = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,4,(Il2CppObject *)reason,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    method_01 = extraout_RDX;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      method_01 = extraout_RDX_00;
    }
    Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_02,method_01);
    return;
  }
label_05e335bd:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$RoomUnban
// il2cpp: void Anticheat_ModeratorManager__RoomUnban (Anticheat_RoomBanEntry_o* banEntry, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x5e335e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e33866: jmp 0x5e33719

void Anticheat_ModeratorManager__RoomUnban
               (Anticheat_RoomBanEntry_o *banEntry,System_Action_string__o *localStatus,
               System_String_o *reason,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  Anticheat_ModeratorManager___c__DisplayClass92_0_o *__this;
  System_Action_Dictionary_byte__object___o *__this_00;
  System_Action_o *__this_01;
  System_String_o *pSVar4;
  System_String_o *value;
  System_Collections_Generic_Dictionary_byte__object__o *__this_02;
  Il2CppObject *pIVar5;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  int iVar6;
  int local_44;
  uint local_40;
  int local_3c;
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07548563 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ModeratorManager_c__DisplayClass92_0_RoomUnban_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ModeratorManager_c__DisplayClass92_0_RoomUnban_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager_c__DisplayClass92_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Sending request...");
    Il2CppMethodInitialized_07548563 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager_c__DisplayClass92_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass92_0_o *)0x0) goto label_05e339ff;
  (__this->fields).localStatus = localStatus;
  Il2CppCodeGenWriteBarrier(&(__this->fields).localStatus);
  pSVar2 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    if (Il2CppMethodInitialized_07548558 != '\0') goto label_05e336ea;
label_05e33825:
    pSVar4 = "Sending request...";
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e336fb;
label_05e33849:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    if (Il2CppMethodInitialized_07548558 == '\0') goto label_05e33825;
label_05e336ea:
    pSVar4 = "Sending request...";
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e33849;
label_05e336fb:
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pSVar4,(pSVar3->fields).method);
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar4,(pSVar2->fields).method);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Dictionary_byte_object);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass92_0_RoomUnban_b__0,
             (MethodInfo_4A81BE0 *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass92_0_RoomUnban_b__1,
             (MethodInfo *)0x0);
  pSVar4 = Anticheat_ModeratorManager__TrackRequest(5.0,__this_00,__this_01,method_00);
  if (banEntry == (Anticheat_RoomBanEntry_o *)0x0) goto label_05e339ff;
  iVar6 = (banEntry->fields).ActorNumber;
  local_38 = reason;
  if ((banEntry->fields).IsIPBan == false) {
    if (0 < iVar6) goto label_05e33873;
    value = (banEntry->fields).SessionId;
    iVar6 = 1;
  }
  else if (iVar6 < 1) {
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      if (Il2CppMethodInitialized_07547eed != '\0') goto label_05e337d7;
label_05e339cd:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_07547eed = '\x01';
      uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (Il2CppMethodInitialized_07547eed == '\0') goto label_05e339cd;
label_05e337d7:
      uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    iVar6 = (uint)(TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField ==
                  false) * 2 + 2;
    value = (banEntry->fields).IPAddress;
  }
  else {
label_05e33873:
    local_3c = iVar6;
    value = (System_String_o *)il2cpp_vm_Object_Box(g_data_07556710,&local_3c);
    iVar6 = 0;
  }
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
  System_Collections_Generic_Dictionary_byte__object____ctor
            (__this_02,(MethodInfo_49C7870 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor
            );
  if (__this_02 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,0,(Il2CppObject *)pSVar4,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    local_40 = (banEntry->fields).IsIPBan == false ^ 5;
    pIVar5 = il2cpp_vm_Object_Box(g_data_07556710,&local_40);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,1,pIVar5,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    local_44 = iVar6;
    pIVar5 = il2cpp_vm_Object_Box(g_data_07556710,&local_44);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,2,pIVar5,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,3,(Il2CppObject *)value,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    pSVar4 = local_38;
    if (local_38 == (System_String_o *)0x0) {
      pSVar4 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,4,(Il2CppObject *)pSVar4,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    method_01 = extraout_RDX;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      method_01 = extraout_RDX_00;
    }
    Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_02,method_01);
    return;
  }
label_05e339ff:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$RequestRoomBanList
// il2cpp: void Anticheat_ModeratorManager__RequestRoomBanList (System_Action_string__o* localStatus, const MethodInfo* method);
// 0x5e33a20

void Anticheat_ModeratorManager__RequestRoomBanList(System_Action_string__o *localStatus,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_07548564 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548564 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RequestRoomBanList_5d33a70(0,0x32,localStatus,in_RCX);
  return;
}


// Anticheat.ModeratorManager$$RequestRoomBanList
// il2cpp: void Anticheat_ModeratorManager__RequestRoomBanList (int32_t startIndex, int32_t amount, System_Action_string__o* localStatus, const MethodInfo* method);
// 0x5e33a70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e33d47: jmp 0x5e33ba6

void Anticheat_ModeratorManager__RequestRoomBanList_5d33a70
               (int32_t startIndex,int32_t amount,System_Action_string__o *localStatus,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  Anticheat_ModeratorManager___c__DisplayClass94_0_o *__this;
  System_Action_Dictionary_byte__object___o *__this_00;
  System_Action_o *__this_01;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_byte__object__o *__this_02;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int32_t iVar5;
  int32_t local_38;
  int32_t local_34;
  
  if (Il2CppMethodInitialized_07548565 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ModeratorManager_c__DisplayClass94_0_RequestRoomBanList_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ModeratorManager_c__DisplayClass94_0_RequestRoomBanList_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager_c__DisplayClass94_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Sending request...");
    Il2CppMethodInitialized_07548565 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager_c__DisplayClass94_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass94_0_o *)0x0) goto label_05e33d4c;
  (__this->fields).localStatus = localStatus;
  Il2CppCodeGenWriteBarrier(&(__this->fields).localStatus);
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    if (Il2CppMethodInitialized_07548558 == '\0') goto label_05e33d06;
label_05e33b77:
    pSVar3 = "Sending request...";
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e33b88;
label_05e33d2a:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    if (Il2CppMethodInitialized_07548558 != '\0') goto label_05e33b77;
label_05e33d06:
    pSVar3 = "Sending request...";
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e33d2a;
label_05e33b88:
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Dictionary_byte_object);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass94_0_RequestRoomBanList_b__0,
             (MethodInfo_4A81BE0 *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass94_0_RequestRoomBanList_b__1,
             (MethodInfo *)0x0);
  pSVar3 = Anticheat_ModeratorManager__TrackRequest(5.0,__this_00,__this_01,method_00);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
  System_Collections_Generic_Dictionary_byte__object____ctor
            (__this_02,(MethodInfo_49C7870 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor
            );
  if (__this_02 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,0,(Il2CppObject *)pSVar3,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    local_34 = 0;
    if (0 < startIndex) {
      local_34 = startIndex;
    }
    pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,&local_34);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,1,pIVar4,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    iVar5 = 1;
    if (1 < amount) {
      iVar5 = amount;
    }
    _local_38 = CONCAT44(local_34,iVar5);
    pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,&local_38);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,2,pIVar4,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    Anticheat_ModeratorManager__RaiseModEvent(0xb5,__this_02,method_01);
    return;
  }
label_05e33d4c:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$ParseRoomBanEntries
// il2cpp: Anticheat_RoomBanEntry_array* Anticheat_ModeratorManager__ParseRoomBanEntries (System_Collections_Generic_Dictionary_byte__object__array* entries, const MethodInfo* method);
// 0x5e33d70
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e33e6a: mov r14, qword ptr [rsp + 0x28]
// asm:   0x5e33efc: mov qword ptr [rsp + 0x18], rax
// asm:   0x5e33f6c: mov qword ptr [rsp + 8], rax
// asm:   0x5e33fdc: mov qword ptr [rsp + 0x20], rax
// asm:   0x5e340f2: cmp dword ptr [rsp + 4], 1
// asm:   0x5e340f7: je 0x5e340fe
// asm:   0x5e34238: jmp 0x5e340f9
// asm:   0x5e3424f: jmp 0x5e340fe
// asm:   0x5e342c4: jmp 0x5e34301
// asm:   0x5e34324: mov rdi, rax

Anticheat_RoomBanEntry_array *
Anticheat_ModeratorManager__ParseRoomBanEntries
          (System_Collections_Generic_Dictionary_byte__object__array *entries,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  uint32_t uVar4;
  System_Collections_Generic_Dictionary_byte__object__o *__this;
  MethodInfo *pMVar5;
  bool bVar6;
  System_Collections_Generic_List_RoomBanEntry__o *__this_00;
  ulong uVar7;
  System_String_o *pSVar8;
  int *piVar9;
  Anticheat_RoomBanEntry_o *__this_01;
  Anticheat_RoomBanEntry_array *pAVar10;
  Il2CppClass *pIVar11;
  System_String_o *value;
  ulong uVar12;
  int local_64;
  System_String_o *local_60;
  int local_54;
  System_String_o *local_50;
  System_String_o *local_48;
  
  if (Il2CppMethodInitialized_07548566 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_RoomBanEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomBanEntry_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RoomBanEntry_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomBanEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_RoomBanEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_RoomBanEntry);
    Il2CppMethodInitialized_07548566 = '\x01';
  }
  pMVar5 = MethodInfo_System_Array_Empty_RoomBanEntry;
  if (entries == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
    if ((MethodInfo_System_Array_Empty_RoomBanEntry->field7_0x38).methodMetadataHandle == (void *)0x0) {
      il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_RoomBanEntry);
      pIVar11 = *(Il2CppClass **)((long)(pMVar5->field7_0x38).methodMetadataHandle + 0x10);
      bVar2 = (pIVar11->_2).bitflags1;
    }
    else {
      pIVar11 = *(Il2CppClass **)
                 ((long)(MethodInfo_System_Array_Empty_RoomBanEntry->field7_0x38).methodMetadataHandle + 0x10)
      ;
      bVar2 = (pIVar11->_2).bitflags1;
    }
    if ((bVar2 & 1) == 0) {
      pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
      uVar4 = (pIVar11->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar4 = (pIVar11->_2).cctor_finished_or_no_cctor;
    }
    if (uVar4 == 0) {
      il2cpp_codegen_runtime_class_init(pIVar11);
      pIVar11 = (pMVar5->field7_0x38).rgctx_data[2].klass;
      bVar2 = (pIVar11->_2).bitflags1;
    }
    else {
      pIVar11 = (pMVar5->field7_0x38).rgctx_data[2].klass;
      bVar2 = (pIVar11->_2).bitflags1;
    }
    if ((bVar2 & 1) == 0) {
      pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
    }
    return *(Anticheat_RoomBanEntry_array **)pIVar11->static_fields;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_RoomBanEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_RoomBanEntry_ctor);
  if (0 < (int)entries->max_length) {
    uVar7 = entries->max_length & 0xffffffff;
    uVar12 = 0;
    do {
      if (uVar7 <= uVar12) {
        ThrowIndexOutOfRangeException();
      }
      __this = entries->m_Items[uVar12];
      if (__this != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
        bVar6 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                          (__this,0,(MethodInfo_49C86C0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
        if (bVar6) {
          pSVar8 = (System_String_o *)
                   System_Collections_Generic_Dictionary_byte__object___get_Item
                             (__this,0,(MethodInfo_49C83F0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
          if (pSVar8 == (System_String_o *)0x0) {
            local_50 = (System_String_o *)0x0;
          }
          else {
            if ((Il2CppClass *)pSVar8->klass != g_data_07556758) goto label_05e34327;
            local_50 = pSVar8;
          }
        }
        else {
          local_50 = *(System_String_o **)g_data_07556758->static_fields;
        }
        bVar6 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                          (__this,1,(MethodInfo_49C86C0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
        if (bVar6) {
          pSVar8 = (System_String_o *)
                   System_Collections_Generic_Dictionary_byte__object___get_Item
                             (__this,1,(MethodInfo_49C83F0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
          if (pSVar8 == (System_String_o *)0x0) {
            local_60 = (System_String_o *)0x0;
          }
          else {
            if ((Il2CppClass *)pSVar8->klass != g_data_07556758) goto label_05e34327;
            local_60 = pSVar8;
          }
        }
        else {
          local_60 = *(System_String_o **)g_data_07556758->static_fields;
        }
        bVar6 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                          (__this,2,(MethodInfo_49C86C0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
        if (bVar6) {
          pSVar8 = (System_String_o *)
                   System_Collections_Generic_Dictionary_byte__object___get_Item
                             (__this,2,(MethodInfo_49C83F0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
          if (pSVar8 == (System_String_o *)0x0) {
            local_48 = (System_String_o *)0x0;
          }
          else {
            if ((Il2CppClass *)pSVar8->klass != g_data_07556758) goto label_05e34327;
            local_48 = pSVar8;
          }
        }
        else {
          local_48 = *(System_String_o **)g_data_07556758->static_fields;
        }
        bVar6 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                          (__this,3,(MethodInfo_49C86C0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
        local_64 = 0;
        local_54 = 0;
        if (bVar6) {
          pSVar8 = (System_String_o *)
                   System_Collections_Generic_Dictionary_byte__object___get_Item
                             (__this,3,(MethodInfo_49C83F0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
          if (pSVar8 == (System_String_o *)0x0) goto label_05e3431a;
          if ((((Il2CppClass *)pSVar8->klass)->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40))
          goto label_05e34327;
          piVar9 = il2cpp_vm_Object_Unbox((Il2CppObject *)pSVar8);
          local_54 = *piVar9;
        }
        bVar6 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                          (__this,4,(MethodInfo_49C86C0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
        if (bVar6) {
          pSVar8 = (System_String_o *)
                   System_Collections_Generic_Dictionary_byte__object___get_Item
                             (__this,4,(MethodInfo_49C83F0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
          if (pSVar8 == (System_String_o *)0x0) goto label_05e3431a;
          if ((((Il2CppClass *)pSVar8->klass)->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
label_05e34327:
            il2cpp_codegen_raise_invalid_cast_exception(pSVar8);
          }
          piVar9 = il2cpp_vm_Object_Unbox((Il2CppObject *)pSVar8);
          local_64 = *piVar9;
        }
        bVar6 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                          (__this,6,(MethodInfo_49C86C0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
        if (bVar6) {
          pSVar8 = (System_String_o *)
                   System_Collections_Generic_Dictionary_byte__object___get_Item
                             (__this,6,(MethodInfo_49C83F0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
          if (pSVar8 == (System_String_o *)0x0) {
            pSVar8 = (System_String_o *)0x0;
          }
          else if ((Il2CppClass *)pSVar8->klass != g_data_07556758) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar8);
          }
        }
        else {
          pSVar8 = *(System_String_o **)g_data_07556758->static_fields;
        }
        value = local_60;
        if (local_64 != 1) {
          value = local_50;
        }
        bVar6 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_RoomBanEntry);
        System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
        if (__this_01 == (Anticheat_RoomBanEntry_o *)0x0) goto label_05e3431a;
        (__this_01->fields).SessionId = local_50;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).SessionId);
        (__this_01->fields).IPAddress = local_60;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).IPAddress);
        (__this_01->fields).Username = local_48;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).Username);
        (__this_01->fields).ActorNumber = local_54;
        (__this_01->fields).IsIPBan = local_64 == 1;
        (__this_01->fields).Reason = pSVar8;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).Reason);
        (__this_01->fields).CanUnban = 0 < local_54 || !bVar6;
        pMVar5 = MethodInfo_System_Collections_Generic_List_RoomBanEntry_Add;
        if (__this_00 == (System_Collections_Generic_List_RoomBanEntry__o *)0x0) goto label_05e3431a;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pAVar10 = (__this_00->fields)._items;
        if (pAVar10 == (Anticheat_RoomBanEntry_array *)0x0) goto label_05e3431a;
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pAVar10->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          pAVar10->m_Items[(int)uVar3] = __this_01;
          Il2CppCodeGenWriteBarrier(pAVar10->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_01,
                     (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
        }
      }
      uVar12 = uVar12 + 1;
      uVar3 = (uint)entries->max_length;
      uVar7 = (ulong)uVar3;
    } while ((long)uVar12 < (long)(int)uVar3);
  }
  if (__this_00 != (System_Collections_Generic_List_RoomBanEntry__o *)0x0) {
    pAVar10 = (Anticheat_RoomBanEntry_array *)
              System_Collections_Generic_List_object___ToArray
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_RoomBanEntry_ToArray
                        );
    return pAVar10;
  }
label_05e3431a:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$RegionBan
// il2cpp: void Anticheat_ModeratorManager__RegionBan (int32_t actorNumber, bool ipBan, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x5e34350
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e346a8: jmp 0x5e3448f

void Anticheat_ModeratorManager__RegionBan
               (int32_t actorNumber,bool ipBan,System_Action_string__o *localStatus,System_String_o *reason,
               MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  Anticheat_ModeratorManager___c__DisplayClass96_0_o *__this;
  System_Action_Dictionary_byte__object___o *__this_00;
  System_Action_o *__this_01;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_byte__object__o *__this_02;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  int32_t local_3c [3];
  
  if (Il2CppMethodInitialized_07548567 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ModeratorManager_c__DisplayClass96_0_RegionBan_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ModeratorManager_c__DisplayClass96_0_RegionBan_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager_c__DisplayClass96_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Sending request...");
    Il2CppMethodInitialized_07548567 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager_c__DisplayClass96_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass96_0_o *)0x0) goto label_05e346ad;
  (__this->fields).localStatus = localStatus;
  Il2CppCodeGenWriteBarrier(&(__this->fields).localStatus);
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    if (Il2CppMethodInitialized_07548558 == '\0') goto label_05e34658;
label_05e34461:
    pSVar3 = "Sending request...";
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e34471;
label_05e34682:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    if (Il2CppMethodInitialized_07548558 != '\0') goto label_05e34461;
label_05e34658:
    pSVar3 = "Sending request...";
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e34682;
label_05e34471:
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Dictionary_byte_object);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass96_0_RegionBan_b__0,
             (MethodInfo_4A81BE0 *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass96_0_RegionBan_b__1,
             (MethodInfo *)0x0);
  pSVar3 = Anticheat_ModeratorManager__TrackRequest(10.0,__this_00,__this_01,method_00);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
  System_Collections_Generic_Dictionary_byte__object____ctor
            (__this_02,(MethodInfo_49C7870 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor
            );
  if (__this_02 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,0,(Il2CppObject *)pSVar3,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    local_3c[2] = ipBan | 2;
    pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,local_3c + 2);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,1,pIVar4,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    local_3c[1] = 0;
    pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,local_3c + 1);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,2,pIVar4,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    local_3c[0] = actorNumber;
    pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,local_3c);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,3,pIVar4,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    if (reason == (System_String_o *)0x0) {
      reason = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,4,(Il2CppObject *)reason,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    method_01 = extraout_RDX;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      method_01 = extraout_RDX_00;
    }
    Anticheat_ModeratorManager__RaiseModEvent(0xb7,__this_02,method_01);
    return;
  }
label_05e346ad:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$RegionBanPlayerEntry
// il2cpp: void Anticheat_ModeratorManager__RegionBanPlayerEntry (Anticheat_PlayerEntry_o* player, bool ipBan, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x5e346d0
// asm: 16 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e34812: lea rax, [rip + 0x14b0d57]  ; "Player has no IP address to ban."
// asm:   0x5e34819: mov rbx, qword ptr [rax]
// asm:   0x5e3481c: cmp byte ptr [rip + 0x1713d35], 0
// asm:   0x5e34823: je 0x5e34855
// asm:   0x5e34825: jmp 0x5e34868
// asm:   0x5e34842: lea rax, [rip + 0x14ab1df]  ; "Invalid player entry."
// asm:   0x5e34849: mov rbx, qword ptr [rax]
// asm:   0x5e3484c: cmp byte ptr [rip + 0x1713d05], 0
// asm:   0x5e34853: jne 0x5e34868
// asm:   0x5e348ed: lea rax, [rip + 0x14b0c84]  ; "Player has no session ID to ban."
// asm:   0x5e348f4: mov rbx, qword ptr [rax]
// asm:   0x5e348f7: cmp byte ptr [rip + 0x1713c5a], 0
// asm:   0x5e34904: jmp 0x5e34868
// asm:   0x5e34925: jmp 0x5e34896
// asm:   0x5e3498e: jmp 0x5e349b6
// asm:   0x5e34be4: jmp 0x5e34a07

void Anticheat_ModeratorManager__RegionBanPlayerEntry
               (Anticheat_PlayerEntry_o *player,bool ipBan,System_Action_string__o *localStatus,
               System_String_o *reason,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_string__o *pSVar2;
  System_Action_string__o *pSVar3;
  System_String_o *pSVar4;
  bool bVar5;
  Anticheat_ModeratorManager___c__DisplayClass97_0_o *__this;
  System_Action_Dictionary_byte__object___o *__this_00;
  System_Action_o *__this_01;
  System_String_o *pSVar6;
  System_Collections_Generic_Dictionary_byte__object__o *__this_02;
  Il2CppObject *pIVar7;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  Anticheat_ModeratorManager___c__DisplayClass97_0_Fields *targetAddress;
  int local_3c;
  int local_38;
  uint local_34;
  
  if (Il2CppMethodInitialized_07548568 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ModeratorManager_c__DisplayClass97_0_RegionBanPlayerEntry_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ModeratorManager_c__DisplayClass97_0_RegionBanPlayerEntry_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager_c__DisplayClass97_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Player has no session ID to ban.");
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid player entry.");
    il2cpp_codegen_initialize_runtime_metadata(&"Sending request...");
    il2cpp_codegen_initialize_runtime_metadata(&"Player has no IP address to ban.");
    Il2CppMethodInitialized_07548568 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager_c__DisplayClass97_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass97_0_o *)0x0) goto label_05e34c2d;
  targetAddress = &__this->fields;
  (__this->fields).localStatus = localStatus;
  Il2CppCodeGenWriteBarrier(&targetAddress->localStatus);
  if (player == (Anticheat_PlayerEntry_o *)0x0) {
    pSVar2 = targetAddress->localStatus;
    pSVar4 = "Invalid player entry.";
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      pSVar4 = "Invalid player entry.";
    }
joined_r0x05e348fe:
    if (Il2CppMethodInitialized_07548558 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_07548558 = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
    }
    else {
      pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
    }
    if (pSVar3 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pSVar4,(pSVar3->fields).method);
    }
    if (pSVar2 == (System_Action_string__o *)0x0) {
      return;
    }
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar4,(pSVar2->fields).method);
    return;
  }
  if (ipBan) {
    bVar5 = System_String__IsNullOrEmpty((player->fields).IPAddress,(MethodInfo *)0x0);
    if (bVar5) {
      pSVar2 = targetAddress->localStatus;
      pSVar4 = "Player has no IP address to ban.";
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
        pSVar4 = "Player has no IP address to ban.";
      }
      goto joined_r0x05e348fe;
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      if (Il2CppMethodInitialized_07547eed == '\0') goto label_05e34bfb;
label_05e3494f:
      uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (Il2CppMethodInitialized_07547eed != '\0') goto label_05e3494f;
label_05e34bfb:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_07547eed = '\x01';
      uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    local_3c = (uint)(TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField ==
                     false) * 2 + 2;
    pSVar4 = (player->fields).IPAddress;
    pSVar2 = targetAddress->localStatus;
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar5 = System_String__IsNullOrEmpty((player->fields).SessionId,(MethodInfo *)0x0);
    if (bVar5) {
      pSVar2 = targetAddress->localStatus;
      pSVar4 = "Player has no session ID to ban.";
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
        pSVar4 = "Player has no session ID to ban.";
      }
      goto joined_r0x05e348fe;
    }
    local_3c = 1;
    pSVar4 = (player->fields).SessionId;
    pSVar2 = targetAddress->localStatus;
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar6 = "Sending request...";
  if (Il2CppMethodInitialized_07548558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e34bc1;
label_05e349e9:
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e349e9;
label_05e34bc1:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pSVar6,(pSVar3->fields).method);
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar6,(pSVar2->fields).method);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Dictionary_byte_object);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass97_0_RegionBanPlayerEntry_b__0,
             (MethodInfo_4A81BE0 *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass97_0_RegionBanPlayerEntry_b__1,
             (MethodInfo *)0x0);
  pSVar6 = Anticheat_ModeratorManager__TrackRequest(10.0,__this_00,__this_01,method_00);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
  System_Collections_Generic_Dictionary_byte__object____ctor
            (__this_02,(MethodInfo_49C7870 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor
            );
  if (__this_02 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,0,(Il2CppObject *)pSVar6,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    local_34 = ipBan | 2;
    pIVar7 = il2cpp_vm_Object_Box(g_data_07556710,&local_34);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,1,pIVar7,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    local_38 = local_3c;
    pIVar7 = il2cpp_vm_Object_Box(g_data_07556710,&local_38);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,2,pIVar7,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,3,(Il2CppObject *)pSVar4,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    if (reason == (System_String_o *)0x0) {
      reason = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,4,(Il2CppObject *)reason,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    method_01 = extraout_RDX;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      method_01 = extraout_RDX_00;
    }
    Anticheat_ModeratorManager__RaiseModEvent(0xb7,__this_02,method_01);
    return;
  }
label_05e34c2d:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$RegionUnban
// il2cpp: void Anticheat_ModeratorManager__RegionUnban (Anticheat_RegionBanEntry_o* banEntry, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x5e34c50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e34f83: jmp 0x5e34d86

void Anticheat_ModeratorManager__RegionUnban
               (Anticheat_RegionBanEntry_o *banEntry,System_Action_string__o *localStatus,
               System_String_o *reason,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  undefined4 in_EAX;
  Anticheat_ModeratorManager___c__DisplayClass98_0_o *__this;
  System_Action_Dictionary_byte__object___o *__this_00;
  System_Action_o *__this_01;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_byte__object__o *__this_02;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  undefined8 local_38;
  
  local_38._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_07548569 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ModeratorManager_c__DisplayClass98_0_RegionUnban_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ModeratorManager_c__DisplayClass98_0_RegionUnban_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager_c__DisplayClass98_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Sending request...");
    Il2CppMethodInitialized_07548569 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager_c__DisplayClass98_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass98_0_o *)0x0) goto label_05e34f88;
  (__this->fields).localStatus = localStatus;
  Il2CppCodeGenWriteBarrier(&(__this->fields).localStatus);
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    if (Il2CppMethodInitialized_07548558 == '\0') goto label_05e34f42;
label_05e34d57:
    pSVar3 = "Sending request...";
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e34d68;
label_05e34f66:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    if (Il2CppMethodInitialized_07548558 != '\0') goto label_05e34d57;
label_05e34f42:
    pSVar3 = "Sending request...";
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e34f66;
label_05e34d68:
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Dictionary_byte_object);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass98_0_RegionUnban_b__0,
             (MethodInfo_4A81BE0 *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass98_0_RegionUnban_b__1,
             (MethodInfo *)0x0);
  pSVar3 = Anticheat_ModeratorManager__TrackRequest(10.0,__this_00,__this_01,method_00);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
  System_Collections_Generic_Dictionary_byte__object____ctor
            (__this_02,(MethodInfo_49C7870 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor
            );
  if ((__this_02 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) &&
     (System_Collections_Generic_Dictionary_byte__object___Add
                (__this_02,0,(Il2CppObject *)pSVar3,
                 (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add),
     banEntry != (Anticheat_RegionBanEntry_o *)0x0)) {
    local_38 = (ulong)CONCAT14((banEntry->fields).IsIPBan == false,(undefined4)local_38) ^ 0x500000000;
    pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&local_38 + 4));
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,1,pIVar4,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    local_38 = CONCAT44(local_38._4_4_,3);
    pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,&local_38);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,2,pIVar4,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,3,(Il2CppObject *)(banEntry->fields).TargetId,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    if (reason == (System_String_o *)0x0) {
      reason = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,4,(Il2CppObject *)reason,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    method_01 = extraout_RDX;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      method_01 = extraout_RDX_00;
    }
    Anticheat_ModeratorManager__RaiseModEvent(0xb7,__this_02,method_01);
    return;
  }
label_05e34f88:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$RequestRegionBanList
// il2cpp: void Anticheat_ModeratorManager__RequestRegionBanList (System_Action_string__o* localStatus, const MethodInfo* method);
// 0x5e34fa0

void Anticheat_ModeratorManager__RequestRegionBanList(System_Action_string__o *localStatus,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_0754856a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_0754856a = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RequestRegionBanList_5d34ff0(0,0x32,localStatus,in_RCX);
  return;
}


// Anticheat.ModeratorManager$$RequestRegionBanList
// il2cpp: void Anticheat_ModeratorManager__RequestRegionBanList (int32_t startIndex, int32_t amount, System_Action_string__o* localStatus, const MethodInfo* method);
// 0x5e34ff0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e352c7: jmp 0x5e35126

void Anticheat_ModeratorManager__RequestRegionBanList_5d34ff0
               (int32_t startIndex,int32_t amount,System_Action_string__o *localStatus,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  Anticheat_ModeratorManager___c__DisplayClass100_0_o *__this;
  System_Action_Dictionary_byte__object___o *__this_00;
  System_Action_o *__this_01;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_byte__object__o *__this_02;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int32_t iVar5;
  int32_t local_38;
  int32_t local_34;
  
  if (Il2CppMethodInitialized_0754856b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ModeratorManager_c__DisplayClass100_0_RequestRegionBanList_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ModeratorManager_c__DisplayClass100_0_RequestRegionBanList_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager_c__DisplayClass100_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Sending request...");
    Il2CppMethodInitialized_0754856b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager_c__DisplayClass100_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass100_0_o *)0x0) goto label_05e352cc;
  (__this->fields).localStatus = localStatus;
  Il2CppCodeGenWriteBarrier(&(__this->fields).localStatus);
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    if (Il2CppMethodInitialized_07548558 == '\0') goto label_05e35286;
label_05e350f7:
    pSVar3 = "Sending request...";
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e35108;
label_05e352aa:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    if (Il2CppMethodInitialized_07548558 != '\0') goto label_05e350f7;
label_05e35286:
    pSVar3 = "Sending request...";
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e352aa;
label_05e35108:
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Dictionary_byte_object);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass100_0_RequestRegionBanList_b__0,
             (MethodInfo_4A81BE0 *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass100_0_RequestRegionBanList_b__1,
             (MethodInfo *)0x0);
  pSVar3 = Anticheat_ModeratorManager__TrackRequest(15.0,__this_00,__this_01,method_00);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
  System_Collections_Generic_Dictionary_byte__object____ctor
            (__this_02,(MethodInfo_49C7870 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor
            );
  if (__this_02 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,0,(Il2CppObject *)pSVar3,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    local_34 = 0;
    if (0 < startIndex) {
      local_34 = startIndex;
    }
    pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,&local_34);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,1,pIVar4,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    iVar5 = 1;
    if (1 < amount) {
      iVar5 = amount;
    }
    _local_38 = CONCAT44(local_34,iVar5);
    pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,&local_38);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,2,pIVar4,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    Anticheat_ModeratorManager__RaiseModEvent(0xb8,__this_02,method_01);
    return;
  }
label_05e352cc:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$ParseRegionBanEntries
// il2cpp: Anticheat_RegionBanEntry_array* Anticheat_ModeratorManager__ParseRegionBanEntries (System_Collections_Generic_Dictionary_byte__object__array* entries, const MethodInfo* method);
// 0x5e352f0
// asm: 13 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e3546d: nop dword ptr [rax]
// asm:   0x5e3554d: nop dword ptr [rax]
// asm:   0x5e355cc: nop dword ptr [rax]
// asm:   0x5e3564d: nop dword ptr [rax]
// asm:   0x5e357df: jmp 0x5e35786
// asm:   0x5e357f3: mov rdi, r12
// asm:   0x5e357f6: call 0x30d6890  ; il2cpp_codegen_raise_invalid_cast_exception()
// asm:   0x5e357fb: mov rdi, r13
// asm:   0x5e357fe: call 0x30d6890  ; il2cpp_codegen_raise_invalid_cast_exception()
// asm:   0x5e35803: mov rdi, rbp
// asm:   0x5e35806: call 0x30d6890  ; il2cpp_codegen_raise_invalid_cast_exception()
// asm:   0x5e3580b: mov rdi, r14
// asm:   0x5e3580e: call 0x30d6890  ; il2cpp_codegen_raise_invalid_cast_exception()

Anticheat_RegionBanEntry_array *
Anticheat_ModeratorManager__ParseRegionBanEntries
          (System_Collections_Generic_Dictionary_byte__object__array *entries,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  uint32_t uVar4;
  System_Collections_Generic_Dictionary_byte__object__o *__this;
  MethodInfo *pMVar5;
  bool bVar6;
  System_Collections_Generic_List_RegionBanEntry__o *__this_00;
  ulong uVar7;
  System_String_o *pSVar8;
  Il2CppObject *obj;
  int *piVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  Anticheat_RegionBanEntry_o *__this_01;
  Anticheat_RegionBanEntry_array *pAVar13;
  Il2CppClass *pIVar14;
  int iVar15;
  ulong uVar16;
  
  if (Il2CppMethodInitialized_0754856c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_RegionBanEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RegionBanEntry_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RegionBanEntry_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_RegionBanEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_RegionBanEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_RegionBanEntry);
    Il2CppMethodInitialized_0754856c = '\x01';
  }
  pMVar5 = MethodInfo_System_Array_Empty_RegionBanEntry;
  if (entries == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
    if ((MethodInfo_System_Array_Empty_RegionBanEntry->field7_0x38).methodMetadataHandle == (void *)0x0) {
      il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_RegionBanEntry);
      pIVar14 = *(Il2CppClass **)((long)(pMVar5->field7_0x38).methodMetadataHandle + 0x10);
      bVar2 = (pIVar14->_2).bitflags1;
    }
    else {
      pIVar14 = *(Il2CppClass **)
                 ((long)(MethodInfo_System_Array_Empty_RegionBanEntry->field7_0x38).methodMetadataHandle +
                 0x10);
      bVar2 = (pIVar14->_2).bitflags1;
    }
    if ((bVar2 & 1) == 0) {
      pIVar14 = il2cpp_codegen_class_init_checked(pIVar14);
      uVar4 = (pIVar14->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar4 = (pIVar14->_2).cctor_finished_or_no_cctor;
    }
    if (uVar4 == 0) {
      il2cpp_codegen_runtime_class_init(pIVar14);
      pIVar14 = (pMVar5->field7_0x38).rgctx_data[2].klass;
      bVar2 = (pIVar14->_2).bitflags1;
    }
    else {
      pIVar14 = (pMVar5->field7_0x38).rgctx_data[2].klass;
      bVar2 = (pIVar14->_2).bitflags1;
    }
    if ((bVar2 & 1) == 0) {
      pIVar14 = il2cpp_codegen_class_init_checked(pIVar14);
    }
    return *(Anticheat_RegionBanEntry_array **)pIVar14->static_fields;
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_RegionBanEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_RegionBanEntry_ctor);
  if (0 < (int)entries->max_length) {
    uVar7 = entries->max_length & 0xffffffff;
    uVar16 = 0;
    do {
      if (uVar7 <= uVar16) {
        ThrowIndexOutOfRangeException();
      }
      __this = entries->m_Items[uVar16];
      if (__this != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
        bVar6 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                          (__this,0,(MethodInfo_49C86C0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
        if (bVar6) {
          pSVar8 = (System_String_o *)
                   System_Collections_Generic_Dictionary_byte__object___get_Item
                             (__this,0,(MethodInfo_49C83F0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
          if (pSVar8 == (System_String_o *)0x0) {
            pSVar8 = (System_String_o *)0x0;
          }
          else if ((Il2CppClass *)pSVar8->klass != g_data_07556758) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar8);
          }
        }
        else {
          pSVar8 = *(System_String_o **)g_data_07556758->static_fields;
        }
        bVar6 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                          (__this,1,(MethodInfo_49C86C0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
        iVar15 = 0;
        if (bVar6) {
          obj = System_Collections_Generic_Dictionary_byte__object___get_Item
                          (__this,1,(MethodInfo_49C83F0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
          if (obj == (Il2CppObject *)0x0) goto label_05e357e1;
          if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
            il2cpp_codegen_raise_invalid_cast_exception(obj);
          }
          piVar9 = il2cpp_vm_Object_Unbox(obj);
          iVar15 = *piVar9;
        }
        bVar6 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                          (__this,2,(MethodInfo_49C86C0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
        if (bVar6) {
          pSVar10 = (System_String_o *)
                    System_Collections_Generic_Dictionary_byte__object___get_Item
                              (__this,2,(MethodInfo_49C83F0 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item)
          ;
          if (pSVar10 == (System_String_o *)0x0) {
            pSVar10 = (System_String_o *)0x0;
          }
          else if ((Il2CppClass *)pSVar10->klass != g_data_07556758) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar10);
          }
        }
        else {
          pSVar10 = *(System_String_o **)g_data_07556758->static_fields;
        }
        bVar6 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                          (__this,5,(MethodInfo_49C86C0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
        if (bVar6) {
          pSVar11 = (System_String_o *)
                    System_Collections_Generic_Dictionary_byte__object___get_Item
                              (__this,5,(MethodInfo_49C83F0 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item)
          ;
          if (pSVar11 == (System_String_o *)0x0) {
            pSVar11 = (System_String_o *)0x0;
          }
          else if ((Il2CppClass *)pSVar11->klass != g_data_07556758) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar11);
          }
        }
        else {
          pSVar11 = *(System_String_o **)g_data_07556758->static_fields;
        }
        bVar6 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                          (__this,6,(MethodInfo_49C86C0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
        if (bVar6) {
          pSVar12 = (System_String_o *)
                    System_Collections_Generic_Dictionary_byte__object___get_Item
                              (__this,6,(MethodInfo_49C83F0 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item)
          ;
          if (pSVar12 == (System_String_o *)0x0) {
            pSVar12 = (System_String_o *)0x0;
          }
          else if ((Il2CppClass *)pSVar12->klass != g_data_07556758) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar12);
          }
        }
        else {
          pSVar12 = *(System_String_o **)g_data_07556758->static_fields;
        }
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_RegionBanEntry);
        System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
        if (__this_01 == (Anticheat_RegionBanEntry_o *)0x0) goto label_05e357e1;
        (__this_01->fields).TargetId = pSVar8;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).TargetId);
        (__this_01->fields).Username = pSVar10;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).Username);
        (__this_01->fields).IsIPBan = iVar15 == 3;
        (__this_01->fields).Reason = pSVar11;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).Reason);
        (__this_01->fields).BannedBy = pSVar12;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).BannedBy);
        pMVar5 = MethodInfo_System_Collections_Generic_List_RegionBanEntry_Add;
        if (__this_00 == (System_Collections_Generic_List_RegionBanEntry__o *)0x0) goto label_05e357e1;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pAVar13 = (__this_00->fields)._items;
        if (pAVar13 == (Anticheat_RegionBanEntry_array *)0x0) goto label_05e357e1;
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pAVar13->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          pAVar13->m_Items[(int)uVar3] = __this_01;
          Il2CppCodeGenWriteBarrier(pAVar13->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_01,
                     (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
        }
      }
      uVar16 = uVar16 + 1;
      uVar3 = (uint)entries->max_length;
      uVar7 = (ulong)uVar3;
    } while ((long)uVar16 < (long)(int)uVar3);
  }
  if (__this_00 != (System_Collections_Generic_List_RegionBanEntry__o *)0x0) {
    pAVar13 = (Anticheat_RegionBanEntry_array *)
              System_Collections_Generic_List_object___ToArray
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (MethodInfo_395F5A0 *)
                         MethodInfo_System_Collections_Generic_List_RegionBanEntry_ToArray);
    return pAVar13;
  }
label_05e357e1:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$BatchSessionBan
// il2cpp: void Anticheat_ModeratorManager__BatchSessionBan (System_String_o* targets, const MethodInfo* method);
// 0x5e35830

void Anticheat_ModeratorManager__BatchSessionBan(System_String_o *targets,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_0754856d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_0754856d = '\x01';
  }
  if (targets == (System_String_o *)0x0) {
    value = (System_String_o *)0x0;
  }
  else {
    value = System_String__Trim(targets,(MethodInfo *)0x0);
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__SendBatchRoomRemove(2,1,value,(System_Action_string__o *)0x0,in_R8);
  return;
}


// Anticheat.ModeratorManager$$BatchIPBan
// il2cpp: void Anticheat_ModeratorManager__BatchIPBan (System_String_o* targets, const MethodInfo* method);
// 0x5e35ba0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e35c01: cmp byte ptr [rip + 0x17122e5], 0
// asm:   0x5e35c08: je 0x5e35c3d

void Anticheat_ModeratorManager__BatchIPBan(System_String_o *targets,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *value;
  int32_t targetBy;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_0754856e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_0754856e = '\x01';
  }
  if (targets == (System_String_o *)0x0) {
    value = (System_String_o *)0x0;
  }
  else {
    value = System_String__Trim(targets,(MethodInfo *)0x0);
  }
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_07547eed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eed = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    targetBy = (uint)(TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField ==
                     false) * 2 + 2;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
  }
  else {
    targetBy = (uint)(*(char *)((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 8)
                     == '\0') * 2 + 2;
  }
  Anticheat_ModeratorManager__SendBatchRoomRemove(3,targetBy,value,(System_Action_string__o *)0x0,in_R8);
  return;
}


// Anticheat.ModeratorManager$$BatchSessionUnban
// il2cpp: void Anticheat_ModeratorManager__BatchSessionUnban (System_String_o* targets, const MethodInfo* method);
// 0x5e35cb0

void Anticheat_ModeratorManager__BatchSessionUnban(System_String_o *targets,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_0754856f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_0754856f = '\x01';
  }
  if (targets == (System_String_o *)0x0) {
    value = (System_String_o *)0x0;
  }
  else {
    value = System_String__Trim(targets,(MethodInfo *)0x0);
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__SendBatchRoomRemove(4,1,value,(System_Action_string__o *)0x0,in_R8);
  return;
}


// Anticheat.ModeratorManager$$BatchIPUnban
// il2cpp: void Anticheat_ModeratorManager__BatchIPUnban (System_String_o* targets, const MethodInfo* method);
// 0x5e35d30
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e35d91: cmp byte ptr [rip + 0x1712155], 0
// asm:   0x5e35d98: je 0x5e35dcd

void Anticheat_ModeratorManager__BatchIPUnban(System_String_o *targets,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *value;
  int32_t targetBy;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07548570 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548570 = '\x01';
  }
  if (targets == (System_String_o *)0x0) {
    value = (System_String_o *)0x0;
  }
  else {
    value = System_String__Trim(targets,(MethodInfo *)0x0);
  }
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_07547eed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07547eed = '\x01';
    uVar1 = (TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    targetBy = (uint)(TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField ==
                     false) * 2 + 2;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
  }
  else {
    targetBy = (uint)(*(char *)((long)((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager)->static_fields + 8)
                     == '\0') * 2 + 2;
  }
  Anticheat_ModeratorManager__SendBatchRoomRemove(5,targetBy,value,(System_Action_string__o *)0x0,in_R8);
  return;
}


// Anticheat.ModeratorManager$$SendBatchRoomRemove
// il2cpp: void Anticheat_ModeratorManager__SendBatchRoomRemove (int32_t removeType, int32_t targetBy, System_String_o* targets, System_Action_string__o* localStatus, const MethodInfo* method);
// 0x5e358b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e35b92: jmp 0x5e359ef

void Anticheat_ModeratorManager__SendBatchRoomRemove
               (int32_t removeType,int32_t targetBy,System_String_o *targets,
               System_Action_string__o *localStatus,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  Anticheat_ModeratorManager___c__DisplayClass106_0_o *__this;
  System_Action_Dictionary_byte__object___o *__this_00;
  System_Action_o *__this_01;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_byte__object__o *__this_02;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int32_t local_38;
  int32_t local_34;
  
  if (Il2CppMethodInitialized_07548571 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ModeratorManager_c__DisplayClass106_0_SendBatchRoomRemove_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ModeratorManager_c__DisplayClass106_0_SendBatchRoomRemove_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager_c__DisplayClass106_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Sending request...");
    Il2CppMethodInitialized_07548571 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager_c__DisplayClass106_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this == (Anticheat_ModeratorManager___c__DisplayClass106_0_o *)0x0) goto label_05e35b97;
  (__this->fields).localStatus = localStatus;
  Il2CppCodeGenWriteBarrier(&(__this->fields).localStatus);
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    if (Il2CppMethodInitialized_07548558 == '\0') goto label_05e35b53;
label_05e359c1:
    pSVar3 = "Sending request...";
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e359d1;
label_05e35b76:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  else {
    if (Il2CppMethodInitialized_07548558 != '\0') goto label_05e359c1;
label_05e35b53:
    pSVar3 = "Sending request...";
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548558 = '\x01';
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e35b76;
label_05e359d1:
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  }
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Dictionary_byte_object);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass106_0_SendBatchRoomRemove_b__0,
             (MethodInfo_4A81BE0 *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass106_0_SendBatchRoomRemove_b__1,
             (MethodInfo *)0x0);
  pSVar3 = Anticheat_ModeratorManager__TrackRequest(15.0,__this_00,__this_01,method_00);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
  System_Collections_Generic_Dictionary_byte__object____ctor
            (__this_02,(MethodInfo_49C7870 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor
            );
  if (__this_02 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,0,(Il2CppObject *)pSVar3,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    local_34 = removeType;
    pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,&local_34);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,1,pIVar4,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    local_38 = targetBy;
    pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,&local_38);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,2,pIVar4,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_02,3,(Il2CppObject *)targets,
               (MethodInfo_49C84A0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_02,method_01);
    return;
  }
label_05e35b97:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$.ctor
// il2cpp: void Anticheat_ModeratorManager___ctor (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x5e35e50

void Anticheat_ModeratorManager___ctor(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Action_Dictionary_byte__object____o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *pSVar1;
  System_Collections_Generic_Dictionary_string__Action__o *__this_01;
  
  if (Il2CppMethodInitialized_07548572 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_Dictionary_byte_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Action_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    Il2CppMethodInitialized_07548572 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_Action_Dictionary_byte_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Action_Dictionary_byte_object_ctor);
  (__this->fields)._pendingCallbacks = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingCallbacks);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_4AB4860 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  (__this->fields)._pendingTimestamps = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingTimestamps);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_4AB4860 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  (__this->fields)._pendingTimeouts = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingTimeouts);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Action);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Action_ctor);
  (__this->fields)._pendingTimeoutCallbacks = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingTimeoutCallbacks);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager$$.cctor
// il2cpp: void Anticheat_ModeratorManager___cctor (const MethodInfo* method);
// 0x5e35f90

void Anticheat_ModeratorManager___cctor(MethodInfo *method)

{
  Anticheat_ModeratorManager_StaticFields *pAVar1;
  System_Collections_Generic_Dictionary_int__PlayerEntry__o *__this;
  System_Collections_Generic_List_PlayerEntry__o *__this_00;
  
  if (Il2CppMethodInitialized_07548573 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_int_PlayerEntry);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_PlayerEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_PlayerEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_07548573 = '\x01';
  }
  TypeInfo_Anticheat_ModeratorManager->static_fields->_AuthLevel_k__BackingField = -1;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_PlayerEntry);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_int__object__o *)__this,
             (MethodInfo_4A0EB10 *)MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_ctor);
  pAVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields;
  pAVar1->_ActivePlayers_k__BackingField = __this;
  Il2CppCodeGenWriteBarrier(&pAVar1->_ActivePlayers_k__BackingField);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_PlayerEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_PlayerEntry_ctor);
  pAVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields;
  pAVar1->_PastPlayers_k__BackingField = __this_00;
  Il2CppCodeGenWriteBarrier(&pAVar1->_PastPlayers_k__BackingField);
  return;
}


