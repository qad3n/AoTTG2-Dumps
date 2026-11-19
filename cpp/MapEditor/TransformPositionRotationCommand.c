// Type: MapEditor.TransformPositionRotationCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/MapEditor/TransformPositionRotationCommand.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/TransformPositionRotationCommand.cs
// --------------------------------

// MapEditor.TransformPositionRotationCommand$$.ctor
// il2cpp: void MapEditor_TransformPositionRotationCommand___ctor (MapEditor_TransformPositionRotationCommand_o* __this, System_Collections_Generic_List_MapObject__o* mapObjects, const MethodInfo* method);
// 0x5c905e0
// eh: try 0x5c907ff..0x5c90afd -> pad 0x5c90b28 (+25 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c90b4c..0x5c90b51 -> pad 0x5c90b74 cleanup
// eh: try 0x5c90b77..0x5c90b81 -> pad 0x5c90b89 catch (...) [compiler noexcept guard]
// asm: 48 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c90b02: jmp 0x5c90b34
// asm:   0x5c90b04: jmp 0x5c90b34
// asm:   0x5c90b06: jmp 0x5c90b34
// asm:   0x5c90b08: jmp 0x5c90b34
// asm:   0x5c90b0a: jmp 0x5c90b34
// asm:   0x5c90b0c: jmp 0x5c90b34
// asm:   0x5c90b0e: jmp 0x5c90b34
// asm:   0x5c90b10: jmp 0x5c90b34
// asm:   0x5c90b12: jmp 0x5c90b34
// asm:   0x5c90b14: jmp 0x5c90b34
// asm:   0x5c90b16: jmp 0x5c90b34
// asm:   0x5c90b18: jmp 0x5c90b34
// asm:   0x5c90b1a: jmp 0x5c90b34
// asm:   0x5c90b1c: jmp 0x5c90b34
// asm:   0x5c90b1e: jmp 0x5c90b34
// asm:   0x5c90b20: jmp 0x5c90b34
// asm:   0x5c90b22: jmp 0x5c90b34
// asm:   0x5c90b24: jmp 0x5c90b34
// asm:   0x5c90b26: jmp 0x5c90b34
// asm:   0x5c90b28: jmp 0x5c90b34
// asm:   0x5c90b2a: jmp 0x5c90b34
// asm:   0x5c90b2c: jmp 0x5c90b34
// asm:   0x5c90b2e: jmp 0x5c90b34
// asm:   0x5c90b30: jmp 0x5c90b34
// asm:   0x5c90b32: jmp 0x5c90b34
// asm:   0x5c90b34: mov rbx, rax
// asm:   0x5c90b37: cmp edx, 1
// asm:   0x5c90b3a: jne 0x5c90b77
// asm:   0x5c90b3c: mov rdi, rbx
// asm:   0x5c90b3f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c90b44: mov rbx, qword ptr [rax]
// asm:   0x5c90b47: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5c90b4c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c90b51: lea rax, [rip + 0x15fd868]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x5c90b58: mov rsi, qword ptr [rax]
// asm:   0x5c90b5b: mov rdi, rsp
// asm:   0x5c90b5e: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c90b63: test rbx, rbx
// asm:   0x5c90b66: je 0x5c90aad
// asm:   0x5c90b6c: mov rdi, rbx
// asm:   0x5c90b6f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c90b74: mov rbx, rax
// asm:   0x5c90b77: lea rdi, [rsp + 0x20]
// asm:   0x5c90b7c: call 0x2fda980  ; il2cpp_runtime_helper_02fda980()
// asm:   0x5c90b81: mov rdi, rbx
// asm:   0x5c90b84: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c90b89: mov rdi, rax
// asm:   0x5c90b8c: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_TransformPositionRotationCommand___ctor
               (MapEditor_TransformPositionRotationCommand_o *__this,
               System_Collections_Generic_List_MapObject__o *mapObjects,MethodInfo *method)

{
  System_Collections_Generic_List_Vector3__o **targetAddress;
  System_Collections_Generic_List_Vector3__o **targetAddress_00;
  System_Collections_Generic_List_int__o **targetAddress_01;
  int32_t *piVar1;
  int32_t item;
  uint uVar2;
  System_Int32_array *pSVar3;
  UnityEngine_Vector3_array *pUVar4;
  MethodInfo *pMVar5;
  Il2CppObject *pIVar6;
  bool bVar7;
  System_Collections_Generic_List_Vector3__o *pSVar8;
  System_Collections_Generic_List_int__o *pSVar9;
  UnityEngine_Transform_o *pUVar10;
  Il2CppClass *__this_00;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o euler;
  System_Collections_Generic_List_Enumerator_object__o local_98;
  undefined1 local_78 [16];
  Il2CppObject *local_68;
  System_Collections_Generic_List_MapObject__o *local_60;
  System_Collections_Generic_List_Vector3__o **local_58;
  MapEditor_TransformPositionRotationCommand_Fields *local_50;
  UnityEngine_Quaternion_o local_48;
  
  local_60 = mapObjects;
  if (Il2CppMethodInitialized_075479d9 == '\0') {
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
    Il2CppMethodInitialized_075479d9 = '\x01';
  }
  local_98.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_98.fields._index = 0;
  local_98.fields._version = 0;
  local_98.fields._current = (Il2CppObject *)0x0;
  local_48.fields = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            (pSVar8,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  local_50 = &__this->fields;
  (__this->fields)._oldPositions = pSVar8;
  Il2CppCodeGenWriteBarrier(&local_50->_oldPositions);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            (pSVar8,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  local_58 = &(__this->fields)._newPositions;
  (__this->fields)._newPositions = pSVar8;
  Il2CppCodeGenWriteBarrier(local_58);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            (pSVar8,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  targetAddress = &(__this->fields)._oldRotations;
  (__this->fields)._oldRotations = pSVar8;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            (pSVar8,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  targetAddress_00 = &(__this->fields)._newRotations;
  (__this->fields)._newRotations = pSVar8;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (pSVar9,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  targetAddress_01 = &(__this->fields)._ids;
  (__this->fields)._ids = pSVar9;
  Il2CppCodeGenWriteBarrier(targetAddress_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (local_60 == (System_Collections_Generic_List_MapObject__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_78,
             (System_Collections_Generic_List_object__o *)local_60,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
  local_98.fields._current = local_68;
  local_98.fields._list = (System_Collections_Generic_List_T__o *)local_78._0_8_;
  local_98.fields._index = local_78._8_4_;
  local_98.fields._version = local_78._12_4_;
  local_78._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_78._8_8_ = &local_98;
  while( true ) {
    bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_98,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    pIVar6 = local_98.fields._current;
    pMVar5 = MethodInfo_System_Collections_Generic_List_int_Add;
    if (!bVar7) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                (&local_98,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
                );
      return;
    }
    if (local_98.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = local_98.fields._current[2].klass;
    if (__this_00 == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar9 = *targetAddress_01;
    if (pSVar9 == (System_Collections_Generic_List_int__o *)0x0) break;
    item = *(int32_t *)&(__this_00->_1).byval_arg.data;
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
      __this_00 = pIVar6[2].klass;
      if (__this_00 == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
    }
    pSVar8 = local_50->_oldPositions;
    UVar11 = Map_MapScriptBaseObject__GetPosition((Map_MapScriptBaseObject_o *)__this_00,(MethodInfo *)0x0);
    pMVar5 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar8 == (System_Collections_Generic_List_Vector3__o *)0x0) {
label_05c90abc:
      ThrowNullReferenceException();
    }
    piVar1 = &(pSVar8->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar8->fields)._items;
    if (pUVar4 == (UnityEngine_Vector3_array *)0x0) goto label_05c90abc;
    uVar2 = (pSVar8->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar8->fields)._size = uVar2 + 1;
      pUVar4->m_Items[(int)uVar2].fields.x = UVar11.fields.x;
      pUVar4->m_Items[(int)uVar2].fields.y = UVar11.fields.y;
      pUVar4->m_Items[(int)uVar2].fields.z = UVar11.fields.z;
    }
    else {
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar8,UVar11,(MethodInfo_39FF950 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    if (pIVar6[1].monitor == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar8 = *local_58;
    pUVar10 = UnityEngine_GameObject__get_transform(pIVar6[1].monitor,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UVar11 = UnityEngine_Transform__get_localPosition(pUVar10,(MethodInfo *)0x0);
    pMVar5 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar8 == (System_Collections_Generic_List_Vector3__o *)0x0) {
label_05c90ac6:
      ThrowNullReferenceException();
    }
    piVar1 = &(pSVar8->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar8->fields)._items;
    if (pUVar4 == (UnityEngine_Vector3_array *)0x0) goto label_05c90ac6;
    uVar2 = (pSVar8->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar8->fields)._size = uVar2 + 1;
      pUVar4->m_Items[(int)uVar2].fields.x = UVar11.fields.x;
      pUVar4->m_Items[(int)uVar2].fields.y = UVar11.fields.y;
      pUVar4->m_Items[(int)uVar2].fields.z = UVar11.fields.z;
    }
    else {
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar8,UVar11,(MethodInfo_39FF950 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    if (pIVar6[2].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar8 = *targetAddress;
    UVar11 = Map_MapScriptBaseObject__GetRotation
                       ((Map_MapScriptBaseObject_o *)pIVar6[2].klass,(MethodInfo *)0x0);
    pMVar5 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar8 == (System_Collections_Generic_List_Vector3__o *)0x0) {
label_05c90acb:
      ThrowNullReferenceException();
    }
    piVar1 = &(pSVar8->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar8->fields)._items;
    if (pUVar4 == (UnityEngine_Vector3_array *)0x0) goto label_05c90acb;
    uVar2 = (pSVar8->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar8->fields)._size = uVar2 + 1;
      pUVar4->m_Items[(int)uVar2].fields.x = UVar11.fields.x;
      pUVar4->m_Items[(int)uVar2].fields.y = UVar11.fields.y;
      pUVar4->m_Items[(int)uVar2].fields.z = UVar11.fields.z;
    }
    else {
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar8,UVar11,(MethodInfo_39FF950 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    if (pIVar6[1].monitor == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar8 = *targetAddress_00;
    pUVar10 = UnityEngine_GameObject__get_transform(pIVar6[1].monitor,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_48 = UnityEngine_Transform__get_localRotation(pUVar10,(MethodInfo *)0x0);
    UVar11 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_48,(MethodInfo *)0x0);
    euler.fields.z = UVar11.fields.z * 57.29578;
    euler.fields.y = UVar11.fields.y * 57.29578;
    euler.fields.x = UVar11.fields.x * 57.29578;
    UVar11 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    pMVar5 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar8 == (System_Collections_Generic_List_Vector3__o *)0x0) {
label_05c90ad0:
      ThrowNullReferenceException();
    }
    piVar1 = &(pSVar8->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar8->fields)._items;
    if (pUVar4 == (UnityEngine_Vector3_array *)0x0) goto label_05c90ad0;
    uVar2 = (pSVar8->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar8->fields)._size = uVar2 + 1;
      pUVar4->m_Items[(int)uVar2].fields.x = UVar11.fields.x;
      pUVar4->m_Items[(int)uVar2].fields.y = UVar11.fields.y;
      pUVar4->m_Items[(int)uVar2].fields.z = UVar11.fields.z;
    }
    else {
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar8,UVar11,(MethodInfo_39FF950 *)pMVar5->klass->rgctx_data[0xe].method);
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.TransformPositionRotationCommand$$Execute
// il2cpp: void MapEditor_TransformPositionRotationCommand__Execute (MapEditor_TransformPositionRotationCommand_o* __this, const MethodInfo* method);
// 0x5c90ba0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c90c5c: mov rax, qword ptr [r13]

void MapEditor_TransformPositionRotationCommand__Execute
               (MapEditor_TransformPositionRotationCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_Collections_Generic_List_Vector3__o *pSVar3;
  Map_MapScriptBaseObject_o *pMVar4;
  int32_t iVar5;
  Map_MapObject_o *pMVar6;
  UnityEngine_Transform_o *pUVar7;
  System_Collections_Generic_List_int__o *pSVar8;
  int32_t index;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_Fields UStack_40;
  
  if (Il2CppMethodInitialized_075479da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_075479da = '\x01';
  }
  pSVar8 = (__this->fields)._ids;
  if (pSVar8 == (System_Collections_Generic_List_int__o *)0x0) {
label_05c90e87:
    ThrowNullReferenceException();
  }
  index = 0;
  do {
    if ((pSVar8->fields)._size <= index) {
      return;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      pSVar8 = (__this->fields)._ids;
      if (pSVar8 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c90e87;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    iVar5 = System_Collections_Generic_List_int___get_Item
                      (pSVar8,index,
                       (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pMVar6 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar1,iVar5,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
        pMVar6 == (Map_MapObject_o *)0x0)) ||
       (pUVar2 = (pMVar6->fields).GameObject, pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto label_05c90e87;
    pUVar7 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
    pSVar3 = (__this->fields)._newPositions;
    if ((pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
       (UVar9 = System_Collections_Generic_List_Vector3___get_Item
                          (pSVar3,index,
                           (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item),
       pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_05c90e87;
    UnityEngine_Transform__set_localPosition(pUVar7,UVar9,(MethodInfo *)0x0);
    pSVar8 = (__this->fields)._ids;
    if (pSVar8 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c90e87;
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    iVar5 = System_Collections_Generic_List_int___get_Item
                      (pSVar8,index,
                       (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pMVar6 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar1,iVar5,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
        pMVar6 == (Map_MapObject_o *)0x0)) ||
       (pSVar3 = (__this->fields)._newPositions, pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0))
    goto label_05c90e87;
    pMVar4 = (pMVar6->fields).ScriptObject;
    UVar9 = System_Collections_Generic_List_Vector3___get_Item
                      (pSVar3,index,
                       (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    if (pMVar4 == (Map_MapScriptBaseObject_o *)0x0) goto label_05c90e87;
    Map_MapScriptBaseObject__SetPosition(pMVar4,UVar9,(MethodInfo *)0x0);
    pSVar8 = (__this->fields)._ids;
    if (pSVar8 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c90e87;
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    iVar5 = System_Collections_Generic_List_int___get_Item
                      (pSVar8,index,
                       (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pMVar6 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar1,iVar5,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
        pMVar6 == (Map_MapObject_o *)0x0)) ||
       (pUVar2 = (pMVar6->fields).GameObject, pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto label_05c90e87;
    pUVar7 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
    pSVar3 = (__this->fields)._newRotations;
    if (pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c90e87;
    UVar9 = System_Collections_Generic_List_Vector3___get_Item
                      (pSVar3,index,
                       (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    UStack_40.x = UVar9.fields.x * 0.017453292;
    UStack_40.y = UVar9.fields.y * 0.017453292;
    UStack_40.z = UVar9.fields.z * 0.017453292;
    value = UnityEngine_Quaternion__Internal_FromEulerRad
                      ((UnityEngine_Vector3_o *)&UStack_40,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_05c90e87;
    UnityEngine_Transform__set_localRotation(pUVar7,value,(MethodInfo *)0x0);
    pSVar8 = (__this->fields)._ids;
    if (pSVar8 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c90e87;
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    iVar5 = System_Collections_Generic_List_int___get_Item
                      (pSVar8,index,
                       (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pMVar6 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar1,iVar5,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
        pMVar6 == (Map_MapObject_o *)0x0)) ||
       (pSVar3 = (__this->fields)._newRotations, pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0))
    goto label_05c90e87;
    pMVar4 = (pMVar6->fields).ScriptObject;
    UVar9 = System_Collections_Generic_List_Vector3___get_Item
                      (pSVar3,index,
                       (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    if (pMVar4 == (Map_MapScriptBaseObject_o *)0x0) goto label_05c90e87;
    Map_MapScriptBaseObject__SetRotation(pMVar4,UVar9,(MethodInfo *)0x0);
    index = index + 1;
    pSVar8 = (__this->fields)._ids;
    if (pSVar8 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c90e87;
  } while( true );
}


// MapEditor.TransformPositionRotationCommand$$Unexecute
// il2cpp: void MapEditor_TransformPositionRotationCommand__Unexecute (MapEditor_TransformPositionRotationCommand_o* __this, const MethodInfo* method);
// 0x5c90ea0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c90f5c: mov rax, qword ptr [r13]

void MapEditor_TransformPositionRotationCommand__Unexecute
               (MapEditor_TransformPositionRotationCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_Collections_Generic_List_Vector3__o *pSVar3;
  Map_MapScriptBaseObject_o *pMVar4;
  int32_t iVar5;
  Map_MapObject_o *pMVar6;
  UnityEngine_Transform_o *pUVar7;
  System_Collections_Generic_List_int__o *pSVar8;
  int32_t index;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_Fields UStack_40;
  
  if (Il2CppMethodInitialized_075479db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_075479db = '\x01';
  }
  pSVar8 = (__this->fields)._ids;
  if (pSVar8 == (System_Collections_Generic_List_int__o *)0x0) {
label_05c91187:
    ThrowNullReferenceException();
  }
  index = 0;
  do {
    if ((pSVar8->fields)._size <= index) {
      return;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      pSVar8 = (__this->fields)._ids;
      if (pSVar8 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c91187;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    iVar5 = System_Collections_Generic_List_int___get_Item
                      (pSVar8,index,
                       (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pMVar6 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar1,iVar5,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
        pMVar6 == (Map_MapObject_o *)0x0)) ||
       (pUVar2 = (pMVar6->fields).GameObject, pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto label_05c91187;
    pUVar7 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
    pSVar3 = (__this->fields)._oldPositions;
    if ((pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
       (UVar9 = System_Collections_Generic_List_Vector3___get_Item
                          (pSVar3,index,
                           (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item),
       pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_05c91187;
    UnityEngine_Transform__set_localPosition(pUVar7,UVar9,(MethodInfo *)0x0);
    pSVar8 = (__this->fields)._ids;
    if (pSVar8 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c91187;
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    iVar5 = System_Collections_Generic_List_int___get_Item
                      (pSVar8,index,
                       (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pMVar6 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar1,iVar5,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
        pMVar6 == (Map_MapObject_o *)0x0)) ||
       (pSVar3 = (__this->fields)._oldPositions, pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0))
    goto label_05c91187;
    pMVar4 = (pMVar6->fields).ScriptObject;
    UVar9 = System_Collections_Generic_List_Vector3___get_Item
                      (pSVar3,index,
                       (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    if (pMVar4 == (Map_MapScriptBaseObject_o *)0x0) goto label_05c91187;
    Map_MapScriptBaseObject__SetPosition(pMVar4,UVar9,(MethodInfo *)0x0);
    pSVar8 = (__this->fields)._ids;
    if (pSVar8 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c91187;
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    iVar5 = System_Collections_Generic_List_int___get_Item
                      (pSVar8,index,
                       (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pMVar6 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar1,iVar5,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
        pMVar6 == (Map_MapObject_o *)0x0)) ||
       (pUVar2 = (pMVar6->fields).GameObject, pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto label_05c91187;
    pUVar7 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
    pSVar3 = (__this->fields)._oldRotations;
    if (pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c91187;
    UVar9 = System_Collections_Generic_List_Vector3___get_Item
                      (pSVar3,index,
                       (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    UStack_40.x = UVar9.fields.x * 0.017453292;
    UStack_40.y = UVar9.fields.y * 0.017453292;
    UStack_40.z = UVar9.fields.z * 0.017453292;
    value = UnityEngine_Quaternion__Internal_FromEulerRad
                      ((UnityEngine_Vector3_o *)&UStack_40,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_05c91187;
    UnityEngine_Transform__set_localRotation(pUVar7,value,(MethodInfo *)0x0);
    pSVar8 = (__this->fields)._ids;
    if (pSVar8 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c91187;
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    iVar5 = System_Collections_Generic_List_int___get_Item
                      (pSVar8,index,
                       (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pMVar6 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar1,iVar5,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
        pMVar6 == (Map_MapObject_o *)0x0)) ||
       (pSVar3 = (__this->fields)._oldRotations, pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0))
    goto label_05c91187;
    pMVar4 = (pMVar6->fields).ScriptObject;
    UVar9 = System_Collections_Generic_List_Vector3___get_Item
                      (pSVar3,index,
                       (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    if (pMVar4 == (Map_MapScriptBaseObject_o *)0x0) goto label_05c91187;
    Map_MapScriptBaseObject__SetRotation(pMVar4,UVar9,(MethodInfo *)0x0);
    index = index + 1;
    pSVar8 = (__this->fields)._ids;
    if (pSVar8 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c91187;
  } while( true );
}


