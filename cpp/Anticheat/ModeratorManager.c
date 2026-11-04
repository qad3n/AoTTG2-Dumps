// Type: Anticheat.ModeratorManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Anticheat/ModeratorManager.cs
// Prior real C# source: none
// --------------------------------

// Anticheat.ModeratorManager.<>c__DisplayClass100_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass100_0___ctor (Anticheat_ModeratorManager___c__DisplayClass100_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Anticheat_ModeratorManager___c__DisplayClass100_0___ctor(Anticheat_ModeratorManager___c__DisplayClass100_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass100_0$$<RequestRegionBanList>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass100_0___RequestRegionBanList_b__0 (Anticheat_ModeratorManager___c__DisplayClass100_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x182374900

void Anticheat_ModeratorManager___c__DisplayClass100_0___RequestRegionBanList_b__0
               (Anticheat_ModeratorManager___c__DisplayClass100_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  undefined8 uVar2;
  System_Action_string__o *pSVar3;
  System_Action_RegionBanPage__o *pSVar4;
  int32_t iVar5;
  int32_t iVar6;
  System_Collections_Generic_Dictionary_byte__object__array *entries;
  Anticheat_RegionBanEntry_array *value;
  Anticheat_RegionBanPage_o *__this_00;
  
  if (Il2CppMethodInitialized_184347abb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_RegionBanPage);
    Il2CppMethodInitialized_184347abb = '\x01';
  }
  pSVar1 = (__this->fields).localStatus;
  uVar2 = **(undefined8 **)(g_data_184354e50 + 0xb8);
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,uVar2);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,uVar2);
  }
  iVar5 = Anticheat_ModeratorManager__ReadInt(data,'\x01',0,(MethodInfo *)0x0);
  iVar6 = Anticheat_ModeratorManager__ReadInt(data,'\x02',-1,(MethodInfo *)0x0);
  entries = Anticheat_ModeratorManager__GetResponseEntries(data,'\x03',(MethodInfo *)0x0);
  value = Anticheat_ModeratorManager__ParseRegionBanEntries(entries,(MethodInfo *)0x0);
  pSVar4 = TypeInfo_Anticheat_ModeratorManager->static_fields->RegionBanListReceived;
  if (pSVar4 != (System_Action_RegionBanPage__o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_RegionBanPage);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Anticheat_RegionBanPage_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this_00->fields).Count = iVar5;
    (__this_00->fields).EndIndex = iVar6;
    (__this_00->fields).Entries = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Entries,value);
    (*(code *)(pSVar4->fields).invoke_impl)((pSVar4->fields).method_code,__this_00,(pSVar4->fields).method);
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass100_0$$<RequestRegionBanList>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass100_0___RequestRegionBanList_b__1 (Anticheat_ModeratorManager___c__DisplayClass100_0_o* __this, const MethodInfo* method);
// 0x182374a80

void Anticheat_ModeratorManager___c__DisplayClass100_0___RequestRegionBanList_b__1
               (Anticheat_ModeratorManager___c__DisplayClass100_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347abc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Request timed out");
    Il2CppMethodInitialized_184347abc = '\x01';
  }
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar3 = "Request timed out";
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass106_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass106_0___ctor (Anticheat_ModeratorManager___c__DisplayClass106_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Anticheat_ModeratorManager___c__DisplayClass106_0___ctor(Anticheat_ModeratorManager___c__DisplayClass106_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass106_0$$<SendBatchRoomRemove>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass106_0___SendBatchRoomRemove_b__0 (Anticheat_ModeratorManager___c__DisplayClass106_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x182374b50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182374c95: jmp 0x182374ca8

void Anticheat_ModeratorManager___c__DisplayClass106_0___SendBatchRoomRemove_b__0
               (Anticheat_ModeratorManager___c__DisplayClass106_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  int *piVar6;
  System_String_array *values;
  System_String_o *pSVar7;
  int32_t local_res10 [2];
  int32_t local_res20 [2];
  int32_t local_18 [4];
  
  if (Il2CppMethodInitialized_184347abd == '\0') {
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
    Il2CppMethodInitialized_184347abd = '\x01';
  }
  local_res20[0] = 0;
  local_res10[0] = 0;
  local_18[0] = 0;
  if (data != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                      (data,'\x01',
                       (MethodInfo_13E2E80 *)
                       MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    if (bVar3) {
      pIVar4 = System_Collections_Generic_Dictionary_byte__object___get_Item
                         (data,'\x01',
                          (MethodInfo_13F4180 *)
                          MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_182374f8d;
      if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354de8);
      }
      il2cpp_object_unbox(pIVar4);
    }
    bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                      (data,'\x02',
                       (MethodInfo_13E2E80 *)
                       MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    if (bVar3) {
      pSVar5 = (System_String_o *)
               System_Collections_Generic_Dictionary_byte__object___get_Item
                         (data,'\x02',
                          (MethodInfo_13F4180 *)
                          MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
      pSVar7 = (System_String_o *)0x0;
      if (pSVar5 != (System_String_o *)0x0) {
        if ((Il2CppClass *)pSVar5->klass == g_data_184354e50) {
          pSVar7 = pSVar5;
        }
        if (pSVar7 == (System_String_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar5);
        }
      }
    }
    else {
      pSVar7 = *(System_String_o **)g_data_184354e50->static_fields;
    }
    bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                      (data,'\x03',
                       (MethodInfo_13E2E80 *)
                       MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    if (bVar3) {
      pIVar4 = System_Collections_Generic_Dictionary_byte__object___get_Item
                         (data,'\x03',
                          (MethodInfo_13F4180 *)
                          MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_182374f8d;
      if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
      }
      piVar6 = il2cpp_object_unbox(pIVar4);
      local_res20[0] = *piVar6;
    }
    else {
      local_res20[0] = 0;
    }
    bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                      (data,'\x04',
                       (MethodInfo_13E2E80 *)
                       MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    if (bVar3) {
      pIVar4 = System_Collections_Generic_Dictionary_byte__object___get_Item
                         (data,'\x04',
                          (MethodInfo_13F4180 *)
                          MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_182374f8d;
      if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
      }
      piVar6 = il2cpp_object_unbox(pIVar4);
      local_res10[0] = *piVar6;
    }
    else {
      local_res10[0] = 0;
    }
    bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                      (data,'\x05',
                       (MethodInfo_13E2E80 *)
                       MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    if (bVar3) {
      pIVar4 = System_Collections_Generic_Dictionary_byte__object___get_Item
                         (data,'\x05',
                          (MethodInfo_13F4180 *)
                          MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_182374f8d;
      if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
      }
      piVar6 = il2cpp_object_unbox(pIVar4);
      local_18[0] = *piVar6;
    }
    else {
      local_18[0] = 0;
    }
    if (0 < local_res20[0]) {
      pSVar7 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat_1969b70
                         ("Rate limited. Retry in ",pSVar7,"s.",(MethodInfo *)0x0);
label_182374ef4:
      pSVar1 = (__this->fields).localStatus;
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      if (Il2CppMethodInitialized_184347a9f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
        Il2CppMethodInitialized_184347a9f = '\x01';
      }
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
      if (pSVar2 != (System_Action_string__o *)0x0) {
        (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar7,(pSVar2->fields).method);
      }
      if (pSVar1 == (System_Action_string__o *)0x0) {
        return;
      }
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar7,(pSVar1->fields).method);
      return;
    }
    if ((local_res10[0] < 1) && (local_18[0] < 1)) {
      pSVar1 = (__this->fields).localStatus;
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      Anticheat_ModeratorManager__InvokeStatus(pSVar7,pSVar1,(MethodInfo *)0x0);
      return;
    }
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
    pSVar7 = "Done: ";
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = "Done: ";
        Il2CppCodeGenWriteBarrier(values->m_Items,pSVar7);
        pSVar7 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = pSVar7;
          Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar7);
          pSVar7 = " processed, ";
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = " processed, ";
            Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar7);
            pSVar7 = System_Int32__ToString(local_18,(MethodInfo *)0x0);
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = pSVar7;
              Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar7);
              pSVar7 = " failed.";
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = " failed.";
                Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar7);
                pSVar7 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
                goto label_182374ef4;
              }
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_182374f8d:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager.<>c__DisplayClass106_0$$<SendBatchRoomRemove>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass106_0___SendBatchRoomRemove_b__1 (Anticheat_ModeratorManager___c__DisplayClass106_0_o* __this, const MethodInfo* method);
// 0x182374fd0

void Anticheat_ModeratorManager___c__DisplayClass106_0___SendBatchRoomRemove_b__1
               (Anticheat_ModeratorManager___c__DisplayClass106_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347abe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Request timed out");
    Il2CppMethodInitialized_184347abe = '\x01';
  }
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar3 = "Request timed out";
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass85_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass85_0___ctor (Anticheat_ModeratorManager___c__DisplayClass85_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Anticheat_ModeratorManager___c__DisplayClass85_0___ctor(Anticheat_ModeratorManager___c__DisplayClass85_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass85_0$$<RequestPlayerList>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass85_0___RequestPlayerList_b__0 (Anticheat_ModeratorManager___c__DisplayClass85_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x182375450

void Anticheat_ModeratorManager___c__DisplayClass85_0___RequestPlayerList_b__0
               (Anticheat_ModeratorManager___c__DisplayClass85_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  undefined8 uVar2;
  System_Action_string__o *pSVar3;
  System_Collections_Generic_Dictionary_int__PlayerEntry__o *__this_00;
  System_Collections_Generic_Dictionary_byte__object__o *entry;
  System_Action_o *pSVar4;
  System_Collections_Generic_Dictionary_byte__object__array *pSVar5;
  Anticheat_PlayerEntry_o *value;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  uint uVar6;
  
  if (Il2CppMethodInitialized_184347abf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347abf = '\x01';
  }
  pSVar1 = (__this->fields).localStatus;
  uVar2 = **(undefined8 **)(g_data_184354e50 + 0xb8);
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,uVar2);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,uVar2);
  }
  if (Il2CppMethodInitialized_184347aa4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347aa4 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_18434736b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_18434736b = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  __this_00 = TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__PlayerEntry__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_Clear);
    pSVar5 = Anticheat_ModeratorManager__GetResponseEntries(data,'\x01',(MethodInfo *)0x0);
    if (pSVar5 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
      for (uVar6 = 0; (int)uVar6 < (int)pSVar5->max_length; uVar6 = uVar6 + 1) {
        if ((uint)pSVar5->max_length <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        entry = pSVar5->m_Items[(int)uVar6];
        if (entry != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
          if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
          }
          value = Anticheat_ModeratorManager__ParsePlayerEntry(entry,(MethodInfo *)0x0);
          if (value == (Anticheat_PlayerEntry_o *)0x0) goto label_1823756ac;
          if (0 < (value->fields).ActorNumber) {
            if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
            }
            __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_helper_182254f90(0);
            if (__this_01 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_1823756ac;
            System_Collections_Generic_Dictionary_int__object___set_Item
                      (__this_01,(value->fields).ActorNumber,(Il2CppObject *)value,
                       (MethodInfo_1423510 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_set_Item);
          }
        }
      }
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
label_1823756ac:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager.<>c__DisplayClass85_0$$<RequestPlayerList>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass85_0___RequestPlayerList_b__1 (Anticheat_ModeratorManager___c__DisplayClass85_0_o* __this, const MethodInfo* method);
// 0x1823756c0

void Anticheat_ModeratorManager___c__DisplayClass85_0___RequestPlayerList_b__1
               (Anticheat_ModeratorManager___c__DisplayClass85_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347ac0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Request timed out");
    Il2CppMethodInitialized_184347ac0 = '\x01';
  }
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar3 = "Request timed out";
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass89_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass89_0___ctor (Anticheat_ModeratorManager___c__DisplayClass89_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Anticheat_ModeratorManager___c__DisplayClass89_0___ctor(Anticheat_ModeratorManager___c__DisplayClass89_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass89_0$$<KickPlayer>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass89_0___KickPlayer_b__0 (Anticheat_ModeratorManager___c__DisplayClass89_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x182375790
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18237587c: jmp 0x18237588f

void Anticheat_ModeratorManager___c__DisplayClass89_0___KickPlayer_b__0
               (Anticheat_ModeratorManager___c__DisplayClass89_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  char *pcVar5;
  Il2CppObject *pIVar6;
  char cVar7;
  
  if (Il2CppMethodInitialized_184347ac1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347ac1 = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_182375952:
    ThrowNullReferenceException();
  }
  bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,'\x01',
                     (MethodInfo_13E2E80 *)
                     MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar3) {
    pIVar4 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,'\x01',
                        (MethodInfo_13F4180 *)
                        MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_182375952;
    if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354de8);
    }
    pcVar5 = il2cpp_object_unbox(pIVar4);
    cVar7 = *pcVar5;
  }
  else {
    cVar7 = '\0';
  }
  bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,'\x02',
                     (MethodInfo_13E2E80 *)
                     MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar3) {
    pIVar6 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,'\x02',
                        (MethodInfo_13F4180 *)
                        MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    pIVar4 = (Il2CppObject *)0x0;
    if (pIVar6 != (Il2CppObject *)0x0) {
      if (pIVar6->klass == g_data_184354e50) {
        pIVar4 = pIVar6;
      }
      if (pIVar4 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar6);
      }
    }
  }
  else {
    pIVar4 = *(Il2CppObject **)g_data_184354e50->static_fields;
  }
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pIVar4,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pIVar4,(pSVar1->fields).method);
  }
  if (cVar7 != '\0') {
    pSVar1 = (__this->fields).localStatus;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    Anticheat_ModeratorManager__RequestPlayerList(pSVar1,(MethodInfo *)0x0);
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass89_0$$<KickPlayer>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass89_0___KickPlayer_b__1 (Anticheat_ModeratorManager___c__DisplayClass89_0_o* __this, const MethodInfo* method);
// 0x182375970

void Anticheat_ModeratorManager___c__DisplayClass89_0___KickPlayer_b__1
               (Anticheat_ModeratorManager___c__DisplayClass89_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347ac2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Request timed out");
    Il2CppMethodInitialized_184347ac2 = '\x01';
  }
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar3 = "Request timed out";
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass90_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass90_0___ctor (Anticheat_ModeratorManager___c__DisplayClass90_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Anticheat_ModeratorManager___c__DisplayClass90_0___ctor(Anticheat_ModeratorManager___c__DisplayClass90_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass90_0$$<RoomBan>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass90_0___RoomBan_b__0 (Anticheat_ModeratorManager___c__DisplayClass90_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x182375ad0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182375bbc: jmp 0x182375bcf

void Anticheat_ModeratorManager___c__DisplayClass90_0___RoomBan_b__0
               (Anticheat_ModeratorManager___c__DisplayClass90_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  char *pcVar5;
  Il2CppObject *pIVar6;
  char cVar7;
  
  if (Il2CppMethodInitialized_184347ac3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347ac3 = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_182375c92:
    ThrowNullReferenceException();
  }
  bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,'\x01',
                     (MethodInfo_13E2E80 *)
                     MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar3) {
    pIVar4 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,'\x01',
                        (MethodInfo_13F4180 *)
                        MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_182375c92;
    if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354de8);
    }
    pcVar5 = il2cpp_object_unbox(pIVar4);
    cVar7 = *pcVar5;
  }
  else {
    cVar7 = '\0';
  }
  bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,'\x02',
                     (MethodInfo_13E2E80 *)
                     MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar3) {
    pIVar6 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,'\x02',
                        (MethodInfo_13F4180 *)
                        MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    pIVar4 = (Il2CppObject *)0x0;
    if (pIVar6 != (Il2CppObject *)0x0) {
      if (pIVar6->klass == g_data_184354e50) {
        pIVar4 = pIVar6;
      }
      if (pIVar4 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar6);
      }
    }
  }
  else {
    pIVar4 = *(Il2CppObject **)g_data_184354e50->static_fields;
  }
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pIVar4,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pIVar4,(pSVar1->fields).method);
  }
  if (cVar7 != '\0') {
    pSVar1 = (__this->fields).localStatus;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    Anticheat_ModeratorManager__RequestPlayerList(pSVar1,(MethodInfo *)0x0);
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass90_0$$<RoomBan>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass90_0___RoomBan_b__1 (Anticheat_ModeratorManager___c__DisplayClass90_0_o* __this, const MethodInfo* method);
// 0x182375cb0

void Anticheat_ModeratorManager___c__DisplayClass90_0___RoomBan_b__1
               (Anticheat_ModeratorManager___c__DisplayClass90_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347ac4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Request timed out");
    Il2CppMethodInitialized_184347ac4 = '\x01';
  }
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar3 = "Request timed out";
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass91_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass91_0___ctor (Anticheat_ModeratorManager___c__DisplayClass91_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Anticheat_ModeratorManager___c__DisplayClass91_0___ctor(Anticheat_ModeratorManager___c__DisplayClass91_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass91_0$$<RoomBanPlayerEntry>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass91_0___RoomBanPlayerEntry_b__0 (Anticheat_ModeratorManager___c__DisplayClass91_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x182375d80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182375e6c: jmp 0x182375e7f

void Anticheat_ModeratorManager___c__DisplayClass91_0___RoomBanPlayerEntry_b__0
               (Anticheat_ModeratorManager___c__DisplayClass91_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  char *pcVar5;
  Il2CppObject *pIVar6;
  char cVar7;
  
  if (Il2CppMethodInitialized_184347ac5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347ac5 = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_182375f42:
    ThrowNullReferenceException();
  }
  bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,'\x01',
                     (MethodInfo_13E2E80 *)
                     MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar3) {
    pIVar4 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,'\x01',
                        (MethodInfo_13F4180 *)
                        MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_182375f42;
    if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354de8);
    }
    pcVar5 = il2cpp_object_unbox(pIVar4);
    cVar7 = *pcVar5;
  }
  else {
    cVar7 = '\0';
  }
  bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,'\x02',
                     (MethodInfo_13E2E80 *)
                     MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar3) {
    pIVar6 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,'\x02',
                        (MethodInfo_13F4180 *)
                        MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    pIVar4 = (Il2CppObject *)0x0;
    if (pIVar6 != (Il2CppObject *)0x0) {
      if (pIVar6->klass == g_data_184354e50) {
        pIVar4 = pIVar6;
      }
      if (pIVar4 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar6);
      }
    }
  }
  else {
    pIVar4 = *(Il2CppObject **)g_data_184354e50->static_fields;
  }
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pIVar4,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pIVar4,(pSVar1->fields).method);
  }
  if (cVar7 != '\0') {
    pSVar1 = (__this->fields).localStatus;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    Anticheat_ModeratorManager__RequestPlayerList(pSVar1,(MethodInfo *)0x0);
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass91_0$$<RoomBanPlayerEntry>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass91_0___RoomBanPlayerEntry_b__1 (Anticheat_ModeratorManager___c__DisplayClass91_0_o* __this, const MethodInfo* method);
// 0x182375f60

void Anticheat_ModeratorManager___c__DisplayClass91_0___RoomBanPlayerEntry_b__1
               (Anticheat_ModeratorManager___c__DisplayClass91_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347ac6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Request timed out");
    Il2CppMethodInitialized_184347ac6 = '\x01';
  }
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar3 = "Request timed out";
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass92_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass92_0___ctor (Anticheat_ModeratorManager___c__DisplayClass92_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Anticheat_ModeratorManager___c__DisplayClass92_0___ctor(Anticheat_ModeratorManager___c__DisplayClass92_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass92_0$$<RoomUnban>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass92_0___RoomUnban_b__0 (Anticheat_ModeratorManager___c__DisplayClass92_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x182376030
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18237611c: jmp 0x18237612f

void Anticheat_ModeratorManager___c__DisplayClass92_0___RoomUnban_b__0
               (Anticheat_ModeratorManager___c__DisplayClass92_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  char *pcVar5;
  Il2CppObject *pIVar6;
  char cVar7;
  
  if (Il2CppMethodInitialized_184347ac7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347ac7 = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_18237622b:
    ThrowNullReferenceException();
  }
  bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,'\x01',
                     (MethodInfo_13E2E80 *)
                     MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar3) {
    pIVar4 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,'\x01',
                        (MethodInfo_13F4180 *)
                        MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_18237622b;
    if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354de8);
    }
    pcVar5 = il2cpp_object_unbox(pIVar4);
    cVar7 = *pcVar5;
  }
  else {
    cVar7 = '\0';
  }
  bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,'\x02',
                     (MethodInfo_13E2E80 *)
                     MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar3) {
    pIVar6 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,'\x02',
                        (MethodInfo_13F4180 *)
                        MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    pIVar4 = (Il2CppObject *)0x0;
    if (pIVar6 != (Il2CppObject *)0x0) {
      if (pIVar6->klass == g_data_184354e50) {
        pIVar4 = pIVar6;
      }
      if (pIVar4 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar6);
      }
    }
  }
  else {
    pIVar4 = *(Il2CppObject **)g_data_184354e50->static_fields;
  }
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pIVar4,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pIVar4,(pSVar1->fields).method);
  }
  if (cVar7 != '\0') {
    pSVar1 = (__this->fields).localStatus;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    if (Il2CppMethodInitialized_184347aab == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_184347aab = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    Anticheat_ModeratorManager__RequestRoomBanList_236f230(0,0x32,pSVar1,(MethodInfo *)0x0);
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass92_0$$<RoomUnban>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass92_0___RoomUnban_b__1 (Anticheat_ModeratorManager___c__DisplayClass92_0_o* __this, const MethodInfo* method);
// 0x182376250

void Anticheat_ModeratorManager___c__DisplayClass92_0___RoomUnban_b__1
               (Anticheat_ModeratorManager___c__DisplayClass92_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347ac8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Request timed out");
    Il2CppMethodInitialized_184347ac8 = '\x01';
  }
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar3 = "Request timed out";
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass94_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass94_0___ctor (Anticheat_ModeratorManager___c__DisplayClass94_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Anticheat_ModeratorManager___c__DisplayClass94_0___ctor(Anticheat_ModeratorManager___c__DisplayClass94_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass94_0$$<RequestRoomBanList>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass94_0___RequestRoomBanList_b__0 (Anticheat_ModeratorManager___c__DisplayClass94_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x182376320

void Anticheat_ModeratorManager___c__DisplayClass94_0___RequestRoomBanList_b__0
               (Anticheat_ModeratorManager___c__DisplayClass94_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  undefined8 uVar2;
  System_Action_string__o *pSVar3;
  System_Action_RoomBanPage__o *pSVar4;
  int32_t iVar5;
  int32_t iVar6;
  System_Collections_Generic_Dictionary_byte__object__array *entries;
  Anticheat_RoomBanEntry_array *value;
  Anticheat_RoomBanPage_o *__this_00;
  
  if (Il2CppMethodInitialized_184347ac9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_RoomBanPage);
    Il2CppMethodInitialized_184347ac9 = '\x01';
  }
  pSVar1 = (__this->fields).localStatus;
  uVar2 = **(undefined8 **)(g_data_184354e50 + 0xb8);
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar3 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar3 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,uVar2);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,uVar2);
  }
  iVar5 = Anticheat_ModeratorManager__ReadInt(data,'\x01',0,(MethodInfo *)0x0);
  iVar6 = Anticheat_ModeratorManager__ReadInt(data,'\x02',-1,(MethodInfo *)0x0);
  entries = Anticheat_ModeratorManager__GetResponseEntries(data,'\x03',(MethodInfo *)0x0);
  value = Anticheat_ModeratorManager__ParseRoomBanEntries(entries,(MethodInfo *)0x0);
  pSVar4 = TypeInfo_Anticheat_ModeratorManager->static_fields->RoomBanListReceived;
  if (pSVar4 != (System_Action_RoomBanPage__o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_RoomBanPage);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Anticheat_RoomBanPage_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this_00->fields).Count = iVar5;
    (__this_00->fields).EndIndex = iVar6;
    (__this_00->fields).Entries = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Entries,value);
    (*(code *)(pSVar4->fields).invoke_impl)((pSVar4->fields).method_code,__this_00,(pSVar4->fields).method);
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass94_0$$<RequestRoomBanList>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass94_0___RequestRoomBanList_b__1 (Anticheat_ModeratorManager___c__DisplayClass94_0_o* __this, const MethodInfo* method);
// 0x1823764a0

void Anticheat_ModeratorManager___c__DisplayClass94_0___RequestRoomBanList_b__1
               (Anticheat_ModeratorManager___c__DisplayClass94_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347aca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Request timed out");
    Il2CppMethodInitialized_184347aca = '\x01';
  }
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar3 = "Request timed out";
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass96_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass96_0___ctor (Anticheat_ModeratorManager___c__DisplayClass96_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Anticheat_ModeratorManager___c__DisplayClass96_0___ctor(Anticheat_ModeratorManager___c__DisplayClass96_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass96_0$$<RegionBan>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass96_0___RegionBan_b__0 (Anticheat_ModeratorManager___c__DisplayClass96_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x182376570
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18237665c: jmp 0x18237666f

void Anticheat_ModeratorManager___c__DisplayClass96_0___RegionBan_b__0
               (Anticheat_ModeratorManager___c__DisplayClass96_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  char *pcVar5;
  Il2CppObject *pIVar6;
  char cVar7;
  
  if (Il2CppMethodInitialized_184347acb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347acb = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_18237676b:
    ThrowNullReferenceException();
  }
  bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,'\x01',
                     (MethodInfo_13E2E80 *)
                     MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar3) {
    pIVar4 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,'\x01',
                        (MethodInfo_13F4180 *)
                        MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_18237676b;
    if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354de8);
    }
    pcVar5 = il2cpp_object_unbox(pIVar4);
    cVar7 = *pcVar5;
  }
  else {
    cVar7 = '\0';
  }
  bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,'\x02',
                     (MethodInfo_13E2E80 *)
                     MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar3) {
    pIVar6 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,'\x02',
                        (MethodInfo_13F4180 *)
                        MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    pIVar4 = (Il2CppObject *)0x0;
    if (pIVar6 != (Il2CppObject *)0x0) {
      if (pIVar6->klass == g_data_184354e50) {
        pIVar4 = pIVar6;
      }
      if (pIVar4 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar6);
      }
    }
  }
  else {
    pIVar4 = *(Il2CppObject **)g_data_184354e50->static_fields;
  }
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pIVar4,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pIVar4,(pSVar1->fields).method);
  }
  if (cVar7 != '\0') {
    pSVar1 = (__this->fields).localStatus;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    if (Il2CppMethodInitialized_184347ab1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_184347ab1 = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    Anticheat_ModeratorManager__RequestRegionBanList_236ef40(0,0x32,pSVar1,(MethodInfo *)0x0);
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass96_0$$<RegionBan>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass96_0___RegionBan_b__1 (Anticheat_ModeratorManager___c__DisplayClass96_0_o* __this, const MethodInfo* method);
// 0x182376790

void Anticheat_ModeratorManager___c__DisplayClass96_0___RegionBan_b__1
               (Anticheat_ModeratorManager___c__DisplayClass96_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347acc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Request timed out");
    Il2CppMethodInitialized_184347acc = '\x01';
  }
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar3 = "Request timed out";
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass97_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass97_0___ctor (Anticheat_ModeratorManager___c__DisplayClass97_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Anticheat_ModeratorManager___c__DisplayClass97_0___ctor(Anticheat_ModeratorManager___c__DisplayClass97_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass97_0$$<RegionBanPlayerEntry>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass97_0___RegionBanPlayerEntry_b__0 (Anticheat_ModeratorManager___c__DisplayClass97_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x182376860
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18237694c: jmp 0x18237695f

void Anticheat_ModeratorManager___c__DisplayClass97_0___RegionBanPlayerEntry_b__0
               (Anticheat_ModeratorManager___c__DisplayClass97_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  char *pcVar5;
  Il2CppObject *pIVar6;
  char cVar7;
  
  if (Il2CppMethodInitialized_184347acd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347acd = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_182376a5b:
    ThrowNullReferenceException();
  }
  bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,'\x01',
                     (MethodInfo_13E2E80 *)
                     MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar3) {
    pIVar4 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,'\x01',
                        (MethodInfo_13F4180 *)
                        MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_182376a5b;
    if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354de8);
    }
    pcVar5 = il2cpp_object_unbox(pIVar4);
    cVar7 = *pcVar5;
  }
  else {
    cVar7 = '\0';
  }
  bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,'\x02',
                     (MethodInfo_13E2E80 *)
                     MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar3) {
    pIVar6 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,'\x02',
                        (MethodInfo_13F4180 *)
                        MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    pIVar4 = (Il2CppObject *)0x0;
    if (pIVar6 != (Il2CppObject *)0x0) {
      if (pIVar6->klass == g_data_184354e50) {
        pIVar4 = pIVar6;
      }
      if (pIVar4 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar6);
      }
    }
  }
  else {
    pIVar4 = *(Il2CppObject **)g_data_184354e50->static_fields;
  }
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pIVar4,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pIVar4,(pSVar1->fields).method);
  }
  if (cVar7 != '\0') {
    pSVar1 = (__this->fields).localStatus;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    if (Il2CppMethodInitialized_184347ab1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_184347ab1 = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    Anticheat_ModeratorManager__RequestRegionBanList_236ef40(0,0x32,pSVar1,(MethodInfo *)0x0);
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass97_0$$<RegionBanPlayerEntry>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass97_0___RegionBanPlayerEntry_b__1 (Anticheat_ModeratorManager___c__DisplayClass97_0_o* __this, const MethodInfo* method);
// 0x182376a80

void Anticheat_ModeratorManager___c__DisplayClass97_0___RegionBanPlayerEntry_b__1
               (Anticheat_ModeratorManager___c__DisplayClass97_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347ace == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Request timed out");
    Il2CppMethodInitialized_184347ace = '\x01';
  }
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar3 = "Request timed out";
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass98_0$$.ctor
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass98_0___ctor (Anticheat_ModeratorManager___c__DisplayClass98_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Anticheat_ModeratorManager___c__DisplayClass98_0___ctor(Anticheat_ModeratorManager___c__DisplayClass98_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass98_0$$<RegionUnban>b__0
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass98_0___RegionUnban_b__0 (Anticheat_ModeratorManager___c__DisplayClass98_0_o* __this, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x182376b50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182376c3c: jmp 0x182376c4f

void Anticheat_ModeratorManager___c__DisplayClass98_0___RegionUnban_b__0
               (Anticheat_ModeratorManager___c__DisplayClass98_0_o *__this,
               System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  char *pcVar5;
  Il2CppObject *pIVar6;
  char cVar7;
  
  if (Il2CppMethodInitialized_184347acf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347acf = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_182376d4b:
    ThrowNullReferenceException();
  }
  bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,'\x01',
                     (MethodInfo_13E2E80 *)
                     MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar3) {
    pIVar4 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,'\x01',
                        (MethodInfo_13F4180 *)
                        MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    if (pIVar4 == (Il2CppObject *)0x0) goto label_182376d4b;
    if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354de8);
    }
    pcVar5 = il2cpp_object_unbox(pIVar4);
    cVar7 = *pcVar5;
  }
  else {
    cVar7 = '\0';
  }
  bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,'\x02',
                     (MethodInfo_13E2E80 *)
                     MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar3) {
    pIVar6 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,'\x02',
                        (MethodInfo_13F4180 *)
                        MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    pIVar4 = (Il2CppObject *)0x0;
    if (pIVar6 != (Il2CppObject *)0x0) {
      if (pIVar6->klass == g_data_184354e50) {
        pIVar4 = pIVar6;
      }
      if (pIVar4 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar6);
      }
    }
  }
  else {
    pIVar4 = *(Il2CppObject **)g_data_184354e50->static_fields;
  }
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pIVar4,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pIVar4,(pSVar1->fields).method);
  }
  if (cVar7 != '\0') {
    pSVar1 = (__this->fields).localStatus;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    if (Il2CppMethodInitialized_184347ab1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_184347ab1 = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    Anticheat_ModeratorManager__RequestRegionBanList_236ef40(0,0x32,pSVar1,(MethodInfo *)0x0);
  }
  return;
}


// Anticheat.ModeratorManager.<>c__DisplayClass98_0$$<RegionUnban>b__1
// il2cpp: void Anticheat_ModeratorManager___c__DisplayClass98_0___RegionUnban_b__1 (Anticheat_ModeratorManager___c__DisplayClass98_0_o* __this, const MethodInfo* method);
// 0x182376d70

void Anticheat_ModeratorManager___c__DisplayClass98_0___RegionUnban_b__1
               (Anticheat_ModeratorManager___c__DisplayClass98_0_o *__this,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347ad0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Request timed out");
    Il2CppMethodInitialized_184347ad0 = '\x01';
  }
  pSVar1 = (__this->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar3 = "Request timed out";
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
  }
  return;
}


// Anticheat.ModeratorManager$$get_IsAuthenticated
// il2cpp: bool Anticheat_ModeratorManager__get_IsAuthenticated (const MethodInfo* method);
// 0x182371360

bool Anticheat_ModeratorManager__get_IsAuthenticated(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347a80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a80 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  return TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField;
}


// Anticheat.ModeratorManager$$set_IsAuthenticated
// il2cpp: void Anticheat_ModeratorManager__set_IsAuthenticated (bool value, const MethodInfo* method);
// 0x182371a00

void Anticheat_ModeratorManager__set_IsAuthenticated(bool value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347a81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a81 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField = value;
  return;
}


// Anticheat.ModeratorManager$$get_AuthLevel
// il2cpp: int32_t Anticheat_ModeratorManager__get_AuthLevel (const MethodInfo* method);
// 0x1823712b0

int32_t Anticheat_ModeratorManager__get_AuthLevel(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347a82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a82 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  return TypeInfo_Anticheat_ModeratorManager->static_fields->_AuthLevel_k__BackingField;
}


// Anticheat.ModeratorManager$$set_AuthLevel
// il2cpp: void Anticheat_ModeratorManager__set_AuthLevel (int32_t value, const MethodInfo* method);
// 0x1823719a0

void Anticheat_ModeratorManager__set_AuthLevel(int32_t value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347a83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a83 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  TypeInfo_Anticheat_ModeratorManager->static_fields->_AuthLevel_k__BackingField = value;
  return;
}


// Anticheat.ModeratorManager$$get_AuthUsername
// il2cpp: System_String_o* Anticheat_ModeratorManager__get_AuthUsername (const MethodInfo* method);
// 0x182371300

System_String_o * Anticheat_ModeratorManager__get_AuthUsername(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347a84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184347a84 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar1 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
  if (pSVar1 == (System_String_o *)0x0) {
    pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  return pSVar1;
}


// Anticheat.ModeratorManager$$get_ActivePlayers
// il2cpp: System_Collections_Generic_Dictionary_int__PlayerEntry__o* Anticheat_ModeratorManager__get_ActivePlayers (const MethodInfo* method);
// 0x182371260

System_Collections_Generic_Dictionary_int__PlayerEntry__o *
Anticheat_ModeratorManager__get_ActivePlayers(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347a85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a85 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  return TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
}


// Anticheat.ModeratorManager$$set_ActivePlayers
// il2cpp: void Anticheat_ModeratorManager__set_ActivePlayers (System_Collections_Generic_Dictionary_int__PlayerEntry__o* value, const MethodInfo* method);
// 0x182371930

void Anticheat_ModeratorManager__set_ActivePlayers
               (System_Collections_Generic_Dictionary_int__PlayerEntry__o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347a86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a86 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField,value);
  return;
}


// Anticheat.ModeratorManager$$get_PastPlayers
// il2cpp: System_Collections_Generic_List_PlayerEntry__o* Anticheat_ModeratorManager__get_PastPlayers (const MethodInfo* method);
// 0x1823713b0

System_Collections_Generic_List_PlayerEntry__o *
Anticheat_ModeratorManager__get_PastPlayers(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347a87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a87 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  return TypeInfo_Anticheat_ModeratorManager->static_fields->_PastPlayers_k__BackingField;
}


// Anticheat.ModeratorManager$$set_PastPlayers
// il2cpp: void Anticheat_ModeratorManager__set_PastPlayers (System_Collections_Generic_List_PlayerEntry__o* value, const MethodInfo* method);
// 0x182371a60

void Anticheat_ModeratorManager__set_PastPlayers
               (System_Collections_Generic_List_PlayerEntry__o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347a88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a88 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  TypeInfo_Anticheat_ModeratorManager->static_fields->_PastPlayers_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Anticheat_ModeratorManager->static_fields->_PastPlayers_k__BackingField,value);
  return;
}


// Anticheat.ModeratorManager$$add_AuthChanged
// il2cpp: void Anticheat_ModeratorManager__add_AuthChanged (System_Action_o* value, const MethodInfo* method);
// 0x182370d30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182370d99: nop dword ptr [rax]

void Anticheat_ModeratorManager__add_AuthChanged(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Action_o *pSVar2;
  System_Delegate_o *pSVar3;
  System_Action_o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184347a89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a89 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  a = TypeInfo_Anticheat_ModeratorManager->static_fields->AuthChanged;
  do {
    pSVar1 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar3 = (System_Delegate_o *)0x0;
    if (pSVar1 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar1->klass == TypeInfo_System_Action) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1);
      }
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar2 = (System_Action_o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_Anticheat_ModeratorManager->static_fields->AuthChanged,pSVar3);
    bVar4 = pSVar2 != a;
    a = pSVar2;
  } while (bVar4);
  return;
}


// Anticheat.ModeratorManager$$remove_AuthChanged
// il2cpp: void Anticheat_ModeratorManager__remove_AuthChanged (System_Action_o* value, const MethodInfo* method);
// 0x182371400
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182371469: nop dword ptr [rax]

void Anticheat_ModeratorManager__remove_AuthChanged(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Action_o *pSVar2;
  System_Delegate_o *pSVar3;
  System_Action_o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184347a8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a8a = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  source = TypeInfo_Anticheat_ModeratorManager->static_fields->AuthChanged;
  do {
    pSVar1 = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Delegate_o *)0x0;
    if (pSVar1 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar1->klass == TypeInfo_System_Action) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1);
      }
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar2 = (System_Action_o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_Anticheat_ModeratorManager->static_fields->AuthChanged,pSVar3);
    bVar4 = pSVar2 != source;
    source = pSVar2;
  } while (bVar4);
  return;
}


// Anticheat.ModeratorManager$$add_PlayerListChanged
// il2cpp: void Anticheat_ModeratorManager__add_PlayerListChanged (System_Action_o* value, const MethodInfo* method);
// 0x182370e30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182370e99: nop dword ptr [rax]

void Anticheat_ModeratorManager__add_PlayerListChanged(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Action_o *pSVar2;
  System_Delegate_o *pSVar3;
  System_Action_o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184347a8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a8b = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  a = TypeInfo_Anticheat_ModeratorManager->static_fields->PlayerListChanged;
  do {
    pSVar1 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar3 = (System_Delegate_o *)0x0;
    if (pSVar1 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar1->klass == TypeInfo_System_Action) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1);
      }
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar2 = (System_Action_o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_Anticheat_ModeratorManager->static_fields->PlayerListChanged,pSVar3);
    bVar4 = pSVar2 != a;
    a = pSVar2;
  } while (bVar4);
  return;
}


// Anticheat.ModeratorManager$$remove_PlayerListChanged
// il2cpp: void Anticheat_ModeratorManager__remove_PlayerListChanged (System_Action_o* value, const MethodInfo* method);
// 0x182371500
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182371569: nop dword ptr [rax]

void Anticheat_ModeratorManager__remove_PlayerListChanged(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Action_o *pSVar2;
  System_Delegate_o *pSVar3;
  System_Action_o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184347a8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a8c = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  source = TypeInfo_Anticheat_ModeratorManager->static_fields->PlayerListChanged;
  do {
    pSVar1 = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Delegate_o *)0x0;
    if (pSVar1 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar1->klass == TypeInfo_System_Action) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1);
      }
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar2 = (System_Action_o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_Anticheat_ModeratorManager->static_fields->PlayerListChanged,pSVar3);
    bVar4 = pSVar2 != source;
    source = pSVar2;
  } while (bVar4);
  return;
}


// Anticheat.ModeratorManager$$add_StatusMessage
// il2cpp: void Anticheat_ModeratorManager__add_StatusMessage (System_Action_string__o* value, const MethodInfo* method);
// 0x182371150
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823711bf: nop 

void Anticheat_ModeratorManager__add_StatusMessage(System_Action_string__o *value,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  System_Delegate_o *obj;
  Il2CppObject *pIVar2;
  System_Action_string__o *pSVar3;
  System_Action_string__o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184347a8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a8d = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  a = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  do {
    obj = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_string;
    if (obj == (System_Delegate_o *)0x0) {
      pIVar2 = (Il2CppObject *)0x0;
    }
    else {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_string);
      if (pIVar2 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar3 = (System_Action_string__o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage,pIVar2);
    bVar4 = pSVar3 != a;
    a = pSVar3;
  } while (bVar4);
  return;
}


// Anticheat.ModeratorManager$$remove_StatusMessage
// il2cpp: void Anticheat_ModeratorManager__remove_StatusMessage (System_Action_string__o* value, const MethodInfo* method);
// 0x182371820
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18237188f: nop 

void Anticheat_ModeratorManager__remove_StatusMessage(System_Action_string__o *value,MethodInfo *method)

{
  System_Action_string__c *pSVar1;
  System_Delegate_o *obj;
  Il2CppObject *pIVar2;
  System_Action_string__o *pSVar3;
  System_Action_string__o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184347a8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a8e = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  source = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  do {
    obj = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_string;
    if (obj == (System_Delegate_o *)0x0) {
      pIVar2 = (Il2CppObject *)0x0;
    }
    else {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_string);
      if (pIVar2 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar3 = (System_Action_string__o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage,pIVar2);
    bVar4 = pSVar3 != source;
    source = pSVar3;
  } while (bVar4);
  return;
}


// Anticheat.ModeratorManager$$add_RoomBanListReceived
// il2cpp: void Anticheat_ModeratorManager__add_RoomBanListReceived (System_Action_RoomBanPage__o* value, const MethodInfo* method);
// 0x182371040
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823710af: nop 

void Anticheat_ModeratorManager__add_RoomBanListReceived
               (System_Action_RoomBanPage__o *value,MethodInfo *method)

{
  System_Action_RoomBanPage__c *pSVar1;
  System_Delegate_o *obj;
  Il2CppObject *pIVar2;
  System_Action_RoomBanPage__o *pSVar3;
  System_Action_RoomBanPage__o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184347a8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_RoomBanPage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a8f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  a = TypeInfo_Anticheat_ModeratorManager->static_fields->RoomBanListReceived;
  do {
    obj = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_RoomBanPage;
    if (obj == (System_Delegate_o *)0x0) {
      pIVar2 = (Il2CppObject *)0x0;
    }
    else {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_RoomBanPage);
      if (pIVar2 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar3 = (System_Action_RoomBanPage__o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_Anticheat_ModeratorManager->static_fields->RoomBanListReceived,pIVar2);
    bVar4 = pSVar3 != a;
    a = pSVar3;
  } while (bVar4);
  return;
}


// Anticheat.ModeratorManager$$remove_RoomBanListReceived
// il2cpp: void Anticheat_ModeratorManager__remove_RoomBanListReceived (System_Action_RoomBanPage__o* value, const MethodInfo* method);
// 0x182371710
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18237177f: nop 

void Anticheat_ModeratorManager__remove_RoomBanListReceived
               (System_Action_RoomBanPage__o *value,MethodInfo *method)

{
  System_Action_RoomBanPage__c *pSVar1;
  System_Delegate_o *obj;
  Il2CppObject *pIVar2;
  System_Action_RoomBanPage__o *pSVar3;
  System_Action_RoomBanPage__o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184347a90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_RoomBanPage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a90 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  source = TypeInfo_Anticheat_ModeratorManager->static_fields->RoomBanListReceived;
  do {
    obj = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_RoomBanPage;
    if (obj == (System_Delegate_o *)0x0) {
      pIVar2 = (Il2CppObject *)0x0;
    }
    else {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_RoomBanPage);
      if (pIVar2 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar3 = (System_Action_RoomBanPage__o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_Anticheat_ModeratorManager->static_fields->RoomBanListReceived,pIVar2);
    bVar4 = pSVar3 != source;
    source = pSVar3;
  } while (bVar4);
  return;
}


// Anticheat.ModeratorManager$$add_RegionBanListReceived
// il2cpp: void Anticheat_ModeratorManager__add_RegionBanListReceived (System_Action_RegionBanPage__o* value, const MethodInfo* method);
// 0x182370f30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182370f9f: nop 

void Anticheat_ModeratorManager__add_RegionBanListReceived
               (System_Action_RegionBanPage__o *value,MethodInfo *method)

{
  System_Action_RegionBanPage__c *pSVar1;
  System_Delegate_o *obj;
  Il2CppObject *pIVar2;
  System_Action_RegionBanPage__o *pSVar3;
  System_Action_RegionBanPage__o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184347a91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_RegionBanPage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a91 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  a = TypeInfo_Anticheat_ModeratorManager->static_fields->RegionBanListReceived;
  do {
    obj = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_RegionBanPage;
    if (obj == (System_Delegate_o *)0x0) {
      pIVar2 = (Il2CppObject *)0x0;
    }
    else {
      pIVar2 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_RegionBanPage);
      if (pIVar2 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar3 = (System_Action_RegionBanPage__o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_Anticheat_ModeratorManager->static_fields->RegionBanListReceived,pIVar2);
    bVar4 = pSVar3 != a;
    a = pSVar3;
  } while (bVar4);
  return;
}


// Anticheat.ModeratorManager$$remove_RegionBanListReceived
// il2cpp: void Anticheat_ModeratorManager__remove_RegionBanListReceived (System_Action_RegionBanPage__o* value, const MethodInfo* method);
// 0x182371600
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18237166f: nop 

void Anticheat_ModeratorManager__remove_RegionBanListReceived
               (System_Action_RegionBanPage__o *value,MethodInfo *method)

{
  System_Action_RegionBanPage__c *pSVar1;
  System_Delegate_o *obj;
  Il2CppObject *pIVar2;
  System_Action_RegionBanPage__o *pSVar3;
  System_Action_RegionBanPage__o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184347a92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_RegionBanPage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a92 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  source = TypeInfo_Anticheat_ModeratorManager->static_fields->RegionBanListReceived;
  do {
    obj = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_RegionBanPage;
    if (obj == (System_Delegate_o *)0x0) {
      pIVar2 = (Il2CppObject *)0x0;
    }
    else {
      pIVar2 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_RegionBanPage);
      if (pIVar2 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar3 = (System_Action_RegionBanPage__o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_Anticheat_ModeratorManager->static_fields->RegionBanListReceived,pIVar2);
    bVar4 = pSVar3 != source;
    source = pSVar3;
  } while (bVar4);
  return;
}


// Anticheat.ModeratorManager$$Init
// il2cpp: void Anticheat_ModeratorManager__Init (const MethodInfo* method);
// 0x18236c650

void Anticheat_ModeratorManager__Init(MethodInfo *method)

{
  Anticheat_ModeratorManager_o *value;
  
  if (Il2CppMethodInitialized_184347a93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_ModeratorManager);
    Il2CppMethodInitialized_184347a93 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  value = Utility_SingletonFactory__CreateSingleton_object_
                    ((Il2CppObject *)TypeInfo_Anticheat_ModeratorManager->static_fields->_instance,
                     (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_ModeratorManager
                    );
  TypeInfo_Anticheat_ModeratorManager->static_fields->_instance = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Anticheat_ModeratorManager->static_fields->_instance,value);
  return;
}


// Anticheat.ModeratorManager$$OnEnable
// il2cpp: void Anticheat_ModeratorManager__OnEnable (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x18236cb00

void Anticheat_ModeratorManager__OnEnable(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347a94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Anticheat_ModeratorManager_ClearAuth);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Anticheat_ModeratorManager_UpdateAuthFromRoles);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184347a94 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  Photon_Pun_PhotonNetwork__AddCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar1,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_UpdateAuthFromRoles,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  ApplicationManagers_AccountManager__add_OnLoggedIn(pSVar1,(MethodInfo *)0x0);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar1,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_ClearAuth,(MethodInfo *)0x0);
  ApplicationManagers_AccountManager__add_OnLoggedOut(pSVar1,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager$$OnDisable
// il2cpp: void Anticheat_ModeratorManager__OnDisable (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x18236ca10

void Anticheat_ModeratorManager__OnDisable(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347a95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Anticheat_ModeratorManager_ClearAuth);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Anticheat_ModeratorManager_UpdateAuthFromRoles);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184347a95 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  Photon_Pun_PhotonNetwork__RemoveCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar1,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_UpdateAuthFromRoles,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  ApplicationManagers_AccountManager__remove_OnLoggedIn(pSVar1,(MethodInfo *)0x0);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar1,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_ClearAuth,(MethodInfo *)0x0);
  ApplicationManagers_AccountManager__remove_OnLoggedOut(pSVar1,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager$$Update
// il2cpp: void Anticheat_ModeratorManager__Update (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x182370ae0

void Anticheat_ModeratorManager__Update(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  Anticheat_ModeratorManager__TickTimeouts(__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager$$OnEvent
// il2cpp: void Anticheat_ModeratorManager__OnEvent (Anticheat_ModeratorManager_o* __this, ExitGames_Client_Photon_EventData_o* photonEvent, const MethodInfo* method);
// 0x18236cbf0
// eh: try 0x18236cd73..0x18236cf85 -> pad 0x183317c60 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18236cdd3: mov rdx, qword ptr [rip + 0x1d5e9f6]  ; MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_Dispose
// asm:   0x18236cdda: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18236cddf: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18236cde4: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18236cde9: test rcx, rcx
// asm:   0x18236cdec: jne 0x18236cf85
// asm:   0x18236cdf2: xor esi, esi
// asm:   0x18236cdf4: mov r14, qword ptr [rsp + 0x80]
// asm:   0x18236cdfc: mov rdi, qword ptr [rsp + 0x98]
// asm:   0x18236cf85: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317c60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317c65: push rbp
// asm:   0x183317c66: sub rsp, 0x20
// asm:   0x183317c6a: mov rbp, rdx
// asm:   0x183317c6d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317c71: mov rcx, qword ptr [rax]
// asm:   0x183317c74: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183317c78: movabs rax, 0
// asm:   0x183317c82: add rsp, 0x20
// asm:   0x183317c86: pop rbp
// asm:   0x183317c87: ret 

void Anticheat_ModeratorManager__OnEvent
               (Anticheat_ModeratorManager_o *__this,ExitGames_Client_Photon_EventData_o *photonEvent,
               MethodInfo *method)

{
  ExitGames_Client_Photon_ParameterDictionary_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__float__o *pSVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_Dictionary_byte__object__o *__this_01;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o *pEVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *key;
  Il2CppObject *local_res10;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_K__V__Fields local_50;
  undefined8 local_40;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_K__V__Fields *local_38;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o local_30;
  
  if (Il2CppMethodInitialized_184347a96 == '\0') {
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
    Il2CppMethodInitialized_184347a96 = '\x01';
  }
  key = (Il2CppObject *)0x0;
  local_res10 = (Il2CppObject *)0x0;
  local_50._index = 0;
  local_50._4_4_ = 0;
  local_50._dict = (ExitGames_Client_Photon_NonAllocDictionary_K__V__o *)0x0;
  if (photonEvent == (ExitGames_Client_Photon_EventData_o *)0x0) {
label_18236cf79:
    ThrowNullReferenceException();
  }
  iVar4 = ExitGames_Client_Photon_EventData__get_Sender(photonEvent,(MethodInfo *)0x0);
  if (iVar4 == -1) {
    if ((photonEvent->fields).Code == 0xbc) {
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      Anticheat_ModeratorManager__HandlePlayerListNotification(photonEvent,(MethodInfo *)0x0);
      return;
    }
    if ((photonEvent->fields).Code == 0xbd) {
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      Anticheat_ModeratorManager__HandlePlayerJoinNotification(photonEvent,(MethodInfo *)0x0);
      return;
    }
    if ((photonEvent->fields).Code == 0xbe) {
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
      System_Collections_Generic_Dictionary_byte__object____ctor
                (__this_01,
                 (MethodInfo_13F2020 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
      __this_00 = (photonEvent->fields).Parameters;
      if (__this_00 != (ExitGames_Client_Photon_ParameterDictionary_o *)0x0) {
        pEVar5 = ExitGames_Client_Photon_ParameterDictionary__GetEnumerator
                           (&local_30,__this_00,(MethodInfo *)0x0);
        local_50._index = (pEVar5->fields)._index;
        local_50._4_4_ = *(undefined4 *)&(pEVar5->fields).field_0x4;
        local_50._dict = (pEVar5->fields)._dict;
        local_40 = 0;
        local_38 = &local_50;
        while (bVar3 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator_int__object___MoveNext
                                 ((ExitGames_Client_Photon_NonAllocDictionary_PairIterator_K__V__o *)&local_50
                                  ,(MethodInfo_B47810 *)
                                   MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_MoveNext
                                 ), bVar3) {
          ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___get_Current
                    ((System_Collections_Generic_KeyValuePair_K__V__o *)&local_30,
                     (ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o *)&local_50,
                     (MethodInfo_B47C20 *)
                     MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_get_Current
                    );
          if (__this_01 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_byte__object___set_Item
                    (__this_01,(uint8_t)local_30.fields._index,(Il2CppObject *)local_30.fields._dict,
                     (MethodInfo_13F4530 *)
                     MethodInfo_System_Collections_Generic_Dictionary_byte_object_set_Item);
        }
        ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_50,
                   MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_Dispose);
        if (__this_01 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
          return;
        }
        bVar3 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                          (__this_01,'\0',
                           (MethodInfo_13E2E80 *)
                           MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
        if (!bVar3) {
          return;
        }
        pIVar6 = System_Collections_Generic_Dictionary_byte__object___get_Item
                           (__this_01,'\0',
                            (MethodInfo_13F4180 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
        if (pIVar6 != (Il2CppObject *)0x0) {
          if (pIVar6->klass == g_data_184354e50) {
            key = pIVar6;
          }
          if (key == (Il2CppObject *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar6);
          }
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._pendingCallbacks
        ;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                            (pSVar1,key,&local_res10,
                             (MethodInfo_14769C0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_Action_Dictionary_byte_object_TryGetValue
                            );
          if (!bVar3) {
            return;
          }
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._pendingCallbacks;
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Remove
                      (pSVar1,key,
                       (MethodInfo_1470BF0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Action_Dictionary_byte_object_Remove
                      );
            pSVar2 = (__this->fields)._pendingTimestamps;
            if (pSVar2 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
              System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___Remove
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,key,
                         (MethodInfo_145AA00 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_float_Remove);
              pSVar2 = (__this->fields)._pendingTimeouts;
              if (pSVar2 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___Remove
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,key,
                           (MethodInfo_145AA00 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_float_Remove);
                pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (__this->fields)._pendingTimeoutCallbacks;
                if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  System_Collections_Generic_Dictionary_object__object___Remove
                            (pSVar1,key,
                             (MethodInfo_1470BF0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_Action_Remove);
                  if (local_res10 != (Il2CppObject *)0x0) {
                    (*local_res10[1].monitor)(local_res10[4].klass,__this_01,local_res10[2].monitor);
                    return;
                  }
                  return;
                }
              }
            }
          }
        }
      }
      goto label_18236cf79;
    }
  }
  return;
}


// Anticheat.ModeratorManager$$OnPlayerEnteredRoom
// il2cpp: void Anticheat_ModeratorManager__OnPlayerEnteredRoom (Anticheat_ModeratorManager_o* __this, Photon_Realtime_Player_o* newPlayer, const MethodInfo* method);
// 0x180547020

void
Anticheat_ModeratorManager__OnPlayerEnteredRoom(Anticheat_ModeratorManager_o* __this, Photon_Realtime_Player_o* newPlayer, MethodInfo* method)

{
  return;
}


// Anticheat.ModeratorManager$$OnPlayerLeftRoom
// il2cpp: void Anticheat_ModeratorManager__OnPlayerLeftRoom (Anticheat_ModeratorManager_o* __this, Photon_Realtime_Player_o* otherPlayer, const MethodInfo* method);
// 0x18236d190

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
  Anticheat_PlayerEntry_o *local_res10 [3];
  
  if (Il2CppMethodInitialized_184347a97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_PlayerEntry_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a97 = '\x01';
  }
  local_res10[0] = (Anticheat_PlayerEntry_o *)0x0;
  if (otherPlayer != (Photon_Realtime_Player_o *)0x0) {
    key = (otherPlayer->fields).actorNumber;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    if (Il2CppMethodInitialized_18434736b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_18434736b = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
    if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      bVar7 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                        (pSVar3,key,(Il2CppObject **)local_res10,
                         (MethodInfo_141F4E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_TryGetValue);
      if (!bVar7) {
        return;
      }
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      if (Il2CppMethodInitialized_18434736b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
        Il2CppMethodInitialized_18434736b = '\x01';
      }
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
      if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        System_Collections_Generic_Dictionary_int__object___Remove
                  (pSVar3,key,
                   (MethodInfo_1419B90 *)
                   MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_Remove);
        if (Il2CppMethodInitialized_18434736c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
          Il2CppMethodInitialized_18434736c = '\x01';
        }
        if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
        }
        pMVar6 = MethodInfo_System_Collections_Generic_List_PlayerEntry_Add;
        __this_00 = TypeInfo_Anticheat_ModeratorManager->static_fields->_PastPlayers_k__BackingField;
        if (__this_00 != (System_Collections_Generic_List_PlayerEntry__o *)0x0) {
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pAVar4 = (__this_00->fields)._items;
          if (pAVar4 != (Anticheat_PlayerEntry_array *)0x0) {
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pAVar4->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              if ((uint)pAVar4->max_length <= uVar2) {
                ThrowIndexOutOfRangeException();
              }
              pAVar4->m_Items[(int)uVar2] = local_res10[0];
              Il2CppCodeGenWriteBarrier(pAVar4->m_Items + (int)uVar2,local_res10[0]);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)local_res10[0]
                         ,(MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
            }
            pSVar5 = TypeInfo_Anticheat_ModeratorManager->static_fields->PlayerListChanged;
            if (pSVar5 == (System_Action_o *)0x0) {
              return;
            }
            (*(code *)(pSVar5->fields).invoke_impl)((pSVar5->fields).method_code,(pSVar5->fields).method);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$OnRoomPropertiesUpdate
// il2cpp: void Anticheat_ModeratorManager__OnRoomPropertiesUpdate (Anticheat_ModeratorManager_o* __this, ExitGames_Client_Photon_Hashtable_o* propertiesThatChanged, const MethodInfo* method);
// 0x180547020

void
Anticheat_ModeratorManager__OnRoomPropertiesUpdate(Anticheat_ModeratorManager_o* __this, ExitGames_Client_Photon_Hashtable_o* propertiesThatChanged, MethodInfo* method)

{
  return;
}


// Anticheat.ModeratorManager$$OnPlayerPropertiesUpdate
// il2cpp: void Anticheat_ModeratorManager__OnPlayerPropertiesUpdate (Anticheat_ModeratorManager_o* __this, Photon_Realtime_Player_o* targetPlayer, ExitGames_Client_Photon_Hashtable_o* changedProps, const MethodInfo* method);
// 0x180547020

void
Anticheat_ModeratorManager__OnPlayerPropertiesUpdate(Anticheat_ModeratorManager_o* __this, Photon_Realtime_Player_o* targetPlayer, ExitGames_Client_Photon_Hashtable_o* changedProps, MethodInfo* method)

{
  return;
}


// Anticheat.ModeratorManager$$OnMasterClientSwitched
// il2cpp: void Anticheat_ModeratorManager__OnMasterClientSwitched (Anticheat_ModeratorManager_o* __this, Photon_Realtime_Player_o* newMasterClient, const MethodInfo* method);
// 0x180547020

void
Anticheat_ModeratorManager__OnMasterClientSwitched(Anticheat_ModeratorManager_o* __this, Photon_Realtime_Player_o* newMasterClient, MethodInfo* method)

{
  return;
}


// Anticheat.ModeratorManager$$OnJoinedRoom
// il2cpp: void Anticheat_ModeratorManager__OnJoinedRoom (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x18236cfa0

void Anticheat_ModeratorManager__OnJoinedRoom(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347a98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a98 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__UpdateAuthFromRoles((MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager$$OnLeftRoom
// il2cpp: void Anticheat_ModeratorManager__OnLeftRoom (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x18236cfe0

void Anticheat_ModeratorManager__OnLeftRoom(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_Dictionary_int__PlayerEntry__o *__this_00;
  System_Collections_Generic_List_PlayerEntry__o *pSVar2;
  System_Collections_Generic_Dictionary_string__Action_Dictionary_byte__object____o *__this_01;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  System_Collections_Generic_Dictionary_string__Action__o *__this_02;
  
  if (Il2CppMethodInitialized_184347a99 == '\0') {
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
    Il2CppMethodInitialized_184347a99 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__ClearAuth((MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18434736b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_18434736b = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  __this_00 = TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__PlayerEntry__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_Clear);
    if (Il2CppMethodInitialized_18434736c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_18434736c = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->_PastPlayers_k__BackingField;
    if (pSVar2 != (System_Collections_Generic_List_PlayerEntry__o *)0x0) {
      length = (pSVar2->fields)._size;
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      __this_01 = (__this->fields)._pendingCallbacks;
      if (__this_01 !=
          (System_Collections_Generic_Dictionary_string__Action_Dictionary_byte__object____o *)0x0) {
        System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                   (MethodInfo_13BF1C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_Action_Dictionary_byte_object_Clear
                  );
        pSVar3 = (__this->fields)._pendingTimestamps;
        if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
          System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                     (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Clear
                    );
          pSVar3 = (__this->fields)._pendingTimeouts;
          if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
            System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                       (MethodInfo_13BF1C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_float_Clear);
            __this_02 = (__this->fields)._pendingTimeoutCallbacks;
            if (__this_02 != (System_Collections_Generic_Dictionary_string__Action__o *)0x0) {
              System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                         (MethodInfo_13BF1C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_Action_Clear);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$UpdateAuthFromRoles
// il2cpp: void Anticheat_ModeratorManager__UpdateAuthFromRoles (const MethodInfo* method);
// 0x1823708b0

void Anticheat_ModeratorManager__UpdateAuthFromRoles(MethodInfo *method)

{
  System_Action_o *pSVar1;
  bool bVar2;
  System_String_array *source;
  undefined8 uVar3;
  
  if (Il2CppMethodInitialized_184347a9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Contains_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    il2cpp_codegen_initialize_runtime_metadata(&"admin");
    il2cpp_codegen_initialize_runtime_metadata(&"moderator");
    il2cpp_codegen_initialize_runtime_metadata(&"trusted");
    Il2CppMethodInitialized_184347a9a = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  source = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
  if (source != (System_String_array *)0x0) {
    bVar2 = System_Linq_Enumerable__Contains_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                       (Il2CppObject *)"admin",
                       (MethodInfo_6BA240 *)MethodInfo_System_Linq_Enumerable_Contains_string);
    if (bVar2) {
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      if (Il2CppMethodInitialized_184347ad7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
        Il2CppMethodInitialized_184347ad7 = '\x01';
      }
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField = true;
      if (Il2CppMethodInitialized_184347ad8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
        Il2CppMethodInitialized_184347ad8 = '\x01';
      }
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      TypeInfo_Anticheat_ModeratorManager->static_fields->_AuthLevel_k__BackingField = 2;
    }
    else {
      bVar2 = System_Linq_Enumerable__Contains_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (Il2CppObject *)"moderator",
                         (MethodInfo_6BA240 *)MethodInfo_System_Linq_Enumerable_Contains_string);
      if (bVar2) {
        if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
        }
        il2cpp_runtime_helper_18235e800(1,0);
        uVar3 = 1;
      }
      else {
        bVar2 = System_Linq_Enumerable__Contains_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (Il2CppObject *)"trusted",
                           (MethodInfo_6BA240 *)MethodInfo_System_Linq_Enumerable_Contains_string);
        if (!bVar2) goto label_182370aac;
        if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
        }
        il2cpp_runtime_helper_18235e800(1,0);
        uVar3 = 0;
      }
      il2cpp_runtime_helper_18235e7a0(uVar3,0);
    }
    pSVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->AuthChanged;
    if (pSVar1 != (System_Action_o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
      return;
    }
    return;
  }
label_182370aac:
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__ClearAuth((MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager$$ClearAuth
// il2cpp: void Anticheat_ModeratorManager__ClearAuth (const MethodInfo* method);
// 0x18236bc90

void Anticheat_ModeratorManager__ClearAuth(MethodInfo *method)

{
  System_Action_o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347a9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9b = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_184347369 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347369 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField == false) {
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    if (Il2CppMethodInitialized_18434736a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_18434736a = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    bVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->_AuthLevel_k__BackingField != -1;
  }
  else {
    bVar2 = true;
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_184347ad7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347ad7 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField = false;
  if (Il2CppMethodInitialized_184347ad8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347ad8 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  TypeInfo_Anticheat_ModeratorManager->static_fields->_AuthLevel_k__BackingField = -1;
  if (bVar2) {
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->AuthChanged;
    if (pSVar1 != (System_Action_o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
      return;
    }
  }
  return;
}


// Anticheat.ModeratorManager$$OnFriendListUpdate
// il2cpp: void Anticheat_ModeratorManager__OnFriendListUpdate (Anticheat_ModeratorManager_o* __this, System_Collections_Generic_List_FriendInfo__o* friendList, const MethodInfo* method);
// 0x180547020

void
Anticheat_ModeratorManager__OnFriendListUpdate(Anticheat_ModeratorManager_o* __this, System_Collections_Generic_List_FriendInfo__o* friendList, MethodInfo* method)

{
  return;
}


// Anticheat.ModeratorManager$$OnCreatedRoom
// il2cpp: void Anticheat_ModeratorManager__OnCreatedRoom (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x180547020

void
Anticheat_ModeratorManager__OnCreatedRoom(Anticheat_ModeratorManager_o* __this, MethodInfo* method)

{
  return;
}


// Anticheat.ModeratorManager$$OnCreateRoomFailed
// il2cpp: void Anticheat_ModeratorManager__OnCreateRoomFailed (Anticheat_ModeratorManager_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x180547020

void
Anticheat_ModeratorManager__OnCreateRoomFailed(Anticheat_ModeratorManager_o* __this, int16_t returnCode, System_String_o* message, MethodInfo* method)

{
  return;
}


// Anticheat.ModeratorManager$$OnJoinRoomFailed
// il2cpp: void Anticheat_ModeratorManager__OnJoinRoomFailed (Anticheat_ModeratorManager_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x180547020

void
Anticheat_ModeratorManager__OnJoinRoomFailed(Anticheat_ModeratorManager_o* __this, int16_t returnCode, System_String_o* message, MethodInfo* method)

{
  return;
}


// Anticheat.ModeratorManager$$OnJoinRandomFailed
// il2cpp: void Anticheat_ModeratorManager__OnJoinRandomFailed (Anticheat_ModeratorManager_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x180547020

void
Anticheat_ModeratorManager__OnJoinRandomFailed(Anticheat_ModeratorManager_o* __this, int16_t returnCode, System_String_o* message, MethodInfo* method)

{
  return;
}


// Anticheat.ModeratorManager$$TickTimeouts
// il2cpp: void Anticheat_ModeratorManager__TickTimeouts (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x1823702a0
// eh: try 0x182370470..0x1823706d9 -> pad 0x183320de0 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182370514: mov rdx, qword ptr [rip + 0x1d4d845]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_float_Dispose
// asm:   0x18237051b: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182370520: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182370525: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x18237052a: test rcx, rcx
// asm:   0x18237052d: jne 0x1823706b9
// asm:   0x182370533: mov rdi, qword ptr [rsp + 0xe0]
// asm:   0x18237053b: mov rsi, qword ptr [rsp + 0xf0]
// asm:   0x182370589: nop dword ptr [rax]
// asm:   0x182370674: mov rdx, qword ptr [rip + 0x1d2729d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x18237067b: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182370680: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182370685: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x18237068a: test rcx, rcx
// asm:   0x18237068d: jne 0x1823706d9
// asm:   0x1823706b9: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1823706d9: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183320de0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320de5: push rbp
// asm:   0x183320de6: sub rsp, 0x20
// asm:   0x183320dea: mov rbp, rdx
// asm:   0x183320ded: mov rax, qword ptr [rbp + 0x88]
// asm:   0x183320df4: mov rcx, qword ptr [rax]
// asm:   0x183320df7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183320dfb: movabs rax, 0
// asm:   0x183320e05: add rsp, 0x20
// asm:   0x183320e09: pop rbp
// asm:   0x183320e0a: ret 
// asm:   0x183324460: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324465: push rbp
// asm:   0x183324466: sub rsp, 0x20
// asm:   0x18332446a: mov rbp, rdx
// asm:   0x18332446d: mov rax, qword ptr [rbp + 0x90]
// asm:   0x183324474: mov rcx, qword ptr [rax]
// asm:   0x183324477: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18332447b: movabs rax, 0
// asm:   0x183324485: add rsp, 0x20
// asm:   0x183324489: pop rbp
// asm:   0x18332448a: ret 

void Anticheat_ModeratorManager__TickTimeouts(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Il2CppObject *key;
  undefined8 uVar3;
  float fVar4;
  bool bVar5;
  int32_t iVar6;
  System_Collections_Generic_List_string__o *__this_00;
  float fVar7;
  float fVar8;
  Il2CppObject *local_res20;
  undefined1 local_b8 [16];
  Il2CppObject *local_a8;
  Il2CppObject *pIStack_a0;
  int32_t local_98;
  undefined4 uStack_94;
  undefined1 local_90 [8];
  uint64_t uStack_88;
  Il2CppObject *local_80;
  undefined1 local_78 [24];
  Il2CppObject *pIStack_60;
  undefined8 local_58;
  
  if (Il2CppMethodInitialized_184347a9c == '\0') {
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
    Il2CppMethodInitialized_184347a9c = '\x01';
  }
  local_78._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78._8_8_ = 0;
  local_78._16_8_ = (Il2CppObject *)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  local_90 = (undefined1  [8])0x0;
  uStack_88 = 0;
  local_80 = (Il2CppObject *)0x0;
  local_res20 = (Il2CppObject *)0x0;
  pSVar1 = (__this->fields)._pendingTimestamps;
  if (pSVar1 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    iVar6 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                       (MethodInfo_13CDEB0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Count);
    if (iVar6 != 0) {
      fVar7 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
      pSVar1 = (__this->fields)._pendingTimestamps;
      if (pSVar1 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_1823706df;
      __this_00 = (System_Collections_Generic_List_string__o *)0x0;
      System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_b8,
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                 (MethodInfo_13C1150 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_float_GetEnumerator);
      local_78._0_8_ = local_b8._0_8_;
      local_78._8_8_ = local_b8._8_8_;
      local_78._16_8_ = local_a8;
      pIStack_60 = pIStack_a0;
      local_58._0_4_ = local_98;
      local_58._4_4_ = uStack_94;
      local_b8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_b8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78;
      while( true ) {
        bVar5 = System_Collections_Generic_Dictionary_Enumerator_object__float___MoveNext
                          ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_78,
                           (MethodInfo_1585480 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_float_MoveNext);
        uVar3 = local_78._16_8_;
        if (!bVar5) break;
        pSVar1 = (__this->fields)._pendingTimeouts;
        if (pSVar1 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar4 = pIStack_60._0_4_;
        fVar8 = System_Collections_Generic_Dictionary_object__float___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                           (Il2CppObject *)local_78._16_8_,
                           (MethodInfo_1488BA0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
        if (fVar8 <= fVar7 - fVar4) {
          if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
                       (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
            if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
              ThrowNullReferenceException();
            }
          }
          il2cpp_runtime_helper_180012890(__this_00,uVar3,MethodInfo_System_Collections_Generic_List_string_Add);
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_object__float___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78,
                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_float_Dispose);
      if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_b8,
                   (System_Collections_Generic_List_T__o *)__this_00,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
        local_90 = (undefined1  [8])local_b8._0_8_;
        uStack_88 = local_b8._8_8_;
        local_80 = local_a8;
        local_b8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_b8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_90;
        while( true ) {
          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_90,
                             (MethodInfo_153A2A0 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
          key = local_80;
          if (!bVar5) break;
          pSVar1 = (__this->fields)._pendingTimestamps;
          if (pSVar1 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___Remove
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,local_80,
                     (MethodInfo_145AA00 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_float_Remove);
          pSVar1 = (__this->fields)._pendingTimeouts;
          if (pSVar1 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___Remove
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,key,
                     (MethodInfo_145AA00 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_float_Remove);
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._pendingCallbacks;
          if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___Remove
                    (pSVar2,key,
                     (MethodInfo_1470BF0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Action_Dictionary_byte_object_Remove
                    );
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._pendingTimeoutCallbacks;
          if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (pSVar2,key,&local_res20,
                     (MethodInfo_14769C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Action_TryGetValue);
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._pendingTimeoutCallbacks;
          if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___Remove
                    (pSVar2,key,
                     (MethodInfo_1470BF0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Action_Remove);
          if (local_res20 != (Il2CppObject *)0x0) {
            (*local_res20[1].monitor)(local_res20[4].klass,local_res20[2].monitor);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_90,
                   MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      }
    }
    return;
  }
label_1823706df:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$TrackRequest
// il2cpp: System_String_o* Anticheat_ModeratorManager__TrackRequest (float timeoutSec, System_Action_Dictionary_byte__object___o* onResponse, System_Action_o* onTimeout, const MethodInfo* method);
// 0x1823706f0

System_String_o *
Anticheat_ModeratorManager__TrackRequest
          (float timeoutSec,System_Action_Dictionary_byte__object___o *onResponse,System_Action_o *onTimeout,
          MethodInfo *method)

{
  Anticheat_ModeratorManager_o *pAVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  System_Guid_o *pSVar4;
  System_String_o *key;
  float value;
  System_Guid_Fields local_38;
  System_Guid_o local_28 [2];
  
  if (Il2CppMethodInitialized_184347a9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Action_Dictionary_byte_object_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9d = '\x01';
  }
  local_38._a = 0;
  local_38._b = 0;
  local_38._c = 0;
  local_38._d = '\0';
  local_38._e = '\0';
  local_38._f = '\0';
  local_38._g = '\0';
  local_38._h = '\0';
  local_38._i = '\0';
  local_38._j = '\0';
  local_38._k = '\0';
  pSVar4 = System_Guid__NewGuid(local_28,(MethodInfo *)0x0);
  local_38._a = (pSVar4->fields)._a;
  local_38._b = (pSVar4->fields)._b;
  local_38._c = (pSVar4->fields)._c;
  local_38._d = (pSVar4->fields)._d;
  local_38._e = (pSVar4->fields)._e;
  local_38._f = (pSVar4->fields)._f;
  local_38._g = (pSVar4->fields)._g;
  local_38._h = (pSVar4->fields)._h;
  local_38._i = (pSVar4->fields)._i;
  local_38._j = (pSVar4->fields)._j;
  local_38._k = (pSVar4->fields)._k;
  key = System_Guid__ToString((System_Guid_o *)&local_38,(MethodInfo *)0x0);
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pAVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->_instance;
  if ((pAVar1 != (Anticheat_ModeratorManager_o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pAVar1->fields)._pendingCallbacks,
     pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar2,(Il2CppObject *)key,(Il2CppObject *)onResponse,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Action_Dictionary_byte_object_set_Item)
    ;
    pAVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->_instance;
    if (pAVar1 != (Anticheat_ModeratorManager_o *)0x0) {
      pSVar3 = (pAVar1->fields)._pendingTimestamps;
      value = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
      if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        System_Collections_Generic_Dictionary_object__float___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,(Il2CppObject *)key,value,
                   (MethodInfo_1488DA0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
        pAVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->_instance;
        if ((pAVar1 != (Anticheat_ModeratorManager_o *)0x0) &&
           (pSVar3 = (pAVar1->fields)._pendingTimeouts,
           pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0)) {
          System_Collections_Generic_Dictionary_object__float___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,(Il2CppObject *)key,
                     timeoutSec,
                     (MethodInfo_1488DA0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
          if (onTimeout != (System_Action_o *)0x0) {
            if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
            }
            pAVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->_instance;
            if ((pAVar1 == (Anticheat_ModeratorManager_o *)0x0) ||
               (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (pAVar1->fields)._pendingTimeoutCallbacks,
               pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_1823708a4;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar2,(Il2CppObject *)key,(Il2CppObject *)onTimeout,
                       (MethodInfo_147A7F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Action_set_Item);
          }
          return key;
        }
      }
    }
  }
label_1823708a4:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$RaiseModEvent
// il2cpp: void Anticheat_ModeratorManager__RaiseModEvent (uint8_t code, System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x18236dfe0

void Anticheat_ModeratorManager__RaiseModEvent
               (uint8_t code,System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  Photon_Realtime_RaiseEventOptions_o *__this;
  System_Int32_array *value;
  Photon_Realtime_Player_o *pPVar1;
  
  if (Il2CppMethodInitialized_184347a9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Realtime_RaiseEventOptions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ExitGames_Client_Photon_SendOptions);
    Il2CppMethodInitialized_184347a9e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Photon_Realtime_RaiseEventOptions);
  Photon_Realtime_RaiseEventOptions___ctor(__this,(MethodInfo *)0x0);
  value = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar1 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if ((pPVar1 != (Photon_Realtime_Player_o *)0x0) && (value != (System_Int32_array *)0x0)) {
    if ((int)value->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    value->m_Items[0] = (pPVar1->fields).actorNumber;
    if (__this != (Photon_Realtime_RaiseEventOptions_o *)0x0) {
      (__this->fields).TargetActors = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields).TargetActors,value);
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
// 0x18236c6e0

void Anticheat_ModeratorManager__InvokeStatus
               (System_String_o *text,System_Action_string__o *localStatus,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,text,(pSVar1->fields).method);
  }
  if (localStatus != (System_Action_string__o *)0x0) {
    (*(code *)(localStatus->fields).invoke_impl)
              ((localStatus->fields).method_code,text,(localStatus->fields).method);
  }
  return;
}


// Anticheat.ModeratorManager$$GetResponseEntries
// il2cpp: System_Collections_Generic_Dictionary_byte__object__array* Anticheat_ModeratorManager__GetResponseEntries (System_Collections_Generic_Dictionary_byte__object__o* data, uint8_t entriesKey, const MethodInfo* method);
// 0x18236be60
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18236bf49: nop dword ptr [rax]
// asm:   0x18236bfbf: mov rdx, qword ptr [rip + 0x1d1c312]  ; TypeInfo_System_Collections_Generic_Dictionary_byte_object
// asm:   0x18236c021: mov rax, rsi

System_Collections_Generic_Dictionary_byte__object__array *
Anticheat_ModeratorManager__GetResponseEntries
          (System_Collections_Generic_Dictionary_byte__object__o *data,uint8_t entriesKey,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *obj;
  bool bVar2;
  Il2CppObject *pIVar3;
  System_Collections_Generic_Dictionary_byte__object__array *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppClass *pIVar6;
  uint uVar7;
  
  if (Il2CppMethodInitialized_184347aa0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_byte_object__array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_184347aa0 = '\x01';
  }
  if (data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
label_18236c03d:
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                    (data,entriesKey,
                     (MethodInfo_13E2E80 *)
                     MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
  if (bVar2) {
    pIVar3 = System_Collections_Generic_Dictionary_byte__object___get_Item
                       (data,entriesKey,
                        (MethodInfo_13F4180 *)
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
      uVar7 = 0;
      do {
        if (*(int *)&pIVar3[1].monitor <= (int)uVar7) {
          return pSVar4;
        }
        if (*(uint *)&pIVar3[1].monitor <= uVar7) {
label_18236c053:
          ThrowIndexOutOfRangeException();
        }
        if (pSVar4 == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) goto label_18236c03d;
        obj = (&pIVar3[2].klass)[(int)uVar7];
        if (obj == (Il2CppClass *)0x0) {
          pIVar6 = (Il2CppClass *)0x0;
        }
        else {
          pIVar6 = (obj->_1).image;
          bVar1 = (TypeInfo_System_Collections_Generic_Dictionary_byte_object->_2).typeHierarchyDepth;
          if (((bVar1 <= (pIVar6->_2).typeHierarchyDepth) &&
              ((pIVar6->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
               (Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object)) &&
             (pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((pSVar4->obj).klass)->_1).element_class),
             pIVar5 == (Il2CppObject *)0x0)) {
            pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
          }
          pIVar6 = (obj->_1).image;
          bVar1 = (TypeInfo_System_Collections_Generic_Dictionary_byte_object->_2).typeHierarchyDepth;
          if (((pIVar6->_2).typeHierarchyDepth < bVar1) ||
             ((pIVar6->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          pIVar6 = (Il2CppClass *)0x0;
          if (bVar2) {
            pIVar6 = obj;
          }
        }
        if ((uint)pSVar4->max_length <= uVar7) goto label_18236c053;
        pSVar4->m_Items[(int)uVar7] = (System_Collections_Generic_Dictionary_byte__object__o *)pIVar6;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar7,pIVar6);
        uVar7 = uVar7 + 1;
      } while( true );
    }
  }
  return (System_Collections_Generic_Dictionary_byte__object__array *)0x0;
}


// Anticheat.ModeratorManager$$ReadInt
// il2cpp: int32_t Anticheat_ModeratorManager__ReadInt (System_Collections_Generic_Dictionary_byte__object__o* data, uint8_t key, int32_t defaultValue, const MethodInfo* method);
// 0x18236e100
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18236e2a3: jmp 0x18236e2b5

int32_t Anticheat_ModeratorManager__ReadInt
                  (System_Collections_Generic_Dictionary_byte__object__o *data,uint8_t key,
                  int32_t defaultValue,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_String_o *obj;
  System_String_o *pSVar3;
  byte *pbVar4;
  short *psVar5;
  int32_t *piVar6;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184347aa1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    Il2CppMethodInitialized_184347aa1 = '\x01';
  }
  local_res8[0] = 0;
  if ((((data == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) ||
       (bVar1 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                          (data,key,(MethodInfo_13E2E80 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey),
       !bVar1)) ||
      (pIVar2 = System_Collections_Generic_Dictionary_byte__object___get_Item
                          (data,key,(MethodInfo_13F4180 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item),
      pIVar2 == (Il2CppObject *)0x0)) ||
     (obj = (System_String_o *)
            System_Collections_Generic_Dictionary_byte__object___get_Item
                      (data,key,(MethodInfo_13F4180 *)
                                MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item),
     obj == (System_String_o *)0x0)) {
    return defaultValue;
  }
  pSVar3 = (System_String_o *)0x0;
  if ((Il2CppClass *)obj->klass == g_data_184354e08) {
    pSVar3 = obj;
  }
  if (pSVar3 == (System_String_o *)0x0) {
    pSVar3 = (System_String_o *)0x0;
    if ((Il2CppClass *)obj->klass == g_data_184354e28) {
      pSVar3 = obj;
    }
    if (pSVar3 == (System_String_o *)0x0) {
      pSVar3 = (System_String_o *)0x0;
      if ((Il2CppClass *)obj->klass == g_data_184354df8) {
        pSVar3 = obj;
      }
      if (pSVar3 != (System_String_o *)0x0) {
        if ((((Il2CppClass *)obj->klass)->_1).element_class == (g_data_184354df8->_1).element_class) {
          psVar5 = il2cpp_object_unbox((Il2CppObject *)obj);
          return (int)*psVar5;
        }
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pSVar3 = (System_String_o *)0x0;
      if ((Il2CppClass *)obj->klass == g_data_184354dd8) {
        pSVar3 = obj;
      }
      if (pSVar3 == (System_String_o *)0x0) {
        pSVar3 = (System_String_o *)0x0;
        if ((Il2CppClass *)obj->klass == g_data_184354e50) {
          pSVar3 = obj;
        }
        if (pSVar3 == (System_String_o *)0x0) {
          return defaultValue;
        }
        bVar1 = System_Int32__TryParse(pSVar3,local_res8,(MethodInfo *)0x0);
        if (!bVar1) {
          return defaultValue;
        }
        return local_res8[0];
      }
      if ((((Il2CppClass *)obj->klass)->_1).element_class == (g_data_184354dd8->_1).element_class) {
        pbVar4 = il2cpp_object_unbox((Il2CppObject *)obj);
        return (int32_t)*pbVar4;
      }
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    if ((((Il2CppClass *)obj->klass)->_1).element_class != (g_data_184354e28->_1).element_class) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
  }
  else if ((((Il2CppClass *)obj->klass)->_1).element_class != (g_data_184354e08->_1).element_class) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  piVar6 = il2cpp_object_unbox((Il2CppObject *)obj);
  return *piVar6;
}


// Anticheat.ModeratorManager$$ParsePlayerEntry
// il2cpp: Anticheat_PlayerEntry_o* Anticheat_ModeratorManager__ParsePlayerEntry (System_Collections_Generic_Dictionary_byte__object__o* entry, const MethodInfo* method);
// 0x18236d3b0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18236d457: jmp 0x18236d46a
// asm:   0x18236d4c4: jmp 0x18236d4d7
// asm:   0x18236d528: jmp 0x18236d53b

Anticheat_PlayerEntry_o *
Anticheat_ModeratorManager__ParsePlayerEntry
          (System_Collections_Generic_Dictionary_byte__object__o *entry,MethodInfo *method)

{
  bool bVar1;
  Anticheat_PlayerEntry_o *__this;
  System_String_o *pSVar2;
  Il2CppObject *obj;
  int32_t *piVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184347aa2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_PlayerEntry);
    Il2CppMethodInitialized_184347aa2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_PlayerEntry);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (entry != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                      (entry,'\0',
                       (MethodInfo_13E2E80 *)
                       MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
    if (bVar1) {
      pSVar2 = (System_String_o *)
               System_Collections_Generic_Dictionary_byte__object___get_Item
                         (entry,'\0',
                          (MethodInfo_13F4180 *)
                          MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
      pSVar4 = (System_String_o *)0x0;
      if (pSVar2 != (System_String_o *)0x0) {
        if (pSVar2->klass == g_data_184354e50) {
          pSVar4 = pSVar2;
        }
        if (pSVar4 == (System_String_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar2,g_data_184354e50);
        }
      }
    }
    else {
      pSVar4 = g_data_184354e50->static_fields->Empty;
    }
    if (__this != (Anticheat_PlayerEntry_o *)0x0) {
      (__this->fields).SessionId = pSVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields).SessionId,pSVar4);
      bVar1 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                        (entry,'\x01',
                         (MethodInfo_13E2E80 *)
                         MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
      if (bVar1) {
        pSVar2 = (System_String_o *)
                 System_Collections_Generic_Dictionary_byte__object___get_Item
                           (entry,'\x01',
                            (MethodInfo_13F4180 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
        pSVar4 = (System_String_o *)0x0;
        if (pSVar2 != (System_String_o *)0x0) {
          if (pSVar2->klass == g_data_184354e50) {
            pSVar4 = pSVar2;
          }
          if (pSVar4 == (System_String_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar2,g_data_184354e50);
          }
        }
      }
      else {
        pSVar4 = g_data_184354e50->static_fields->Empty;
      }
      (__this->fields).IPAddress = pSVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields).IPAddress,pSVar4);
      bVar1 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                        (entry,'\x02',
                         (MethodInfo_13E2E80 *)
                         MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
      if (bVar1) {
        pSVar2 = (System_String_o *)
                 System_Collections_Generic_Dictionary_byte__object___get_Item
                           (entry,'\x02',
                            (MethodInfo_13F4180 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
        pSVar4 = (System_String_o *)0x0;
        if (pSVar2 != (System_String_o *)0x0) {
          if (pSVar2->klass == g_data_184354e50) {
            pSVar4 = pSVar2;
          }
          if (pSVar4 == (System_String_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar2,g_data_184354e50);
          }
        }
      }
      else {
        pSVar4 = g_data_184354e50->static_fields->Empty;
      }
      (__this->fields).Username = pSVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Username,pSVar4);
      bVar1 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                        (entry,'\x03',
                         (MethodInfo_13E2E80 *)
                         MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
      if (!bVar1) {
        (__this->fields).ActorNumber = 0;
        return __this;
      }
      obj = System_Collections_Generic_Dictionary_byte__object___get_Item
                      (entry,'\x03',
                       (MethodInfo_13F4180 *)
                       MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
      if (obj != (Il2CppObject *)0x0) {
        if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354e08);
        }
        piVar3 = il2cpp_object_unbox(obj);
        (__this->fields).ActorNumber = *piVar3;
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$RequestPlayerList
// il2cpp: void Anticheat_ModeratorManager__RequestPlayerList (System_Action_string__o* localStatus, const MethodInfo* method);
// 0x18236ed30

void Anticheat_ModeratorManager__RequestPlayerList(System_Action_string__o *localStatus,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  Anticheat_ModeratorManager___c__DisplayClass85_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  System_Action_o *__this_00;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_byte__object__o *__this_01;
  
  if (Il2CppMethodInitialized_184347aa3 == '\0') {
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
    Il2CppMethodInitialized_184347aa3 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager_c__DisplayClass85_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Anticheat_ModeratorManager___c__DisplayClass85_0_o *)0x0) {
    (object->fields).localStatus = localStatus;
    Il2CppCodeGenWriteBarrier(&(object->fields).localStatus,localStatus);
    pSVar1 = (object->fields).localStatus;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar3 = "Sending request...";
    if (Il2CppMethodInitialized_184347a9f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_184347a9f = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
    if (pSVar2 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
    }
    if (pSVar1 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
    }
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Dictionary_byte_object);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass85_0_RequestPlayerList_b__0,
               (MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass85_0_RequestPlayerList_b__1,
               (MethodInfo *)0x0);
    pSVar3 = Anticheat_ModeratorManager__TrackRequest
                       (5.0,(System_Action_Dictionary_byte__object___o *)__this,__this_00,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    System_Collections_Generic_Dictionary_byte__object____ctor
              (__this_01,
               (MethodInfo_13F2020 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    if (__this_01 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\0',(Il2CppObject *)pSVar3,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      Anticheat_ModeratorManager__RaiseModEvent(0xb6,__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$PopulatePlayerList
// il2cpp: void Anticheat_ModeratorManager__PopulatePlayerList (System_Collections_Generic_Dictionary_byte__object__o* data, const MethodInfo* method);
// 0x18236de20

void Anticheat_ModeratorManager__PopulatePlayerList
               (System_Collections_Generic_Dictionary_byte__object__o *data,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__PlayerEntry__o *__this;
  System_Collections_Generic_Dictionary_byte__object__o *entry;
  System_Action_o *pSVar1;
  System_Collections_Generic_Dictionary_byte__object__array *pSVar2;
  Anticheat_PlayerEntry_o *value;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184347aa4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347aa4 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  if (Il2CppMethodInitialized_18434736b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_18434736b = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  __this = TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
  if (__this != (System_Collections_Generic_Dictionary_int__PlayerEntry__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_Clear);
    pSVar2 = Anticheat_ModeratorManager__GetResponseEntries(data,'\x01',(MethodInfo *)0x0);
    if (pSVar2 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
      for (uVar3 = 0; (int)uVar3 < (int)pSVar2->max_length; uVar3 = uVar3 + 1) {
        if ((uint)pSVar2->max_length <= uVar3) {
          ThrowIndexOutOfRangeException();
        }
        entry = pSVar2->m_Items[(int)uVar3];
        if (entry != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
          if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
          }
          value = Anticheat_ModeratorManager__ParsePlayerEntry(entry,(MethodInfo *)0x0);
          if (value == (Anticheat_PlayerEntry_o *)0x0) goto label_18236dfcb;
          if (0 < (value->fields).ActorNumber) {
            if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
            }
            __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_helper_182254f90(0);
            if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_18236dfcb;
            System_Collections_Generic_Dictionary_int__object___set_Item
                      (__this_00,(value->fields).ActorNumber,(Il2CppObject *)value,
                       (MethodInfo_1423510 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_set_Item);
          }
        }
      }
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->PlayerListChanged;
    if (pSVar1 != (System_Action_o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
    }
    return;
  }
label_18236dfcb:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$HandlePlayerListNotification
// il2cpp: void Anticheat_ModeratorManager__HandlePlayerListNotification (ExitGames_Client_Photon_EventData_o* photonEvent, const MethodInfo* method);
// 0x18236c330
// eh: try 0x18236c441..0x18236c637 -> pad 0x183317c60 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18236c4a1: mov rdx, qword ptr [rip + 0x1d5f328]  ; MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_Dispose
// asm:   0x18236c4a8: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18236c4ad: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18236c4b2: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18236c4b7: test rcx, rcx
// asm:   0x18236c4ba: jne 0x18236c637
// asm:   0x18236c4c0: xor edi, edi
// asm:   0x18236c4c2: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x18236c637: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317c60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317c65: push rbp
// asm:   0x183317c66: sub rsp, 0x20
// asm:   0x183317c6a: mov rbp, rdx
// asm:   0x183317c6d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317c71: mov rcx, qword ptr [rax]
// asm:   0x183317c74: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183317c78: movabs rax, 0
// asm:   0x183317c82: add rsp, 0x20
// asm:   0x183317c86: pop rbp
// asm:   0x183317c87: ret 

void Anticheat_ModeratorManager__HandlePlayerListNotification
               (ExitGames_Client_Photon_EventData_o *photonEvent,MethodInfo *method)

{
  ExitGames_Client_Photon_ParameterDictionary_o *__this;
  System_Collections_Generic_Dictionary_int__PlayerEntry__o *__this_00;
  System_Action_o *pSVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar3;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o *pEVar4;
  System_Collections_Generic_Dictionary_byte__object__array *pSVar5;
  Anticheat_PlayerEntry_o *value;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  uint uVar6;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_K__V__Fields local_40;
  undefined8 local_30;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_K__V__Fields *local_28;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o local_20;
  
  if (Il2CppMethodInitialized_184347aa5 == '\0') {
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
    Il2CppMethodInitialized_184347aa5 = '\x01';
  }
  local_40._index = 0;
  local_40._4_4_ = 0;
  local_40._dict = (ExitGames_Client_Photon_NonAllocDictionary_K__V__o *)0x0;
  pSVar3 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
  System_Collections_Generic_Dictionary_byte__object____ctor
            (pSVar3,(MethodInfo_13F2020 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
  if ((photonEvent != (ExitGames_Client_Photon_EventData_o *)0x0) &&
     (__this = (photonEvent->fields).Parameters,
     __this != (ExitGames_Client_Photon_ParameterDictionary_o *)0x0)) {
    pEVar4 = ExitGames_Client_Photon_ParameterDictionary__GetEnumerator(&local_20,__this,(MethodInfo *)0x0);
    local_40._index = (pEVar4->fields)._index;
    local_40._4_4_ = *(undefined4 *)&(pEVar4->fields).field_0x4;
    local_40._dict = (pEVar4->fields)._dict;
    uVar6 = 0;
    local_30 = 0;
    local_28 = &local_40;
    while( true ) {
      bVar2 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator_int__object___MoveNext
                        ((ExitGames_Client_Photon_NonAllocDictionary_PairIterator_K__V__o *)&local_40,
                         (MethodInfo_B47810 *)
                         MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_MoveNext
                        );
      if (!bVar2) break;
      ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___get_Current
                ((System_Collections_Generic_KeyValuePair_K__V__o *)&local_20,
                 (ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o *)&local_40,
                 (MethodInfo_B47C20 *)
                 MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_get_Current);
      if (pSVar3 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_byte__object___set_Item
                (pSVar3,(uint8_t)local_20.fields._index,(Il2CppObject *)local_20.fields._dict,
                 (MethodInfo_13F4530 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_set_Item);
    }
    ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_40,
               MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_Dispose);
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    if (Il2CppMethodInitialized_18434736b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_18434736b = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    __this_00 = TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
    if (__this_00 != (System_Collections_Generic_Dictionary_int__PlayerEntry__o *)0x0) {
      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_Clear)
      ;
      pSVar5 = Anticheat_ModeratorManager__GetResponseEntries(pSVar3,'\0',(MethodInfo *)0x0);
      if (pSVar5 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
        for (; (int)uVar6 < (int)pSVar5->max_length; uVar6 = uVar6 + 1) {
          if ((uint)pSVar5->max_length <= uVar6) {
            ThrowIndexOutOfRangeException();
          }
          pSVar3 = pSVar5->m_Items[(int)uVar6];
          if (pSVar3 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
            if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
            }
            value = Anticheat_ModeratorManager__ParsePlayerEntry(pSVar3,(MethodInfo *)0x0);
            if (value == (Anticheat_PlayerEntry_o *)0x0) goto label_18236c62b;
            if (0 < (value->fields).ActorNumber) {
              if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
              }
              __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_helper_182254f90(0);
              if (__this_01 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)
              goto label_18236c62b;
              System_Collections_Generic_Dictionary_int__object___set_Item
                        (__this_01,(value->fields).ActorNumber,(Il2CppObject *)value,
                         (MethodInfo_1423510 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_set_Item);
            }
          }
        }
      }
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      pSVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->PlayerListChanged;
      if (pSVar1 != (System_Action_o *)0x0) {
        (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
      }
      return;
    }
  }
label_18236c62b:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$HandlePlayerJoinNotification
// il2cpp: void Anticheat_ModeratorManager__HandlePlayerJoinNotification (ExitGames_Client_Photon_EventData_o* photonEvent, const MethodInfo* method);
// 0x18236c060
// eh: try 0x18236c160..0x18236c323 -> pad 0x183317c60 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18236c15e: nop 
// asm:   0x18236c1c0: mov rdx, qword ptr [rip + 0x1d5f609]  ; MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_Dispose
// asm:   0x18236c1c7: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18236c1cc: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18236c1d1: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18236c1d6: test rcx, rcx
// asm:   0x18236c1d9: jne 0x18236c323
// asm:   0x18236c1df: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x18236c323: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317c60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317c65: push rbp
// asm:   0x183317c66: sub rsp, 0x20
// asm:   0x183317c6a: mov rbp, rdx
// asm:   0x183317c6d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317c71: mov rcx, qword ptr [rax]
// asm:   0x183317c74: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183317c78: movabs rax, 0
// asm:   0x183317c82: add rsp, 0x20
// asm:   0x183317c86: pop rbp
// asm:   0x183317c87: ret 

void Anticheat_ModeratorManager__HandlePlayerJoinNotification
               (ExitGames_Client_Photon_EventData_o *photonEvent,MethodInfo *method)

{
  ExitGames_Client_Photon_ParameterDictionary_o *__this;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Action_o *pSVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_byte__object__o *pSVar3;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o *pEVar4;
  System_Collections_Generic_Dictionary_byte__object__array *pSVar5;
  Anticheat_PlayerEntry_o *value;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_K__V__Fields local_40;
  undefined8 local_30;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_K__V__Fields *local_28;
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o local_20;
  
  if (Il2CppMethodInitialized_184347aa6 == '\0') {
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
    Il2CppMethodInitialized_184347aa6 = '\x01';
  }
  local_40._index = 0;
  local_40._4_4_ = 0;
  local_40._dict = (ExitGames_Client_Photon_NonAllocDictionary_K__V__o *)0x0;
  pSVar3 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
  System_Collections_Generic_Dictionary_byte__object____ctor
            (pSVar3,(MethodInfo_13F2020 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
  if ((photonEvent == (ExitGames_Client_Photon_EventData_o *)0x0) ||
     (__this = (photonEvent->fields).Parameters,
     __this == (ExitGames_Client_Photon_ParameterDictionary_o *)0x0)) goto label_18236c317;
  pEVar4 = ExitGames_Client_Photon_ParameterDictionary__GetEnumerator(&local_20,__this,(MethodInfo *)0x0);
  local_40._index = (pEVar4->fields)._index;
  local_40._4_4_ = *(undefined4 *)&(pEVar4->fields).field_0x4;
  local_40._dict = (pEVar4->fields)._dict;
  local_30 = 0;
  local_28 = &local_40;
  while( true ) {
    bVar2 = ExitGames_Client_Photon_NonAllocDictionary_PairIterator_int__object___MoveNext
                      ((ExitGames_Client_Photon_NonAllocDictionary_PairIterator_K__V__o *)&local_40,
                       (MethodInfo_B47810 *)
                       MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_MoveNext
                      );
    if (!bVar2) break;
    ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___get_Current
              ((System_Collections_Generic_KeyValuePair_K__V__o *)&local_20,
               (ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object__o *)&local_40,
               (MethodInfo_B47C20 *)
               MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_get_Current);
    if (pSVar3 == (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_byte__object___set_Item
              (pSVar3,(uint8_t)local_20.fields._index,(Il2CppObject *)local_20.fields._dict,
               (MethodInfo_13F4530 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_set_Item);
  }
  ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte__object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_40,
             MethodInfo_ExitGames_Client_Photon_NonAllocDictionary_PairIterator_byte_object_Dispose);
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar5 = Anticheat_ModeratorManager__GetResponseEntries(pSVar3,'\0',(MethodInfo *)0x0);
  if ((pSVar5 != (System_Collections_Generic_Dictionary_byte__object__array *)0x0) &&
     (pSVar5->max_length != 0)) {
    if ((int)pSVar5->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pSVar3 = pSVar5->m_Items[0];
    if (pSVar3 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      value = Anticheat_ModeratorManager__ParsePlayerEntry(pSVar3,(MethodInfo *)0x0);
      if (value == (Anticheat_PlayerEntry_o *)0x0) {
label_18236c317:
        ThrowNullReferenceException();
      }
      if (0 < (value->fields).ActorNumber) {
        if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
        }
        if (Il2CppMethodInitialized_18434736b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
          Il2CppMethodInitialized_18434736b = '\x01';
        }
        if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
        }
        __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                    TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField;
        if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_18236c317;
        System_Collections_Generic_Dictionary_int__object___set_Item
                  (__this_00,(value->fields).ActorNumber,(Il2CppObject *)value,
                   (MethodInfo_1423510 *)
                   MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_set_Item);
      }
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      pSVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->PlayerListChanged;
      if (pSVar1 != (System_Action_o *)0x0) {
        (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
      }
    }
  }
  return;
}


// Anticheat.ModeratorManager$$KickPlayer
// il2cpp: void Anticheat_ModeratorManager__KickPlayer (int32_t actorNumber, System_Action_string__o* localStatus, const MethodInfo* method);
// 0x18236c770

void Anticheat_ModeratorManager__KickPlayer
               (int32_t actorNumber,System_Action_string__o *localStatus,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  Anticheat_ModeratorManager___c__DisplayClass89_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  System_Action_o *__this_00;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_byte__object__o *__this_01;
  Il2CppObject *pIVar4;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  int32_t local_28 [4];
  
  if (Il2CppMethodInitialized_184347aa7 == '\0') {
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
    Il2CppMethodInitialized_184347aa7 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager_c__DisplayClass89_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Anticheat_ModeratorManager___c__DisplayClass89_0_o *)0x0) {
    (object->fields).localStatus = localStatus;
    Il2CppCodeGenWriteBarrier(&(object->fields).localStatus,localStatus);
    pSVar1 = (object->fields).localStatus;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar3 = "Sending request...";
    if (Il2CppMethodInitialized_184347a9f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_184347a9f = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
    if (pSVar2 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
    }
    if (pSVar1 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
    }
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Dictionary_byte_object);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass89_0_KickPlayer_b__0,
               (MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass89_0_KickPlayer_b__1,
               (MethodInfo *)0x0);
    pSVar3 = Anticheat_ModeratorManager__TrackRequest
                       (5.0,(System_Action_Dictionary_byte__object___o *)__this,__this_00,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    System_Collections_Generic_Dictionary_byte__object____ctor
              (__this_01,
               (MethodInfo_13F2020 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    if (__this_01 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\0',(Il2CppObject *)pSVar3,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      local_res10[0] = 1;
      pIVar4 = il2cpp_value_box(g_data_184354e08,local_res10);
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x01',pIVar4,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      local_res20[0] = 0;
      pIVar4 = il2cpp_value_box(g_data_184354e08,local_res20);
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x02',pIVar4,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      local_28[0] = actorNumber;
      pIVar4 = il2cpp_value_box(g_data_184354e08,local_28);
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x03',pIVar4,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$RoomBan
// il2cpp: void Anticheat_ModeratorManager__RoomBan (int32_t actorNumber, bool ipBan, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x18236f970

void Anticheat_ModeratorManager__RoomBan
               (int32_t actorNumber,bool ipBan,System_Action_string__o *localStatus,System_String_o *reason,
               MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  Anticheat_ModeratorManager___c__DisplayClass90_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  System_Action_o *__this_00;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_byte__object__o *__this_01;
  Il2CppObject *pIVar4;
  uint local_res18 [2];
  undefined4 local_28;
  int32_t local_24 [3];
  
  if (Il2CppMethodInitialized_184347aa8 == '\0') {
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
    Il2CppMethodInitialized_184347aa8 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager_c__DisplayClass90_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Anticheat_ModeratorManager___c__DisplayClass90_0_o *)0x0) {
    (object->fields).localStatus = localStatus;
    Il2CppCodeGenWriteBarrier(&(object->fields).localStatus,localStatus);
    pSVar1 = (object->fields).localStatus;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar3 = "Sending request...";
    if (Il2CppMethodInitialized_184347a9f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_184347a9f = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
    if (pSVar2 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
    }
    if (pSVar1 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
    }
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Dictionary_byte_object);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass90_0_RoomBan_b__0,
               (MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass90_0_RoomBan_b__1,
               (MethodInfo *)0x0);
    pSVar3 = Anticheat_ModeratorManager__TrackRequest
                       (5.0,(System_Action_Dictionary_byte__object___o *)__this,__this_00,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    System_Collections_Generic_Dictionary_byte__object____ctor
              (__this_01,
               (MethodInfo_13F2020 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    if (__this_01 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\0',(Il2CppObject *)pSVar3,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      local_res18[0] = ipBan | 2;
      pIVar4 = il2cpp_value_box(g_data_184354e08,local_res18);
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x01',pIVar4,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      local_28 = 0;
      pIVar4 = il2cpp_value_box(g_data_184354e08,&local_28);
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x02',pIVar4,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      local_24[0] = actorNumber;
      pIVar4 = il2cpp_value_box(g_data_184354e08,local_24);
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x03',pIVar4,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      if (reason == (System_String_o *)0x0) {
        reason = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x04',(Il2CppObject *)reason,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$RoomBanPlayerEntry
// il2cpp: void Anticheat_ModeratorManager__RoomBanPlayerEntry (Anticheat_PlayerEntry_o* player, bool ipBan, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x18236f520
// asm: 17 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18236f666: mov rcx, qword ptr [rip + 0x1d6011b]  ; "Player has no session ID to ban."
// asm:   0x18236f66d: xor r8d, r8d
// asm:   0x18236f670: mov rdx, rbx
// asm:   0x18236f89c: xor r8d, r8d
// asm:   0x18236f89f: mov rdx, rbx
// asm:   0x18236f8a2: mov cl, 0xb4
// asm:   0x18236f8a4: call 0x18236dfe0  ; Anticheat_ModeratorManager__RaiseModEvent()
// asm:   0x18236f8a9: jmp 0x18236f678
// asm:   0x18236f8c0: mov rcx, qword ptr [rip + 0x1d5fde1]  ; "Player has no IP address to ban."
// asm:   0x18236f8c7: xor r8d, r8d
// asm:   0x18236f8ca: mov rdx, rbx
// asm:   0x18236f8cd: jmp 0x18236f673
// asm:   0x18236f951: mov r8, qword ptr [rbx + 0x28]
// asm:   0x18236f955: mov rdx, rdi
// asm:   0x18236f958: mov rcx, qword ptr [rbx + 0x40]
// asm:   0x18236f95c: call qword ptr [rbx + 0x18]
// asm:   0x18236f95f: jmp 0x18236f678

void Anticheat_ModeratorManager__RoomBanPlayerEntry
               (Anticheat_PlayerEntry_o *player,bool ipBan,System_Action_string__o *localStatus,
               System_String_o *reason,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  bool bVar2;
  byte bVar3;
  Anticheat_ModeratorManager___c__DisplayClass91_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  System_Action_o *__this_00;
  System_String_o *pSVar4;
  System_Collections_Generic_Dictionary_byte__object__o *__this_01;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  System_Action_string__o *pSVar7;
  int iVar8;
  uint local_res18 [4];
  int local_38 [4];
  
  if (Il2CppMethodInitialized_184347aa9 == '\0') {
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
    Il2CppMethodInitialized_184347aa9 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager_c__DisplayClass91_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Anticheat_ModeratorManager___c__DisplayClass91_0_o *)0x0) {
    (object->fields).localStatus = localStatus;
    Il2CppCodeGenWriteBarrier(&(object->fields).localStatus,localStatus);
    if (player == (Anticheat_PlayerEntry_o *)0x0) {
      pSVar7 = (object->fields).localStatus;
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      pSVar6 = "Invalid player entry.";
      if (Il2CppMethodInitialized_184347a9f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
        Il2CppMethodInitialized_184347a9f = '\x01';
      }
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      pSVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
      if (pSVar1 != (System_Action_string__o *)0x0) {
        (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar6,(pSVar1->fields).method);
      }
      if (pSVar7 == (System_Action_string__o *)0x0) {
        return;
      }
      (*(code *)(pSVar7->fields).invoke_impl)((pSVar7->fields).method_code,pSVar6,(pSVar7->fields).method);
      return;
    }
    if (ipBan) {
      bVar2 = System_String__IsNullOrEmpty((player->fields).IPAddress,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar7 = (object->fields).localStatus;
        pSVar6 = "Player has no IP address to ban.";
        if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
          pSVar6 = "Player has no IP address to ban.";
        }
        goto label_18236f673;
      }
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      bVar3 = il2cpp_runtime_helper_182254fe0(0);
      pSVar6 = (player->fields).IPAddress;
      iVar8 = (uint)(bVar3 ^ 1) * 2 + 2;
    }
    else {
      bVar2 = System_String__IsNullOrEmpty((player->fields).SessionId,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar7 = (object->fields).localStatus;
        pSVar6 = "Player has no session ID to ban.";
        if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
          pSVar6 = "Player has no session ID to ban.";
        }
label_18236f673:
        Anticheat_ModeratorManager__InvokeStatus(pSVar6,pSVar7,(MethodInfo *)0x0);
        return;
      }
      pSVar6 = (player->fields).SessionId;
      iVar8 = 1;
    }
    pSVar7 = (object->fields).localStatus;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar4 = "Sending request...";
    if (Il2CppMethodInitialized_184347a9f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_184347a9f = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
    if (pSVar1 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar4,(pSVar1->fields).method);
    }
    if (pSVar7 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar7->fields).invoke_impl)((pSVar7->fields).method_code,pSVar4,(pSVar7->fields).method);
    }
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Dictionary_byte_object);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass91_0_RoomBanPlayerEntry_b__0,
               (MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass91_0_RoomBanPlayerEntry_b__1,
               (MethodInfo *)0x0);
    pSVar4 = Anticheat_ModeratorManager__TrackRequest
                       (5.0,(System_Action_Dictionary_byte__object___o *)__this,__this_00,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    System_Collections_Generic_Dictionary_byte__object____ctor
              (__this_01,
               (MethodInfo_13F2020 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    if (__this_01 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\0',(Il2CppObject *)pSVar4,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      local_res18[0] = ipBan | 2;
      pIVar5 = il2cpp_value_box(g_data_184354e08,local_res18);
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x01',pIVar5,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      local_38[0] = iVar8;
      pIVar5 = il2cpp_value_box(g_data_184354e08,local_38);
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x02',pIVar5,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x03',(Il2CppObject *)pSVar6,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      if (reason == (System_String_o *)0x0) {
        reason = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x04',(Il2CppObject *)reason,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$RoomUnban
// il2cpp: void Anticheat_ModeratorManager__RoomUnban (Anticheat_RoomBanEntry_o* banEntry, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x18236fc70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18236feb2: jmp 0x18236fee2

void Anticheat_ModeratorManager__RoomUnban
               (Anticheat_RoomBanEntry_o *banEntry,System_Action_string__o *localStatus,
               System_String_o *reason,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  Anticheat_ModeratorManager___c__DisplayClass92_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  System_Action_o *__this_00;
  System_String_o *pSVar3;
  System_String_o *value;
  System_Collections_Generic_Dictionary_byte__object__o *__this_01;
  Il2CppObject *pIVar4;
  undefined4 uVar5;
  int32_t local_res10 [2];
  int local_28;
  undefined4 local_24 [3];
  
  if (Il2CppMethodInitialized_184347aaa == '\0') {
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
    Il2CppMethodInitialized_184347aaa = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager_c__DisplayClass92_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Anticheat_ModeratorManager___c__DisplayClass92_0_o *)0x0) goto label_18236fff1;
  (object->fields).localStatus = localStatus;
  Il2CppCodeGenWriteBarrier(&(object->fields).localStatus,localStatus);
  pSVar1 = (object->fields).localStatus;
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar3 = "Sending request...";
  if (Il2CppMethodInitialized_184347a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347a9f = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
  if (pSVar2 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
  }
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
  }
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Dictionary_byte_object);
  System_Action_object____ctor
            (__this,(Il2CppObject *)object,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass92_0_RoomUnban_b__0,
             (MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)object,
             (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass92_0_RoomUnban_b__1,
             (MethodInfo *)0x0);
  pSVar3 = Anticheat_ModeratorManager__TrackRequest
                     (5.0,(System_Action_Dictionary_byte__object___o *)__this,__this_00,(MethodInfo *)0x0);
  if (banEntry == (Anticheat_RoomBanEntry_o *)0x0) goto label_18236fff1;
  if ((banEntry->fields).IsIPBan == false) {
    if (0 < (banEntry->fields).ActorNumber) goto label_18236feba;
    value = (banEntry->fields).SessionId;
    uVar5 = 1;
  }
  else if ((banEntry->fields).ActorNumber < 1) {
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    if (Il2CppMethodInitialized_184347369 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_184347369 = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    value = (banEntry->fields).IPAddress;
    uVar5 = 2;
    if (TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField == false) {
      uVar5 = 4;
    }
  }
  else {
label_18236feba:
    local_res10[0] = (banEntry->fields).ActorNumber;
    value = (System_String_o *)il2cpp_value_box(g_data_184354e08,local_res10);
    uVar5 = 0;
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
  System_Collections_Generic_Dictionary_byte__object____ctor
            (__this_01,(MethodInfo_13F2020 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor
            );
  if (__this_01 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_01,'\0',(Il2CppObject *)pSVar3,
               (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    local_28 = ((banEntry->fields).IsIPBan != false) + 4;
    pIVar4 = il2cpp_value_box(g_data_184354e08,&local_28);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_01,'\x01',pIVar4,
               (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    local_24[0] = uVar5;
    pIVar4 = il2cpp_value_box(g_data_184354e08,local_24);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_01,'\x02',pIVar4,
               (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_01,'\x03',(Il2CppObject *)value,
               (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    if (reason == (System_String_o *)0x0) {
      reason = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    System_Collections_Generic_Dictionary_byte__object___Add
              (__this_01,'\x04',(Il2CppObject *)reason,
               (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_01,(MethodInfo *)0x0);
    return;
  }
label_18236fff1:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$RequestRoomBanList
// il2cpp: void Anticheat_ModeratorManager__RequestRoomBanList (System_Action_string__o* localStatus, const MethodInfo* method);
// 0x18236f4c0

void Anticheat_ModeratorManager__RequestRoomBanList(System_Action_string__o *localStatus,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347aab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347aab = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RequestRoomBanList_236f230(0,0x32,localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager$$RequestRoomBanList
// il2cpp: void Anticheat_ModeratorManager__RequestRoomBanList (int32_t startIndex, int32_t amount, System_Action_string__o* localStatus, const MethodInfo* method);
// 0x18236f230

void Anticheat_ModeratorManager__RequestRoomBanList_236f230
               (int32_t startIndex,int32_t amount,System_Action_string__o *localStatus,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  Anticheat_ModeratorManager___c__DisplayClass94_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  System_Action_o *__this_00;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_byte__object__o *__this_01;
  Il2CppObject *pIVar4;
  int32_t local_res18 [4];
  int32_t local_28 [4];
  
  if (Il2CppMethodInitialized_184347aac == '\0') {
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
    Il2CppMethodInitialized_184347aac = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager_c__DisplayClass94_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Anticheat_ModeratorManager___c__DisplayClass94_0_o *)0x0) {
    (object->fields).localStatus = localStatus;
    Il2CppCodeGenWriteBarrier(&(object->fields).localStatus,localStatus);
    pSVar1 = (object->fields).localStatus;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar3 = "Sending request...";
    if (Il2CppMethodInitialized_184347a9f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_184347a9f = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
    if (pSVar2 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
    }
    if (pSVar1 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
    }
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Dictionary_byte_object);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass94_0_RequestRoomBanList_b__0,
               (MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass94_0_RequestRoomBanList_b__1,
               (MethodInfo *)0x0);
    pSVar3 = Anticheat_ModeratorManager__TrackRequest
                       (5.0,(System_Action_Dictionary_byte__object___o *)__this,__this_00,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    System_Collections_Generic_Dictionary_byte__object____ctor
              (__this_01,
               (MethodInfo_13F2020 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    if (__this_01 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\0',(Il2CppObject *)pSVar3,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      local_res18[0] = 0;
      if (-1 < startIndex) {
        local_res18[0] = startIndex;
      }
      pIVar4 = il2cpp_value_box(g_data_184354e08,local_res18);
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x01',pIVar4,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      local_28[0] = 1;
      if (0 < amount) {
        local_28[0] = amount;
      }
      pIVar4 = il2cpp_value_box(g_data_184354e08,local_28);
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x02',pIVar4,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      Anticheat_ModeratorManager__RaiseModEvent(0xb5,__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$ParseRoomBanEntries
// il2cpp: Anticheat_RoomBanEntry_array* Anticheat_ModeratorManager__ParseRoomBanEntries (System_Collections_Generic_Dictionary_byte__object__array* entries, const MethodInfo* method);
// 0x18236d9c0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18236dafa: jmp 0x18236db0d
// asm:   0x18236db51: jmp 0x18236db64
// asm:   0x18236dba9: jmp 0x18236dbbc
// asm:   0x18236dcac: jmp 0x18236dcbf

Anticheat_RoomBanEntry_array *
Anticheat_ModeratorManager__ParseRoomBanEntries
          (System_Collections_Generic_Dictionary_byte__object__array *entries,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_byte__object__o *__this;
  bool bVar1;
  System_Collections_Generic_List_RoomBanEntry__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Il2CppObject *pIVar5;
  int *piVar6;
  System_String_o *pSVar7;
  Anticheat_RoomBanEntry_o *__this_01;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar8;
  Anticheat_RoomBanEntry_array *pAVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184347aad == '\0') {
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
    Il2CppMethodInitialized_184347aad = '\x01';
  }
  if (entries == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
    pAVar9 = (Anticheat_RoomBanEntry_array *)
             System_Linq_Enumerable__Empty___Il2CppFullySharedGenericType_
                       ((MethodInfo_660C30 *)MethodInfo_System_Array_Empty_RoomBanEntry);
    return pAVar9;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_RoomBanEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_RoomBanEntry_ctor);
  for (uVar12 = 0; (int)uVar12 < (int)entries->max_length; uVar12 = uVar12 + 1) {
    if ((uint)entries->max_length <= uVar12) {
      ThrowIndexOutOfRangeException();
    }
    __this = entries->m_Items[(int)uVar12];
    if (__this != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                        (__this,'\0',
                         (MethodInfo_13E2E80 *)
                         MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
      if (bVar1) {
        pSVar2 = (System_String_o *)
                 System_Collections_Generic_Dictionary_byte__object___get_Item
                           (__this,'\0',
                            (MethodInfo_13F4180 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
        value = (System_String_o *)0x0;
        if (pSVar2 != (System_String_o *)0x0) {
          if ((Il2CppClass *)pSVar2->klass == g_data_184354e50) {
            value = pSVar2;
          }
          if (value == (System_String_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar2);
          }
        }
      }
      else {
        value = *(System_String_o **)g_data_184354e50->static_fields;
      }
      bVar1 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                        (__this,'\x01',
                         (MethodInfo_13E2E80 *)
                         MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
      if (bVar1) {
        pSVar3 = (System_String_o *)
                 System_Collections_Generic_Dictionary_byte__object___get_Item
                           (__this,'\x01',
                            (MethodInfo_13F4180 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
        pSVar2 = (System_String_o *)0x0;
        if (pSVar3 != (System_String_o *)0x0) {
          if ((Il2CppClass *)pSVar3->klass == g_data_184354e50) {
            pSVar2 = pSVar3;
          }
          if (pSVar2 == (System_String_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar3);
          }
        }
      }
      else {
        pSVar2 = *(System_String_o **)g_data_184354e50->static_fields;
      }
      bVar1 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                        (__this,'\x02',
                         (MethodInfo_13E2E80 *)
                         MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
      if (bVar1) {
        pSVar4 = (System_String_o *)
                 System_Collections_Generic_Dictionary_byte__object___get_Item
                           (__this,'\x02',
                            (MethodInfo_13F4180 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
        pSVar3 = (System_String_o *)0x0;
        if (pSVar4 != (System_String_o *)0x0) {
          if ((Il2CppClass *)pSVar4->klass == g_data_184354e50) {
            pSVar3 = pSVar4;
          }
          if (pSVar3 == (System_String_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar4);
          }
        }
      }
      else {
        pSVar3 = *(System_String_o **)g_data_184354e50->static_fields;
      }
      bVar1 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                        (__this,'\x03',
                         (MethodInfo_13E2E80 *)
                         MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
      if (bVar1) {
        pIVar5 = System_Collections_Generic_Dictionary_byte__object___get_Item
                           (__this,'\x03',
                            (MethodInfo_13F4180 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
        if (pIVar5 == (Il2CppObject *)0x0) goto label_18236de17;
        if ((pIVar5->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar5,g_data_184354e08);
        }
        piVar6 = il2cpp_object_unbox(pIVar5);
        iVar11 = *piVar6;
      }
      else {
        iVar11 = 0;
      }
      bVar1 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                        (__this,'\x04',
                         (MethodInfo_13E2E80 *)
                         MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
      if (bVar1) {
        pIVar5 = System_Collections_Generic_Dictionary_byte__object___get_Item
                           (__this,'\x04',
                            (MethodInfo_13F4180 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
        if (pIVar5 == (Il2CppObject *)0x0) goto label_18236de17;
        if ((pIVar5->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar5,g_data_184354e08);
        }
        piVar6 = il2cpp_object_unbox(pIVar5);
        iVar10 = *piVar6;
      }
      else {
        iVar10 = 0;
      }
      bVar1 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                        (__this,'\x06',
                         (MethodInfo_13E2E80 *)
                         MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
      if (bVar1) {
        pSVar7 = (System_String_o *)
                 System_Collections_Generic_Dictionary_byte__object___get_Item
                           (__this,'\x06',
                            (MethodInfo_13F4180 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
        pSVar4 = (System_String_o *)0x0;
        if (pSVar7 != (System_String_o *)0x0) {
          if ((Il2CppClass *)pSVar7->klass == g_data_184354e50) {
            pSVar4 = pSVar7;
          }
          if (pSVar4 == (System_String_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar7);
          }
        }
      }
      else {
        pSVar4 = *(System_String_o **)g_data_184354e50->static_fields;
      }
      pSVar7 = pSVar2;
      if (iVar10 != 1) {
        pSVar7 = value;
      }
      bVar1 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_RoomBanEntry);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,(MethodInfo *)0x0);
      if (__this_01 == (Anticheat_RoomBanEntry_o *)0x0) goto label_18236de17;
      (__this_01->fields).SessionId = value;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).SessionId,value);
      (__this_01->fields).IPAddress = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).IPAddress,pSVar2);
      (__this_01->fields).Username = pSVar3;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).Username,pSVar3);
      (__this_01->fields).IsIPBan = iVar10 == 1;
      (__this_01->fields).ActorNumber = iVar11;
      (__this_01->fields).Reason = pSVar4;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).Reason,pSVar4);
      (__this_01->fields).CanUnban = !bVar1 || 0 < iVar11;
      if (__this_00 == (System_Collections_Generic_List_RoomBanEntry__o *)0x0) goto label_18236de17;
      il2cpp_runtime_helper_180012890(__this_00,__this_01,MethodInfo_System_Collections_Generic_List_RoomBanEntry_Add);
    }
  }
  if (__this_00 != (System_Collections_Generic_List_RoomBanEntry__o *)0x0) {
    pUVar8 = System_Collections_Generic_List_object___ToArray
                       ((System_Collections_Generic_List_T__o *)__this_00,
                        (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_RoomBanEntry_ToArray);
    return (Anticheat_RoomBanEntry_array *)pUVar8;
  }
label_18236de17:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$RegionBan
// il2cpp: void Anticheat_ModeratorManager__RegionBan (int32_t actorNumber, bool ipBan, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x18236e750

void Anticheat_ModeratorManager__RegionBan
               (int32_t actorNumber,bool ipBan,System_Action_string__o *localStatus,System_String_o *reason,
               MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  Anticheat_ModeratorManager___c__DisplayClass96_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  System_Action_o *__this_00;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_byte__object__o *__this_01;
  Il2CppObject *pIVar4;
  uint local_res18 [2];
  undefined4 local_28;
  int32_t local_24 [3];
  
  if (Il2CppMethodInitialized_184347aae == '\0') {
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
    Il2CppMethodInitialized_184347aae = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager_c__DisplayClass96_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Anticheat_ModeratorManager___c__DisplayClass96_0_o *)0x0) {
    (object->fields).localStatus = localStatus;
    Il2CppCodeGenWriteBarrier(&(object->fields).localStatus,localStatus);
    pSVar1 = (object->fields).localStatus;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar3 = "Sending request...";
    if (Il2CppMethodInitialized_184347a9f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_184347a9f = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
    if (pSVar2 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
    }
    if (pSVar1 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
    }
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Dictionary_byte_object);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass96_0_RegionBan_b__0,
               (MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass96_0_RegionBan_b__1,
               (MethodInfo *)0x0);
    pSVar3 = Anticheat_ModeratorManager__TrackRequest
                       (10.0,(System_Action_Dictionary_byte__object___o *)__this,__this_00,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    System_Collections_Generic_Dictionary_byte__object____ctor
              (__this_01,
               (MethodInfo_13F2020 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    if (__this_01 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\0',(Il2CppObject *)pSVar3,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      local_res18[0] = ipBan | 2;
      pIVar4 = il2cpp_value_box(g_data_184354e08,local_res18);
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x01',pIVar4,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      local_28 = 0;
      pIVar4 = il2cpp_value_box(g_data_184354e08,&local_28);
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x02',pIVar4,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      local_24[0] = actorNumber;
      pIVar4 = il2cpp_value_box(g_data_184354e08,local_24);
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x03',pIVar4,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      if (reason == (System_String_o *)0x0) {
        reason = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x04',(Il2CppObject *)reason,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      Anticheat_ModeratorManager__RaiseModEvent(0xb7,__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$RegionBanPlayerEntry
// il2cpp: void Anticheat_ModeratorManager__RegionBanPlayerEntry (Anticheat_PlayerEntry_o* player, bool ipBan, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x18236e300
// asm: 17 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18236e446: mov rcx, qword ptr [rip + 0x1d6133b]  ; "Player has no session ID to ban."
// asm:   0x18236e44d: xor r8d, r8d
// asm:   0x18236e450: mov rdx, rbx
// asm:   0x18236e67c: xor r8d, r8d
// asm:   0x18236e67f: mov rdx, rbx
// asm:   0x18236e682: mov cl, 0xb7
// asm:   0x18236e684: call 0x18236dfe0  ; Anticheat_ModeratorManager__RaiseModEvent()
// asm:   0x18236e689: jmp 0x18236e458
// asm:   0x18236e6a0: mov rcx, qword ptr [rip + 0x1d61001]  ; "Player has no IP address to ban."
// asm:   0x18236e6a7: xor r8d, r8d
// asm:   0x18236e6aa: mov rdx, rbx
// asm:   0x18236e6ad: jmp 0x18236e453
// asm:   0x18236e731: mov r8, qword ptr [rbx + 0x28]
// asm:   0x18236e735: mov rdx, rdi
// asm:   0x18236e738: mov rcx, qword ptr [rbx + 0x40]
// asm:   0x18236e73c: call qword ptr [rbx + 0x18]
// asm:   0x18236e73f: jmp 0x18236e458

void Anticheat_ModeratorManager__RegionBanPlayerEntry
               (Anticheat_PlayerEntry_o *player,bool ipBan,System_Action_string__o *localStatus,
               System_String_o *reason,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  bool bVar2;
  byte bVar3;
  Anticheat_ModeratorManager___c__DisplayClass97_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  System_Action_o *__this_00;
  System_String_o *pSVar4;
  System_Collections_Generic_Dictionary_byte__object__o *__this_01;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  System_Action_string__o *pSVar7;
  int iVar8;
  uint local_res18 [4];
  int local_38 [4];
  
  if (Il2CppMethodInitialized_184347aaf == '\0') {
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
    Il2CppMethodInitialized_184347aaf = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager_c__DisplayClass97_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Anticheat_ModeratorManager___c__DisplayClass97_0_o *)0x0) {
    (object->fields).localStatus = localStatus;
    Il2CppCodeGenWriteBarrier(&(object->fields).localStatus,localStatus);
    if (player == (Anticheat_PlayerEntry_o *)0x0) {
      pSVar7 = (object->fields).localStatus;
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      pSVar6 = "Invalid player entry.";
      if (Il2CppMethodInitialized_184347a9f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
        Il2CppMethodInitialized_184347a9f = '\x01';
      }
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      pSVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
      if (pSVar1 != (System_Action_string__o *)0x0) {
        (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar6,(pSVar1->fields).method);
      }
      if (pSVar7 == (System_Action_string__o *)0x0) {
        return;
      }
      (*(code *)(pSVar7->fields).invoke_impl)((pSVar7->fields).method_code,pSVar6,(pSVar7->fields).method);
      return;
    }
    if (ipBan) {
      bVar2 = System_String__IsNullOrEmpty((player->fields).IPAddress,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar7 = (object->fields).localStatus;
        pSVar6 = "Player has no IP address to ban.";
        if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
          pSVar6 = "Player has no IP address to ban.";
        }
        goto label_18236e453;
      }
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      bVar3 = il2cpp_runtime_helper_182254fe0(0);
      pSVar6 = (player->fields).IPAddress;
      iVar8 = (uint)(bVar3 ^ 1) * 2 + 2;
    }
    else {
      bVar2 = System_String__IsNullOrEmpty((player->fields).SessionId,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar7 = (object->fields).localStatus;
        pSVar6 = "Player has no session ID to ban.";
        if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
          pSVar6 = "Player has no session ID to ban.";
        }
label_18236e453:
        Anticheat_ModeratorManager__InvokeStatus(pSVar6,pSVar7,(MethodInfo *)0x0);
        return;
      }
      pSVar6 = (player->fields).SessionId;
      iVar8 = 1;
    }
    pSVar7 = (object->fields).localStatus;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar4 = "Sending request...";
    if (Il2CppMethodInitialized_184347a9f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_184347a9f = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar1 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
    if (pSVar1 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar4,(pSVar1->fields).method);
    }
    if (pSVar7 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar7->fields).invoke_impl)((pSVar7->fields).method_code,pSVar4,(pSVar7->fields).method);
    }
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Dictionary_byte_object);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass97_0_RegionBanPlayerEntry_b__0,
               (MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass97_0_RegionBanPlayerEntry_b__1,
               (MethodInfo *)0x0);
    pSVar4 = Anticheat_ModeratorManager__TrackRequest
                       (10.0,(System_Action_Dictionary_byte__object___o *)__this,__this_00,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    System_Collections_Generic_Dictionary_byte__object____ctor
              (__this_01,
               (MethodInfo_13F2020 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    if (__this_01 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\0',(Il2CppObject *)pSVar4,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      local_res18[0] = ipBan | 2;
      pIVar5 = il2cpp_value_box(g_data_184354e08,local_res18);
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x01',pIVar5,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      local_38[0] = iVar8;
      pIVar5 = il2cpp_value_box(g_data_184354e08,local_38);
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x02',pIVar5,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x03',(Il2CppObject *)pSVar6,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      if (reason == (System_String_o *)0x0) {
        reason = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x04',(Il2CppObject *)reason,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
      }
      Anticheat_ModeratorManager__RaiseModEvent(0xb7,__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$RegionUnban
// il2cpp: void Anticheat_ModeratorManager__RegionUnban (Anticheat_RegionBanEntry_o* banEntry, System_Action_string__o* localStatus, System_String_o* reason, const MethodInfo* method);
// 0x18236ea50

void Anticheat_ModeratorManager__RegionUnban
               (Anticheat_RegionBanEntry_o *banEntry,System_Action_string__o *localStatus,
               System_String_o *reason,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  Anticheat_ModeratorManager___c__DisplayClass98_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  System_Action_o *__this_00;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_byte__object__o *__this_01;
  Il2CppObject *pIVar4;
  int local_res10 [2];
  undefined4 local_28 [4];
  
  if (Il2CppMethodInitialized_184347ab0 == '\0') {
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
    Il2CppMethodInitialized_184347ab0 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager_c__DisplayClass98_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Anticheat_ModeratorManager___c__DisplayClass98_0_o *)0x0) {
    (object->fields).localStatus = localStatus;
    Il2CppCodeGenWriteBarrier(&(object->fields).localStatus,localStatus);
    pSVar1 = (object->fields).localStatus;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar3 = "Sending request...";
    if (Il2CppMethodInitialized_184347a9f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_184347a9f = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
    if (pSVar2 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
    }
    if (pSVar1 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
    }
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Dictionary_byte_object);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass98_0_RegionUnban_b__0,
               (MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass98_0_RegionUnban_b__1,
               (MethodInfo *)0x0);
    pSVar3 = Anticheat_ModeratorManager__TrackRequest
                       (10.0,(System_Action_Dictionary_byte__object___o *)__this,__this_00,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    System_Collections_Generic_Dictionary_byte__object____ctor
              (__this_01,
               (MethodInfo_13F2020 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    if (__this_01 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\0',(Il2CppObject *)pSVar3,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      if (banEntry != (Anticheat_RegionBanEntry_o *)0x0) {
        local_res10[0] = ((banEntry->fields).IsIPBan != false) + 4;
        pIVar4 = il2cpp_value_box(g_data_184354e08,local_res10);
        System_Collections_Generic_Dictionary_byte__object___Add
                  (__this_01,'\x01',pIVar4,
                   (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
        local_28[0] = 3;
        pIVar4 = il2cpp_value_box(g_data_184354e08,local_28);
        System_Collections_Generic_Dictionary_byte__object___Add
                  (__this_01,'\x02',pIVar4,
                   (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
        System_Collections_Generic_Dictionary_byte__object___Add
                  (__this_01,'\x03',(Il2CppObject *)(banEntry->fields).TargetId,
                   (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
        if (reason == (System_String_o *)0x0) {
          reason = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        System_Collections_Generic_Dictionary_byte__object___Add
                  (__this_01,'\x04',(Il2CppObject *)reason,
                   (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
        if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
        }
        Anticheat_ModeratorManager__RaiseModEvent(0xb7,__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$RequestRegionBanList
// il2cpp: void Anticheat_ModeratorManager__RequestRegionBanList (System_Action_string__o* localStatus, const MethodInfo* method);
// 0x18236f1d0

void Anticheat_ModeratorManager__RequestRegionBanList(System_Action_string__o *localStatus,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347ab1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347ab1 = '\x01';
  }
  if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
  }
  Anticheat_ModeratorManager__RequestRegionBanList_236ef40(0,0x32,localStatus,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager$$RequestRegionBanList
// il2cpp: void Anticheat_ModeratorManager__RequestRegionBanList (int32_t startIndex, int32_t amount, System_Action_string__o* localStatus, const MethodInfo* method);
// 0x18236ef40

void Anticheat_ModeratorManager__RequestRegionBanList_236ef40
               (int32_t startIndex,int32_t amount,System_Action_string__o *localStatus,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  Anticheat_ModeratorManager___c__DisplayClass100_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  System_Action_o *__this_00;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_byte__object__o *__this_01;
  Il2CppObject *pIVar4;
  int32_t local_res18 [4];
  int32_t local_28 [4];
  
  if (Il2CppMethodInitialized_184347ab2 == '\0') {
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
    Il2CppMethodInitialized_184347ab2 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager_c__DisplayClass100_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Anticheat_ModeratorManager___c__DisplayClass100_0_o *)0x0) {
    (object->fields).localStatus = localStatus;
    Il2CppCodeGenWriteBarrier(&(object->fields).localStatus,localStatus);
    pSVar1 = (object->fields).localStatus;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar3 = "Sending request...";
    if (Il2CppMethodInitialized_184347a9f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_184347a9f = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
    if (pSVar2 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
    }
    if (pSVar1 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
    }
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Dictionary_byte_object);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass100_0_RequestRegionBanList_b__0,
               (MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass100_0_RequestRegionBanList_b__1,
               (MethodInfo *)0x0);
    pSVar3 = Anticheat_ModeratorManager__TrackRequest
                       (15.0,(System_Action_Dictionary_byte__object___o *)__this,__this_00,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    System_Collections_Generic_Dictionary_byte__object____ctor
              (__this_01,
               (MethodInfo_13F2020 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    if (__this_01 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\0',(Il2CppObject *)pSVar3,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      local_res18[0] = 0;
      if (-1 < startIndex) {
        local_res18[0] = startIndex;
      }
      pIVar4 = il2cpp_value_box(g_data_184354e08,local_res18);
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x01',pIVar4,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      local_28[0] = 1;
      if (0 < amount) {
        local_28[0] = amount;
      }
      pIVar4 = il2cpp_value_box(g_data_184354e08,local_28);
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x02',pIVar4,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      Anticheat_ModeratorManager__RaiseModEvent(0xb8,__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$ParseRegionBanEntries
// il2cpp: Anticheat_RegionBanEntry_array* Anticheat_ModeratorManager__ParseRegionBanEntries (System_Collections_Generic_Dictionary_byte__object__array* entries, const MethodInfo* method);
// 0x18236d5f0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18236d6bd: nop dword ptr [rax]
// asm:   0x18236d72c: jmp 0x18236d73f
// asm:   0x18236d7da: jmp 0x18236d7ed
// asm:   0x18236d831: jmp 0x18236d844
// asm:   0x18236d888: jmp 0x18236d89b

Anticheat_RegionBanEntry_array *
Anticheat_ModeratorManager__ParseRegionBanEntries
          (System_Collections_Generic_Dictionary_byte__object__array *entries,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_byte__object__o *__this;
  bool bVar1;
  System_Collections_Generic_List_RegionBanEntry__o *__this_00;
  System_String_o *pSVar2;
  Il2CppObject *obj;
  int *piVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  Anticheat_RegionBanEntry_o *__this_01;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar7;
  Anticheat_RegionBanEntry_array *pAVar8;
  int iVar9;
  System_String_o *value;
  uint uVar10;
  
  if (Il2CppMethodInitialized_184347ab3 == '\0') {
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
    Il2CppMethodInitialized_184347ab3 = '\x01';
  }
  if (entries == (System_Collections_Generic_Dictionary_byte__object__array *)0x0) {
    pAVar8 = (Anticheat_RegionBanEntry_array *)
             System_Linq_Enumerable__Empty___Il2CppFullySharedGenericType_
                       ((MethodInfo_660C30 *)MethodInfo_System_Array_Empty_RegionBanEntry);
    return pAVar8;
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_RegionBanEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_RegionBanEntry_ctor);
  for (uVar10 = 0; (int)uVar10 < (int)entries->max_length; uVar10 = uVar10 + 1) {
    if ((uint)entries->max_length <= uVar10) {
      ThrowIndexOutOfRangeException();
    }
    __this = entries->m_Items[(int)uVar10];
    if (__this != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                        (__this,'\0',
                         (MethodInfo_13E2E80 *)
                         MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
      if (bVar1) {
        pSVar2 = (System_String_o *)
                 System_Collections_Generic_Dictionary_byte__object___get_Item
                           (__this,'\0',
                            (MethodInfo_13F4180 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
        value = (System_String_o *)0x0;
        if (pSVar2 != (System_String_o *)0x0) {
          if ((Il2CppClass *)pSVar2->klass == g_data_184354e50) {
            value = pSVar2;
          }
          if (value == (System_String_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar2);
          }
        }
      }
      else {
        value = *(System_String_o **)g_data_184354e50->static_fields;
      }
      bVar1 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                        (__this,'\x01',
                         (MethodInfo_13E2E80 *)
                         MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
      if (bVar1) {
        obj = System_Collections_Generic_Dictionary_byte__object___get_Item
                        (__this,'\x01',
                         (MethodInfo_13F4180 *)
                         MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
        if (obj == (Il2CppObject *)0x0) goto label_18236d9b4;
        if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354e08);
        }
        piVar3 = il2cpp_object_unbox(obj);
        iVar9 = *piVar3;
      }
      else {
        iVar9 = 0;
      }
      bVar1 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                        (__this,'\x02',
                         (MethodInfo_13E2E80 *)
                         MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
      if (bVar1) {
        pSVar4 = (System_String_o *)
                 System_Collections_Generic_Dictionary_byte__object___get_Item
                           (__this,'\x02',
                            (MethodInfo_13F4180 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
        pSVar2 = (System_String_o *)0x0;
        if (pSVar4 != (System_String_o *)0x0) {
          if ((Il2CppClass *)pSVar4->klass == g_data_184354e50) {
            pSVar2 = pSVar4;
          }
          if (pSVar2 == (System_String_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar4);
          }
        }
      }
      else {
        pSVar2 = *(System_String_o **)g_data_184354e50->static_fields;
      }
      bVar1 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                        (__this,'\x05',
                         (MethodInfo_13E2E80 *)
                         MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
      if (bVar1) {
        pSVar5 = (System_String_o *)
                 System_Collections_Generic_Dictionary_byte__object___get_Item
                           (__this,'\x05',
                            (MethodInfo_13F4180 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
        pSVar4 = (System_String_o *)0x0;
        if (pSVar5 != (System_String_o *)0x0) {
          if ((Il2CppClass *)pSVar5->klass == g_data_184354e50) {
            pSVar4 = pSVar5;
          }
          if (pSVar4 == (System_String_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar5);
          }
        }
      }
      else {
        pSVar4 = *(System_String_o **)g_data_184354e50->static_fields;
      }
      bVar1 = System_Collections_Generic_Dictionary_byte__object___ContainsKey
                        (__this,'\x06',
                         (MethodInfo_13E2E80 *)
                         MethodInfo_System_Collections_Generic_Dictionary_byte_object_ContainsKey);
      if (bVar1) {
        pSVar6 = (System_String_o *)
                 System_Collections_Generic_Dictionary_byte__object___get_Item
                           (__this,'\x06',
                            (MethodInfo_13F4180 *)
                            MethodInfo_System_Collections_Generic_Dictionary_byte_object_get_Item);
        pSVar5 = (System_String_o *)0x0;
        if (pSVar6 != (System_String_o *)0x0) {
          if ((Il2CppClass *)pSVar6->klass == g_data_184354e50) {
            pSVar5 = pSVar6;
          }
          if (pSVar5 == (System_String_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar6);
          }
        }
      }
      else {
        pSVar5 = *(System_String_o **)g_data_184354e50->static_fields;
      }
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_RegionBanEntry);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,(MethodInfo *)0x0);
      if (__this_01 == (Anticheat_RegionBanEntry_o *)0x0) goto label_18236d9b4;
      (__this_01->fields).TargetId = value;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).TargetId,value);
      (__this_01->fields).Username = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).Username,pSVar2);
      (__this_01->fields).Reason = pSVar4;
      (__this_01->fields).IsIPBan = iVar9 == 3;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).Reason,pSVar4);
      (__this_01->fields).BannedBy = pSVar5;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).BannedBy,pSVar5);
      if (__this_00 == (System_Collections_Generic_List_RegionBanEntry__o *)0x0) goto label_18236d9b4;
      il2cpp_runtime_helper_180012890(__this_00,__this_01,MethodInfo_System_Collections_Generic_List_RegionBanEntry_Add);
    }
  }
  if (__this_00 != (System_Collections_Generic_List_RegionBanEntry__o *)0x0) {
    pUVar7 = System_Collections_Generic_List_object___ToArray
                       ((System_Collections_Generic_List_T__o *)__this_00,
                        (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_RegionBanEntry_ToArray
                       );
    return (Anticheat_RegionBanEntry_array *)pUVar7;
  }
label_18236d9b4:
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$BatchSessionBan
// il2cpp: void Anticheat_ModeratorManager__BatchSessionBan (System_String_o* targets, const MethodInfo* method);
// 0x18236bb90

void Anticheat_ModeratorManager__BatchSessionBan(System_String_o *targets,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184347ab4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347ab4 = '\x01';
  }
  value = (System_String_o *)0x0;
  if (targets != (System_String_o *)0x0) {
    value = System_String__Trim(targets,(MethodInfo *)0x0);
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    Anticheat_ModeratorManager__SendBatchRoomRemove
              (2,1,value,(System_Action_string__o *)0x0,(MethodInfo *)0x0);
  }
  return;
}


// Anticheat.ModeratorManager$$BatchIPBan
// il2cpp: void Anticheat_ModeratorManager__BatchIPBan (System_String_o* targets, const MethodInfo* method);
// 0x18236b9b0

void Anticheat_ModeratorManager__BatchIPBan(System_String_o *targets,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  int32_t targetBy;
  
  if (Il2CppMethodInitialized_184347ab5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347ab5 = '\x01';
  }
  value = (System_String_o *)0x0;
  if (targets != (System_String_o *)0x0) {
    value = System_String__Trim(targets,(MethodInfo *)0x0);
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    if (Il2CppMethodInitialized_184347369 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_184347369 = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    targetBy = 2;
    if (TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField == false) {
      targetBy = 4;
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    Anticheat_ModeratorManager__SendBatchRoomRemove
              (3,targetBy,value,(System_Action_string__o *)0x0,(MethodInfo *)0x0);
  }
  return;
}


// Anticheat.ModeratorManager$$BatchSessionUnban
// il2cpp: void Anticheat_ModeratorManager__BatchSessionUnban (System_String_o* targets, const MethodInfo* method);
// 0x18236bc10

void Anticheat_ModeratorManager__BatchSessionUnban(System_String_o *targets,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184347ab6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347ab6 = '\x01';
  }
  value = (System_String_o *)0x0;
  if (targets != (System_String_o *)0x0) {
    value = System_String__Trim(targets,(MethodInfo *)0x0);
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    Anticheat_ModeratorManager__SendBatchRoomRemove
              (4,1,value,(System_Action_string__o *)0x0,(MethodInfo *)0x0);
  }
  return;
}


// Anticheat.ModeratorManager$$BatchIPUnban
// il2cpp: void Anticheat_ModeratorManager__BatchIPUnban (System_String_o* targets, const MethodInfo* method);
// 0x18236baa0

void Anticheat_ModeratorManager__BatchIPUnban(System_String_o *targets,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  int32_t targetBy;
  
  if (Il2CppMethodInitialized_184347ab7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347ab7 = '\x01';
  }
  value = (System_String_o *)0x0;
  if (targets != (System_String_o *)0x0) {
    value = System_String__Trim(targets,(MethodInfo *)0x0);
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    if (Il2CppMethodInitialized_184347369 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_184347369 = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    targetBy = 2;
    if (TypeInfo_Anticheat_ModeratorManager->static_fields->_IsAuthenticated_k__BackingField == false) {
      targetBy = 4;
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    Anticheat_ModeratorManager__SendBatchRoomRemove
              (5,targetBy,value,(System_Action_string__o *)0x0,(MethodInfo *)0x0);
  }
  return;
}


// Anticheat.ModeratorManager$$SendBatchRoomRemove
// il2cpp: void Anticheat_ModeratorManager__SendBatchRoomRemove (int32_t removeType, int32_t targetBy, System_String_o* targets, System_Action_string__o* localStatus, const MethodInfo* method);
// 0x182370000

void Anticheat_ModeratorManager__SendBatchRoomRemove
               (int32_t removeType,int32_t targetBy,System_String_o *targets,
               System_Action_string__o *localStatus,MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  System_Action_string__o *pSVar2;
  Anticheat_ModeratorManager___c__DisplayClass106_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  System_Action_o *__this_00;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_byte__object__o *__this_01;
  Il2CppObject *pIVar4;
  int32_t local_res20 [2];
  int32_t local_28 [4];
  
  if (Il2CppMethodInitialized_184347ab8 == '\0') {
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
    Il2CppMethodInitialized_184347ab8 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager_c__DisplayClass106_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Anticheat_ModeratorManager___c__DisplayClass106_0_o *)0x0) {
    (object->fields).localStatus = localStatus;
    Il2CppCodeGenWriteBarrier(&(object->fields).localStatus,localStatus);
    pSVar1 = (object->fields).localStatus;
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar3 = "Sending request...";
    if (Il2CppMethodInitialized_184347a9f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
      Il2CppMethodInitialized_184347a9f = '\x01';
    }
    if ((TypeInfo_Anticheat_ModeratorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ModeratorManager);
    }
    pSVar2 = TypeInfo_Anticheat_ModeratorManager->static_fields->StatusMessage;
    if (pSVar2 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pSVar3,(pSVar2->fields).method);
    }
    if (pSVar1 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pSVar3,(pSVar1->fields).method);
    }
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Dictionary_byte_object);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass106_0_SendBatchRoomRemove_b__0,
               (MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Anticheat_ModeratorManager_c__DisplayClass106_0_SendBatchRoomRemove_b__1,
               (MethodInfo *)0x0);
    pSVar3 = Anticheat_ModeratorManager__TrackRequest
                       (15.0,(System_Action_Dictionary_byte__object___o *)__this,__this_00,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_byte_object);
    System_Collections_Generic_Dictionary_byte__object____ctor
              (__this_01,
               (MethodInfo_13F2020 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_ctor);
    if (__this_01 != (System_Collections_Generic_Dictionary_byte__object__o *)0x0) {
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\0',(Il2CppObject *)pSVar3,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      local_res20[0] = removeType;
      pIVar4 = il2cpp_value_box(g_data_184354e08,local_res20);
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x01',pIVar4,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      local_28[0] = targetBy;
      pIVar4 = il2cpp_value_box(g_data_184354e08,local_28);
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x02',pIVar4,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      System_Collections_Generic_Dictionary_byte__object___Add
                (__this_01,'\x03',(Il2CppObject *)targets,
                 (MethodInfo_13E2CD0 *)MethodInfo_System_Collections_Generic_Dictionary_byte_object_Add);
      Anticheat_ModeratorManager__RaiseModEvent(0xb4,__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.ModeratorManager$$.ctor
// il2cpp: void Anticheat_ModeratorManager___ctor (Anticheat_ModeratorManager_o* __this, const MethodInfo* method);
// 0x182370bf0

void Anticheat_ModeratorManager___ctor(Anticheat_ModeratorManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Action_Dictionary_byte__object____o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *pSVar1;
  System_Collections_Generic_Dictionary_string__Action__o *__this_01;
  
  if (Il2CppMethodInitialized_184347ab9 == '\0') {
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
    Il2CppMethodInitialized_184347ab9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_Action_Dictionary_byte_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Action_Dictionary_byte_object_ctor);
  (__this->fields)._pendingCallbacks = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingCallbacks,__this_00);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  (__this->fields)._pendingTimestamps = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingTimestamps,pSVar1);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  (__this->fields)._pendingTimeouts = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingTimeouts,pSVar1);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Action);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_Action_ctor);
  (__this->fields)._pendingTimeoutCallbacks = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingTimeoutCallbacks,__this_01);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ModeratorManager$$.cctor
// il2cpp: void Anticheat_ModeratorManager___cctor (const MethodInfo* method);
// 0x182370af0

void Anticheat_ModeratorManager___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__PlayerEntry__o *__this;
  System_Collections_Generic_List_PlayerEntry__o *__this_00;
  
  if (Il2CppMethodInitialized_184347aba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_int_PlayerEntry);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_PlayerEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_PlayerEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ModeratorManager);
    Il2CppMethodInitialized_184347aba = '\x01';
  }
  TypeInfo_Anticheat_ModeratorManager->static_fields->_AuthLevel_k__BackingField = -1;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_PlayerEntry);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_PlayerEntry_ctor);
  TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Anticheat_ModeratorManager->static_fields->_ActivePlayers_k__BackingField,__this);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_PlayerEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_PlayerEntry_ctor);
  TypeInfo_Anticheat_ModeratorManager->static_fields->_PastPlayers_k__BackingField = __this_00;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Anticheat_ModeratorManager->static_fields->_PastPlayers_k__BackingField,__this_00);
  return;
}


