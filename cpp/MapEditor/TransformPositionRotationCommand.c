// Type: MapEditor.TransformPositionRotationCommand
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/TransformPositionRotationCommand.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/TransformPositionRotationCommand.cs
// --------------------------------

// MapEditor.TransformPositionRotationCommand$$.ctor
// il2cpp: void MapEditor_TransformPositionRotationCommand___ctor (MapEditor_TransformPositionRotationCommand_o* __this, System_Collections_Generic_List_MapObject__o* mapObjects, const MethodInfo* method);
// 0x1821ff2f0
// eh: try 0x1821ff4e9..0x1821ff940 -> pad 0x18333f5a0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ff897: mov rdx, qword ptr [rip + 0x1e8bc2a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x1821ff89e: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821ff8a3: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821ff8a8: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821ff8ad: test rcx, rcx
// asm:   0x1821ff8b0: jne 0x1821ff940
// asm:   0x1821ff940: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333f5a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f5a5: push rbp
// asm:   0x18333f5a6: sub rsp, 0x20
// asm:   0x18333f5aa: mov rbp, rdx
// asm:   0x18333f5ad: mov rax, qword ptr [rbp + 0xc8]
// asm:   0x18333f5b4: mov rcx, qword ptr [rax]
// asm:   0x18333f5b7: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333f5bb: movabs rax, 0
// asm:   0x18333f5c5: add rsp, 0x20
// asm:   0x18333f5c9: pop rbp
// asm:   0x18333f5ca: ret 

void MapEditor_TransformPositionRotationCommand___ctor
               (MapEditor_TransformPositionRotationCommand_o *__this,
               System_Collections_Generic_List_MapObject__o *mapObjects,MethodInfo *method)

{
  int32_t *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint32_t item;
  uint uVar6;
  float fVar7;
  System_Collections_Generic_List_uint__o *__this_00;
  System_UInt32_array *pSVar8;
  UnityEngine_Vector3_array *pUVar9;
  MethodInfo *pMVar10;
  Il2CppObject *pIVar11;
  bool bVar12;
  System_Collections_Generic_List_Vector3__o *pSVar13;
  System_Collections_Generic_List_int__o *__this_01;
  UnityEngine_Vector3_o *pUVar14;
  UnityEngine_Transform_o *pUVar15;
  UnityEngine_Quaternion_o *pUVar16;
  UnityEngine_Vector3_o local_138;
  undefined8 local_128;
  System_Collections_Generic_List_Enumerator_object__o *local_120;
  System_Collections_Generic_List_Enumerator_object__o local_118;
  UnityEngine_Vector3_Fields local_f8;
  UnityEngine_Vector3_Fields local_e8;
  UnityEngine_Vector3_Fields local_d8;
  UnityEngine_Vector3_Fields local_c8;
  UnityEngine_Quaternion_Fields local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  UnityEngine_Vector3_o local_88;
  UnityEngine_Vector3_o local_78;
  UnityEngine_Vector3_o local_68;
  UnityEngine_Vector3_o local_58;
  UnityEngine_Vector3_o local_48 [3];
  
  if (Il2CppMethodInitialized_184347014 == '\0') {
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
    Il2CppMethodInitialized_184347014 = '\x01';
  }
  local_118.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_118.fields._index = 0;
  local_118.fields._version = 0;
  local_118.fields._current = (Il2CppObject *)0x0;
  local_b8.x = 0.0;
  local_b8.y = 0.0;
  local_b8.z = 0.0;
  local_b8.w = 0.0;
  pSVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar13,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  (__this->fields)._oldPositions = pSVar13;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._oldPositions,pSVar13);
  pSVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar13,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  (__this->fields)._newPositions = pSVar13;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._newPositions,pSVar13);
  pSVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar13,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  (__this->fields)._oldRotations = pSVar13;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._oldRotations,pSVar13);
  pSVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar13,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  (__this->fields)._newRotations = pSVar13;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._newRotations,pSVar13);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  (__this->fields)._ids = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._ids,__this_01);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (mapObjects == (System_Collections_Generic_List_MapObject__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            (&local_a8,(System_Collections_Generic_List_T__o *)mapObjects,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
  local_118.fields._list = local_a8.fields._list;
  local_118.fields._index = local_a8.fields._index;
  local_118.fields._version = local_a8.fields._version;
  local_118.fields._current = local_a8.fields._current;
  local_128 = 0;
  local_120 = &local_118;
  while( true ) {
    bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       (&local_118,
                        (MethodInfo_153A2A0 *)
                        MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    pIVar11 = local_118.fields._current;
    pMVar10 = MethodInfo_System_Collections_Generic_List_int_Add;
    if (!bVar12) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_118,
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
      return;
    }
    if (local_118.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if (local_118.fields._current[2].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (System_Collections_Generic_List_uint__o *)(__this->fields)._ids;
    if (__this_00 == (System_Collections_Generic_List_uint__o *)0x0) {
      ThrowNullReferenceException();
    }
    item = *(uint32_t *)&((local_118.fields._current[2].klass)->_1).byval_arg.data;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar8 = (__this_00->fields)._items;
    if (pSVar8 == (System_UInt32_array *)0x0) {
      ThrowNullReferenceException();
    }
    uVar6 = (__this_00->fields)._size;
    if (uVar6 < (uint)pSVar8->max_length) {
      (__this_00->fields)._size = uVar6 + 1;
      if ((uint)pSVar8->max_length <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      pSVar8->m_Items[(int)uVar6] = item;
    }
    else {
      System_Collections_Generic_List_uint___AddWithResize
                (__this_00,item,(MethodInfo_91A500 *)pMVar10->klass->rgctx_data[0xe].method);
    }
    if (pIVar11[2].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar13 = (__this->fields)._oldPositions;
    pUVar14 = Map_MapScriptBaseObject__GetPosition
                        (&local_88,(Map_MapScriptBaseObject_o *)pIVar11[2].klass,(MethodInfo *)0x0);
    pMVar10 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar13 == (System_Collections_Generic_List_Vector3__o *)0x0) {
      ThrowNullReferenceException();
    }
    uVar2._0_4_ = (pUVar14->fields).x;
    uVar2._4_4_ = (pUVar14->fields).y;
    fVar7 = (pUVar14->fields).z;
    piVar1 = &(pSVar13->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar9 = (pSVar13->fields)._items;
    if (pUVar9 == (UnityEngine_Vector3_array *)0x0) {
      ThrowNullReferenceException();
    }
    uVar6 = (pSVar13->fields)._size;
    if (uVar6 < (uint)pUVar9->max_length) {
      (pSVar13->fields)._size = uVar6 + 1;
      if ((uint)pUVar9->max_length <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      pUVar9->m_Items[(int)uVar6].fields.x = (float)uVar2;
      pUVar9->m_Items[(int)uVar6].fields.y = uVar2._4_4_;
      pUVar9->m_Items[(int)uVar6].fields.z = fVar7;
    }
    else {
      local_f8._0_8_ = uVar2;
      local_f8.z = fVar7;
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar13,(UnityEngine_Vector3_o *)&local_f8,
                 (MethodInfo_99C850 *)pMVar10->klass->rgctx_data[0xe].method);
    }
    if (pIVar11[1].monitor == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar13 = (__this->fields)._newPositions;
    pUVar15 = UnityEngine_GameObject__get_transform(pIVar11[1].monitor,(MethodInfo *)0x0);
    if (pUVar15 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar14 = UnityEngine_Transform__get_localPosition(&local_78,pUVar15,(MethodInfo *)0x0);
    pMVar10 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar13 == (System_Collections_Generic_List_Vector3__o *)0x0) {
      ThrowNullReferenceException();
    }
    uVar3._0_4_ = (pUVar14->fields).x;
    uVar3._4_4_ = (pUVar14->fields).y;
    fVar7 = (pUVar14->fields).z;
    piVar1 = &(pSVar13->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar9 = (pSVar13->fields)._items;
    if (pUVar9 == (UnityEngine_Vector3_array *)0x0) {
      ThrowNullReferenceException();
    }
    uVar6 = (pSVar13->fields)._size;
    if (uVar6 < (uint)pUVar9->max_length) {
      (pSVar13->fields)._size = uVar6 + 1;
      if ((uint)pUVar9->max_length <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      pUVar9->m_Items[(int)uVar6].fields.x = (float)uVar3;
      pUVar9->m_Items[(int)uVar6].fields.y = uVar3._4_4_;
      pUVar9->m_Items[(int)uVar6].fields.z = fVar7;
    }
    else {
      local_e8._0_8_ = uVar3;
      local_e8.z = fVar7;
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar13,(UnityEngine_Vector3_o *)&local_e8,
                 (MethodInfo_99C850 *)pMVar10->klass->rgctx_data[0xe].method);
    }
    if (pIVar11[2].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar13 = (__this->fields)._oldRotations;
    pUVar14 = Map_MapScriptBaseObject__GetRotation
                        (&local_68,(Map_MapScriptBaseObject_o *)pIVar11[2].klass,(MethodInfo *)0x0);
    pMVar10 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar13 == (System_Collections_Generic_List_Vector3__o *)0x0) {
      ThrowNullReferenceException();
    }
    uVar4._0_4_ = (pUVar14->fields).x;
    uVar4._4_4_ = (pUVar14->fields).y;
    fVar7 = (pUVar14->fields).z;
    piVar1 = &(pSVar13->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar9 = (pSVar13->fields)._items;
    if (pUVar9 == (UnityEngine_Vector3_array *)0x0) break;
    uVar6 = (pSVar13->fields)._size;
    if (uVar6 < (uint)pUVar9->max_length) {
      (pSVar13->fields)._size = uVar6 + 1;
      if ((uint)pUVar9->max_length <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      pUVar9->m_Items[(int)uVar6].fields.x = (float)uVar4;
      pUVar9->m_Items[(int)uVar6].fields.y = uVar4._4_4_;
      pUVar9->m_Items[(int)uVar6].fields.z = fVar7;
    }
    else {
      local_d8._0_8_ = uVar4;
      local_d8.z = fVar7;
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar13,(UnityEngine_Vector3_o *)&local_d8,
                 (MethodInfo_99C850 *)pMVar10->klass->rgctx_data[0xe].method);
    }
    if (pIVar11[1].monitor == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar13 = (__this->fields)._newRotations;
    pUVar15 = UnityEngine_GameObject__get_transform(pIVar11[1].monitor,(MethodInfo *)0x0);
    if (pUVar15 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar16 = UnityEngine_Transform__get_localRotation
                        ((UnityEngine_Quaternion_o *)&local_a8,pUVar15,(MethodInfo *)0x0);
    local_b8.x = (pUVar16->fields).x;
    local_b8.y = (pUVar16->fields).y;
    local_b8.z = (pUVar16->fields).z;
    local_b8.w = (pUVar16->fields).w;
    pUVar14 = UnityEngine_Quaternion__Internal_ToEulerRad
                        (&local_58,(UnityEngine_Quaternion_o *)&local_b8,(MethodInfo *)0x0);
    local_138.fields.x = (pUVar14->fields).x * 57.29578;
    local_138.fields.y = (pUVar14->fields).y * 57.29578;
    local_138.fields.z = (pUVar14->fields).z * 57.29578;
    pUVar14 = UnityEngine_Quaternion__Internal_MakePositive(local_48,&local_138,(MethodInfo *)0x0);
    pMVar10 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar13 == (System_Collections_Generic_List_Vector3__o *)0x0) {
      ThrowNullReferenceException();
    }
    uVar5._0_4_ = (pUVar14->fields).x;
    uVar5._4_4_ = (pUVar14->fields).y;
    fVar7 = (pUVar14->fields).z;
    piVar1 = &(pSVar13->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar9 = (pSVar13->fields)._items;
    if (pUVar9 == (UnityEngine_Vector3_array *)0x0) {
      ThrowNullReferenceException();
    }
    uVar6 = (pSVar13->fields)._size;
    if (uVar6 < (uint)pUVar9->max_length) {
      (pSVar13->fields)._size = uVar6 + 1;
      if ((uint)pUVar9->max_length <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      pUVar9->m_Items[(int)uVar6].fields.x = (float)uVar5;
      pUVar9->m_Items[(int)uVar6].fields.y = uVar5._4_4_;
      pUVar9->m_Items[(int)uVar6].fields.z = fVar7;
    }
    else {
      local_c8._0_8_ = uVar5;
      local_c8.z = fVar7;
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar13,(UnityEngine_Vector3_o *)&local_c8,
                 (MethodInfo_99C850 *)pMVar10->klass->rgctx_data[0xe].method);
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.TransformPositionRotationCommand$$Execute
// il2cpp: void MapEditor_TransformPositionRotationCommand__Execute (MapEditor_TransformPositionRotationCommand_o* __this, const MethodInfo* method);
// 0x1821feb90
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821fec17: movss xmm6, dword ptr [rip + 0x1159fe1]
// asm:   0x1821fec1f: nop 
// asm:   0x1821fef05: jmp 0x1821fec20

void MapEditor_TransformPositionRotationCommand__Execute
               (MapEditor_TransformPositionRotationCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *pSVar1;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar2;
  System_Collections_Generic_List_Vector3__o *pSVar3;
  Map_MapScriptBaseObject_o *pMVar4;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o SVar5;
  System_Collections_Generic_List_int__o *pSVar6;
  uint64_t uVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Quaternion_o *pUVar9;
  int index;
  UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o local_b8;
  UnityEngine_Vector3_o local_a8;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_Fields local_38;
  UnityEngine_Quaternion_o local_28 [2];
  
  if (Il2CppMethodInitialized_184347015 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184347015 = '\x01';
  }
  pSVar6 = (__this->fields)._ids;
  index = 0;
  if (pSVar6 != (System_Collections_Generic_List_int__o *)0x0) {
    while( true ) {
      if ((pSVar6->fields)._size <= index) {
        return;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._ids;
      if (pSVar1 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) break;
      pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      SVar5 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                        (pSVar1,index,
                         (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if (((pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
          (uVar7 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                             (pSVar2,(int32_t)SVar5.fields,
                              (MethodInfo_14156F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
          uVar7 == 0)) || (*(UnityEngine_GameObject_o **)(uVar7 + 0x18) == (UnityEngine_GameObject_o *)0x0))
      break;
      pUVar8 = UnityEngine_GameObject__get_transform
                         (*(UnityEngine_GameObject_o **)(uVar7 + 0x18),(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._newPositions;
      if ((pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
         (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                    ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_98,
                     (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                     (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item),
         pUVar8 == (UnityEngine_Transform_o *)0x0)) break;
      local_88.x = local_98.x;
      local_88.y = local_98.y;
      local_88.z = local_98.z;
      UnityEngine_Transform__set_localPosition(pUVar8,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
      pSVar1 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._ids;
      if (pSVar1 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) break;
      pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      SVar5 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                        (pSVar1,index,
                         (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if (((pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
          (uVar7 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                             (pSVar2,(int32_t)SVar5.fields,
                              (MethodInfo_14156F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
          uVar7 == 0)) ||
         (pSVar3 = (__this->fields)._newPositions, pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0
         )) break;
      pMVar4 = *(Map_MapScriptBaseObject_o **)(uVar7 + 0x20);
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_78,
                 (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      if (pMVar4 == (Map_MapScriptBaseObject_o *)0x0) break;
      local_68.x = local_78.x;
      local_68.y = local_78.y;
      local_68.z = local_78.z;
      Map_MapScriptBaseObject__SetPosition(pMVar4,(UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0);
      pSVar1 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._ids;
      if (pSVar1 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) break;
      pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      SVar5 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                        (pSVar1,index,
                         (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if (((pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
          (uVar7 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                             (pSVar2,(int32_t)SVar5.fields,
                              (MethodInfo_14156F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
          uVar7 == 0)) || (*(UnityEngine_GameObject_o **)(uVar7 + 0x18) == (UnityEngine_GameObject_o *)0x0))
      break;
      pUVar8 = UnityEngine_GameObject__get_transform
                         (*(UnityEngine_GameObject_o **)(uVar7 + 0x18),(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._newRotations;
      if (pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                (&local_b8,(System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      local_a8.fields.x = (float)local_b8.fields.x * 0.017453292;
      local_a8.fields.y = (float)local_b8.fields.y * 0.017453292;
      local_a8.fields.z = (float)local_b8.fields.z * 0.017453292;
      pUVar9 = UnityEngine_Quaternion__Internal_FromEulerRad(local_28,&local_a8,(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_Transform_o *)0x0) break;
      local_38.x = (pUVar9->fields).x;
      local_38.y = (pUVar9->fields).y;
      local_38.z = (pUVar9->fields).z;
      local_38.w = (pUVar9->fields).w;
      UnityEngine_Transform__set_localRotation(pUVar8,(UnityEngine_Quaternion_o *)&local_38,(MethodInfo *)0x0)
      ;
      pSVar1 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._ids;
      if (pSVar1 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) break;
      pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      SVar5 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                        (pSVar1,index,
                         (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if (((pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
          (uVar7 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                             (pSVar2,(int32_t)SVar5.fields,
                              (MethodInfo_14156F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
          uVar7 == 0)) ||
         (pSVar3 = (__this->fields)._newRotations, pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0
         )) break;
      pMVar4 = *(Map_MapScriptBaseObject_o **)(uVar7 + 0x20);
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_58,
                 (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      if (pMVar4 == (Map_MapScriptBaseObject_o *)0x0) break;
      local_48.x = local_58.x;
      local_48.y = local_58.y;
      local_48.z = local_58.z;
      Map_MapScriptBaseObject__SetRotation(pMVar4,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
      pSVar6 = (__this->fields)._ids;
      index = index + 1;
      if (pSVar6 == (System_Collections_Generic_List_int__o *)0x0) break;
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.TransformPositionRotationCommand$$Unexecute
// il2cpp: void MapEditor_TransformPositionRotationCommand__Unexecute (MapEditor_TransformPositionRotationCommand_o* __this, const MethodInfo* method);
// 0x1821fef40
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821fefc7: movss xmm6, dword ptr [rip + 0x1159c31]
// asm:   0x1821fefcf: nop 
// asm:   0x1821ff2b5: jmp 0x1821fefd0

void MapEditor_TransformPositionRotationCommand__Unexecute
               (MapEditor_TransformPositionRotationCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *pSVar1;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar2;
  System_Collections_Generic_List_Vector3__o *pSVar3;
  Map_MapScriptBaseObject_o *pMVar4;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o SVar5;
  System_Collections_Generic_List_int__o *pSVar6;
  uint64_t uVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Quaternion_o *pUVar9;
  int index;
  UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o local_b8;
  UnityEngine_Vector3_o local_a8;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_Fields local_38;
  UnityEngine_Quaternion_o local_28 [2];
  
  if (Il2CppMethodInitialized_184347016 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184347016 = '\x01';
  }
  pSVar6 = (__this->fields)._ids;
  index = 0;
  if (pSVar6 != (System_Collections_Generic_List_int__o *)0x0) {
    while( true ) {
      if ((pSVar6->fields)._size <= index) {
        return;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._ids;
      if (pSVar1 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) break;
      pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      SVar5 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                        (pSVar1,index,
                         (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if (((pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
          (uVar7 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                             (pSVar2,(int32_t)SVar5.fields,
                              (MethodInfo_14156F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
          uVar7 == 0)) || (*(UnityEngine_GameObject_o **)(uVar7 + 0x18) == (UnityEngine_GameObject_o *)0x0))
      break;
      pUVar8 = UnityEngine_GameObject__get_transform
                         (*(UnityEngine_GameObject_o **)(uVar7 + 0x18),(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._oldPositions;
      if ((pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
         (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                    ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_98,
                     (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                     (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item),
         pUVar8 == (UnityEngine_Transform_o *)0x0)) break;
      local_88.x = local_98.x;
      local_88.y = local_98.y;
      local_88.z = local_98.z;
      UnityEngine_Transform__set_localPosition(pUVar8,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
      pSVar1 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._ids;
      if (pSVar1 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) break;
      pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      SVar5 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                        (pSVar1,index,
                         (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if (((pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
          (uVar7 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                             (pSVar2,(int32_t)SVar5.fields,
                              (MethodInfo_14156F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
          uVar7 == 0)) ||
         (pSVar3 = (__this->fields)._oldPositions, pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0
         )) break;
      pMVar4 = *(Map_MapScriptBaseObject_o **)(uVar7 + 0x20);
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_78,
                 (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      if (pMVar4 == (Map_MapScriptBaseObject_o *)0x0) break;
      local_68.x = local_78.x;
      local_68.y = local_78.y;
      local_68.z = local_78.z;
      Map_MapScriptBaseObject__SetPosition(pMVar4,(UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0);
      pSVar1 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._ids;
      if (pSVar1 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) break;
      pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      SVar5 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                        (pSVar1,index,
                         (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if (((pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
          (uVar7 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                             (pSVar2,(int32_t)SVar5.fields,
                              (MethodInfo_14156F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
          uVar7 == 0)) || (*(UnityEngine_GameObject_o **)(uVar7 + 0x18) == (UnityEngine_GameObject_o *)0x0))
      break;
      pUVar8 = UnityEngine_GameObject__get_transform
                         (*(UnityEngine_GameObject_o **)(uVar7 + 0x18),(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._oldRotations;
      if (pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                (&local_b8,(System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      local_a8.fields.x = (float)local_b8.fields.x * 0.017453292;
      local_a8.fields.y = (float)local_b8.fields.y * 0.017453292;
      local_a8.fields.z = (float)local_b8.fields.z * 0.017453292;
      pUVar9 = UnityEngine_Quaternion__Internal_FromEulerRad(local_28,&local_a8,(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_Transform_o *)0x0) break;
      local_38.x = (pUVar9->fields).x;
      local_38.y = (pUVar9->fields).y;
      local_38.z = (pUVar9->fields).z;
      local_38.w = (pUVar9->fields).w;
      UnityEngine_Transform__set_localRotation(pUVar8,(UnityEngine_Quaternion_o *)&local_38,(MethodInfo *)0x0)
      ;
      pSVar1 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._ids;
      if (pSVar1 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) break;
      pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      SVar5 = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                        (pSVar1,index,
                         (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if (((pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
          (uVar7 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                             (pSVar2,(int32_t)SVar5.fields,
                              (MethodInfo_14156F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
          uVar7 == 0)) ||
         (pSVar3 = (__this->fields)._oldRotations, pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0
         )) break;
      pMVar4 = *(Map_MapScriptBaseObject_o **)(uVar7 + 0x20);
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_58,
                 (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      if (pMVar4 == (Map_MapScriptBaseObject_o *)0x0) break;
      local_48.x = local_58.x;
      local_48.y = local_58.y;
      local_48.z = local_58.z;
      Map_MapScriptBaseObject__SetRotation(pMVar4,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
      pSVar6 = (__this->fields)._ids;
      index = index + 1;
      if (pSVar6 == (System_Collections_Generic_List_int__o *)0x0) break;
    }
  }
  ThrowNullReferenceException();
}


