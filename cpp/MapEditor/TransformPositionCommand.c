// Type: MapEditor.TransformPositionCommand
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/TransformPositionCommand.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/TransformPositionCommand.cs
// --------------------------------

// MapEditor.TransformPositionCommand$$.ctor
// il2cpp: void MapEditor_TransformPositionCommand___ctor (MapEditor_TransformPositionCommand_o* __this, System_Collections_Generic_List_MapObject__o* mapObjects, const MethodInfo* method);
// 0x1821fe7a0
// eh: try 0x1821fe924..0x1821feb7c -> pad 0x183331d60 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821feb0c: mov rdx, qword ptr [rip + 0x1e8c9b5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x1821feb13: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821feb18: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821feb1d: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1821feb22: test rcx, rcx
// asm:   0x1821feb25: jne 0x1821feb7c
// asm:   0x1821feb7c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183331d60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331d65: push rbp
// asm:   0x183331d66: sub rsp, 0x20
// asm:   0x183331d6a: mov rbp, rdx
// asm:   0x183331d6d: mov rax, qword ptr [rbp + 0x70]
// asm:   0x183331d71: mov rcx, qword ptr [rax]
// asm:   0x183331d74: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183331d78: movabs rax, 0
// asm:   0x183331d82: add rsp, 0x20
// asm:   0x183331d86: pop rbp
// asm:   0x183331d87: ret 

void MapEditor_TransformPositionCommand___ctor
               (MapEditor_TransformPositionCommand_o *__this,
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
  undefined1 local_a8 [16];
  Il2CppObject *local_98;
  System_Collections_Generic_List_Enumerator_object__o local_90;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Vector3_Fields local_68 [2];
  UnityEngine_Vector3_o local_50;
  UnityEngine_Vector3_o local_40 [2];
  
  if (Il2CppMethodInitialized_184347011 == '\0') {
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
    Il2CppMethodInitialized_184347011 = '\x01';
  }
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar11,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  (__this->fields)._oldPositions = pSVar11;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._oldPositions,pSVar11);
  pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar11,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  (__this->fields)._newPositions = pSVar11;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._newPositions,pSVar11);
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
            ((System_Collections_Generic_List_Enumerator_T__o *)local_a8,
             (System_Collections_Generic_List_T__o *)mapObjects,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
  local_90.fields._list = (System_Collections_Generic_List_T__o *)local_a8._0_8_;
  local_90.fields._index = local_a8._8_4_;
  local_90.fields._version = local_a8._12_4_;
  local_90.fields._current = local_98;
  local_a8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_a8._8_8_ = &local_90;
  while( true ) {
    bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       (&local_90,
                        (MethodInfo_153A2A0 *)
                        MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    pIVar9 = local_90.fields._current;
    pMVar8 = MethodInfo_System_Collections_Generic_List_int_Add;
    if (!bVar10) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_90,
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
      return;
    }
    if (local_90.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if (local_90.fields._current[2].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (System_Collections_Generic_List_uint__o *)(__this->fields)._ids;
    if (__this_00 == (System_Collections_Generic_List_uint__o *)0x0) {
      ThrowNullReferenceException();
    }
    item = *(uint32_t *)&((local_90.fields._current[2].klass)->_1).byval_arg.data;
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
    pSVar11 = (__this->fields)._oldPositions;
    pUVar12 = Map_MapScriptBaseObject__GetPosition
                        (&local_50,(Map_MapScriptBaseObject_o *)__this_01,(MethodInfo *)0x0);
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
      local_78._0_8_ = uVar2;
      local_78.z = fVar5;
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar11,(UnityEngine_Vector3_o *)&local_78,
                 (MethodInfo_99C850 *)pMVar8->klass->rgctx_data[0xe].method);
    }
    __this_02 = pIVar9[1].monitor;
    if (__this_02 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar11 = (__this->fields)._newPositions;
    __this_04 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
    if (__this_04 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar12 = UnityEngine_Transform__get_localPosition(local_40,__this_04,(MethodInfo *)0x0);
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
      local_68[0]._0_8_ = uVar3;
      local_68[0].z = fVar5;
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar11,(UnityEngine_Vector3_o *)local_68,
                 (MethodInfo_99C850 *)pMVar8->klass->rgctx_data[0xe].method);
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.TransformPositionCommand$$Execute
// il2cpp: void MapEditor_TransformPositionCommand__Execute (MapEditor_TransformPositionCommand_o* __this, const MethodInfo* method);
// 0x1821fe380
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821fe3ef: nop 
// asm:   0x1821fe567: jmp 0x1821fe3f0

void MapEditor_TransformPositionCommand__Execute
               (MapEditor_TransformPositionCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *pSVar1;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar2;
  System_Collections_Generic_List_Vector3__o *pSVar3;
  Map_MapScriptBaseObject_o *__this_00;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o SVar4;
  System_Collections_Generic_List_int__o *pSVar5;
  uint64_t uVar6;
  UnityEngine_Transform_o *__this_01;
  int index;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184347012 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184347012 = '\x01';
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
      pSVar3 = (__this->fields)._newPositions;
      if ((pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
         (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                    ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_48,
                     (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                     (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item),
         __this_01 == (UnityEngine_Transform_o *)0x0)) break;
      local_38.x = local_48.x;
      local_38.y = local_48.y;
      local_38.z = local_48.z;
      UnityEngine_Transform__set_localPosition(__this_01,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0)
      ;
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
         (pSVar3 = (__this->fields)._newPositions, pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0
         )) break;
      __this_00 = *(Map_MapScriptBaseObject_o **)(uVar6 + 0x20);
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_28,
                 (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) break;
      local_18.x = local_28.x;
      local_18.y = local_28.y;
      local_18.z = local_28.z;
      Map_MapScriptBaseObject__SetPosition(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      pSVar5 = (__this->fields)._ids;
      index = index + 1;
      if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) break;
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.TransformPositionCommand$$Unexecute
// il2cpp: void MapEditor_TransformPositionCommand__Unexecute (MapEditor_TransformPositionCommand_o* __this, const MethodInfo* method);
// 0x1821fe590
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821fe5ff: nop 
// asm:   0x1821fe777: jmp 0x1821fe600

void MapEditor_TransformPositionCommand__Unexecute
               (MapEditor_TransformPositionCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *pSVar1;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar2;
  System_Collections_Generic_List_Vector3__o *pSVar3;
  Map_MapScriptBaseObject_o *__this_00;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o SVar4;
  System_Collections_Generic_List_int__o *pSVar5;
  uint64_t uVar6;
  UnityEngine_Transform_o *__this_01;
  int index;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184347013 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184347013 = '\x01';
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
      pSVar3 = (__this->fields)._oldPositions;
      if ((pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
         (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                    ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_48,
                     (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                     (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item),
         __this_01 == (UnityEngine_Transform_o *)0x0)) break;
      local_38.x = local_48.x;
      local_38.y = local_48.y;
      local_38.z = local_48.z;
      UnityEngine_Transform__set_localPosition(__this_01,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0)
      ;
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
         (pSVar3 = (__this->fields)._oldPositions, pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0
         )) break;
      __this_00 = *(Map_MapScriptBaseObject_o **)(uVar6 + 0x20);
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_28,
                 (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      if (__this_00 == (Map_MapScriptBaseObject_o *)0x0) break;
      local_18.x = local_28.x;
      local_18.y = local_28.y;
      local_18.z = local_28.z;
      Map_MapScriptBaseObject__SetPosition(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      pSVar5 = (__this->fields)._ids;
      index = index + 1;
      if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) break;
    }
  }
  ThrowNullReferenceException();
}


