// Type: MapEditor.TransformScaleCommand
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/MapEditor/TransformScaleCommand.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/TransformScaleCommand.cs
// --------------------------------

// MapEditor.TransformScaleCommand$$.ctor
// il2cpp: void MapEditor_TransformScaleCommand___ctor (MapEditor_TransformScaleCommand_o* __this, System_Collections_Generic_List_MapObject__o* mapObjects, const MethodInfo* method);
// 0x1822008e0
// eh: try 0x182200ae0..0x182200f36 -> pad 0x1833245d0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182200ade: nop 
// asm:   0x182200e81: mov rdx, qword ptr [rip + 0x1e8a640]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x182200e88: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182200e8d: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182200e92: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x182200e97: test rcx, rcx
// asm:   0x182200e9a: jne 0x182200f36
// asm:   0x182200f36: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833245d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833245d5: push rbp
// asm:   0x1833245d6: sub rsp, 0x20
// asm:   0x1833245da: mov rbp, rdx
// asm:   0x1833245dd: mov rax, qword ptr [rbp + 0xb0]
// asm:   0x1833245e4: mov rcx, qword ptr [rax]
// asm:   0x1833245e7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x1833245eb: movabs rax, 0
// asm:   0x1833245f5: add rsp, 0x20
// asm:   0x1833245f9: pop rbp
// asm:   0x1833245fa: ret 

void MapEditor_TransformScaleCommand___ctor
               (MapEditor_TransformScaleCommand_o *__this,
               System_Collections_Generic_List_MapObject__o *mapObjects,MethodInfo *method)

{
  int32_t *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint32_t item;
  uint uVar8;
  float fVar9;
  float fVar10;
  System_Collections_Generic_List_uint__o *__this_00;
  System_UInt32_array *pSVar11;
  UnityEngine_Vector3_array *pUVar12;
  MethodInfo *pMVar13;
  Il2CppObject *pIVar14;
  bool bVar15;
  System_Collections_Generic_List_Vector3__o *pSVar16;
  System_Collections_Generic_List_int__o *__this_01;
  UnityEngine_Vector3_o *pUVar17;
  UnityEngine_Transform_o *pUVar18;
  Unity_Mathematics_float3_o *pUVar19;
  undefined1 local_148 [16];
  Il2CppObject *local_138;
  System_Collections_Generic_List_Enumerator_object__o local_130;
  UnityEngine_Vector3_Fields local_118;
  void *local_108;
  float local_100;
  Unity_Mathematics_float3_Fields local_f8;
  UnityEngine_Vector3_Fields local_e8;
  UnityEngine_Vector3_Fields local_d8;
  UnityEngine_Vector3_Fields local_c8 [2];
  UnityEngine_Vector3_o local_b0;
  UnityEngine_Vector3_o local_a0;
  Unity_Mathematics_float3_o local_90;
  UnityEngine_Vector3_o local_80;
  UnityEngine_Vector3_o local_70 [5];
  
  if (Il2CppMethodInitialized_18434701a == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_18434701a = '\x01';
  }
  local_130.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_130.fields._index = 0;
  local_130.fields._version = 0;
  local_130.fields._current = (Il2CppObject *)0x0;
  pSVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar16,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  (__this->fields)._oldScales = pSVar16;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._oldScales,pSVar16);
  pSVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar16,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  (__this->fields)._newScales = pSVar16;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._newScales,pSVar16);
  pSVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar16,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  (__this->fields)._oldPositions = pSVar16;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._oldPositions,pSVar16);
  pSVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar16,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  (__this->fields)._newPositions = pSVar16;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._newPositions,pSVar16);
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
            ((System_Collections_Generic_List_Enumerator_T__o *)local_148,
             (System_Collections_Generic_List_T__o *)mapObjects,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
  local_130.fields._list = (System_Collections_Generic_List_T__o *)local_148._0_8_;
  local_130.fields._index = local_148._8_4_;
  local_130.fields._version = local_148._12_4_;
  local_130.fields._current = local_138;
  local_148._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_148._8_8_ = &local_130;
  while( true ) {
    bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       (&local_130,
                        (MethodInfo_153A2A0 *)
                        MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    pIVar14 = local_130.fields._current;
    pMVar13 = MethodInfo_System_Collections_Generic_List_int_Add;
    if (!bVar15) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_130,
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
      return;
    }
    if (local_130.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if (local_130.fields._current[2].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (System_Collections_Generic_List_uint__o *)(__this->fields)._ids;
    if (__this_00 == (System_Collections_Generic_List_uint__o *)0x0) {
      ThrowNullReferenceException();
    }
    item = *(uint32_t *)&((local_130.fields._current[2].klass)->_1).byval_arg.data;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar11 = (__this_00->fields)._items;
    if (pSVar11 == (System_UInt32_array *)0x0) {
      ThrowNullReferenceException();
    }
    uVar8 = (__this_00->fields)._size;
    if (uVar8 < (uint)pSVar11->max_length) {
      (__this_00->fields)._size = uVar8 + 1;
      if ((uint)pSVar11->max_length <= uVar8) {
        ThrowIndexOutOfRangeException();
      }
      pSVar11->m_Items[(int)uVar8] = item;
    }
    else {
      System_Collections_Generic_List_uint___AddWithResize
                (__this_00,item,(MethodInfo_91A500 *)pMVar13->klass->rgctx_data[0xe].method);
    }
    if (pIVar14[2].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar16 = (__this->fields)._oldScales;
    pUVar17 = Map_MapScriptBaseObject__GetScale
                        (&local_b0,(Map_MapScriptBaseObject_o *)pIVar14[2].klass,(MethodInfo *)0x0);
    pMVar13 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar16 == (System_Collections_Generic_List_Vector3__o *)0x0) {
      ThrowNullReferenceException();
    }
    uVar2._0_4_ = (pUVar17->fields).x;
    uVar2._4_4_ = (pUVar17->fields).y;
    fVar9 = (pUVar17->fields).z;
    piVar1 = &(pSVar16->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar12 = (pSVar16->fields)._items;
    if (pUVar12 == (UnityEngine_Vector3_array *)0x0) {
      ThrowNullReferenceException();
    }
    uVar8 = (pSVar16->fields)._size;
    if (uVar8 < (uint)pUVar12->max_length) {
      (pSVar16->fields)._size = uVar8 + 1;
      if ((uint)pUVar12->max_length <= uVar8) {
        ThrowIndexOutOfRangeException();
      }
      pUVar12->m_Items[(int)uVar8].fields.x = (float)uVar2;
      pUVar12->m_Items[(int)uVar8].fields.y = uVar2._4_4_;
      pUVar12->m_Items[(int)uVar8].fields.z = fVar9;
    }
    else {
      local_118._0_8_ = uVar2;
      local_118.z = fVar9;
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar16,(UnityEngine_Vector3_o *)&local_118,
                 (MethodInfo_99C850 *)pMVar13->klass->rgctx_data[0xe].method);
    }
    if (pIVar14[1].monitor == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar16 = (__this->fields)._newScales;
    pUVar18 = UnityEngine_GameObject__get_transform(pIVar14[1].monitor,(MethodInfo *)0x0);
    if (pUVar18 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar17 = UnityEngine_Transform__get_localScale(&local_a0,pUVar18,(MethodInfo *)0x0);
    uVar3._0_4_ = (pUVar17->fields).x;
    uVar3._4_4_ = (pUVar17->fields).y;
    fVar9 = (pUVar17->fields).z;
    pvVar4 = pIVar14[2].monitor;
    fVar10 = *(float *)&pIVar14[3].klass;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    local_108 = pvVar4;
    local_100 = fVar10;
    local_f8._0_8_ = uVar3;
    local_f8.z = fVar9;
    pUVar19 = Unity_Mathematics_float3__op_Division
                        (&local_90,(Unity_Mathematics_float3_o *)&local_f8,
                         (Unity_Mathematics_float3_o *)&local_108,(MethodInfo *)0x0);
    pMVar13 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar16 == (System_Collections_Generic_List_Vector3__o *)0x0) {
      ThrowNullReferenceException();
    }
    uVar5._0_4_ = (pUVar19->fields).x;
    uVar5._4_4_ = (pUVar19->fields).y;
    fVar9 = (pUVar19->fields).z;
    piVar1 = &(pSVar16->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar12 = (pSVar16->fields)._items;
    if (pUVar12 == (UnityEngine_Vector3_array *)0x0) {
      ThrowNullReferenceException();
    }
    uVar8 = (pSVar16->fields)._size;
    if (uVar8 < (uint)pUVar12->max_length) {
      (pSVar16->fields)._size = uVar8 + 1;
      if ((uint)pUVar12->max_length <= uVar8) {
        ThrowIndexOutOfRangeException();
      }
      pUVar12->m_Items[(int)uVar8].fields.x = (float)uVar5;
      pUVar12->m_Items[(int)uVar8].fields.y = uVar5._4_4_;
      pUVar12->m_Items[(int)uVar8].fields.z = fVar9;
    }
    else {
      local_e8._0_8_ = uVar5;
      local_e8.z = fVar9;
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar16,(UnityEngine_Vector3_o *)&local_e8,
                 (MethodInfo_99C850 *)pMVar13->klass->rgctx_data[0xe].method);
    }
    if (pIVar14[2].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar16 = (__this->fields)._oldPositions;
    pUVar17 = Map_MapScriptBaseObject__GetPosition
                        (&local_80,(Map_MapScriptBaseObject_o *)pIVar14[2].klass,(MethodInfo *)0x0);
    pMVar13 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar16 == (System_Collections_Generic_List_Vector3__o *)0x0) {
      ThrowNullReferenceException();
    }
    uVar6._0_4_ = (pUVar17->fields).x;
    uVar6._4_4_ = (pUVar17->fields).y;
    fVar9 = (pUVar17->fields).z;
    piVar1 = &(pSVar16->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar12 = (pSVar16->fields)._items;
    if (pUVar12 == (UnityEngine_Vector3_array *)0x0) break;
    uVar8 = (pSVar16->fields)._size;
    if (uVar8 < (uint)pUVar12->max_length) {
      (pSVar16->fields)._size = uVar8 + 1;
      if ((uint)pUVar12->max_length <= uVar8) {
        ThrowIndexOutOfRangeException();
      }
      pUVar12->m_Items[(int)uVar8].fields.x = (float)uVar6;
      pUVar12->m_Items[(int)uVar8].fields.y = uVar6._4_4_;
      pUVar12->m_Items[(int)uVar8].fields.z = fVar9;
    }
    else {
      local_d8._0_8_ = uVar6;
      local_d8.z = fVar9;
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar16,(UnityEngine_Vector3_o *)&local_d8,
                 (MethodInfo_99C850 *)pMVar13->klass->rgctx_data[0xe].method);
    }
    if (pIVar14[1].monitor == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar16 = (__this->fields)._newPositions;
    pUVar18 = UnityEngine_GameObject__get_transform(pIVar14[1].monitor,(MethodInfo *)0x0);
    if (pUVar18 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar17 = UnityEngine_Transform__get_localPosition(local_70,pUVar18,(MethodInfo *)0x0);
    pMVar13 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar16 == (System_Collections_Generic_List_Vector3__o *)0x0) {
      ThrowNullReferenceException();
    }
    uVar7._0_4_ = (pUVar17->fields).x;
    uVar7._4_4_ = (pUVar17->fields).y;
    fVar9 = (pUVar17->fields).z;
    piVar1 = &(pSVar16->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar12 = (pSVar16->fields)._items;
    if (pUVar12 == (UnityEngine_Vector3_array *)0x0) {
      ThrowNullReferenceException();
    }
    uVar8 = (pSVar16->fields)._size;
    if (uVar8 < (uint)pUVar12->max_length) {
      (pSVar16->fields)._size = uVar8 + 1;
      if ((uint)pUVar12->max_length <= uVar8) {
        ThrowIndexOutOfRangeException();
      }
      pUVar12->m_Items[(int)uVar8].fields.x = (float)uVar7;
      pUVar12->m_Items[(int)uVar8].fields.y = uVar7._4_4_;
      pUVar12->m_Items[(int)uVar8].fields.z = fVar9;
    }
    else {
      local_c8[0]._0_8_ = uVar7;
      local_c8[0].z = fVar9;
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar16,(UnityEngine_Vector3_o *)local_c8,
                 (MethodInfo_99C850 *)pMVar13->klass->rgctx_data[0xe].method);
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.TransformScaleCommand$$Execute
// il2cpp: void MapEditor_TransformScaleCommand__Execute (MapEditor_TransformScaleCommand_o* __this, const MethodInfo* method);
// 0x1822002a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18220034c: nop dword ptr [rax]
// asm:   0x182200571: jmp 0x182200350

void MapEditor_TransformScaleCommand__Execute(MapEditor_TransformScaleCommand_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_00;
  System_Collections_Generic_Dictionary_int__ulong__o *__this_01;
  System_Collections_Generic_List_Vector3__o *pSVar3;
  Map_MapScriptBaseObject_o *pMVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o key;
  System_Collections_Generic_List_int__o *pSVar8;
  uint64_t uVar9;
  UnityEngine_Transform_o *pUVar10;
  Unity_Mathematics_float3_o *pUVar11;
  int index;
  Unity_Mathematics_float3_Fields local_e8;
  Unity_Mathematics_float3_Fields local_d8;
  Unity_Mathematics_float3_Fields local_c8;
  UnityEngine_Vector3_Fields local_b8;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Vector3_Fields local_58;
  Unity_Mathematics_float3_o local_48 [4];
  
  if (Il2CppMethodInitialized_18434701b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_18434701b = '\x01';
  }
  pSVar8 = (__this->fields)._ids;
  index = 0;
  if (pSVar8 != (System_Collections_Generic_List_int__o *)0x0) {
    while( true ) {
      if ((pSVar8->fields)._size <= index) {
        return;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this_00 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._ids;
      if (__this_00 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) break;
      __this_01 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                  TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      key = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                      (__this_00,index,
                       (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if (((__this_01 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
          (uVar9 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                             (__this_01,(int32_t)key.fields,
                              (MethodInfo_14156F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
          uVar9 == 0)) || (*(UnityEngine_GameObject_o **)(uVar9 + 0x18) == (UnityEngine_GameObject_o *)0x0))
      break;
      pUVar10 = UnityEngine_GameObject__get_transform
                          (*(UnityEngine_GameObject_o **)(uVar9 + 0x18),(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._newScales;
      if (pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
      uVar1 = *(undefined8 *)(uVar9 + 0x28);
      fVar2 = *(float *)(uVar9 + 0x30);
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_e8,
                 (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      fVar7 = local_e8.z;
      uVar5 = local_e8._0_8_;
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      uVar6 = local_e8._0_8_;
      local_e8.x = (float)uVar5;
      local_e8.y = SUB84(uVar5,4);
      local_d8.x = local_e8.x;
      local_d8.y = local_e8.y;
      local_d8.z = fVar7;
      local_e8._0_8_ = uVar6;
      local_c8._0_8_ = uVar1;
      local_c8.z = fVar2;
      pUVar11 = Unity_Mathematics_float3__op_Multiply
                          (local_48,(Unity_Mathematics_float3_o *)&local_c8,
                           (Unity_Mathematics_float3_o *)&local_d8,(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_Transform_o *)0x0) break;
      local_b8.x = (pUVar11->fields).x;
      local_b8.y = (pUVar11->fields).y;
      local_b8.z = (pUVar11->fields).z;
      UnityEngine_Transform__set_localScale(pUVar10,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._newScales;
      if (pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
      pMVar4 = *(Map_MapScriptBaseObject_o **)(uVar9 + 0x20);
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_a8,
                 (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      if (pMVar4 == (Map_MapScriptBaseObject_o *)0x0) break;
      local_98.x = local_a8.x;
      local_98.y = local_a8.y;
      local_98.z = local_a8.z;
      Map_MapScriptBaseObject__SetScale(pMVar4,(UnityEngine_Vector3_o *)&local_98,(MethodInfo *)0x0);
      if (*(UnityEngine_GameObject_o **)(uVar9 + 0x18) == (UnityEngine_GameObject_o *)0x0) break;
      pUVar10 = UnityEngine_GameObject__get_transform
                          (*(UnityEngine_GameObject_o **)(uVar9 + 0x18),(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._newPositions;
      if ((pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
         (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                    ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_88,
                     (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                     (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item),
         pUVar10 == (UnityEngine_Transform_o *)0x0)) break;
      local_78.x = local_88.x;
      local_78.y = local_88.y;
      local_78.z = local_88.z;
      UnityEngine_Transform__set_localPosition(pUVar10,(UnityEngine_Vector3_o *)&local_78,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._newPositions;
      if (pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
      pMVar4 = *(Map_MapScriptBaseObject_o **)(uVar9 + 0x20);
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_68,
                 (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      if (pMVar4 == (Map_MapScriptBaseObject_o *)0x0) break;
      local_58.x = local_68.x;
      local_58.y = local_68.y;
      local_58.z = local_68.z;
      Map_MapScriptBaseObject__SetPosition(pMVar4,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
      pSVar8 = (__this->fields)._ids;
      index = index + 1;
      if (pSVar8 == (System_Collections_Generic_List_int__o *)0x0) break;
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.TransformScaleCommand$$Unexecute
// il2cpp: void MapEditor_TransformScaleCommand__Unexecute (MapEditor_TransformScaleCommand_o* __this, const MethodInfo* method);
// 0x1822005c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18220066c: nop dword ptr [rax]
// asm:   0x182200891: jmp 0x182200670

void MapEditor_TransformScaleCommand__Unexecute(MapEditor_TransformScaleCommand_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_00;
  System_Collections_Generic_Dictionary_int__ulong__o *__this_01;
  System_Collections_Generic_List_Vector3__o *pSVar3;
  Map_MapScriptBaseObject_o *pMVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o key;
  System_Collections_Generic_List_int__o *pSVar8;
  uint64_t uVar9;
  UnityEngine_Transform_o *pUVar10;
  Unity_Mathematics_float3_o *pUVar11;
  int index;
  Unity_Mathematics_float3_Fields local_e8;
  Unity_Mathematics_float3_Fields local_d8;
  Unity_Mathematics_float3_Fields local_c8;
  UnityEngine_Vector3_Fields local_b8;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Vector3_Fields local_58;
  Unity_Mathematics_float3_o local_48 [4];
  
  if (Il2CppMethodInitialized_18434701c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_18434701c = '\x01';
  }
  pSVar8 = (__this->fields)._ids;
  index = 0;
  if (pSVar8 != (System_Collections_Generic_List_int__o *)0x0) {
    while( true ) {
      if ((pSVar8->fields)._size <= index) {
        return;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this_00 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._ids;
      if (__this_00 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) break;
      __this_01 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                  TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      key = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                      (__this_00,index,
                       (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
      if (((__this_01 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
          (uVar9 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                             (__this_01,(int32_t)key.fields,
                              (MethodInfo_14156F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
          uVar9 == 0)) || (*(UnityEngine_GameObject_o **)(uVar9 + 0x18) == (UnityEngine_GameObject_o *)0x0))
      break;
      pUVar10 = UnityEngine_GameObject__get_transform
                          (*(UnityEngine_GameObject_o **)(uVar9 + 0x18),(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._oldScales;
      if (pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
      uVar1 = *(undefined8 *)(uVar9 + 0x28);
      fVar2 = *(float *)(uVar9 + 0x30);
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_e8,
                 (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      fVar7 = local_e8.z;
      uVar5 = local_e8._0_8_;
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      uVar6 = local_e8._0_8_;
      local_e8.x = (float)uVar5;
      local_e8.y = SUB84(uVar5,4);
      local_d8.x = local_e8.x;
      local_d8.y = local_e8.y;
      local_d8.z = fVar7;
      local_e8._0_8_ = uVar6;
      local_c8._0_8_ = uVar1;
      local_c8.z = fVar2;
      pUVar11 = Unity_Mathematics_float3__op_Multiply
                          (local_48,(Unity_Mathematics_float3_o *)&local_c8,
                           (Unity_Mathematics_float3_o *)&local_d8,(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_Transform_o *)0x0) break;
      local_b8.x = (pUVar11->fields).x;
      local_b8.y = (pUVar11->fields).y;
      local_b8.z = (pUVar11->fields).z;
      UnityEngine_Transform__set_localScale(pUVar10,(UnityEngine_Vector3_o *)&local_b8,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._oldScales;
      if (pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
      pMVar4 = *(Map_MapScriptBaseObject_o **)(uVar9 + 0x20);
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_a8,
                 (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      if (pMVar4 == (Map_MapScriptBaseObject_o *)0x0) break;
      local_98.x = local_a8.x;
      local_98.y = local_a8.y;
      local_98.z = local_a8.z;
      Map_MapScriptBaseObject__SetScale(pMVar4,(UnityEngine_Vector3_o *)&local_98,(MethodInfo *)0x0);
      if (*(UnityEngine_GameObject_o **)(uVar9 + 0x18) == (UnityEngine_GameObject_o *)0x0) break;
      pUVar10 = UnityEngine_GameObject__get_transform
                          (*(UnityEngine_GameObject_o **)(uVar9 + 0x18),(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._oldPositions;
      if ((pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
         (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                    ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_88,
                     (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                     (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item),
         pUVar10 == (UnityEngine_Transform_o *)0x0)) break;
      local_78.x = local_88.x;
      local_78.y = local_88.y;
      local_78.z = local_88.z;
      UnityEngine_Transform__set_localPosition(pUVar10,(UnityEngine_Vector3_o *)&local_78,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._oldPositions;
      if (pSVar3 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
      pMVar4 = *(Map_MapScriptBaseObject_o **)(uVar9 + 0x20);
      System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc___get_Item
                ((UnityEngine_Rendering_ProbeBrickPool_BrickChunkAlloc_o *)&local_68,
                 (System_Collections_Generic_List_ProbeBrickPool_BrickChunkAlloc__o *)pSVar3,index,
                 (MethodInfo_93BF30 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
      if (pMVar4 == (Map_MapScriptBaseObject_o *)0x0) break;
      local_58.x = local_68.x;
      local_58.y = local_68.y;
      local_58.z = local_68.z;
      Map_MapScriptBaseObject__SetPosition(pMVar4,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
      pSVar8 = (__this->fields)._ids;
      index = index + 1;
      if (pSVar8 == (System_Collections_Generic_List_int__o *)0x0) break;
    }
  }
  ThrowNullReferenceException();
}


