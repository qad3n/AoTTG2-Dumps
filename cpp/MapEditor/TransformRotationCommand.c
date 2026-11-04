// Type: MapEditor.TransformRotationCommand
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/TransformRotationCommand.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/TransformRotationCommand.cs
// --------------------------------

// MapEditor.TransformRotationCommand$$.ctor
// il2cpp: void MapEditor_TransformRotationCommand___ctor (MapEditor_TransformRotationCommand_o* __this, System_Collections_Generic_List_MapObject__o* mapObjects, const MethodInfo* method);
// 0x1821ffe10
// eh: try 0x1821fffad..0x182200287 -> pad 0x18333f5d0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18220020f: mov rdx, qword ptr [rip + 0x1e8b2b2]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x182200216: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18220021b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182200220: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182200225: test rcx, rcx
// asm:   0x182200228: jne 0x182200287
// asm:   0x182200287: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333f5d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f5d5: push rbp
// asm:   0x18333f5d6: sub rsp, 0x20
// asm:   0x18333f5da: mov rbp, rdx
// asm:   0x18333f5dd: mov rax, qword ptr [rbp + 0xa8]
// asm:   0x18333f5e4: mov rcx, qword ptr [rax]
// asm:   0x18333f5e7: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333f5eb: movabs rax, 0
// asm:   0x18333f5f5: add rsp, 0x20
// asm:   0x18333f5f9: pop rbp
// asm:   0x18333f5fa: ret 

void MapEditor_TransformRotationCommand___ctor
               (MapEditor_TransformRotationCommand_o *__this,
               System_Collections_Generic_List_MapObject__o *mapObjects,MethodInfo *method)

{
  int32_t *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint32_t item;
  uint uVar4;
  float fVar5;
  System_Collections_Generic_List_uint__o *__this_00;
  System_UInt32_array *pSVar6;
  Il2CppClass *__this_01;
  UnityEngine_Vector3_array *pUVar7;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *pMVar8;
  Il2CppObject *pIVar9;
  bool bVar10;
  System_Collections_Generic_List_Vector3__o *pSVar11;
  System_Collections_Generic_List_int__o *__this_03;
  UnityEngine_Vector3_o *pUVar12;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_Quaternion_o *pUVar13;
  UnityEngine_Vector3_o local_f8;
  undefined8 local_e8;
  System_Collections_Generic_List_Enumerator_object__o *local_e0;
  System_Collections_Generic_List_Enumerator_object__o local_d8;
  UnityEngine_Vector3_Fields local_b8;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Quaternion_Fields local_98;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  UnityEngine_Vector3_o local_68;
  UnityEngine_Vector3_o local_58;
  UnityEngine_Vector3_o local_48 [3];
  
  if (Il2CppMethodInitialized_184347017 == '\0') {
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
    Il2CppMethodInitialized_184347017 = '\x01';
  }
  local_d8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.fields._index = 0;
  local_d8.fields._version = 0;
  local_d8.fields._current = (Il2CppObject *)0x0;
  local_98.x = 0.0;
  local_98.y = 0.0;
  local_98.z = 0.0;
  local_98.w = 0.0;
  pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar11,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  (__this->fields)._oldRotations = pSVar11;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._oldRotations,pSVar11);
  pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar11,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  (__this->fields)._newRotations = pSVar11;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._newRotations,pSVar11);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_03,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  (__this->fields)._ids = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._ids,__this_03);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (mapObjects == (System_Collections_Generic_List_MapObject__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            (&local_88,(System_Collections_Generic_List_T__o *)mapObjects,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
  local_d8.fields._list = local_88.fields._list;
  local_d8.fields._index = local_88.fields._index;
  local_d8.fields._version = local_88.fields._version;
  local_d8.fields._current = local_88.fields._current;
  local_e8 = 0;
  local_e0 = &local_d8;
  while( true ) {
    bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       (&local_d8,
                        (MethodInfo_153A2A0 *)
                        MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    pIVar9 = local_d8.fields._current;
    pMVar8 = MethodInfo_System_Collections_Generic_List_int_Add;
    if (!bVar10) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_d8,
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
      return;
    }
    if (local_d8.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if (local_d8.fields._current[2].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (System_Collections_Generic_List_uint__o *)(__this->fields)._ids;
    if (__this_00 == (System_Collections_Generic_List_uint__o *)0x0) {
      ThrowNullReferenceException();
    }
    item = *(uint32_t *)&((local_d8.fields._current[2].klass)->_1).byval_arg.data;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar6 = (__this_00->fields)._items;
    if (pSVar6 == (System_UInt32_array *)0x0) {
      ThrowNullReferenceException();
    }
    uVar4 = (__this_00->fields)._size;
    if (uVar4 < (uint)pSVar6->max_length) {
      (__this_00->fields)._size = uVar4 + 1;
      if ((uint)pSVar6->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      pSVar6->m_Items[(int)uVar4] = item;
    }
    else {
      System_Collections_Generic_List_uint___AddWithResize
                (__this_00,item,(MethodInfo_91A500 *)pMVar8->klass->rgctx_data[0xe].method);
    }
    __this_01 = pIVar9[2].klass;
    if (__this_01 == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar11 = (__this->fields)._oldRotations;
    pUVar12 = Map_MapScriptBaseObject__GetRotation
                        (&local_68,(Map_MapScriptBaseObject_o *)__this_01,(MethodInfo *)0x0);
    pMVar8 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar11 == (System_Collections_Generic_List_Vector3__o *)0x0) {
      ThrowNullReferenceException();
    }
    uVar2._0_4_ = (pUVar12->fields).x;
    uVar2._4_4_ = (pUVar12->fields).y;
    fVar5 = (pUVar12->fields).z;
    piVar1 = &(pSVar11->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar7 = (pSVar11->fields)._items;
    if (pUVar7 == (UnityEngine_Vector3_array *)0x0) break;
    uVar4 = (pSVar11->fields)._size;
    if (uVar4 < (uint)pUVar7->max_length) {
      (pSVar11->fields)._size = uVar4 + 1;
      if ((uint)pUVar7->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      pUVar7->m_Items[(int)uVar4].fields.x = (float)uVar2;
      pUVar7->m_Items[(int)uVar4].fields.y = uVar2._4_4_;
      pUVar7->m_Items[(int)uVar4].fields.z = fVar5;
    }
    else {
      local_b8._0_8_ = uVar2;
      local_b8.z = fVar5;
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar11,(UnityEngine_Vector3_o *)&local_b8,
                 (MethodInfo_99C850 *)pMVar8->klass->rgctx_data[0xe].method);
    }
    __this_02 = pIVar9[1].monitor;
    if (__this_02 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar11 = (__this->fields)._newRotations;
    __this_04 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
    if (__this_04 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar13 = UnityEngine_Transform__get_localRotation
                        ((UnityEngine_Quaternion_o *)&local_88,__this_04,(MethodInfo *)0x0);
    local_98.x = (pUVar13->fields).x;
    local_98.y = (pUVar13->fields).y;
    local_98.z = (pUVar13->fields).z;
    local_98.w = (pUVar13->fields).w;
    pUVar12 = UnityEngine_Quaternion__Internal_ToEulerRad
                        (&local_58,(UnityEngine_Quaternion_o *)&local_98,(MethodInfo *)0x0);
    local_f8.fields.x = (pUVar12->fields).x * 57.29578;
    local_f8.fields.y = (pUVar12->fields).y * 57.29578;
    local_f8.fields.z = (pUVar12->fields).z * 57.29578;
    pUVar12 = UnityEngine_Quaternion__Internal_MakePositive(local_48,&local_f8,(MethodInfo *)0x0);
    pMVar8 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar11 == (System_Collections_Generic_List_Vector3__o *)0x0) {
      ThrowNullReferenceException();
    }
    uVar3._0_4_ = (pUVar12->fields).x;
    uVar3._4_4_ = (pUVar12->fields).y;
    fVar5 = (pUVar12->fields).z;
    piVar1 = &(pSVar11->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar7 = (pSVar11->fields)._items;
    if (pUVar7 == (UnityEngine_Vector3_array *)0x0) {
      ThrowNullReferenceException();
    }
    uVar4 = (pSVar11->fields)._size;
    if (uVar4 < (uint)pUVar7->max_length) {
      (pSVar11->fields)._size = uVar4 + 1;
      if ((uint)pUVar7->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      pUVar7->m_Items[(int)uVar4].fields.x = (float)uVar3;
      pUVar7->m_Items[(int)uVar4].fields.y = uVar3._4_4_;
      pUVar7->m_Items[(int)uVar4].fields.z = fVar5;
    }
    else {
      local_a8._0_8_ = uVar3;
      local_a8.z = fVar5;
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar11,(UnityEngine_Vector3_o *)&local_a8,
                 (MethodInfo_99C850 *)pMVar8->klass->rgctx_data[0xe].method);
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.TransformRotationCommand$$Execute
// il2cpp: void MapEditor_TransformRotationCommand__Execute (MapEditor_TransformRotationCommand_o* __this, const MethodInfo* method);
// 0x1821ff950
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ff9cd: movss xmm6, dword ptr [rip + 0x115922b]
// asm:   0x1821ffb82: jmp 0x1821ff9d5

void MapEditor_TransformRotationCommand__Execute
               (MapEditor_TransformRotationCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *pSVar1;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar2;
  System_Collections_Generic_List_Vector3__o *pSVar3;
  Map_MapScriptBaseObject_o *__this_00;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o SVar4;
  System_Collections_Generic_List_int__o *pSVar5;
  uint64_t uVar6;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Quaternion_o *pUVar7;
  int index;
  UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o local_78;
  UnityEngine_Vector3_o local_68;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_Fields local_38;
  UnityEngine_Quaternion_o local_28 [2];
  
  if (Il2CppMethodInitialized_184347018 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184347018 = '\x01';
  }
  pSVar5 = (__this->fields)._ids;
  index = 0;
  if (pSVar5 != (System_Collections_Generic_List_int__o *)0x0) {
    while( true ) {
      if ((pSVar5->fields)._size <= index) {
        return;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._ids;
      if (pSVar1 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) break;
      pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      SVar4 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                        (pSVar1,index,
                         (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if (((pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
          (uVar6 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                             (pSVar2,(int32_t)SVar4.fields,
                              (MethodInfo_14156F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
          uVar6 == 0)) || (*(UnityEngine_GameObject_o **)(uVar6 + 0x18) == (UnityEngine_GameObject_o *)0x0))
      break;
      __this_01 = UnityEngine_GameObject__get_transform
                            (*(UnityEngine_GameObject_o **)(uVar6 + 0x18),(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._newRotations;
      if (pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                (&local_78,(System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      local_68.fields.x = (float)local_78.fields.x * 0.017453292;
      local_68.fields.y = (float)local_78.fields.y * 0.017453292;
      local_68.fields.z = (float)local_78.fields.z * 0.017453292;
      pUVar7 = UnityEngine_Quaternion__Internal_FromEulerRad(local_28,&local_68,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_Transform_o *)0x0) break;
      local_38.x = (pUVar7->fields).x;
      local_38.y = (pUVar7->fields).y;
      local_38.z = (pUVar7->fields).z;
      local_38.w = (pUVar7->fields).w;
      UnityEngine_Transform__set_localRotation
                (__this_01,(UnityEngine_Quaternion_o *)&local_38,(MethodInfo *)0x0);
      pSVar1 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._ids;
      if (pSVar1 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) break;
      pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      SVar4 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                        (pSVar1,index,
                         (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if (((pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
          (uVar6 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                             (pSVar2,(int32_t)SVar4.fields,
                              (MethodInfo_14156F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
          uVar6 == 0)) ||
         (pSVar3 = (__this->fields)._newRotations, pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0
         )) break;
      __this_00 = *(Map_MapScriptBaseObject_o **)(uVar6 + 0x20);
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_58,
                 (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) break;
      local_48.x = local_58.x;
      local_48.y = local_58.y;
      local_48.z = local_58.z;
      Map_MapScriptBaseObject__SetRotation(__this_00,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
      pSVar5 = (__this->fields)._ids;
      index = index + 1;
      if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) break;
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.TransformRotationCommand$$Unexecute
// il2cpp: void MapEditor_TransformRotationCommand__Unexecute (MapEditor_TransformRotationCommand_o* __this, const MethodInfo* method);
// 0x1821ffbb0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ffc2d: movss xmm6, dword ptr [rip + 0x1158fcb]
// asm:   0x1821ffde2: jmp 0x1821ffc35

void MapEditor_TransformRotationCommand__Unexecute
               (MapEditor_TransformRotationCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *pSVar1;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar2;
  System_Collections_Generic_List_Vector3__o *pSVar3;
  Map_MapScriptBaseObject_o *__this_00;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o SVar4;
  System_Collections_Generic_List_int__o *pSVar5;
  uint64_t uVar6;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Quaternion_o *pUVar7;
  int index;
  UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o local_78;
  UnityEngine_Vector3_o local_68;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_Fields local_38;
  UnityEngine_Quaternion_o local_28 [2];
  
  if (Il2CppMethodInitialized_184347019 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184347019 = '\x01';
  }
  pSVar5 = (__this->fields)._ids;
  index = 0;
  if (pSVar5 != (System_Collections_Generic_List_int__o *)0x0) {
    while( true ) {
      if ((pSVar5->fields)._size <= index) {
        return;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._ids;
      if (pSVar1 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) break;
      pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      SVar4 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                        (pSVar1,index,
                         (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if (((pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
          (uVar6 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                             (pSVar2,(int32_t)SVar4.fields,
                              (MethodInfo_14156F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
          uVar6 == 0)) || (*(UnityEngine_GameObject_o **)(uVar6 + 0x18) == (UnityEngine_GameObject_o *)0x0))
      break;
      __this_01 = UnityEngine_GameObject__get_transform
                            (*(UnityEngine_GameObject_o **)(uVar6 + 0x18),(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._oldRotations;
      if (pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                (&local_78,(System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      local_68.fields.x = (float)local_78.fields.x * 0.017453292;
      local_68.fields.y = (float)local_78.fields.y * 0.017453292;
      local_68.fields.z = (float)local_78.fields.z * 0.017453292;
      pUVar7 = UnityEngine_Quaternion__Internal_FromEulerRad(local_28,&local_68,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_Transform_o *)0x0) break;
      local_38.x = (pUVar7->fields).x;
      local_38.y = (pUVar7->fields).y;
      local_38.z = (pUVar7->fields).z;
      local_38.w = (pUVar7->fields).w;
      UnityEngine_Transform__set_localRotation
                (__this_01,(UnityEngine_Quaternion_o *)&local_38,(MethodInfo *)0x0);
      pSVar1 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._ids;
      if (pSVar1 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) break;
      pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      SVar4 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                        (pSVar1,index,
                         (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if (((pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
          (uVar6 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                             (pSVar2,(int32_t)SVar4.fields,
                              (MethodInfo_14156F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
          uVar6 == 0)) ||
         (pSVar3 = (__this->fields)._oldRotations, pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0
         )) break;
      __this_00 = *(Map_MapScriptBaseObject_o **)(uVar6 + 0x20);
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_58,
                 (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) break;
      local_48.x = local_58.x;
      local_48.y = local_58.y;
      local_48.z = local_58.z;
      Map_MapScriptBaseObject__SetRotation(__this_00,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
      pSVar5 = (__this->fields)._ids;
      index = index + 1;
      if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) break;
    }
  }
  ThrowNullReferenceException();
}


