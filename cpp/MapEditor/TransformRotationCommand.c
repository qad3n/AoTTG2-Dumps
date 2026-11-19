// Type: MapEditor.TransformRotationCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/TransformRotationCommand.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/TransformRotationCommand.cs
// --------------------------------

// MapEditor.TransformRotationCommand$$.ctor
// il2cpp: void MapEditor_TransformRotationCommand___ctor (MapEditor_TransformRotationCommand_o* __this, System_Collections_Generic_List_MapObject__o* mapObjects, const MethodInfo* method);
// 0x5c911a0
// eh: try 0x5c9136f..0x5c91555 -> pad 0x5c91570 (+15 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c91590..0x5c91595 -> pad 0x5c915b8 cleanup
// eh: try 0x5c915bb..0x5c915c5 -> pad 0x5c915cd catch (...) [compiler noexcept guard]
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9155a: jmp 0x5c91578
// asm:   0x5c9155c: jmp 0x5c91578
// asm:   0x5c9155e: jmp 0x5c91578
// asm:   0x5c91560: jmp 0x5c91578
// asm:   0x5c91562: jmp 0x5c91578
// asm:   0x5c91564: jmp 0x5c91578
// asm:   0x5c91566: jmp 0x5c91578
// asm:   0x5c91568: jmp 0x5c91578
// asm:   0x5c9156a: jmp 0x5c91578
// asm:   0x5c9156c: jmp 0x5c91578
// asm:   0x5c9156e: jmp 0x5c91578
// asm:   0x5c91570: jmp 0x5c91578
// asm:   0x5c91572: jmp 0x5c91578
// asm:   0x5c91574: jmp 0x5c91578
// asm:   0x5c91576: jmp 0x5c91578
// asm:   0x5c91578: mov rbx, rax
// asm:   0x5c9157b: cmp edx, 1
// asm:   0x5c9157e: jne 0x5c915bb
// asm:   0x5c91580: mov rdi, rbx
// asm:   0x5c91583: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c91588: mov rbx, qword ptr [rax]
// asm:   0x5c9158b: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5c91590: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c91595: lea rax, [rip + 0x15fce24]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x5c9159c: mov rsi, qword ptr [rax]
// asm:   0x5c9159f: mov rdi, rsp
// asm:   0x5c915a2: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c915a7: test rbx, rbx
// asm:   0x5c915aa: je 0x5c9151e
// asm:   0x5c915b0: mov rdi, rbx
// asm:   0x5c915b3: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c915b8: mov rbx, rax
// asm:   0x5c915bb: lea rdi, [rsp + 0x18]
// asm:   0x5c915c0: call 0x2fda9b0  ; il2cpp_runtime_helper_02fda9b0()
// asm:   0x5c915c5: mov rdi, rbx
// asm:   0x5c915c8: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c915cd: mov rdi, rax
// asm:   0x5c915d0: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_TransformRotationCommand___ctor
               (MapEditor_TransformRotationCommand_o *__this,
               System_Collections_Generic_List_MapObject__o *mapObjects,MethodInfo *method)

{
  System_Collections_Generic_List_Vector3__o **targetAddress;
  System_Collections_Generic_List_int__o **targetAddress_00;
  int32_t *piVar1;
  int32_t item;
  uint uVar2;
  System_Int32_array *pSVar3;
  UnityEngine_Vector3_array *pUVar4;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *pMVar5;
  Il2CppObject *pIVar6;
  bool bVar7;
  System_Collections_Generic_List_Vector3__o *pSVar8;
  System_Collections_Generic_List_int__o *pSVar9;
  UnityEngine_Transform_o *__this_01;
  Il2CppClass *__this_02;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o euler;
  System_Collections_Generic_List_Enumerator_object__o local_78;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  UnityEngine_Quaternion_o local_48;
  
  if (Il2CppMethodInitialized_075479dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    Il2CppMethodInitialized_075479dc = '\x01';
  }
  local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._current = (Il2CppObject *)0x0;
  local_48.fields = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            (pSVar8,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  (__this->fields)._oldRotations = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._oldRotations);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            (pSVar8,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  targetAddress = &(__this->fields)._newRotations;
  (__this->fields)._newRotations = pSVar8;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (pSVar9,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  targetAddress_00 = &(__this->fields)._ids;
  (__this->fields)._ids = pSVar9;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (mapObjects == (System_Collections_Generic_List_MapObject__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
             (System_Collections_Generic_List_object__o *)mapObjects,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
  local_78.fields._current = local_50;
  local_78.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
  local_78.fields._index = local_60._8_4_;
  local_78.fields._version = local_60._12_4_;
  local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_60._8_8_ = &local_78;
  while( true ) {
    bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_78,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    pIVar6 = local_78.fields._current;
    pMVar5 = MethodInfo_System_Collections_Generic_List_int_Add;
    if (!bVar7) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                (&local_78,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
                );
      return;
    }
    if (local_78.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    __this_02 = local_78.fields._current[2].klass;
    if (__this_02 == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar9 = *targetAddress_00;
    if (pSVar9 == (System_Collections_Generic_List_int__o *)0x0) break;
    item = *(int32_t *)&(__this_02->_1).byval_arg.data;
    piVar1 = &(pSVar9->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar9->fields)._items;
    if (pSVar3 == (System_Int32_array *)0x0) break;
    uVar2 = (pSVar9->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar9->fields)._size = uVar2 + 1;
      pSVar3->m_Items[(int)uVar2] = item;
    }
    else {
      System_Collections_Generic_List_int___AddWithResize
                (pSVar9,item,(MethodInfo_3916AC0 *)pMVar5->klass->rgctx_data[0xe].method);
      __this_02 = pIVar6[2].klass;
      if (__this_02 == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
    }
    pSVar8 = (__this->fields)._oldRotations;
    UVar10 = Map_MapScriptBaseObject__GetRotation((Map_MapScriptBaseObject_o *)__this_02,(MethodInfo *)0x0);
    pMVar5 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar8 == (System_Collections_Generic_List_Vector3__o *)0x0) {
label_05c9152d:
      ThrowNullReferenceException();
    }
    piVar1 = &(pSVar8->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar8->fields)._items;
    if (pUVar4 == (UnityEngine_Vector3_array *)0x0) goto label_05c9152d;
    uVar2 = (pSVar8->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar8->fields)._size = uVar2 + 1;
      pUVar4->m_Items[(int)uVar2].fields.x = UVar10.fields.x;
      pUVar4->m_Items[(int)uVar2].fields.y = UVar10.fields.y;
      pUVar4->m_Items[(int)uVar2].fields.z = UVar10.fields.z;
    }
    else {
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar8,UVar10,(MethodInfo_39FF950 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    __this_00 = pIVar6[1].monitor;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar8 = *targetAddress;
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_48 = UnityEngine_Transform__get_localRotation(__this_01,(MethodInfo *)0x0);
    UVar10 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_48,(MethodInfo *)0x0);
    euler.fields.z = UVar10.fields.z * 57.29578;
    euler.fields.y = UVar10.fields.y * 57.29578;
    euler.fields.x = UVar10.fields.x * 57.29578;
    UVar10 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    pMVar5 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar8 == (System_Collections_Generic_List_Vector3__o *)0x0) {
label_05c91537:
      ThrowNullReferenceException();
    }
    piVar1 = &(pSVar8->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar8->fields)._items;
    if (pUVar4 == (UnityEngine_Vector3_array *)0x0) goto label_05c91537;
    uVar2 = (pSVar8->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar8->fields)._size = uVar2 + 1;
      pUVar4->m_Items[(int)uVar2].fields.x = UVar10.fields.x;
      pUVar4->m_Items[(int)uVar2].fields.y = UVar10.fields.y;
      pUVar4->m_Items[(int)uVar2].fields.z = UVar10.fields.z;
    }
    else {
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar8,UVar10,(MethodInfo_39FF950 *)pMVar5->klass->rgctx_data[0xe].method);
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.TransformRotationCommand$$Execute
// il2cpp: void MapEditor_TransformRotationCommand__Execute (MapEditor_TransformRotationCommand_o* __this, const MethodInfo* method);
// 0x5c915e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9169c: mov rax, qword ptr [r13]

void MapEditor_TransformRotationCommand__Execute
               (MapEditor_TransformRotationCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_Vector3__o *pSVar2;
  Map_MapScriptBaseObject_o *__this_01;
  int32_t iVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_Transform_o *__this_02;
  System_Collections_Generic_List_int__o *pSVar5;
  int32_t index;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_Fields UStack_40;
  
  if (Il2CppMethodInitialized_075479dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_075479dd = '\x01';
  }
  pSVar5 = (__this->fields)._ids;
  if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) {
label_05c917bc:
    ThrowNullReferenceException();
  }
  index = 0;
  do {
    if ((pSVar5->fields)._size <= index) {
      return;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      pSVar5 = (__this->fields)._ids;
      if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c917bc;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    iVar3 = System_Collections_Generic_List_int___get_Item
                      (pSVar5,index,
                       (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pMVar4 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar1,iVar3,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
        pMVar4 == (Map_MapObject_o *)0x0)) ||
       (__this_00 = (pMVar4->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0))
    goto label_05c917bc;
    __this_02 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._newRotations;
    if (pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c917bc;
    UVar6 = System_Collections_Generic_List_Vector3___get_Item
                      (pSVar2,index,
                       (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    UStack_40.x = UVar6.fields.x * 0.017453292;
    UStack_40.y = UVar6.fields.y * 0.017453292;
    UStack_40.z = UVar6.fields.z * 0.017453292;
    value = UnityEngine_Quaternion__Internal_FromEulerRad
                      ((UnityEngine_Vector3_o *)&UStack_40,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_Transform_o *)0x0) goto label_05c917bc;
    UnityEngine_Transform__set_localRotation(__this_02,value,(MethodInfo *)0x0);
    pSVar5 = (__this->fields)._ids;
    if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c917bc;
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    iVar3 = System_Collections_Generic_List_int___get_Item
                      (pSVar5,index,
                       (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pMVar4 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar1,iVar3,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
        pMVar4 == (Map_MapObject_o *)0x0)) ||
       (pSVar2 = (__this->fields)._newRotations, pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0))
    goto label_05c917bc;
    __this_01 = (pMVar4->fields).ScriptObject;
    UVar6 = System_Collections_Generic_List_Vector3___get_Item
                      (pSVar2,index,
                       (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    if (__this_01 == (Map_MapScriptBaseObject_o *)0x0) goto label_05c917bc;
    Map_MapScriptBaseObject__SetRotation(__this_01,UVar6,(MethodInfo *)0x0);
    index = index + 1;
    pSVar5 = (__this->fields)._ids;
    if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c917bc;
  } while( true );
}


// MapEditor.TransformRotationCommand$$Unexecute
// il2cpp: void MapEditor_TransformRotationCommand__Unexecute (MapEditor_TransformRotationCommand_o* __this, const MethodInfo* method);
// 0x5c917d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9188c: mov rax, qword ptr [r13]

void MapEditor_TransformRotationCommand__Unexecute
               (MapEditor_TransformRotationCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_Vector3__o *pSVar2;
  Map_MapScriptBaseObject_o *__this_01;
  int32_t iVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_Transform_o *__this_02;
  System_Collections_Generic_List_int__o *pSVar5;
  int32_t index;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_Fields UStack_40;
  
  if (Il2CppMethodInitialized_075479de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_075479de = '\x01';
  }
  pSVar5 = (__this->fields)._ids;
  if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) {
label_05c919ac:
    ThrowNullReferenceException();
  }
  index = 0;
  do {
    if ((pSVar5->fields)._size <= index) {
      return;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      pSVar5 = (__this->fields)._ids;
      if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c919ac;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    iVar3 = System_Collections_Generic_List_int___get_Item
                      (pSVar5,index,
                       (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pMVar4 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar1,iVar3,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
        pMVar4 == (Map_MapObject_o *)0x0)) ||
       (__this_00 = (pMVar4->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0))
    goto label_05c919ac;
    __this_02 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._oldRotations;
    if (pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c919ac;
    UVar6 = System_Collections_Generic_List_Vector3___get_Item
                      (pSVar2,index,
                       (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    UStack_40.x = UVar6.fields.x * 0.017453292;
    UStack_40.y = UVar6.fields.y * 0.017453292;
    UStack_40.z = UVar6.fields.z * 0.017453292;
    value = UnityEngine_Quaternion__Internal_FromEulerRad
                      ((UnityEngine_Vector3_o *)&UStack_40,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_Transform_o *)0x0) goto label_05c919ac;
    UnityEngine_Transform__set_localRotation(__this_02,value,(MethodInfo *)0x0);
    pSVar5 = (__this->fields)._ids;
    if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c919ac;
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    iVar3 = System_Collections_Generic_List_int___get_Item
                      (pSVar5,index,
                       (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pMVar4 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar1,iVar3,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
        pMVar4 == (Map_MapObject_o *)0x0)) ||
       (pSVar2 = (__this->fields)._oldRotations, pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0))
    goto label_05c919ac;
    __this_01 = (pMVar4->fields).ScriptObject;
    UVar6 = System_Collections_Generic_List_Vector3___get_Item
                      (pSVar2,index,
                       (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    if (__this_01 == (Map_MapScriptBaseObject_o *)0x0) goto label_05c919ac;
    Map_MapScriptBaseObject__SetRotation(__this_01,UVar6,(MethodInfo *)0x0);
    index = index + 1;
    pSVar5 = (__this->fields)._ids;
    if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c919ac;
  } while( true );
}


