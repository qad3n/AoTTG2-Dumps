// Type: Map.MapLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Map/MapLoader.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapLoader.cs
// --------------------------------

// Map.MapLoader.NavMeshBuild$$.ctor
// il2cpp: void Map_MapLoader_NavMeshBuild___ctor (Map_MapLoader_NavMeshBuild_o __this, UnityEngine_AI_NavMeshData_o* data, UnityEngine_AI_NavMeshBuildSettings_o settings, UnityEngine_Bounds_o bounds, const MethodInfo* method);
// 0x599aef0

void Map_MapLoader_NavMeshBuild___ctor
               (Map_MapLoader_NavMeshBuild_o *__this,UnityEngine_AI_NavMeshData_o *data,
               UnityEngine_AI_NavMeshBuildSettings_o settings,UnityEngine_Bounds_o bounds,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  
  (__this->fields).Data = data;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields).Settings.fields.m_BuildHeightMesh = settings.fields.m_BuildHeightMesh;
  (__this->fields).Settings.fields.m_MaxJobWorkers = settings.fields.m_MaxJobWorkers;
  (__this->fields).Settings.fields.m_PreserveTilesOutsideBounds = settings.fields.m_PreserveTilesOutsideBounds
  ;
  (__this->fields).Settings.fields.m_Debug =
       (UnityEngine_AI_NavMeshBuildDebugSettings_o)settings.fields.m_Debug.fields.m_Flags;
  *(undefined3 *)&(__this->fields).Settings.fields.field_0x3d = settings.fields._61_3_;
  (__this->fields).Settings.fields.m_OverrideVoxelSize = settings.fields.m_OverrideVoxelSize;
  (__this->fields).Settings.fields.m_VoxelSize = settings.fields.m_VoxelSize;
  (__this->fields).Settings.fields.m_OverrideTileSize = settings.fields.m_OverrideTileSize;
  (__this->fields).Settings.fields.m_TileSize = settings.fields.m_TileSize;
  (__this->fields).Settings.fields.m_AgentClimb = settings.fields.m_AgentClimb;
  (__this->fields).Settings.fields.m_LedgeDropHeight = settings.fields.m_LedgeDropHeight;
  (__this->fields).Settings.fields.m_MaxJumpAcrossDistance = settings.fields.m_MaxJumpAcrossDistance;
  (__this->fields).Settings.fields.m_MinRegionArea = settings.fields.m_MinRegionArea;
  (__this->fields).Settings.fields.m_AgentTypeID = settings.fields.m_AgentTypeID;
  (__this->fields).Settings.fields.m_AgentRadius = settings.fields.m_AgentRadius;
  (__this->fields).Settings.fields.m_AgentHeight = settings.fields.m_AgentHeight;
  (__this->fields).Settings.fields.m_AgentSlope = settings.fields.m_AgentSlope;
  pUVar1 = &(__this->fields).Bounds;
  (pUVar1->fields).m_Center.fields.x = bounds.fields.m_Center.fields.x;
  (pUVar1->fields).m_Center.fields.y = bounds.fields.m_Center.fields.y;
  *(undefined8 *)&(__this->fields).Bounds.fields.m_Center.fields.z = bounds.fields._8_8_;
  pUVar1 = &(__this->fields).Bounds;
  (pUVar1->fields).m_Extents.fields.y = bounds.fields.m_Extents.fields.y;
  (pUVar1->fields).m_Extents.fields.z = bounds.fields.m_Extents.fields.z;
  return;
}


// Map.MapLoader.<>c$$.cctor
// il2cpp: void Map_MapLoader___c___cctor (const MethodInfo* method);
// 0x599af40

void Map_MapLoader___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545a63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader_c);
    Il2CppMethodInitialized_07545a63 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapLoader_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Map_MapLoader_c->static_fields->__9 = (Map_MapLoader___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader_c->static_fields->__9);
  return;
}


// Map.MapLoader.<>c$$.ctor
// il2cpp: void Map_MapLoader___c___ctor (Map_MapLoader___c_o* __this, const MethodInfo* method);
// 0x599afb0

void Map_MapLoader___c___ctor(Map_MapLoader___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader.<>c$$<LoadObjectsCoroutine>b__50_0
// il2cpp: void Map_MapLoader___c___LoadObjectsCoroutine_b__50_0 (Map_MapLoader___c_o* __this, const MethodInfo* method);
// 0x599afc0
// eh: try 0x599b0b0..0x599b0e0 -> pad 0x599b107 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x599b11f..0x599b124 -> pad 0x599b143 cleanup
// eh: try 0x599b146..0x599b150 -> pad 0x599b158 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x599b105: jmp 0x599b107
// asm:   0x599b107: mov rbx, rax
// asm:   0x599b10a: cmp edx, 1
// asm:   0x599b10d: jne 0x599b146
// asm:   0x599b10f: mov rdi, rbx
// asm:   0x599b112: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x599b117: mov rbx, qword ptr [rax]
// asm:   0x599b11a: mov qword ptr [rsp + 0x18], rbx
// asm:   0x599b11f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599b124: lea rax, [rip + 0x18f480d]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
// asm:   0x599b12b: mov rsi, qword ptr [rax]
// asm:   0x599b12e: mov rdi, rsp
// asm:   0x599b131: call 0x4da2970  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose()
// asm:   0x599b136: test rbx, rbx
// asm:   0x599b139: je 0x599b0f4
// asm:   0x599b13b: mov rdi, rbx
// asm:   0x599b13e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x599b143: mov rbx, rax
// asm:   0x599b146: lea rdi, [rsp + 0x18]
// asm:   0x599b14b: call 0x2fd4a10  ; il2cpp_runtime_helper_02fd4a10()
// asm:   0x599b150: mov rdi, rbx
// asm:   0x599b153: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x599b158: mov rdi, rax
// asm:   0x599b15b: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapLoader___c___LoadObjectsCoroutine_b__50_0(Map_MapLoader___c_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  Il2CppObject *mapObject;
  bool bVar1;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  undefined8 local_30;
  undefined1 *local_28;
  
  if (Il2CppMethodInitialized_07545a64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator);
    Il2CppMethodInitialized_07545a64 = '\x01';
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentValue = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    __this_01 = System_Collections_Generic_Dictionary_int__object___get_Values
                          (__this_00,
                           (MethodInfo_4A0F4E0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values);
    if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator
                (&local_48,__this_01,
                 (MethodInfo_43E8AC0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator)
      ;
      local_30 = 0;
      local_28 = (undefined1 *)&local_48;
      while( true ) {
        bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                          (&local_48,
                           (MethodInfo_4CA2980 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                          );
        mapObject = local_48.fields._currentValue;
        if (!bVar1) break;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        Map_MapLoader__SetParent_58998f0((Map_MapObject_o *)mapObject,(MethodInfo *)0x0);
      }
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                (&local_48,
                 (MethodInfo_4CA2970 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
                );
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader.<>c__DisplayClass50_0$$.ctor
// il2cpp: void Map_MapLoader___c__DisplayClass50_0___ctor (Map_MapLoader___c__DisplayClass50_0_o* __this, const MethodInfo* method);
// 0x599b160

void Map_MapLoader___c__DisplayClass50_0___ctor
               (Map_MapLoader___c__DisplayClass50_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader.<>c__DisplayClass50_0$$<LoadObjectsCoroutine>b__1
// il2cpp: void Map_MapLoader___c__DisplayClass50_0___LoadObjectsCoroutine_b__1 (Map_MapLoader___c__DisplayClass50_0_o* __this, const MethodInfo* method);
// 0x599b170
// eh: try 0x599b2ea..0x599b4d1 -> pad 0x599b4f2 (+11 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x599b4dc..0x599b4e6 -> pad 0x599b54e catch (...) [compiler noexcept guard]
// eh: try 0x599b510..0x599b515 -> pad 0x599b536 cleanup
// eh: try 0x599b539..0x599b546 -> pad 0x599b54e catch (...) [compiler noexcept guard]
// asm: 50 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x599b46d: jmp 0x599b4c4
// asm:   0x599b476: jmp 0x599b47c
// asm:   0x599b478: jmp 0x599b47c
// asm:   0x599b47a: jmp 0x599b47c
// asm:   0x599b47c: mov rbp, rdx
// asm:   0x599b47f: mov rbx, rax
// asm:   0x599b482: cmp ebp, 1
// asm:   0x599b485: jne 0x599b4dc
// asm:   0x599b487: mov rdi, rbx
// asm:   0x599b48a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x599b48f: mov rbx, qword ptr [rax]
// asm:   0x599b492: mov qword ptr [rsp + 0x70], rbx
// asm:   0x599b497: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599b49c: jmp 0x599b452
// asm:   0x599b4c4: mov rdi, rbx
// asm:   0x599b4c7: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x599b4d6: mov rbp, rdx
// asm:   0x599b4d9: mov rbx, rax
// asm:   0x599b4dc: lea rdi, [rsp + 0x70]
// asm:   0x599b4e1: call 0x2fd4a40  ; il2cpp_runtime_helper_02fd4a40()
// asm:   0x599b4e6: jmp 0x599b4f8
// asm:   0x599b4e8: jmp 0x599b4f2
// asm:   0x599b4ea: jmp 0x599b4f2
// asm:   0x599b4ec: jmp 0x599b4f2
// asm:   0x599b4ee: jmp 0x599b4f2
// asm:   0x599b4f0: jmp 0x599b4f2
// asm:   0x599b4f2: mov rbp, rdx
// asm:   0x599b4f5: mov rbx, rax
// asm:   0x599b4f8: cmp ebp, 1
// asm:   0x599b4fb: jne 0x599b539
// asm:   0x599b4fd: mov rdi, rbx
// asm:   0x599b500: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x599b505: mov rbx, qword ptr [rax]
// asm:   0x599b508: mov qword ptr [rsp + 0x80], rbx
// asm:   0x599b510: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599b515: lea rax, [rip + 0x18f2cdc]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x599b51c: mov rsi, qword ptr [rax]
// asm:   0x599b51f: lea rdi, [rsp + 0x20]
// asm:   0x599b524: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x599b529: test rbx, rbx
// asm:   0x599b52c: je 0x599b4b2
// asm:   0x599b52e: mov rdi, rbx
// asm:   0x599b531: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x599b536: mov rbx, rax
// asm:   0x599b539: lea rdi, [rsp + 0x80]
// asm:   0x599b541: call 0x2fd4a70  ; il2cpp_runtime_helper_02fd4a70()
// asm:   0x599b546: mov rdi, rbx
// asm:   0x599b549: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x599b54e: mov rdi, rax
// asm:   0x599b551: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapLoader___c__DisplayClass50_0___LoadObjectsCoroutine_b__1
               (Map_MapLoader___c__DisplayClass50_0_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Map_MapLoader_o *__this_00;
  System_Collections_Generic_List_Bounds__o *__this_01;
  System_Collections_Generic_List_AsyncOperation__o *__this_02;
  UnityEngine_AsyncOperation_array *pUVar3;
  UnityEngine_Bounds_o bounds;
  MethodInfo *pMVar4;
  undefined4 agentID;
  bool bVar5;
  System_Collections_Generic_List_int__o *__this_03;
  UnityEngine_AsyncOperation_o *item;
  undefined1 auStack_c8 [32];
  System_Collections_Generic_List_Enumerator_T__o SStack_a8;
  int32_t iStack_90;
  int32_t iStack_8c;
  System_Collections_Generic_List_T__o *pSStack_88;
  undefined8 uStack_78;
  System_Collections_Generic_List_Enumerator_T__o *pSStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  System_Collections_Generic_List_Enumerator_T__o SStack_58;
  undefined8 uStack_40;
  System_Collections_Generic_List_T__o *pSStack_38;
  
  if (Il2CppMethodInitialized_07545a65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Bounds_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Bounds_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Bounds_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AsyncOperation_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Bounds_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07545a65 = '\x01';
  }
  SStack_58.fields._current = (Il2CppObject *)0x0;
  uStack_40._0_4_ = 0;
  uStack_40._4_4_ = 0;
  SStack_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_58.fields._index = 0;
  SStack_58.fields._version = 0;
  pSStack_38 = (System_Collections_Generic_List_T__o *)0x0;
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (Map_MapLoader_o *)0x0) {
    Map_MapLoader__ResetSources(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    __this_03 = Utility_Util__GetAllTitanAgentIds((MethodInfo *)0x0);
    if (__this_03 != (System_Collections_Generic_List_int__o *)0x0) {
      System_Collections_Generic_List_int___GetEnumerator
                (&SStack_a8,__this_03,
                 (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
      auStack_c8._16_8_ = SStack_a8.fields._current;
      auStack_c8._0_8_ = SStack_a8.fields._list;
      auStack_c8._8_4_ = SStack_a8.fields._index;
      auStack_c8._12_4_ = SStack_a8.fields._version;
      uStack_68 = 0;
      puStack_60 = auStack_c8;
      do {
        bVar5 = System_Collections_Generic_List_Enumerator_int___MoveNext
                          ((System_Collections_Generic_List_Enumerator_int__o *)auStack_c8,
                           (MethodInfo_4C3B4A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
        if (!bVar5) {
          System_Collections_Generic_List_Enumerator_int___Dispose
                    ((System_Collections_Generic_List_Enumerator_int__o *)auStack_c8,
                     (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
          return;
        }
        agentID = auStack_c8._16_4_;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        __this_01 = TypeInfo_Map_MapLoader->static_fields->_navMeshBounds;
        if (__this_01 == (System_Collections_Generic_List_Bounds__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_Bounds___GetEnumerator
                  (&SStack_a8,__this_01,
                   (MethodInfo_51E0360 *)MethodInfo_System_Collections_Generic_List_Bounds_GetEnumerator);
        pSStack_38 = pSStack_88;
        SStack_58.fields._current = SStack_a8.fields._current;
        uStack_40._0_4_ = iStack_90;
        uStack_40._4_4_ = iStack_8c;
        SStack_58.fields._list = SStack_a8.fields._list;
        SStack_58.fields._index = SStack_a8.fields._index;
        SStack_58.fields._version = SStack_a8.fields._version;
        uStack_78 = 0;
        pSStack_70 = &SStack_58;
        while (bVar5 = System_Collections_Generic_List_Enumerator_Bounds___MoveNext
                                 (&SStack_58,
                                  (MethodInfo_4C29890 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_Bounds_MoveNext),
              bVar5) {
          __this_02 = (__this->fields).operations;
          SStack_a8.fields._current = (Il2CppObject *)pSStack_38;
          SStack_a8.fields._list = (System_Collections_Generic_List_T__o *)SStack_58.fields._current;
          SStack_a8.fields._index = (int32_t)uStack_40;
          SStack_a8.fields._version = uStack_40._4_4_;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          bounds.fields.m_Center.fields.z = (float)SStack_a8.fields._index;
          bounds.fields.m_Extents.fields.x = (float)SStack_a8.fields._version;
          bounds.fields.m_Center.fields._0_8_ = SStack_a8.fields._list;
          bounds.fields.m_Extents.fields._4_8_ = SStack_a8.fields._current;
          item = Map_MapLoader__CreateNavMeshSurface(agentID,bounds,3,(MethodInfo *)0x0);
          pMVar4 = MethodInfo_System_Collections_Generic_List_AsyncOperation_Add;
          if (__this_02 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
label_0599b46f:
            ThrowNullReferenceException();
          }
          piVar1 = &(__this_02->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (__this_02->fields)._items;
          if (pUVar3 == (UnityEngine_AsyncOperation_array *)0x0) goto label_0599b46f;
          uVar2 = (__this_02->fields)._size;
          if (uVar2 < (uint)pUVar3->max_length) {
            (__this_02->fields)._size = uVar2 + 1;
            pUVar3->m_Items[(int)uVar2] = item;
            Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)item,
                       (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
          }
        }
        System_Collections_Generic_List_Enumerator_Bounds___Dispose
                  (&SStack_58,
                   (MethodInfo_4C29880 *)MethodInfo_System_Collections_Generic_List_Enumerator_Bounds_Dispose)
        ;
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader.<>c__DisplayClass54_0$$.ctor
// il2cpp: void Map_MapLoader___c__DisplayClass54_0___ctor (Map_MapLoader___c__DisplayClass54_0_o* __this, const MethodInfo* method);
// 0x599b560

void Map_MapLoader___c__DisplayClass54_0___ctor
               (Map_MapLoader___c__DisplayClass54_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader.<>c__DisplayClass54_0$$<CollectNavMeshSources>b__0
// il2cpp: bool Map_MapLoader___c__DisplayClass54_0___CollectNavMeshSources_b__0 (Map_MapLoader___c__DisplayClass54_0_o* __this, UnityEngine_AI_NavMeshBuildSource_o source, const MethodInfo* method);
// 0x599b570

bool Map_MapLoader___c__DisplayClass54_0___CollectNavMeshSources_b__0
               (Map_MapLoader___c__DisplayClass54_0_o *__this,UnityEngine_AI_NavMeshBuildSource_o source,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *item;
  
  if (Il2CppMethodInitialized_07545a66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_GameObject_Contains);
    Il2CppMethodInitialized_07545a66 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).staticObjects;
  __this_01 = UnityEngine_AI_NavMeshBuildSource__get_component(&source,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_Component_o *)0x0) {
    item = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar1 = System_Collections_Generic_HashSet_object___Contains
                        (__this_00,(Il2CppObject *)item,
                         (MethodInfo_4FB3720 *)
                         MethodInfo_System_Collections_Generic_HashSet_GameObject_Contains);
      return bVar1;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader.<>c__DisplayClass57_0$$.ctor
// il2cpp: void Map_MapLoader___c__DisplayClass57_0___ctor (Map_MapLoader___c__DisplayClass57_0_o* __this, const MethodInfo* method);
// 0x599b5e0

void Map_MapLoader___c__DisplayClass57_0___ctor
               (Map_MapLoader___c__DisplayClass57_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader.<>c__DisplayClass57_0$$<RemoveNavMeshSources>b__0
// il2cpp: bool Map_MapLoader___c__DisplayClass57_0___RemoveNavMeshSources_b__0 (Map_MapLoader___c__DisplayClass57_0_o* __this, UnityEngine_AI_NavMeshBuildSource_o source, const MethodInfo* method);
// 0x599b5f0

bool Map_MapLoader___c__DisplayClass57_0___RemoveNavMeshSources_b__0
               (Map_MapLoader___c__DisplayClass57_0_o *__this,UnityEngine_AI_NavMeshBuildSource_o source,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  UnityEngine_Component_o *item;
  
  if (Il2CppMethodInitialized_07545a67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Component_Contains);
    Il2CppMethodInitialized_07545a67 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).components;
  item = UnityEngine_AI_NavMeshBuildSource__get_component(&source,(MethodInfo *)0x0);
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_HashSet_object___Contains
                    (__this_00,(Il2CppObject *)item,
                     (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_Component_Contains);
  return bVar1;
}


// Map.MapLoader.<>c__DisplayClass80_0$$.ctor
// il2cpp: void Map_MapLoader___c__DisplayClass80_0___ctor (Map_MapLoader___c__DisplayClass80_0_o* __this, const MethodInfo* method);
// 0x599b650

void Map_MapLoader___c__DisplayClass80_0___ctor
               (Map_MapLoader___c__DisplayClass80_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader.<>c__DisplayClass80_0$$<SetMaterial>b__0
// il2cpp: bool Map_MapLoader___c__DisplayClass80_0___SetMaterial_b__0 (Map_MapLoader___c__DisplayClass80_0_o* __this, UnityEngine_Renderer_o* r, const MethodInfo* method);
// 0x599b660

bool Map_MapLoader___c__DisplayClass80_0___SetMaterial_b__0
               (Map_MapLoader___c__DisplayClass80_0_o *__this,UnityEngine_Renderer_o *r,MethodInfo *method)

{
  UnityEngine_GameObject_o *ownerGo;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545a68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a68 = '\x01';
  }
  ownerGo = (__this->fields).go;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  bVar1 = Map_MapLoader__RendererBelongsToMapObject(r,ownerGo,(MethodInfo *)0x0);
  return bVar1;
}


// Map.MapLoader.<GenerateNavMesh>d__63$$MoveNext
// il2cpp: void Map_MapLoader__GenerateNavMesh_d__63__MoveNext (Map_MapLoader__GenerateNavMesh_d__63_o __this, const MethodInfo* method);
// 0x599b6c0
// eh: try 0x599b828..0x599bc86 -> pad 0x599bca4 (+26 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x599bc8c..0x599bc96 -> pad 0x599bfb0 catch (...) [compiler noexcept guard]
// eh: try 0x599bcd5..0x599bcdc -> pad 0x599bce1 catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x599bce7..0x599bcf4 -> pad 0x599bfb0 catch (...) [compiler noexcept guard]
// eh: try 0x599bd2b..0x599be2d -> pad 0x599becf (+5 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x599be4e..0x599be53 -> pad 0x599bec4 catch Il2CppExceptionWrapper, cleanup
// eh: try 0x599beb3..0x599beb8 -> pad 0x599becf catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x599beb8..0x599bec0 -> pad 0x599bec4 catch Il2CppExceptionWrapper, cleanup
// eh: try 0x599beec..0x599bef1 -> pad 0x599bef6 catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x599befc..0x599bf06 -> pad 0x599bfb0 catch (...) [compiler noexcept guard]
// eh: try 0x599bf1a..0x599bfa0 -> pad 0x599bfa0 (+1 call sites) cleanup
// eh: try 0x599bfa3..0x599bfa8 -> pad 0x599bfb0 catch (...) [compiler noexcept guard]
// asm: 134 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x599b8fd: nop dword ptr [rax]
// asm:   0x599ba00: jmp 0x599bb55
// asm:   0x599bb1c: jmp 0x599bb28
// asm:   0x599bb1e: jmp 0x599bb28
// asm:   0x599bb20: jmp 0x599bb28
// asm:   0x599bb22: jmp 0x599bb28
// asm:   0x599bb24: jmp 0x599bb28
// asm:   0x599bb26: jmp 0x599bb28
// asm:   0x599bb28: mov rbp, rdx
// asm:   0x599bb2b: cmp ebp, 1
// asm:   0x599bb2e: jne 0x599bc89
// asm:   0x599bb34: mov rdi, rax
// asm:   0x599bb37: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x599bb3c: mov rbp, qword ptr [rax]
// asm:   0x599bb3f: mov qword ptr [rsp + 0x30], rbp
// asm:   0x599bb44: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599bb49: xor ecx, ecx
// asm:   0x599bb4b: jmp 0x599b9c5
// asm:   0x599bc11: jmp 0x599bc30
// asm:   0x599bc13: mov qword ptr [rsp + 0x30], 0
// asm:   0x599bc1c: lea rax, [rsp + 0x1c]
// asm:   0x599bc21: mov qword ptr [rsp + 0x38], rax
// asm:   0x599bc26: lea rax, [rsp + 0x20]
// asm:   0x599bc2b: mov qword ptr [rsp + 0x40], rax
// asm:   0x599bc67: mov rdi, rbp
// asm:   0x599bc6a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x599bc86: mov rbp, rdx
// asm:   0x599bc89: mov r14, rax
// asm:   0x599bc8c: lea rdi, [rsp + 0x30]
// asm:   0x599bc91: call 0x2fd4aa0  ; il2cpp_runtime_helper_02fd4aa0()
// asm:   0x599bc96: jmp 0x599bcb8
// asm:   0x599bc98: jmp 0x599bcf9
// asm:   0x599bc9a: jmp 0x599bcf9
// asm:   0x599bc9c: jmp 0x599bcf9
// asm:   0x599bc9e: jmp 0x599bcf9
// asm:   0x599bca0: jmp 0x599bcf9
// asm:   0x599bca2: jmp 0x599bcf9
// asm:   0x599bca4: jmp 0x599bcf9
// asm:   0x599bca6: jmp 0x599bcf9
// asm:   0x599bca8: jmp 0x599bcb2
// asm:   0x599bcaa: jmp 0x599bcb2
// asm:   0x599bcac: jmp 0x599bcb2
// asm:   0x599bcae: jmp 0x599bcb2
// asm:   0x599bcb0: jmp 0x599bcb2
// asm:   0x599bcb2: mov rbp, rdx
// asm:   0x599bcb5: mov r14, rax
// asm:   0x599bcb8: cmp ebp, 1
// asm:   0x599bcbb: jne 0x599bce7
// asm:   0x599bcbd: mov rdi, r14
// asm:   0x599bcc0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x599bcc5: mov rcx, qword ptr [rax]
// asm:   0x599bcc8: mov qword ptr [rsp + 0x68], rcx
// asm:   0x599bccd: mov qword ptr [rsp + 0xa8], rcx
// asm:   0x599bcd5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599bcda: xor ecx, ecx
// asm:   0x599bcdc: jmp 0x599bb55
// asm:   0x599bce1: mov rbp, rdx
// asm:   0x599bce4: mov r14, rax
// asm:   0x599bce7: lea rdi, [rsp + 0xa8]
// asm:   0x599bcef: call 0x2fd4ad0  ; il2cpp_runtime_helper_02fd4ad0()
// asm:   0x599bcf4: jmp 0x599bf06
// asm:   0x599bcf9: mov rbp, rdx
// asm:   0x599bcfc: mov r14, rax
// asm:   0x599bcff: jmp 0x599bf06
// asm:   0x599bd29: jmp 0x599bd51
// asm:   0x599bd8a: mov rdi, qword ptr [rsp + 0x28]
// asm:   0x599bd8f: test rdi, rdi
// asm:   0x599bd92: je 0x599bc5d
// asm:   0x599beb8: mov rdi, rbx
// asm:   0x599bebb: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x599bec0: jmp 0x599becf
// asm:   0x599bec2: jmp 0x599becf
// asm:   0x599bec4: jmp 0x599bcf9
// asm:   0x599bec9: jmp 0x599becf
// asm:   0x599becb: jmp 0x599becf
// asm:   0x599becd: jmp 0x599becf
// asm:   0x599becf: mov rbp, rdx
// asm:   0x599bed2: mov r14, rax
// asm:   0x599bed5: cmp ebp, 1
// asm:   0x599bed8: jne 0x599befc
// asm:   0x599beda: mov rdi, r14
// asm:   0x599bedd: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x599bee2: mov rbx, qword ptr [rax]
// asm:   0x599bee5: mov qword ptr [rsp + 0x30], rbx
// asm:   0x599beea: xor ebp, ebp
// asm:   0x599beec: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599bef1: jmp 0x599be34
// asm:   0x599bef6: mov rbp, rdx
// asm:   0x599bef9: mov r14, rax
// asm:   0x599befc: lea rdi, [rsp + 0x30]
// asm:   0x599bf01: call 0x2fd4b00  ; il2cpp_runtime_helper_02fd4b00()
// asm:   0x599bf06: cmp ebp, 1
// asm:   0x599bf09: jne 0x599bfa8
// asm:   0x599bf0f: mov rdi, r14
// asm:   0x599bf12: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x599bf17: mov rbx, rax
// asm:   0x599bf1a: lea rdi, [rip + 0x18dc19f]  ; TypeInfo_System_Exception
// asm:   0x599bf21: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x599bf26: mov rcx, qword ptr [rbx]
// asm:   0x599bf29: mov rsi, qword ptr [rcx]
// asm:   0x599bf2c: mov rdi, rax
// asm:   0x599bf2f: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x599bf34: test al, al
// asm:   0x599bf36: je 0x599bf7f
// asm:   0x599bf38: mov rbx, qword ptr [rbx]
// asm:   0x599bf3b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599bf40: mov rbp, qword ptr [rsp + 0x20]
// asm:   0x599bf45: mov dword ptr [rbp], 0xfffffffe
// asm:   0x599bf4c: add rbp, 8
// asm:   0x599bf50: lea rdi, [rip + 0x18d9ae1]  ; TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder
// asm:   0x599bf57: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x599bf5c: cmp dword ptr [rax + 0xe4], 0
// asm:   0x599bf63: jne 0x599bf6d
// asm:   0x599bf65: mov rdi, rax
// asm:   0x599bf68: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x599bf6d: mov rdi, rbp
// asm:   0x599bf70: mov rsi, rbx
// asm:   0x599bf73: xor edx, edx
// asm:   0x599bf75: call 0x54ca610  ; System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetException()
// asm:   0x599bf7a: jmp 0x599bea1
// asm:   0x599bf7f: mov edi, 8
// asm:   0x599bf84: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x599bf89: mov rcx, qword ptr [rbx]
// asm:   0x599bf8c: mov qword ptr [rax], rcx
// asm:   0x599bf8f: lea rsi, [rip + 0x149156a]
// asm:   0x599bf96: mov rdi, rax
// asm:   0x599bf99: xor edx, edx
// asm:   0x599bf9b: call 0x6e255c0  ; __cxa_throw()
// asm:   0x599bfa0: mov r14, rax
// asm:   0x599bfa3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599bfa8: mov rdi, r14
// asm:   0x599bfab: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x599bfb0: mov rdi, rax
// asm:   0x599bfb3: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapLoader__GenerateNavMesh_d__63__MoveNext
               (Map_MapLoader__GenerateNavMesh_d__63_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  uint32_t uVar3;
  Map_MapLoader_o *__this_00;
  System_Collections_Generic_List_Bounds__o *__this_01;
  UnityEngine_AsyncOperation_array *pUVar4;
  UnityEngine_Bounds_o bounds;
  UnityEngine_Bounds_o bounds_00;
  Il2CppClass_1 *pIVar5;
  MethodInfo *pMVar6;
  Il2CppClass *pIVar7;
  long lVar8;
  undefined4 agentID;
  bool bVar9;
  System_Collections_Generic_List_int__o *__this_02;
  System_Collections_Generic_List_AsyncOperation__o *__this_03;
  UnityEngine_AsyncOperation_o *pUVar10;
  UnityEngine_Awaitable_o *__this_04;
  int iVar11;
  int local_fc;
  Il2CppObject local_f8;
  undefined1 local_e8 [16];
  UnityEngine_AsyncOperation_o *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  int local_b4;
  long local_b0;
  Il2CppObject *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_88 [32];
  int *piStack_68;
  UnityEngine_AsyncOperation_o *local_60;
  Il2CppObject local_58;
  Il2CppObject *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_f8.klass = (Il2CppClass *)__this;
  if (Il2CppMethodInitialized_07545a69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitOnCompleted_Awaitable_Awaiter_MapLoa
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Bounds_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Bounds_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Bounds_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AsyncOperation_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AsyncOperation_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Bounds_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AsyncOperation_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AsyncOperation);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07545a69 = '\x01';
  }
  local_88._0_8_ = (Il2CppClass *)0x0;
  local_88._8_8_ = (int *)0x0;
  local_88._16_8_ = (Il2CppObject *)0x0;
  local_48 = (Il2CppObject *)0x0;
  uStack_40 = 0;
  local_58.klass = (Il2CppClass *)0x0;
  local_58.monitor = (int *)0x0;
  local_38 = 0;
  local_f8.monitor = (UnityEngine_Awaitable_o *)0x0;
  local_fc = (__this->fields).__1__state;
  if (local_fc != 0) {
    __this_00 = (__this->fields).__4__this;
    if (__this_00 == (Map_MapLoader_o *)0x0) {
      ThrowNullReferenceException();
    }
    Map_MapLoader__ResetSources(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    __this_02 = Utility_Util__GetAllTitanAgentIds((MethodInfo *)0x0);
    __this_03 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AsyncOperation);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_03,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_AsyncOperation_ctor);
    if (__this_02 == (System_Collections_Generic_List_int__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_int___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_e8,__this_02,
               (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    local_88._16_8_ = local_d8;
    local_88._0_8_ = local_e8._0_8_;
    local_88._8_8_ = local_e8._8_8_;
    local_88._24_8_ = (System_Action_AsyncOperation__o *)0x0;
    piStack_68 = &local_fc;
    local_60 = (UnityEngine_AsyncOperation_o *)local_88;
    local_b0 = 0;
    do {
      bVar9 = System_Collections_Generic_List_Enumerator_int___MoveNext
                        ((System_Collections_Generic_List_Enumerator_int__o *)local_88,
                         (MethodInfo_4C3B4A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
      if (!bVar9) {
        iVar11 = 7;
        break;
      }
      agentID = local_88._16_4_;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this_01 = TypeInfo_Map_MapLoader->static_fields->_navMeshBounds;
      if (__this_01 == (System_Collections_Generic_List_Bounds__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_Bounds___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_e8,__this_01,
                 (MethodInfo_51E0360 *)MethodInfo_System_Collections_Generic_List_Bounds_GetEnumerator);
      local_38 = local_c8;
      local_48 = (Il2CppObject *)local_d8;
      uStack_40 = uStack_d0;
      local_58.klass = (Il2CppClass *)local_e8._0_8_;
      local_58.monitor = (void *)local_e8._8_8_;
      local_e8._0_8_ = (Il2CppClass *)0x0;
      local_e8._8_8_ = &local_fc;
      local_d8 = (UnityEngine_AsyncOperation_o *)&local_58;
      if (__this_03 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
        bVar9 = System_Collections_Generic_List_Enumerator_Bounds___MoveNext
                          ((System_Collections_Generic_List_Enumerator_T__o *)&local_58,
                           (MethodInfo_4C29890 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_Bounds_MoveNext);
        if (bVar9) {
          local_98 = local_38;
          local_a8 = local_48;
          uStack_a0 = uStack_40;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          bounds_00.fields.m_Center.fields.z = (float)(undefined4)uStack_a0;
          bounds_00.fields.m_Extents.fields.x = (float)uStack_a0._4_4_;
          bounds_00.fields.m_Center.fields._0_8_ = local_a8;
          bounds_00.fields.m_Extents.fields.y = (float)(undefined4)local_98;
          bounds_00.fields.m_Extents.fields.z = (float)local_98._4_4_;
          Map_MapLoader__CreateNavMeshSurface(agentID,bounds_00,6,(MethodInfo *)0x0);
label_0599bb12:
          ThrowNullReferenceException();
        }
      }
      else {
        while (bVar9 = System_Collections_Generic_List_Enumerator_Bounds___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_T__o *)&local_58,
                                  (MethodInfo_4C29890 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_Bounds_MoveNext),
              bVar9) {
          local_98 = local_38;
          local_a8 = local_48;
          uStack_a0 = uStack_40;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          bounds.fields.m_Center.fields.z = (float)(undefined4)uStack_a0;
          bounds.fields.m_Extents.fields.x = (float)uStack_a0._4_4_;
          bounds.fields.m_Center.fields._0_8_ = local_a8;
          bounds.fields.m_Extents.fields.y = (float)(undefined4)local_98;
          bounds.fields.m_Extents.fields.z = (float)local_98._4_4_;
          pUVar10 = Map_MapLoader__CreateNavMeshSurface(agentID,bounds,6,(MethodInfo *)0x0);
          pMVar6 = MethodInfo_System_Collections_Generic_List_AsyncOperation_Add;
          piVar1 = &(__this_03->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar4 = (__this_03->fields)._items;
          if (pUVar4 == (UnityEngine_AsyncOperation_array *)0x0) goto label_0599bb12;
          uVar2 = (__this_03->fields)._size;
          if (uVar2 < (uint)pUVar4->max_length) {
            (__this_03->fields)._size = uVar2 + 1;
            pUVar4->m_Items[(int)uVar2] = pUVar10;
            Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pUVar10,
                       (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
          }
        }
      }
      iVar11 = 3;
      if (local_fc < 0) {
        local_b4 = 3;
        System_Collections_Generic_List_Enumerator_Bounds___Dispose
                  ((System_Collections_Generic_List_Enumerator_T__o *)&local_58,
                   (MethodInfo_4C29880 *)MethodInfo_System_Collections_Generic_List_Enumerator_Bounds_Dispose)
        ;
        iVar11 = local_b4;
      }
    } while ((iVar11 == 3) || (iVar11 == 0));
    lVar8 = local_b0;
    if (local_fc < 0) {
      System_Collections_Generic_List_Enumerator_int___Dispose
                ((System_Collections_Generic_List_Enumerator_int__o *)local_88,
                 (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    }
    if (lVar8 != 0) {
      il2cpp_codegen_rethrow(lVar8);
    }
    if ((iVar11 != 7) && (iVar11 != 0)) {
      return;
    }
    if (__this_03 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)(local_88 + 0x18),
               (System_Collections_Generic_List_object__o *)__this_03,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_AsyncOperation_GetEnumerator);
    local_d8 = local_60;
    local_e8._0_8_ = local_88._24_8_;
    local_e8._8_8_ = piStack_68;
    *(UnityEngine_AsyncOperation_o **)&((local_f8.klass)->_1).this_arg.bits = local_60;
    (((System_Collections_Generic_List_Enumerator_AsyncOperation__o *)&((local_f8.klass)->_1).byval_arg.bits)
    ->fields)._list = (System_Collections_Generic_List_T__o *)local_88._24_8_;
    ((local_f8.klass)->_1).this_arg.data = piStack_68;
    Il2CppCodeGenWriteBarrier((void **)&((local_f8.klass)->_1).byval_arg.bits);
    local_e8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_e8._8_8_ = &local_fc;
    local_d8 = (UnityEngine_AsyncOperation_o *)&local_f8;
    if (local_fc != 0) goto label_0599bd9f;
  }
  local_d8 = (UnityEngine_AsyncOperation_o *)&local_f8;
  local_e8._8_8_ = &local_fc;
  local_e8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_f8.monitor =
       (((UnityEngine_Awaitable_Awaiter_o *)&((local_f8.klass)->_1).element_class)->fields)._awaited;
  (((UnityEngine_Awaitable_Awaiter_o *)&((local_f8.klass)->_1).element_class)->fields)._awaited =
       (UnityEngine_Awaitable_o *)0x0;
  local_fc = -1;
  *(int32_t *)&((local_f8.klass)->_1).image = -1;
  do {
    if (local_f8.monitor == (UnityEngine_Awaitable_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Awaitable__PropagateExceptionAndRelease(local_f8.monitor,(MethodInfo *)0x0);
label_0599bd9f:
    bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)
                       &((local_f8.klass)->_1).byval_arg.bits,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_MoveNext);
    if (!bVar9) {
      iVar11 = 0xd;
      goto label_0599be32;
    }
    pUVar10 = *(UnityEngine_AsyncOperation_o **)&((local_f8.klass)->_1).this_arg.bits;
    if (Il2CppMethodInitialized_07545bc3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Awaitable);
      Il2CppMethodInitialized_07545bc3 = '\x01';
      uVar3 = (TypeInfo_UnityEngine_Awaitable->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar3 = (TypeInfo_UnityEngine_Awaitable->_2).cctor_finished_or_no_cctor;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Awaitable);
    }
    __this_04 = (UnityEngine_Awaitable_o *)il2cpp_runtime_helper_059bbd70(pUVar10,0,0);
    if (__this_04 == (UnityEngine_Awaitable_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_f8.monitor = (void *)UnityEngine_Awaitable__GetAwaiter(__this_04,(MethodInfo *)0x0);
    bVar9 = UnityEngine_Awaitable_Awaiter__get_IsCompleted
                      ((UnityEngine_Awaitable_Awaiter_o *)&local_f8.monitor,(MethodInfo *)0x0);
  } while (bVar9);
  local_fc = 0;
  *(int32_t *)&((local_f8.klass)->_1).image = 0;
  (((UnityEngine_Awaitable_Awaiter_o *)&((local_f8.klass)->_1).element_class)->fields)._awaited =
       local_f8.monitor;
  Il2CppCodeGenWriteBarrier((void **)&((local_f8.klass)->_1).element_class);
  pIVar7 = local_f8.klass;
  if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitOnCompleted_Awaitable_Awaiter__MapLoader__GenerateNavMesh_d__63_
            ((System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o *)&(pIVar7->_1).gc_desc,
             (UnityEngine_Awaitable_Awaiter_o *)&local_f8.monitor,
             (Map_MapLoader__GenerateNavMesh_d__63_o *)local_f8.klass,
             (MethodInfo_33FF6D0 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitOnCompleted_Awaitable_Awaiter_MapLoa
            );
  iVar11 = 0xc;
label_0599be32:
  if (local_fc < 0) {
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&((local_f8.klass)->_1).byval_arg.bits,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_Dispose);
  }
  if ((iVar11 == 0xd) || (iVar11 == 0)) {
    (((System_Collections_Generic_List_Enumerator_AsyncOperation__o *)&((local_f8.klass)->_1).byval_arg.bits)
    ->fields)._list = (System_Collections_Generic_List_T__o *)0x0;
    ((local_f8.klass)->_1).this_arg.data = (void *)0x0;
    *(UnityEngine_AsyncOperation_o **)&((local_f8.klass)->_1).this_arg.bits =
         (UnityEngine_AsyncOperation_o *)0x0;
    *(int32_t *)&((local_f8.klass)->_1).image = -2;
    pIVar5 = &(local_f8.klass)->_1;
    if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult
              ((System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o *)&pIVar5->gc_desc,(MethodInfo *)0x0)
    ;
  }
  return;
}


// Map.MapLoader.<GenerateNavMesh>d__63$$SetStateMachine
// il2cpp: void Map_MapLoader__GenerateNavMesh_d__63__SetStateMachine (Map_MapLoader__GenerateNavMesh_d__63_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x599bfc0

void Map_MapLoader__GenerateNavMesh_d__63__SetStateMachine
               (Map_MapLoader__GenerateNavMesh_d__63_o *__this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545a6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
    Il2CppMethodInitialized_07545a6a = '\x01';
  }
  if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetStateMachine
            (&(__this->fields).__t__builder,stateMachine,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__50$$.ctor
// il2cpp: void Map_MapLoader__LoadObjectsCoroutine_d__50___ctor (Map_MapLoader__LoadObjectsCoroutine_d__50_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x599c020

void Map_MapLoader__LoadObjectsCoroutine_d__50___ctor
               (Map_MapLoader__LoadObjectsCoroutine_d__50_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__50$$System.IDisposable.Dispose
// il2cpp: void Map_MapLoader__LoadObjectsCoroutine_d__50__System_IDisposable_Dispose (Map_MapLoader__LoadObjectsCoroutine_d__50_o* __this, const MethodInfo* method);
// 0x599c040

void Map_MapLoader__LoadObjectsCoroutine_d__50__System_IDisposable_Dispose
               (Map_MapLoader__LoadObjectsCoroutine_d__50_o *__this,MethodInfo *method)

{
  switch((__this->fields).__1__state) {
  case -4:
  case 2:
    if (Il2CppMethodInitialized_07545a6d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
      Il2CppMethodInitialized_07545a6d = '\x01';
    }
    break;
  case -3:
  case 1:
    if (Il2CppMethodInitialized_07545a6c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      Il2CppMethodInitialized_07545a6c = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap5,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    return;
  default:
    return;
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap8,
             (MethodInfo_4C45C40 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
  return;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__50$$MoveNext
// il2cpp: bool Map_MapLoader__LoadObjectsCoroutine_d__50__MoveNext (Map_MapLoader__LoadObjectsCoroutine_d__50_o* __this, const MethodInfo* method);
// 0x599c0e0
// eh: try 0x599c38f..0x599c5d8 -> pad 0x599cdcc (+11 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x599c5e9..0x599c608 -> pad 0x599ce45 catch Il2CppExceptionWrapper, cleanup
// eh: try 0x599c62c..0x599c6b7 -> pad 0x599cdf4 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x599c6d3..0x599c6d8 -> pad 0x599ce45 catch Il2CppExceptionWrapper, cleanup
// eh: try 0x599c6f0..0x599c757 -> pad 0x599cda6 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x599c773..0x599c7a3 -> pad 0x599ce45 catch Il2CppExceptionWrapper, cleanup
// eh: try 0x599c7fd..0x599c9f8 -> pad 0x599cdb6 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x599ca49..0x599ca4e -> pad 0x599ce45 catch Il2CppExceptionWrapper, cleanup
// eh: try 0x599ca7b..0x599caea -> pad 0x599cdc6 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x599cb27..0x599cbbe -> pad 0x599ce45 catch Il2CppExceptionWrapper, cleanup
// eh: try 0x599cbbe..0x599ccca -> pad 0x599cda4 (+11 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x599ccca..0x599cccf -> pad 0x599ce45 catch Il2CppExceptionWrapper, cleanup
// eh: try 0x599cccf..0x599cd60 -> pad 0x599cdc0 (+28 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x599ce10..0x599ce15 -> pad 0x599ce30 cleanup
// eh: try 0x599ce33..0x599ce3d -> pad 0x599d5d4 catch (...) [compiler noexcept guard]
// eh: try 0x599ce62..0x599cf11 -> pad 0x599d48e (+5 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x599cf5e..0x599d3e0 -> pad 0x599d49a (+24 call sites) catch Il2CppExceptionWrapper, cleanup
// eh: try 0x599d3f3..0x599d3fd -> pad 0x599d498 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x599d3fd..0x599d5a6 -> pad 0x599d487 (+13 call sites) catch Il2CppExceptionWrapper, cleanup
// eh: try 0x599d5ca..0x599d5cf -> pad 0x599d5d4 catch (...) [compiler noexcept guard]
// asm: 648 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x599c45f: mov rax, qword ptr [rcx + 0x18]
// asm:   0x599c463: test rax, rax
// asm:   0x599c466: je 0x599cccf
// asm:   0x599c46c: cmp dword ptr [rax + 0x18], 0
// asm:   0x599c470: jle 0x599caca
// asm:   0x599c476: xor ebx, ebx
// asm:   0x599c478: movss xmm0, dword ptr [rip - 0x49dac1c]
// asm:   0x599c480: movss dword ptr [rsp + 0x14], xmm0
// asm:   0x599c486: lea r14, [rip + 0x18f712b]  ; MethodInfo_System_Collections_Generic_List_AsyncOperation_get_Item
// asm:   0x599c48d: lea r15, [rip + 0x18f7114]  ; MethodInfo_System_Collections_Generic_List_AsyncOperation_RemoveAt
// asm:   0x599c494: jmp 0x599c4c4
// asm:   0x599c4a0: movss xmm1, dword ptr [rsp + 0x14]
// asm:   0x599c4a6: minss xmm1, xmm0
// asm:   0x599c4aa: movss dword ptr [rsp + 0x14], xmm1
// asm:   0x599c4b0: inc ebx
// asm:   0x599c4b2: mov rax, qword ptr [rsp + 8]
// asm:   0x599c4b7: mov rcx, qword ptr [rax + 0x40]
// asm:   0x599c4bb: test rcx, rcx
// asm:   0x599c4be: je 0x599cca7
// asm:   0x599c4c4: mov rdi, qword ptr [rcx + 0x18]
// asm:   0x599c4c8: test rdi, rdi
// asm:   0x599c4cb: je 0x599cc9d
// asm:   0x599c4d1: cmp ebx, dword ptr [rdi + 0x18]
// asm:   0x599c4d4: jge 0x599ca36
// asm:   0x599c4da: mov rdx, qword ptr [r14]
// asm:   0x599c4dd: mov esi, ebx
// asm:   0x599c4df: call 0x3a5cf20  ; System_Collections_Generic_List_object___get_Item()
// asm:   0x599c4e4: test rax, rax
// asm:   0x599c4e7: je 0x599ccac
// asm:   0x599c4ed: mov rdi, rax
// asm:   0x599c4f0: xor esi, esi
// asm:   0x599c4f2: call 0x6a10460  ; UnityEngine_AsyncOperation__get_isDone()
// asm:   0x599c4f7: mov rcx, qword ptr [rsp + 8]
// asm:   0x599c4fc: mov rcx, qword ptr [rcx + 0x40]
// asm:   0x599c500: test al, al
// asm:   0x599c502: je 0x599c530
// asm:   0x599c504: test rcx, rcx
// asm:   0x599c507: je 0x599ccbb
// asm:   0x599c50d: mov rdi, qword ptr [rcx + 0x18]
// asm:   0x599c511: test rdi, rdi
// asm:   0x599c514: je 0x599ccc0
// asm:   0x599c51a: mov rdx, qword ptr [r15]
// asm:   0x599c51d: mov esi, ebx
// asm:   0x599c51f: call 0x3a5f100  ; System_Collections_Generic_List_object___RemoveAt()
// asm:   0x599c524: dec ebx
// asm:   0x599c526: jmp 0x599c4b0
// asm:   0x599c530: test rcx, rcx
// asm:   0x599c533: je 0x599ccb6
// asm:   0x599c539: mov rdi, qword ptr [rcx + 0x18]
// asm:   0x599c53d: test rdi, rdi
// asm:   0x599c540: je 0x599ccc5
// asm:   0x599c546: mov rdx, qword ptr [r14]
// asm:   0x599c549: mov esi, ebx
// asm:   0x599c54b: call 0x3a5cf20  ; System_Collections_Generic_List_object___get_Item()
// asm:   0x599c550: test rax, rax
// asm:   0x599c553: je 0x599ccb1
// asm:   0x599c559: mov rdi, rax
// asm:   0x599c55c: xor esi, esi
// asm:   0x599c55e: call 0x6a104f0  ; UnityEngine_AsyncOperation__get_progress()
// asm:   0x599c563: jmp 0x599c4a0
// asm:   0x599ca36: lea rbx, [rip + 0x18e152b]  ; TypeInfo_UI_UIManager
// asm:   0x599ca3d: mov rdi, qword ptr [rbx]
// asm:   0x599ca40: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x599ca47: jne 0x599ca51
// asm:   0x599ca49: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x599ca4e: mov rdi, qword ptr [rbx]
// asm:   0x599ca51: mov rax, qword ptr [rdi + 0xb8]
// asm:   0x599ca58: mov rdi, qword ptr [rax + 0x48]
// asm:   0x599ca5c: test rdi, rdi
// asm:   0x599ca5f: je 0x599ccf2
// asm:   0x599ca65: movss xmm0, dword ptr [rsp + 0x14]
// asm:   0x599ca6b: mulss xmm0, dword ptr [rip - 0x49daf67]
// asm:   0x599ca73: addss xmm0, dword ptr [rip - 0x49da77f]
// asm:   0x599ca7b: xor esi, esi
// asm:   0x599ca7d: xor edx, edx
// asm:   0x599ca7f: xor ecx, ecx
// asm:   0x599ca81: call 0x5d56100  ; UI_LoadingMenu__UpdateLoading()
// asm:   0x599ca86: lea rax, [rip + 0x18e1c9b]  ; TypeInfo_UnityEngine_WaitForEndOfFrame
// asm:   0x599ca8d: mov rdi, qword ptr [rax]
// asm:   0x599ca90: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x599ca95: mov rbx, rax
// asm:   0x599ca98: mov rdi, rax
// asm:   0x599ca9b: xor esi, esi
// asm:   0x599ca9d: call 0x6a23f40  ; UnityEngine_WaitForEndOfFrame___ctor()
// asm:   0x599caa2: mov rdi, qword ptr [rsp + 8]
// asm:   0x599caa7: mov qword ptr [rdi + 0x18], rbx
// asm:   0x599caab: add rdi, 0x18
// asm:   0x599caaf: mov rsi, rbx
// asm:   0x599cab2: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x599cab7: mov rax, qword ptr [rsp + 8]
// asm:   0x599cabc: mov dword ptr [rax + 0x10], 3
// asm:   0x599cac3: mov al, 1
// asm:   0x599cac5: jmp 0x599d339
// asm:   0x599caca: movzx ebx, byte ptr [rbx + 0x98]
// asm:   0x599cad1: lea rbp, [rip + 0x18ddeb8]  ; TypeInfo_Map_MapLoader
// asm:   0x599cad8: mov rdi, qword ptr [rbp]
// asm:   0x599cadc: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x599cae3: jne 0x599caee
// asm:   0x599cae5: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x599caea: mov rdi, qword ptr [rbp]
// asm:   0x599caee: mov rax, qword ptr [rdi + 0xb8]
// asm:   0x599caf5: mov byte ptr [rax + 0xa0], bl
// asm:   0x599cafb: jmp 0x599d312
// asm:   0x599cc9d: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x599cca7: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x599ccac: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x599ccb1: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x599ccb6: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x599ccbb: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x599ccc0: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x599ccc5: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x599cccf: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x599ccf2: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x599cd60: jmp 0x599cdf4
// asm:   0x599cd65: jmp 0x599cdf4
// asm:   0x599cd6a: jmp 0x599cdf4
// asm:   0x599cd6f: jmp 0x599cdf4
// asm:   0x599cd74: jmp 0x599cdf4
// asm:   0x599cd76: jmp 0x599cdf4
// asm:   0x599cd78: jmp 0x599cdf4
// asm:   0x599cd7a: jmp 0x599cdf4
// asm:   0x599cd7c: jmp 0x599cdf4
// asm:   0x599cd7e: jmp 0x599cdf4
// asm:   0x599cd80: jmp 0x599cdf4
// asm:   0x599cd82: jmp 0x599cdf4
// asm:   0x599cd84: jmp 0x599cdf4
// asm:   0x599cd86: jmp 0x599cdf4
// asm:   0x599cd88: jmp 0x599cdf4
// asm:   0x599cd8a: jmp 0x599cdf4
// asm:   0x599cd8c: jmp 0x599cdf4
// asm:   0x599cd8e: jmp 0x599cdf4
// asm:   0x599cd90: jmp 0x599cdf4
// asm:   0x599cd92: jmp 0x599cdf4
// asm:   0x599cd94: jmp 0x599cdf4
// asm:   0x599cd96: jmp 0x599cdf4
// asm:   0x599cd98: jmp 0x599cdf4
// asm:   0x599cd9a: jmp 0x599cdf4
// asm:   0x599cd9c: jmp 0x599cdf4
// asm:   0x599cd9e: jmp 0x599cdf4
// asm:   0x599cda0: jmp 0x599cdf4
// asm:   0x599cda2: jmp 0x599cdf4
// asm:   0x599cda4: jmp 0x599cdf4
// asm:   0x599cda6: jmp 0x599cdf4
// asm:   0x599cda8: jmp 0x599cdf4
// asm:   0x599cdaa: jmp 0x599cdf4
// asm:   0x599cdac: jmp 0x599cdf4
// asm:   0x599cdae: jmp 0x599cdf4
// asm:   0x599cdb0: jmp 0x599cdf4
// asm:   0x599cdb2: jmp 0x599cdf4
// asm:   0x599cdb4: jmp 0x599cdf4
// asm:   0x599cdb6: jmp 0x599cdf4
// asm:   0x599cdb8: jmp 0x599cdf4
// asm:   0x599cdba: jmp 0x599cdf4
// asm:   0x599cdbc: jmp 0x599cdf4
// asm:   0x599cdbe: jmp 0x599cdf4
// asm:   0x599cdc0: jmp 0x599cdf4
// asm:   0x599cdc2: jmp 0x599cdf4
// asm:   0x599cdc4: jmp 0x599cdf4
// asm:   0x599cdc6: jmp 0x599cdf4
// asm:   0x599cdc8: jmp 0x599cdf4
// asm:   0x599cdca: jmp 0x599cdf4
// asm:   0x599cdcc: jmp 0x599cdf4
// asm:   0x599cdce: jmp 0x599cdf4
// asm:   0x599cdd0: jmp 0x599cdf4
// asm:   0x599cdd2: jmp 0x599cdf4
// asm:   0x599cdd4: jmp 0x599cdf4
// asm:   0x599cdd6: jmp 0x599cdf4
// asm:   0x599cdd8: jmp 0x599cdf4
// asm:   0x599cdda: jmp 0x599cdf4
// asm:   0x599cddc: jmp 0x599cdf4
// asm:   0x599cdde: jmp 0x599cdf4
// asm:   0x599cde0: jmp 0x599cdf4
// asm:   0x599cde2: jmp 0x599cdf4
// asm:   0x599cde4: jmp 0x599cdf4
// asm:   0x599cde6: jmp 0x599cdf4
// asm:   0x599cde8: jmp 0x599cdf4
// asm:   0x599cdea: jmp 0x599cdf4
// asm:   0x599cdec: jmp 0x599cdf4
// asm:   0x599cdee: jmp 0x599cdf4
// asm:   0x599cdf0: jmp 0x599cdf4
// asm:   0x599cdf2: jmp 0x599cdf4
// asm:   0x599cdf4: mov r14, rdx
// asm:   0x599cdf7: mov r15, rax
// asm:   0x599cdfa: cmp r14d, 1
// asm:   0x599cdfe: jne 0x599ce33
// asm:   0x599ce00: mov rdi, r15
// asm:   0x599ce03: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x599ce08: mov rbx, qword ptr [rax]
// asm:   0x599ce0b: mov qword ptr [rsp + 0x30], rbx
// asm:   0x599ce10: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599ce15: test rbx, rbx
// asm:   0x599ce18: je 0x599d337
// asm:   0x599ce1e: mov rdi, qword ptr [rsp + 8]
// asm:   0x599ce23: call 0x2fd4f10  ; il2cpp_runtime_helper_02fd4f10()
// asm:   0x599ce28: mov rdi, rbx
// asm:   0x599ce2b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x599ce30: mov r15, rax
// asm:   0x599ce33: lea rdi, [rsp + 0x30]
// asm:   0x599ce38: call 0x2fd4bb0  ; il2cpp_runtime_helper_02fd4bb0()
// asm:   0x599ce3d: mov rdi, r15
// asm:   0x599ce40: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x599ce45: jmp 0x599cdf4
// asm:   0x599ce47: mov r13, qword ptr [rbx + 0x90]
// asm:   0x599ce4e: lea rbp, [rip + 0x18ddb3b]  ; TypeInfo_Map_MapLoader
// asm:   0x599ce55: mov rdi, qword ptr [rbp]
// asm:   0x599ce59: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x599ce60: jne 0x599ce6b
// asm:   0x599ce62: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x599ce67: mov rdi, qword ptr [rbp]
// asm:   0x599ce6b: test r13, r13
// asm:   0x599ce6e: je 0x599d3f3
// asm:   0x599ce74: mov rax, qword ptr [rdi + 0xb8]
// asm:   0x599ce7b: mov rdi, qword ptr [rax]
// asm:   0x599ce7e: test rdi, rdi
// asm:   0x599ce81: je 0x599d3f8
// asm:   0x599ce87: lea rbx, [r13 + 0x20]
// asm:   0x599ce8b: mov esi, dword ptr [rbx]
// asm:   0x599ce8d: lea rax, [rip + 0x18ed14c]  ; MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey
// asm:   0x599ce94: mov rdx, qword ptr [rax]
// asm:   0x599ce97: call 0x4b0f950  ; System_Collections_Generic_Dictionary_int__object___ContainsKey()
// asm:   0x599ce9c: test al, al
// asm:   0x599ce9e: je 0x599cee9
// asm:   0x599cea0: mov rdi, rbx
// asm:   0x599cea3: xor esi, esi
// asm:   0x599cea5: call 0x55b73e0  ; System_Int32__ToString()
// asm:   0x599ceaa: lea rcx, [rip + 0x193ed6f]  ; "Failed to load map object "
// asm:   0x599ceb1: mov rdi, qword ptr [rcx]
// asm:   0x599ceb4: lea rcx, [rip + 0x193516d]  ; ": duplicate ID"
// asm:   0x599cebb: mov rdx, qword ptr [rcx]
// asm:   0x599cebe: mov rsi, rax
// asm:   0x599cec1: xor ecx, ecx
// asm:   0x599cec3: call 0x5401f10  ; System_String__Concat()
// asm:   0x599cec8: mov rbx, rax
// asm:   0x599cecb: mov rdi, qword ptr [rbp]
// asm:   0x599cecf: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x599ced6: jne 0x599cedd
// asm:   0x599ced8: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x599cedd: mov rdi, rbx
// asm:   0x599cee0: xor esi, esi
// asm:   0x599cee2: call 0x598fcd0  ; Map_MapLoader__ReportError()
// asm:   0x599cee7: jmp 0x599cf11
// asm:   0x599cee9: mov rax, qword ptr [rsp + 8]
// asm:   0x599ceee: movzx ebx, byte ptr [rax + 0x30]
// asm:   0x599cef2: mov rdi, qword ptr [rbp]
// asm:   0x599cef6: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x599cefd: jne 0x599cf04
// asm:   0x599ceff: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x599cf04: movzx esi, bl
// asm:   0x599cf07: mov rdi, r13
// asm:   0x599cf0a: xor edx, edx
// asm:   0x599cf0c: call 0x5990770  ; Map_MapLoader__LoadObject()
// asm:   0x599cf11: mov rbx, qword ptr [rsp + 8]
// asm:   0x599cf16: mov eax, dword ptr [rbx + 0x4c]
// asm:   0x599cf19: imul ecx, eax, 0xc28f5c29
// asm:   0x599cf1f: add ecx, 0x51eb850
// asm:   0x599cf25: ror ecx, 2
// asm:   0x599cf28: cmp ecx, 0x28f5c28
// asm:   0x599cf2e: ja 0x599cf4b
// asm:   0x599cf30: lea rcx, [rip + 0x18dfa01]  ; TypeInfo_ApplicationManagers_SceneLoader
// asm:   0x599cf37: mov rcx, qword ptr [rcx]
// asm:   0x599cf3a: mov rcx, qword ptr [rcx + 0xb8]
// asm:   0x599cf41: cmp dword ptr [rcx + 8], 2
// asm:   0x599cf45: je 0x599d348
// asm:   0x599cf4b: inc eax
// asm:   0x599cf4d: mov dword ptr [rbx + 0x4c], eax
// asm:   0x599cf50: sub rbx, -0x80
// asm:   0x599cf54: lea rax, [rip + 0x18f1485]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext
// asm:   0x599cf5b: mov rsi, qword ptr [rax]
// asm:   0x599cf5e: mov rdi, rbx
// asm:   0x599cf61: call 0x4d45c50  ; System_Collections_Generic_List_Enumerator_object___MoveNext()
// asm:   0x599cf66: mov rbx, qword ptr [rsp + 8]
// asm:   0x599cf6b: test al, al
// asm:   0x599cf6d: jne 0x599ce47
// asm:   0x599cf73: cmp byte ptr [rip + 0x1ba8af3], 0
// asm:   0x599cf7a: jne 0x599cf8f
// asm:   0x599cf7c: lea rdi, [rip + 0x18f1455]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose
// asm:   0x599cf83: call 0x30d6060  ; il2cpp_codegen_initialize_runtime_metadata()
// asm:   0x599cf88: mov byte ptr [rip + 0x1ba8ade], 1
// asm:   0x599cf8f: mov dword ptr [rbx + 0x10], 0xffffffff
// asm:   0x599cf96: sub rbx, -0x80
// asm:   0x599cf9a: lea rax, [rip + 0x18f1437]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose
// asm:   0x599cfa1: mov rsi, qword ptr [rax]
// asm:   0x599cfa4: mov rdi, rbx
// asm:   0x599cfa7: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x599cfac: mov rax, qword ptr [rsp + 8]
// asm:   0x599cfb1: xorps xmm0, xmm0
// asm:   0x599cfb4: movups xmmword ptr [rax + 0x80], xmm0
// asm:   0x599cfbb: mov qword ptr [rax + 0x90], 0
// asm:   0x599cfc6: cmp byte ptr [rax + 0x30], 0
// asm:   0x599cfca: je 0x599d13e
// asm:   0x599cfd0: cmp byte ptr [rax + 0x49], 0
// asm:   0x599cfd4: je 0x599d27d
// asm:   0x599cfda: xor edi, edi
// asm:   0x599cfdc: call 0x6995ee0  ; UnityEngine_AI_NavMesh__RemoveAllNavMeshData()
// asm:   0x599cfe1: lea r15, [rip + 0x18dd9a8]  ; TypeInfo_Map_MapLoader
// asm:   0x599cfe8: mov rdi, qword ptr [r15]
// asm:   0x599cfeb: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x599cff2: jne 0x599cffc
// asm:   0x599cff4: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x599cff9: mov rdi, qword ptr [r15]
// asm:   0x599cffc: mov rax, qword ptr [rdi + 0xb8]
// asm:   0x599d003: mov byte ptr [rax + 0xa0], 0
// asm:   0x599d00a: mov byte ptr [rax + 0xc0], 0
// asm:   0x599d011: lea rax, [rip + 0x18de838]  ; TypeInfo_Photon_Pun_PhotonNetwork
// asm:   0x599d018: mov rdi, qword ptr [rax]
// asm:   0x599d01b: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x599d022: jne 0x599d029
// asm:   0x599d024: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x599d029: xor ebx, ebx
// asm:   0x599d02b: xor edi, edi
// asm:   0x599d02d: call 0x57c9070  ; Photon_Pun_PhotonNetwork__get_IsMasterClient()
// asm:   0x599d032: test al, al
// asm:   0x599d034: je 0x599d075
// asm:   0x599d036: lea rax, [rip + 0x18dfc13]  ; TypeInfo_Settings_SettingsManager
// asm:   0x599d03d: mov rax, qword ptr [rax]
// asm:   0x599d040: mov rax, qword ptr [rax + 0xb8]
// asm:   0x599d047: mov rax, qword ptr [rax + 0x50]
// asm:   0x599d04b: test rax, rax
// asm:   0x599d04e: je 0x599d40c
// asm:   0x599d054: mov rax, qword ptr [rax + 0x60]
// asm:   0x599d058: test rax, rax
// asm:   0x599d05b: je 0x599d411
// asm:   0x599d061: mov rax, qword ptr [rax + 0xe0]
// asm:   0x599d068: test rax, rax
// asm:   0x599d06b: je 0x599d416
// asm:   0x599d071: movzx ebx, byte ptr [rax + 0x19]
// asm:   0x599d075: mov rax, qword ptr [rsp + 8]
// asm:   0x599d07a: movzx ecx, byte ptr [rax + 0x48]
// asm:   0x599d07e: test ebx, ecx
// asm:   0x599d080: je 0x599d312
// asm:   0x599d086: mov rbx, qword ptr [rax + 0x40]
// asm:   0x599d08a: lea rax, [rip + 0x18d47c7]  ; TypeInfo_System_Collections_Generic_List_AsyncOperation
// asm:   0x599d091: mov rdi, qword ptr [rax]
// asm:   0x599d094: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x599d099: mov r14, rax
// asm:   0x599d09c: lea rax, [rip + 0x18f64e5]  ; MethodInfo_System_Collections_Generic_List_AsyncOperation_ctor
// asm:   0x599d0a3: mov rsi, qword ptr [rax]
// asm:   0x599d0a6: mov rdi, r14
// asm:   0x599d0a9: call 0x3a5c910  ; System_Collections_Generic_List_object____ctor()
// asm:   0x599d0ae: test rbx, rbx
// asm:   0x599d0b1: je 0x599d3fd
// asm:   0x599d0b7: mov qword ptr [rbx + 0x18], r14
// asm:   0x599d0bb: add rbx, 0x18
// asm:   0x599d0bf: mov rdi, rbx
// asm:   0x599d0c2: mov rsi, r14
// asm:   0x599d0c5: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x599d0ca: mov rax, qword ptr [rsp + 8]
// asm:   0x599d0cf: mov r14, qword ptr [rax + 0x40]
// asm:   0x599d0d3: lea rax, [rip + 0x18d7f26]  ; TypeInfo_System_Action
// asm:   0x599d0da: mov rdi, qword ptr [rax]
// asm:   0x599d0dd: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x599d0e2: mov rbx, rax
// asm:   0x599d0e5: lea rax, [rip + 0x1928cd4]  ; MethodInfo_Map_MapLoader_c__DisplayClass50_0_LoadObjectsCoroutine_b__1
// asm:   0x599d0ec: mov rdx, qword ptr [rax]
// asm:   0x599d0ef: mov rdi, rbx
// asm:   0x599d0f2: mov rsi, r14
// asm:   0x599d0f5: xor ecx, ecx
// asm:   0x599d0f7: call 0x5517da0  ; System_Action___ctor()
// asm:   0x599d0fc: mov rdi, qword ptr [r15]
// asm:   0x599d0ff: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x599d106: jne 0x599d10d
// asm:   0x599d108: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x599d10d: lea rax, [rip + 0x19562ec]  ; "build navmesh"
// asm:   0x599d114: mov rdi, qword ptr [rax]
// asm:   0x599d117: mov rsi, rbx
// asm:   0x599d11a: xor edx, edx
// asm:   0x599d11c: call 0x598fdd0  ; Map_MapLoader__RunLoadStep()
// asm:   0x599d121: mov rbx, qword ptr [rsp + 8]
// asm:   0x599d126: mov byte ptr [rbx + 0x98], al
// asm:   0x599d12c: mov rcx, qword ptr [rbx + 0x40]
// asm:   0x599d130: test rcx, rcx
// asm:   0x599d133: jne 0x599c45f
// asm:   0x599d139: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x599d13e: lea rbp, [rip + 0x18e5d63]  ; TypeInfo_Map_MapLoader_c
// asm:   0x599d145: mov rdi, qword ptr [rbp]
// asm:   0x599d149: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x599d150: jne 0x599d15b
// asm:   0x599d152: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x599d157: mov rdi, qword ptr [rbp]
// asm:   0x599d15b: mov rax, qword ptr [rdi + 0xb8]
// asm:   0x599d162: mov rbx, qword ptr [rax + 8]
// asm:   0x599d166: lea rcx, [rip + 0x195c3db]  ; "parent map objects"
// asm:   0x599d16d: mov r14, qword ptr [rcx]
// asm:   0x599d170: test rbx, rbx
// asm:   0x599d173: jne 0x599d1d5
// asm:   0x599d175: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x599d17c: jne 0x599d18e
// asm:   0x599d17e: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x599d183: mov rax, qword ptr [rbp]
// asm:   0x599d187: mov rax, qword ptr [rax + 0xb8]
// asm:   0x599d18e: mov r15, qword ptr [rax]
// asm:   0x599d191: lea rax, [rip + 0x18d7e68]  ; TypeInfo_System_Action
// asm:   0x599d198: mov rdi, qword ptr [rax]
// asm:   0x599d19b: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x599d1a0: mov rbx, rax
// asm:   0x599d1a3: lea rax, [rip + 0x1928c0e]  ; MethodInfo_Map_MapLoader_c_LoadObjectsCoroutine_b__50_0
// asm:   0x599d1aa: mov rdx, qword ptr [rax]
// asm:   0x599d1ad: mov rdi, rbx
// asm:   0x599d1b0: mov rsi, r15
// asm:   0x599d1b3: xor ecx, ecx
// asm:   0x599d1b5: call 0x5517da0  ; System_Action___ctor()
// asm:   0x599d1ba: mov rax, qword ptr [rbp]
// asm:   0x599d1be: mov rdi, qword ptr [rax + 0xb8]
// asm:   0x599d1c5: mov qword ptr [rdi + 8], rbx
// asm:   0x599d1c9: add rdi, 8
// asm:   0x599d1cd: mov rsi, rbx
// asm:   0x599d1d0: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x599d1d5: lea rax, [rip + 0x18dd7b4]  ; TypeInfo_Map_MapLoader
// asm:   0x599d1dc: mov rdi, qword ptr [rax]
// asm:   0x599d1df: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x599d1e6: jne 0x599d1ed
// asm:   0x599d1e8: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x599d1ed: mov rdi, r14
// asm:   0x599d1f0: mov rsi, rbx
// asm:   0x599d1f3: xor edx, edx
// asm:   0x599d1f5: call 0x598fdd0  ; Map_MapLoader__RunLoadStep()
// asm:   0x599d1fa: lea rbp, [rip + 0x18d7dff]  ; TypeInfo_System_Action
// asm:   0x599d201: mov rdi, qword ptr [rbp]
// asm:   0x599d205: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x599d20a: mov rbx, rax
// asm:   0x599d20d: lea rax, [rip + 0x1910fec]  ; MethodInfo_Map_MapLoader_Batch
// asm:   0x599d214: mov rdx, qword ptr [rax]
// asm:   0x599d217: mov rdi, rbx
// asm:   0x599d21a: mov rsi, r12
// asm:   0x599d21d: xor ecx, ecx
// asm:   0x599d21f: call 0x5517da0  ; System_Action___ctor()
// asm:   0x599d224: lea rax, [rip + 0x1955c45]  ; "batch map objects"
// asm:   0x599d22b: mov rdi, qword ptr [rax]
// asm:   0x599d22e: mov rsi, rbx
// asm:   0x599d231: xor edx, edx
// asm:   0x599d233: call 0x598fdd0  ; Map_MapLoader__RunLoadStep()
// asm:   0x599d238: mov rdi, qword ptr [rbp]
// asm:   0x599d23c: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x599d241: mov rbx, rax
// asm:   0x599d244: lea rax, [rip + 0x1910be5]  ; MethodInfo_Map_MapDestruction_Build
// asm:   0x599d24b: mov rdx, qword ptr [rax]
// asm:   0x599d24e: mov rdi, rbx
// asm:   0x599d251: xor esi, esi
// asm:   0x599d253: xor ecx, ecx
// asm:   0x599d255: call 0x5517da0  ; System_Action___ctor()
// asm:   0x599d25a: lea rax, [rip + 0x1956197]  ; "build map destruction"
// asm:   0x599d261: mov rdi, qword ptr [rax]
// asm:   0x599d264: mov rsi, rbx
// asm:   0x599d267: xor edx, edx
// asm:   0x599d269: call 0x598fdd0  ; Map_MapLoader__RunLoadStep()
// asm:   0x599d26e: mov rax, qword ptr [rsp + 8]
// asm:   0x599d273: cmp byte ptr [rax + 0x49], 0
// asm:   0x599d277: jne 0x599cfda
// asm:   0x599d27d: lea rbp, [rip + 0x18dd70c]  ; TypeInfo_Map_MapLoader
// asm:   0x599d284: mov rdi, qword ptr [rbp]
// asm:   0x599d288: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x599d28f: jne 0x599d296
// asm:   0x599d291: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x599d296: xor edi, edi
// asm:   0x599d298: call 0x598f960  ; Map_MapLoader__get_HasNavMesh()
// asm:   0x599d29d: test al, al
// asm:   0x599d29f: je 0x599d312
// asm:   0x599d2a1: lea rax, [rip + 0x18dd650]  ; TypeInfo_Map_MapDestruction
// asm:   0x599d2a8: mov rdi, qword ptr [rax]
// asm:   0x599d2ab: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x599d2b2: jne 0x599d2b9
// asm:   0x599d2b4: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x599d2b9: xor edi, edi
// asm:   0x599d2bb: call 0x597d0f0  ; Map_MapDestruction__get_IsActive()
// asm:   0x599d2c0: test al, al
// asm:   0x599d2c2: je 0x599d312
// asm:   0x599d2c4: lea rax, [rip + 0x18d7d35]  ; TypeInfo_System_Action
// asm:   0x599d2cb: mov rdi, qword ptr [rax]
// asm:   0x599d2ce: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x599d2d3: mov rbx, rax
// asm:   0x599d2d6: lea rax, [rip + 0x1910f2b]  ; MethodInfo_Map_MapLoader_CollectNavMeshSources
// asm:   0x599d2dd: mov rdx, qword ptr [rax]
// asm:   0x599d2e0: mov rdi, rbx
// asm:   0x599d2e3: xor esi, esi
// asm:   0x599d2e5: xor ecx, ecx
// asm:   0x599d2e7: call 0x5517da0  ; System_Action___ctor()
// asm:   0x599d2ec: mov rdi, qword ptr [rbp]
// asm:   0x599d2f0: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x599d2f7: jne 0x599d2fe
// asm:   0x599d2f9: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x599d2fe: lea rax, [rip + 0x19569ab]  ; "collect navmesh sources"
// asm:   0x599d305: mov rdi, qword ptr [rax]
// asm:   0x599d308: mov rsi, rbx
// asm:   0x599d30b: xor edx, edx
// asm:   0x599d30d: call 0x598fdd0  ; Map_MapLoader__RunLoadStep()
// asm:   0x599d312: lea rbx, [rip + 0x18dd67f]  ; TypeInfo_Map_MapManager
// asm:   0x599d319: mov rdi, qword ptr [rbx]
// asm:   0x599d31c: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x599d323: jne 0x599d32d
// asm:   0x599d325: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x599d32a: mov rdi, qword ptr [rbx]
// asm:   0x599d32d: mov rax, qword ptr [rdi + 0xb8]
// asm:   0x599d334: mov byte ptr [rax], 1
// asm:   0x599d348: lea rbp, [rip + 0x18e0c19]  ; TypeInfo_UI_UIManager
// asm:   0x599d34f: mov rdi, qword ptr [rbp]
// asm:   0x599d353: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x599d35a: jne 0x599d36d
// asm:   0x599d35c: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x599d361: mov rdi, qword ptr [rbp]
// asm:   0x599d365: mov rbx, qword ptr [rsp + 8]
// asm:   0x599d36a: mov eax, dword ptr [rbx + 0x4c]
// asm:   0x599d36d: mov rcx, qword ptr [rbx + 0x38]
// asm:   0x599d371: test rcx, rcx
// asm:   0x599d374: je 0x599d402
// asm:   0x599d37a: mov rdx, qword ptr [rdi + 0xb8]
// asm:   0x599d381: mov rdi, qword ptr [rdx + 0x48]
// asm:   0x599d385: test rdi, rdi
// asm:   0x599d388: je 0x599d407
// asm:   0x599d38a: cvtsi2ss xmm0, eax
// asm:   0x599d38e: cvtsi2ss xmm1, dword ptr [rcx + 0x18]
// asm:   0x599d393: divss xmm0, xmm1
// asm:   0x599d397: mulss xmm0, dword ptr [rbx + 0x50]
// asm:   0x599d39c: addss xmm0, dword ptr [rip - 0x49db5c4]
// asm:   0x599d3a4: xor esi, esi
// asm:   0x599d3a6: xor edx, edx
// asm:   0x599d3a8: xor ecx, ecx
// asm:   0x599d3aa: call 0x5d56100  ; UI_LoadingMenu__UpdateLoading()
// asm:   0x599d3af: lea rax, [rip + 0x18e1372]  ; TypeInfo_UnityEngine_WaitForEndOfFrame
// asm:   0x599d3b6: mov rdi, qword ptr [rax]
// asm:   0x599d3b9: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x599d3be: mov rbx, rax
// asm:   0x599d3c1: mov rdi, rax
// asm:   0x599d3c4: xor esi, esi
// asm:   0x599d3c6: call 0x6a23f40  ; UnityEngine_WaitForEndOfFrame___ctor()
// asm:   0x599d3cb: mov rdi, qword ptr [rsp + 8]
// asm:   0x599d3d0: mov qword ptr [rdi + 0x18], rbx
// asm:   0x599d3d4: add rdi, 0x18
// asm:   0x599d3d8: mov rsi, rbx
// asm:   0x599d3db: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x599d3e0: mov rax, qword ptr [rsp + 8]
// asm:   0x599d3e5: mov dword ptr [rax + 0x10], 2
// asm:   0x599d3ec: mov al, 1
// asm:   0x599d3ee: jmp 0x599d339
// asm:   0x599d3f3: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x599d3f8: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x599d3fd: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x599d402: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x599d407: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x599d40c: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x599d411: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x599d416: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x599d41b: jmp 0x599d422
// asm:   0x599d41d: jmp 0x599cdf4
// asm:   0x599d422: mov r15, rax
// asm:   0x599d425: mov r14d, edx
// asm:   0x599d428: jmp 0x599cdfa
// asm:   0x599d42d: jmp 0x599cdf4
// asm:   0x599d432: jmp 0x599cdf4
// asm:   0x599d437: jmp 0x599cdf4
// asm:   0x599d43c: jmp 0x599cdf4
// asm:   0x599d441: jmp 0x599cdf4
// asm:   0x599d446: jmp 0x599cdf4
// asm:   0x599d44b: jmp 0x599cdf4
// asm:   0x599d450: jmp 0x599cdf4
// asm:   0x599d455: jmp 0x599cdf4
// asm:   0x599d45a: jmp 0x599cdf4
// asm:   0x599d45f: jmp 0x599cdf4
// asm:   0x599d464: jmp 0x599cdf4
// asm:   0x599d469: jmp 0x599cdf4
// asm:   0x599d46e: jmp 0x599cdf4
// asm:   0x599d473: jmp 0x599cdf4
// asm:   0x599d478: jmp 0x599cdf4
// asm:   0x599d47d: jmp 0x599cdf4
// asm:   0x599d482: jmp 0x599cdf4
// asm:   0x599d487: jmp 0x599cdf4
// asm:   0x599d48c: jmp 0x599d49f
// asm:   0x599d48e: jmp 0x599d49f
// asm:   0x599d490: jmp 0x599d49f
// asm:   0x599d492: jmp 0x599d49f
// asm:   0x599d494: jmp 0x599d49f
// asm:   0x599d496: jmp 0x599d49f
// asm:   0x599d498: jmp 0x599d49f
// asm:   0x599d49a: jmp 0x599cdf4
// asm:   0x599d49f: mov r14, rdx
// asm:   0x599d4a2: mov r15, rax
// asm:   0x599d4a5: cmp r14d, 1
// asm:   0x599d4a9: jne 0x599cdfa
// asm:   0x599d4af: mov rdi, r15
// asm:   0x599d4b2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x599d4b7: mov r14, rax
// asm:   0x599d4ba: lea rdi, [rip + 0x18dabff]  ; TypeInfo_System_Exception
// asm:   0x599d4c1: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x599d4c6: mov rcx, qword ptr [r14]
// asm:   0x599d4c9: mov rsi, qword ptr [rcx]
// asm:   0x599d4cc: mov rdi, rax
// asm:   0x599d4cf: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x599d4d4: test al, al
// asm:   0x599d4d6: je 0x599d57b
// asm:   0x599d4dc: mov r15, qword ptr [r14]
// asm:   0x599d4df: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599d4e4: test r13, r13
// asm:   0x599d4e7: je 0x599d59c
// asm:   0x599d4ed: add r13, 0x20
// asm:   0x599d4f1: mov rdi, r13
// asm:   0x599d4f4: xor esi, esi
// asm:   0x599d4f6: call 0x55b73e0  ; System_Int32__ToString()
// asm:   0x599d4fb: test r15, r15
// asm:   0x599d4fe: je 0x599d5a1
// asm:   0x599d504: mov r14, rax
// asm:   0x599d507: mov rax, qword ptr [r15]
// asm:   0x599d50a: mov rsi, qword ptr [rax + 0x190]
// asm:   0x599d511: mov rdi, r15
// asm:   0x599d514: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x599d51a: mov r15, rax
// asm:   0x599d51d: lea rdi, [rip + 0x193e6fc]  ; "Failed to load map object "
// asm:   0x599d524: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x599d529: mov rbx, rax
// asm:   0x599d52c: lea rdi, [rip + 0x1934a4d]  ; ": "
// asm:   0x599d533: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x599d538: mov rdi, rbx
// asm:   0x599d53b: mov rsi, r14
// asm:   0x599d53e: mov rdx, rax
// asm:   0x599d541: mov rcx, r15
// asm:   0x599d544: xor r8d, r8d
// asm:   0x599d547: call 0x5402810  ; System_String__Concat()
// asm:   0x599d54c: mov rbx, rax
// asm:   0x599d54f: lea rdi, [rip + 0x18dd43a]  ; TypeInfo_Map_MapLoader
// asm:   0x599d556: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x599d55b: cmp dword ptr [rax + 0xe4], 0
// asm:   0x599d562: jne 0x599d56c
// asm:   0x599d564: mov rdi, rax
// asm:   0x599d567: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x599d56c: mov rdi, rbx
// asm:   0x599d56f: xor esi, esi
// asm:   0x599d571: call 0x598fcd0  ; Map_MapLoader__ReportError()
// asm:   0x599d576: jmp 0x599cf11
// asm:   0x599d57b: mov edi, 8
// asm:   0x599d580: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x599d585: mov rcx, qword ptr [r14]
// asm:   0x599d588: mov qword ptr [rax], rcx
// asm:   0x599d58b: lea rsi, [rip + 0x148ff6e]
// asm:   0x599d592: mov rdi, rax
// asm:   0x599d595: xor edx, edx
// asm:   0x599d597: call 0x6e255c0  ; __cxa_throw()
// asm:   0x599d59c: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x599d5a1: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x599d5a6: jmp 0x599cdf4
// asm:   0x599d5ab: jmp 0x599cdf4
// asm:   0x599d5b0: jmp 0x599cdf4
// asm:   0x599d5b5: jmp 0x599cdf4
// asm:   0x599d5ba: jmp 0x599cdf4
// asm:   0x599d5bf: jmp 0x599cdf4
// asm:   0x599d5c4: mov r14, rdx
// asm:   0x599d5c7: mov r15, rax
// asm:   0x599d5ca: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599d5cf: jmp 0x599cdfa
// asm:   0x599d5d4: mov rdi, rax
// asm:   0x599d5d7: call 0x2ab61e0  ; __clang_call_terminate()

bool Map_MapLoader__LoadObjectsCoroutine_d__50__MoveNext
               (Map_MapLoader__LoadObjectsCoroutine_d__50_o *__this,MethodInfo *method)

{
  int32_t *__this_00;
  undefined1 uVar1;
  uint uVar2;
  Map_MapLoader_o *pMVar3;
  Settings_InGameGeneralSettings_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  System_Collections_Generic_List_string__o *pSVar6;
  UI_LoadingMenu_o *pUVar7;
  Map_MapScriptBaseObject_o *scriptObject;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  Settings_InGameSet_o *pSVar8;
  Settings_InGameTitanSettings_o *pSVar9;
  Settings_BoolSetting_o *pSVar10;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar11;
  Map_MapLoader__LoadObjectsCoroutine_d__50_o *pMVar12;
  bool bVar13;
  Map_MapLoader___c__DisplayClass50_0_o *pMVar14;
  UnityEngine_AsyncOperation_o *pUVar15;
  Map_CustomAssetEntry_o *__this_02;
  System_String_o *url;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar16;
  Il2CppObject *pIVar17;
  Map_MapLoader_StaticFields *pMVar18;
  System_String_o *pSVar19;
  System_Collections_Generic_List_AsyncOperation__o *pSVar20;
  System_Action_o *pSVar21;
  Map_MapLoader___c_StaticFields *pMVar22;
  byte bVar23;
  int iVar24;
  MethodInfo *pMVar25;
  bool bVar26;
  float fVar27;
  Map_MapLoader__LoadObjectsCoroutine_d__50_o *pMStack_80;
  float fStack_74;
  System_Collections_Generic_List_Enumerator_T__o SStack_70;
  undefined8 uStack_58;
  Map_MapLoader__LoadObjectsCoroutine_d__50_o **ppMStack_50;
  System_Collections_Generic_List_T__o *pSStack_48;
  int32_t iStack_40;
  int32_t iStack_3c;
  Map_MapScriptBaseObject_o *pMStack_38;
  
  pMStack_80 = __this;
  if (Il2CppMethodInitialized_07545a6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomAssetEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AsyncOperation_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AsyncOperation_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AsyncOperation_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AsyncOperation_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AsyncOperation);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapDestruction_Build);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapLoader_Batch);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapLoader_CollectNavMeshSources);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapLoader_c_LoadObjectsCoroutine_b__50_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_MapLoader_c__DisplayClass50_0_LoadObjectsCoroutine_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader_c__DisplayClass50_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    il2cpp_codegen_initialize_runtime_metadata(&"Failed to load map object ");
    il2cpp_codegen_initialize_runtime_metadata(&"parent map objects");
    il2cpp_codegen_initialize_runtime_metadata(&"build navmesh");
    il2cpp_codegen_initialize_runtime_metadata(&"build map destruction");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSS PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"collect navmesh sources");
    il2cpp_codegen_initialize_runtime_metadata(&"Blade PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"Racing");
    il2cpp_codegen_initialize_runtime_metadata(&"APG PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"batch map objects");
    il2cpp_codegen_initialize_runtime_metadata(&"Failed to load bundle: ");
    il2cpp_codegen_initialize_runtime_metadata(&": duplicate ID");
    Il2CppMethodInitialized_07545a6b = '\x01';
  }
  uStack_58 = 0;
  ppMStack_50 = &pMStack_80;
  uVar2 = (__this->fields).__1__state;
  if (3 < uVar2) {
    return false;
  }
  pMVar3 = (__this->fields).__4__this;
  switch(uVar2) {
  case 0:
    (__this->fields).__1__state = -1;
    pMVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapLoader_c__DisplayClass50_0);
    System_Object___ctor((Il2CppObject *)pMVar14,(MethodInfo *)0x0);
    (pMStack_80->fields).__8__1 = pMVar14;
    Il2CppCodeGenWriteBarrier(&(pMStack_80->fields).__8__1);
    pMVar14 = (pMStack_80->fields).__8__1;
    if (pMVar14 == (Map_MapLoader___c__DisplayClass50_0_o *)0x0) {
      ThrowNullReferenceException();
    }
    (pMVar14->fields).__4__this = (pMStack_80->fields).__4__this;
    Il2CppCodeGenWriteBarrier(&(pMVar14->fields).__4__this);
    pSVar6 = (pMStack_80->fields).customAssets;
    if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              (&SStack_70,(System_Collections_Generic_List_object__o *)pSVar6,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    pMStack_38 = (Map_MapScriptBaseObject_o *)SStack_70.fields._current;
    pSStack_48 = SStack_70.fields._list;
    iStack_40 = SStack_70.fields._index;
    iStack_3c = SStack_70.fields._version;
    (pMStack_80->fields).__7__wrap5.fields._current = (System_String_o *)SStack_70.fields._current;
    (pMStack_80->fields).__7__wrap5.fields._list = SStack_70.fields._list;
    (pMStack_80->fields).__7__wrap5.fields._index = SStack_70.fields._index;
    (pMStack_80->fields).__7__wrap5.fields._version = SStack_70.fields._version;
    Il2CppCodeGenWriteBarrier((void **)&(pMStack_80->fields).__7__wrap5);
    (pMStack_80->fields).__1__state = -3;
    break;
  case 1:
    (__this->fields).__1__state = -3;
    pSVar19 = (__this->fields)._bundle_5__8;
    if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
    }
    bVar13 = ApplicationManagers_AssetBundleManager__LoadedBundle(pSVar19,(MethodInfo *)0x0);
    if (!bVar13) {
      pSVar19 = System_String__Concat_52f0320
                          ("Failed to load bundle: ",(pMStack_80->fields)._customAsset_5__7,(MethodInfo *)0x0);
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      Map_MapLoader__ReportError(pSVar19,(MethodInfo *)0x0);
    }
    (pMStack_80->fields)._bundle_5__8 = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(pMStack_80->fields)._bundle_5__8);
    (pMStack_80->fields)._customAsset_5__7 = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(pMStack_80->fields)._customAsset_5__7);
    break;
  case 2:
    (__this->fields).__1__state = -4;
    iVar24 = (__this->fields)._count_5__4;
    goto label_0599cf4b;
  case 3:
    (__this->fields).__1__state = -1;
    pMVar14 = (__this->fields).__8__1;
    goto joined_r0x0599c459;
  }
  while( true ) {
    bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       ((System_Collections_Generic_List_Enumerator_object__o *)
                        &(pMStack_80->fields).__7__wrap5,
                        (MethodInfo_4C45C50 *)
                        MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    pMVar12 = pMStack_80;
    if (!bVar13) break;
    pMVar25 = (MethodInfo *)(pMStack_80->fields).__7__wrap5.fields._current;
    (pMStack_80->fields)._customAsset_5__7 = (System_String_o *)pMVar25;
    Il2CppCodeGenWriteBarrier(&(pMStack_80->fields)._customAsset_5__7);
    pSVar19 = (pMStack_80->fields)._customAsset_5__7;
    if ((TypeInfo_Map_CustomAssetEntry->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomAssetEntry);
    }
    __this_02 = Map_CustomAssetEntry__Parse(pSVar19,pMVar25);
    if (__this_02 == (Map_CustomAssetEntry_o *)0x0) {
      ThrowNullReferenceException();
    }
    (pMStack_80->fields)._bundle_5__8 = (__this_02->fields).Bundle;
    Il2CppCodeGenWriteBarrier(&(pMStack_80->fields)._bundle_5__8);
    pMVar25 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
    bVar13 = System_String__op_Equality
                       ((pMStack_80->fields)._bundle_5__8,(System_String_o *)pMVar25,(MethodInfo *)0x0);
    if (!bVar13) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pMVar3 = TypeInfo_Map_MapLoader->static_fields->_instance;
      pSVar19 = (pMStack_80->fields)._bundle_5__8;
      url = Map_CustomAssetEntry__GetUrl(__this_02,pMVar25);
      bVar13 = (pMStack_80->fields).editor;
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      routine = ApplicationManagers_AssetBundleManager__LoadBundle(pSVar19,url,bVar13,(MethodInfo *)0x0);
      if (pMVar3 == (Map_MapLoader_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar16 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                          ((UnityEngine_MonoBehaviour_o *)pMVar3,routine,(MethodInfo *)0x0);
      (pMStack_80->fields).__2__current = (Il2CppObject *)pUVar16;
      Il2CppCodeGenWriteBarrier(&(pMStack_80->fields).__2__current);
      (pMStack_80->fields).__1__state = 1;
      return true;
    }
  }
  if (Il2CppMethodInitialized_07545a6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    Il2CppMethodInitialized_07545a6c = '\x01';
  }
  (pMVar12->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&(pMVar12->fields).__7__wrap5,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  (pMStack_80->fields).__7__wrap5.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  (pMStack_80->fields).__7__wrap5.fields._index = 0;
  (pMStack_80->fields).__7__wrap5.fields._version = 0;
  (pMStack_80->fields).__7__wrap5.fields._current = (System_String_o *)0x0;
  pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (pSVar8 == (Settings_InGameSet_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar4 = (pSVar8->fields).General;
  if (pSVar4 == (Settings_InGameGeneralSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar5 = (pSVar4->fields).GameMode;
  if (pSVar5 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar13 = System_String__op_Inequality((pSVar5->fields)._value,"Racing",(MethodInfo *)0x0);
  pMVar12 = pMStack_80;
  bVar26 = false;
  if (bVar13) {
    pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (pSVar8 == (Settings_InGameSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar4 = (pSVar8->fields).General;
    if (pSVar4 == (Settings_InGameGeneralSettings_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar5 = (pSVar4->fields).GameMode;
    if (pSVar5 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar13 = System_String__op_Inequality((pSVar5->fields)._value,"Thunderspear PVP",(MethodInfo *)0x0);
    bVar26 = false;
    if (bVar13) {
      pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (pSVar8 == (Settings_InGameSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar4 = (pSVar8->fields).General;
      if (pSVar4 == (Settings_InGameGeneralSettings_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar5 = (pSVar4->fields).GameMode;
      if (pSVar5 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar13 = System_String__op_Inequality((pSVar5->fields)._value,"Blade PVP",(MethodInfo *)0x0);
      bVar26 = false;
      if (bVar13) {
        pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
        if (pSVar8 == (Settings_InGameSet_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar4 = (pSVar8->fields).General;
        if (pSVar4 == (Settings_InGameGeneralSettings_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar5 = (pSVar4->fields).GameMode;
        if (pSVar5 == (Settings_StringSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar13 = System_String__op_Inequality((pSVar5->fields)._value,"APG PVP",(MethodInfo *)0x0)
        ;
        bVar26 = false;
        if (bVar13) {
          pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
          if (pSVar8 == (Settings_InGameSet_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar4 = (pSVar8->fields).General;
          if (pSVar4 == (Settings_InGameGeneralSettings_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar5 = (pSVar4->fields).GameMode;
          if (pSVar5 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar13 = System_String__op_Inequality
                             ((pSVar5->fields)._value,"AHSS PVP",(MethodInfo *)0x0);
          bVar26 = false;
          if (bVar13) {
            pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
            if (pSVar8 == (Settings_InGameSet_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar4 = (pSVar8->fields).General;
            if (pSVar4 == (Settings_InGameGeneralSettings_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar5 = (pSVar4->fields).GameMode;
            if (pSVar5 == (Settings_StringSetting_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar13 = System_String__op_Inequality
                               ((pSVar5->fields)._value,"None",(MethodInfo *)0x0);
            if (bVar13) {
              pSVar6 = (pMStack_80->fields).customAssets;
              if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar26 = true;
              if ((pSVar6->fields)._size == 0) {
                pSVar11 = (pMStack_80->fields).objects;
                if (pSVar11 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar26 = (pSVar11->fields)._size != 0;
              }
            }
            else {
              bVar26 = false;
            }
          }
        }
      }
    }
  }
  if (pMVar12 != (Map_MapLoader__LoadObjectsCoroutine_d__50_o *)0x0) {
    (pMVar12->fields)._gamemodeNeedsNav_5__2 = bVar26;
    if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    }
    pMVar12 = pMStack_80;
    bVar13 = true;
    if (TypeInfo_Map_MapManager->static_fields->NeedsNavMeshUpdate == false) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pMVar18 = TypeInfo_Map_MapLoader->static_fields;
      if (pMVar18->_hasNavMeshData != false) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          pMVar18 = TypeInfo_Map_MapLoader->static_fields;
        }
        bVar13 = pMVar18->_navMeshModified;
      }
    }
    if (pMVar12 != (Map_MapLoader__LoadObjectsCoroutine_d__50_o *)0x0) {
      (pMVar12->fields)._rebuildNavMesh_5__3 = bVar13;
      if ((pMStack_80->fields)._rebuildNavMesh_5__3 == false) {
        bVar23 = 0;
      }
      else {
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        bVar23 = 0;
        bVar13 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        if (bVar13) {
          pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
          if (pSVar8 == (Settings_InGameSet_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar9 = (pSVar8->fields).Titan;
          if (pSVar9 == (Settings_InGameTitanSettings_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar10 = (pSVar9->fields).TitanSmartMovement;
          if (pSVar10 == (Settings_BoolSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar23 = (pSVar10->fields)._value;
        }
      }
      (pMStack_80->fields)._count_5__4 = 0;
      (pMStack_80->fields)._multiplier_5__5 =
           *(float *)(&g_data_0100aaf8 + (ulong)((bVar23 & (pMStack_80->fields)._gamemodeNeedsNav_5__2) == 0) * 4
                     );
      pSVar11 = (pMStack_80->fields).objects;
      if (pSVar11 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_object___GetEnumerator
                (&SStack_70,(System_Collections_Generic_List_object__o *)pSVar11,
                 (MethodInfo_395E050 *)
                 MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
      pMStack_38 = (Map_MapScriptBaseObject_o *)SStack_70.fields._current;
      pSStack_48 = SStack_70.fields._list;
      iStack_40 = SStack_70.fields._index;
      iStack_3c = SStack_70.fields._version;
      (pMStack_80->fields).__7__wrap8.fields._current = (Map_MapScriptBaseObject_o *)SStack_70.fields._current
      ;
      (pMStack_80->fields).__7__wrap8.fields._list = SStack_70.fields._list;
      (pMStack_80->fields).__7__wrap8.fields._index = SStack_70.fields._index;
      (pMStack_80->fields).__7__wrap8.fields._version = SStack_70.fields._version;
      Il2CppCodeGenWriteBarrier((void **)&(pMStack_80->fields).__7__wrap8);
      (pMStack_80->fields).__1__state = -4;
      __this = pMStack_80;
      while( true ) {
        bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o *)
                            &(__this->fields).__7__wrap8,
                            (MethodInfo_4C45C50 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext
                           );
        pMVar12 = pMStack_80;
        if (!bVar13) break;
        scriptObject = (pMStack_80->fields).__7__wrap8.fields._current;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        if (scriptObject == (Map_MapScriptBaseObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
                    TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (__this_01 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_00 = &(scriptObject->fields).Id;
        bVar13 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                           (__this_01,*__this_00,
                            (MethodInfo_4A0F950 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        if (bVar13) {
          pSVar19 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
          pSVar19 = System_String__Concat_5301f10
                              ("Failed to load map object ",pSVar19,": duplicate ID",(MethodInfo *)0x0);
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          Map_MapLoader__ReportError(pSVar19,(MethodInfo *)0x0);
        }
        else {
          bVar13 = (pMStack_80->fields).editor;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          Map_MapLoader__LoadObject(scriptObject,bVar13,(MethodInfo *)0x0);
        }
        iVar24 = (pMStack_80->fields)._count_5__4;
        __this = pMStack_80;
        if (((iVar24 * -0x3d70a3d7 + 0x51eb850U >> 2 | iVar24 * 0x40000000) < 0x28f5c29) &&
           (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 2)) {
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            iVar24 = (pMStack_80->fields)._count_5__4;
          }
          pSVar11 = (pMStack_80->fields).objects;
          if (pSVar11 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar7 = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
          if (pUVar7 == (UI_LoadingMenu_o *)0x0) {
            ThrowNullReferenceException();
          }
          UI_LoadingMenu__UpdateLoading
                    (pUVar7,((float)iVar24 / (float)(pSVar11->fields)._size) *
                            (pMStack_80->fields)._multiplier_5__5 + 0.5,false,false,(MethodInfo *)0x0);
          pIVar17 = (Il2CppObject *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
          UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar17,(MethodInfo *)0x0);
          (pMStack_80->fields).__2__current = pIVar17;
          Il2CppCodeGenWriteBarrier(&(pMStack_80->fields).__2__current);
          (pMStack_80->fields).__1__state = 2;
          return true;
        }
label_0599cf4b:
        (__this->fields)._count_5__4 = iVar24 + 1;
      }
      if (Il2CppMethodInitialized_07545a6d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
        Il2CppMethodInitialized_07545a6d = '\x01';
      }
      (pMVar12->fields).__1__state = -1;
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&(pMVar12->fields).__7__wrap8,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
      (pMStack_80->fields).__7__wrap8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
      (pMStack_80->fields).__7__wrap8.fields._index = 0;
      (pMStack_80->fields).__7__wrap8.fields._version = 0;
      (pMStack_80->fields).__7__wrap8.fields._current = (Map_MapScriptBaseObject_o *)0x0;
      if ((pMStack_80->fields).editor == false) {
        if ((TypeInfo_Map_MapLoader_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader_c);
        }
        pSVar19 = "parent map objects";
        pMVar22 = TypeInfo_Map_MapLoader_c->static_fields;
        pSVar21 = pMVar22->__9__50_0;
        if (pSVar21 == (System_Action_o *)0x0) {
          if ((TypeInfo_Map_MapLoader_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader_c);
            pMVar22 = TypeInfo_Map_MapLoader_c->static_fields;
          }
          pIVar17 = (Il2CppObject *)pMVar22->__9;
          pSVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    (pSVar21,pIVar17,(intptr_t)MethodInfo_Map_MapLoader_c_LoadObjectsCoroutine_b__50_0,
                     (MethodInfo *)0x0);
          pMVar22 = TypeInfo_Map_MapLoader_c->static_fields;
          pMVar22->__9__50_0 = pSVar21;
          Il2CppCodeGenWriteBarrier(&pMVar22->__9__50_0);
        }
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        Map_MapLoader__RunLoadStep(pSVar19,pSVar21,(MethodInfo *)0x0);
        pSVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
        System_Action___ctor
                  (pSVar21,(Il2CppObject *)pMVar3,(intptr_t)MethodInfo_Map_MapLoader_Batch,(MethodInfo *)0x0);
        Map_MapLoader__RunLoadStep("batch map objects",pSVar21,(MethodInfo *)0x0);
        pSVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
        System_Action___ctor
                  (pSVar21,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Map_MapDestruction_Build,(MethodInfo *)0x0
                  );
        Map_MapLoader__RunLoadStep("build map destruction",pSVar21,(MethodInfo *)0x0);
        uVar1 = (pMStack_80->fields)._rebuildNavMesh_5__3;
      }
      else {
        uVar1 = (pMStack_80->fields)._rebuildNavMesh_5__3;
      }
      if ((bool)uVar1 == false) {
        if (*(uint32_t *)((long)TypeInfo_Map_MapLoader + 0xe4) == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        bVar13 = Map_MapLoader__get_HasNavMesh((MethodInfo *)0x0);
        if (bVar13) {
          if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
          }
          bVar13 = Map_MapDestruction__get_IsActive((MethodInfo *)0x0);
          if (bVar13) {
            pSVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
            System_Action___ctor
                      (pSVar21,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Map_MapLoader_CollectNavMeshSources,
                       (MethodInfo *)0x0);
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            Map_MapLoader__RunLoadStep("collect navmesh sources",pSVar21,(MethodInfo *)0x0);
          }
        }
      }
      else {
        UnityEngine_AI_NavMesh__RemoveAllNavMeshData((MethodInfo *)0x0);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pMVar18 = TypeInfo_Map_MapLoader->static_fields;
        pMVar18->_hasNavMeshData = false;
        pMVar18->_navMeshModified = false;
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        bVar23 = 0;
        bVar13 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        if (bVar13) {
          pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
          if (pSVar8 == (Settings_InGameSet_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar9 = (pSVar8->fields).Titan;
          if (pSVar9 == (Settings_InGameTitanSettings_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar10 = (pSVar9->fields).TitanSmartMovement;
          if (pSVar10 == (Settings_BoolSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar23 = (pSVar10->fields)._value;
        }
        if ((bVar23 & (pMStack_80->fields)._gamemodeNeedsNav_5__2) != 0) {
          pMVar14 = (pMStack_80->fields).__8__1;
          pSVar20 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AsyncOperation);
          System_Collections_Generic_List_object____ctor
                    ((System_Collections_Generic_List_object__o *)pSVar20,
                     (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_AsyncOperation_ctor);
          if (pMVar14 == (Map_MapLoader___c__DisplayClass50_0_o *)0x0) {
            ThrowNullReferenceException();
          }
          (pMVar14->fields).operations = pSVar20;
          Il2CppCodeGenWriteBarrier(&(pMVar14->fields).operations);
          pMVar14 = (pMStack_80->fields).__8__1;
          pSVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    (pSVar21,(Il2CppObject *)pMVar14,
                     (intptr_t)MethodInfo_Map_MapLoader_c__DisplayClass50_0_LoadObjectsCoroutine_b__1,
                     (MethodInfo *)0x0);
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          bVar13 = Map_MapLoader__RunLoadStep("build navmesh",pSVar21,(MethodInfo *)0x0);
          (pMStack_80->fields)._navMeshStarted_5__10 = bVar13;
          pMVar14 = (pMStack_80->fields).__8__1;
          __this = pMStack_80;
joined_r0x0599c459:
          if (pMVar14 == (Map_MapLoader___c__DisplayClass50_0_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar20 = (pMVar14->fields).operations;
          if (pSVar20 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
            ThrowNullReferenceException();
          }
          if (0 < (pSVar20->fields)._size) {
            iVar24 = 0;
            fStack_74 = 1.0;
            do {
              pSVar20 = (pMVar14->fields).operations;
              if (pSVar20 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
                ThrowNullReferenceException();
              }
              if ((pSVar20->fields)._size <= iVar24) {
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                pUVar7 = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
                if (pUVar7 == (UI_LoadingMenu_o *)0x0) {
                  ThrowNullReferenceException();
                }
                UI_LoadingMenu__UpdateLoading(pUVar7,fStack_74 * 0.25 + 0.75,false,false,(MethodInfo *)0x0);
                pIVar17 = (Il2CppObject *)
                          il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
                UnityEngine_WaitForEndOfFrame___ctor
                          ((UnityEngine_WaitForEndOfFrame_o *)pIVar17,(MethodInfo *)0x0);
                (pMStack_80->fields).__2__current = pIVar17;
                Il2CppCodeGenWriteBarrier(&(pMStack_80->fields).__2__current);
                (pMStack_80->fields).__1__state = 3;
                return true;
              }
              pUVar15 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar20,iVar24,
                                   (MethodInfo_395CF20 *)
                                   MethodInfo_System_Collections_Generic_List_AsyncOperation_get_Item);
              if (pUVar15 == (UnityEngine_AsyncOperation_o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar13 = UnityEngine_AsyncOperation__get_isDone(pUVar15,(MethodInfo *)0x0);
              pMVar14 = (pMStack_80->fields).__8__1;
              if (bVar13) {
                if (pMVar14 == (Map_MapLoader___c__DisplayClass50_0_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar20 = (pMVar14->fields).operations;
                if (pSVar20 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
                  ThrowNullReferenceException();
                }
                System_Collections_Generic_List_object___RemoveAt
                          ((System_Collections_Generic_List_object__o *)pSVar20,iVar24,
                           (MethodInfo_395F100 *)
                           MethodInfo_System_Collections_Generic_List_AsyncOperation_RemoveAt);
                iVar24 = iVar24 + -1;
              }
              else {
                if (pMVar14 == (Map_MapLoader___c__DisplayClass50_0_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar20 = (pMVar14->fields).operations;
                if (pSVar20 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar15 = System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar20,iVar24,
                                     (MethodInfo_395CF20 *)
                                     MethodInfo_System_Collections_Generic_List_AsyncOperation_get_Item);
                if (pUVar15 == (UnityEngine_AsyncOperation_o *)0x0) {
                  ThrowNullReferenceException();
                }
                fVar27 = UnityEngine_AsyncOperation__get_progress(pUVar15,(MethodInfo *)0x0);
                if (fVar27 <= fStack_74) {
                  fStack_74 = fVar27;
                }
              }
              iVar24 = iVar24 + 1;
              pMVar14 = (pMStack_80->fields).__8__1;
              if (pMVar14 == (Map_MapLoader___c__DisplayClass50_0_o *)0x0) {
                ThrowNullReferenceException();
              }
            } while( true );
          }
          bVar13 = (__this->fields)._navMeshStarted_5__10;
          if ((((Il2CppClass *)TypeInfo_Map_MapLoader)->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          TypeInfo_Map_MapLoader->static_fields->_hasNavMeshData = bVar13;
        }
      }
      if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
      }
      TypeInfo_Map_MapManager->static_fields->MapLoaded = true;
      return false;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader.<LoadObjectsCoroutine>d__50$$<>m__Finally1
// il2cpp: void Map_MapLoader__LoadObjectsCoroutine_d__50____m__Finally1 (Map_MapLoader__LoadObjectsCoroutine_d__50_o* __this, const MethodInfo* method);
// 0x599d9d0

void Map_MapLoader__LoadObjectsCoroutine_d__50____m__Finally1
               (Map_MapLoader__LoadObjectsCoroutine_d__50_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545a6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    Il2CppMethodInitialized_07545a6c = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap5,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  return;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__50$$<>m__Finally2
// il2cpp: void Map_MapLoader__LoadObjectsCoroutine_d__50____m__Finally2 (Map_MapLoader__LoadObjectsCoroutine_d__50_o* __this, const MethodInfo* method);
// 0x599da10

void Map_MapLoader__LoadObjectsCoroutine_d__50____m__Finally2
               (Map_MapLoader__LoadObjectsCoroutine_d__50_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545a6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
    Il2CppMethodInitialized_07545a6d = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap8,
             (MethodInfo_4C45C40 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
  return;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__50$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Map_MapLoader__LoadObjectsCoroutine_d__50__System_Collections_Generic_IEnumerator_System_Object__get_Current (Map_MapLoader__LoadObjectsCoroutine_d__50_o* __this, const MethodInfo* method);
// 0x599da50

Il2CppObject *
Map_MapLoader__LoadObjectsCoroutine_d__50__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Map_MapLoader__LoadObjectsCoroutine_d__50_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__50$$System.Collections.IEnumerator.Reset
// il2cpp: void Map_MapLoader__LoadObjectsCoroutine_d__50__System_Collections_IEnumerator_Reset (Map_MapLoader__LoadObjectsCoroutine_d__50_o* __this, const MethodInfo* method);
// 0x599da60

void Map_MapLoader__LoadObjectsCoroutine_d__50__System_Collections_IEnumerator_Reset
               (Map_MapLoader__LoadObjectsCoroutine_d__50_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Map_MapLoader_LoadObjectsCoroutine_d__50_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Map.MapLoader.<LoadObjectsCoroutine>d__50$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Map_MapLoader__LoadObjectsCoroutine_d__50__System_Collections_IEnumerator_get_Current (Map_MapLoader__LoadObjectsCoroutine_d__50_o* __this, const MethodInfo* method);
// 0x599daa0

Il2CppObject *
Map_MapLoader__LoadObjectsCoroutine_d__50__System_Collections_IEnumerator_get_Current
          (Map_MapLoader__LoadObjectsCoroutine_d__50_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.MapLoader.<RefreshNavMesh>d__58$$.ctor
// il2cpp: void Map_MapLoader__RefreshNavMesh_d__58___ctor (Map_MapLoader__RefreshNavMesh_d__58_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x599dab0

void Map_MapLoader__RefreshNavMesh_d__58___ctor
               (Map_MapLoader__RefreshNavMesh_d__58_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Map.MapLoader.<RefreshNavMesh>d__58$$System.IDisposable.Dispose
// il2cpp: void Map_MapLoader__RefreshNavMesh_d__58__System_IDisposable_Dispose (Map_MapLoader__RefreshNavMesh_d__58_o* __this, const MethodInfo* method);
// 0x599dad0

void Map_MapLoader__RefreshNavMesh_d__58__System_IDisposable_Dispose
               (Map_MapLoader__RefreshNavMesh_d__58_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 != 2) && (iVar1 != -3)) {
    return;
  }
  if (Il2CppMethodInitialized_07545a6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_Dispose);
    Il2CppMethodInitialized_07545a6f = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap3,
             (MethodInfo_4C45C40 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_Dispose);
  return;
}


// Map.MapLoader.<RefreshNavMesh>d__58$$MoveNext
// il2cpp: bool Map_MapLoader__RefreshNavMesh_d__58__MoveNext (Map_MapLoader__RefreshNavMesh_d__58_o* __this, const MethodInfo* method);
// 0x599db20
// eh: try 0x599dc9f..0x599e293 -> pad 0x599e25c (+21 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x599e29e..0x599e2a8 -> pad 0x599e30a catch (...) [compiler noexcept guard]
// eh: try 0x599e2c0..0x599e2c5 -> pad 0x599e2f2 cleanup
// eh: try 0x599e2f5..0x599e302 -> pad 0x599e30a catch (...) [compiler noexcept guard]
// asm: 54 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x599e246: jmp 0x599e25e
// asm:   0x599e248: jmp 0x599e25e
// asm:   0x599e24a: jmp 0x599e25e
// asm:   0x599e24c: jmp 0x599e25e
// asm:   0x599e24e: jmp 0x599e25e
// asm:   0x599e250: jmp 0x599e25e
// asm:   0x599e252: jmp 0x599e25e
// asm:   0x599e254: jmp 0x599e25e
// asm:   0x599e256: jmp 0x599e25e
// asm:   0x599e258: jmp 0x599e25e
// asm:   0x599e25a: jmp 0x599e25e
// asm:   0x599e25c: jmp 0x599e25e
// asm:   0x599e25e: mov rbx, rdx
// asm:   0x599e261: mov r14, rax
// asm:   0x599e264: jmp 0x599e2a8
// asm:   0x599e266: jmp 0x599e26c
// asm:   0x599e268: jmp 0x599e26c
// asm:   0x599e26a: jmp 0x599e26c
// asm:   0x599e26c: mov rbx, rdx
// asm:   0x599e26f: mov r14, rax
// asm:   0x599e272: cmp ebx, 1
// asm:   0x599e275: jne 0x599e29e
// asm:   0x599e277: mov rdi, r14
// asm:   0x599e27a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x599e27f: mov rcx, qword ptr [rax]
// asm:   0x599e282: mov qword ptr [rsp + 0x68], rcx
// asm:   0x599e287: mov qword ptr [rsp + 0x70], rcx
// asm:   0x599e28c: xor ebx, ebx
// asm:   0x599e28e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599e293: jmp 0x599e08d
// asm:   0x599e298: mov rbx, rdx
// asm:   0x599e29b: mov r14, rax
// asm:   0x599e29e: lea rdi, [rsp + 0x70]
// asm:   0x599e2a3: call 0x2fd4bd0  ; il2cpp_runtime_helper_02fd4bd0()
// asm:   0x599e2a8: cmp ebx, 1
// asm:   0x599e2ab: jne 0x599e2f5
// asm:   0x599e2ad: mov rdi, r14
// asm:   0x599e2b0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x599e2b5: mov rbx, qword ptr [rax]
// asm:   0x599e2b8: mov qword ptr [rsp + 0x80], rbx
// asm:   0x599e2c0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599e2c5: test rbx, rbx
// asm:   0x599e2c8: jne 0x599e2e0
// asm:   0x599e2e0: mov rdi, qword ptr [rsp + 0x60]
// asm:   0x599e2e5: call 0x2fd4fb0  ; il2cpp_runtime_helper_02fd4fb0()
// asm:   0x599e2ea: mov rdi, rbx
// asm:   0x599e2ed: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x599e2f2: mov r14, rax
// asm:   0x599e2f5: lea rdi, [rsp + 0x80]
// asm:   0x599e2fd: call 0x2fd4c00  ; il2cpp_runtime_helper_02fd4c00()
// asm:   0x599e302: mov rdi, r14
// asm:   0x599e305: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x599e30a: mov rdi, rax
// asm:   0x599e30d: call 0x2ab61e0  ; __clang_call_terminate()

bool Map_MapLoader__RefreshNavMesh_d__58__MoveNext
               (Map_MapLoader__RefreshNavMesh_d__58_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  UnityEngine_AsyncOperation_array *pUVar5;
  UnityEngine_AI_NavMeshBuildSettings_o buildSettings;
  UnityEngine_Bounds_o localBounds;
  MethodInfo *pMVar6;
  Map_MapLoader__RefreshNavMesh_d__58_o *pMVar7;
  Il2CppObject *data;
  bool bVar8;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  System_Collections_Generic_List_AsyncOperation__o *pSVar9;
  Map_MapLoader_StaticFields *pMVar10;
  UnityEngine_AsyncOperation_o *item;
  int32_t iVar11;
  Map_MapLoader__RefreshNavMesh_d__58_o *pMStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  System_Collections_Generic_List_Enumerator_T__o *pSStack_1d0;
  undefined8 uStack_1c8;
  Map_MapLoader__RefreshNavMesh_d__58_o **ppMStack_1c0;
  System_Collections_Generic_List_T__o *pSStack_1b8;
  undefined8 uStack_1b0;
  UnityEngine_AsyncOperation_o *pUStack_1a8;
  System_Collections_Generic_List_T__o *pSStack_1a0;
  undefined8 uStack_198;
  UnityEngine_AsyncOperation_o *pUStack_190;
  System_Collections_Generic_List_T__o *pSStack_188;
  undefined8 uStack_180;
  UnityEngine_AsyncOperation_o *pUStack_178;
  System_Collections_Generic_List_T__o *pSStack_170;
  undefined8 uStack_168;
  System_Collections_Generic_List_Enumerator_T__o SStack_158;
  System_Collections_Generic_List_T__o *pSStack_140;
  int32_t iStack_138;
  int32_t iStack_134;
  UnityEngine_AsyncOperation_o *pUStack_130;
  System_Collections_Generic_List_T__o *pSStack_128;
  int32_t iStack_120;
  int32_t iStack_11c;
  System_Collections_Generic_List_Enumerator_T__o SStack_118;
  System_Collections_Generic_List_T__o *pSStack_100;
  int32_t iStack_f8;
  int32_t iStack_f4;
  UnityEngine_AsyncOperation_o *pUStack_f0;
  System_Collections_Generic_List_T__o *pSStack_e8;
  int32_t iStack_e0;
  int32_t iStack_dc;
  UnityEngine_AsyncOperation_o *pUStack_d8;
  System_Collections_Generic_List_T__o *pSStack_d0;
  int32_t iStack_c8;
  int32_t iStack_c4;
  UnityEngine_AsyncOperation_o *pUStack_c0;
  System_Collections_Generic_List_T__o *pSStack_b8;
  int32_t iStack_b0;
  int32_t iStack_ac;
  System_Collections_Generic_List_Enumerator_T__o SStack_a8;
  System_Collections_Generic_List_T__o *pSStack_90;
  undefined8 uStack_88;
  UnityEngine_AsyncOperation_o *pUStack_80;
  System_Collections_Generic_List_T__o *pSStack_78;
  undefined8 uStack_70;
  UnityEngine_AsyncOperation_o *pUStack_68;
  System_Collections_Generic_List_T__o *pSStack_60;
  undefined8 uStack_58;
  UnityEngine_AsyncOperation_o *pUStack_50;
  System_Collections_Generic_List_T__o *pSStack_48;
  undefined8 uStack_40;
  
  pMStack_1e8 = __this;
  if (Il2CppMethodInitialized_07545a6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapLoader_NavMeshBuild_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapLoader_NavMeshBuild_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapLoader_NavMeshBuild_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AsyncOperation_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AsyncOperation_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapLoader_NavMeshBuild_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AsyncOperation_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AsyncOperation_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AsyncOperation);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSecondsRealtime);
    Il2CppMethodInitialized_07545a6e = '\x01';
  }
  pSStack_48 = (System_Collections_Generic_List_T__o *)0x0;
  uStack_40._0_4_ = 0;
  uStack_40._4_4_ = 0;
  uStack_58._0_4_ = 0;
  uStack_58._4_4_ = 0;
  pUStack_50 = (UnityEngine_AsyncOperation_o *)0x0;
  pUStack_68 = (UnityEngine_AsyncOperation_o *)0x0;
  pSStack_60 = (System_Collections_Generic_List_T__o *)0x0;
  pSStack_78 = (System_Collections_Generic_List_T__o *)0x0;
  uStack_70._0_4_ = 0;
  uStack_70._4_4_ = 0;
  uStack_88._0_4_ = 0;
  uStack_88._4_4_ = 0;
  pUStack_80 = (UnityEngine_AsyncOperation_o *)0x0;
  SStack_a8.fields._current = (Il2CppObject *)0x0;
  pSStack_90 = (System_Collections_Generic_List_T__o *)0x0;
  SStack_a8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_a8.fields._index = 0;
  SStack_a8.fields._version = 0;
  pUStack_178 = (UnityEngine_AsyncOperation_o *)0x0;
  pSStack_170 = (System_Collections_Generic_List_T__o *)0x0;
  pSStack_188 = (System_Collections_Generic_List_T__o *)0x0;
  uStack_180._0_4_ = 0;
  uStack_180._4_4_ = 0;
  uStack_198._0_4_ = 0;
  uStack_198._4_4_ = 0;
  pUStack_190 = (UnityEngine_AsyncOperation_o *)0x0;
  pUStack_1a8 = (UnityEngine_AsyncOperation_o *)0x0;
  pSStack_1a0 = (System_Collections_Generic_List_T__o *)0x0;
  pSStack_1b8 = (System_Collections_Generic_List_T__o *)0x0;
  uStack_1b0._0_4_ = 0;
  uStack_1b0._4_4_ = 0;
  uStack_168._0_4_ = 0;
  uStack_168._4_4_ = 0;
  uStack_1c8 = 0;
  ppMStack_1c0 = &pMStack_1e8;
  iVar3 = (__this->fields).__1__state;
  if (iVar3 == 2) {
label_0599e125:
    (__this->fields).__1__state = -3;
    bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap3,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_MoveNext);
    pMVar7 = pMStack_1e8;
    if (bVar8) {
      (pMStack_1e8->fields).__2__current = (Il2CppObject *)(pMStack_1e8->fields).__7__wrap3.fields._current;
      iVar11 = 2;
      Il2CppCodeGenWriteBarrier(&(pMStack_1e8->fields).__2__current);
      goto label_0599e164;
    }
    if (Il2CppMethodInitialized_07545a6f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_Dispose);
      Il2CppMethodInitialized_07545a6f = '\x01';
    }
    (pMVar7->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&(pMVar7->fields).__7__wrap3,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_Dispose);
    (pMStack_1e8->fields).__7__wrap3.fields._list = (System_Collections_Generic_List_T__o *)0x0;
    (pMStack_1e8->fields).__7__wrap3.fields._index = 0;
    (pMStack_1e8->fields).__7__wrap3.fields._version = 0;
    (pMStack_1e8->fields).__7__wrap3.fields._current = (UnityEngine_AsyncOperation_o *)0x0;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) goto label_0599e1d7;
label_0599dd1e:
    pMVar10 = TypeInfo_Map_MapLoader->static_fields;
    cVar2 = pMVar10->_navMeshRefreshPending;
  }
  else {
    if (iVar3 == 1) {
      (__this->fields).__1__state = -1;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        __this = pMStack_1e8;
      }
      pMVar10 = TypeInfo_Map_MapLoader->static_fields;
      pMVar10->_navMeshRefreshPending = false;
      pSVar9 = (__this->fields)._operations_5__3;
      if (pSVar9 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
        ThrowNullReferenceException();
      }
      piVar1 = &(pSVar9->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar11 = (pSVar9->fields)._size;
      (pSVar9->fields)._size = 0;
      if (0 < iVar11) {
        System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar11,(MethodInfo *)0x0);
        pMVar10 = TypeInfo_Map_MapLoader->static_fields;
      }
      if (pMVar10->_navMeshBuilds == (System_Collections_Generic_List_MapLoader_NavMeshBuild__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_MapLoader_NavMeshBuild___GetEnumerator
                (&SStack_118,pMVar10->_navMeshBuilds,
                 (MethodInfo_3ABB030 *)
                 MethodInfo_System_Collections_Generic_List_MapLoader_NavMeshBuild_GetEnumerator);
      pSStack_48 = pSStack_b8;
      uStack_40._0_4_ = iStack_b0;
      uStack_40._4_4_ = iStack_ac;
      uStack_58._0_4_ = iStack_c8;
      uStack_58._4_4_ = iStack_c4;
      pUStack_50 = pUStack_c0;
      pUStack_68 = pUStack_d8;
      pSStack_60 = pSStack_d0;
      pSStack_78 = pSStack_e8;
      uStack_70._0_4_ = iStack_e0;
      uStack_70._4_4_ = iStack_dc;
      uStack_88._0_4_ = iStack_f8;
      uStack_88._4_4_ = iStack_f4;
      pUStack_80 = pUStack_f0;
      SStack_a8.fields._current = SStack_118.fields._current;
      pSStack_90 = pSStack_100;
      SStack_a8.fields._list = SStack_118.fields._list;
      SStack_a8.fields._index = SStack_118.fields._index;
      SStack_a8.fields._version = SStack_118.fields._version;
      uStack_1d8 = 0;
      lStack_1e0 = 0;
      pSStack_1d0 = &SStack_a8;
      while (bVar8 = System_Collections_Generic_List_Enumerator_MapLoader_NavMeshBuild___MoveNext
                               (&SStack_a8,
                                (MethodInfo_4C82750 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_MapLoader_NavMeshBuild_MoveNext
                               ), data = SStack_a8.fields._current, bVar8) {
        pSStack_1b8 = pSStack_90;
        uStack_1b0._0_4_ = (int32_t)uStack_88;
        uStack_1b0._4_4_ = uStack_88._4_4_;
        pUStack_1a8 = pUStack_80;
        pSStack_1a0 = pSStack_78;
        uStack_198._0_4_ = (int32_t)uStack_70;
        uStack_198._4_4_ = uStack_70._4_4_;
        pUStack_190 = pUStack_68;
        pSStack_188 = pSStack_60;
        uStack_180._0_4_ = (int32_t)uStack_58;
        uStack_180._4_4_ = uStack_58._4_4_;
        pUStack_178 = pUStack_50;
        pSStack_170 = pSStack_48;
        uStack_168._0_4_ = (int32_t)uStack_40;
        uStack_168._4_4_ = uStack_40._4_4_;
        pSVar9 = (pMStack_1e8->fields)._operations_5__3;
        pSStack_128 = pSStack_60;
        iStack_120 = (int32_t)uStack_58;
        iStack_11c = uStack_58._4_4_;
        iStack_138 = (int32_t)uStack_70;
        iStack_134 = uStack_70._4_4_;
        pUStack_130 = pUStack_68;
        SStack_158.fields._current = (Il2CppObject *)pUStack_80;
        pSStack_140 = pSStack_78;
        SStack_158.fields._list = pSStack_90;
        SStack_158.fields._index = (int32_t)uStack_88;
        SStack_158.fields._version = uStack_88._4_4_;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        iStack_c8 = (int32_t)uStack_168;
        iStack_c4 = uStack_168._4_4_;
        pUStack_d8 = pUStack_178;
        pSStack_d0 = pSStack_170;
        pSStack_e8 = pSStack_188;
        iStack_e0 = (int32_t)uStack_180;
        iStack_dc = uStack_180._4_4_;
        iStack_f8 = (int32_t)uStack_198;
        iStack_f4 = uStack_198._4_4_;
        pUStack_f0 = pUStack_190;
        SStack_118.fields._current = (Il2CppObject *)pUStack_1a8;
        pSStack_100 = pSStack_1a0;
        SStack_118.fields._list = pSStack_1b8;
        SStack_118.fields._index = (int32_t)uStack_1b0;
        SStack_118.fields._version = uStack_1b0._4_4_;
        buildSettings.fields.m_AgentHeight = (float)SStack_158.fields._index;
        buildSettings.fields.m_AgentSlope = (float)SStack_158.fields._version;
        buildSettings.fields._0_8_ = SStack_158.fields._list;
        buildSettings.fields._16_8_ = SStack_158.fields._current;
        buildSettings.fields._24_8_ = pSStack_140;
        buildSettings.fields.m_OverrideVoxelSize = iStack_138;
        buildSettings.fields.m_VoxelSize = (float)iStack_134;
        buildSettings.fields._40_8_ = pUStack_130;
        buildSettings.fields._48_8_ = pSStack_128;
        buildSettings.fields._56_8_ = _iStack_120;
        localBounds.fields._8_8_ = pSStack_170;
        localBounds.fields.m_Center.fields._0_8_ = pUStack_178;
        localBounds.fields.m_Extents.fields.y = (float)(int32_t)uStack_168;
        localBounds.fields.m_Extents.fields.z = (float)uStack_168._4_4_;
        item = UnityEngine_AI_NavMeshBuilder__UpdateNavMeshDataAsync
                         ((UnityEngine_AI_NavMeshData_o *)data,buildSettings,
                          TypeInfo_Map_MapLoader->static_fields->_navMeshSources,localBounds,(MethodInfo *)0x0
                         );
        pMVar6 = MethodInfo_System_Collections_Generic_List_AsyncOperation_Add;
        if (pSVar9 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
label_0599e22d:
          ThrowNullReferenceException();
        }
        piVar1 = &(pSVar9->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar5 = (pSVar9->fields)._items;
        if (pUVar5 == (UnityEngine_AsyncOperation_array *)0x0) goto label_0599e22d;
        uVar4 = (pSVar9->fields)._size;
        if (uVar4 < (uint)pUVar5->max_length) {
          (pSVar9->fields)._size = uVar4 + 1;
          pUVar5->m_Items[(int)uVar4] = item;
          Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar4);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)item,
                     (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
        }
      }
      System_Collections_Generic_List_Enumerator_MapLoader_NavMeshBuild___Dispose
                (&SStack_a8,
                 (MethodInfo_4C82740 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapLoader_NavMeshBuild_Dispose);
      if (lStack_1e0 != 0) {
        il2cpp_codegen_rethrow();
      }
      pSVar9 = (pMStack_1e8->fields)._operations_5__3;
      if (pSVar9 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_object___GetEnumerator
                (&SStack_158,(System_Collections_Generic_List_object__o *)pSVar9,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_AsyncOperation_GetEnumerator
                );
      SStack_118.fields._current = SStack_158.fields._current;
      SStack_118.fields._list = SStack_158.fields._list;
      SStack_118.fields._index = SStack_158.fields._index;
      SStack_118.fields._version = SStack_158.fields._version;
      (pMStack_1e8->fields).__7__wrap3.fields._current =
           (UnityEngine_AsyncOperation_o *)SStack_158.fields._current;
      (pMStack_1e8->fields).__7__wrap3.fields._list = SStack_158.fields._list;
      (pMStack_1e8->fields).__7__wrap3.fields._index = SStack_158.fields._index;
      (pMStack_1e8->fields).__7__wrap3.fields._version = SStack_158.fields._version;
      Il2CppCodeGenWriteBarrier((void **)&(pMStack_1e8->fields).__7__wrap3);
      __this = pMStack_1e8;
      goto label_0599e125;
    }
    if (iVar3 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSecondsRealtime);
    UnityEngine_WaitForSecondsRealtime___ctor(__this_00,1.0,(MethodInfo *)0x0);
    (pMStack_1e8->fields)._delay_5__2 = __this_00;
    Il2CppCodeGenWriteBarrier(&(pMStack_1e8->fields)._delay_5__2);
    pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AsyncOperation)
    ;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar9,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_AsyncOperation_ctor);
    (pMStack_1e8->fields)._operations_5__3 = pSVar9;
    Il2CppCodeGenWriteBarrier(&(pMStack_1e8->fields)._operations_5__3);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor != 0) goto label_0599dd1e;
label_0599e1d7:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    pMVar10 = TypeInfo_Map_MapLoader->static_fields;
    cVar2 = pMVar10->_navMeshRefreshPending;
  }
  if (cVar2 == '\0') {
    if ((((Il2CppClass *)TypeInfo_Map_MapLoader)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      pMVar10 = TypeInfo_Map_MapLoader->static_fields;
    }
    pMVar10->_navMeshRefresh = (UnityEngine_Coroutine_o *)0x0;
    Il2CppCodeGenWriteBarrier(&pMVar10->_navMeshRefresh);
    return false;
  }
  (pMStack_1e8->fields).__2__current = (Il2CppObject *)(pMStack_1e8->fields)._delay_5__2;
  iVar11 = 1;
  Il2CppCodeGenWriteBarrier(&(pMStack_1e8->fields).__2__current);
label_0599e164:
  (pMStack_1e8->fields).__1__state = iVar11;
  return true;
}


// Map.MapLoader.<RefreshNavMesh>d__58$$<>m__Finally1
// il2cpp: void Map_MapLoader__RefreshNavMesh_d__58____m__Finally1 (Map_MapLoader__RefreshNavMesh_d__58_o* __this, const MethodInfo* method);
// 0x599e320

void Map_MapLoader__RefreshNavMesh_d__58____m__Finally1
               (Map_MapLoader__RefreshNavMesh_d__58_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545a6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_Dispose);
    Il2CppMethodInitialized_07545a6f = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap3,
             (MethodInfo_4C45C40 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_Dispose);
  return;
}


// Map.MapLoader.<RefreshNavMesh>d__58$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Map_MapLoader__RefreshNavMesh_d__58__System_Collections_Generic_IEnumerator_System_Object__get_Current (Map_MapLoader__RefreshNavMesh_d__58_o* __this, const MethodInfo* method);
// 0x599e360

Il2CppObject *
Map_MapLoader__RefreshNavMesh_d__58__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Map_MapLoader__RefreshNavMesh_d__58_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.MapLoader.<RefreshNavMesh>d__58$$System.Collections.IEnumerator.Reset
// il2cpp: void Map_MapLoader__RefreshNavMesh_d__58__System_Collections_IEnumerator_Reset (Map_MapLoader__RefreshNavMesh_d__58_o* __this, const MethodInfo* method);
// 0x599e370

void Map_MapLoader__RefreshNavMesh_d__58__System_Collections_IEnumerator_Reset
               (Map_MapLoader__RefreshNavMesh_d__58_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Map_MapLoader_RefreshNavMesh_d__58_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Map.MapLoader.<RefreshNavMesh>d__58$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Map_MapLoader__RefreshNavMesh_d__58__System_Collections_IEnumerator_get_Current (Map_MapLoader__RefreshNavMesh_d__58_o* __this, const MethodInfo* method);
// 0x599e3b0

Il2CppObject *
Map_MapLoader__RefreshNavMesh_d__58__System_Collections_IEnumerator_get_Current
          (Map_MapLoader__RefreshNavMesh_d__58_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.MapLoader.<UpdateAllNavMeshes>d__62$$MoveNext
// il2cpp: void Map_MapLoader__UpdateAllNavMeshes_d__62__MoveNext (Map_MapLoader__UpdateAllNavMeshes_d__62_o __this, const MethodInfo* method);
// 0x599e3c0
// eh: try 0x599e41f..0x599e593 -> pad 0x599e5a1 (+9 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x599e5b8..0x599e639 -> pad 0x599e639 (+1 call sites) cleanup
// eh: try 0x599e63c..0x599e641 -> pad 0x599e649 catch (...) [compiler noexcept guard]
// asm: 50 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x599e593: jmp 0x599e5a1
// asm:   0x599e595: jmp 0x599e5a1
// asm:   0x599e597: jmp 0x599e5a1
// asm:   0x599e599: jmp 0x599e5a1
// asm:   0x599e59b: jmp 0x599e5a1
// asm:   0x599e59d: jmp 0x599e5a1
// asm:   0x599e59f: jmp 0x599e5a1
// asm:   0x599e5a1: mov r14, rax
// asm:   0x599e5a4: cmp edx, 1
// asm:   0x599e5a7: jne 0x599e641
// asm:   0x599e5ad: mov rdi, r14
// asm:   0x599e5b0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x599e5b5: mov r14, rax
// asm:   0x599e5b8: lea rdi, [rip + 0x18d9b01]  ; TypeInfo_System_Exception
// asm:   0x599e5bf: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x599e5c4: mov rcx, qword ptr [r14]
// asm:   0x599e5c7: mov rsi, qword ptr [rcx]
// asm:   0x599e5ca: mov rdi, rax
// asm:   0x599e5cd: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x599e5d2: test al, al
// asm:   0x599e5d4: je 0x599e618
// asm:   0x599e5d6: mov r14, qword ptr [r14]
// asm:   0x599e5d9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599e5de: mov dword ptr [r15], 0xfffffffe
// asm:   0x599e5e5: add r15, 8
// asm:   0x599e5e9: lea rdi, [rip + 0x18d7448]  ; TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder
// asm:   0x599e5f0: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x599e5f5: cmp dword ptr [rax + 0xe4], 0
// asm:   0x599e5fc: jne 0x599e606
// asm:   0x599e5fe: mov rdi, rax
// asm:   0x599e601: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x599e606: mov rdi, r15
// asm:   0x599e609: mov rsi, r14
// asm:   0x599e60c: xor edx, edx
// asm:   0x599e60e: call 0x54ca610  ; System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetException()
// asm:   0x599e613: jmp 0x599e57f
// asm:   0x599e618: mov edi, 8
// asm:   0x599e61d: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x599e622: mov rcx, qword ptr [r14]
// asm:   0x599e625: mov qword ptr [rax], rcx
// asm:   0x599e628: lea rsi, [rip + 0x148eed1]
// asm:   0x599e62f: mov rdi, rax
// asm:   0x599e632: xor edx, edx
// asm:   0x599e634: call 0x6e255c0  ; __cxa_throw()
// asm:   0x599e639: mov r14, rax
// asm:   0x599e63c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599e641: mov rdi, r14
// asm:   0x599e644: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x599e649: mov rdi, rax
// asm:   0x599e64c: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapLoader__UpdateAllNavMeshes_d__62__MoveNext
               (Map_MapLoader__UpdateAllNavMeshes_d__62_o *__this,MethodInfo *method)

{
  Map_MapLoader_o *__this_00;
  bool bVar1;
  System_Threading_Tasks_Task_o *__this_01;
  System_Runtime_CompilerServices_TaskAwaiter_o local_20;
  
  if (Il2CppMethodInitialized_07545a70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TaskAwaiter_MapLoa
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07545a70 = '\x01';
  }
  local_20.fields.m_task =
       (System_Runtime_CompilerServices_TaskAwaiter_Fields)(System_Threading_Tasks_Task_o *)0x0;
  if ((__this->fields).__1__state == 0) {
    local_20.fields.m_task =
         (System_Runtime_CompilerServices_TaskAwaiter_Fields)(__this->fields).__u__1.fields.m_task;
    (__this->fields).__u__1.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
    (__this->fields).__1__state = -1;
  }
  else {
    __this_00 = (__this->fields).__4__this;
    UnityEngine_AI_NavMesh__RemoveAllNavMeshData((MethodInfo *)0x0);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    TypeInfo_Map_MapLoader->static_fields->_hasNavMeshData = false;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (!bVar1) goto label_0599e552;
    if (__this_00 == (Map_MapLoader_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_01 = Map_MapLoader__GenerateNavMesh(__this_00,(MethodInfo *)0x0);
    if (__this_01 == (System_Threading_Tasks_Task_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_20 = System_Threading_Tasks_Task__GetAwaiter(__this_01,(MethodInfo *)0x0);
    bVar1 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_20,(MethodInfo *)0x0);
    if (!bVar1) {
      (__this->fields).__1__state = 0;
      (__this->fields).__u__1.fields.m_task = (System_Threading_Tasks_Task_o *)local_20.fields.m_task;
      Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__u__1);
      if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted_TaskAwaiter__MapLoader__UpdateAllNavMeshes_d__62_
                (&(__this->fields).__t__builder,&local_20,__this,
                 (MethodInfo_3400A80 *)
                 MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TaskAwaiter_MapLoa
                );
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_20,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  TypeInfo_Map_MapLoader->static_fields->_hasNavMeshData = true;
label_0599e552:
  (__this->fields).__1__state = -2;
  if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult
            (&(__this->fields).__t__builder,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader.<UpdateAllNavMeshes>d__62$$SetStateMachine
// il2cpp: void Map_MapLoader__UpdateAllNavMeshes_d__62__SetStateMachine (Map_MapLoader__UpdateAllNavMeshes_d__62_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x599e660

void Map_MapLoader__UpdateAllNavMeshes_d__62__SetStateMachine
               (Map_MapLoader__UpdateAllNavMeshes_d__62_o *__this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545a71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
    Il2CppMethodInitialized_07545a71 = '\x01';
  }
  if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetStateMachine
            (&(__this->fields).__t__builder,stateMachine,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader.<UpdateNavMesh>d__61$$MoveNext
// il2cpp: void Map_MapLoader__UpdateNavMesh_d__61__MoveNext (Map_MapLoader__UpdateNavMesh_d__61_o __this, const MethodInfo* method);
// 0x599e6c0
// eh: try 0x599e71f..0x599e817 -> pad 0x599e821 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x599e83a..0x599e8bd -> pad 0x599e8bd (+1 call sites) cleanup
// eh: try 0x599e8c0..0x599e8c5 -> pad 0x599e8cd catch (...) [compiler noexcept guard]
// asm: 52 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x599e817: jmp 0x599e823
// asm:   0x599e819: jmp 0x599e823
// asm:   0x599e81b: jmp 0x599e823
// asm:   0x599e81d: jmp 0x599e823
// asm:   0x599e81f: jmp 0x599e823
// asm:   0x599e821: jmp 0x599e823
// asm:   0x599e823: mov r14, rax
// asm:   0x599e826: cmp edx, 1
// asm:   0x599e829: jne 0x599e8c5
// asm:   0x599e82f: mov rdi, r14
// asm:   0x599e832: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x599e837: mov r14, rax
// asm:   0x599e83a: lea rdi, [rip + 0x18d987f]  ; TypeInfo_System_Exception
// asm:   0x599e841: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x599e846: mov rcx, qword ptr [r14]
// asm:   0x599e849: mov rsi, qword ptr [rcx]
// asm:   0x599e84c: mov rdi, rax
// asm:   0x599e84f: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x599e854: test al, al
// asm:   0x599e856: je 0x599e89c
// asm:   0x599e858: mov r14, qword ptr [r14]
// asm:   0x599e85b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599e860: mov dword ptr [rbx], 0xfffffffe
// asm:   0x599e866: add rbx, 8
// asm:   0x599e86a: lea rdi, [rip + 0x18d71c7]  ; TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder
// asm:   0x599e871: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x599e876: cmp dword ptr [rax + 0xe4], 0
// asm:   0x599e87d: jne 0x599e887
// asm:   0x599e87f: mov rdi, rax
// asm:   0x599e882: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x599e887: mov rdi, rbx
// asm:   0x599e88a: mov rsi, r14
// asm:   0x599e88d: xor edx, edx
// asm:   0x599e88f: call 0x54ca610  ; System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetException()
// asm:   0x599e894: add rsp, 8
// asm:   0x599e898: pop rbx
// asm:   0x599e899: pop r14
// asm:   0x599e89b: ret 
// asm:   0x599e89c: mov edi, 8
// asm:   0x599e8a1: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x599e8a6: mov rcx, qword ptr [r14]
// asm:   0x599e8a9: mov qword ptr [rax], rcx
// asm:   0x599e8ac: lea rsi, [rip + 0x148ec4d]
// asm:   0x599e8b3: mov rdi, rax
// asm:   0x599e8b6: xor edx, edx
// asm:   0x599e8b8: call 0x6e255c0  ; __cxa_throw()
// asm:   0x599e8bd: mov r14, rax
// asm:   0x599e8c0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599e8c5: mov rdi, r14
// asm:   0x599e8c8: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x599e8cd: mov rdi, rax
// asm:   0x599e8d0: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapLoader__UpdateNavMesh_d__61__MoveNext
               (Map_MapLoader__UpdateNavMesh_d__61_o *__this,MethodInfo *method)

{
  Map_MapLoader_o *__this_00;
  bool bVar1;
  System_Threading_Tasks_Task_o *__this_01;
  System_Runtime_CompilerServices_TaskAwaiter_o local_18;
  
  if (Il2CppMethodInitialized_07545a72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TaskAwaiter_MapLoa_71a1e68
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a72 = '\x01';
  }
  local_18.fields.m_task =
       (System_Runtime_CompilerServices_TaskAwaiter_Fields)(System_Threading_Tasks_Task_o *)0x0;
  if ((__this->fields).__1__state == 0) {
    local_18.fields.m_task =
         (System_Runtime_CompilerServices_TaskAwaiter_Fields)(__this->fields).__u__1.fields.m_task;
    (__this->fields).__u__1.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
    (__this->fields).__1__state = -1;
  }
  else {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this_00 = TypeInfo_Map_MapLoader->static_fields->_instance;
    if (__this_00 == (Map_MapLoader_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_01 = Map_MapLoader__UpdateAllNavMeshes(__this_00,(MethodInfo *)0x0);
    if (__this_01 == (System_Threading_Tasks_Task_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_18 = System_Threading_Tasks_Task__GetAwaiter(__this_01,(MethodInfo *)0x0);
    bVar1 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_18,(MethodInfo *)0x0);
    if (!bVar1) {
      (__this->fields).__1__state = 0;
      (__this->fields).__u__1.fields.m_task = (System_Threading_Tasks_Task_o *)local_18.fields.m_task;
      Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__u__1);
      if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted_TaskAwaiter__MapLoader__UpdateNavMesh_d__61_
                (&(__this->fields).__t__builder,&local_18,__this,
                 (MethodInfo_3400B10 *)
                 MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TaskAwaiter_MapLoa_71a1e68
                );
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_18,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult
            (&(__this->fields).__t__builder,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader.<UpdateNavMesh>d__61$$SetStateMachine
// il2cpp: void Map_MapLoader__UpdateNavMesh_d__61__SetStateMachine (Map_MapLoader__UpdateNavMesh_d__61_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x599e8e0

void Map_MapLoader__UpdateNavMesh_d__61__SetStateMachine
               (Map_MapLoader__UpdateNavMesh_d__61_o *__this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545a73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
    Il2CppMethodInitialized_07545a73 = '\x01';
  }
  if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetStateMachine
            (&(__this->fields).__t__builder,stateMachine,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader$$get_HasNavMesh
// il2cpp: bool Map_MapLoader__get_HasNavMesh (const MethodInfo* method);
// 0x598f960

bool Map_MapLoader__get_HasNavMesh(MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Map_MapLoader_StaticFields *pMVar3;
  
  if (Il2CppMethodInitialized_07545a2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Bounds_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a2d = '\x01';
    uVar2 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    pMVar3 = TypeInfo_Map_MapLoader->static_fields;
    cVar1 = pMVar3->_hasNavMeshData;
  }
  else {
    pMVar3 = ((Il2CppClass *)TypeInfo_Map_MapLoader)->static_fields;
    cVar1 = pMVar3->_hasNavMeshData;
  }
  if (cVar1 == '\0') {
    return false;
  }
  if ((((Il2CppClass *)TypeInfo_Map_MapLoader)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    pMVar3 = TypeInfo_Map_MapLoader->static_fields;
  }
  if (pMVar3->_navMeshBounds == (System_Collections_Generic_List_Bounds__o *)0x0) {
    ThrowNullReferenceException();
  }
  return 0 < (pMVar3->_navMeshBounds->fields)._size;
}


// Map.MapLoader$$Init
// il2cpp: void Map_MapLoader__Init (const MethodInfo* method);
// 0x598fa10

void Map_MapLoader__Init(MethodInfo *method)

{
  Map_MapLoader_StaticFields *pMVar1;
  Map_MapLoader_o *pMVar2;
  Events_OnPreLoadScene_o *__this;
  Map_MapScriptBasicMaterial_o *__this_00;
  Utility_Color255_o *__this_01;
  
  if (Il2CppMethodInitialized_07545a2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapLoader_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptBasicMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_SingletonFactory_CreateSingleton_MapLoader)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"Transparent");
    Il2CppMethodInitialized_07545a2e = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pMVar2 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_Map_MapLoader->static_fields->_instance,
                      (MethodInfo_3680650 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_MapLoader);
  pMVar1 = TypeInfo_Map_MapLoader->static_fields;
  pMVar1->_instance = pMVar2;
  Il2CppCodeGenWriteBarrier(&pMVar1->_instance);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnPreLoadScene);
  Events_OnPreLoadScene___ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Map_MapLoader_OnPreLoadScene,(MethodInfo *)0x0);
  Events_EventManager__add_OnPreLoadScene(__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial);
  Map_MapScriptBasicMaterial___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Map_MapScriptBasicMaterial_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).Shader = "Transparent";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Shader);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(__this_01,0x7e,0xff,0xff,0x50,(MethodInfo *)0x0);
  (__this_00->fields).Color = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Color);
  pMVar1 = TypeInfo_Map_MapLoader->static_fields;
  pMVar1->_invisibleMaterial = __this_00;
  Il2CppCodeGenWriteBarrier(&pMVar1->_invisibleMaterial);
  return;
}


// Map.MapLoader$$OnPreLoadScene
// il2cpp: void Map_MapLoader__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x598fba0

void Map_MapLoader__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  Map_MapLoader_o *__this;
  Map_MapLoader_StaticFields *pMVar1;
  Map_MapDestruction_c *method_00;
  
  if (Il2CppMethodInitialized_07545a2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a2f = '\x01';
  }
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  Cameras_CameraOcclusion__Reset((MethodInfo *)0x0);
  method_00 = TypeInfo_Map_MapDestruction;
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  Map_MapDestruction__Reset((MethodInfo *)method_00);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = TypeInfo_Map_MapLoader->static_fields->_instance;
  if (__this == (Map_MapLoader_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  pMVar1 = TypeInfo_Map_MapLoader->static_fields;
  pMVar1->HasWeather = false;
  pMVar1->Weather = (Settings_WeatherSet_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pMVar1->Weather);
  return;
}


// Map.MapLoader$$GetNextObjectId
// il2cpp: int32_t Map_MapLoader__GetNextObjectId (const MethodInfo* method);
// 0x598fc80

int32_t Map_MapLoader__GetNextObjectId(MethodInfo *method)

{
  int iVar1;
  
  if (Il2CppMethodInitialized_07545a30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a30 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  iVar1 = TypeInfo_Map_MapLoader->static_fields->HighestObjectId + 1;
  TypeInfo_Map_MapLoader->static_fields->HighestObjectId = iVar1;
  return iVar1;
}


// Map.MapLoader$$ReportError
// il2cpp: void Map_MapLoader__ReportError (System_String_o* message, const MethodInfo* method);
// 0x598fcd0

void Map_MapLoader__ReportError(System_String_o *message,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_string__o *__this;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_07545a31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a31 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
  }
  ApplicationManagers_DebugConsole__Log(message,true,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
  __this = TypeInfo_Map_MapLoader->static_fields->Errors;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = message;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)message,
                 (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$RunLoadStep
// il2cpp: bool Map_MapLoader__RunLoadStep (System_String_o* step, System_Action_o* action, const MethodInfo* method);
// 0x598fdd0
// eh: try 0x598fdea..0x598fdf9 -> pad 0x598fdf9 catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x598fe10..0x598fed9 -> pad 0x598fede (+1 call sites) cleanup
// eh: try 0x598fee1..0x598fee6 -> pad 0x598feee catch (...) [compiler noexcept guard]
// asm: 60 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x598fdf9: mov r14, rax
// asm:   0x598fdfc: cmp edx, 1
// asm:   0x598fdff: jne 0x598fee6
// asm:   0x598fe05: mov rdi, r14
// asm:   0x598fe08: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x598fe0d: mov r14, rax
// asm:   0x598fe10: lea rdi, [rip + 0x18e82a9]  ; TypeInfo_System_Exception
// asm:   0x598fe17: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x598fe1c: mov rcx, qword ptr [r14]
// asm:   0x598fe1f: mov rsi, qword ptr [rcx]
// asm:   0x598fe22: mov rdi, rax
// asm:   0x598fe25: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x598fe2a: test al, al
// asm:   0x598fe2c: je 0x598feb8
// asm:   0x598fe32: mov rbp, qword ptr [r14]
// asm:   0x598fe35: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x598fe3a: test rbp, rbp
// asm:   0x598fe3d: je 0x598fed9
// asm:   0x598fe43: mov rax, qword ptr [rbp]
// asm:   0x598fe47: mov rsi, qword ptr [rax + 0x190]
// asm:   0x598fe4e: mov rdi, rbp
// asm:   0x598fe51: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x598fe57: mov r14, rax
// asm:   0x598fe5a: lea rdi, [rip + 0x194bbdf]  ; "Failed to "
// asm:   0x598fe61: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x598fe66: mov rbp, rax
// asm:   0x598fe69: lea rdi, [rip + 0x1942110]  ; ": "
// asm:   0x598fe70: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x598fe75: mov rdi, rbp
// asm:   0x598fe78: mov rsi, rbx
// asm:   0x598fe7b: mov rdx, rax
// asm:   0x598fe7e: mov rcx, r14
// asm:   0x598fe81: xor r8d, r8d
// asm:   0x598fe84: call 0x5402810  ; System_String__Concat()
// asm:   0x598fe89: mov rbx, rax
// asm:   0x598fe8c: lea rdi, [rip + 0x18eaafd]  ; TypeInfo_Map_MapLoader
// asm:   0x598fe93: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x598fe98: cmp dword ptr [rax + 0xe4], 0
// asm:   0x598fe9f: jne 0x598fea9
// asm:   0x598fea1: mov rdi, rax
// asm:   0x598fea4: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x598fea9: mov rdi, rbx
// asm:   0x598feac: call 0x598fcd0  ; Map_MapLoader__ReportError()
// asm:   0x598feb1: xor ebp, ebp
// asm:   0x598feb3: jmp 0x598fded
// asm:   0x598feb8: mov edi, 8
// asm:   0x598febd: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x598fec2: mov rcx, qword ptr [r14]
// asm:   0x598fec5: mov qword ptr [rax], rcx
// asm:   0x598fec8: lea rsi, [rip + 0x149d631]
// asm:   0x598fecf: mov rdi, rax
// asm:   0x598fed2: xor edx, edx
// asm:   0x598fed4: call 0x6e255c0  ; __cxa_throw()
// asm:   0x598fed9: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x598fede: mov r14, rax
// asm:   0x598fee1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x598fee6: mov rdi, r14
// asm:   0x598fee9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x598feee: mov rdi, rax
// asm:   0x598fef1: call 0x2ab61e0  ; __clang_call_terminate()

bool Map_MapLoader__RunLoadStep(System_String_o *step,System_Action_o *action,MethodInfo *method)

{
  if (action == (System_Action_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(code *)(action->fields).invoke_impl)((action->fields).method_code,(action->fields).method);
  return true;
}


// Map.MapLoader$$StartLoadObjects
// il2cpp: void Map_MapLoader__StartLoadObjects (System_Collections_Generic_List_string__o* customAssets, System_Collections_Generic_List_MapScriptBaseObject__o* objects, Map_MapScriptOptions_o* options, Settings_WeatherSet_o* weather, bool editor, System_Collections_Generic_List_string__o* parseErrors, const MethodInfo* method);
// 0x598ff00
// eh: try 0x5990130..0x599015e -> pad 0x599043f (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5990457..0x599045c -> pad 0x599047f cleanup
// eh: try 0x5990482..0x599048c -> pad 0x5990494 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x599043d: jmp 0x599043f
// asm:   0x599043f: mov rbp, rax
// asm:   0x5990442: cmp edx, 1
// asm:   0x5990445: jne 0x5990482
// asm:   0x5990447: mov rdi, rbp
// asm:   0x599044a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x599044f: mov rbp, qword ptr [rax]
// asm:   0x5990452: mov qword ptr [rsp + 0x18], rbp
// asm:   0x5990457: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599045c: lea rax, [rip + 0x18fe695]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5990463: mov rsi, qword ptr [rax]
// asm:   0x5990466: mov rdi, rsp
// asm:   0x5990469: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x599046e: test rbp, rbp
// asm:   0x5990471: je 0x5990172
// asm:   0x5990477: mov rdi, rbp
// asm:   0x599047a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x599047f: mov rbp, rax
// asm:   0x5990482: lea rdi, [rsp + 0x18]
// asm:   0x5990487: call 0x2fd4680  ; il2cpp_runtime_helper_02fd4680()
// asm:   0x599048c: mov rdi, rbp
// asm:   0x599048f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5990494: mov rdi, rax
// asm:   0x5990497: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapLoader__StartLoadObjects
               (System_Collections_Generic_List_string__o *customAssets,
               System_Collections_Generic_List_MapScriptBaseObject__o *objects,Map_MapScriptOptions_o *options
               ,Settings_WeatherSet_o *weather,bool editor,
               System_Collections_Generic_List_string__o *parseErrors,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Collections_Generic_Dictionary_int__object__o *pSVar5;
  System_Collections_Generic_List_int__o *pSVar6;
  System_Collections_Generic_List_Light__o *pSVar7;
  System_Collections_Generic_List_MapLight__o *pSVar8;
  System_Collections_Generic_List_MapTargetable__o *pSVar9;
  Map_MapLoader_o *__this;
  System_String_o *message;
  bool bVar10;
  Map_MapLoader_StaticFields *pMVar11;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *method_00;
  Map_MapDestruction_c *method_01;
  Map_MapLoader_c *pMVar12;
  undefined3 in_register_00000081;
  undefined4 uVar13;
  undefined4 in_register_00000084;
  undefined1 local_78 [8];
  undefined1 *puStack_70;
  System_String_o *local_68;
  undefined1 local_60 [16];
  System_String_o *local_50;
  Settings_WeatherSet_o *local_48;
  System_Collections_Generic_List_string__o *local_40;
  Map_MapScriptOptions_o *local_38;
  
  uVar13 = CONCAT31(in_register_00000081,editor);
  local_38 = options;
  if (Il2CppMethodInitialized_07545a32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Light_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapTargetable_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapLight_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a32 = '\x01';
  }
  local_78 = (undefined1  [8])0x0;
  puStack_70 = (undefined1 *)0x0;
  local_68 = (System_String_o *)0x0;
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  Cameras_CameraOcclusion__Reset((MethodInfo *)0x0);
  method_01 = TypeInfo_Map_MapDestruction;
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  Map_MapDestruction__Reset((MethodInfo *)method_01);
  pMVar12 = TypeInfo_Map_MapLoader;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  Map_MapLoader__StopNavMeshRefresh((MethodInfo *)pMVar12);
  pSVar3 = TypeInfo_Map_MapLoader->static_fields->Errors;
  if (pSVar3 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar2 = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    if (0 < iVar2) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    if (parseErrors != (System_Collections_Generic_List_string__o *)0x0) {
      local_48 = weather;
      local_40 = customAssets;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                 (System_Collections_Generic_List_object__o *)parseErrors,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_68 = local_50;
      local_78 = (undefined1  [8])local_60._0_8_;
      puStack_70 = (undefined1 *)local_60._8_8_;
      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_60._8_8_ = local_78;
      while( true ) {
        method_00 = MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext;
        bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                            (MethodInfo_4C45C50 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        message = local_68;
        if (!bVar10) break;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        Map_MapLoader__ReportError(message,method_00);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      weather = local_48;
      customAssets = local_40;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->_customMaterialCache;
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Clear
                (pSVar4,(MethodInfo_4AAD690 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_Material_Clear);
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_MapLoader->static_fields->_defaultMaterialCache;
      if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Clear
                  (pSVar4,(MethodInfo_4AAD690 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_Clear);
        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->_assetMaterialCache;
        if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Clear
                    (pSVar4,(MethodInfo_4AAD690 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_Clear);
          pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToChildren;
          if (pSVar5 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            System_Collections_Generic_Dictionary_int__object___Clear
                      (pSVar5,(MethodInfo_4A0F8F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_Clear);
            pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar5 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              System_Collections_Generic_Dictionary_int__object___Clear
                        (pSVar5,(MethodInfo_4A0F8F0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_Clear);
              pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
              if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___Clear
                          (pSVar4,(MethodInfo_4AAD690 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_Clear)
                ;
                pMVar11 = TypeInfo_Map_MapLoader->static_fields;
                pSVar6 = pMVar11->ObjectOrder;
                if (pSVar6 != (System_Collections_Generic_List_int__o *)0x0) {
                  piVar1 = &(pSVar6->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  (pSVar6->fields)._size = 0;
                  pSVar7 = pMVar11->Daylight;
                  if (pSVar7 != (System_Collections_Generic_List_Light__o *)0x0) {
                    piVar1 = &(pSVar7->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    iVar2 = (pSVar7->fields)._size;
                    (pSVar7->fields)._size = 0;
                    if (0 < iVar2) {
                      System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,iVar2,(MethodInfo *)0x0)
                      ;
                      pMVar11 = TypeInfo_Map_MapLoader->static_fields;
                    }
                    pSVar8 = pMVar11->MapLights;
                    if (pSVar8 != (System_Collections_Generic_List_MapLight__o *)0x0) {
                      piVar1 = &(pSVar8->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      iVar2 = (pSVar8->fields)._size;
                      (pSVar8->fields)._size = 0;
                      if (0 < iVar2) {
                        System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar2,
                                            (MethodInfo *)0x0);
                        pMVar11 = TypeInfo_Map_MapLoader->static_fields;
                      }
                      pSVar9 = pMVar11->MapTargetables;
                      if (pSVar9 != (System_Collections_Generic_List_MapTargetable__o *)0x0) {
                        piVar1 = &(pSVar9->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        iVar2 = (pSVar9->fields)._size;
                        (pSVar9->fields)._size = 0;
                        if (0 < iVar2) {
                          System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar2,
                                              (MethodInfo *)0x0);
                          pMVar11 = TypeInfo_Map_MapLoader->static_fields;
                        }
                        if ((System_Collections_Generic_Dictionary_object__object__o *)pMVar11->_assetCache !=
                            (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                          System_Collections_Generic_Dictionary_object__object___Clear
                                    ((System_Collections_Generic_Dictionary_object__object__o *)
                                     pMVar11->_assetCache,
                                     (MethodInfo_4AAD690 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_Object_Clear);
                          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                                   TypeInfo_Map_MapLoader->static_fields->Tags;
                          if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                            System_Collections_Generic_Dictionary_object__object___Clear
                                      (pSVar4,(MethodInfo_4AAD690 *)
                                              MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_Clear
                                      );
                            pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                                     TypeInfo_Map_MapLoader->static_fields->MapObjectToTags;
                            if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                              System_Collections_Generic_Dictionary_object__object___Clear
                                        (pSVar4,(MethodInfo_4AAD690 *)
                                                MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_Clear
                                        );
                              pMVar12 = TypeInfo_Map_MapLoader;
                              pMVar11 = TypeInfo_Map_MapLoader->static_fields;
                              pMVar11->HighestObjectId = 1;
                              bVar10 = false;
                              if ((local_38 != (Map_MapScriptOptions_o *)0x0) && (!editor)) {
                                bVar10 = (local_38->fields).HasWeather;
                              }
                              if ((pMVar12->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init((Il2CppClass *)pMVar12);
                                pMVar11 = TypeInfo_Map_MapLoader->static_fields;
                              }
                              pMVar11->HasWeather = bVar10;
                              pMVar11->Weather = weather;
                              Il2CppCodeGenWriteBarrier(&pMVar11->Weather);
                              __this = TypeInfo_Map_MapLoader->static_fields->_instance;
                              if (__this != (Map_MapLoader_o *)0x0) {
                                routine = Map_MapLoader__LoadObjectsCoroutine
                                                    (__this,customAssets,objects,editor,
                                                     (MethodInfo *)CONCAT44(in_register_00000084,uVar13));
                                UnityEngine_MonoBehaviour__StartCoroutine_691c390
                                          ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$RegisterMapLight
// il2cpp: Map_MapLight_o* Map_MapLoader__RegisterMapLight (UnityEngine_Light_o* light, bool isDaylight, const MethodInfo* method);
// 0x5990640

Map_MapLight_o *
Map_MapLoader__RegisterMapLight(UnityEngine_Light_o *light,bool isDaylight,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_MapLight__o *__this;
  Map_MapLight_array *pMVar3;
  MethodInfo *pMVar4;
  Map_MapLight_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_07545a33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapLight_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLight);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a33 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapLight);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).Light = light;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Light);
  if (light != (UnityEngine_Light_o *)0x0) {
    fVar6 = UnityEngine_Light__get_intensity(light,(MethodInfo *)0x0);
    (__this_00->fields).MaxIntensity = fVar6;
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)light,(MethodInfo *)0x0);
    (__this_00->fields)._transform = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._transform);
    (__this_00->fields)._isDaylight = isDaylight;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pMVar4 = MethodInfo_System_Collections_Generic_List_MapLight_Add;
    __this = TypeInfo_Map_MapLoader->static_fields->MapLights;
    if (__this != (System_Collections_Generic_List_MapLight__o *)0x0) {
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pMVar3 = (__this->fields)._items;
      if (pMVar3 != (Map_MapLight_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pMVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pMVar3->m_Items[(int)uVar2] = __this_00;
          Il2CppCodeGenWriteBarrier(pMVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_00,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        return __this_00;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$FindObjectFromCollider
// il2cpp: Map_MapObject_o* Map_MapLoader__FindObjectFromCollider (UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x597e9b0

Map_MapObject_o * Map_MapLoader__FindObjectFromCollider(UnityEngine_Collider_o *collider,MethodInfo *method)

{
  UnityEngine_Transform_o *current;
  Map_MapObject_o *pMVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545a34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a34 = '\x01';
  }
  if (collider == (UnityEngine_Collider_o *)0x0) {
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)0x0;
  current = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    pMVar1 = Map_MapLoader__FindObjectFromTransform(current,method_00);
    return pMVar1;
  }
  pMVar1 = Map_MapLoader__FindObjectFromTransform(current,method_00);
  return pMVar1;
}


// Map.MapLoader$$FindObjectFromTransform
// il2cpp: Map_MapObject_o* Map_MapLoader__FindObjectFromTransform (UnityEngine_Transform_o* current, const MethodInfo* method);
// 0x5978da0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5978dee: test r15, r15
// asm:   0x5978df7: lea r12, [rip + 0x1901b92]  ; TypeInfo_Map_MapLoader
// asm:   0x5978dfe: lea r13, [rip + 0x1910923]  ; MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey
// asm:   0x5978e05: lea rbp, [rip + 0x19025e4]  ; TypeInfo_UnityEngine_Object
// asm:   0x5978e0c: nop dword ptr [rax]
// asm:   0x5978e9c: jmp 0x5978ef5

Map_MapObject_o * Map_MapLoader__FindObjectFromTransform(UnityEngine_Transform_o *current,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  UnityEngine_GameObject_o *key;
  UnityEngine_Transform_o *x;
  Map_MapObject_o *pMVar3;
  
  if (Il2CppMethodInitialized_07545a35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545a35 = '\x01';
  }
  do {
    if (current == (UnityEngine_Transform_o *)0x0) {
label_05978ef5:
      ThrowNullReferenceException();
    }
    key = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current,(MethodInfo *)0x0);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05978ef5;
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)key,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey);
    if (bVar2) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pMVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar1,(Il2CppObject *)key,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Item);
        return pMVar3;
      }
      goto label_05978ef5;
    }
    x = UnityEngine_Transform__get_parent(current,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return (Map_MapObject_o *)0x0;
    }
    current = UnityEngine_Transform__get_parent(current,(MethodInfo *)0x0);
  } while( true );
}


// Map.MapLoader$$LoadObject
// il2cpp: Map_MapObject_o* Map_MapLoader__LoadObject (Map_MapScriptBaseObject_o* scriptObject, bool editor, const MethodInfo* method);
// 0x5990770
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5990c8f: jmp 0x5990d62

Map_MapObject_o *
Map_MapLoader__LoadObject(Map_MapScriptBaseObject_o *scriptObject,bool editor,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t *__this;
  byte bVar2;
  byte bVar3;
  int32_t parent;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint32_t uVar7;
  Map_MapScriptBaseObject_o *pMVar8;
  Map_MapLoader_StaticFields *pMVar9;
  System_Collections_Generic_Dictionary_int__object__o *pSVar10;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_int__o *pSVar11;
  System_Int32_array *pSVar12;
  UnityEngine_Collider_array *colliders;
  MethodInfo *pMVar13;
  bool bVar14;
  Map_MapObject_o *__this_01;
  System_String_o *pSVar15;
  System_Collections_Generic_HashSet_int__o *pSVar16;
  Map_MapScriptBaseObject_c *pMVar17;
  UnityEngine_GameObject_o *pUVar18;
  UnityEngine_Transform_o *transform;
  int iVar19;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545a36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MinimapHandler);
    il2cpp_codegen_initialize_runtime_metadata(&"Interact/Supply");
    il2cpp_codegen_initialize_runtime_metadata(&"Map load error: map object with duplicate ID found (");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&"Supply");
    Il2CppMethodInitialized_07545a36 = '\x01';
  }
  if (scriptObject == (Map_MapScriptBaseObject_o *)0x0) goto label_05990d74;
  pMVar17 = scriptObject->klass;
  bVar2 = (pMVar17->_2).typeHierarchyDepth;
  bVar3 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
  if ((bVar2 < bVar3) ||
     ((pMVar17->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
    pUVar18 = (UnityEngine_GameObject_o *)0x0;
  }
  else {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      pMVar17 = scriptObject->klass;
      bVar2 = (pMVar17->_2).typeHierarchyDepth;
      bVar3 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
    }
    if ((bVar2 < bVar3) ||
       ((pMVar17->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
      il2cpp_codegen_raise_invalid_cast_exception(scriptObject);
    }
    pUVar18 = Map_MapLoader__LoadSceneObject
                        ((Map_MapScriptSceneObject_o *)scriptObject,editor,(MethodInfo *)(ulong)bVar2);
  }
  parent = (scriptObject->fields).Parent;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapObject);
  Map_MapObject___ctor(__this_01,parent,pUVar18,scriptObject,(MethodInfo *)0x0);
  if ((__this_01 == (Map_MapObject_o *)0x0) ||
     (pMVar8 = (__this_01->fields).ScriptObject, pMVar8 == (Map_MapScriptBaseObject_o *)0x0))
  goto label_05990d74;
  iVar4 = (pMVar8->fields).Id;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pMVar9 = TypeInfo_Map_MapLoader->static_fields;
  iVar19 = pMVar9->HighestObjectId;
  if (pMVar9->HighestObjectId < iVar4) {
    iVar19 = iVar4;
  }
  pMVar9->HighestObjectId = iVar19;
  if ((System_Collections_Generic_Dictionary_int__object__o *)pMVar9->IdToMapObject ==
      (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05990d74;
  __this = &(scriptObject->fields).Id;
  bVar14 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                     ((System_Collections_Generic_Dictionary_int__object__o *)pMVar9->IdToMapObject,*__this,
                      (MethodInfo_4A0F950 *)
                      MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
  if (bVar14) {
    pSVar15 = System_Int32__ToString(__this,(MethodInfo *)0x0);
    pSVar15 = System_String__Concat_5301f10
                        ("Map load error: map object with duplicate ID found (",pSVar15,")",(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    ApplicationManagers_DebugConsole__Log(pSVar15,true,(MethodInfo *)0x0);
    return __this_01;
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar10 = (System_Collections_Generic_Dictionary_int__object__o *)
            TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (pSVar10 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05990d74;
  System_Collections_Generic_Dictionary_int__object___Add
            (pSVar10,*__this,(Il2CppObject *)__this_01,
             (MethodInfo_4A0F740 *)MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_Add);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05990d74;
  System_Collections_Generic_Dictionary_object__object___Add
            (__this_00,(Il2CppObject *)pUVar18,(Il2CppObject *)__this_01,
             (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_Add);
  pSVar11 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
  if (pSVar11 == (System_Collections_Generic_List_int__o *)0x0) goto label_05990d74;
  method_00 = (MethodInfo *)(ulong)(uint)*__this;
  bVar14 = System_Collections_Generic_List_int___Contains
                     (pSVar11,*__this,
                      (MethodInfo_3916F20 *)MethodInfo_System_Collections_Generic_List_int_Contains);
  if (bVar14) {
label_05990ab0:
    iVar4 = (scriptObject->fields).Parent;
  }
  else {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pMVar13 = MethodInfo_System_Collections_Generic_List_int_Add;
    pSVar11 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
    if (pSVar11 == (System_Collections_Generic_List_int__o *)0x0) goto label_05990d74;
    uVar5 = *__this;
    method_00 = (MethodInfo *)(ulong)uVar5;
    piVar1 = &(pSVar11->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar12 = (pSVar11->fields)._items;
    if (pSVar12 == (System_Int32_array *)0x0) goto label_05990d74;
    uVar6 = (pSVar11->fields)._size;
    if (uVar6 < (uint)pSVar12->max_length) {
      (pSVar11->fields)._size = uVar6 + 1;
      pSVar12->m_Items[(int)uVar6] = uVar5;
      goto label_05990ab0;
    }
    System_Collections_Generic_List_int___AddWithResize
              (pSVar11,uVar5,(MethodInfo_3916AC0 *)pMVar13->klass->rgctx_data[0xe].method);
    iVar4 = (scriptObject->fields).Parent;
  }
  if (-1 < iVar4) {
    if ((((Il2CppClass *)TypeInfo_Map_MapLoader)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar10 = (System_Collections_Generic_Dictionary_int__object__o *)
              TypeInfo_Map_MapLoader->static_fields->IdToChildren;
    if (pSVar10 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05990d74;
    bVar14 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                       (pSVar10,(scriptObject->fields).Parent,
                        (MethodInfo_4A0F950 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    uVar7 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
    if (bVar14) {
      if (uVar7 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar10 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToChildren;
      if ((pSVar10 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
         (pSVar16 = (System_Collections_Generic_HashSet_int__o *)
                    System_Collections_Generic_Dictionary_int__object___get_Item
                              (pSVar10,(scriptObject->fields).Parent,
                               (MethodInfo_4A0F690 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item),
         pSVar16 == (System_Collections_Generic_HashSet_int__o *)0x0)) goto label_05990d74;
      method_00 = (MethodInfo *)(ulong)(uint)*__this;
      System_Collections_Generic_HashSet_int___Add
                (pSVar16,*__this,(MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
    }
    else {
      if (uVar7 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar10 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToChildren;
      uVar5 = (scriptObject->fields).Parent;
      pSVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
      System_Collections_Generic_HashSet_int____ctor
                (pSVar16,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
      if ((pSVar16 == (System_Collections_Generic_HashSet_int__o *)0x0) ||
         (System_Collections_Generic_HashSet_int___Add
                    (pSVar16,*__this,
                     (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add),
         pSVar10 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) goto label_05990d74;
      method_00 = (MethodInfo *)(ulong)uVar5;
      System_Collections_Generic_Dictionary_int__object___Add
                (pSVar10,uVar5,(Il2CppObject *)pSVar16,
                 (MethodInfo_4A0F740 *)MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_Add);
    }
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    Map_MapLoader__SetTransform(__this_01,method_00);
  }
  else {
    Map_MapLoader__SetTransform(__this_01,method_00);
  }
  if (!editor) {
    if ((scriptObject->fields).Static == false) {
      bVar14 = false;
    }
    else {
      bVar14 = SUB41((uint)(scriptObject->fields).Parent >> 0x1f,0);
    }
    colliders = (__this_01->fields).colliderCache;
    if ((((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
    }
    Cameras_CameraOcclusion__RegisterObject(pUVar18,colliders,bVar14,(MethodInfo *)0x0);
    if ((scriptObject->fields).Active == false) {
      pUVar18 = (__this_01->fields).GameObject;
      if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_05990d74;
      UnityEngine_GameObject__SetActive(pUVar18,false,(MethodInfo *)0x0);
    }
    pSVar15 = (scriptObject->fields).Asset;
    if (pSVar15 == (System_String_o *)0x0) {
label_05990d74:
      ThrowNullReferenceException();
    }
    bVar14 = System_String__StartsWith(pSVar15,"Interact/Supply",(MethodInfo *)0x0);
    if (bVar14) {
      pUVar18 = (__this_01->fields).GameObject;
      if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_05990d74;
      transform = UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
      if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
      }
      UI_MinimapHandler__CreateMinimapIcon(transform,"Supply",(MethodInfo *)0x0);
    }
  }
  return __this_01;
}


// Map.MapLoader$$UnregisterObject
// il2cpp: void Map_MapLoader__UnregisterObject (Map_MapObject_o* mapObject, const MethodInfo* method);
// 0x5991190

void Map_MapLoader__UnregisterObject(Map_MapObject_o *mapObject,MethodInfo *method)

{
  int32_t key;
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_List_int__o *pSVar3;
  bool bVar4;
  int32_t index;
  System_Collections_Generic_HashSet_int__o *local_28;
  
  if (Il2CppMethodInitialized_07545a37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_LastIndexOf);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a37 = '\x01';
  }
  local_28 = (System_Collections_Generic_HashSet_int__o *)0x0;
  if ((mapObject != (Map_MapObject_o *)0x0) &&
     (pMVar1 = (mapObject->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
    key = (pMVar1->fields).Id;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      System_Collections_Generic_Dictionary_int__object___Remove
                (pSVar2,key,
                 (MethodInfo_4A10DC0 *)MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_Remove);
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
      if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Remove
                  (__this,(Il2CppObject *)(mapObject->fields).GameObject,
                   (MethodInfo_4AAED10 *)
                   MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_Remove);
        pSVar3 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
        if (pSVar3 != (System_Collections_Generic_List_int__o *)0x0) {
          index = System_Collections_Generic_List_int___LastIndexOf
                            (pSVar3,key,
                             (MethodInfo_39184A0 *)MethodInfo_System_Collections_Generic_List_int_LastIndexOf)
          ;
          if (-1 < index) {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar3 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
            if (pSVar3 == (System_Collections_Generic_List_int__o *)0x0) goto label_0599135a;
            System_Collections_Generic_List_int___RemoveAt
                      (pSVar3,index,
                       (MethodInfo_3918930 *)MethodInfo_System_Collections_Generic_List_int_RemoveAt);
          }
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pMVar1 = (mapObject->fields).ScriptObject;
          if ((pMVar1 != (Map_MapScriptBaseObject_o *)0x0) &&
             (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                       TypeInfo_Map_MapLoader->static_fields->IdToChildren,
             pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
            bVar4 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                              (pSVar2,(pMVar1->fields).Parent,(Il2CppObject **)&local_28,
                               (MethodInfo_4A114B0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_TryGetValue);
            if (bVar4) {
              if (local_28 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0599135a;
              System_Collections_Generic_HashSet_int___Remove
                        (local_28,key,
                         (MethodInfo_4FA80C0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
            }
            return;
          }
        }
      }
    }
  }
label_0599135a:
  ThrowNullReferenceException();
}


// Map.MapLoader$$MoveInOrder
// il2cpp: void Map_MapLoader__MoveInOrder (int32_t id, int32_t anchorId, bool insertAfter, const MethodInfo* method);
// 0x5991360
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x599139b: jmp 0x59914cc
// asm:   0x59914ca: jmp 0x5991464

void Map_MapLoader__MoveInOrder(int32_t id,int32_t anchorId,bool insertAfter,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_int__o *pSVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_07545a38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_IndexOf);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Insert);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a38 = '\x01';
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) goto label_059913f6;
label_0599138b:
    pSVar2 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
  }
  else {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor != 0) goto label_0599138b;
label_059913f6:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    pSVar2 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
  }
  if (pSVar2 != (System_Collections_Generic_List_int__o *)0x0) {
    System_Collections_Generic_List_int___Remove
              (pSVar2,id,(MethodInfo_3918590 *)MethodInfo_System_Collections_Generic_List_int_Remove);
    pSVar2 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
    if (pSVar2 != (System_Collections_Generic_List_int__o *)0x0) {
      iVar3 = System_Collections_Generic_List_int___IndexOf
                        (pSVar2,anchorId,
                         (MethodInfo_3917A80 *)MethodInfo_System_Collections_Generic_List_int_IndexOf);
      if (iVar3 < 0) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar2 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
        if (pSVar2 == (System_Collections_Generic_List_int__o *)0x0) goto label_059914cc;
        iVar3 = (pSVar2->fields)._size;
        uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
      }
      else {
        iVar3 = iVar3 + (uint)insertAfter;
        uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar2 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
      if (pSVar2 != (System_Collections_Generic_List_int__o *)0x0) {
        System_Collections_Generic_List_int___Insert
                  (pSVar2,iVar3,id,(MethodInfo_3917C10 *)MethodInfo_System_Collections_Generic_List_int_Insert
                  );
        return;
      }
    }
  }
label_059914cc:
  ThrowNullReferenceException();
}


// Map.MapLoader$$SetParent
// il2cpp: void Map_MapLoader__SetParent (Map_MapObject_o* obj, Map_MapObject_o* parent, const MethodInfo* method);
// 0x59914e0

void Map_MapLoader__SetParent(Map_MapObject_o *obj,Map_MapObject_o *parent,MethodInfo *method)

{
  uint32_t uVar1;
  int32_t key;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  Map_MapScriptBaseObject_o *pMVar3;
  UnityEngine_GameObject_o *pUVar4;
  bool bVar5;
  System_Collections_Generic_HashSet_int__o *pSVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Transform_o *p;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_07545a39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a39 = '\x01';
    method = extraout_RDX;
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    method = extraout_RDX_00;
  }
  bVar5 = Map_MapLoader__WouldCreateParentCycle(obj,parent,method);
  if (bVar5) {
    return;
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  if ((obj == (Map_MapObject_o *)0x0) ||
     (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToChildren,
     pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) goto label_05991892;
  bVar5 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                    (pSVar2,(obj->fields).Parent,
                     (MethodInfo_4A0F950 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
  if (bVar5) {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToChildren;
    if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05991892;
    pSVar6 = (System_Collections_Generic_HashSet_int__o *)
             System_Collections_Generic_Dictionary_int__object___get_Item
                       (pSVar2,(obj->fields).Parent,
                        (MethodInfo_4A0F690 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
    pMVar3 = (obj->fields).ScriptObject;
    if ((pMVar3 == (Map_MapScriptBaseObject_o *)0x0) ||
       (pSVar6 == (System_Collections_Generic_HashSet_int__o *)0x0)) goto label_05991892;
    bVar5 = System_Collections_Generic_HashSet_int___Contains
                      (pSVar6,(pMVar3->fields).Id,
                       (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (bVar5) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToChildren;
      if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05991892;
      pSVar6 = (System_Collections_Generic_HashSet_int__o *)
               System_Collections_Generic_Dictionary_int__object___get_Item
                         (pSVar2,(obj->fields).Parent,
                          (MethodInfo_4A0F690 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
      pMVar3 = (obj->fields).ScriptObject;
      if ((pMVar3 == (Map_MapScriptBaseObject_o *)0x0) ||
         (pSVar6 == (System_Collections_Generic_HashSet_int__o *)0x0)) goto label_05991892;
      System_Collections_Generic_HashSet_int___Remove
                (pSVar6,(pMVar3->fields).Id,
                 (MethodInfo_4FA80C0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    }
  }
  if (parent == (Map_MapObject_o *)0x0) {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    (obj->fields).Parent = TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID;
    pUVar4 = (obj->fields).GameObject;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pUVar7 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(pUVar7,(UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pMVar3 = (parent->fields).ScriptObject;
    if (pMVar3 != (Map_MapScriptBaseObject_o *)0x0) {
      (obj->fields).Parent = (pMVar3->fields).Id;
      pUVar4 = (obj->fields).GameObject;
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        pUVar7 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (parent->fields).GameObject;
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          p = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(pUVar7,p,(MethodInfo *)0x0);
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToChildren;
            if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              bVar5 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                (pSVar2,(obj->fields).Parent,
                                 (MethodInfo_4A0F950 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey)
              ;
              uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
              if (bVar5) {
                if (uVar1 == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                }
                pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                         TypeInfo_Map_MapLoader->static_fields->IdToChildren;
                if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                  pSVar6 = (System_Collections_Generic_HashSet_int__o *)
                           System_Collections_Generic_Dictionary_int__object___get_Item
                                     (pSVar2,(obj->fields).Parent,
                                      (MethodInfo_4A0F690 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item
                                     );
                  pMVar3 = (obj->fields).ScriptObject;
                  if ((pMVar3 != (Map_MapScriptBaseObject_o *)0x0) &&
                     (pSVar6 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
                    System_Collections_Generic_HashSet_int___Add
                              (pSVar6,(pMVar3->fields).Id,
                               (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
                    return;
                  }
                }
              }
              else {
                if (uVar1 == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                }
                pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                         TypeInfo_Map_MapLoader->static_fields->IdToChildren;
                key = (obj->fields).Parent;
                pSVar6 = il2cpp_codegen_object_new
                                   ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
                System_Collections_Generic_HashSet_int____ctor
                          (pSVar6,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor
                          );
                pMVar3 = (obj->fields).ScriptObject;
                if ((pMVar3 != (Map_MapScriptBaseObject_o *)0x0) &&
                   (pSVar6 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
                  System_Collections_Generic_HashSet_int___Add
                            (pSVar6,(pMVar3->fields).Id,
                             (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
                  if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    System_Collections_Generic_Dictionary_int__object___Add
                              (pSVar2,key,(Il2CppObject *)pSVar6,
                               (MethodInfo_4A0F740 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_Add);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_05991892:
  ThrowNullReferenceException();
}


// Map.MapLoader$$SetParentLogical
// il2cpp: void Map_MapLoader__SetParentLogical (Map_MapObject_o* obj, Map_MapObject_o* parent, const MethodInfo* method);
// 0x5991aa0

void Map_MapLoader__SetParentLogical(Map_MapObject_o *obj,Map_MapObject_o *parent,MethodInfo *method)

{
  uint32_t uVar1;
  int32_t key;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  Map_MapScriptBaseObject_o *pMVar3;
  bool bVar4;
  System_Collections_Generic_HashSet_int__o *pSVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_07545a3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a3a = '\x01';
    method = extraout_RDX;
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    method = extraout_RDX_00;
  }
  bVar4 = Map_MapLoader__WouldCreateParentCycle(obj,parent,method);
  if (!bVar4) {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    if ((obj == (Map_MapObject_o *)0x0) ||
       (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToChildren,
       pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) goto label_05991df0;
    bVar4 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar2,(obj->fields).Parent,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    if (bVar4) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToChildren;
      if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05991df0;
      pSVar5 = (System_Collections_Generic_HashSet_int__o *)
               System_Collections_Generic_Dictionary_int__object___get_Item
                         (pSVar2,(obj->fields).Parent,
                          (MethodInfo_4A0F690 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
      pMVar3 = (obj->fields).ScriptObject;
      if ((pMVar3 == (Map_MapScriptBaseObject_o *)0x0) ||
         (pSVar5 == (System_Collections_Generic_HashSet_int__o *)0x0)) goto label_05991df0;
      bVar4 = System_Collections_Generic_HashSet_int___Contains
                        (pSVar5,(pMVar3->fields).Id,
                         (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (bVar4) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToChildren;
        if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05991df0;
        pSVar5 = (System_Collections_Generic_HashSet_int__o *)
                 System_Collections_Generic_Dictionary_int__object___get_Item
                           (pSVar2,(obj->fields).Parent,
                            (MethodInfo_4A0F690 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
        pMVar3 = (obj->fields).ScriptObject;
        if ((pMVar3 == (Map_MapScriptBaseObject_o *)0x0) ||
           (pSVar5 == (System_Collections_Generic_HashSet_int__o *)0x0)) goto label_05991df0;
        System_Collections_Generic_HashSet_int___Remove
                  (pSVar5,(pMVar3->fields).Id,
                   (MethodInfo_4FA80C0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
      }
    }
    if (parent != (Map_MapObject_o *)0x0) {
      pMVar3 = (parent->fields).ScriptObject;
      if (pMVar3 != (Map_MapScriptBaseObject_o *)0x0) {
        (obj->fields).Parent = (pMVar3->fields).Id;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToChildren;
        if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          bVar4 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                            (pSVar2,(obj->fields).Parent,
                             (MethodInfo_4A0F950 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
          uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
          if (bVar4) {
            if (uVar1 == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToChildren;
            if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              pSVar5 = (System_Collections_Generic_HashSet_int__o *)
                       System_Collections_Generic_Dictionary_int__object___get_Item
                                 (pSVar2,(obj->fields).Parent,
                                  (MethodInfo_4A0F690 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
              pMVar3 = (obj->fields).ScriptObject;
              if ((pMVar3 != (Map_MapScriptBaseObject_o *)0x0) &&
                 (pSVar5 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
                System_Collections_Generic_HashSet_int___Add
                          (pSVar5,(pMVar3->fields).Id,
                           (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
                return;
              }
            }
          }
          else {
            if (uVar1 == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToChildren;
            key = (obj->fields).Parent;
            pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int)
            ;
            System_Collections_Generic_HashSet_int____ctor
                      (pSVar5,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
            pMVar3 = (obj->fields).ScriptObject;
            if ((pMVar3 != (Map_MapScriptBaseObject_o *)0x0) &&
               (pSVar5 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
              System_Collections_Generic_HashSet_int___Add
                        (pSVar5,(pMVar3->fields).Id,
                         (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
              if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                System_Collections_Generic_Dictionary_int__object___Add
                          (pSVar2,key,(Il2CppObject *)pSVar5,
                           (MethodInfo_4A0F740 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_Add);
                return;
              }
            }
          }
        }
      }
label_05991df0:
      ThrowNullReferenceException();
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    (obj->fields).Parent = TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID;
  }
  return;
}


// Map.MapLoader$$GetLogicalParentId
// il2cpp: int32_t Map_MapLoader__GetLogicalParentId (Map_MapObject_o* obj, const MethodInfo* method);
// 0x5991e00

int32_t Map_MapLoader__GetLogicalParentId(Map_MapObject_o *obj,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545a3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a3b = '\x01';
  }
  if (obj != (Map_MapObject_o *)0x0) {
    return (obj->fields).Parent;
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  return TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID;
}


// Map.MapLoader$$WouldCreateParentCycle
// il2cpp: bool Map_MapLoader__WouldCreateParentCycle (Map_MapObject_o* obj, Map_MapObject_o* parent, const MethodInfo* method);
// 0x59918a0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x599196f: lea r15, [rip + 0x18ff98a]  ; MethodInfo_System_Collections_Generic_HashSet_int_Add
// asm:   0x5991976: lea r12, [rip + 0x18e9013]  ; TypeInfo_Map_MapLoader
// asm:   0x599197d: jmp 0x59919cf
// asm:   0x599198f: jmp 0x5991a76
// asm:   0x5991a3e: cmp byte ptr [rip + 0x1bb3ff6], 0
// asm:   0x5991a45: jne 0x5991980
// asm:   0x5991a4b: jmp 0x5991a62

bool Map_MapLoader__WouldCreateParentCycle(Map_MapObject_o *obj,Map_MapObject_o *parent,MethodInfo *method)

{
  int iVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  Map_MapScriptBaseObject_o *pMVar3;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  Il2CppObject *pIVar4;
  bool bVar5;
  System_Collections_Generic_HashSet_int__o *__this_00;
  int item;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_07545a3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a3c = '\x01';
  }
  local_38 = (Il2CppObject *)0x0;
  bVar5 = false;
  if ((obj != (Map_MapObject_o *)0x0) && (parent != (Map_MapObject_o *)0x0)) {
    pMVar2 = (obj->fields).ScriptObject;
    if ((pMVar2 == (Map_MapScriptBaseObject_o *)0x0) ||
       (pMVar3 = (parent->fields).ScriptObject, pMVar3 == (Map_MapScriptBaseObject_o *)0x0)) {
label_05991a8c:
      ThrowNullReferenceException();
    }
    iVar1 = (pMVar2->fields).Id;
    item = (pMVar3->fields).Id;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor
              (__this_00,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    if (-1 < item) {
      if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05991a8c;
      do {
        while( true ) {
          bVar5 = System_Collections_Generic_HashSet_int___Add
                            (__this_00,item,
                             (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
          if (!bVar5) goto label_05991a76;
          if (item == iVar1) {
            return true;
          }
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          __this = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (__this == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05991a8c;
          bVar5 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                            (__this,item,&local_38,
                             (MethodInfo_4A114B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_TryGetValue);
          pIVar4 = local_38;
          if (!bVar5) {
            return false;
          }
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          if (Il2CppMethodInitialized_07545a3b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
            Il2CppMethodInitialized_07545a3b = '\x01';
          }
          if (pIVar4 == (Il2CppObject *)0x0) break;
          item = *(int *)&pIVar4[1].klass;
          if (item < 0) goto label_05991a76;
        }
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        item = TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID;
      } while (-1 < item);
    }
label_05991a76:
    bVar5 = -1 < item;
  }
  return bVar5;
}


// Map.MapLoader$$DeleteObject
// il2cpp: void Map_MapLoader__DeleteObject (Map_MapObject_o* obj, const MethodInfo* method);
// 0x5991e60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5991e83: test rbx, rbx
// asm:   0x5991e88: jmp 0x5991f62

void Map_MapLoader__DeleteObject(Map_MapObject_o *obj,MethodInfo *method)

{
  uint32_t uVar1;
  uint key;
  int32_t id;
  Map_MapScriptBaseObject_o *pMVar2;
  UnityEngine_Object_o *obj_00;
  bool bVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545a3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545a3d = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  if (((obj != (Map_MapObject_o *)0x0) &&
      (pMVar2 = (obj->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) &&
     (*(System_Collections_Generic_Dictionary_int__object__o **)
       ((Il2CppClass *)TypeInfo_Map_MapLoader)->static_fields !=
      (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    key = (pMVar2->fields).Id;
    method_00 = (MethodInfo *)(ulong)key;
    bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (*(System_Collections_Generic_Dictionary_int__object__o **)
                        ((Il2CppClass *)TypeInfo_Map_MapLoader)->static_fields,key,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    if (!bVar3) {
      obj_00 = (UnityEngine_Object_o *)(obj->fields).GameObject;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(obj_00,(MethodInfo *)0x0);
      return;
    }
    pMVar2 = (obj->fields).ScriptObject;
    if (pMVar2 != (Map_MapScriptBaseObject_o *)0x0) {
      id = (pMVar2->fields).Id;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      Map_MapLoader__DeleteObject_5891f70(id,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$DeleteObject
// il2cpp: void Map_MapLoader__DeleteObject (int32_t id, const MethodInfo* method);
// 0x5991f70
// eh: try 0x5992244..0x599231c -> pad 0x599232d (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5992345..0x599234a -> pad 0x599236d cleanup
// eh: try 0x5992370..0x599237a -> pad 0x5992382 catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5992321: jmp 0x599232d
// asm:   0x5992323: jmp 0x599232d
// asm:   0x5992325: jmp 0x599232d
// asm:   0x5992327: jmp 0x599232d
// asm:   0x5992329: jmp 0x599232d
// asm:   0x599232b: jmp 0x599232d
// asm:   0x599232d: mov rbx, rax
// asm:   0x5992330: cmp edx, 1
// asm:   0x5992333: jne 0x5992370
// asm:   0x5992335: mov rdi, rbx
// asm:   0x5992338: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x599233d: mov rbx, qword ptr [rax]
// asm:   0x5992340: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5992345: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599234a: lea rax, [rip + 0x18fbea7]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x5992351: mov rsi, qword ptr [rax]
// asm:   0x5992354: mov rdi, rsp
// asm:   0x5992357: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x599235c: test rbx, rbx
// asm:   0x599235f: je 0x59922d8
// asm:   0x5992365: mov rdi, rbx
// asm:   0x5992368: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x599236d: mov rbx, rax
// asm:   0x5992370: lea rdi, [rsp + 0x18]
// asm:   0x5992375: call 0x2fd46b0  ; il2cpp_runtime_helper_02fd46b0()
// asm:   0x599237a: mov rdi, rbx
// asm:   0x599237d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5992382: mov rdi, rax
// asm:   0x5992385: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapLoader__DeleteObject_5891f70(int32_t id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Object_o *obj;
  int32_t key;
  bool bVar2;
  Map_MapObject_o *pMVar3;
  Il2CppObject *collection;
  System_Collections_Generic_List_int__o *pSVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  Il2CppObject *local_58;
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  Map_MapObject_o *local_38;
  
  method_01 = (MethodInfo *)(ulong)(uint)id;
  if (Il2CppMethodInitialized_07545a3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_71950c0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545a3e = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
           TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    pMVar3 = System_Collections_Generic_Dictionary_int__object___get_Item
                       (pSVar1,id,
                        (MethodInfo_4A0F690 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      System_Collections_Generic_Dictionary_int__object___Remove
                (pSVar1,id,
                 (MethodInfo_4A10DC0 *)MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_Remove);
      if ((pMVar3 != (Map_MapObject_o *)0x0) &&
         (__this = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->GoToMapObject,
         __this != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        System_Collections_Generic_Dictionary_object__object___Remove
                  (__this,(Il2CppObject *)(pMVar3->fields).GameObject,
                   (MethodInfo_4AAED10 *)
                   MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_Remove);
        pSVar4 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
        if (pSVar4 != (System_Collections_Generic_List_int__o *)0x0) {
          System_Collections_Generic_List_int___Remove
                    (pSVar4,id,(MethodInfo_3918590 *)MethodInfo_System_Collections_Generic_List_int_Remove);
          if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
          }
          Map_MapDestruction__Remove(id,method_01);
          pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToChildren;
          if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            bVar2 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                              (pSVar1,id,
                               (MethodInfo_4A0F950 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
            if (!bVar2) {
label_059922dd:
              obj = (UnityEngine_Object_o *)(pMVar3->fields).GameObject;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
              return;
            }
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToChildren;
            if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              local_38 = pMVar3;
              collection = System_Collections_Generic_Dictionary_int__object___get_Item
                                     (pSVar1,id,
                                      (MethodInfo_4A0F690 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item
                                     );
              pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
              System_Collections_Generic_List_int____ctor_3916320
                        (pSVar4,(System_Collections_Generic_IEnumerable_T__o *)collection,
                         (MethodInfo_3916320 *)MethodInfo_System_Collections_Generic_List_int_ctor_71950c0);
              if (pSVar4 != (System_Collections_Generic_List_int__o *)0x0) {
                System_Collections_Generic_List_int___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_50,pSVar4,
                           (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator)
                ;
                local_58 = local_40;
                local_68 = (undefined1  [8])local_50._0_8_;
                puStack_60 = (undefined1 *)local_50._8_8_;
                local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
                local_50._8_8_ = local_68;
                while( true ) {
                  bVar2 = System_Collections_Generic_List_Enumerator_int___MoveNext
                                    ((System_Collections_Generic_List_Enumerator_int__o *)local_68,
                                     (MethodInfo_4C3B4A0 *)
                                     MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
                  if (!bVar2) break;
                  key = (int32_t)local_58;
                  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                  }
                  pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
                           TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                  if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar2 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                    (pSVar1,key,
                                     (MethodInfo_4A0F950 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey
                                    );
                  if (bVar2) {
                    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                    }
                    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
                             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                    if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pMVar3 = System_Collections_Generic_Dictionary_int__object___get_Item
                                       (pSVar1,key,
                                        (MethodInfo_4A0F690 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item
                                       );
                    Map_MapLoader__SetParent(pMVar3,(Map_MapObject_o *)0x0,method_00);
                  }
                }
                System_Collections_Generic_List_Enumerator_int___Dispose
                          ((System_Collections_Generic_List_Enumerator_int__o *)local_68,
                           (MethodInfo_4C3B490 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
                pMVar3 = local_38;
                goto label_059922dd;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$LoadObjectsCoroutine
// il2cpp: System_Collections_IEnumerator_o* Map_MapLoader__LoadObjectsCoroutine (Map_MapLoader_o* __this, System_Collections_Generic_List_string__o* customAssets, System_Collections_Generic_List_MapScriptBaseObject__o* objects, bool editor, const MethodInfo* method);
// 0x59905a0

System_Collections_IEnumerator_o *
Map_MapLoader__LoadObjectsCoroutine
          (Map_MapLoader_o *__this,System_Collections_Generic_List_string__o *customAssets,
          System_Collections_Generic_List_MapScriptBaseObject__o *objects,bool editor,MethodInfo *method)

{
  Map_MapLoader__LoadObjectsCoroutine_d__50_o *__this_00;
  
  if (Il2CppMethodInitialized_07545a3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader_LoadObjectsCoroutine_d__50);
    Il2CppMethodInitialized_07545a3f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapLoader_LoadObjectsCoroutine_d__50);
  Map_MapLoader__LoadObjectsCoroutine_d__50___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 == (Map_MapLoader__LoadObjectsCoroutine_d__50_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).customAssets = customAssets;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).customAssets);
  (__this_00->fields).objects = objects;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).objects);
  (__this_00->fields).editor = editor;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Map.MapLoader$$GetNavMeshWorldToLocal
// il2cpp: UnityEngine_Matrix4x4_o Map_MapLoader__GetNavMeshWorldToLocal (Map_MapLoader_o* __this, const MethodInfo* method);
// 0x5992390

UnityEngine_Matrix4x4_o *
Map_MapLoader__GetNavMeshWorldToLocal
          (UnityEngine_Matrix4x4_o *__return_storage_ptr__,Map_MapLoader_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Quaternion_o UVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_Fields local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  UnityEngine_Matrix4x4_o local_d8;
  UnityEngine_Matrix4x4_Fields local_98;
  UnityEngine_Matrix4x4_Fields local_50;
  
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    UVar4 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    local_e8._8_4_ = extraout_XMM0_Dc;
    local_e8._0_8_ = UVar4.fields._0_8_;
    local_e8._12_4_ = extraout_XMM0_Dd;
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UVar3 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
      local_98.m00 = UVar3.fields.x;
      local_98.m10 = UVar3.fields.y;
      local_98.m20 = UVar3.fields.z;
      local_98.m30 = UVar3.fields.w;
      if (g_data_0753e4b7 == '\0') {
        local_f8._8_4_ = extraout_XMM0_Dc_00;
        local_f8._0_8_ = UVar3.fields._0_8_;
        local_f8._12_4_ = extraout_XMM0_Dd_00;
        local_108._8_4_ = in_XMM1_Dc;
        local_108._0_8_ = UVar3.fields._8_8_;
        local_108._12_4_ = in_XMM1_Dd;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        g_data_0753e4b7 = '\x01';
        local_98.m00 = (float)local_f8._0_4_;
        local_98.m10 = (float)local_f8._4_4_;
        local_98.m20 = (float)local_108._0_4_;
        local_98.m30 = (float)local_108._4_4_;
      }
      pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
      local_118.x = (pUVar1->oneVector).fields.x;
      local_118.y = (pUVar1->oneVector).fields.y;
      local_118.z = (pUVar1->oneVector).fields.z;
      local_d8.fields.m00 = (float)local_e8._0_4_;
      local_d8.fields.m10 = (float)local_e8._4_4_;
      local_d8.fields.m20 = UVar4.fields.z;
      UnityEngine_Matrix4x4__Internal_TRS
                ((UnityEngine_Matrix4x4_o *)&local_50,(UnityEngine_Vector3_o *)(local_e8 + 0x10),
                 (UnityEngine_Quaternion_o *)&local_98,(UnityEngine_Vector3_o *)&local_118,(MethodInfo *)0x0);
      local_98.m00 = local_50.m00;
      local_98.m10 = local_50.m10;
      local_98.m20 = local_50.m20;
      local_98.m30 = local_50.m30;
      local_98.m01 = local_50.m01;
      local_98.m11 = local_50.m11;
      local_98.m21 = local_50.m21;
      local_98.m31 = local_50.m31;
      local_98.m02 = local_50.m02;
      local_98.m12 = local_50.m12;
      local_98.m22 = local_50.m22;
      local_98.m32 = local_50.m32;
      local_98.m03 = local_50.m03;
      local_98.m13 = local_50.m13;
      local_98.m23 = local_50.m23;
      local_98.m33 = local_50.m33;
      UnityEngine_Matrix4x4__Internal_Inverse
                ((UnityEngine_Matrix4x4_o *)(local_e8 + 0x10),(UnityEngine_Matrix4x4_o *)&local_98,
                 (MethodInfo *)0x0);
      (__return_storage_ptr__->fields).m03 = local_d8.fields.m03;
      (__return_storage_ptr__->fields).m13 = local_d8.fields.m13;
      (__return_storage_ptr__->fields).m23 = local_d8.fields.m23;
      (__return_storage_ptr__->fields).m33 = local_d8.fields.m33;
      (__return_storage_ptr__->fields).m02 = local_d8.fields.m02;
      (__return_storage_ptr__->fields).m12 = local_d8.fields.m12;
      (__return_storage_ptr__->fields).m22 = local_d8.fields.m22;
      (__return_storage_ptr__->fields).m32 = local_d8.fields.m32;
      (__return_storage_ptr__->fields).m01 = local_d8.fields.m01;
      (__return_storage_ptr__->fields).m11 = local_d8.fields.m11;
      (__return_storage_ptr__->fields).m21 = local_d8.fields.m21;
      (__return_storage_ptr__->fields).m31 = local_d8.fields.m31;
      (__return_storage_ptr__->fields).m00 = local_d8.fields.m00;
      (__return_storage_ptr__->fields).m10 = local_d8.fields.m10;
      (__return_storage_ptr__->fields).m20 = local_d8.fields.m20;
      (__return_storage_ptr__->fields).m30 = local_d8.fields.m30;
      return __return_storage_ptr__;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$ResetSources
// il2cpp: void Map_MapLoader__ResetSources (Map_MapLoader_o* __this, const MethodInfo* method);
// 0x5992510
// eh: try 0x5992714..0x599288a -> pad 0x59928a3 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59928bb..0x59928c0 -> pad 0x59928e5 cleanup
// eh: try 0x59928e8..0x59928f2 -> pad 0x59928fa catch (...) [compiler noexcept guard]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x599270c: nop dword ptr [rax]
// asm:   0x599288f: jmp 0x59928a3
// asm:   0x5992891: jmp 0x59928a3
// asm:   0x5992893: jmp 0x59928a3
// asm:   0x5992895: jmp 0x59928a3
// asm:   0x5992897: jmp 0x59928a3
// asm:   0x5992899: jmp 0x59928a3
// asm:   0x599289b: jmp 0x59928a3
// asm:   0x599289d: jmp 0x59928a3
// asm:   0x599289f: jmp 0x59928a3
// asm:   0x59928a1: jmp 0x59928a3
// asm:   0x59928a3: mov rbx, rax
// asm:   0x59928a6: cmp edx, 1
// asm:   0x59928a9: jne 0x59928e8
// asm:   0x59928ab: mov rdi, rbx
// asm:   0x59928ae: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59928b3: mov rbx, qword ptr [rax]
// asm:   0x59928b6: mov qword ptr [rsp + 0x78], rbx
// asm:   0x59928bb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59928c0: lea rax, [rip + 0x18fd071]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
// asm:   0x59928c7: mov rsi, qword ptr [rax]
// asm:   0x59928ca: lea rdi, [rsp + 0x40]
// asm:   0x59928cf: call 0x4da2970  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose()
// asm:   0x59928d4: test rbx, rbx
// asm:   0x59928d7: je 0x5992852
// asm:   0x59928dd: mov rdi, rbx
// asm:   0x59928e0: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59928e5: mov rbx, rax
// asm:   0x59928e8: lea rdi, [rsp + 0x78]
// asm:   0x59928ed: call 0x2fd46e0  ; il2cpp_runtime_helper_02fd46e0()
// asm:   0x59928f2: mov rdi, rbx
// asm:   0x59928f5: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59928fa: mov rdi, rax
// asm:   0x59928fd: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapLoader__ResetSources(Map_MapLoader_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Bounds_o *pUVar2;
  uint uVar3;
  System_Collections_Generic_List_MapLoader_NavMeshBuild__o *pSVar4;
  System_Collections_Generic_List_Bounds__o *pSVar5;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Bounds_array *pUVar7;
  UnityEngine_Bounds_o item;
  UnityEngine_Matrix4x4_o worldToLocal;
  Il2CppObject *mapObject;
  bool bVar8;
  Map_MapLoader_StaticFields *pMVar9;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  MethodInfo *pMVar10;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  Map_MapLoader_c *method_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_c8;
  UnityEngine_Bounds_o local_a8;
  undefined1 local_90 [16];
  Map_MapObject_o *local_80;
  UnityEngine_Matrix4x4_Fields local_78;
  
  if (Il2CppMethodInitialized_07545a40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Bounds_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapLoader_NavMeshBuild_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Bounds_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator);
    Il2CppMethodInitialized_07545a40 = '\x01';
  }
  local_78.m03 = 0.0;
  local_78.m13 = 0.0;
  local_78.m23 = 0.0;
  local_78.m33 = 0.0;
  local_78.m02 = 0.0;
  local_78.m12 = 0.0;
  local_78.m22 = 0.0;
  local_78.m32 = 0.0;
  local_78.m01 = 0.0;
  local_78.m11 = 0.0;
  local_78.m21 = 0.0;
  local_78.m31 = 0.0;
  local_78.m00 = 0.0;
  local_78.m10 = 0.0;
  local_78.m20 = 0.0;
  local_78.m30 = 0.0;
  local_c8.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8.fields._index = 0;
  local_c8.fields._version = 0;
  local_c8.fields._currentValue = (Il2CppObject *)0x0;
  local_a8.fields.m_Center.fields.x = 0.0;
  local_a8.fields.m_Center.fields.y = 0.0;
  local_a8.fields.m_Center.fields.z = 0.0;
  local_a8.fields.m_Extents.fields.x = 0.0;
  local_a8.fields.m_Extents.fields.y = 0.0;
  local_a8.fields.m_Extents.fields.z = 0.0;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pMVar9 = TypeInfo_Map_MapLoader->static_fields;
  pSVar4 = pMVar9->_navMeshBuilds;
  if (pSVar4 != (System_Collections_Generic_List_MapLoader_NavMeshBuild__o *)0x0) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    uVar3 = (pSVar4->fields)._size;
    pMVar10 = (MethodInfo *)(ulong)uVar3;
    (pSVar4->fields)._size = 0;
    if (0 < (int)uVar3) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,uVar3,(MethodInfo *)0x0);
      pMVar9 = TypeInfo_Map_MapLoader->static_fields;
      pMVar10 = extraout_RDX;
    }
    pSVar5 = pMVar9->_navMeshBounds;
    if (pSVar5 != (System_Collections_Generic_List_Bounds__o *)0x0) {
      piVar1 = &(pSVar5->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar5->fields)._size = 0;
      Map_MapLoader__GetNavMeshWorldToLocal((UnityEngine_Matrix4x4_o *)&local_78,__this,pMVar10);
      __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                  TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        __this_01 = System_Collections_Generic_Dictionary_int__object___get_Values
                              (__this_00,
                               (MethodInfo_4A0F4E0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values);
        if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
          System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                     local_90,__this_01,
                     (MethodInfo_43E8AC0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator
                    );
          local_c8.fields._currentValue = (Il2CppObject *)local_80;
          local_c8.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_90._0_8_;
          local_c8.fields._index = local_90._8_4_;
          local_c8.fields._version = local_90._12_4_;
          local_90._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_90._8_8_ = &local_c8;
          while( true ) {
            do {
              do {
                do {
                  pMVar10 = 
                  MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                  ;
                  bVar8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                                    (&local_c8,
                                     (MethodInfo_4CA2980 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                                    );
                  mapObject = local_c8.fields._currentValue;
                  if (!bVar8) {
                    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                              (&local_c8,
                               (MethodInfo_4CA2970 *)
                               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
                              );
                    method_00 = TypeInfo_Map_MapLoader;
                    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                    }
                    Map_MapLoader__CollectNavMeshSources((MethodInfo *)method_00);
                    return;
                  }
                  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                  }
                  bVar8 = Map_MapLoader__IsNavMeshRegion((Map_MapObject_o *)mapObject,pMVar10);
                } while (!bVar8);
                if ((Map_MapObject_o *)mapObject == (Map_MapObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar6 = ((Map_MapObject_Fields *)((long)mapObject + 0x10))->GameObject;
                if (pUVar6 == (UnityEngine_GameObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar8 = UnityEngine_GameObject__get_activeInHierarchy(pUVar6,(MethodInfo *)0x0);
              } while (!bVar8);
              pUVar6 = ((Map_MapObject_Fields *)((long)mapObject + 0x10))->GameObject;
              pMVar10 = extraout_RDX_00;
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                pMVar10 = extraout_RDX_01;
              }
              worldToLocal.fields.m20 = local_78.m20;
              worldToLocal.fields.m30 = local_78.m30;
              worldToLocal.fields.m00 = local_78.m00;
              worldToLocal.fields.m10 = local_78.m10;
              worldToLocal.fields.m01 = local_78.m01;
              worldToLocal.fields.m11 = local_78.m11;
              worldToLocal.fields.m21 = local_78.m21;
              worldToLocal.fields.m31 = local_78.m31;
              worldToLocal.fields.m02 = local_78.m02;
              worldToLocal.fields.m12 = local_78.m12;
              worldToLocal.fields.m22 = local_78.m22;
              worldToLocal.fields.m32 = local_78.m32;
              worldToLocal.fields.m03 = local_78.m03;
              worldToLocal.fields.m13 = local_78.m13;
              worldToLocal.fields.m23 = local_78.m23;
              worldToLocal.fields.m33 = local_78.m33;
              bVar8 = Map_MapLoader__TryGetRenderBounds(pUVar6,worldToLocal,&local_a8,pMVar10);
            } while (!bVar8);
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pMVar10 = MethodInfo_System_Collections_Generic_List_Bounds_Add;
            pSVar5 = TypeInfo_Map_MapLoader->static_fields->_navMeshBounds;
            if (pSVar5 == (System_Collections_Generic_List_Bounds__o *)0x0) break;
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar7 = (pSVar5->fields)._items;
            if (pUVar7 == (UnityEngine_Bounds_array *)0x0) break;
            uVar3 = (pSVar5->fields)._size;
            if (uVar3 < (uint)pUVar7->max_length) {
              (pSVar5->fields)._size = uVar3 + 1;
              pUVar7->m_Items[(int)uVar3].fields.m_Extents.fields.y = local_a8.fields.m_Extents.fields.y;
              pUVar7->m_Items[(int)uVar3].fields.m_Extents.fields.z = local_a8.fields.m_Extents.fields.z;
              pUVar2 = pUVar7->m_Items + (int)uVar3;
              (pUVar2->fields).m_Center.fields.x = local_a8.fields.m_Center.fields.x;
              (pUVar2->fields).m_Center.fields.y = local_a8.fields.m_Center.fields.y;
              *(undefined8 *)&(pUVar2->fields).m_Center.fields.z = local_a8.fields._8_8_;
            }
            else {
              item.fields.m_Center.fields.z = local_a8.fields.m_Center.fields.z;
              item.fields.m_Extents.fields.x = local_a8.fields.m_Extents.fields.x;
              item.fields.m_Center.fields.x = local_a8.fields.m_Center.fields.x;
              item.fields.m_Center.fields.y = local_a8.fields.m_Center.fields.y;
              item.fields.m_Extents.fields.y = local_a8.fields.m_Extents.fields.y;
              item.fields.m_Extents.fields.z = local_a8.fields.m_Extents.fields.z;
              System_Collections_Generic_List_Bounds___AddWithResize
                        (pSVar5,item,(MethodInfo_51DF320 *)pMVar10->klass->rgctx_data[0xe].method);
            }
          }
          ThrowNullReferenceException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$IsNavMeshRegion
// il2cpp: bool Map_MapLoader__IsNavMeshRegion (Map_MapObject_o* mapObject, const MethodInfo* method);
// 0x5992910

bool Map_MapLoader__IsNavMeshRegion(Map_MapObject_o *mapObject,MethodInfo *method)

{
  byte bVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *a;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07545a41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapAssets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    Il2CppMethodInitialized_07545a41 = '\x01';
  }
  if (mapObject == (Map_MapObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pMVar2 = (mapObject->fields).ScriptObject;
  if (pMVar2 != (Map_MapScriptBaseObject_o *)0x0) {
    bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
    if ((bVar1 <= (pMVar2->klass->_2).typeHierarchyDepth) &&
       ((pMVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
      a = (pMVar2->fields).Asset;
      if ((TypeInfo_Map_MapAssets->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapAssets);
      }
      bVar3 = System_String__op_Equality
                        (a,TypeInfo_Map_MapAssets->static_fields->NavMeshRegion,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  return false;
}


// Map.MapLoader$$CollectNavMeshSources
// il2cpp: void Map_MapLoader__CollectNavMeshSources (const MethodInfo* method);
// 0x5992f80
// eh: try 0x599320a..0x59934d2 -> pad 0x59934ea (+12 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5993518..0x599351d -> pad 0x5993542 cleanup
// eh: try 0x5993545..0x599354f -> pad 0x5993557 catch (...) [compiler noexcept guard]
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59931f9: nop dword ptr [rax]
// asm:   0x59932e8: jmp 0x5993200
// asm:   0x59934dc: jmp 0x59934f4
// asm:   0x59934de: jmp 0x59934f4
// asm:   0x59934e0: jmp 0x59934f4
// asm:   0x59934e2: jmp 0x59934f4
// asm:   0x59934e4: jmp 0x59934f4
// asm:   0x59934e6: jmp 0x59934f4
// asm:   0x59934e8: jmp 0x59934f4
// asm:   0x59934ea: jmp 0x59934f4
// asm:   0x59934ec: jmp 0x59934f4
// asm:   0x59934ee: jmp 0x59934f4
// asm:   0x59934f0: jmp 0x59934f4
// asm:   0x59934f2: jmp 0x59934f4
// asm:   0x59934f4: mov rbx, rax
// asm:   0x59934f7: mov r14, qword ptr [rsp + 8]
// asm:   0x59934fc: lea r15, [rip + 0x18e748d]  ; TypeInfo_Map_MapLoader
// asm:   0x5993503: cmp edx, 1
// asm:   0x5993506: jne 0x5993545
// asm:   0x5993508: mov rdi, rbx
// asm:   0x599350b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5993510: mov rbx, qword ptr [rax]
// asm:   0x5993513: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5993518: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599351d: lea rax, [rip + 0x18fc414]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
// asm:   0x5993524: mov rsi, qword ptr [rax]
// asm:   0x5993527: lea rdi, [rsp + 0x10]
// asm:   0x599352c: call 0x4da2970  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose()
// asm:   0x5993531: test rbx, rbx
// asm:   0x5993534: je 0x599330d
// asm:   0x599353a: mov rdi, rbx
// asm:   0x599353d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5993542: mov rbx, rax
// asm:   0x5993545: lea rdi, [rsp + 0x30]
// asm:   0x599354a: call 0x2fd4710  ; il2cpp_runtime_helper_02fd4710()
// asm:   0x599354f: mov rdi, rbx
// asm:   0x5993552: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5993557: mov rdi, rax
// asm:   0x599355a: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapLoader__CollectNavMeshSources(MethodInfo *method)

{
  int32_t *piVar1;
  Map_MapLoader_StaticFields *pMVar2;
  System_Collections_Generic_List_Bounds__o *pSVar3;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  Map_MapScriptBaseObject_o *pMVar4;
  System_Collections_Generic_HashSet_object__o *pSVar5;
  Utility_PhysicsLayer_StaticFields *pUVar6;
  Map_MapObject_o *mapObject;
  bool bVar7;
  uint uVar8;
  UnityEngine_LayerMask_o mask;
  int32_t includedLayerMask;
  Map_MapLoader___c__DisplayClass54_0_o *__this_00;
  System_Collections_Generic_HashSet_GameObject__o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  System_Object_array *pSVar9;
  UnityEngine_GameObject_o *pUVar10;
  System_Int32_array *layers;
  System_Collections_Generic_List_NavMeshBuildMarkup__o *__this_03;
  System_Func_NavMeshBuildSource__bool__o *__this_04;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_NavMeshBuildSource__o *pSVar11;
  MethodInfo *method_00;
  uint uVar12;
  undefined1 local_68 [8];
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *pSStack_60;
  Map_MapObject_o *local_58;
  undefined1 local_48 [16];
  Map_MapObject_o *local_38;
  
  if (Il2CppMethodInitialized_07545a42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_NavMeshBuildSource);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_NavMeshBuildSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_NavMeshBuildSource_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_GameObject_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_NavMeshBuildSource_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_NavMeshBuildMarkup_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Bounds_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_NavMeshBuildMarkup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_MapLoader_c__DisplayClass54_0_CollectNavMeshSources_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader_c__DisplayClass54_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator);
    Il2CppMethodInitialized_07545a42 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)0x0;
  local_58 = (Map_MapObject_o *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapLoader_c__DisplayClass54_0);
  Map_MapLoader___c__DisplayClass54_0___ctor(__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pMVar2 = TypeInfo_Map_MapLoader->static_fields;
  pSVar11 = pMVar2->_navMeshSources;
  if (pSVar11 != (System_Collections_Generic_List_NavMeshBuildSource__o *)0x0) {
    piVar1 = &(pSVar11->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar11->fields)._size = 0;
    pSVar3 = pMVar2->_navMeshBounds;
    if (pSVar3 != (System_Collections_Generic_List_Bounds__o *)0x0) {
      if ((pSVar3->fields)._size == 0) {
        return;
      }
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_GameObject);
      System_Collections_Generic_HashSet_object____ctor
                ((System_Collections_Generic_HashSet_object__o *)__this_01,
                 (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_GameObject_ctor);
      if (__this_00 != (Map_MapLoader___c__DisplayClass54_0_o *)0x0) {
        (__this_00->fields).staticObjects = __this_01;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).staticObjects);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        __this = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if ((__this != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
           (__this_02 = System_Collections_Generic_Dictionary_int__object___get_Values
                                  (__this,(MethodInfo_4A0F4E0 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values
                                  ),
           __this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
          System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                     local_48,__this_02,
                     (MethodInfo_43E8AC0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator
                    );
          local_58 = local_38;
          local_68 = (undefined1  [8])local_48._0_8_;
          pSStack_60 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                       local_48._8_8_;
          local_48._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_48._8_8_ =
               (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_68;
          while (method_00 = 
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                , bVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                      *)local_68,
                                     (MethodInfo_4CA2980 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                                    ), mapObject = local_58, bVar7) {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            bVar7 = Map_MapLoader__IsNavMeshRegion(mapObject,method_00);
            if (!bVar7) {
              if (mapObject == (Map_MapObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              pMVar4 = (mapObject->fields).ScriptObject;
              if (pMVar4 == (Map_MapScriptBaseObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              if ((pMVar4->fields).Static != false) {
                pUVar10 = (mapObject->fields).GameObject;
                if (pUVar10 == (UnityEngine_GameObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar9 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                                   (pUVar10,(MethodInfo_353C030 *)
                                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Transform
                                   );
                if (pSVar9 == (System_Object_array *)0x0) {
                  ThrowNullReferenceException();
                }
                uVar8 = (uint)pSVar9->max_length;
                if (0 < (int)uVar8) {
                  uVar12 = 0;
                  do {
                    if (uVar8 <= uVar12) {
                      ThrowIndexOutOfRangeException();
                    }
                    if ((UnityEngine_Component_o *)pSVar9->m_Items[(int)uVar12] ==
                        (UnityEngine_Component_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this_00->fields).staticObjects
                    ;
                    pUVar10 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pSVar9->m_Items[(int)uVar12],
                                         (MethodInfo *)0x0);
                    if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    System_Collections_Generic_HashSet_object___Add
                              (pSVar5,(Il2CppObject *)pUVar10,
                               (MethodInfo_4FB4450 *)
                               MethodInfo_System_Collections_Generic_HashSet_GameObject_Add);
                    uVar12 = uVar12 + 1;
                    uVar8 = (uint)pSVar9->max_length;
                  } while ((int)uVar12 < (int)uVar8);
                }
              }
            }
          }
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                     local_68,(MethodInfo_4CA2970 *)
                              MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
                    );
          layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,4);
          if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
          }
          if (layers != (System_Int32_array *)0x0) {
            uVar8 = (uint)layers->max_length;
            if (uVar8 != 0) {
              pUVar6 = TypeInfo_Utility_PhysicsLayer->static_fields;
              layers->m_Items[0] = pUVar6->MapObjectEntities;
              if (((uVar8 != 1) && (layers->m_Items[1] = pUVar6->MapObjectAll, 2 < uVar8)) &&
                 (layers->m_Items[2] = pUVar6->MapObjectCharacters, uVar8 != 3)) {
                layers->m_Items[3] = pUVar6->MapObjectTitans;
                mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
                __this_03 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)
                                       TypeInfo_System_Collections_Generic_List_NavMeshBuildMarkup);
                System_Collections_Generic_List_NavMeshBuildMarkup____ctor
                          (__this_03,
                           (MethodInfo_39551F0 *)
                           MethodInfo_System_Collections_Generic_List_NavMeshBuildMarkup_ctor);
                includedLayerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
                if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                }
                UnityEngine_AI_NavMeshBuilder__CollectSources_68938a0
                          ((UnityEngine_Transform_o *)0x0,includedLayerMask,1,0,__this_03,
                           TypeInfo_Map_MapLoader->static_fields->_navMeshSources,(MethodInfo *)0x0);
                pSVar11 = TypeInfo_Map_MapLoader->static_fields->_navMeshSources;
                __this_04 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)TypeInfo_System_Func_NavMeshBuildSource_bool);
                System_Func_NavMeshBuildSource__bool____ctor
                          (__this_04,(Il2CppObject *)__this_00,
                           (intptr_t)MethodInfo_Map_MapLoader_c__DisplayClass54_0_CollectNavMeshSources_b__0,
                           (MethodInfo_4F13CC0 *)0x0);
                source = System_Linq_Enumerable__Where_NavMeshBuildSource_
                                   ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar11,
                                    (System_Func_TSource__bool__o *)__this_04,
                                    (MethodInfo_3502880 *)
                                    MethodInfo_System_Linq_Enumerable_Where_NavMeshBuildSource);
                pSVar11 = (System_Collections_Generic_List_NavMeshBuildSource__o *)
                          System_Linq_Enumerable__ToList_NavMeshBuildSource_
                                    (source,(MethodInfo_3501130 *)
                                            MethodInfo_System_Linq_Enumerable_ToList_NavMeshBuildSource);
                pMVar2 = TypeInfo_Map_MapLoader->static_fields;
                pMVar2->_navMeshSources = pSVar11;
                Il2CppCodeGenWriteBarrier(&pMVar2->_navMeshSources);
                pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this_00->fields).staticObjects;
                if (pSVar5 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                  System_Collections_Generic_HashSet_object___Clear
                            (pSVar5,(MethodInfo_4FB36D0 *)
                                    MethodInfo_System_Collections_Generic_HashSet_GameObject_Clear);
                  return;
                }
                goto label_059934d2;
              }
            }
            ThrowIndexOutOfRangeException();
          }
        }
      }
    }
  }
label_059934d2:
  ThrowNullReferenceException();
}


// Map.MapLoader$$TryGetRenderBounds
// il2cpp: bool Map_MapLoader__TryGetRenderBounds (UnityEngine_GameObject_o* go, UnityEngine_Matrix4x4_o worldToLocal, UnityEngine_Bounds_o* bounds, const MethodInfo* method);
// 0x59929d0

bool Map_MapLoader__TryGetRenderBounds
               (UnityEngine_GameObject_o *go,UnityEngine_Matrix4x4_o worldToLocal,UnityEngine_Bounds_o *bounds
               ,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UnityEngine_MeshFilter_o *__this;
  UnityEngine_Bounds_o bounds_00;
  UnityEngine_Matrix4x4_o matrix;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  System_Object_array *pSVar8;
  UnityEngine_Object_o *x;
  UnityEngine_Mesh_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar27;
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar29;
  undefined1 auVar26 [16];
  float fVar30;
  UnityEngine_Matrix4x4_o local_208;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  UnityEngine_Matrix4x4_Fields local_1b8;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float local_98;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  UnityEngine_Bounds_o local_48;
  
  if (Il2CppMethodInitialized_07545a43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07545a43 = '\x01';
  }
  (bounds->fields).m_Center.fields.x = 0.0;
  (bounds->fields).m_Center.fields.y = 0.0;
  *(undefined8 *)&(bounds->fields).m_Center.fields.z = 0;
  (bounds->fields).m_Extents.fields.y = 0.0;
  (bounds->fields).m_Extents.fields.z = 0.0;
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                       (go,(MethodInfo_353C030 *)
                           MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
    if (pSVar8 != (System_Object_array *)0x0) {
      uVar7 = (uint)pSVar8->max_length;
      uVar9 = 0;
      if ((int)uVar7 < 1) {
        bVar5 = false;
      }
      else {
        local_1b8.m00 = worldToLocal.fields.m00;
        local_1b8.m10 = worldToLocal.fields.m10;
        local_1b8.m20 = worldToLocal.fields.m20;
        local_1b8.m30 = worldToLocal.fields.m30;
        local_b8 = worldToLocal.fields.m01;
        fStack_b4 = worldToLocal.fields.m11;
        fStack_b0 = worldToLocal.fields.m21;
        fStack_ac = worldToLocal.fields.m31;
        local_1c8 = worldToLocal.fields.m02;
        fStack_1c4 = worldToLocal.fields.m12;
        fStack_1c0 = worldToLocal.fields.m22;
        fStack_1bc = worldToLocal.fields.m32;
        local_c8 = worldToLocal.fields.m03;
        fStack_c4 = worldToLocal.fields.m13;
        fStack_c0 = worldToLocal.fields.m23;
        fStack_bc = worldToLocal.fields.m33;
        bVar5 = false;
        do {
          if (uVar7 <= uVar9) {
            ThrowIndexOutOfRangeException();
          }
          __this = (UnityEngine_MeshFilter_o *)pSVar8->m_Items[(int)uVar9];
          if (__this == (UnityEngine_MeshFilter_o *)0x0) goto label_05992f6e;
          x = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh(__this,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar6) {
            __this_00 = UnityEngine_MeshFilter__get_sharedMesh(__this,(MethodInfo *)0x0);
            if (__this_00 == (UnityEngine_Mesh_o *)0x0) goto label_05992f6e;
            UnityEngine_Mesh__get_bounds(&local_48,__this_00,(MethodInfo *)0x0);
            __this_01 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_05992f6e;
            UnityEngine_Transform__get_localToWorldMatrix(&local_208,__this_01,(MethodInfo *)0x0);
            local_a8 = local_208.fields.m01;
            local_98 = local_208.fields.m03;
            fVar21 = local_208.fields.m10;
            fVar12 = local_208.fields.m20;
            fVar10 = local_208.fields.m21;
            fVar11 = local_208.fields.m13;
            fVar20 = local_208.fields.m33;
            fVar16 = local_208.fields.m02;
            fVar23 = local_208.fields.m23;
            fVar27 = local_208.fields.m30;
            fVar28 = local_208.fields.m22;
            fVar29 = local_208.fields.m31;
            fVar30 = local_208.fields.m32;
            fVar13 = local_208.fields.m12;
            fVar17 = local_208.fields.m00;
            fVar22 = local_208.fields.m11;
            if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
              local_d8 = local_208.fields.m30;
              fStack_d4 = local_208.fields.m01;
              fStack_d0 = local_208.fields.m11;
              fStack_cc = local_208.fields.m21;
              local_e8 = local_208.fields.m31;
              fStack_e4 = local_208.fields.m02;
              fStack_e0 = local_208.fields.m12;
              fStack_dc = local_208.fields.m22;
              local_f8 = local_208.fields.m32;
              fStack_f4 = local_208.fields.m03;
              fStack_f0 = local_208.fields.m13;
              fStack_ec = local_208.fields.m23;
              local_108 = ZEXT416((uint)local_208.fields.m33);
              local_118 = ZEXT416((uint)local_208.fields.m23);
              local_128 = ZEXT416((uint)local_208.fields.m13);
              local_138 = local_208.fields.m22;
              fStack_134 = local_208.fields.m32;
              fStack_130 = local_208.fields.m03;
              fStack_12c = local_208.fields.m13;
              local_148 = local_208.fields.m12;
              fStack_144 = local_208.fields.m22;
              fStack_140 = local_208.fields.m32;
              fStack_13c = local_208.fields.m03;
              local_158 = local_208.fields.m02;
              fStack_154 = local_208.fields.m12;
              fStack_150 = local_208.fields.m22;
              fStack_14c = local_208.fields.m32;
              local_168 = local_208.fields.m21;
              fStack_164 = local_208.fields.m31;
              fStack_160 = local_208.fields.m02;
              fStack_15c = local_208.fields.m12;
              local_178 = local_208.fields.m11;
              fStack_174 = local_208.fields.m21;
              fStack_170 = local_208.fields.m31;
              fStack_16c = local_208.fields.m02;
              local_1b8.m03 = local_208.fields.m20;
              local_1b8.m13 = local_208.fields.m30;
              local_1b8.m23 = local_208.fields.m01;
              local_1b8.m33 = local_208.fields.m11;
              local_1b8.m02 = local_208.fields.m10;
              local_1b8.m12 = local_208.fields.m20;
              local_1b8.m22 = local_208.fields.m30;
              local_1b8.m32 = local_208.fields.m01;
              local_1b8.m01 = local_208.fields.m00;
              local_1b8.m11 = local_208.fields.m10;
              local_1b8.m21 = local_208.fields.m20;
              local_1b8.m31 = local_208.fields.m30;
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
              fVar21 = local_1b8.m02;
              fVar12 = local_1b8.m03;
              fVar10 = local_168;
              fVar11 = (float)local_128._0_4_;
              fVar20 = (float)local_108._0_4_;
              fVar16 = local_158;
              fVar23 = (float)local_118._0_4_;
              fVar27 = local_d8;
              fVar28 = local_138;
              fVar29 = local_e8;
              fVar30 = local_f8;
              fVar13 = local_148;
              fVar17 = local_1b8.m01;
              fVar22 = local_178;
            }
            local_88 = fVar27 * local_c8 + fVar12 * local_1c8 + fVar21 * local_b8 + fVar17 * local_1b8.m00;
            fStack_84 = fVar27 * fStack_c4 + fVar12 * fStack_1c4 + fVar21 * fStack_b4 + fVar17 * local_1b8.m10
            ;
            fStack_80 = fVar27 * fStack_c0 + fVar12 * fStack_1c0 + fVar21 * fStack_b0 + fVar17 * local_1b8.m20
            ;
            fStack_7c = fVar27 * fStack_bc + fVar12 * fStack_1bc + fVar21 * fStack_ac + fVar17 * local_1b8.m30
            ;
            local_78 = fVar29 * local_c8 + fVar10 * local_1c8 + fVar22 * local_b8 + local_a8 * local_1b8.m00;
            fStack_74 = fVar29 * fStack_c4 +
                        fVar10 * fStack_1c4 + fVar22 * fStack_b4 + local_a8 * local_1b8.m10;
            fStack_70 = fVar29 * fStack_c0 +
                        fVar10 * fStack_1c0 + fVar22 * fStack_b0 + local_a8 * local_1b8.m20;
            fStack_6c = fVar29 * fStack_bc +
                        fVar10 * fStack_1bc + fVar22 * fStack_ac + local_a8 * local_1b8.m30;
            local_68 = fVar30 * local_c8 + fVar28 * local_1c8 + fVar13 * local_b8 + fVar16 * local_1b8.m00;
            fStack_64 = fVar30 * fStack_c4 + fVar28 * fStack_1c4 + fVar13 * fStack_b4 + fVar16 * local_1b8.m10
            ;
            fStack_60 = fVar30 * fStack_c0 + fVar28 * fStack_1c0 + fVar13 * fStack_b0 + fVar16 * local_1b8.m20
            ;
            fStack_5c = fVar30 * fStack_bc + fVar28 * fStack_1bc + fVar13 * fStack_ac + fVar16 * local_1b8.m30
            ;
            local_58 = fVar20 * local_c8 + fVar23 * local_1c8 + fVar11 * local_b8 + local_98 * local_1b8.m00;
            fStack_54 = fVar20 * fStack_c4 +
                        fVar23 * fStack_1c4 + fVar11 * fStack_b4 + local_98 * local_1b8.m10;
            fStack_50 = fVar20 * fStack_c0 +
                        fVar23 * fStack_1c0 + fVar11 * fStack_b0 + local_98 * local_1b8.m20;
            fStack_4c = fVar20 * fStack_bc +
                        fVar23 * fStack_1bc + fVar11 * fStack_ac + local_98 * local_1b8.m30;
            matrix.fields.m10 = fStack_84;
            matrix.fields.m00 = local_88;
            matrix.fields.m30 = fStack_7c;
            matrix.fields.m20 = fStack_80;
            matrix.fields.m11 = fStack_74;
            matrix.fields.m01 = local_78;
            matrix.fields.m31 = fStack_6c;
            matrix.fields.m21 = fStack_70;
            matrix.fields.m12 = fStack_64;
            matrix.fields.m02 = local_68;
            matrix.fields.m32 = fStack_5c;
            matrix.fields.m22 = fStack_60;
            matrix.fields.m13 = fStack_54;
            matrix.fields.m03 = local_58;
            matrix.fields.m33 = fStack_4c;
            matrix.fields.m23 = fStack_50;
            bounds_00.fields.m_Center.fields.z = local_48.fields.m_Center.fields.z;
            bounds_00.fields.m_Extents.fields.x = local_48.fields.m_Extents.fields.x;
            bounds_00.fields.m_Center.fields.x = local_48.fields.m_Center.fields.x;
            bounds_00.fields.m_Center.fields.y = local_48.fields.m_Center.fields.y;
            bounds_00.fields.m_Extents.fields.y = local_48.fields.m_Extents.fields.y;
            bounds_00.fields.m_Extents.fields.z = local_48.fields.m_Extents.fields.z;
            Utility_Util__TransformBounds
                      ((UnityEngine_Bounds_o *)&local_208,bounds_00,matrix,(MethodInfo *)0x0);
            if (bVar5) {
              fVar11 = local_208.fields.m20 - local_208.fields.m11;
              fVar20 = local_208.fields.m11 + local_208.fields.m20;
              fVar21 = (bounds->fields).m_Center.fields.z;
              fVar12 = (bounds->fields).m_Extents.fields.z;
              fVar10 = fVar21 - fVar12;
              if (fVar11 <= fVar10) {
                fVar10 = fVar11;
              }
              fVar21 = fVar21 + fVar12;
              if (fVar21 <= fVar11) {
                fVar21 = fVar11;
              }
              fVar21 = (fVar21 - fVar10) * 0.5;
              fVar12 = (fVar10 + fVar21) - fVar21;
              if (fVar20 <= fVar12) {
                fVar12 = fVar20;
              }
              fVar21 = fVar10 + fVar21 + fVar21;
              if (fVar21 <= fVar20) {
                fVar21 = fVar20;
              }
              fVar21 = (fVar21 - fVar12) * 0.5;
              (bounds->fields).m_Extents.fields.z = fVar21;
              auVar18._0_4_ = local_208.fields.m00 - local_208.fields.m30;
              auVar18._4_4_ = local_208.fields.m10 - local_208.fields.m01;
              auVar18._8_4_ = local_208.fields.m20 - local_208.fields.m30;
              auVar18._12_4_ = local_208.fields.m30 - local_208.fields.m11;
              uVar1 = (bounds->fields).m_Center.fields.x;
              uVar3 = (bounds->fields).m_Center.fields.y;
              uVar2 = (bounds->fields).m_Extents.fields.x;
              uVar4 = (bounds->fields).m_Extents.fields.y;
              auVar24._0_4_ = (float)uVar1 - (float)uVar2;
              auVar24._4_4_ = (float)uVar3 - (float)uVar4;
              auVar24._8_8_ = 0;
              auVar25 = minps(auVar24,auVar18);
              auVar14._0_4_ = (float)uVar1 + (float)uVar2;
              auVar14._4_4_ = (float)uVar3 + (float)uVar4;
              auVar14._8_8_ = 0;
              auVar15 = maxps(auVar14,auVar18);
              fVar10 = (auVar15._0_4_ - auVar25._0_4_) * 0.5;
              fVar11 = (auVar15._4_4_ - auVar25._4_4_) * 0.5;
              fVar20 = (auVar15._8_4_ - auVar25._8_4_) * 0.0;
              fVar16 = (auVar15._12_4_ - auVar25._12_4_) * 0.0;
              fVar23 = auVar25._0_4_ + fVar10;
              fVar27 = auVar25._4_4_ + fVar11;
              fVar28 = auVar25._8_4_ + fVar20;
              fVar29 = auVar25._12_4_ + fVar16;
              auVar19._0_4_ = fVar23 - fVar10;
              auVar19._4_4_ = fVar27 - fVar11;
              auVar19._8_4_ = fVar28 - fVar20;
              auVar19._12_4_ = fVar29 - fVar16;
              auVar15._4_4_ = local_208.fields.m01 + local_208.fields.m10;
              auVar15._0_4_ = local_208.fields.m30 + local_208.fields.m00;
              auVar15._8_4_ = local_208.fields.m30 + local_208.fields.m20;
              auVar15._12_4_ = local_208.fields.m11 + local_208.fields.m30;
              auVar15 = minps(auVar19,auVar15);
              auVar26._0_4_ = fVar23 + fVar10;
              auVar26._4_4_ = fVar27 + fVar11;
              auVar26._8_4_ = fVar28 + fVar20;
              auVar26._12_4_ = fVar29 + fVar16;
              auVar25._4_4_ = local_208.fields.m01 + local_208.fields.m10;
              auVar25._0_4_ = local_208.fields.m30 + local_208.fields.m00;
              auVar25._8_4_ = local_208.fields.m30 + local_208.fields.m20;
              auVar25._12_4_ = local_208.fields.m11 + local_208.fields.m30;
              auVar25 = maxps(auVar26,auVar25);
              fVar10 = (auVar25._0_4_ - auVar15._0_4_) * 0.5;
              fVar11 = (auVar25._4_4_ - auVar15._4_4_) * 0.5;
              (bounds->fields).m_Extents.fields.x = fVar10;
              (bounds->fields).m_Extents.fields.y = fVar11;
              (bounds->fields).m_Center.fields.x = fVar10 + auVar15._0_4_;
              (bounds->fields).m_Center.fields.y = fVar11 + auVar15._4_4_;
              (bounds->fields).m_Center.fields.z = fVar21 + fVar12;
            }
            else {
              (bounds->fields).m_Center.fields.x = local_208.fields.m00;
              (bounds->fields).m_Center.fields.y = local_208.fields.m10;
              (bounds->fields).m_Center.fields.z = local_208.fields.m20;
              (bounds->fields).m_Extents.fields.x = local_208.fields.m30;
              (bounds->fields).m_Extents.fields.y = local_208.fields.m01;
              (bounds->fields).m_Extents.fields.z = local_208.fields.m11;
              bVar5 = true;
            }
          }
          uVar9 = uVar9 + 1;
          uVar7 = (uint)pSVar8->max_length;
        } while ((int)uVar9 < (int)uVar7);
      }
      return bVar5;
    }
  }
label_05992f6e:
  ThrowNullReferenceException();
}


// Map.MapLoader$$CreateNavMeshSurface
// il2cpp: UnityEngine_AsyncOperation_o* Map_MapLoader__CreateNavMeshSurface (int32_t agentID, UnityEngine_Bounds_o bounds, uint32_t maxJobWorkers, const MethodInfo* method);
// 0x5993560

UnityEngine_AsyncOperation_o *
Map_MapLoader__CreateNavMeshSurface
          (int32_t agentID,UnityEngine_Bounds_o bounds,uint32_t maxJobWorkers,MethodInfo *method)

{
  int32_t *piVar1;
  Map_MapLoader_NavMeshBuild_o *pMVar2;
  uint uVar3;
  System_Collections_Generic_List_MapLoader_NavMeshBuild__o *__this;
  Map_MapLoader_NavMeshBuild_array *pMVar4;
  UnityEngine_AI_NavMeshBuildSettings_o settings;
  UnityEngine_AI_NavMeshBuildSettings_o buildSettings;
  Map_MapLoader_NavMeshBuild_o item;
  Map_MapLoader_NavMeshBuild_Fields *pMVar5;
  MethodInfo *pMVar6;
  UnityEngine_AI_NavMeshData_o *__this_00;
  UnityEngine_AsyncOperation_o *pUVar7;
  UnityEngine_AI_NavMeshBuildSettings_Fields local_168;
  UnityEngine_AI_NavMeshData_o *local_128;
  UnityEngine_AI_NavMeshBuildSettings_Fields UStack_120;
  UnityEngine_Vector3_Fields aUStack_e0 [2];
  Map_MapLoader_NavMeshBuild_o local_c8;
  UnityEngine_AI_NavMeshBuildSettings_Fields local_60;
  
  if (Il2CppMethodInitialized_07545a44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapLoader_NavMeshBuild_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_AI_NavMeshData);
    Il2CppMethodInitialized_07545a44 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_AI_NavMeshData);
  UnityEngine_AI_NavMeshData___ctor(__this_00,(MethodInfo *)0x0);
  UnityEngine_AI_NavMesh__GetSettingsByID
            ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_60,agentID,(MethodInfo *)0x0);
  local_168.m_BuildHeightMesh = local_60.m_BuildHeightMesh;
  local_168.m_MaxJobWorkers = local_60.m_MaxJobWorkers;
  local_168.m_PreserveTilesOutsideBounds = local_60.m_PreserveTilesOutsideBounds;
  local_168.m_Debug.fields.m_Flags = local_60.m_Debug.fields.m_Flags;
  local_168._61_3_ = local_60._61_3_;
  local_168.m_OverrideVoxelSize = local_60.m_OverrideVoxelSize;
  local_168.m_VoxelSize = local_60.m_VoxelSize;
  local_168.m_OverrideTileSize = local_60.m_OverrideTileSize;
  local_168.m_TileSize = local_60.m_TileSize;
  local_168.m_AgentClimb = local_60.m_AgentClimb;
  local_168.m_LedgeDropHeight = local_60.m_LedgeDropHeight;
  local_168.m_MaxJumpAcrossDistance = local_60.m_MaxJumpAcrossDistance;
  local_168.m_MinRegionArea = local_60.m_MinRegionArea;
  local_168.m_AgentTypeID = local_60.m_AgentTypeID;
  local_168.m_AgentRadius = local_60.m_AgentRadius;
  local_168.m_AgentHeight = local_60.m_AgentHeight;
  local_168.m_AgentSlope = local_60.m_AgentSlope;
  UnityEngine_AI_NavMeshBuildSettings__set_maxJobWorkers
            ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_168,maxJobWorkers,(MethodInfo *)0x0);
  UnityEngine_AI_NavMeshBuildSettings__set_overrideTileSize
            ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_168,true,(MethodInfo *)0x0);
  UnityEngine_AI_NavMeshBuildSettings__set_tileSize
            ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_168,0x100,(MethodInfo *)0x0);
  UnityEngine_AI_NavMeshBuildSettings__set_overrideVoxelSize
            ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_168,true,(MethodInfo *)0x0);
  UnityEngine_AI_NavMeshBuildSettings__set_voxelSize
            ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_168,4.0,(MethodInfo *)0x0);
  UnityEngine_AI_NavMeshBuildSettings__set_minRegionArea
            ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_168,100.0,(MethodInfo *)0x0);
  UnityEngine_AI_NavMeshBuildSettings__set_buildHeightMesh
            ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_168,true,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = TypeInfo_Map_MapLoader->static_fields->_navMeshBuilds;
  local_c8.fields.Bounds.fields.m_Center.fields.z = 0.0;
  local_c8.fields.Bounds.fields.m_Extents.fields.x = 0.0;
  local_c8.fields.Bounds.fields.m_Extents.fields.y = 0.0;
  local_c8.fields.Bounds.fields.m_Extents.fields.z = 0.0;
  local_c8.fields.Settings.fields.m_PreserveTilesOutsideBounds = 0;
  local_c8.fields.Settings.fields.m_Debug.fields.m_Flags =
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)0x0;
  local_c8.fields.Settings.fields._61_3_ = 0;
  local_c8.fields.Bounds.fields.m_Center.fields.x = 0.0;
  local_c8.fields.Bounds.fields.m_Center.fields.y = 0.0;
  local_c8.fields.Settings.fields.m_OverrideTileSize = 0;
  local_c8.fields.Settings.fields.m_TileSize = 0;
  local_c8.fields.Settings.fields.m_BuildHeightMesh = 0;
  local_c8.fields.Settings.fields.m_MaxJobWorkers = 0;
  local_c8.fields.Settings.fields.m_MaxJumpAcrossDistance = 0.0;
  local_c8.fields.Settings.fields.m_MinRegionArea = 0.0;
  local_c8.fields.Settings.fields.m_OverrideVoxelSize = 0;
  local_c8.fields.Settings.fields.m_VoxelSize = 0.0;
  local_c8.fields.Settings.fields.m_AgentHeight = 0.0;
  local_c8.fields.Settings.fields.m_AgentSlope = 0.0;
  local_c8.fields.Settings.fields.m_AgentClimb = 0.0;
  local_c8.fields.Settings.fields.m_LedgeDropHeight = 0.0;
  local_c8.fields.Data = (UnityEngine_AI_NavMeshData_o *)0x0;
  local_c8.fields.Settings.fields.m_AgentTypeID = 0;
  local_c8.fields.Settings.fields.m_AgentRadius = 0.0;
  settings.fields.m_AgentHeight = local_168.m_AgentHeight;
  settings.fields.m_AgentSlope = local_168.m_AgentSlope;
  settings.fields.m_AgentTypeID = local_168.m_AgentTypeID;
  settings.fields.m_AgentRadius = local_168.m_AgentRadius;
  settings.fields.m_AgentClimb = local_168.m_AgentClimb;
  settings.fields.m_LedgeDropHeight = local_168.m_LedgeDropHeight;
  settings.fields.m_MaxJumpAcrossDistance = local_168.m_MaxJumpAcrossDistance;
  settings.fields.m_MinRegionArea = local_168.m_MinRegionArea;
  settings.fields.m_OverrideVoxelSize = local_168.m_OverrideVoxelSize;
  settings.fields.m_VoxelSize = local_168.m_VoxelSize;
  settings.fields.m_OverrideTileSize = local_168.m_OverrideTileSize;
  settings.fields.m_TileSize = local_168.m_TileSize;
  settings.fields.m_BuildHeightMesh = local_168.m_BuildHeightMesh;
  settings.fields.m_MaxJobWorkers = local_168.m_MaxJobWorkers;
  settings.fields.m_PreserveTilesOutsideBounds = local_168.m_PreserveTilesOutsideBounds;
  settings.fields.m_Debug.fields.m_Flags = local_168.m_Debug.fields.m_Flags;
  settings.fields._61_3_ = local_168._61_3_;
  Map_MapLoader_NavMeshBuild___ctor(&local_c8,__this_00,settings,bounds,(MethodInfo *)0x0);
  pMVar6 = MethodInfo_System_Collections_Generic_List_MapLoader_NavMeshBuild_Add;
  if (__this != (System_Collections_Generic_List_MapLoader_NavMeshBuild__o *)0x0) {
    aUStack_e0[0].z = local_c8.fields.Bounds.fields.m_Center.fields.z;
    aUStack_e0[1].x = local_c8.fields.Bounds.fields.m_Extents.fields.x;
    aUStack_e0[1].y = local_c8.fields.Bounds.fields.m_Extents.fields.y;
    aUStack_e0[1].z = local_c8.fields.Bounds.fields.m_Extents.fields.z;
    UStack_120.m_PreserveTilesOutsideBounds = local_c8.fields.Settings.fields.m_PreserveTilesOutsideBounds;
    UStack_120.m_Debug.fields.m_Flags = local_c8.fields.Settings.fields.m_Debug.fields.m_Flags;
    UStack_120._61_3_ = local_c8.fields.Settings.fields._61_3_;
    aUStack_e0[0].x = local_c8.fields.Bounds.fields.m_Center.fields.x;
    aUStack_e0[0].y = local_c8.fields.Bounds.fields.m_Center.fields.y;
    UStack_120.m_OverrideTileSize = local_c8.fields.Settings.fields.m_OverrideTileSize;
    UStack_120.m_TileSize = local_c8.fields.Settings.fields.m_TileSize;
    UStack_120.m_BuildHeightMesh = local_c8.fields.Settings.fields.m_BuildHeightMesh;
    UStack_120.m_MaxJobWorkers = local_c8.fields.Settings.fields.m_MaxJobWorkers;
    UStack_120.m_MaxJumpAcrossDistance = local_c8.fields.Settings.fields.m_MaxJumpAcrossDistance;
    UStack_120.m_MinRegionArea = local_c8.fields.Settings.fields.m_MinRegionArea;
    UStack_120.m_OverrideVoxelSize = local_c8.fields.Settings.fields.m_OverrideVoxelSize;
    UStack_120.m_VoxelSize = local_c8.fields.Settings.fields.m_VoxelSize;
    UStack_120.m_AgentHeight = local_c8.fields.Settings.fields.m_AgentHeight;
    UStack_120.m_AgentSlope = local_c8.fields.Settings.fields.m_AgentSlope;
    UStack_120.m_AgentClimb = local_c8.fields.Settings.fields.m_AgentClimb;
    UStack_120.m_LedgeDropHeight = local_c8.fields.Settings.fields.m_LedgeDropHeight;
    local_128 = local_c8.fields.Data;
    UStack_120.m_AgentTypeID = local_c8.fields.Settings.fields.m_AgentTypeID;
    UStack_120.m_AgentRadius = local_c8.fields.Settings.fields.m_AgentRadius;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pMVar4 = (__this->fields)._items;
    if (pMVar4 != (Map_MapLoader_NavMeshBuild_array *)0x0) {
      uVar3 = (__this->fields)._size;
      if (uVar3 < (uint)pMVar4->max_length) {
        (__this->fields)._size = uVar3 + 1;
        pMVar5 = &pMVar4->m_Items[(int)uVar3].fields;
        *(undefined8 *)((long)&(pMVar5->Bounds).fields.m_Center.fields + 8) =
             local_c8.fields.Bounds.fields._8_8_;
        *(undefined8 *)((long)&(pMVar5->Bounds).fields.m_Extents.fields + 4) =
             local_c8.fields.Bounds.fields.m_Extents.fields._4_8_;
        pMVar5 = &pMVar4->m_Items[(int)uVar3].fields;
        (pMVar5->Settings).fields.m_PreserveTilesOutsideBounds =
             local_c8.fields.Settings.fields.m_PreserveTilesOutsideBounds;
        (pMVar5->Settings).fields.m_Debug =
             (UnityEngine_AI_NavMeshBuildDebugSettings_o)
             local_c8.fields.Settings.fields.m_Debug.fields.m_Flags;
        *(undefined3 *)&(pMVar5->Settings).fields.field_0x3d = local_c8.fields.Settings.fields._61_3_;
        *(undefined8 *)&(pMVar5->Bounds).fields.m_Center.fields =
             local_c8.fields.Bounds.fields.m_Center.fields._0_8_;
        pMVar5 = &pMVar4->m_Items[(int)uVar3].fields;
        (pMVar5->Settings).fields.m_OverrideTileSize = local_c8.fields.Settings.fields.m_OverrideTileSize;
        (pMVar5->Settings).fields.m_TileSize = local_c8.fields.Settings.fields.m_TileSize;
        (pMVar5->Settings).fields.m_BuildHeightMesh = local_c8.fields.Settings.fields.m_BuildHeightMesh;
        (pMVar5->Settings).fields.m_MaxJobWorkers = local_c8.fields.Settings.fields.m_MaxJobWorkers;
        pMVar5 = &pMVar4->m_Items[(int)uVar3].fields;
        (pMVar5->Settings).fields.m_MaxJumpAcrossDistance =
             local_c8.fields.Settings.fields.m_MaxJumpAcrossDistance;
        (pMVar5->Settings).fields.m_MinRegionArea = local_c8.fields.Settings.fields.m_MinRegionArea;
        (pMVar5->Settings).fields.m_OverrideVoxelSize = local_c8.fields.Settings.fields.m_OverrideVoxelSize;
        (pMVar5->Settings).fields.m_VoxelSize = local_c8.fields.Settings.fields.m_VoxelSize;
        pMVar5 = &pMVar4->m_Items[(int)uVar3].fields;
        (pMVar5->Settings).fields.m_AgentHeight = local_c8.fields.Settings.fields.m_AgentHeight;
        (pMVar5->Settings).fields.m_AgentSlope = local_c8.fields.Settings.fields.m_AgentSlope;
        (pMVar5->Settings).fields.m_AgentClimb = local_c8.fields.Settings.fields.m_AgentClimb;
        (pMVar5->Settings).fields.m_LedgeDropHeight = local_c8.fields.Settings.fields.m_LedgeDropHeight;
        pMVar2 = pMVar4->m_Items + (int)uVar3;
        (pMVar2->fields).Data = local_c8.fields.Data;
        (pMVar2->fields).Settings.fields.m_AgentTypeID = local_c8.fields.Settings.fields.m_AgentTypeID;
        (pMVar2->fields).Settings.fields.m_AgentRadius = local_c8.fields.Settings.fields.m_AgentRadius;
        Il2CppCodeGenWriteBarrier((void **)(pMVar4->m_Items + (int)uVar3));
      }
      else {
        item.fields.Settings.fields.m_AgentTypeID = local_c8.fields.Settings.fields.m_AgentTypeID;
        item.fields.Settings.fields.m_AgentRadius = local_c8.fields.Settings.fields.m_AgentRadius;
        item.fields.Data = local_c8.fields.Data;
        item.fields.Settings.fields.m_AgentHeight = local_c8.fields.Settings.fields.m_AgentHeight;
        item.fields.Settings.fields.m_AgentSlope = local_c8.fields.Settings.fields.m_AgentSlope;
        item.fields.Settings.fields.m_AgentClimb = local_c8.fields.Settings.fields.m_AgentClimb;
        item.fields.Settings.fields.m_LedgeDropHeight = local_c8.fields.Settings.fields.m_LedgeDropHeight;
        item.fields.Settings.fields.m_MaxJumpAcrossDistance =
             local_c8.fields.Settings.fields.m_MaxJumpAcrossDistance;
        item.fields.Settings.fields.m_MinRegionArea = local_c8.fields.Settings.fields.m_MinRegionArea;
        item.fields.Settings.fields.m_OverrideVoxelSize = local_c8.fields.Settings.fields.m_OverrideVoxelSize;
        item.fields.Settings.fields.m_VoxelSize = local_c8.fields.Settings.fields.m_VoxelSize;
        item.fields.Settings.fields.m_OverrideTileSize = local_c8.fields.Settings.fields.m_OverrideTileSize;
        item.fields.Settings.fields.m_TileSize = local_c8.fields.Settings.fields.m_TileSize;
        item.fields.Settings.fields.m_BuildHeightMesh = local_c8.fields.Settings.fields.m_BuildHeightMesh;
        item.fields.Settings.fields.m_MaxJobWorkers = local_c8.fields.Settings.fields.m_MaxJobWorkers;
        item.fields.Settings.fields.m_PreserveTilesOutsideBounds =
             local_c8.fields.Settings.fields.m_PreserveTilesOutsideBounds;
        item.fields.Settings.fields.m_Debug.fields.m_Flags =
             local_c8.fields.Settings.fields.m_Debug.fields.m_Flags;
        item.fields.Settings.fields._61_3_ = local_c8.fields.Settings.fields._61_3_;
        item.fields.Bounds.fields.m_Center.fields.x = local_c8.fields.Bounds.fields.m_Center.fields.x;
        item.fields.Bounds.fields.m_Center.fields.y = local_c8.fields.Bounds.fields.m_Center.fields.y;
        item.fields.Bounds.fields.m_Center.fields.z = local_c8.fields.Bounds.fields.m_Center.fields.z;
        item.fields.Bounds.fields.m_Extents.fields.x = local_c8.fields.Bounds.fields.m_Extents.fields.x;
        item.fields.Bounds.fields.m_Extents.fields.y = local_c8.fields.Bounds.fields.m_Extents.fields.y;
        item.fields.Bounds.fields.m_Extents.fields.z = local_c8.fields.Bounds.fields.m_Extents.fields.z;
        System_Collections_Generic_List_MapLoader_NavMeshBuild___AddWithResize
                  (__this,item,(MethodInfo_3AB9BD0 *)pMVar6->klass->rgctx_data[0xe].method);
      }
      UnityEngine_AI_NavMesh__AddNavMeshData(__this_00,(MethodInfo *)0x0);
      buildSettings.fields.m_AgentHeight = local_168.m_AgentHeight;
      buildSettings.fields.m_AgentSlope = local_168.m_AgentSlope;
      buildSettings.fields.m_AgentTypeID = local_168.m_AgentTypeID;
      buildSettings.fields.m_AgentRadius = local_168.m_AgentRadius;
      buildSettings.fields.m_AgentClimb = local_168.m_AgentClimb;
      buildSettings.fields.m_LedgeDropHeight = local_168.m_LedgeDropHeight;
      buildSettings.fields.m_MaxJumpAcrossDistance = local_168.m_MaxJumpAcrossDistance;
      buildSettings.fields.m_MinRegionArea = local_168.m_MinRegionArea;
      buildSettings.fields.m_OverrideVoxelSize = local_168.m_OverrideVoxelSize;
      buildSettings.fields.m_VoxelSize = local_168.m_VoxelSize;
      buildSettings.fields.m_OverrideTileSize = local_168.m_OverrideTileSize;
      buildSettings.fields.m_TileSize = local_168.m_TileSize;
      buildSettings.fields.m_BuildHeightMesh = local_168.m_BuildHeightMesh;
      buildSettings.fields.m_MaxJobWorkers = local_168.m_MaxJobWorkers;
      buildSettings.fields.m_PreserveTilesOutsideBounds = local_168.m_PreserveTilesOutsideBounds;
      buildSettings.fields.m_Debug.fields.m_Flags = local_168.m_Debug.fields.m_Flags;
      buildSettings.fields._61_3_ = local_168._61_3_;
      pUVar7 = UnityEngine_AI_NavMeshBuilder__UpdateNavMeshDataAsync
                         (__this_00,buildSettings,TypeInfo_Map_MapLoader->static_fields->_navMeshSources,
                          bounds,(MethodInfo *)0x0);
      return pUVar7;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$RemoveNavMeshSources
// il2cpp: void Map_MapLoader__RemoveNavMeshSources (System_Collections_Generic_HashSet_Component__o* components, const MethodInfo* method);
// 0x59808f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59809b9: jmp 0x5980ada

void Map_MapLoader__RemoveNavMeshSources
               (System_Collections_Generic_HashSet_Component__o *components,MethodInfo *method)

{
  char cVar1;
  System_Collections_Generic_List_NavMeshBuildSource__o *__this;
  Map_MapLoader_o *__this_00;
  Il2CppClass *klass;
  int32_t iVar2;
  Map_MapLoader___c__DisplayClass57_0_o *__this_01;
  System_Predicate_T__o *match;
  Map_MapLoader_StaticFields *pMVar3;
  Map_MapLoader__RefreshNavMesh_d__58_o *__this_02;
  UnityEngine_Coroutine_o *pUVar4;
  
  if (Il2CppMethodInitialized_07545a45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_NavMeshBuildSource_RemoveAll);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_NavMeshBuildSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_MapLoader_c__DisplayClass57_0_RemoveNavMeshSources_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader_c__DisplayClass57_0);
    Il2CppMethodInitialized_07545a45 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapLoader_c__DisplayClass57_0);
  Map_MapLoader___c__DisplayClass57_0___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 == (Map_MapLoader___c__DisplayClass57_0_o *)0x0) goto label_05980b9e;
  (__this_01->fields).components = components;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).components);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    if (Il2CppMethodInitialized_07545a2d != '\0') goto label_0598099c;
label_059809cc:
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Bounds_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a2d = '\x01';
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor != 0) goto label_059809a9;
label_059809f8:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    pMVar3 = TypeInfo_Map_MapLoader->static_fields;
    cVar1 = pMVar3->_hasNavMeshData;
  }
  else {
    if (Il2CppMethodInitialized_07545a2d == '\0') goto label_059809cc;
label_0598099c:
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) goto label_059809f8;
label_059809a9:
    pMVar3 = TypeInfo_Map_MapLoader->static_fields;
    cVar1 = pMVar3->_hasNavMeshData;
  }
  if (cVar1 != '\0') {
    if ((((Il2CppClass *)TypeInfo_Map_MapLoader)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      pMVar3 = TypeInfo_Map_MapLoader->static_fields;
    }
    if (pMVar3->_navMeshBounds == (System_Collections_Generic_List_Bounds__o *)0x0) {
label_05980b9e:
      ThrowNullReferenceException();
    }
    if (0 < (pMVar3->_navMeshBounds->fields)._size) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this = TypeInfo_Map_MapLoader->static_fields->_navMeshSources;
      match = (System_Predicate_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_NavMeshBuildSource);
      System_Predicate_NavMeshBuildSource____ctor
                ((System_Predicate_NavMeshBuildSource__o *)match,(Il2CppObject *)__this_01,
                 (intptr_t)MethodInfo_Map_MapLoader_c__DisplayClass57_0_RemoveNavMeshSources_b__0,
                 (MethodInfo_3DC94F0 *)0x0);
      if (__this == (System_Collections_Generic_List_NavMeshBuildSource__o *)0x0) goto label_05980b9e;
      iVar2 = System_Collections_Generic_List_NavMeshBuildSource___RemoveAll
                        (__this,match,
                         (MethodInfo_395BB60 *)
                         MethodInfo_System_Collections_Generic_List_NavMeshBuildSource_RemoveAll);
      klass = (Il2CppClass *)TypeInfo_Map_MapLoader;
      if (iVar2 != 0) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          klass = (Il2CppClass *)TypeInfo_Map_MapLoader;
          pMVar3 = TypeInfo_Map_MapLoader->static_fields;
          pMVar3->_navMeshModified = true;
          pMVar3->_navMeshRefreshPending = true;
          pUVar4 = pMVar3->_navMeshRefresh;
        }
        else {
          pMVar3 = TypeInfo_Map_MapLoader->static_fields;
          pMVar3->_navMeshModified = true;
          pMVar3->_navMeshRefreshPending = true;
          pUVar4 = pMVar3->_navMeshRefresh;
        }
        if (pUVar4 == (UnityEngine_Coroutine_o *)0x0) {
          if ((klass->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(klass);
            pMVar3 = TypeInfo_Map_MapLoader->static_fields;
          }
          __this_00 = pMVar3->_instance;
          if (Il2CppMethodInitialized_07545a46 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader_RefreshNavMesh_d__58);
            Il2CppMethodInitialized_07545a46 = '\x01';
          }
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapLoader_RefreshNavMesh_d__58);
          Map_MapLoader__RefreshNavMesh_d__58___ctor(__this_02,0,(MethodInfo *)0x0);
          if (__this_00 != (Map_MapLoader_o *)0x0) {
            pUVar4 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                               ((UnityEngine_MonoBehaviour_o *)__this_00,
                                (System_Collections_IEnumerator_o *)__this_02,(MethodInfo *)0x0);
            pMVar3 = TypeInfo_Map_MapLoader->static_fields;
            pMVar3->_navMeshRefresh = pUVar4;
            Il2CppCodeGenWriteBarrier(&pMVar3->_navMeshRefresh);
            return;
          }
          goto label_05980b9e;
        }
      }
    }
  }
  return;
}


// Map.MapLoader$$RefreshNavMesh
// il2cpp: System_Collections_IEnumerator_o* Map_MapLoader__RefreshNavMesh (const MethodInfo* method);
// 0x5993910

System_Collections_IEnumerator_o * Map_MapLoader__RefreshNavMesh(MethodInfo *method)

{
  Map_MapLoader__RefreshNavMesh_d__58_o *__this;
  
  if (Il2CppMethodInitialized_07545a46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader_RefreshNavMesh_d__58);
    Il2CppMethodInitialized_07545a46 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapLoader_RefreshNavMesh_d__58);
  Map_MapLoader__RefreshNavMesh_d__58___ctor(__this,0,(MethodInfo *)0x0);
  return (System_Collections_IEnumerator_o *)__this;
}


// Map.MapLoader$$StopNavMeshRefresh
// il2cpp: void Map_MapLoader__StopNavMeshRefresh (const MethodInfo* method);
// 0x59904a0

void Map_MapLoader__StopNavMeshRefresh(MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Coroutine_o *pUVar2;
  Map_MapLoader_StaticFields *pMVar3;
  
  if (Il2CppMethodInitialized_07545a47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a47 = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    pMVar3 = TypeInfo_Map_MapLoader->static_fields;
    pUVar2 = pMVar3->_navMeshRefresh;
  }
  else {
    pMVar3 = ((Il2CppClass *)TypeInfo_Map_MapLoader)->static_fields;
    pUVar2 = pMVar3->_navMeshRefresh;
  }
  if (pUVar2 == (UnityEngine_Coroutine_o *)0x0) {
    uVar1 = (((Il2CppClass *)TypeInfo_Map_MapLoader)->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((((Il2CppClass *)TypeInfo_Map_MapLoader)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      pMVar3 = TypeInfo_Map_MapLoader->static_fields;
    }
    if (pMVar3->_instance == (Map_MapLoader_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
              ((UnityEngine_MonoBehaviour_o *)pMVar3->_instance,pMVar3->_navMeshRefresh,(MethodInfo *)0x0);
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pMVar3 = TypeInfo_Map_MapLoader->static_fields;
  pMVar3->_navMeshRefresh = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pMVar3->_navMeshRefresh);
  TypeInfo_Map_MapLoader->static_fields->_navMeshRefreshPending = false;
  return;
}


// Map.MapLoader$$UpdateNavMesh
// il2cpp: System_Threading_Tasks_Task_o* Map_MapLoader__UpdateNavMesh (const MethodInfo* method);
// 0x5993950

System_Threading_Tasks_Task_o * Map_MapLoader__UpdateNavMesh(MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o *__this;
  System_Threading_Tasks_Task_o *pSVar1;
  Map_MapLoader__UpdateNavMesh_d__61_Fields local_48;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o local_20;
  
  if (Il2CppMethodInitialized_07545a48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start_MapLoader_UpdateNavMesh_d__61
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
    Il2CppMethodInitialized_07545a48 = '\x01';
  }
  local_48.__t__builder.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
       (System_Action_o *)0x0;
  local_48.__t__builder.fields.m_builder.fields.m_task = (System_Threading_Tasks_Task_TResult__o *)0x0;
  local_48.__1__state = 0;
  local_48._4_4_ = 0;
  local_48.__t__builder.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_48.__u__1.fields.m_task =
       (System_Runtime_CompilerServices_TaskAwaiter_Fields)(System_Threading_Tasks_Task_o *)0x0;
  if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create(&local_20,(MethodInfo *)0x0);
  __this = &local_48.__t__builder;
  local_48.__t__builder.fields.m_builder.fields.m_task = local_20.fields.m_builder.fields.m_task;
  local_48.__t__builder.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
       local_20.fields.m_builder.fields.m_coreState.fields.m_stateMachine;
  local_48.__t__builder.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
       local_20.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction;
  Il2CppCodeGenWriteBarrier((void **)__this);
  local_48.__1__state = -1;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_MapLoader__UpdateNavMesh_d__61_
            (__this,(Map_MapLoader__UpdateNavMesh_d__61_o *)&local_48,
             (MethodInfo_3408280 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start_MapLoader_UpdateNavMesh_d__61
            );
  pSVar1 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task(__this,(MethodInfo *)0x0);
  return pSVar1;
}


// Map.MapLoader$$UpdateAllNavMeshes
// il2cpp: System_Threading_Tasks_Task_o* Map_MapLoader__UpdateAllNavMeshes (Map_MapLoader_o* __this, const MethodInfo* method);
// 0x5993a10

System_Threading_Tasks_Task_o * Map_MapLoader__UpdateAllNavMeshes(Map_MapLoader_o *__this,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o *__this_00;
  System_Threading_Tasks_Task_o *pSVar1;
  Map_MapLoader__UpdateAllNavMeshes_d__62_Fields local_58;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o local_28;
  
  if (Il2CppMethodInitialized_07545a49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start_MapLoader_UpdateAllNavMeshes_d__62
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
    Il2CppMethodInitialized_07545a49 = '\x01';
  }
  local_58.__4__this = (Map_MapLoader_o *)0x0;
  local_58.__u__1.fields.m_task =
       (System_Runtime_CompilerServices_TaskAwaiter_Fields)(System_Threading_Tasks_Task_o *)0x0;
  local_58.__t__builder.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
       (System_Action_o *)0x0;
  local_58.__t__builder.fields.m_builder.fields.m_task = (System_Threading_Tasks_Task_TResult__o *)0x0;
  local_58.__1__state = 0;
  local_58._4_4_ = 0;
  local_58.__t__builder.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create(&local_28,(MethodInfo *)0x0);
  __this_00 = &local_58.__t__builder;
  local_58.__t__builder.fields.m_builder.fields.m_task = local_28.fields.m_builder.fields.m_task;
  local_58.__t__builder.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
       local_28.fields.m_builder.fields.m_coreState.fields.m_stateMachine;
  local_58.__t__builder.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
       local_28.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction;
  Il2CppCodeGenWriteBarrier((void **)__this_00);
  local_58.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_58.__4__this);
  local_58.__1__state = -1;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_MapLoader__UpdateAllNavMeshes_d__62_
            (__this_00,(Map_MapLoader__UpdateAllNavMeshes_d__62_o *)&local_58,
             (MethodInfo_3408190 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start_MapLoader_UpdateAllNavMeshes_d__62
            );
  pSVar1 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task(__this_00,(MethodInfo *)0x0);
  return pSVar1;
}


// Map.MapLoader$$GenerateNavMesh
// il2cpp: System_Threading_Tasks_Task_o* Map_MapLoader__GenerateNavMesh (Map_MapLoader_o* __this, const MethodInfo* method);
// 0x5993ae0

System_Threading_Tasks_Task_o * Map_MapLoader__GenerateNavMesh(Map_MapLoader_o *__this,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o *__this_00;
  System_Threading_Tasks_Task_o *pSVar1;
  Map_MapLoader__GenerateNavMesh_d__63_Fields local_78;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o local_28;
  
  if (Il2CppMethodInitialized_07545a4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start_MapLoader_GenerateNavMesh_d__63
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
    Il2CppMethodInitialized_07545a4a = '\x01';
  }
  local_78.__7__wrap1.fields._index = 0;
  local_78.__7__wrap1.fields._version = 0;
  local_78.__7__wrap1.fields._current = (UnityEngine_AsyncOperation_o *)0x0;
  local_78.__4__this = (Map_MapLoader_o *)0x0;
  local_78.__7__wrap1.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.__t__builder.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
       (System_Action_o *)0x0;
  local_78.__t__builder.fields.m_builder.fields.m_task = (System_Threading_Tasks_Task_TResult__o *)0x0;
  local_78.__1__state = 0;
  local_78._4_4_ = 0;
  local_78.__t__builder.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_78.__u__1.fields._awaited = (UnityEngine_Awaitable_Awaiter_Fields)(UnityEngine_Awaitable_o *)0x0;
  if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create(&local_28,(MethodInfo *)0x0);
  __this_00 = &local_78.__t__builder;
  local_78.__t__builder.fields.m_builder.fields.m_task = local_28.fields.m_builder.fields.m_task;
  local_78.__t__builder.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
       local_28.fields.m_builder.fields.m_coreState.fields.m_stateMachine;
  local_78.__t__builder.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
       local_28.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction;
  Il2CppCodeGenWriteBarrier((void **)__this_00);
  local_78.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_78.__4__this);
  local_78.__1__state = -1;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_MapLoader__GenerateNavMesh_d__63_
            (__this_00,(Map_MapLoader__GenerateNavMesh_d__63_o *)&local_78,
             (MethodInfo_34080A0 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start_MapLoader_GenerateNavMesh_d__63
            );
  pSVar1 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task(__this_00,(MethodInfo *)0x0);
  return pSVar1;
}


// Map.MapLoader$$Batch
// il2cpp: void Map_MapLoader__Batch (Map_MapLoader_o* __this, const MethodInfo* method);
// 0x5993bc0
// eh: try 0x599415a..0x5995100 -> pad 0x59953f2 (+141 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5995106..0x5995110 -> pad 0x59954b3 catch (...) [compiler noexcept guard]
// eh: try 0x5995348..0x599534d -> pad 0x599536f cleanup
// eh: try 0x5995372..0x599537c -> pad 0x59954b3 catch (...) [compiler noexcept guard]
// eh: try 0x59953a9..0x59953ae -> pad 0x59953d3 cleanup
// eh: try 0x59953d6..0x59953e3 -> pad 0x59954b3 catch (...) [compiler noexcept guard]
// eh: try 0x599540f..0x5995414 -> pad 0x5995433 cleanup
// eh: try 0x5995436..0x5995440 -> pad 0x59954b3 catch (...) [compiler noexcept guard]
// eh: try 0x5995465..0x599546a -> pad 0x599549e cleanup
// eh: try 0x59954a1..0x59954ab -> pad 0x59954b3 catch (...) [compiler noexcept guard]
// asm: 253 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5994428: xor eax, eax
// asm:   0x599442a: jmp 0x5994465
// asm:   0x5994cac: nop dword ptr [rax]
// asm:   0x5994e21: nop word ptr cs:[rax + rax]
// asm:   0x5994ebf: test r15d, r15d
// asm:   0x5994ec2: je 0x5994d90
// asm:   0x5994ec8: jmp 0x5994fff
// asm:   0x5994efc: jmp 0x5994f0a
// asm:   0x5994efe: jmp 0x5994f0a
// asm:   0x5994f00: jmp 0x5994f0a
// asm:   0x5994f02: jmp 0x5994f0a
// asm:   0x5994f04: jmp 0x5994f0a
// asm:   0x5994f06: jmp 0x5994f0a
// asm:   0x5994f08: jmp 0x5994f0a
// asm:   0x5994f0a: mov rbx, rdx
// asm:   0x5994f0d: mov rbp, rax
// asm:   0x5994f10: cmp ebx, 1
// asm:   0x5994f13: jne 0x5995106
// asm:   0x5994f19: mov rdi, rbp
// asm:   0x5994f1c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5994f21: mov rbx, qword ptr [rax]
// asm:   0x5994f24: mov qword ptr [rsp + 8], rbx
// asm:   0x5994f29: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5994f2e: xor r15d, r15d
// asm:   0x5994f31: mov r14b, 1
// asm:   0x5994f34: jmp 0x5994e9a
// asm:   0x5994fff: lea rax, [rip + 0x18fad52]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_List_GameObject_Dispose
// asm:   0x5995006: mov rsi, qword ptr [rax]
// asm:   0x5995009: lea rdi, [rsp + 0x90]
// asm:   0x5995011: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5995016: test r14b, r14b
// asm:   0x5995019: jne 0x5994f50
// asm:   0x599501f: jmp 0x5994fed
// asm:   0x599503f: mov rdi, rbx
// asm:   0x5995042: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59950ec: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5995100: mov rbx, rdx
// asm:   0x5995103: mov rbp, rax
// asm:   0x5995106: lea rdi, [rsp + 8]
// asm:   0x599510b: call 0x2fd47a0  ; il2cpp_runtime_helper_02fd47a0()
// asm:   0x5995110: jmp 0x5995391
// asm:   0x5995115: jmp 0x5995448
// asm:   0x599511a: jmp 0x5995448
// asm:   0x599511f: jmp 0x5995448
// asm:   0x5995124: jmp 0x5995448
// asm:   0x5995129: jmp 0x5995448
// asm:   0x599512e: jmp 0x5995448
// asm:   0x5995133: jmp 0x5995448
// asm:   0x5995138: jmp 0x5995448
// asm:   0x599513d: jmp 0x5995448
// asm:   0x5995142: jmp 0x5995448
// asm:   0x5995147: jmp 0x5995448
// asm:   0x599514c: jmp 0x5995448
// asm:   0x5995151: jmp 0x5995448
// asm:   0x5995156: jmp 0x5995448
// asm:   0x599515b: jmp 0x5995448
// asm:   0x5995160: jmp 0x5995448
// asm:   0x5995165: jmp 0x5995448
// asm:   0x599516a: jmp 0x5995448
// asm:   0x599516f: jmp 0x5995448
// asm:   0x5995174: jmp 0x5995448
// asm:   0x5995179: jmp 0x5995448
// asm:   0x599517e: jmp 0x5995448
// asm:   0x5995183: jmp 0x5995448
// asm:   0x5995188: jmp 0x5995448
// asm:   0x599518d: jmp 0x5995448
// asm:   0x5995192: jmp 0x59953f2
// asm:   0x5995197: jmp 0x59953f2
// asm:   0x599519c: jmp 0x59953f2
// asm:   0x59951a1: jmp 0x59953f2
// asm:   0x59951a6: jmp 0x5995448
// asm:   0x59951ab: jmp 0x5995448
// asm:   0x59951b0: jmp 0x5995448
// asm:   0x59951b5: jmp 0x5995448
// asm:   0x59951ba: jmp 0x5995448
// asm:   0x59951bf: jmp 0x5995448
// asm:   0x59951c4: jmp 0x5995448
// asm:   0x59951c9: jmp 0x5995448
// asm:   0x59951ce: jmp 0x5995448
// asm:   0x59951d3: jmp 0x5995448
// asm:   0x59951d8: jmp 0x59953f2
// asm:   0x59951dd: jmp 0x5995448
// asm:   0x59951e2: jmp 0x59953f2
// asm:   0x59951e7: jmp 0x5995448
// asm:   0x59951ec: jmp 0x5995448
// asm:   0x59951f1: jmp 0x5995448
// asm:   0x59951f6: jmp 0x5995448
// asm:   0x59951fb: jmp 0x5995448
// asm:   0x5995200: jmp 0x5995448
// asm:   0x5995205: jmp 0x5995448
// asm:   0x599520a: jmp 0x5995448
// asm:   0x599520f: jmp 0x5995448
// asm:   0x5995214: jmp 0x5995448
// asm:   0x5995219: jmp 0x5995448
// asm:   0x599521e: jmp 0x5995448
// asm:   0x5995223: jmp 0x5995448
// asm:   0x5995228: jmp 0x5995448
// asm:   0x599522d: jmp 0x5995448
// asm:   0x5995232: jmp 0x5995448
// asm:   0x5995237: jmp 0x5995448
// asm:   0x599523c: jmp 0x5995448
// asm:   0x5995241: jmp 0x5995448
// asm:   0x5995246: jmp 0x5995448
// asm:   0x599524b: jmp 0x5995448
// asm:   0x5995250: jmp 0x5995448
// asm:   0x5995255: jmp 0x5995448
// asm:   0x599525a: jmp 0x59953f2
// asm:   0x599525f: jmp 0x59953f2
// asm:   0x5995264: jmp 0x59953f2
// asm:   0x5995269: jmp 0x5995448
// asm:   0x599526e: jmp 0x5995448
// asm:   0x5995273: jmp 0x5995448
// asm:   0x5995278: jmp 0x59953f2
// asm:   0x599527d: jmp 0x5995448
// asm:   0x5995282: jmp 0x5995448
// asm:   0x5995287: jmp 0x5995448
// asm:   0x599528c: jmp 0x5995448
// asm:   0x5995291: jmp 0x5995448
// asm:   0x5995296: jmp 0x5995448
// asm:   0x599529b: jmp 0x5995448
// asm:   0x59952a0: jmp 0x5995448
// asm:   0x59952a5: jmp 0x5995448
// asm:   0x59952aa: jmp 0x5995448
// asm:   0x59952af: jmp 0x5995448
// asm:   0x59952b4: jmp 0x5995448
// asm:   0x59952b9: jmp 0x5995448
// asm:   0x59952be: jmp 0x5995448
// asm:   0x59952c3: jmp 0x5995448
// asm:   0x59952c8: jmp 0x5995448
// asm:   0x59952cd: jmp 0x5995448
// asm:   0x59952d2: jmp 0x5995448
// asm:   0x59952d7: jmp 0x5995448
// asm:   0x59952dc: jmp 0x5995448
// asm:   0x59952e1: jmp 0x5995330
// asm:   0x59952e3: jmp 0x5995448
// asm:   0x59952e8: jmp 0x5995448
// asm:   0x59952ed: jmp 0x5995448
// asm:   0x59952f2: jmp 0x5995448
// asm:   0x59952f7: jmp 0x5995448
// asm:   0x59952fc: jmp 0x5995448
// asm:   0x5995301: jmp 0x5995330
// asm:   0x5995303: jmp 0x5995330
// asm:   0x5995305: jmp 0x5995330
// asm:   0x5995307: jmp 0x5995448
// asm:   0x599530c: jmp 0x5995448
// asm:   0x5995311: mov rbp, rax
// asm:   0x5995314: mov r15, qword ptr [rsp + 0x38]
// asm:   0x5995319: jmp 0x5995333
// asm:   0x599531b: jmp 0x5995448
// asm:   0x5995320: jmp 0x5995448
// asm:   0x5995325: jmp 0x5995448
// asm:   0x599532a: jmp 0x5995330
// asm:   0x599532c: jmp 0x5995330
// asm:   0x599532e: jmp 0x5995330
// asm:   0x5995330: mov rbp, rax
// asm:   0x5995333: cmp edx, 1
// asm:   0x5995336: jne 0x5995372
// asm:   0x5995338: mov rdi, rbp
// asm:   0x599533b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5995340: mov rbx, qword ptr [rax]
// asm:   0x5995343: mov qword ptr [rsp + 8], rbx
// asm:   0x5995348: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599534d: lea rax, [rip + 0x18fac44]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_GameObject_Dispose
// asm:   0x5995354: mov rsi, qword ptr [rax]
// asm:   0x5995357: lea rdi, [rsp + 0x70]
// asm:   0x599535c: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5995361: test rbx, rbx
// asm:   0x5995364: je 0x5994d0a
// asm:   0x599536a: jmp 0x5995496
// asm:   0x599536f: mov rbp, rax
// asm:   0x5995372: lea rdi, [rsp + 8]
// asm:   0x5995377: call 0x2fd4770  ; il2cpp_runtime_helper_02fd4770()
// asm:   0x599537c: jmp 0x59954ab
// asm:   0x5995381: jmp 0x599538b
// asm:   0x5995383: jmp 0x599538b
// asm:   0x5995385: jmp 0x599538b
// asm:   0x5995387: jmp 0x599538b
// asm:   0x5995389: jmp 0x599538b
// asm:   0x599538b: mov rbx, rdx
// asm:   0x599538e: mov rbp, rax
// asm:   0x5995391: cmp ebx, 1
// asm:   0x5995394: jne 0x59953d6
// asm:   0x5995396: mov rdi, rbp
// asm:   0x5995399: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x599539e: mov rbx, qword ptr [rax]
// asm:   0x59953a1: mov qword ptr [rsp + 0xe8], rbx
// asm:   0x59953a9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59953ae: lea rax, [rip + 0x18fa9a3]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_List_GameObject_Dispose
// asm:   0x59953b5: mov rsi, qword ptr [rax]
// asm:   0x59953b8: lea rdi, [rsp + 0x90]
// asm:   0x59953c0: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x59953c5: test rbx, rbx
// asm:   0x59953c8: je 0x5994f50
// asm:   0x59953ce: jmp 0x5995496
// asm:   0x59953d3: mov rbp, rax
// asm:   0x59953d6: lea rdi, [rsp + 0xe8]
// asm:   0x59953de: call 0x2fd47d0  ; il2cpp_runtime_helper_02fd47d0()
// asm:   0x59953e3: jmp 0x59954ab
// asm:   0x59953e8: jmp 0x59953f7
// asm:   0x59953ea: jmp 0x5995448
// asm:   0x59953ec: jmp 0x5995448
// asm:   0x59953ee: jmp 0x5995448
// asm:   0x59953f0: jmp 0x5995448
// asm:   0x59953f2: mov rbp, rax
// asm:   0x59953f5: jmp 0x599544b
// asm:   0x59953f7: mov rbp, rax
// asm:   0x59953fa: cmp edx, 1
// asm:   0x59953fd: jne 0x5995436
// asm:   0x59953ff: mov rdi, rbp
// asm:   0x5995402: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5995407: mov rbx, qword ptr [rax]
// asm:   0x599540a: mov qword ptr [rsp + 8], rbx
// asm:   0x599540f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5995414: lea rax, [rip + 0x18f895d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x599541b: mov rsi, qword ptr [rax]
// asm:   0x599541e: lea rdi, [rsp + 0x40]
// asm:   0x5995423: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5995428: test rbx, rbx
// asm:   0x599542b: je 0x5994fed
// asm:   0x5995431: jmp 0x5995496
// asm:   0x5995433: mov rbp, rax
// asm:   0x5995436: lea rdi, [rsp + 8]
// asm:   0x599543b: call 0x2fd4800  ; il2cpp_runtime_helper_02fd4800()
// asm:   0x5995440: jmp 0x59954ab
// asm:   0x5995442: jmp 0x5995448
// asm:   0x5995444: jmp 0x5995448
// asm:   0x5995446: jmp 0x5995448
// asm:   0x5995448: mov rbp, rax
// asm:   0x599544b: cmp edx, 1
// asm:   0x599544e: mov r12, qword ptr [rsp + 0x30]
// asm:   0x5995453: jne 0x59954a1
// asm:   0x5995455: mov rdi, rbp
// asm:   0x5995458: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x599545d: mov rbx, qword ptr [rax]
// asm:   0x5995460: mov qword ptr [rsp + 8], rbx
// asm:   0x5995465: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599546a: mov r15, qword ptr [rsp + 0x38]
// asm:   0x599546f: lea r13, [rip + 0x18f6272]  ; MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_get_Item
// asm:   0x5995476: lea rax, [rip + 0x18fa4a3]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
// asm:   0x599547d: mov rsi, qword ptr [rax]
// asm:   0x5995480: lea rdi, [rsp + 0xb0]
// asm:   0x5995488: call 0x4da27d0  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose()
// asm:   0x599548d: test rbx, rbx
// asm:   0x5995490: je 0x5994b54
// asm:   0x5995496: mov rdi, rbx
// asm:   0x5995499: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x599549e: mov rbp, rax
// asm:   0x59954a1: lea rdi, [rsp + 8]
// asm:   0x59954a6: call 0x2fd4740  ; il2cpp_runtime_helper_02fd4740()
// asm:   0x59954ab: mov rdi, rbp
// asm:   0x59954ae: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59954b3: mov rdi, rax
// asm:   0x59954b6: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapLoader__Batch(Map_MapLoader_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_Dictionary_int__object__o *pSVar4;
  Map_MapScriptBaseObject_o *pMVar5;
  System_String_Fields shader;
  UnityEngine_Component_o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  System_Object_array *pSVar6;
  MethodInfo *pMVar7;
  System_Collections_Generic_Dictionary_GameObject__Transform__o *__this_02;
  bool bVar8;
  int32_t iVar9;
  int iVar10;
  System_Collections_Generic_Dictionary_string__GameObject__o *__this_03;
  System_Collections_Generic_Dictionary_string__int__o *pSVar11;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_GameObject_o *pUVar13;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_Transform_o *pUVar15;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar16;
  Map_MapObject_o *pMVar17;
  System_String_array *pSVar18;
  System_String_o *pSVar19;
  System_Object_array *pSVar20;
  UnityEngine_Object_o *pUVar21;
  UnityEngine_Material_array *pUVar22;
  UnityEngine_Object_o *pUVar23;
  UnityEngine_Mesh_o *pUVar24;
  UnityEngine_Material_o *pUVar25;
  System_String_o *pSVar26;
  System_Collections_Generic_List_GameObject__o *pSVar27;
  System_Collections_Generic_List_object__o *pSVar28;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_Dictionary_object__object__o *pSVar29;
  System_Collections_Generic_Dictionary_string__List_GameObject___o *__this_04;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar30;
  uint uStack_128;
  int32_t iStack_124;
  undefined1 auStack_120 [16];
  UnityEngine_Object_o *pUStack_110;
  undefined1 auStack_108 [16];
  System_Collections_Generic_Dictionary_string__GameObject__o *pSStack_f8;
  System_Collections_Generic_Dictionary_string__List_GameObject___o *pSStack_f0;
  undefined1 auStack_e8 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_e0;
  UnityEngine_Object_o *pUStack_d8;
  System_Collections_Generic_Dictionary_string__int__o *pSStack_c8;
  System_String_o *pSStack_c0;
  undefined1 auStack_b8 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_b0;
  UnityEngine_Object_o *pUStack_a8;
  undefined1 auStack_98 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_90;
  UnityEngine_Object_o *pUStack_88;
  undefined1 auStack_78 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_70;
  UnityEngine_Object_o *pUStack_68;
  System_Collections_Generic_Dictionary_GameObject__Transform__o *pSStack_58;
  UnityEngine_GameObject_o *pUStack_50;
  UnityEngine_GameObject_o *pUStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  if (Il2CppMethodInitialized_07545a4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_Transform_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_Transform_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_Transform_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_GameObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_List_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_GameObject_Transform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_List_GameObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_GameObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_GameObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_List_GameObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_GameObject_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_List_GameObject_get_Curren
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_List_GameObject_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_GameObject_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&" with missing mesh");
    il2cpp_codegen_initialize_runtime_metadata(&"disabled");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"Combined Meshes");
    il2cpp_codegen_initialize_runtime_metadata(&"Failed to load static object with no MeshFilter or SharedMesh: ");
    il2cpp_codegen_initialize_runtime_metadata(&" (Batched) ");
    il2cpp_codegen_initialize_runtime_metadata(&"Map load error: object ");
    il2cpp_codegen_initialize_runtime_metadata(&"Batched Scene");
    il2cpp_codegen_initialize_runtime_metadata(&"Original Objects");
    Il2CppMethodInitialized_07545a4b = '\x01';
  }
  auStack_78 = (undefined1  [8])0x0;
  pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pUStack_68 = (UnityEngine_Object_o *)0x0;
  uStack_128 = 0;
  iStack_124 = 0;
  auStack_b8 = (undefined1  [8])0x0;
  pSStack_b0 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pUStack_a8 = (UnityEngine_Object_o *)0x0;
  auStack_98 = (undefined1  [8])0x0;
  pSStack_90 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pUStack_88 = (UnityEngine_Object_o *)0x0;
  auStack_e8 = (undefined1  [8])0x0;
  pSStack_e0 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pUStack_d8 = (UnityEngine_Object_o *)0x0;
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_GameObject);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ctor);
  pSStack_f0 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_List_GameObject
                         );
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSStack_f0,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_ctor);
  pSStack_58 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_GameObject_Transform);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSStack_58,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_GameObject_Transform_ctor)
  ;
  pSVar11 = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor
            ((System_Collections_Generic_Dictionary_object__int__o *)pSVar11,
             (MethodInfo_4A9CB80 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
  pUVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor(pUVar12,"Batched Scene",(MethodInfo *)0x0);
  pUVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor(pUVar13,"Original Objects",(MethodInfo *)0x0);
  if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
    pUStack_48 = pUVar13;
    pUVar14 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
    if ((pUVar12 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar15 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0),
       pUVar14 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(pUVar14,pUVar15,(MethodInfo *)0x0);
      pUVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor(pUVar13,"Combined Meshes",(MethodInfo *)0x0);
      if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
        pUVar14 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
        pUVar15 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
        if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent(pUVar14,pUVar15,(MethodInfo *)0x0);
          __this_04 = pSStack_f0;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            pSStack_c8 = pSVar11;
            pUStack_50 = pUVar13;
            pSVar16 = System_Collections_Generic_Dictionary_int__object___get_Keys
                                (pSVar4,(MethodInfo_4A0F330 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Keys
                                );
            if (pSVar16 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
              System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator
                        ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                         auStack_120,pSVar16,
                         (MethodInfo_510AAB0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_MapObject_GetEnumerator
                        );
              pUStack_68 = pUStack_110;
              auStack_78 = (undefined1  [8])auStack_120._0_8_;
              pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_120._8_8_;
              auStack_120._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
              auStack_120._8_8_ = auStack_78;
              pSStack_f8 = __this_03;
              while (bVar8 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext
                                       ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                         *)auStack_78,
                                        (MethodInfo_4CA27E0 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_MoveNext
                                       ), bVar8) {
                iVar9 = (int32_t)pUStack_68;
                if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                }
                pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                         TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                pMVar17 = System_Collections_Generic_Dictionary_int__object___get_Item
                                    (pSVar4,iVar9,
                                     (MethodInfo_4A0F690 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
                if (pMVar17 == (Map_MapObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pMVar5 = (pMVar17->fields).ScriptObject;
                if (pMVar5 == (Map_MapScriptBaseObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                if (((pMVar5->fields).Parent < 0) && ((pMVar5->fields).Static != false)) {
                  bVar2 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
                  if (((pMVar5->klass->_2).typeHierarchyDepth < bVar2) ||
                     ((pMVar5->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                      (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
                    il2cpp_codegen_raise_invalid_cast_exception();
                  }
                  pSVar19 = (*(uint64_t *)((char *)pMVar5 + 0x78));
                  if (pSVar19 == (System_String_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  shader = pSVar19->fields;
                  if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
                  }
                  bVar8 = Map_MapObjectShader__IsLegacyShader((System_String_o *)shader,(MethodInfo *)0x0);
                  if (!bVar8) {
                    if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
                    }
                    bVar8 = System_String__op_Equality
                                      ((System_String_o *)shader,
                                       TypeInfo_Map_MapObjectShader->static_fields->Transparent,
                                       (MethodInfo *)0x0);
                    if (!bVar8) {
                      pUVar12 = (pMVar17->fields).GameObject;
                      if (pUVar12 == (UnityEngine_GameObject_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pUVar14 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
                      if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      UVar30 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
                      auStack_108._8_4_ = extraout_XMM0_Dc;
                      auStack_108._0_8_ = UVar30.fields._0_8_;
                      auStack_108._12_4_ = extraout_XMM0_Dd;
                      pSStack_c0 = (System_String_o *)CONCAT44(pSStack_c0._4_4_,UVar30.fields.z);
                      pSVar18 = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
                      uStack_128 = (uint)((float)auStack_108._0_4_ / 1000.0);
                      pSVar19 = System_Int32__ToString((int32_t *)&uStack_128,(MethodInfo *)0x0);
                      if (pSVar18 == (System_String_array *)0x0) {
                        ThrowNullReferenceException();
                      }
                      if ((int)pSVar18->max_length == 0) {
                        ThrowIndexOutOfRangeException();
                      }
                      pSVar18->m_Items[0] = pSVar19;
                      Il2CppCodeGenWriteBarrier(pSVar18->m_Items);
                      if ((pSVar18->max_length & 0xfffffffe) == 0) {
                        ThrowIndexOutOfRangeException();
                      }
                      pSVar18->m_Items[1] = "-";
                      Il2CppCodeGenWriteBarrier(pSVar18->m_Items + 1);
                      uStack_128 = (uint)((float)auStack_108._4_4_ / 1000.0);
                      pSVar19 = System_Int32__ToString((int32_t *)&uStack_128,(MethodInfo *)0x0);
                      if ((uint)pSVar18->max_length < 3) {
                        ThrowIndexOutOfRangeException();
                      }
                      pSVar18->m_Items[2] = pSVar19;
                      Il2CppCodeGenWriteBarrier(pSVar18->m_Items + 2);
                      if ((pSVar18->max_length & 0xfffffffc) == 0) {
                        ThrowIndexOutOfRangeException();
                      }
                      pSVar18->m_Items[3] = "-";
                      Il2CppCodeGenWriteBarrier(pSVar18->m_Items + 3);
                      uStack_128 = (uint)(pSStack_c0._0_4_ / 1000.0);
                      pSVar19 = System_Int32__ToString((int32_t *)&uStack_128,(MethodInfo *)0x0);
                      if ((uint)pSVar18->max_length < 5) {
                        ThrowIndexOutOfRangeException();
                      }
                      pSVar18->m_Items[4] = pSVar19;
                      Il2CppCodeGenWriteBarrier(pSVar18->m_Items + 4);
                      pSStack_c0 = System_String__Concat_5302910(pSVar18,(MethodInfo *)0x0);
                      pUVar12 = (pMVar17->fields).GameObject;
                      if (pUVar12 == (UnityEngine_GameObject_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pSVar20 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                                          (pUVar12,(MethodInfo_353C030 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter
                                          );
                      uStack_128 = 0;
                      if (pSVar20 == (System_Object_array *)0x0) {
                        ThrowNullReferenceException();
                      }
                      uVar3 = (uint)pSVar20->max_length;
                      if (0 < (int)uVar3) {
                        do {
                          if (uVar3 <= uStack_128) {
                            ThrowIndexOutOfRangeException();
                          }
                          __this_00 = (UnityEngine_Component_o *)pSVar20->m_Items[(int)uStack_128];
                          if (__this_00 == (UnityEngine_Component_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          pUVar21 = (UnityEngine_Object_o *)
                                    UnityEngine_Component__GetComponent_object_
                                              (__this_00,
                                               (MethodInfo_34B0830 *)
                                               MethodInfo_UnityEngine_Component_GetComponent_Renderer);
                          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                          }
                          bVar8 = UnityEngine_Object__op_Equality
                                            (pUVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                          if (!bVar8) {
                            if (pUVar21 == (UnityEngine_Object_o *)0x0) {
                              ThrowNullReferenceException();
                            }
                            pUVar22 = UnityEngine_Renderer__get_sharedMaterials
                                                ((UnityEngine_Renderer_o *)pUVar21,(MethodInfo *)0x0);
                            if (pUVar22 == (UnityEngine_Material_array *)0x0) {
                              ThrowNullReferenceException();
                            }
                            if (((int)pUVar22->max_length < 2) &&
                               (bVar8 = UnityEngine_Renderer__HasPropertyBlock
                                                  ((UnityEngine_Renderer_o *)pUVar21,(MethodInfo *)0x0),
                               !bVar8)) {
                              pUVar23 = (UnityEngine_Object_o *)
                                        UnityEngine_MeshFilter__get_sharedMesh
                                                  ((UnityEngine_MeshFilter_o *)__this_00,(MethodInfo *)0x0);
                              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                              }
                              bVar8 = UnityEngine_Object__op_Equality
                                                (pUVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                              if (bVar8) {
                                pMVar5 = (pMVar17->fields).ScriptObject;
                                if (pMVar5 == (Map_MapScriptBaseObject_o *)0x0) {
                                  ThrowNullReferenceException();
                                }
                                pSVar19 = System_String__Concat_5301f10
                                                    ("Map load error: object ",(pMVar5->fields).Name,
                                                     " with missing mesh",(MethodInfo *)0x0);
                                if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor
                                    == 0) {
                                  il2cpp_codegen_runtime_class_init
                                            ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
                                }
                                ApplicationManagers_DebugConsole__Log(pSVar19,true,(MethodInfo *)0x0);
                                if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                                }
                                pMVar5 = (pMVar17->fields).ScriptObject;
                                if (pMVar5 == (Map_MapScriptBaseObject_o *)0x0) {
                                  ThrowNullReferenceException();
                                }
                                __this_01 = TypeInfo_Map_MapLoader->static_fields->Errors;
                                pSVar19 = System_String__Concat_52f0320
                                                    ("Failed to load static object with no MeshFilter or SharedMesh: ",(pMVar5->fields).Name,
                                                     (MethodInfo *)0x0);
                                pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
                                if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
label_05995060:
                                  ThrowNullReferenceException();
                                }
                                piVar1 = &(__this_01->fields)._version;
                                *piVar1 = *piVar1 + 1;
                                pSVar18 = (__this_01->fields)._items;
                                if (pSVar18 == (System_String_array *)0x0) goto label_05995060;
                                uVar3 = (__this_01->fields)._size;
                                if (uVar3 < (uint)pSVar18->max_length) {
                                  (__this_01->fields)._size = uVar3 + 1;
                                  pSVar18->m_Items[(int)uVar3] = pSVar19;
                                  Il2CppCodeGenWriteBarrier(pSVar18->m_Items + (int)uVar3);
                                }
                                else {
                                  System_Collections_Generic_List_object___AddWithResize
                                            ((System_Collections_Generic_List_object__o *)__this_01,
                                             (Il2CppObject *)pSVar19,
                                             (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                                }
                              }
                              else {
                                pUVar24 = UnityEngine_MeshFilter__get_sharedMesh
                                                    ((UnityEngine_MeshFilter_o *)__this_00,(MethodInfo *)0x0);
                                if (pUVar24 == (UnityEngine_Mesh_o *)0x0) {
                                  ThrowNullReferenceException();
                                }
                                iVar9 = UnityEngine_Mesh__get_vertexCount(pUVar24,(MethodInfo *)0x0);
                                if (iVar9 != 0) {
                                  bVar8 = UnityEngine_Renderer__get_enabled
                                                    ((UnityEngine_Renderer_o *)pUVar21,(MethodInfo *)0x0);
                                  if (bVar8) {
                                    pUVar25 = UnityEngine_Renderer__get_sharedMaterial
                                                        ((UnityEngine_Renderer_o *)pUVar21,(MethodInfo *)0x0);
                                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                                      il2cpp_codegen_runtime_class_init
                                                ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                    }
                                    bVar8 = UnityEngine_Object__op_Equality
                                                      ((UnityEngine_Object_o *)pUVar25,
                                                       (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                    if (bVar8) goto label_05994450;
                                  }
                                  pUVar25 = UnityEngine_Renderer__get_sharedMaterial
                                                      ((UnityEngine_Renderer_o *)pUVar21,(MethodInfo *)0x0);
                                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                                    il2cpp_codegen_runtime_class_init
                                              ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                  }
                                  bVar8 = UnityEngine_Object__op_Inequality
                                                    ((UnityEngine_Object_o *)pUVar25,
                                                     (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                  if (bVar8) {
                                    pUVar25 = UnityEngine_Renderer__get_sharedMaterial
                                                        ((UnityEngine_Renderer_o *)pUVar21,(MethodInfo *)0x0);
                                    if (pUVar25 == (UnityEngine_Material_o *)0x0) {
                                      ThrowNullReferenceException();
                                    }
                                    bVar8 = UnityEngine_Material__get_enableInstancing
                                                      (pUVar25,(MethodInfo *)0x0);
                                    if (bVar8) goto label_05994450;
                                  }
                                  pUVar23 = (UnityEngine_Object_o *)
                                            UnityEngine_MeshFilter__get_sharedMesh
                                                      ((UnityEngine_MeshFilter_o *)__this_00,(MethodInfo *)0x0
                                                      );
                                  if (pUVar23 == (UnityEngine_Object_o *)0x0) {
                                    ThrowNullReferenceException();
                                  }
                                  iStack_124 = UnityEngine_Object__GetInstanceID(pUVar23,(MethodInfo *)0x0);
                                  pSVar19 = System_Int32__ToString(&iStack_124,(MethodInfo *)0x0);
                                  pSVar19 = System_String__Concat_52f0320
                                                      (pSVar19,pSStack_c0,(MethodInfo *)0x0);
                                  bVar8 = UnityEngine_Renderer__get_enabled
                                                    ((UnityEngine_Renderer_o *)pUVar21,(MethodInfo *)0x0);
                                  if (bVar8) {
                                    pUVar25 = UnityEngine_Renderer__get_sharedMaterial
                                                        ((UnityEngine_Renderer_o *)pUVar21,(MethodInfo *)0x0);
                                    if (pUVar25 == (UnityEngine_Material_o *)0x0) {
                                      ThrowNullReferenceException();
                                    }
                                    iStack_124 = UnityEngine_Object__GetInstanceID
                                                           ((UnityEngine_Object_o *)pUVar25,(MethodInfo *)0x0)
                                    ;
                                    pSVar26 = System_Int32__ToString(&iStack_124,(MethodInfo *)0x0);
                                    pSVar19 = System_String__Concat_52f0320(pSVar19,pSVar26,(MethodInfo *)0x0)
                                    ;
                                  }
                                  else {
                                    pSVar19 = System_String__Concat_52f0320
                                                        (pSVar19,"disabled",(MethodInfo *)0x0);
                                  }
                                  if (pSStack_c8 ==
                                      (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
                                    ThrowNullReferenceException();
                                  }
                                  bVar8 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                                                    ((System_Collections_Generic_Dictionary_object__int__o *)
                                                     pSStack_c8,(Il2CppObject *)pSVar19,
                                                     (MethodInfo_4A9D990 *)
                                                     MethodInfo_System_Collections_Generic_Dictionary_string_int_ContainsKey
                                                    );
                                  if (!bVar8) {
                                    System_Collections_Generic_Dictionary_object__int___Add
                                              ((System_Collections_Generic_Dictionary_object__int__o *)
                                               pSStack_c8,(Il2CppObject *)pSVar19,0,
                                               (MethodInfo_4A9D780 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                              );
                                  }
                                  pUVar24 = UnityEngine_MeshFilter__get_sharedMesh
                                                      ((UnityEngine_MeshFilter_o *)__this_00,(MethodInfo *)0x0
                                                      );
                                  if (pUVar24 == (UnityEngine_Mesh_o *)0x0) {
                                    ThrowNullReferenceException();
                                  }
                                  iVar9 = UnityEngine_Mesh__get_vertexCount(pUVar24,(MethodInfo *)0x0);
                                  pSVar11 = pSStack_c8;
                                  iVar10 = (int)(65000 / (long)iVar9);
                                  if (iVar10 < 2) {
                                    iVar10 = 1;
                                  }
                                  iVar9 = System_Collections_Generic_Dictionary_object__int___get_Item
                                                    ((System_Collections_Generic_Dictionary_object__int__o *)
                                                     pSStack_c8,(Il2CppObject *)pSVar19,
                                                     (MethodInfo_4A9D700 *)
                                                     MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item
                                                    );
                                  System_Collections_Generic_Dictionary_object__int___set_Item
                                            ((System_Collections_Generic_Dictionary_object__int__o *)pSVar11,
                                             (Il2CppObject *)pSVar19,iVar9 + 1,
                                             (MethodInfo_4A9D760 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item
                                            );
                                  iVar9 = System_Collections_Generic_Dictionary_object__int___get_Item
                                                    ((System_Collections_Generic_Dictionary_object__int__o *)
                                                     pSVar11,(Il2CppObject *)pSVar19,
                                                     (MethodInfo_4A9D700 *)
                                                     MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item
                                                    );
                                  iStack_124 = iVar9 / iVar10;
                                  pSVar26 = System_Int32__ToString(&iStack_124,(MethodInfo *)0x0);
                                  __this_04 = pSStack_f0;
                                  pSVar19 = System_String__Concat_52f0320(pSVar19,pSVar26,(MethodInfo *)0x0);
                                  auStack_108._0_8_ = pSVar19;
                                  if (pSStack_f8 ==
                                      (System_Collections_Generic_Dictionary_string__GameObject__o *)0x0) {
                                    ThrowNullReferenceException();
                                  }
                                  bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                                    ((System_Collections_Generic_Dictionary_object__object__o
                                                      *)pSStack_f8,(Il2CppObject *)pSVar19,
                                                     (MethodInfo_4AAD6F0 *)
                                                     MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ContainsKey
                                                    );
                                  if (bVar8) {
                                    if (__this_04 ==
                                        (System_Collections_Generic_Dictionary_string__List_GameObject___o *)
                                        0x0) {
                                      ThrowNullReferenceException();
                                    }
                                  }
                                  else {
                                    pUVar21 = (UnityEngine_Object_o *)
                                              il2cpp_codegen_object_new
                                                        ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                                    UnityEngine_GameObject___ctor_691aa10
                                              ((UnityEngine_GameObject_o *)pUVar21,(MethodInfo *)0x0);
                                    pMVar5 = (pMVar17->fields).ScriptObject;
                                    if (pMVar5 == (Map_MapScriptBaseObject_o *)0x0) {
                                      ThrowNullReferenceException();
                                    }
                                    pSVar19 = System_String__Concat_5301f10
                                                        ((pMVar5->fields).Name," (Batched) ",
                                                         (System_String_o *)auStack_108._0_8_,
                                                         (MethodInfo *)0x0);
                                    if (pUVar21 == (UnityEngine_Object_o *)0x0) {
                                      ThrowNullReferenceException();
                                    }
                                    UnityEngine_Object__set_name(pUVar21,pSVar19,(MethodInfo *)0x0);
                                    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
                                      il2cpp_codegen_runtime_class_init
                                                ((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
                                    }
                                    UnityEngine_GameObject__set_layer
                                              ((UnityEngine_GameObject_o *)pUVar21,
                                               TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities
                                               ,(MethodInfo *)0x0);
                                    pUVar14 = UnityEngine_GameObject__get_transform
                                                        ((UnityEngine_GameObject_o *)pUVar21,(MethodInfo *)0x0
                                                        );
                                    pUVar15 = UnityEngine_GameObject__get_transform
                                                        (pUStack_50,(MethodInfo *)0x0);
                                    if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                                      ThrowNullReferenceException();
                                    }
                                    UnityEngine_Transform__SetParent(pUVar14,pUVar15,(MethodInfo *)0x0);
                                    System_Collections_Generic_Dictionary_object__object___Add
                                              ((System_Collections_Generic_Dictionary_object__object__o *)
                                               pSStack_f8,(Il2CppObject *)auStack_108._0_8_,
                                               (Il2CppObject *)pUVar21,
                                               (MethodInfo_4AAD4E0 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add
                                              );
                                    pSVar27 = il2cpp_codegen_object_new
                                                        ((Il2CppClass *)
                                                         TypeInfo_System_Collections_Generic_List_GameObject);
                                    System_Collections_Generic_List_object____ctor
                                              ((System_Collections_Generic_List_object__o *)pSVar27,
                                               (MethodInfo_395C910 *)
                                               MethodInfo_System_Collections_Generic_List_GameObject_ctor);
                                    if (__this_04 ==
                                        (System_Collections_Generic_Dictionary_string__List_GameObject___o *)
                                        0x0) {
                                      ThrowNullReferenceException();
                                    }
                                    System_Collections_Generic_Dictionary_object__object___Add
                                              ((System_Collections_Generic_Dictionary_object__object__o *)
                                               __this_04,(Il2CppObject *)auStack_108._0_8_,
                                               (Il2CppObject *)pSVar27,
                                               (MethodInfo_4AAD4E0 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_Add
                                              );
                                  }
                                  pSVar28 = (System_Collections_Generic_List_object__o *)
                                            System_Collections_Generic_Dictionary_object__object___get_Item
                                                      ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)__this_04,(Il2CppObject *)auStack_108._0_8_,
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_get_Item
                                                      );
                                  pUVar12 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0)
                                  ;
                                  pMVar7 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
                                  if (pSVar28 == (System_Collections_Generic_List_object__o *)0x0) {
label_059950b0:
                                    ThrowNullReferenceException();
                                  }
                                  piVar1 = &(pSVar28->fields)._version;
                                  *piVar1 = *piVar1 + 1;
                                  pSVar6 = (pSVar28->fields)._items;
                                  if (pSVar6 == (System_Object_array *)0x0) goto label_059950b0;
                                  uVar3 = (pSVar28->fields)._size;
                                  if (uVar3 < (uint)pSVar6->max_length) {
                                    (pSVar28->fields)._size = uVar3 + 1;
                                    pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)pUVar12;
                                    Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
                                  }
                                  else {
                                    System_Collections_Generic_List_object___AddWithResize
                                              (pSVar28,(Il2CppObject *)pUVar12,
                                               (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                                  }
                                  pUVar12 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0)
                                  ;
                                  pUVar14 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
                                  if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                                    ThrowNullReferenceException();
                                  }
                                  pUVar14 = UnityEngine_Transform__get_parent(pUVar14,(MethodInfo *)0x0);
                                  if (pSStack_58 ==
                                      (System_Collections_Generic_Dictionary_GameObject__Transform__o *)0x0) {
                                    ThrowNullReferenceException();
                                  }
                                  System_Collections_Generic_Dictionary_object__object___Add
                                            ((System_Collections_Generic_Dictionary_object__object__o *)
                                             pSStack_58,(Il2CppObject *)pUVar12,(Il2CppObject *)pUVar14,
                                             (MethodInfo_4AAD4E0 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_GameObject_Transform_Add
                                            );
                                  pUVar14 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
                                  pUVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                      ((
                                                       System_Collections_Generic_Dictionary_object__object__o
                                                       *)pSStack_f8,(Il2CppObject *)auStack_108._0_8_,
                                                       (MethodInfo_4AAD450 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_get_Item
                                                      );
                                  if (pUVar12 == (UnityEngine_GameObject_o *)0x0) {
                                    ThrowNullReferenceException();
                                  }
                                  pUVar15 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
                                  if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                                    ThrowNullReferenceException();
                                  }
                                  UnityEngine_Transform__SetParent(pUVar14,pUVar15,(MethodInfo *)0x0);
                                }
                              }
                            }
                          }
label_05994450:
                          uStack_128 = uStack_128 + 1;
                          uVar3 = (uint)pSVar20->max_length;
                        } while ((int)uStack_128 < (int)uVar3);
                      }
                      __this_03 = pSStack_f8;
                      pUVar12 = (pMVar17->fields).GameObject;
                      if (pUVar12 == (UnityEngine_GameObject_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pUVar14 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
                      pUVar15 = UnityEngine_GameObject__get_transform(pUStack_48,(MethodInfo *)0x0);
                      if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      UnityEngine_Transform__SetParent(pUVar14,pUVar15,(MethodInfo *)0x0);
                    }
                  }
                }
              }
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
                        ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                         auStack_78,
                         (MethodInfo_4CA27D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
                        );
              pSVar27 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
              auStack_108._0_8_ = pSVar27;
              System_Collections_Generic_List_object____ctor
                        ((System_Collections_Generic_List_object__o *)pSVar27,
                         (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
              if ((__this_03 != (System_Collections_Generic_Dictionary_string__GameObject__o *)0x0) &&
                 (pSVar16 = System_Collections_Generic_Dictionary_object__object___get_Keys
                                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                                       (MethodInfo_4AAD0F0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_get_Keys
                                      ),
                 pSVar16 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
                System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                          ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                           auStack_120,pSVar16,
                           (MethodInfo_511A520 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_GameObject_GetEnumerator
                          );
                pUStack_a8 = pUStack_110;
                auStack_b8 = (undefined1  [8])auStack_120._0_8_;
                pSStack_b0 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_120._8_8_;
                auStack_120._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                auStack_120._8_8_ = auStack_b8;
                if (auStack_108._0_8_ == 0) {
                  do {
                    bVar8 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                        *)auStack_b8,
                                       (MethodInfo_4CE7080 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_GameObject_MoveNext
                                      );
                    pUVar21 = pUStack_a8;
                    if (!bVar8) goto label_05994cf6;
                    pSVar29 = (System_Collections_Generic_Dictionary_object__object__o *)__this_03;
                    pUVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                                         (Il2CppObject *)pUStack_a8,
                                         (MethodInfo_4AAD450 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_get_Item
                                        );
                    bVar8 = Map_MapLoader__CombineMeshes((Map_MapLoader_o *)pSVar29,pUVar12,method_01);
                  } while (bVar8);
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                             (Il2CppObject *)pUVar21,
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_get_Item);
label_05994cf1:
                  ThrowNullReferenceException();
                }
                while( true ) {
                  bVar8 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                      *)auStack_b8,
                                     (MethodInfo_4CE7080 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_GameObject_MoveNext
                                    );
                  pUVar21 = pUStack_a8;
                  if (!bVar8) break;
                  pSVar29 = (System_Collections_Generic_Dictionary_object__object__o *)__this_03;
                  pUVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                                       (Il2CppObject *)pUStack_a8,
                                       (MethodInfo_4AAD450 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_get_Item
                                      );
                  bVar8 = Map_MapLoader__CombineMeshes((Map_MapLoader_o *)pSVar29,pUVar12,method_00);
                  if (!bVar8) {
                    pUVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                                         (Il2CppObject *)pUVar21,
                                         (MethodInfo_4AAD450 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_get_Item
                                        );
                    pMVar7 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
                    piVar1 = &((System_Collections_Generic_List_object__Fields *)(auStack_108._0_8_ + 0x10))->
                              _version;
                    *piVar1 = *piVar1 + 1;
                    pSVar20 = ((System_Collections_Generic_List_object__Fields *)(auStack_108._0_8_ + 0x10))->
                              _items;
                    if (pSVar20 == (System_Object_array *)0x0) goto label_05994cf1;
                    uVar3 = ((System_Collections_Generic_List_object__Fields *)(auStack_108._0_8_ + 0x10))->
                            _size;
                    if (uVar3 < (uint)pSVar20->max_length) {
                      ((System_Collections_Generic_List_object__Fields *)(auStack_108._0_8_ + 0x10))->_size =
                           uVar3 + 1;
                      pSVar20->m_Items[(int)uVar3] = (Il2CppObject *)pUVar12;
                      Il2CppCodeGenWriteBarrier(pSVar20->m_Items + (int)uVar3);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)auStack_108._0_8_,
                                 (Il2CppObject *)pUVar12,
                                 (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                    }
                  }
                }
label_05994cf6:
                System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                          ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                           auStack_b8,
                           (MethodInfo_4CE7070 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_GameObject_Dispose
                          );
                if ((__this_04 != (System_Collections_Generic_Dictionary_string__List_GameObject___o *)0x0) &&
                   (pSVar16 = System_Collections_Generic_Dictionary_object__object___get_Keys
                                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_04,
                                         (MethodInfo_4AAD0F0 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_get_Keys
                                        ),
                   pSVar16 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
                  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *
                             )auStack_120,pSVar16,
                             (MethodInfo_511A520 *)
                             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_List_GameObject_GetEnumerator
                            );
                  pUStack_88 = pUStack_110;
                  auStack_98 = (undefined1  [8])auStack_120._0_8_;
                  pSStack_90 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_120._8_8_;
                  uStack_40 = 0;
                  puStack_38 = auStack_98;
                  while( true ) {
                    bVar8 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                        *)auStack_98,
                                       (MethodInfo_4CE7080 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_List_GameObject_MoveNext
                                      );
                    __this_02 = pSStack_58;
                    if (!bVar8) break;
                    pSVar28 = (System_Collections_Generic_List_object__o *)
                              System_Collections_Generic_Dictionary_object__object___get_Item
                                        ((System_Collections_Generic_Dictionary_object__object__o *)pSStack_f0
                                         ,(Il2CppObject *)pUStack_88,
                                         (MethodInfo_4AAD450 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_get_Item
                                        );
                    if (pSVar28 == (System_Collections_Generic_List_object__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    System_Collections_Generic_List_object___GetEnumerator
                              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_120,pSVar28,
                               (MethodInfo_395E050 *)
                               MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
                    pUStack_d8 = pUStack_110;
                    auStack_e8 = (undefined1  [8])auStack_120._0_8_;
                    pSStack_e0 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_120._8_8_;
                    auStack_120._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                    auStack_120._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_e8;
                    if (__this_02 == (System_Collections_Generic_Dictionary_GameObject__Transform__o *)0x0) {
                      bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                        ((System_Collections_Generic_List_Enumerator_object__o *)auStack_e8,
                                         (MethodInfo_4C45C50 *)
                                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext
                                        );
                      if (bVar8) {
                        if (pUStack_d8 != (UnityEngine_Object_o *)0x0) {
                          UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)pUStack_d8,(MethodInfo *)0x0);
                          ThrowNullReferenceException();
                        }
label_05994ee1:
                        ThrowNullReferenceException();
                      }
                    }
                    else {
                      while( true ) {
                        bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                          ((System_Collections_Generic_List_Enumerator_object__o *)auStack_e8,
                                           (MethodInfo_4C45C50 *)
                                           MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext
                                          );
                        pUVar21 = pUStack_d8;
                        if (!bVar8) break;
                        if (pUStack_d8 == (UnityEngine_Object_o *)0x0) goto label_05994ee1;
                        pUVar14 = UnityEngine_GameObject__get_transform
                                            ((UnityEngine_GameObject_o *)pUStack_d8,(MethodInfo *)0x0);
                        pUVar15 = System_Collections_Generic_Dictionary_object__object___get_Item
                                            ((System_Collections_Generic_Dictionary_object__object__o *)
                                             __this_02,(Il2CppObject *)pUVar21,
                                             (MethodInfo_4AAD450 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_GameObject_Transform_get_Item
                                            );
                        if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                          ThrowNullReferenceException();
                        }
                        UnityEngine_Transform__SetParent(pUVar14,pUVar15,(MethodInfo *)0x0);
                      }
                    }
                    System_Collections_Generic_List_Enumerator_object___Dispose
                              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_e8,
                               (MethodInfo_4C45C40 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
                  }
                  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *
                             )auStack_98,
                             (MethodInfo_4CE7070 *)
                             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_List_GameObject_Dispose
                            );
                  if ((System_Collections_Generic_List_object__o *)auStack_108._0_8_ !=
                      (System_Collections_Generic_List_object__o *)0x0) {
                    System_Collections_Generic_List_object___GetEnumerator
                              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_120,
                               (System_Collections_Generic_List_object__o *)auStack_108._0_8_,
                               (MethodInfo_395E050 *)
                               MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
                    pUStack_d8 = pUStack_110;
                    auStack_e8 = (undefined1  [8])auStack_120._0_8_;
                    pSStack_e0 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_120._8_8_;
                    auStack_120._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                    auStack_120._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_e8;
                    while( true ) {
                      bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                        ((System_Collections_Generic_List_Enumerator_object__o *)auStack_e8,
                                         (MethodInfo_4C45C50 *)
                                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext
                                        );
                      pUVar21 = pUStack_d8;
                      if (!bVar8) break;
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      UnityEngine_Object__Destroy_69214e0(pUVar21,(MethodInfo *)0x0);
                    }
                    System_Collections_Generic_List_Enumerator_object___Dispose
                              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_e8,
                               (MethodInfo_4C45C40 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$CombineMeshes
// il2cpp: bool Map_MapLoader__CombineMeshes (Map_MapLoader_o* __this, UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x59954c0
// eh: try 0x5995b0a..0x5995c6a -> pad 0x5995c76 (+12 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5995c98..0x5995c9d -> pad 0x5995cbe cleanup
// eh: try 0x5995cc1..0x5995ccb -> pad 0x5995cd3 catch (...) [compiler noexcept guard]
// asm: 41 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5995643: lea r12, [rip + 0x18e5da6]  ; TypeInfo_UnityEngine_Object
// asm:   0x599564a: jmp 0x5995679
// asm:   0x599570f: lea r14, [rip + 0x190f4e2]  ; MethodInfo_UnityEngine_Component_GetComponent_Renderer
// asm:   0x5995716: lea r12, [rip + 0x18e5cd3]  ; TypeInfo_UnityEngine_Object
// asm:   0x599571d: nop dword ptr [rax]
// asm:   0x5995859: nop dword ptr [rax]
// asm:   0x5995afe: nop 
// asm:   0x5995c6a: jmp 0x5995c80
// asm:   0x5995c6c: jmp 0x5995c80
// asm:   0x5995c6e: jmp 0x5995c80
// asm:   0x5995c70: jmp 0x5995c80
// asm:   0x5995c72: jmp 0x5995c80
// asm:   0x5995c74: jmp 0x5995c80
// asm:   0x5995c76: jmp 0x5995c80
// asm:   0x5995c78: jmp 0x5995c80
// asm:   0x5995c7a: jmp 0x5995c80
// asm:   0x5995c7c: jmp 0x5995c80
// asm:   0x5995c7e: jmp 0x5995c80
// asm:   0x5995c80: mov rbx, rax
// asm:   0x5995c83: cmp edx, 1
// asm:   0x5995c86: jne 0x5995cc1
// asm:   0x5995c88: mov rdi, rbx
// asm:   0x5995c8b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5995c90: mov rbx, qword ptr [rax]
// asm:   0x5995c93: mov qword ptr [rsp + 0x78], rbx
// asm:   0x5995c98: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5995c9d: lea rax, [rip + 0x18f8884]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MeshFilter_Dispose
// asm:   0x5995ca4: mov rsi, qword ptr [rax]
// asm:   0x5995ca7: lea rdi, [rsp + 0x50]
// asm:   0x5995cac: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5995cb1: test rbx, rbx
// asm:   0x5995cb4: je 0x5995c40
// asm:   0x5995cb6: mov rdi, rbx
// asm:   0x5995cb9: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5995cbe: mov rbx, rax
// asm:   0x5995cc1: lea rdi, [rsp + 0x78]
// asm:   0x5995cc6: call 0x2fd4830  ; il2cpp_runtime_helper_02fd4830()
// asm:   0x5995ccb: mov rdi, rbx
// asm:   0x5995cce: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5995cd3: mov rdi, rax
// asm:   0x5995cd6: call 0x2ab61e0  ; __clang_call_terminate()

bool Map_MapLoader__CombineMeshes(Map_MapLoader_o *__this,UnityEngine_GameObject_o *obj,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Component_o *__this_00;
  UnityEngine_MeshFilter_array *pUVar2;
  UnityEngine_Matrix4x4_o value;
  Il2CppObject *__this_01;
  UnityEngine_GameObject_o *__this_02;
  bool bVar3;
  uint uVar4;
  uint32_t uVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_List_MeshFilter__o *__this_03;
  UnityEngine_Object_o *pUVar7;
  UnityEngine_MeshFilter_o *pUVar8;
  UnityEngine_Renderer_o *pUVar9;
  UnityEngine_CombineInstance_array *combine;
  UnityEngine_Mesh_o *pUVar10;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_MeshRenderer_o *__this_05;
  UnityEngine_MeshFilter_o *__this_06;
  UnityEngine_Material_o *value_00;
  int32_t index;
  uint uVar11;
  ulong uVar12;
  UnityEngine_CombineInstance_o *__this_07;
  Map_MapDestruction_c *method_00;
  MethodInfo *pMVar13;
  int start;
  System_Collections_Generic_List_Enumerator_object__o local_98;
  UnityEngine_GameObject_o *local_78;
  undefined1 local_70 [16];
  UnityEngine_Component_o *local_60;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07545a4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CombineInstance_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MeshFilter_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MeshFilter_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MeshFilter_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MeshFilter_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeshFilter_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MeshFilter_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeshFilter_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeshFilter_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545a4c = '\x01';
  }
  local_98.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_98.fields._index = 0;
  local_98.fields._version = 0;
  local_98.fields._current = (Il2CppObject *)0x0;
  if ((obj != (UnityEngine_GameObject_o *)0x0) &&
     (pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                         (obj,(MethodInfo_353C030 *)
                              MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter),
     pSVar6 != (System_Object_array *)0x0)) {
    if (pSVar6->max_length == 0) {
      return false;
    }
    local_78 = obj;
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MeshFilter);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_03,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MeshFilter_ctor);
    uVar4 = (uint)pSVar6->max_length;
    if (0 < (int)uVar4) {
      uVar12 = 0;
      if (__this_03 == (System_Collections_Generic_List_MeshFilter__o *)0x0) {
        do {
          uVar11 = (uint)uVar12;
          if (uVar4 <= uVar11) goto label_05995c5b;
          if ((UnityEngine_Component_o *)pSVar6->m_Items[(int)uVar11] == (UnityEngine_Component_o *)0x0)
          goto label_05995c56;
          pUVar7 = (UnityEngine_Object_o *)
                   UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pSVar6->m_Items[(int)uVar11],
                              (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Renderer);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) goto label_05995c56;
          uVar12 = (ulong)(uVar11 + 1);
          uVar4 = (uint)pSVar6->max_length;
        } while ((int)(uVar11 + 1) < (int)uVar4);
      }
      else {
        do {
          if (uVar4 <= (uint)uVar12) goto label_05995c5b;
          __this_00 = (UnityEngine_Component_o *)pSVar6->m_Items[uVar12];
          if (__this_00 == (UnityEngine_Component_o *)0x0) goto label_05995c56;
          pUVar7 = (UnityEngine_Object_o *)
                   UnityEngine_Component__GetComponent_object_
                             (__this_00,
                              (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Renderer);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          pMVar13 = MethodInfo_System_Collections_Generic_List_MeshFilter_Add;
          if (bVar3) {
            piVar1 = &(__this_03->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar2 = (__this_03->fields)._items;
            if (pUVar2 == (UnityEngine_MeshFilter_array *)0x0) goto label_05995c56;
            uVar4 = (__this_03->fields)._size;
            if (uVar4 < (uint)pUVar2->max_length) {
              (__this_03->fields)._size = uVar4 + 1;
              pUVar2->m_Items[(int)uVar4] = (UnityEngine_MeshFilter_o *)__this_00;
              Il2CppCodeGenWriteBarrier(pUVar2->m_Items + (int)uVar4);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)__this_00,
                         (MethodInfo_395D230 *)pMVar13->klass->rgctx_data[0xe].method);
            }
          }
          uVar4 = (uint)pSVar6->max_length;
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar4);
      }
    }
    if (__this_03 != (System_Collections_Generic_List_MeshFilter__o *)0x0) {
      uVar5 = (__this_03->fields)._size;
      if (uVar5 == 0) {
        return false;
      }
      if (uVar5 == 1) {
        pUVar8 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_03,0,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_MeshFilter_get_Item);
        if ((pUVar8 != (UnityEngine_MeshFilter_o *)0x0) &&
           (pUVar9 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar8,
                                (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Renderer),
           pUVar9 != (UnityEngine_Renderer_o *)0x0)) {
          UnityEngine_Renderer__set_staticShadowCaster(pUVar9,true,(MethodInfo *)0x0);
          return false;
        }
      }
      else {
        combine = (UnityEngine_CombineInstance_array *)
                  SZArrayNew(TypeInfo_UnityEngine_CombineInstance_array,uVar5);
        pUVar8 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_03,0,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_MeshFilter_get_Item);
        if ((pUVar8 != (UnityEngine_MeshFilter_o *)0x0) &&
           (pUVar9 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar8,
                                (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Renderer),
           pUVar9 != (UnityEngine_Renderer_o *)0x0)) {
          bVar3 = UnityEngine_Renderer__get_enabled(pUVar9,(MethodInfo *)0x0);
          if (0 < (__this_03->fields)._size) {
            if (combine == (UnityEngine_CombineInstance_array *)0x0) goto label_05995c56;
            __this_07 = combine->m_Items;
            uVar12 = 0;
            do {
              index = (int32_t)uVar12;
              pUVar8 = System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_03,index,
                                  (MethodInfo_395CF20 *)
                                  MethodInfo_System_Collections_Generic_List_MeshFilter_get_Item);
              if (pUVar8 == (UnityEngine_MeshFilter_o *)0x0) goto label_05995c56;
              pUVar10 = UnityEngine_MeshFilter__get_sharedMesh(pUVar8,(MethodInfo *)0x0);
              if ((uint)combine->max_length <= uVar12) {
label_05995c5b:
                ThrowIndexOutOfRangeException();
              }
              UnityEngine_CombineInstance__set_mesh(__this_07,pUVar10,(MethodInfo *)0x0);
              pUVar8 = System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_03,index,
                                  (MethodInfo_395CF20 *)
                                  MethodInfo_System_Collections_Generic_List_MeshFilter_get_Item);
              if ((pUVar8 == (UnityEngine_MeshFilter_o *)0x0) ||
                 (__this_04 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0),
                 __this_04 == (UnityEngine_Transform_o *)0x0)) goto label_05995c56;
              UnityEngine_Transform__get_localToWorldMatrix
                        ((UnityEngine_Matrix4x4_o *)local_70,__this_04,(MethodInfo *)0x0);
              if ((uint)combine->max_length <= uVar12) goto label_05995c5b;
              value.fields.m20 = (float)local_70._8_4_;
              value.fields.m30 = (float)local_70._12_4_;
              value.fields.m00 = (float)local_70._0_4_;
              value.fields.m10 = (float)local_70._4_4_;
              value.fields._16_8_ = local_60;
              value.fields.m21 = fStack_58;
              value.fields.m31 = fStack_54;
              value.fields.m02 = local_50;
              value.fields.m12 = fStack_4c;
              value.fields.m22 = fStack_48;
              value.fields.m32 = fStack_44;
              value.fields.m03 = local_40;
              value.fields.m13 = fStack_3c;
              value.fields.m23 = fStack_38;
              value.fields.m33 = fStack_34;
              UnityEngine_CombineInstance__set_transform(__this_07,value,(MethodInfo *)0x0);
              pUVar8 = System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_03,index,
                                  (MethodInfo_395CF20 *)
                                  MethodInfo_System_Collections_Generic_List_MeshFilter_get_Item);
              if ((pUVar8 == (UnityEngine_MeshFilter_o *)0x0) ||
                 (pUVar9 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar8,
                                      (MethodInfo_34B0830 *)
                                      MethodInfo_UnityEngine_Component_GetComponent_Renderer),
                 pUVar9 == (UnityEngine_Renderer_o *)0x0)) goto label_05995c56;
              UnityEngine_Renderer__set_enabled(pUVar9,false,(MethodInfo *)0x0);
              uVar12 = uVar12 + 1;
              __this_07 = __this_07 + 1;
            } while ((long)uVar12 < (long)(__this_03->fields)._size);
          }
          __this_02 = local_78;
          pUVar8 = UnityEngine_GameObject__AddComponent_object_
                             (local_78,(MethodInfo_353B6A0 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter);
          __this_05 = UnityEngine_GameObject__AddComponent_object_
                                (__this_02,
                                 (MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
          pUVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
          UnityEngine_Mesh___ctor(pUVar10,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_MeshFilter_o *)0x0) {
            UnityEngine_MeshFilter__set_mesh(pUVar8,pUVar10,(MethodInfo *)0x0);
            pUVar10 = UnityEngine_MeshFilter__get_mesh(pUVar8,(MethodInfo *)0x0);
            if (pUVar10 != (UnityEngine_Mesh_o *)0x0) {
              UnityEngine_Mesh__set_indexFormat(pUVar10,1,(MethodInfo *)0x0);
              pUVar10 = UnityEngine_MeshFilter__get_mesh(pUVar8,(MethodInfo *)0x0);
              if (pUVar10 != (UnityEngine_Mesh_o *)0x0) {
                pMVar13 = (MethodInfo *)0x0;
                UnityEngine_Mesh__CombineMeshes(pUVar10,combine,true,true,(MethodInfo *)0x0);
                if (__this_05 != (UnityEngine_MeshRenderer_o *)0x0) {
                  UnityEngine_Renderer__set_staticShadowCaster
                            ((UnityEngine_Renderer_o *)__this_05,true,(MethodInfo *)0x0);
                  if (bVar3) {
                    __this_06 = System_Collections_Generic_List_object___get_Item
                                          ((System_Collections_Generic_List_object__o *)__this_03,0,
                                           (MethodInfo_395CF20 *)
                                           MethodInfo_System_Collections_Generic_List_MeshFilter_get_Item);
                    if ((__this_06 == (UnityEngine_MeshFilter_o *)0x0) ||
                       (pUVar9 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)__this_06,
                                            (MethodInfo_34B0830 *)
                                            MethodInfo_UnityEngine_Component_GetComponent_Renderer),
                       pUVar9 == (UnityEngine_Renderer_o *)0x0)) goto label_05995c56;
                    value_00 = UnityEngine_Renderer__get_sharedMaterial(pUVar9,(MethodInfo *)0x0);
                    UnityEngine_Renderer__set_material
                              ((UnityEngine_Renderer_o *)__this_05,value_00,(MethodInfo *)0x0);
                  }
                  else {
                    UnityEngine_Renderer__set_enabled
                              ((UnityEngine_Renderer_o *)__this_05,false,(MethodInfo *)0x0);
                  }
                  method_00 = TypeInfo_Map_MapDestruction;
                  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
                  }
                  bVar3 = Map_MapDestruction__get_IsActive((MethodInfo *)method_00);
                  System_Collections_Generic_List_object___GetEnumerator
                            ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
                             (System_Collections_Generic_List_object__o *)__this_03,
                             (MethodInfo_395E050 *)
                             MethodInfo_System_Collections_Generic_List_MeshFilter_GetEnumerator);
                  local_98.fields._current = (Il2CppObject *)local_60;
                  local_98.fields._list = (System_Collections_Generic_List_T__o *)local_70._0_8_;
                  local_98.fields._index = local_70._8_4_;
                  local_98.fields._version = local_70._12_4_;
                  local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
                  local_70._8_8_ = &local_98;
                  if (bVar3) {
                    start = 0;
                    while (bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                             (&local_98,
                                              (MethodInfo_4C45C50 *)
                                              MethodInfo_System_Collections_Generic_List_Enumerator_MeshFilter_MoveNext
                                             ), __this_01 = local_98.fields._current, bVar3) {
                      if ((UnityEngine_Component_o *)local_98.fields._current ==
                          (UnityEngine_Component_o *)0x0) {
label_05995c60:
                        ThrowNullReferenceException();
                      }
                      pUVar9 = UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)local_98.fields._current,
                                          (MethodInfo_34B0830 *)
                                          MethodInfo_UnityEngine_Component_GetComponent_Renderer);
                      if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
                      }
                      Cameras_CameraOcclusion__RegisterCombinedRenderer
                                (pUVar9,(UnityEngine_Renderer_o *)__this_05,(MethodInfo *)0x0);
                      pUVar10 = UnityEngine_MeshFilter__get_sharedMesh
                                          ((UnityEngine_MeshFilter_o *)__this_01,(MethodInfo *)0x0);
                      if (pUVar10 == (UnityEngine_Mesh_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      uVar5 = UnityEngine_Mesh__GetIndexCount(pUVar10,0,(MethodInfo *)0x0);
                      pUVar10 = UnityEngine_MeshFilter__get_sharedMesh(pUVar8,(MethodInfo *)0x0);
                      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
                      }
                      Map_MapDestruction__RegisterBatchSlice(pUVar9,pUVar10,start,uVar5,pMVar13);
                      start = start + uVar5;
                    }
                  }
                  else {
                    while (bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                             (&local_98,
                                              (MethodInfo_4C45C50 *)
                                              MethodInfo_System_Collections_Generic_List_Enumerator_MeshFilter_MoveNext
                                             ), bVar3) {
                      if ((UnityEngine_Component_o *)local_98.fields._current ==
                          (UnityEngine_Component_o *)0x0) goto label_05995c60;
                      pUVar9 = UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)local_98.fields._current,
                                          (MethodInfo_34B0830 *)
                                          MethodInfo_UnityEngine_Component_GetComponent_Renderer);
                      if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
                      }
                      Cameras_CameraOcclusion__RegisterCombinedRenderer
                                (pUVar9,(UnityEngine_Renderer_o *)__this_05,(MethodInfo *)0x0);
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (&local_98,
                             (MethodInfo_4C45C40 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_MeshFilter_Dispose);
                  return true;
                }
              }
            }
          }
        }
      }
    }
  }
label_05995c56:
  ThrowNullReferenceException();
}


// Map.MapLoader$$RegisterTag
// il2cpp: void Map_MapLoader__RegisterTag (System_String_o* tag, Map_MapObject_o* obj, const MethodInfo* method);
// 0x5995ce0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5995d24: jmp 0x599600b

void Map_MapLoader__RegisterTag(System_String_o *tag,Map_MapObject_o *obj,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Object_array *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  System_Collections_Generic_List_MapObject__o *__this;
  System_Collections_Generic_HashSet_string__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_HashSet_object__o *__this_02;
  
  if (Il2CppMethodInitialized_07545a4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a4d = '\x01';
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) goto label_05995de4;
label_05995d10:
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->Tags;
  }
  else {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor != 0) goto label_05995d10;
label_05995de4:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->Tags;
  }
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar3,(Il2CppObject *)tag,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_ContainsKey);
    if (!bVar6) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_MapLoader->static_fields->Tags;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)__this,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor);
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0599600b;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar3,(Il2CppObject *)tag,(Il2CppObject *)__this,
                 (MethodInfo_4AAD4E0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_Add);
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->MapObjectToTags;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar3,(Il2CppObject *)obj,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_ContainsKey
                        );
      if (!bVar6) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->MapObjectToTags;
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
        System_Collections_Generic_HashSet_object____ctor
                  ((System_Collections_Generic_HashSet_object__o *)__this_00,
                   (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0599600b;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar3,(Il2CppObject *)obj,(Il2CppObject *)__this_00,
                   (MethodInfo_4AAD4E0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_Add);
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_MapLoader->static_fields->Tags;
      if ((pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (__this_01 = (System_Collections_Generic_List_object__o *)
                      System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar3,(Il2CppObject *)tag,
                                 (MethodInfo_4AAD450 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_get_Item
                                ), pMVar5 = MethodInfo_System_Collections_Generic_List_MapObject_Add,
         __this_01 != (System_Collections_Generic_List_object__o *)0x0)) {
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_01->fields)._items;
        if (pSVar4 != (System_Object_array *)0x0) {
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)obj;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_01,(Il2CppObject *)obj,
                       (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
          }
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->MapObjectToTags;
          if ((pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
             (__this_02 = (System_Collections_Generic_HashSet_object__o *)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar3,(Il2CppObject *)obj,
                                     (MethodInfo_4AAD450 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_get_Item
                                    ), __this_02 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
            System_Collections_Generic_HashSet_object___Add
                      (__this_02,(Il2CppObject *)tag,
                       (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
            return;
          }
        }
      }
    }
  }
label_0599600b:
  ThrowNullReferenceException();
}


// Map.MapLoader$$HasTag
// il2cpp: bool Map_MapLoader__HasTag (Map_MapObject_o* obj, System_String_o* tag, const MethodInfo* method);
// 0x5996010
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5996047: jmp 0x5996121

bool Map_MapLoader__HasTag(Map_MapObject_o *obj,System_String_o *tag,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (Il2CppMethodInitialized_07545a4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a4e = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->MapObjectToTags;
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((long)((Il2CppClass *)TypeInfo_Map_MapLoader)->static_fields + 0x28);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)obj,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_ContainsKey);
    if (!bVar3) {
      return false;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->MapObjectToTags;
    if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this = (System_Collections_Generic_HashSet_object__o *)
                 System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar2,(Il2CppObject *)obj,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_get_Item
                           ), __this != (System_Collections_Generic_HashSet_object__o *)0x0)) {
      bVar3 = System_Collections_Generic_HashSet_object___Contains
                        (__this,(Il2CppObject *)tag,
                         (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      return bVar3;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$GetMapObject
// il2cpp: Map_MapObject_o* Map_MapLoader__GetMapObject (UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x5996130
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59961c3: nop word ptr cs:[rax + rax]
// asm:   0x5996293: jmp 0x59961d0

Map_MapObject_o * Map_MapLoader__GetMapObject(UnityEngine_GameObject_o *obj,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  UnityEngine_Transform_o *pUVar4;
  Map_MapObject_o *pMVar5;
  
  if (Il2CppMethodInitialized_07545a4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545a4f = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)obj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return (Map_MapObject_o *)0x0;
  }
  uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  while( true ) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05996317;
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)obj,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey);
    if (bVar3) break;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)obj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) break;
    if (((UnityEngine_Object_o *)obj == (UnityEngine_Object_o *)0x0) ||
       (pUVar4 = UnityEngine_GameObject__get_transform(obj,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto label_05996317;
    pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) break;
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05996317;
    obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)obj,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey);
    if (!bVar3) {
      return (Map_MapObject_o *)0x0;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pMVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar2,(Il2CppObject *)obj,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Item);
      return pMVar5;
    }
  }
label_05996317:
  ThrowNullReferenceException();
}


// Map.MapLoader$$LoadSceneObject
// il2cpp: UnityEngine_GameObject_o* Map_MapLoader__LoadSceneObject (Map_MapScriptSceneObject_o* obj, bool editor, const MethodInfo* method);
// 0x5990d90
// eh: try 0x5990e62..0x5990fd6 -> pad 0x5990fe2 (+11 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x599100e..0x5991066 -> pad 0x5991066 (+1 call sites) cleanup
// eh: try 0x5991069..0x599106e -> pad 0x5991076 catch (...) [compiler noexcept guard]
// asm: 48 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5990fd6: jmp 0x5990fea
// asm:   0x5990fd8: jmp 0x5990fea
// asm:   0x5990fda: jmp 0x5990fea
// asm:   0x5990fdc: jmp 0x5990fea
// asm:   0x5990fde: jmp 0x5990fea
// asm:   0x5990fe0: jmp 0x5990fea
// asm:   0x5990fe2: jmp 0x5990fea
// asm:   0x5990fe4: jmp 0x5990fea
// asm:   0x5990fe6: jmp 0x5990fea
// asm:   0x5990fe8: jmp 0x5990fea
// asm:   0x5990fea: mov rbp, rax
// asm:   0x5990fed: cmp edx, 1
// asm:   0x5990ff0: jne 0x599106e
// asm:   0x5990ff2: mov rdi, rbp
// asm:   0x5990ff5: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5990ffa: mov rbx, rax
// asm:   0x5990ffd: lea rax, [rip + 0x1bc56c4]
// asm:   0x5991004: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5991008: mov rax, qword ptr [rbx]
// asm:   0x599100b: mov rsi, qword ptr [rax]
// asm:   0x599100e: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5991013: test al, al
// asm:   0x5991015: je 0x5991045
// asm:   0x5991017: mov rbx, qword ptr [rbx]
// asm:   0x599101a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599101f: lea rdi, [rip + 0x18ea3ca]  ; TypeInfo_UnityEngine_Object
// asm:   0x5991026: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x599102b: mov rdi, rax
// asm:   0x599102e: call 0x2ab86a0  ; il2cpp_codegen_runtime_class_init_inline()
// asm:   0x5991033: mov rdi, r15
// asm:   0x5991036: xor esi, esi
// asm:   0x5991038: call 0x6a214e0  ; UnityEngine_Object__Destroy()
// asm:   0x599103d: mov rdi, rbx
// asm:   0x5991040: call 0x30d6390  ; il2cpp_runtime_helper_030d6390()
// asm:   0x5991045: mov edi, 8
// asm:   0x599104a: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x599104f: mov rcx, qword ptr [rbx]
// asm:   0x5991052: mov qword ptr [rax], rcx
// asm:   0x5991055: lea rsi, [rip + 0x149c4a4]
// asm:   0x599105c: mov rdi, rax
// asm:   0x599105f: xor edx, edx
// asm:   0x5991061: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5991066: mov rbp, rax
// asm:   0x5991069: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599106e: mov rdi, rbp
// asm:   0x5991071: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5991076: mov rdi, rax
// asm:   0x5991079: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_GameObject_o *
Map_MapLoader__LoadSceneObject(Map_MapScriptSceneObject_o *obj,bool editor,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *physicsMaterial;
  Map_MapScriptBaseMaterial_o *material;
  bool bVar3;
  int32_t iVar4;
  UnityEngine_GameObject_o *__this;
  UnityEngine_SphereCollider_o *__this_00;
  MethodInfo *pMVar5;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07545a50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_SphereCollider)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07545a50 = '\x01';
  }
  if (obj == (Map_MapScriptSceneObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pMVar5 = (MethodInfo *)"None";
  bVar3 = System_String__op_Equality((obj->fields).Asset,"None",(MethodInfo *)0x0);
  if (bVar3) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa10(__this,(MethodInfo *)0x0);
  }
  else {
    pSVar1 = (obj->fields).Asset;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this = Map_MapLoader__LoadPrefabCached(pSVar1,pMVar5);
  }
  if (editor) {
    if ((((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
    }
    pMVar5 = (MethodInfo *)TypeInfo_Map_MapObjectCollideMode->static_fields->Physical;
    if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    }
    pSVar1 = TypeInfo_Map_MapObjectCollideWith->static_fields->MapEditor;
    pSVar2 = (obj->fields).PhysicsMaterial;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    iVar4 = Map_MapLoader__SetPhysics(__this,(System_String_o *)pMVar5,pSVar1,pSVar2,in_R8);
    if (iVar4 == 0) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      bVar3 = Map_MapLoader__TryAddEditorCollider(__this,pMVar5);
      if (!bVar3) {
        if (__this == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_00 = UnityEngine_GameObject__AddComponent_object_
                              (__this,(MethodInfo_353B6A0 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_SphereCollider);
        if (__this_00 == (UnityEngine_SphereCollider_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_SphereCollider__set_radius(__this_00,0.5,(MethodInfo *)0x0);
      }
    }
  }
  else {
    pSVar1 = (obj->fields).CollideMode;
    pSVar2 = (obj->fields).CollideWith;
    physicsMaterial = (obj->fields).PhysicsMaterial;
    if ((((Il2CppClass *)TypeInfo_Map_MapLoader)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    Map_MapLoader__SetPhysics(__this,pSVar1,pSVar2,physicsMaterial,in_R8);
  }
  pSVar1 = (obj->fields).Asset;
  material = (obj->fields).Material;
  bVar3 = (obj->fields).Visible;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  Map_MapLoader__SetMaterial(__this,pSVar1,material,bVar3,editor,in_R9);
  return __this;
}


// Map.MapLoader$$TryAddEditorCollider
// il2cpp: bool Map_MapLoader__TryAddEditorCollider (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x5996b50
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5996c4e: jmp 0x5997b69
// asm:   0x5996dc0: movaps xmm15, xmmword ptr [rsp + 0x50]
// asm:   0x5996dc6: movaps xmm10, xmmword ptr [rsp + 0x40]
// asm:   0x5996dcc: movaps xmm5, xmmword ptr [rsp + 0x30]
// asm:   0x5996dd1: movaps xmm14, xmmword ptr [rsp + 0x20]
// asm:   0x5996dd7: mov rdi, r14
// asm:   0x5997852: jmp 0x5996dda
// asm:   0x59978e4: movd eax, xmm15
// asm:   0x59978e9: not eax
// asm:   0x59978eb: test eax, 0x7f800000
// asm:   0x59978f0: jne 0x599798c
// asm:   0x59978f6: jmp 0x5997b10
// asm:   0x5997b10: xor eax, eax
// asm:   0x5997b12: jmp 0x599788c
// asm:   0x5997b39: mov rbx, rax
// asm:   0x5997b3c: mov rdi, rax
// asm:   0x5997b3f: movaps xmm0, xmmword ptr [rsp + 0x50]
// asm:   0x5997b44: movaps xmm1, xmmword ptr [rsp + 0x40]
// asm:   0x5997b49: xor esi, esi
// asm:   0x5997b4b: call 0x6ad7140  ; UnityEngine_BoxCollider__set_center()
// asm:   0x5997b50: mov rdi, rbx
// asm:   0x5997b53: movaps xmm0, xmmword ptr [rsp + 0x20]
// asm:   0x5997b58: movaps xmm1, xmmword ptr [rsp + 0x30]
// asm:   0x5997b5d: xor esi, esi
// asm:   0x5997b5f: call 0x6ad72f0  ; UnityEngine_BoxCollider__set_size()
// asm:   0x5997b64: jmp 0x599788a

bool Map_MapLoader__TryAddEditorCollider(UnityEngine_GameObject_o *go,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint32_t uVar9;
  UnityEngine_MeshFilter_o *__this;
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar10;
  float fVar11;
  UnityEngine_Bounds_o bounds;
  bool bVar12;
  bool bVar13;
  int32_t iVar14;
  UnityEngine_ParticleSystem_o *x;
  MapEditor_EditorGizmoIcon_o *__this_01;
  System_Object_array *pSVar15;
  UnityEngine_Object_o *x_00;
  UnityEngine_Mesh_o *pUVar16;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_MeshCollider_o *__this_03;
  il2cpp_array_size_t iVar17;
  UnityEngine_Transform_o *pUVar18;
  UnityEngine_BoxCollider_o *__this_04;
  uint uVar19;
  uint uVar20;
  Map_MapLoader_c *method_00;
  float fVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar29;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auVar30 [16];
  undefined4 uVar34;
  undefined1 auVar31 [16];
  ulong uVar35;
  undefined1 auVar37 [16];
  undefined8 uVar36;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  undefined1 local_208 [8];
  float fStack_200;
  float fStack_1fc;
  undefined8 local_1d8;
  UnityEngine_Matrix4x4_o local_198;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [8];
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  System_Object_array *local_98;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  if (Il2CppMethodInitialized_07545a51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_EditorGizmoIcon);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshCollider);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_LineRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_TrailRenderer);
    Il2CppMethodInitialized_07545a51 = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_05997b69;
  x = UnityEngine_GameObject__GetComponentInChildren_object_
                (go,(MethodInfo_353B8D0 *)
                    MethodInfo_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar12) {
    __this_01 = UnityEngine_GameObject__AddComponent_object_
                          (go,(MethodInfo_353B6A0 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_EditorGizmoIcon);
  }
  else {
    pSVar15 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                        (go,(MethodInfo_353C030 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
    if (pSVar15 == (System_Object_array *)0x0) goto label_05997b69;
    uVar20 = (uint)pSVar15->max_length;
    if (0 < (int)uVar20) {
      uVar19 = 0;
      do {
        if (uVar20 <= uVar19) goto label_05997b6e;
        __this = (UnityEngine_MeshFilter_o *)pSVar15->m_Items[(int)uVar19];
        if (__this == (UnityEngine_MeshFilter_o *)0x0) goto label_05997b69;
        x_00 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh(__this,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar12 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar12) {
          pUVar16 = UnityEngine_MeshFilter__get_sharedMesh(__this,(MethodInfo *)0x0);
          if (pUVar16 == (UnityEngine_Mesh_o *)0x0) goto label_05997b69;
          iVar14 = UnityEngine_Mesh__get_vertexCount(pUVar16,(MethodInfo *)0x0);
          if (0 < iVar14) {
            __this_02 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
              __this_03 = UnityEngine_GameObject__AddComponent_object_
                                    (__this_02,
                                     (MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_MeshCollider);
              pUVar16 = UnityEngine_MeshFilter__get_sharedMesh(__this,(MethodInfo *)0x0);
              if (__this_03 != (UnityEngine_MeshCollider_o *)0x0) {
                UnityEngine_MeshCollider__set_sharedMesh(__this_03,pUVar16,(MethodInfo *)0x0);
                return true;
              }
            }
            goto label_05997b69;
          }
        }
        uVar19 = uVar19 + 1;
        uVar20 = (uint)pSVar15->max_length;
      } while ((int)uVar19 < (int)uVar20);
    }
    pSVar15 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                        (go,(MethodInfo_353C030 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    if (pSVar15 == (System_Object_array *)0x0) goto label_05997b69;
    iVar17 = pSVar15->max_length;
    if ((iVar17 != 0) && (0 < (int)iVar17)) {
      fVar51 = 0.0;
      bVar12 = false;
      uVar20 = 0;
      fVar44 = 0.0;
      fVar26 = 0.0;
      fVar28 = 0.0;
      fVar45 = 0.0;
      fVar29 = 0.0;
      auVar60 = ZEXT816(0);
      local_98 = pSVar15;
      do {
        if ((uint)iVar17 <= uVar20) {
label_05997b6e:
          ThrowIndexOutOfRangeException();
        }
        __this_00 = (UnityEngine_Renderer_o *)pSVar15->m_Items[(int)uVar20];
        if (__this_00 == (UnityEngine_Renderer_o *)0x0) goto label_05997b69;
        auVar38 = auVar60;
        if ((__this_00->klass != (UnityEngine_Renderer_c *)TypeInfo_UnityEngine_TrailRenderer) &&
           (__this_00->klass != (UnityEngine_Renderer_c *)TypeInfo_UnityEngine_LineRenderer)) {
          UnityEngine_Renderer__get_localBounds
                    ((UnityEngine_Bounds_o *)&local_198,__this_00,(MethodInfo *)0x0);
          fVar53 = local_198.fields.m20;
          local_158 = CONCAT44(local_198.fields.m10,local_198.fields.m00);
          local_a8._8_8_ = 0;
          local_a8._0_8_ = CONCAT44(local_198.fields.m01,local_198.fields.m30);
          uStack_150 = 0;
          local_108._0_4_ = local_198.fields.m11;
          method_00 = TypeInfo_Map_MapLoader;
          fVar42 = local_198.fields.m11;
          uVar35 = CONCAT44(local_198.fields.m01,local_198.fields.m30);
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            fVar42 = (float)local_108._0_4_;
            uVar35 = local_a8._0_8_;
          }
          uStack_84 = (undefined4)uVar35;
          uStack_80 = (undefined4)(uVar35 >> 0x20);
          bounds.fields.m_Extents.fields.z = fVar42;
          bounds.fields.m_Extents.fields.y = (float)uStack_80;
          bounds.fields.m_Extents.fields.x = (float)uStack_84;
          bounds.fields.m_Center.fields.z = fVar53;
          bounds.fields.m_Center.fields.x = (float)local_158;
          bounds.fields.m_Center.fields.y = local_158._4_4_;
          fStack_7c = fVar42;
          bVar13 = Map_MapLoader__IsFiniteBounds(bounds,(MethodInfo *)method_00);
          if (bVar13) {
            pUVar18 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
            if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_05997b69;
            UnityEngine_Transform__get_worldToLocalMatrix(&local_198,pUVar18,(MethodInfo *)0x0);
            fVar54 = local_198.fields.m23;
            fVar24 = local_198.fields.m13;
            fVar42 = local_198.fields.m03;
            local_118._0_4_ = local_198.fields.m20;
            local_c8 = local_198.fields.m21;
            local_f8 = CONCAT44(local_198.fields.m10,local_198.fields.m00);
            uStack_f0 = 0;
            local_128 = CONCAT44(local_198.fields.m11,local_198.fields.m01);
            uStack_120 = 0;
            local_e8._4_4_ = local_198.fields.m12;
            local_e8._0_4_ = local_198.fields.m02;
            _fStack_e0 = 0;
            local_d8 = local_198.fields.m22;
            pUVar18 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
            if (pUVar18 == (UnityEngine_Transform_o *)0x0) goto label_05997b69;
            UnityEngine_Transform__get_localToWorldMatrix(&local_198,pUVar18,(MethodInfo *)0x0);
            pSVar15 = local_98;
            local_58 = ZEXT416((uint)local_198.fields.m10);
            local_68 = ZEXT416((uint)local_198.fields.m20);
            local_48 = local_198.fields.m30 * fVar42 +
                       local_198.fields.m20 * (float)local_e8._0_4_ +
                       local_198.fields.m10 * (float)local_128 + local_198.fields.m00 * (float)local_f8;
            fStack_44 = local_198.fields.m30 * fVar24 +
                        local_198.fields.m20 * (float)local_e8._4_4_ +
                        local_198.fields.m10 * local_128._4_4_ + local_198.fields.m00 * local_f8._4_4_;
            fStack_40 = local_198.fields.m30 * 0.0 +
                        local_198.fields.m20 * fStack_e0 +
                        local_198.fields.m10 * (float)uStack_120 + local_198.fields.m00 * (float)uStack_f0;
            fStack_3c = local_198.fields.m30 * 0.0 +
                        local_198.fields.m20 * fStack_dc +
                        local_198.fields.m10 * uStack_120._4_4_ + local_198.fields.m00 * uStack_f0._4_4_;
            fVar57 = local_198.fields.m31 * fVar42 +
                     local_198.fields.m21 * (float)local_e8._0_4_ +
                     local_198.fields.m11 * (float)local_128 + local_198.fields.m01 * (float)local_f8;
            fStack_c4 = local_198.fields.m31 * fVar24 +
                        local_198.fields.m21 * (float)local_e8._4_4_ +
                        local_198.fields.m11 * local_128._4_4_ + local_198.fields.m01 * local_f8._4_4_;
            fStack_c0 = local_198.fields.m31 * 0.0 +
                        local_198.fields.m21 * fStack_e0 +
                        local_198.fields.m11 * (float)uStack_120 + local_198.fields.m01 * (float)uStack_f0;
            fVar58 = local_198.fields.m31 * 0.0 +
                     local_198.fields.m21 * fStack_dc +
                     local_198.fields.m11 * uStack_120._4_4_ + local_198.fields.m01 * uStack_f0._4_4_;
            fVar47 = local_198.fields.m32 * fVar42 +
                     local_198.fields.m22 * (float)local_e8._0_4_ +
                     local_198.fields.m12 * (float)local_128 + local_198.fields.m02 * (float)local_f8;
            fVar48 = local_198.fields.m32 * fVar24 +
                     local_198.fields.m22 * (float)local_e8._4_4_ +
                     local_198.fields.m12 * local_128._4_4_ + local_198.fields.m02 * local_f8._4_4_;
            fVar49 = local_198.fields.m32 * 0.0 +
                     local_198.fields.m22 * fStack_e0 +
                     local_198.fields.m12 * (float)uStack_120 + local_198.fields.m02 * (float)uStack_f0;
            fVar50 = local_198.fields.m32 * 0.0 +
                     local_198.fields.m22 * fStack_dc +
                     local_198.fields.m12 * uStack_120._4_4_ + local_198.fields.m02 * uStack_f0._4_4_;
            local_78 = ZEXT416((uint)(local_198.fields.m00 * (float)local_118._0_4_));
            fVar21 = local_198.fields.m33 * fVar42 +
                     local_198.fields.m23 * (float)local_e8._0_4_ +
                     local_198.fields.m13 * (float)local_128 + local_198.fields.m03 * (float)local_f8;
            fVar24 = local_198.fields.m33 * fVar24 +
                     local_198.fields.m23 * (float)local_e8._4_4_ +
                     local_198.fields.m13 * local_128._4_4_ + local_198.fields.m03 * local_f8._4_4_;
            fVar25 = local_198.fields.m33 * 0.0 +
                     local_198.fields.m23 * fStack_e0 +
                     local_198.fields.m13 * (float)uStack_120 + local_198.fields.m03 * (float)uStack_f0;
            fVar27 = local_198.fields.m33 * 0.0 +
                     local_198.fields.m23 * fStack_dc +
                     local_198.fields.m13 * uStack_120._4_4_ + local_198.fields.m03 * uStack_f0._4_4_;
            local_b8 = ZEXT416((uint)(local_198.fields.m30 * fVar54 +
                                     local_198.fields.m20 * local_d8 +
                                     local_198.fields.m10 * local_c8 +
                                     local_198.fields.m00 * (float)local_118._0_4_));
            fVar52 = local_198.fields.m31 * fVar54 +
                     local_198.fields.m21 * local_d8 +
                     local_198.fields.m11 * local_c8 + local_198.fields.m01 * (float)local_118._0_4_;
            fVar62 = local_198.fields.m32 * fVar54 +
                     local_198.fields.m22 * local_d8 +
                     local_198.fields.m12 * local_c8 + local_198.fields.m02 * (float)local_118._0_4_;
            fVar56 = fVar54 * local_198.fields.m33 +
                     local_d8 * local_198.fields.m23 +
                     local_c8 * local_198.fields.m13 + (float)local_118._0_4_ * local_198.fields.m03;
            fVar42 = fVar53 - (float)local_108._0_4_;
            fVar53 = fVar53 + (float)local_108._0_4_;
            local_108 = ZEXT416((uint)(fVar62 * fVar42));
            local_138 = ZEXT416((uint)(fVar62 * fVar53));
            fVar54 = fVar53 * fVar47;
            fVar62 = fVar53 * fVar48;
            fVar55 = fVar53 * fVar49;
            fVar53 = fVar53 * fVar50;
            fStack_cc = local_158._4_4_ - (float)local_a8._4_4_;
            fStack_bc = local_158._4_4_ + (float)local_a8._4_4_;
            _local_e8 = ZEXT416((uint)(fVar52 * fStack_cc));
            local_d8 = fStack_cc * fVar57;
            fStack_d4 = fStack_cc * fStack_c4;
            fStack_d0 = fStack_cc * fStack_c0;
            fStack_cc = fStack_cc * fVar58;
            local_118 = ZEXT416((uint)(fVar52 * fStack_bc));
            local_c8 = fStack_bc * fVar57;
            fStack_c4 = fStack_bc * fStack_c4;
            fStack_c0 = fStack_bc * fStack_c0;
            fStack_bc = fStack_bc * fVar58;
            uVar19 = 0xfffffffd;
            local_148._4_4_ = fVar42 * fVar48;
            local_148._0_4_ = fVar42 * fVar47;
            fStack_140 = fVar42 * fVar49;
            fStack_13c = fVar42 * fVar50;
            fVar42 = (float)local_158;
            do {
              while( true ) {
                uVar19 = uVar19 + 2;
                fVar63 = (float)(int)uVar19 * (float)local_a8._0_4_ + fVar42;
                fVar58 = (float)local_b8._0_4_ * fVar63;
                fVar64 = fVar63 * local_48;
                fVar65 = fVar63 * fStack_44;
                fVar66 = fVar63 * fStack_40;
                fVar63 = fVar63 * fStack_3c;
                fVar49 = fVar64 + local_d8;
                fVar50 = fVar65 + fStack_d4;
                fVar52 = fVar66 + fStack_d0;
                fVar57 = fVar63 + fStack_cc;
                fVar48 = fVar58 + (float)local_e8._0_4_;
                local_208._0_4_ = fVar49 + (float)local_148._0_4_ + fVar21;
                local_208._4_4_ = fVar50 + (float)local_148._4_4_ + fVar24;
                fStack_200 = fVar52 + fStack_140 + fVar25;
                fStack_1fc = fVar57 + fStack_13c + fVar27;
                fVar47 = fVar48 + (float)local_108._0_4_ + fVar56;
                uVar32 = local_b8._4_4_;
                uVar33 = local_b8._8_4_;
                uVar34 = local_b8._12_4_;
                if (bVar12) {
                  fVar11 = fVar51 - fVar44;
                  if (fVar47 <= fVar51 - fVar44) {
                    fVar11 = fVar47;
                  }
                  fVar46 = fVar44 + fVar51;
                  if (fVar44 + fVar51 <= fVar47) {
                    fVar46 = fVar47;
                  }
                  auVar30._0_4_ = auVar60._0_4_ - fVar26;
                  auVar30._4_4_ = auVar60._4_4_ - fVar28;
                  auVar30._8_4_ = auVar60._8_4_ - fVar45;
                  auVar30._12_4_ = auVar60._12_4_ - fVar29;
                  auVar38 = minps(auVar30,_local_208);
                  auVar22._0_4_ = auVar60._0_4_ + fVar26;
                  auVar22._4_4_ = auVar60._4_4_ + fVar28;
                  auVar22._8_4_ = auVar60._8_4_ + fVar45;
                  auVar22._12_4_ = auVar60._12_4_ + fVar29;
                  auVar60 = maxps(auVar22,_local_208);
                  fVar51 = (auVar60._0_4_ - auVar38._0_4_) * 0.5;
                  fVar44 = (auVar60._4_4_ - auVar38._4_4_) * 0.5;
                  fVar26 = (auVar60._8_4_ - auVar38._8_4_) * 0.0;
                  fVar28 = (auVar60._12_4_ - auVar38._12_4_) * 0.0;
                  fVar45 = (fVar46 - fVar11) * 0.5;
                  fVar47 = fVar11 + fVar45;
                  local_208._4_4_ = auVar38._4_4_ + fVar44;
                  local_208._0_4_ = auVar38._0_4_ + fVar51;
                  fStack_200 = auVar38._8_4_ + fVar26;
                  fStack_1fc = auVar38._12_4_ + fVar28;
                }
                else {
                  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                    local_128 = CONCAT44(local_b8._4_4_,fVar48);
                    uStack_120 = local_b8._8_8_;
                    local_f8 = CONCAT44(local_b8._4_4_,fVar47);
                    uStack_f0 = uStack_120;
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                    Il2CppMethodInitialized_0753e4b6 = '\x01';
                    fVar47 = (float)local_f8;
                    fVar42 = (float)local_158;
                    fVar48 = (float)local_128;
                    uVar32 = local_128._4_4_;
                    uVar33 = (float)uStack_120;
                    uVar34 = uStack_120._4_4_;
                  }
                  pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
                  uVar1 = (pUVar10->zeroVector).fields.x;
                  uVar5 = (pUVar10->zeroVector).fields.y;
                  fVar51 = (float)uVar1 * 0.5;
                  fVar44 = (float)uVar5 * 0.5;
                  fVar26 = 0.0;
                  fVar28 = 0.0;
                  fVar45 = (pUVar10->zeroVector).fields.z * 0.5;
                  bVar12 = true;
                }
                auVar39._0_8_ = CONCAT44(fVar50 + fVar62 + fVar24,fVar49 + fVar54 + fVar21);
                auVar39._8_4_ = fVar52 + fVar55 + fVar25;
                auVar39._12_4_ = fVar57 + fVar53 + fVar27;
                fVar29 = fVar48 + (float)local_138._0_4_ + fVar56;
                if (bVar12) {
                  fVar48 = fVar47 - fVar45;
                  if (fVar29 <= fVar47 - fVar45) {
                    fVar48 = fVar29;
                  }
                  fVar49 = fVar45 + fVar47;
                  if (fVar45 + fVar47 <= fVar29) {
                    fVar49 = fVar29;
                  }
                  auVar31._8_4_ = auVar39._8_4_;
                  auVar31._0_8_ = auVar39._0_8_;
                  auVar31._12_4_ = auVar39._12_4_;
                  auVar40._0_4_ = (float)local_208._0_4_ - fVar51;
                  auVar40._4_4_ = (float)local_208._4_4_ - fVar44;
                  auVar40._8_4_ = fStack_200 - fVar26;
                  auVar40._12_4_ = fStack_1fc - fVar28;
                  auVar60 = minps(auVar40,auVar31);
                  auVar43._0_4_ = (float)local_208._0_4_ + fVar51;
                  auVar43._4_4_ = (float)local_208._4_4_ + fVar44;
                  auVar43._8_4_ = fStack_200 + fVar26;
                  auVar43._12_4_ = fStack_1fc + fVar28;
                  auVar38 = maxps(auVar43,auVar31);
                  fVar51 = (auVar38._0_4_ - auVar60._0_4_) * 0.5;
                  fVar44 = (auVar38._4_4_ - auVar60._4_4_) * 0.5;
                  fVar26 = (auVar38._8_4_ - auVar60._8_4_) * 0.0;
                  fVar28 = (auVar38._12_4_ - auVar60._12_4_) * 0.0;
                  fVar45 = (fVar49 - fVar48) * 0.5;
                  auVar39._0_4_ = auVar60._0_4_ + fVar51;
                  auVar39._4_4_ = auVar60._4_4_ + fVar44;
                  auVar39._8_4_ = auVar60._8_4_ + fVar26;
                  auVar39._12_4_ = auVar60._12_4_ + fVar28;
                  fVar29 = fVar48 + fVar45;
                }
                else {
                  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                    local_128 = CONCAT44(uVar32,fVar29);
                    uStack_120 = CONCAT44(uVar34,uVar33);
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                    Il2CppMethodInitialized_0753e4b6 = '\x01';
                    fVar42 = (float)local_158;
                    fVar29 = (float)local_128;
                  }
                  pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
                  uVar2 = (pUVar10->zeroVector).fields.x;
                  uVar6 = (pUVar10->zeroVector).fields.y;
                  fVar51 = (float)uVar2 * 0.5;
                  fVar44 = (float)uVar6 * 0.5;
                  fVar26 = 0.0;
                  fVar28 = 0.0;
                  fVar45 = (pUVar10->zeroVector).fields.z * 0.5;
                  bVar12 = true;
                }
                fVar64 = fVar64 + local_c8;
                fVar65 = fVar65 + fStack_c4;
                fVar66 = fVar66 + fStack_c0;
                fVar63 = fVar63 + fStack_bc;
                fVar58 = fVar58 + (float)local_118._0_4_;
                auVar61._0_4_ = fVar64 + (float)local_148._0_4_ + fVar21;
                auVar61._4_4_ = fVar65 + (float)local_148._4_4_ + fVar24;
                auVar61._8_4_ = fVar66 + fStack_140 + fVar25;
                auVar61._12_4_ = fVar63 + fStack_13c + fVar27;
                fVar47 = fVar58 + (float)local_108._0_4_ + fVar56;
                if (bVar12) {
                  fVar48 = fVar29 - fVar45;
                  if (fVar47 <= fVar29 - fVar45) {
                    fVar48 = fVar47;
                  }
                  auVar23._0_4_ = auVar39._0_4_ + fVar51;
                  auVar23._4_4_ = auVar39._4_4_ + fVar44;
                  auVar23._8_4_ = auVar39._8_4_ + fVar26;
                  auVar23._12_4_ = auVar39._12_4_ + fVar28;
                  auVar60 = maxps(auVar23,auVar61);
                  fVar49 = fVar45 + fVar29;
                  if (fVar45 + fVar29 <= fVar47) {
                    fVar49 = fVar47;
                  }
                  fVar29 = (fVar49 - fVar48) * 0.5;
                  auVar41._0_4_ = auVar39._0_4_ - fVar51;
                  auVar41._4_4_ = auVar39._4_4_ - fVar44;
                  auVar41._8_4_ = auVar39._8_4_ - fVar26;
                  auVar41._12_4_ = auVar39._12_4_ - fVar28;
                  auVar38 = minps(auVar41,auVar61);
                  fVar44 = (auVar60._0_4_ - auVar38._0_4_) * 0.5;
                  fVar26 = (auVar60._4_4_ - auVar38._4_4_) * 0.5;
                  fVar28 = (auVar60._8_4_ - auVar38._8_4_) * 0.0;
                  fVar45 = (auVar60._12_4_ - auVar38._12_4_) * 0.0;
                  auVar61._4_4_ = auVar38._4_4_ + fVar26;
                  auVar61._0_4_ = auVar38._0_4_ + fVar44;
                  fVar47 = fVar48 + fVar29;
                  auVar61._8_4_ = auVar38._8_4_ + fVar28;
                  auVar61._12_4_ = auVar38._12_4_ + fVar45;
                }
                else {
                  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                    Il2CppMethodInitialized_0753e4b6 = '\x01';
                    fVar42 = (float)local_158;
                  }
                  pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
                  uVar3 = (pUVar10->zeroVector).fields.x;
                  uVar7 = (pUVar10->zeroVector).fields.y;
                  fVar44 = (float)uVar3 * 0.5;
                  fVar26 = (float)uVar7 * 0.5;
                  fVar28 = 0.0;
                  fVar45 = 0.0;
                  fVar29 = (pUVar10->zeroVector).fields.z * 0.5;
                  bVar12 = true;
                }
                auVar60._0_4_ = fVar64 + fVar54 + fVar21;
                auVar60._4_4_ = fVar65 + fVar62 + fVar24;
                auVar60._8_4_ = fVar66 + fVar55 + fVar25;
                auVar60._12_4_ = fVar63 + fVar53 + fVar27;
                fVar51 = fVar58 + (float)local_138._0_4_ + fVar56;
                if (bVar12) break;
                if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_0753e4b6 = '\x01';
                  fVar42 = (float)local_158;
                }
                pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
                uVar4 = (pUVar10->zeroVector).fields.x;
                uVar8 = (pUVar10->zeroVector).fields.y;
                fVar26 = (float)uVar4 * 0.5;
                fVar28 = (float)uVar8 * 0.5;
                fVar45 = 0.0;
                fVar29 = 0.0;
                fVar44 = (pUVar10->zeroVector).fields.z * 0.5;
                bVar12 = true;
                auVar38 = auVar60;
                if (uVar19 < 0x7ffffffe) goto label_05996dda;
              }
              fVar48 = fVar47 - fVar29;
              if (fVar51 <= fVar47 - fVar29) {
                fVar48 = fVar51;
              }
              fVar49 = fVar29 + fVar47;
              if (fVar29 + fVar47 <= fVar51) {
                fVar49 = fVar51;
              }
              auVar37._0_4_ = auVar61._0_4_ - fVar44;
              auVar37._4_4_ = auVar61._4_4_ - fVar26;
              auVar37._8_4_ = auVar61._8_4_ - fVar28;
              auVar37._12_4_ = auVar61._12_4_ - fVar45;
              auVar38 = minps(auVar37,auVar60);
              auVar59._0_4_ = auVar61._0_4_ + fVar44;
              auVar59._4_4_ = auVar61._4_4_ + fVar26;
              auVar59._8_4_ = auVar61._8_4_ + fVar28;
              auVar59._12_4_ = auVar61._12_4_ + fVar45;
              auVar60 = maxps(auVar59,auVar60);
              fVar26 = (auVar60._0_4_ - auVar38._0_4_) * 0.5;
              fVar28 = (auVar60._4_4_ - auVar38._4_4_) * 0.5;
              fVar45 = (auVar60._8_4_ - auVar38._8_4_) * 0.0;
              fVar29 = (auVar60._12_4_ - auVar38._12_4_) * 0.0;
              fVar44 = (fVar49 - fVar48) * 0.5;
              uVar36 = CONCAT44(auVar38._4_4_ + fVar28,auVar38._0_4_ + fVar26);
              fVar47 = auVar38._8_4_ + fVar45;
              fVar49 = auVar38._12_4_ + fVar29;
              fVar51 = fVar48 + fVar44;
              auVar38._8_4_ = fVar47;
              auVar38._0_8_ = uVar36;
              auVar38._12_4_ = fVar49;
              auVar60._8_4_ = fVar47;
              auVar60._0_8_ = uVar36;
              auVar60._12_4_ = fVar49;
            } while (0x7ffffffd < uVar19);
          }
        }
label_05996dda:
        uVar20 = uVar20 + 1;
        uVar19 = (uint)pSVar15->max_length;
        iVar17 = (il2cpp_array_size_t)uVar19;
        auVar60 = auVar38;
      } while ((int)uVar20 < (int)uVar19);
      if (bVar12) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          if (Il2CppMethodInitialized_07545a53 == '\0') goto label_05997920;
label_059978d1:
          uVar9 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
        }
        else {
          if (Il2CppMethodInitialized_07545a53 != '\0') goto label_059978d1;
label_05997920:
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
          Il2CppMethodInitialized_07545a53 = '\x01';
          uVar9 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
        }
        if (uVar9 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        if ((~auVar38._0_4_ & 0x7f800000) == 0) {
          return false;
        }
        if ((((Il2CppClass *)TypeInfo_Map_MapLoader)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        if ((~auVar38._4_4_ & 0x7f800000) == 0) {
          return false;
        }
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        if ((~(uint)fVar51 & 0x7f800000) == 0) {
          return false;
        }
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        if (Il2CppMethodInitialized_07545a53 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
          Il2CppMethodInitialized_07545a53 = '\x01';
        }
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        if ((~(uint)(fVar26 + fVar26) & 0x7f800000) == 0) {
          return false;
        }
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        if ((~(uint)(fVar28 + fVar28) & 0x7f800000) == 0) {
          return false;
        }
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        if ((~(uint)(fVar44 + fVar44) & 0x7f800000) == 0) {
          return false;
        }
        __this_04 = UnityEngine_GameObject__AddComponent_object_
                              (go,(MethodInfo_353B6A0 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
        if (__this_04 != (UnityEngine_BoxCollider_o *)0x0) {
          value.fields.z = fVar51;
          local_1d8._0_4_ = auVar38._0_4_;
          local_1d8._4_4_ = auVar38._4_4_;
          value.fields.x = (float)(undefined4)local_1d8;
          value.fields.y = (float)local_1d8._4_4_;
          UnityEngine_BoxCollider__set_center(__this_04,value,(MethodInfo *)0x0);
          value_00.fields.z = fVar44 + fVar44;
          value_00.fields.x = fVar26 + fVar26;
          value_00.fields.y = fVar28 + fVar28;
          UnityEngine_BoxCollider__set_size(__this_04,value_00,(MethodInfo *)0x0);
          return true;
        }
        goto label_05997b69;
      }
    }
    __this_01 = UnityEngine_GameObject__AddComponent_object_
                          (go,(MethodInfo_353B6A0 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_EditorGizmoIcon);
  }
  if (__this_01 != (MapEditor_EditorGizmoIcon_o *)0x0) {
    MapEditor_EditorGizmoIcon__Setup(__this_01,(MethodInfo *)0x0);
    return true;
  }
label_05997b69:
  ThrowNullReferenceException();
}


// Map.MapLoader$$IsFiniteBounds
// il2cpp: bool Map_MapLoader__IsFiniteBounds (UnityEngine_Bounds_o bounds, const MethodInfo* method);
// 0x5999500
// asm: 13 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5999547: cmp byte ptr [rip + 0x1bac505], 0
// asm:   0x599954e: je 0x59995c8
// asm:   0x59995aa: not ebp
// asm:   0x59995ac: test ebp, 0x7f800000
// asm:   0x59995b2: je 0x5999708
// asm:   0x59995b8: jmp 0x5999608
// asm:   0x5999629: cmp byte ptr [rip + 0x1bac423], 0
// asm:   0x5999630: je 0x599966a
// asm:   0x599963e: movd eax, xmm2
// asm:   0x5999642: not eax
// asm:   0x5999644: test eax, 0x7f800000
// asm:   0x5999649: je 0x5999708
// asm:   0x599964f: jmp 0x59996b1

bool Map_MapLoader__IsFiniteBounds(UnityEngine_Bounds_o bounds,MethodInfo *method)

{
  uint32_t uVar1;
  float fVar2;
  float fVar3;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07545a52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a52 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  if (Il2CppMethodInitialized_07545a53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a53 = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = *(uint32_t *)((long)TypeInfo_Map_MapLoader + 0xe4);
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  local_38 = bounds.fields.m_Center.fields.x;
  if ((~(uint)local_38 & 0x7f800000) == 0) {
    return false;
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  fStack_34 = bounds.fields.m_Center.fields.y;
  if ((~(uint)fStack_34 & 0x7f800000) == 0) {
    return false;
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  if ((~(uint)bounds.fields.m_Center.fields.z & 0x7f800000) == 0) {
    return false;
  }
  fVar2 = bounds.fields.m_Extents.fields.x;
  if ((((Il2CppClass *)TypeInfo_Map_MapLoader)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  if (Il2CppMethodInitialized_07545a53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a53 = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = *(uint32_t *)((long)TypeInfo_Map_MapLoader + 0xe4);
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  if ((~(uint)fVar2 & 0x7f800000) != 0) {
    if ((((Il2CppClass *)TypeInfo_Map_MapLoader)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    fVar3 = bounds.fields.m_Extents.fields.y;
    if ((~(uint)fVar3 & 0x7f800000) != 0) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      if ((~(uint)bounds.fields.m_Extents.fields.z & 0x7f800000) != 0) {
        return 0.0 < bounds.fields.m_Extents.fields.z * bounds.fields.m_Extents.fields.z +
                     fVar3 * fVar3 + fVar2 * fVar2;
      }
    }
  }
  return false;
}


// Map.MapLoader$$IsFiniteVector3
// il2cpp: bool Map_MapLoader__IsFiniteVector3 (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x5999740
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x599976d: movd eax, xmm0
// asm:   0x5999771: not eax
// asm:   0x5999773: test eax, 0x7f800000
// asm:   0x599977a: jmp 0x59997e9

bool Map_MapLoader__IsFiniteVector3(UnityEngine_Vector3_o v,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545a53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a53 = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  if ((~(uint)v.fields.x & 0x7f800000) != 0) {
    if ((((Il2CppClass *)TypeInfo_Map_MapLoader)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    if ((~(uint)v.fields.y & 0x7f800000) != 0) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      return (~(uint)v.fields.z & 0x7f800000) != 0;
    }
  }
  return false;
}


// Map.MapLoader$$IsFiniteFloat
// il2cpp: bool Map_MapLoader__IsFiniteFloat (float value, const MethodInfo* method);
// 0x5999820

bool Map_MapLoader__IsFiniteFloat(float value,MethodInfo *method)

{
  return (~(uint)value & 0x7f800000) != 0;
}


// Map.MapLoader$$SetTransform
// il2cpp: void Map_MapLoader__SetTransform (Map_MapObject_o* mapObject, const MethodInfo* method);
// 0x5991080

void Map_MapLoader__SetTransform(Map_MapObject_o *mapObject,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  UnityEngine_Object_o *__this;
  Map_MapScriptBaseObject_o *pMVar7;
  UnityEngine_Vector3_o value;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_o value_00;
  UnityEngine_Vector3_Fields UVar8;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_Fields local_30;
  
  if ((mapObject != (Map_MapObject_o *)0x0) &&
     (__this = (UnityEngine_Object_o *)(mapObject->fields).GameObject, __this != (UnityEngine_Object_o *)0x0))
  {
    pMVar7 = (mapObject->fields).ScriptObject;
    __this_00 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this,(MethodInfo *)0x0);
    if (pMVar7 != (Map_MapScriptBaseObject_o *)0x0) {
      UnityEngine_GameObject__set_isStatic
                ((UnityEngine_GameObject_o *)__this,(pMVar7->fields).Static,(MethodInfo *)0x0);
      UnityEngine_Object__set_name(__this,(pMVar7->fields).Name,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UVar8 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0)
        ;
        (mapObject->fields).BaseScale.fields = UVar8;
        value.fields.x = (pMVar7->fields).PositionX;
        value.fields.y = (pMVar7->fields).PositionY;
        value.fields.z = (pMVar7->fields).PositionZ;
        UnityEngine_Transform__set_localPosition(__this_00,value,(MethodInfo *)0x0);
        uVar1 = (pMVar7->fields).RotationX;
        uVar4 = (pMVar7->fields).RotationY;
        local_30.x = (float)uVar1 * 0.017453292;
        local_30.y = (float)uVar4 * 0.017453292;
        local_30.z = (pMVar7->fields).RotationZ * 0.017453292;
        value_00 = UnityEngine_Quaternion__Internal_FromEulerRad
                             ((UnityEngine_Vector3_o *)&local_30,(MethodInfo *)0x0);
        UnityEngine_Transform__set_localRotation(__this_00,value_00,(MethodInfo *)0x0);
        uVar2 = (mapObject->fields).BaseScale.fields.x;
        uVar5 = (mapObject->fields).BaseScale.fields.y;
        uVar3 = (pMVar7->fields).ScaleX;
        uVar6 = (pMVar7->fields).ScaleY;
        value_01.fields.x = (float)uVar3 * (float)uVar2;
        value_01.fields.y = (float)uVar6 * (float)uVar5;
        value_01.fields.z = (mapObject->fields).BaseScale.fields.z * (pMVar7->fields).ScaleZ;
        UnityEngine_Transform__set_localScale(__this_00,value_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$ApplyLocalTransform
// il2cpp: void Map_MapLoader__ApplyLocalTransform (Map_MapObject_o* mapObject, const MethodInfo* method);
// 0x5999830

void Map_MapLoader__ApplyLocalTransform(Map_MapObject_o *mapObject,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  UnityEngine_GameObject_o *__this;
  Map_MapScriptBaseObject_o *pMVar7;
  UnityEngine_Vector3_o value;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_o value_00;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_Fields local_28;
  
  if ((mapObject != (Map_MapObject_o *)0x0) &&
     (__this = (mapObject->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    pMVar7 = (mapObject->fields).ScriptObject;
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pMVar7 != (Map_MapScriptBaseObject_o *)0x0) && (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      value.fields.x = (pMVar7->fields).PositionX;
      value.fields.y = (pMVar7->fields).PositionY;
      value.fields.z = (pMVar7->fields).PositionZ;
      UnityEngine_Transform__set_localPosition(__this_00,value,(MethodInfo *)0x0);
      uVar1 = (pMVar7->fields).RotationX;
      uVar4 = (pMVar7->fields).RotationY;
      local_28.x = (float)uVar1 * 0.017453292;
      local_28.y = (float)uVar4 * 0.017453292;
      local_28.z = (pMVar7->fields).RotationZ * 0.017453292;
      value_00 = UnityEngine_Quaternion__Internal_FromEulerRad
                           ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      UnityEngine_Transform__set_localRotation(__this_00,value_00,(MethodInfo *)0x0);
      uVar2 = (mapObject->fields).BaseScale.fields.x;
      uVar5 = (mapObject->fields).BaseScale.fields.y;
      uVar3 = (pMVar7->fields).ScaleX;
      uVar6 = (pMVar7->fields).ScaleY;
      value_01.fields.x = (float)uVar3 * (float)uVar2;
      value_01.fields.y = (float)uVar6 * (float)uVar5;
      value_01.fields.z = (mapObject->fields).BaseScale.fields.z * (pMVar7->fields).ScaleZ;
      UnityEngine_Transform__set_localScale(__this_00,value_01,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$SetParent
// il2cpp: void Map_MapLoader__SetParent (Map_MapObject_o* mapObject, const MethodInfo* method);
// 0x59998f0

void Map_MapLoader__SetParent_58998f0(Map_MapObject_o *mapObject,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  bool bVar4;
  UnityEngine_Transform_o *__this;
  Map_MapObject_o *pMVar5;
  UnityEngine_Transform_o *p;
  System_String_o *pSVar6;
  int32_t *__this_00;
  
  if (Il2CppMethodInitialized_07545a54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&"Map load error: object parent id not found (");
    Il2CppMethodInitialized_07545a54 = '\x01';
  }
  if ((mapObject != (Map_MapObject_o *)0x0) &&
     (pUVar1 = (mapObject->fields).GameObject, pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    pMVar2 = (mapObject->fields).ScriptObject;
    __this = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    if (pMVar2 != (Map_MapScriptBaseObject_o *)0x0) {
      if ((pMVar2->fields).Parent < 0) {
        return;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        __this_00 = &(pMVar2->fields).Parent;
        bVar4 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                          (pSVar3,*__this_00,
                           (MethodInfo_4A0F950 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        if (!bVar4) {
          pSVar6 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
          pSVar6 = System_String__Concat_5301f10
                             ("Map load error: object parent id not found (",pSVar6,")",(MethodInfo *)0x0);
          if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
          }
          ApplicationManagers_DebugConsole__Log(pSVar6,true,(MethodInfo *)0x0);
          return;
        }
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          pMVar5 = System_Collections_Generic_Dictionary_int__object___get_Item
                             (pSVar3,*__this_00,
                              (MethodInfo_4A0F690 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
          if ((pMVar5 != (Map_MapObject_o *)0x0) &&
             (pUVar1 = (pMVar5->fields).GameObject, pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
            p = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
            if (__this != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent(__this,p,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$IsParticleMaterial
// il2cpp: bool Map_MapLoader__IsParticleMaterial (UnityEngine_Material_o* mat, const MethodInfo* method);
// 0x5999aa0

bool Map_MapLoader__IsParticleMaterial(UnityEngine_Material_o *mat,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *__this;
  System_String_o *__this_00;
  
  if (Il2CppMethodInitialized_07545a55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Particles/");
    il2cpp_codegen_initialize_runtime_metadata(&"_BaseColor");
    Il2CppMethodInitialized_07545a55 = '\x01';
  }
  if (mat != (UnityEngine_Material_o *)0x0) {
    bVar1 = UnityEngine_Material__HasProperty_68dd940(mat,"_BaseColor",(MethodInfo *)0x0);
    if (!bVar1) {
      return false;
    }
    __this = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(mat,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Object_o *)0x0) {
      __this_00 = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
      if (__this_00 != (System_String_o *)0x0) {
        bVar1 = System_String__Contains(__this_00,"Particles/",(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$SetDefaultTiling
// il2cpp: void Map_MapLoader__SetDefaultTiling (System_String_o* asset, UnityEngine_Material_o* mat, UnityEngine_Vector2_o tiling, const MethodInfo* method);
// 0x5999b30

void Map_MapLoader__SetDefaultTiling
               (System_String_o *asset,UnityEngine_Material_o *mat,UnityEngine_Vector2_o tiling,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o **ppSVar2;
  System_String_o **ppSVar3;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  
  if (Il2CppMethodInitialized_07545a56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"FX/LavaCube1");
    il2cpp_codegen_initialize_runtime_metadata(&"_BaseColorTiling");
    il2cpp_codegen_initialize_runtime_metadata(&"_EmitColorTiling");
    il2cpp_codegen_initialize_runtime_metadata(&"FX/WaterCube1");
    il2cpp_codegen_initialize_runtime_metadata(&"_Tiling_1");
    il2cpp_codegen_initialize_runtime_metadata(&"_Normal_Tiling");
    il2cpp_codegen_initialize_runtime_metadata(&"_Tiling");
    Il2CppMethodInitialized_07545a56 = '\x01';
  }
  bVar1 = System_String__op_Equality(asset,"FX/WaterCube1",(MethodInfo *)0x0);
  if (bVar1) {
    if (mat == (UnityEngine_Material_o *)0x0) {
label_05999c53:
      ThrowNullReferenceException();
    }
    ppSVar3 = &"_Tiling_1";
    ppSVar2 = &"_Tiling";
  }
  else {
    bVar1 = System_String__op_Equality(asset,"FX/LavaCube1",(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (mat == (UnityEngine_Material_o *)0x0) goto label_05999c53;
    value.fields.z = 0.0;
    value.fields.w = 0.0;
    value.fields._0_8_ = tiling.fields;
    UnityEngine_Material__SetVector(mat,"_BaseColorTiling",value,(MethodInfo *)0x0);
    ppSVar3 = &"_Normal_Tiling";
    ppSVar2 = &"_EmitColorTiling";
  }
  value_00.fields.z = 0.0;
  value_00.fields.w = 0.0;
  value_00.fields._0_8_ = tiling.fields;
  UnityEngine_Material__SetVector(mat,*ppSVar2,value_00,(MethodInfo *)0x0);
  value_01.fields.z = 0.0;
  value_01.fields.w = 0.0;
  value_01.fields._0_8_ = tiling.fields;
  UnityEngine_Material__SetVector(mat,*ppSVar3,value_01,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader$$RendererBelongsToMapObject
// il2cpp: bool Map_MapLoader__RendererBelongsToMapObject (UnityEngine_Renderer_o* renderer, UnityEngine_GameObject_o* ownerGo, const MethodInfo* method);
// 0x5999c60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5999cdd: nop dword ptr [rax]
// asm:   0x5999d93: jmp 0x5999ce0

bool Map_MapLoader__RendererBelongsToMapObject
               (UnityEngine_Renderer_o *renderer,UnityEngine_GameObject_o *ownerGo,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *key;
  
  if (Il2CppMethodInitialized_07545a57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545a57 = '\x01';
  }
  if (renderer == (UnityEngine_Renderer_o *)0x0) {
label_05999dd5:
    ThrowNullReferenceException();
  }
  __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)renderer,(MethodInfo *)0x0);
  uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  do {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
label_05999d98:
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      return bVar2;
    }
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_05999dd5;
    x = (UnityEngine_Object_o *)
        UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)ownerGo,(MethodInfo *)0x0);
    if (!bVar2) goto label_05999d98;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
    key = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05999dd5;
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (__this,(Il2CppObject *)key,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey);
    if (bVar2) {
      return false;
    }
    __this_00 = UnityEngine_Transform__get_parent(__this_00,(MethodInfo *)0x0);
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  } while( true );
}


// Map.MapLoader$$SetMaterial
// il2cpp: void Map_MapLoader__SetMaterial (UnityEngine_GameObject_o* go, System_String_o* asset, Map_MapScriptBaseMaterial_o* material, bool visible, bool editor, const MethodInfo* method);
// 0x5997b80
// eh: try 0x599826f..0x5999380 -> pad 0x599949f (+45 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x599940a..0x599940f -> pad 0x5999431 cleanup
// eh: try 0x5999434..0x599943e -> pad 0x59994f6 catch (...) [compiler noexcept guard]
// eh: try 0x5999469..0x599946e -> pad 0x5999490 cleanup
// eh: try 0x5999493..0x599949d -> pad 0x59994f6 catch (...) [compiler noexcept guard]
// eh: try 0x59994b7..0x59994bc -> pad 0x59994e1 cleanup
// eh: try 0x59994e4..0x59994ee -> pad 0x59994f6 catch (...) [compiler noexcept guard]
// asm: 104 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5998a7d: jmp 0x5999314
// asm:   0x5998a8a: jmp 0x5999326
// asm:   0x59990f7: mov rdi, qword ptr [rsp + 8]
// asm:   0x5999380: jmp 0x599949f
// asm:   0x5999385: jmp 0x5999451
// asm:   0x599938a: jmp 0x5999451
// asm:   0x599938f: jmp 0x5999451
// asm:   0x5999394: jmp 0x5999451
// asm:   0x5999399: jmp 0x5999451
// asm:   0x599939e: jmp 0x5999451
// asm:   0x59993a3: jmp 0x5999451
// asm:   0x59993a8: jmp 0x5999451
// asm:   0x59993ad: jmp 0x5999451
// asm:   0x59993b2: jmp 0x5999451
// asm:   0x59993b7: jmp 0x599949f
// asm:   0x59993bc: jmp 0x5999451
// asm:   0x59993c1: jmp 0x5999451
// asm:   0x59993c6: jmp 0x5999451
// asm:   0x59993cb: jmp 0x5999451
// asm:   0x59993d0: jmp 0x5999451
// asm:   0x59993d2: jmp 0x5999451
// asm:   0x59993d4: jmp 0x5999451
// asm:   0x59993d6: jmp 0x5999451
// asm:   0x59993d8: jmp 0x5999451
// asm:   0x59993da: jmp 0x5999451
// asm:   0x59993dc: jmp 0x5999451
// asm:   0x59993de: jmp 0x5999451
// asm:   0x59993e0: jmp 0x5999451
// asm:   0x59993e2: jmp 0x5999451
// asm:   0x59993e4: jmp 0x59993f2
// asm:   0x59993e6: jmp 0x5999451
// asm:   0x59993e8: jmp 0x59993f2
// asm:   0x59993ea: jmp 0x59993f2
// asm:   0x59993ec: jmp 0x59993f2
// asm:   0x59993ee: jmp 0x59993f2
// asm:   0x59993f0: jmp 0x59993f2
// asm:   0x59993f2: mov r14, rax
// asm:   0x59993f5: cmp edx, 1
// asm:   0x59993f8: jne 0x5999434
// asm:   0x59993fa: mov rdi, r14
// asm:   0x59993fd: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5999402: mov rbx, qword ptr [rax]
// asm:   0x5999405: mov qword ptr [rsp + 0x20], rbx
// asm:   0x599940a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599940f: lea rax, [rip + 0x18f54ba]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x5999416: mov rsi, qword ptr [rax]
// asm:   0x5999419: lea rdi, [rsp + 0x40]
// asm:   0x599941e: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5999423: test rbx, rbx
// asm:   0x5999426: je 0x5999314
// asm:   0x599942c: jmp 0x59994d9
// asm:   0x5999431: mov r14, rax
// asm:   0x5999434: lea rdi, [rsp + 0x20]
// asm:   0x5999439: call 0x2fd48c0  ; il2cpp_runtime_helper_02fd48c0()
// asm:   0x599943e: jmp 0x59994ee
// asm:   0x5999443: jmp 0x5999451
// asm:   0x5999445: jmp 0x599949f
// asm:   0x5999447: jmp 0x599949f
// asm:   0x5999449: jmp 0x599949f
// asm:   0x599944b: jmp 0x5999451
// asm:   0x599944d: jmp 0x5999451
// asm:   0x599944f: jmp 0x5999451
// asm:   0x5999451: mov r14, rax
// asm:   0x5999454: cmp edx, 1
// asm:   0x5999457: jne 0x5999493
// asm:   0x5999459: mov rdi, r14
// asm:   0x599945c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5999461: mov rbx, qword ptr [rax]
// asm:   0x5999464: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5999469: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599946e: lea rax, [rip + 0x18f500b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose
// asm:   0x5999475: mov rsi, qword ptr [rax]
// asm:   0x5999478: lea rdi, [rsp + 0x80]
// asm:   0x5999480: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5999485: test rbx, rbx
// asm:   0x5999488: je 0x599890c
// asm:   0x599948e: jmp 0x59994d9
// asm:   0x5999490: mov r14, rax
// asm:   0x5999493: lea rdi, [rsp + 0x20]
// asm:   0x5999498: call 0x2fd4890  ; il2cpp_runtime_helper_02fd4890()
// asm:   0x599949d: jmp 0x59994ee
// asm:   0x599949f: mov r14, rax
// asm:   0x59994a2: cmp edx, 1
// asm:   0x59994a5: jne 0x59994e4
// asm:   0x59994a7: mov rdi, r14
// asm:   0x59994aa: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59994af: mov rbx, qword ptr [rax]
// asm:   0x59994b2: mov qword ptr [rsp + 0x20], rbx
// asm:   0x59994b7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59994bc: lea rax, [rip + 0x18f540d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x59994c3: mov rsi, qword ptr [rax]
// asm:   0x59994c6: lea rdi, [rsp + 0x40]
// asm:   0x59994cb: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59994d0: test rbx, rbx
// asm:   0x59994d3: je 0x5998308
// asm:   0x59994d9: mov rdi, rbx
// asm:   0x59994dc: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59994e1: mov r14, rax
// asm:   0x59994e4: lea rdi, [rsp + 0x20]
// asm:   0x59994e9: call 0x2fd4860  ; il2cpp_runtime_helper_02fd4860()
// asm:   0x59994ee: mov rdi, r14
// asm:   0x59994f1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59994f6: mov rdi, rax
// asm:   0x59994f9: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapLoader__SetMaterial
               (UnityEngine_GameObject_o *go,System_String_o *asset,Map_MapScriptBaseMaterial_o *material,
               bool visible,bool editor,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Vector2_Fields UVar2;
  byte bVar3;
  uint32_t uVar4;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Renderer_array *pUVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  UnityEngine_Material_array *pUVar7;
  Utility_Color255_o *pUVar8;
  Il2CppClass *asset_00;
  UnityEngine_Vector2_o value;
  Il2CppType *handle;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  Map_MapLoader___c__DisplayClass80_0_o *__this_00;
  System_Object_array *array;
  System_Predicate_T__o *match;
  System_Collections_Generic_List_Renderer__o *__this_01;
  System_String_o *pSVar12;
  System_Collections_Generic_List_Material__o *pSVar13;
  UnityEngine_Material_o *pUVar14;
  Map_MapScriptBasicMaterial_o *key;
  System_Collections_Generic_List_object__o *pSVar15;
  System_Collections_Generic_Dictionary_Material__Material__o *__this_02;
  UnityEngine_Material_o *pUVar16;
  UnityEngine_Renderer_o *pUVar17;
  Il2CppObject *pIVar18;
  UnityEngine_Object_o *pUVar19;
  System_Type_o *pSVar20;
  System_Type_o *pSVar21;
  System_String_o *pSVar22;
  System_String_array *pSVar23;
  System_String_o *path;
  UnityEngine_Texture_o *value_00;
  int iVar24;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  System_String_o **ppSVar25;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar26;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  int32_t index;
  long lVar27;
  Il2CppObject *pIVar28;
  uint uVar29;
  System_Object_array *pSVar30;
  undefined8 uVar31;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float fVar32;
  float fVar33;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar34;
  UnityEngine_Color_o UVar35;
  UnityEngine_Color_o value_01;
  bool local_e4;
  undefined1 local_d8 [16];
  UnityEngine_Material_o *local_c8;
  UnityEngine_Material_o *local_c0;
  undefined1 local_b8 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_b0;
  UnityEngine_Material_o *local_a8;
  System_Collections_Generic_Dictionary_Material__Material__o *local_98;
  Map_MapScriptBasicMaterial_o *local_90;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_70;
  UnityEngine_Material_o *local_68;
  Il2CppObject *local_60;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  UnityEngine_Color_o local_48;
  
  if (Il2CppMethodInitialized_07545a58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_FindAll_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapTextures);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Material_Material);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapAssets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Map_MapScriptBasicMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptBasicMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptDefaultTiledMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptLegacyMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptReflectiveMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapLoader_c__DisplayClass80_0_SetMaterial_b__0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader_c__DisplayClass80_0);
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineGizmo");
    il2cpp_codegen_initialize_runtime_metadata(&"Map/Materials");
    il2cpp_codegen_initialize_runtime_metadata(&"Editor");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Map/Textures/");
    il2cpp_codegen_initialize_runtime_metadata(&"_SpecularMap");
    il2cpp_codegen_initialize_runtime_metadata(&"Misc/None");
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    il2cpp_codegen_initialize_runtime_metadata(&"Map/Legacy/Materials");
    il2cpp_codegen_initialize_runtime_metadata(&"Legacy");
    il2cpp_codegen_initialize_runtime_metadata(&"Map");
    il2cpp_codegen_initialize_runtime_metadata(&"Material");
    Il2CppMethodInitialized_07545a58 = '\x01';
  }
  local_b8 = (undefined1  [8])0x0;
  pSStack_b0 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_a8 = (UnityEngine_Material_o *)0x0;
  local_78 = (undefined1  [8])0x0;
  pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_68 = (UnityEngine_Material_o *)0x0;
  local_c0 = (UnityEngine_Material_o *)0x0;
  local_48.fields = (UnityEngine_Color_Fields)ZEXT816(0);
  local_60 = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapLoader_c__DisplayClass80_0);
  Map_MapLoader___c__DisplayClass80_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Map_MapLoader___c__DisplayClass80_0_o *)0x0) goto label_05999326;
  (__this_00->fields).go = go;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).go);
  bVar9 = System_String__op_Equality(asset,"None",(MethodInfo *)0x0);
  if (bVar9) {
    return;
  }
  __this = (__this_00->fields).go;
  if (__this == (UnityEngine_GameObject_o *)0x0) goto label_05999326;
  array = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                    (__this,(MethodInfo_353C030 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
  if (editor) {
    match = (System_Predicate_T__o *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Renderer);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)match,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_Map_MapLoader_c__DisplayClass80_0_SetMaterial_b__0,
               (MethodInfo_3DC95B0 *)0x0);
    array = System_Array__FindAll_object_
                      (array,match,(MethodInfo_36015D0 *)MethodInfo_System_Array_FindAll_Renderer);
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
  pSVar30 = (System_Object_array *)0x0;
  if ((~visible & editor) != 0) {
    pSVar30 = array;
  }
  bVar9 = visible;
  if ((~visible & editor) == 1) {
    if (asset == (System_String_o *)0x0) goto label_05999326;
    bVar10 = System_String__Contains(asset,"Editor",(MethodInfo *)0x0);
    local_e4 = true;
    bVar9 = true;
    if (bVar10) goto label_05998055;
    if ((TypeInfo_Map_MapAssets->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapAssets);
      if (g_data_075459db == '\0') goto label_05998b9d;
label_05998027:
      uVar4 = (TypeInfo_Map_MapAssets->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (g_data_075459db != '\0') goto label_05998027;
label_05998b9d:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapAssets);
      g_data_075459db = '\x01';
      uVar4 = (TypeInfo_Map_MapAssets->_2).cctor_finished_or_no_cctor;
    }
    if (uVar4 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapAssets);
    }
    bVar10 = System_String__op_Equality
                       (asset,TypeInfo_Map_MapAssets->static_fields->NavMeshRegion,(MethodInfo *)0x0);
    if (bVar10) goto label_05998055;
    if ((TypeInfo_Map_MapAssets->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapAssets);
    }
    bVar9 = System_String__op_Equality
                      (asset,TypeInfo_Map_MapAssets->static_fields->NavMeshObstacle,(MethodInfo *)0x0);
    if (!bVar9) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      material = (Map_MapScriptBaseMaterial_o *)TypeInfo_Map_MapLoader->static_fields->_invisibleMaterial;
    }
  }
  else {
label_05998055:
    local_e4 = bVar9;
    pSVar30 = array;
  }
  if (pSVar30 == (System_Object_array *)0x0) goto label_05999326;
  uVar11 = (uint)pSVar30->max_length;
  if (__this_01 == (System_Collections_Generic_List_Renderer__o *)0x0) {
    if (0 < (int)uVar11) {
      lVar27 = 0;
      do {
        if (uVar11 <= (uint)lVar27) goto label_0599932b;
        if ((UnityEngine_Object_o *)pSVar30->m_Items[lVar27] == (UnityEngine_Object_o *)0x0)
        goto label_05999326;
        pSVar12 = UnityEngine_Object__get_name
                            ((UnityEngine_Object_o *)pSVar30->m_Items[lVar27],(MethodInfo *)0x0);
        bVar9 = System_String__op_Inequality(pSVar12,"OutlineGizmo",(MethodInfo *)0x0);
        if (bVar9) goto label_05999326;
        uVar11 = (uint)pSVar30->max_length;
        lVar27 = lVar27 + 1;
      } while ((int)lVar27 < (int)uVar11);
    }
  }
  else if (0 < (int)uVar11) {
    uVar29 = 0;
    do {
      if (uVar11 <= uVar29) goto label_0599932b;
      pUVar19 = (UnityEngine_Object_o *)pSVar30->m_Items[(int)uVar29];
      if (pUVar19 == (UnityEngine_Object_o *)0x0) goto label_05999326;
      pSVar12 = UnityEngine_Object__get_name(pUVar19,(MethodInfo *)0x0);
      bVar9 = System_String__op_Inequality(pSVar12,"OutlineGizmo",(MethodInfo *)0x0);
      pMVar26 = MethodInfo_System_Collections_Generic_List_Renderer_Add;
      if (bVar9) {
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar5 = (__this_01->fields)._items;
        if (pUVar5 == (UnityEngine_Renderer_array *)0x0) goto label_05999326;
        uVar11 = (__this_01->fields)._size;
        if (uVar11 < (uint)pUVar5->max_length) {
          (__this_01->fields)._size = uVar11 + 1;
          pUVar5->m_Items[(int)uVar11] = (UnityEngine_Renderer_o *)pUVar19;
          Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar11);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pUVar19,
                     (MethodInfo_395D230 *)pMVar26->klass->rgctx_data[0xe].method);
        }
      }
      uVar29 = uVar29 + 1;
      uVar11 = (uint)pSVar30->max_length;
    } while ((int)uVar29 < (int)uVar11);
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Map_MapLoader->static_fields->_assetMaterialCache;
  if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05999326;
  bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar6,(Il2CppObject *)asset,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_ContainsKey);
  if (!bVar9) {
    pSVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar13,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
    if (__this_01 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_05999326;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_d8,
               (System_Collections_Generic_List_object__o *)__this_01,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    local_a8 = local_c8;
    local_b8 = (undefined1  [8])local_d8._0_8_;
    pSStack_b0 = (System_Collections_Generic_List_Enumerator_object__o *)local_d8._8_8_;
    local_d8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_d8._8_8_ = local_b8;
    if (pSVar13 == (System_Collections_Generic_List_Material__o *)0x0) {
      bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_b8,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
      if (bVar9) {
        if (local_a8 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)local_a8,(MethodInfo *)0x0);
label_0599937b:
          ThrowNullReferenceException();
        }
label_05999360:
        ThrowNullReferenceException();
      }
    }
    else {
      while (bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)local_b8,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext),
            bVar9) {
        if (local_a8 == (UnityEngine_Material_o *)0x0) goto label_05999360;
        pUVar14 = UnityEngine_Renderer__get_sharedMaterial
                            ((UnityEngine_Renderer_o *)local_a8,(MethodInfo *)0x0);
        pMVar26 = MethodInfo_System_Collections_Generic_List_Material_Add;
        piVar1 = &(pSVar13->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar7 = (pSVar13->fields)._items;
        if (pUVar7 == (UnityEngine_Material_array *)0x0) goto label_0599937b;
        uVar11 = (pSVar13->fields)._size;
        if (uVar11 < (uint)pUVar7->max_length) {
          (pSVar13->fields)._size = uVar11 + 1;
          pUVar7->m_Items[(int)uVar11] = pUVar14;
          Il2CppCodeGenWriteBarrier(pUVar7->m_Items + (int)uVar11);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar13,(Il2CppObject *)pUVar14,
                     (MethodInfo_395D230 *)pMVar26->klass->rgctx_data[0xe].method);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_b8,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->_assetMaterialCache;
    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05999326;
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar6,(Il2CppObject *)asset,(Il2CppObject *)pSVar13,
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_Add
              );
  }
  if ((Map_MapScriptBasicMaterial_o *)material == (Map_MapScriptBasicMaterial_o *)0x0) goto label_05999326;
  pSVar12 = (((Map_MapScriptBasicMaterial_o *)material)->fields).Shader;
  if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
  }
  bVar9 = System_String__op_Equality
                    (pSVar12,TypeInfo_Map_MapObjectShader->static_fields->Default,(MethodInfo *)0x0);
  if (!bVar9) {
    pSVar12 = (((Map_MapScriptBasicMaterial_o *)material)->fields).Shader;
    if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
    }
    bVar9 = System_String__op_Equality
                      (pSVar12,TypeInfo_Map_MapObjectShader->static_fields->DefaultNoTint,(MethodInfo *)0x0);
    if (!bVar9) {
      pSVar12 = (((Map_MapScriptBasicMaterial_o *)material)->fields).Shader;
      if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
      }
      bVar9 = System_String__op_Equality
                        (pSVar12,TypeInfo_Map_MapObjectShader->static_fields->DefaultTiled,(MethodInfo *)0x0);
      if (!bVar9) {
        pSVar12 = (*(((Map_MapScriptBasicMaterial_o *)material)->klass->vtable)._8_Serialize.methodPtr)
                            (material,(((Map_MapScriptBasicMaterial_o *)material)->klass->vtable)._8_Serialize
                                      .method);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->_customMaterialCache;
        if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05999326;
        bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar6,(Il2CppObject *)pSVar12,
                           (MethodInfo_4AAD6F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
        if (bVar9) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->_customMaterialCache;
          if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05999326;
          pUVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar6,(Il2CppObject *)pSVar12,
                               (MethodInfo_4AAD450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
        }
        else {
          pSVar22 = (((Map_MapScriptBasicMaterial_o *)material)->fields).Shader;
          if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
          }
          bVar9 = Map_MapObjectShader__IsLegacyShader(pSVar22,(MethodInfo *)0x0);
          handle = TypeRef_Map_MapScriptBasicMaterial;
          if (bVar9) {
            pIVar18 = il2cpp_codegen_is_inst_class
                                ((Il2CppObject *)material,(Il2CppClass *)TypeInfo_Map_MapScriptLegacyMaterial)
            ;
            if (pIVar18 == (Il2CppObject *)0x0) goto label_05999326;
            asset_00 = pIVar18[1].klass;
            pMVar26 = extraout_RDX_01;
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              pMVar26 = extraout_RDX_02;
            }
            pUVar19 = Map_MapLoader__LoadAssetCached
                                ("Map/Legacy/Materials",(System_String_o *)asset_00,pMVar26);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            pUVar19 = UnityEngine_Object__Instantiate_69209e0(pUVar19,(MethodInfo *)0x0);
            pUVar14 = (UnityEngine_Material_o *)
                      il2cpp_codegen_is_inst_class
                                ((Il2CppObject *)pUVar19,(Il2CppClass *)TypeInfo_UnityEngine_Material);
            if (pIVar18[1].monitor == (Utility_Color255_o *)0x0) goto label_05999326;
            local_48 = Utility_Color255__ToColor(pIVar18[1].monitor,(MethodInfo *)0x0);
            fVar32 = local_48.fields.b;
            fVar33 = local_48.fields.a;
            uVar31 = il2cpp_runtime_helper_0599ae50(&local_48);
            fVar34 = (float)((ulong)uVar31 >> 0x20);
            fVar32 = fVar32 + fVar32;
            fVar33 = fVar33 + fVar33;
            local_48.fields.g = fVar34 + fVar34;
            local_48.fields.r = (float)uVar31 + (float)uVar31;
            local_48.fields.b = fVar32;
            local_48.fields.a = fVar33;
            uVar31 = il2cpp_runtime_helper_0599aea0(&local_48);
            if (pUVar14 == (UnityEngine_Material_o *)0x0) goto label_05999326;
            fVar34 = 1.0;
            if (fVar33 <= 1.0) {
              fVar34 = fVar33;
            }
            UVar35.fields.a = (float)(-(uint)(0.0 <= fVar33) & (uint)fVar34);
            UVar35.fields.b = fVar32;
            UVar35.fields.r = (float)(int)uVar31;
            UVar35.fields.g = (float)(int)((ulong)uVar31 >> 0x20);
            UnityEngine_Material__set_color(pUVar14,UVar35,(MethodInfo *)0x0);
            UnityEngine_Material__set_mainTextureScale
                      (pUVar14,(UnityEngine_Vector2_o)pIVar18[2].klass,(MethodInfo *)0x0);
          }
          else {
            if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_075567a8);
            }
            pSVar20 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
            pSVar21 = System_Object__GetType((Il2CppObject *)material,(MethodInfo *)0x0);
            if (pSVar20 == (System_Type_o *)0x0) goto label_05999326;
            bVar9 = (*(pSVar20->klass->vtable)._22_IsAssignableFrom.methodPtr)
                              (pSVar20,pSVar21,(pSVar20->klass->vtable)._22_IsAssignableFrom.method);
            if (bVar9) {
              pIVar18 = il2cpp_codegen_is_inst_class
                                  ((Il2CppObject *)material,(Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial
                                  );
              if (pIVar18 == (Il2CppObject *)0x0) goto label_05999326;
              pSVar22 = System_String__Concat_52f0320
                                  ((System_String_o *)pIVar18[1].klass,"Material",(MethodInfo *)0x0
                                  );
              pMVar26 = extraout_RDX_03;
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                pMVar26 = extraout_RDX_04;
              }
              pUVar19 = Map_MapLoader__LoadAssetCached("Map/Materials",pSVar22,pMVar26);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              pUVar19 = UnityEngine_Object__Instantiate_69209e0(pUVar19,(MethodInfo *)0x0);
              pUVar14 = (UnityEngine_Material_o *)
                        il2cpp_codegen_is_inst_class
                                  ((Il2CppObject *)pUVar19,(Il2CppClass *)TypeInfo_UnityEngine_Material);
              bVar9 = System_String__op_Inequality
                                ((System_String_o *)pIVar18[2].klass,"Misc/None",(MethodInfo *)0x0);
              if (bVar9) {
                pIVar28 = pIVar18 + 2;
                bVar9 = System_String__op_Inequality
                                  ((System_String_o *)pIVar28->klass,"None",(MethodInfo *)0x0);
                if (bVar9) {
                  if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
                  }
                  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                           TypeInfo_Map_BuiltinMapTextures->static_fields->AllTextures;
                  if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                  goto label_05999326;
                  bVar9 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                    (pSVar6,(Il2CppObject *)pIVar28->klass,&local_60,
                                     (MethodInfo_4AAF440 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_TryGetValue
                                    );
                  if (bVar9) {
                    if (local_60 == (Il2CppObject *)0x0) goto label_05999326;
                    pIVar28 = local_60 + 2;
                  }
                  if ((pIVar28->klass == (Il2CppClass *)0x0) ||
                     (pSVar23 = System_String__Split
                                          ((System_String_o *)pIVar28->klass,0x2f,0,(MethodInfo *)0x0),
                     pSVar23 == (System_String_array *)0x0)) goto label_05999326;
                  iVar24 = (int)pSVar23->max_length;
                  if (iVar24 < 2) {
                    if (iVar24 == 0) {
label_0599932b:
                      ThrowIndexOutOfRangeException();
                    }
                    ppSVar25 = *(System_String_o ***)(g_data_07556758 + 0xb8);
                  }
                  else {
                    ppSVar25 = pSVar23->m_Items;
                  }
                  local_98 = (System_Collections_Generic_Dictionary_Material__Material__o *)*ppSVar25;
                  pSVar22 = *(System_String_o **)
                             ((long)pSVar23->m_Items +
                             ((long)((pSVar23->max_length << 0x20) + -0x100000000) >> 0x1d));
                  bVar9 = System_String__op_Equality
                                    ((System_String_o *)local_98,"Legacy",(MethodInfo *)0x0);
                  if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
                  }
                  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                           TypeInfo_Map_BuiltinMapTextures->static_fields->AllTextures;
                  if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                  goto label_05999326;
                  bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                     (pSVar6,(Il2CppObject *)pSVar22,
                                      (MethodInfo_4AAD6F0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_ContainsKey
                                     );
                  if (bVar10) {
                    if (bVar9) {
                      if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
                      }
                      pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                               TypeInfo_Map_BuiltinMapTextures->static_fields->LegacyTexturePaths;
                      if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                      goto label_05999326;
                      bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                         (pSVar6,(Il2CppObject *)pSVar22,
                                          (MethodInfo_4AAD6F0 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey
                                         );
                      if (!bVar10) goto label_0599916e;
                    }
                    if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
                    }
                    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                             TypeInfo_Map_BuiltinMapTextures->static_fields->AllTextures;
                    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                    goto label_05999326;
                    local_90 = System_Collections_Generic_Dictionary_object__object___get_Item
                                         (pSVar6,(Il2CppObject *)pSVar22,
                                          (MethodInfo_4AAD450 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Item
                                         );
                    if (bVar9) {
                      if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
                      }
                      pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                               TypeInfo_Map_BuiltinMapTextures->static_fields->LegacyTexturePaths;
                      if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                      goto label_05999326;
                      pSVar22 = System_Collections_Generic_Dictionary_object__object___get_Item
                                          (pSVar6,(Il2CppObject *)pSVar22,
                                           (MethodInfo_4AAD450 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item
                                          );
                      pMVar26 = extraout_RDX_05;
                      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                        pMVar26 = extraout_RDX_06;
                      }
                      path = "Map";
                    }
                    else {
                      path = System_String__Concat_52f0320
                                       ("Map/Textures/",(System_String_o *)local_98,(MethodInfo *)0x0);
                      pSVar22 = System_String__Concat_52f0320(pSVar22,"Texture",(MethodInfo *)0x0)
                      ;
                      pMVar26 = extraout_RDX_07;
                      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                        pMVar26 = extraout_RDX_08;
                      }
                    }
                    value_00 = (UnityEngine_Texture_o *)Map_MapLoader__LoadAssetCached(path,pSVar22,pMVar26);
                    if (value_00 == (UnityEngine_Texture_o *)0x0) {
                      value_00 = (UnityEngine_Texture_o *)0x0;
                    }
                    else if (value_00->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
                      il2cpp_codegen_raise_invalid_cast_exception(value_00);
                    }
                    if ((pUVar14 == (UnityEngine_Material_o *)0x0) ||
                       (UnityEngine_Material__set_mainTexture(pUVar14,value_00,(MethodInfo *)0x0),
                       local_90 == (Map_MapScriptBasicMaterial_o *)0x0)) goto label_05999326;
                    UVar2 = (local_90->fields).Tiling.fields;
                    value.fields.y = UVar2.y * (float)((ulong)pIVar18[2].monitor >> 0x20);
                    value.fields.x = UVar2.x * SUB84(pIVar18[2].monitor,0);
                    UnityEngine_Material__set_mainTextureScale(pUVar14,value,(MethodInfo *)0x0);
                    UnityEngine_Material__set_mainTextureOffset
                              (pUVar14,(UnityEngine_Vector2_o)pIVar18[3].klass,(MethodInfo *)0x0);
                  }
                }
              }
label_0599916e:
              if ((pIVar18[1].monitor == (Utility_Color255_o *)0x0) ||
                 (UVar35 = Utility_Color255__ToColor(pIVar18[1].monitor,(MethodInfo *)0x0),
                 pUVar14 == (UnityEngine_Material_o *)0x0)) goto label_05999326;
              UnityEngine_Material__set_color(pUVar14,UVar35,(MethodInfo *)0x0);
              bVar3 = (TypeInfo_Map_MapScriptReflectiveMaterial->_2).typeHierarchyDepth;
              if ((bVar3 <= (((Map_MapScriptBasicMaterial_o *)material)->klass->_2).typeHierarchyDepth) &&
                 ((((Map_MapScriptBasicMaterial_o *)material)->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
                  (Il2CppClass *)TypeInfo_Map_MapScriptReflectiveMaterial)) {
                pIVar18 = il2cpp_codegen_is_inst_class
                                    ((Il2CppObject *)material,
                                     (Il2CppClass *)TypeInfo_Map_MapScriptReflectiveMaterial);
                if ((pIVar18 == (Il2CppObject *)0x0) || (pIVar18[3].monitor == (Utility_Color255_o *)0x0))
                goto label_05999326;
                UVar35 = Utility_Color255__ToColor(pIVar18[3].monitor,(MethodInfo *)0x0);
                UnityEngine_Material__SetColor(pUVar14,"_SpecularMap",UVar35,(MethodInfo *)0x0);
              }
            }
            else {
              pUVar14 = (UnityEngine_Material_o *)0x0;
            }
          }
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->_customMaterialCache;
          if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05999326;
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar6,(Il2CppObject *)pSVar12,(Il2CppObject *)pUVar14,
                     (MethodInfo_4AAD4E0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Material_Add);
        }
        if (__this_01 != (System_Collections_Generic_List_Renderer__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_d8,
                     (System_Collections_Generic_List_object__o *)__this_01,
                     (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
          local_a8 = local_c8;
          local_b8 = (undefined1  [8])local_d8._0_8_;
          pSStack_b0 = (System_Collections_Generic_List_Enumerator_object__o *)local_d8._8_8_;
          local_d8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_d8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_b8;
          do {
            bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_b8,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
            pUVar16 = local_a8;
            if (!bVar9) {
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_b8,
                         (MethodInfo_4C45C40 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
              return;
            }
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar9 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar9) {
              if (pUVar16 == (UnityEngine_Material_o *)0x0) {
                ThrowNullReferenceException();
              }
              UnityEngine_Renderer__set_sharedMaterial
                        ((UnityEngine_Renderer_o *)pUVar16,pUVar14,(MethodInfo *)0x0);
            }
            else if (pUVar16 == (UnityEngine_Material_o *)0x0) {
              ThrowNullReferenceException();
            }
            UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)pUVar16,local_e4,(MethodInfo *)0x0);
          } while( true );
        }
        goto label_05999326;
      }
    }
  }
  pSVar12 = (*(((Map_MapScriptBasicMaterial_o *)material)->klass->vtable)._8_Serialize.methodPtr)
                      (material,(((Map_MapScriptBasicMaterial_o *)material)->klass->vtable)._8_Serialize.
                                method);
  key = (Map_MapScriptBasicMaterial_o *)System_String__Concat_52f0320(asset,pSVar12,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Map_MapLoader->static_fields->_defaultMaterialCache;
  if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar6,(Il2CppObject *)key,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_ContainsKey);
    if (bVar9) {
label_0599895a:
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_MapLoader->static_fields->_defaultMaterialCache;
      if ((pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (pSVar15 = (System_Collections_Generic_List_object__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar6,(Il2CppObject *)key,
                               (MethodInfo_4AAD450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_get_Item)
         , __this_01 != (System_Collections_Generic_List_Renderer__o *)0x0)) {
        iVar24 = (__this_01->fields)._size;
        if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) {
          if (0 < iVar24) goto label_05999326;
        }
        else if (0 < iVar24) {
          index = 0;
          do {
            if (index < (pSVar15->fields)._size) {
              pUVar14 = System_Collections_Generic_List_object___get_Item
                                  (pSVar15,index,
                                   (MethodInfo_395CF20 *)
                                   MethodInfo_System_Collections_Generic_List_Material_get_Item);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar9 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                );
              if (bVar9) {
                pUVar17 = System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)__this_01,index,
                                     (MethodInfo_395CF20 *)
                                     MethodInfo_System_Collections_Generic_List_Renderer_get_Item);
                pUVar14 = System_Collections_Generic_List_object___get_Item
                                    (pSVar15,index,
                                     (MethodInfo_395CF20 *)
                                     MethodInfo_System_Collections_Generic_List_Material_get_Item);
                if (pUVar17 == (UnityEngine_Renderer_o *)0x0) goto label_05999326;
                UnityEngine_Renderer__set_sharedMaterial(pUVar17,pUVar14,(MethodInfo *)0x0);
              }
            }
            pUVar17 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this_01,index,
                                 (MethodInfo_395CF20 *)
                                 MethodInfo_System_Collections_Generic_List_Renderer_get_Item);
            if (pUVar17 == (UnityEngine_Renderer_o *)0x0) goto label_05999326;
            UnityEngine_Renderer__set_enabled(pUVar17,local_e4,(MethodInfo *)0x0);
            index = index + 1;
          } while (index < (__this_01->fields)._size);
        }
        return;
      }
    }
    else {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_MapLoader->static_fields->_assetMaterialCache;
      if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        local_90 = key;
        pSVar15 = (System_Collections_Generic_List_object__o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar6,(Il2CppObject *)asset,
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_get_Item);
        pSVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)pSVar13,
                   (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
        __this_02 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Material_Material
                              );
        System_Collections_Generic_Dictionary_object__object____ctor
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                   (MethodInfo_4AAC8D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_Material_Material_ctor);
        if (pSVar15 != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_d8,pSVar15,
                     (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
          local_68 = local_c8;
          local_78 = (undefined1  [8])local_d8._0_8_;
          pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)local_d8._8_8_;
          local_d8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_d8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_78;
          local_98 = __this_02;
          do {
            if (pSVar13 == (System_Collections_Generic_List_Material__o *)0x0) {
              bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                                 (MethodInfo_4C45C50 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
              pUVar14 = local_68;
              if (!bVar9) {
label_059988f5:
                System_Collections_Generic_List_Enumerator_object___Dispose
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                           (MethodInfo_4C45C40 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
                key = local_90;
                if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                }
                pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                         TypeInfo_Map_MapLoader->static_fields->_defaultMaterialCache;
                if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
                System_Collections_Generic_Dictionary_object__object___Add
                          (pSVar6,(Il2CppObject *)key,(Il2CppObject *)pSVar13,
                           (MethodInfo_4AAD4E0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_Add);
                goto label_0599895a;
              }
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar9 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                );
              if (bVar9) {
label_05999330:
                ThrowNullReferenceException();
              }
            }
            else {
              while( true ) {
                bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                                   (MethodInfo_4C45C50 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
                pUVar14 = local_68;
                if (!bVar9) goto label_059988f5;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar9 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                pMVar26 = MethodInfo_System_Collections_Generic_List_Material_Add;
                if (!bVar9) break;
                piVar1 = &(pSVar13->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar7 = (pSVar13->fields)._items;
                if (pUVar7 == (UnityEngine_Material_array *)0x0) goto label_05999330;
                uVar11 = (pSVar13->fields)._size;
                if (uVar11 < (uint)pUVar7->max_length) {
                  (pSVar13->fields)._size = uVar11 + 1;
                  pUVar7->m_Items[(int)uVar11] = (UnityEngine_Material_o *)0x0;
                  Il2CppCodeGenWriteBarrier(pUVar7->m_Items + (int)uVar11);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar13,(Il2CppObject *)0x0,
                             (MethodInfo_395D230 *)pMVar26->klass->rgctx_data[0xe].method);
                }
              }
            }
            if (local_98 == (System_Collections_Generic_Dictionary_Material__Material__o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar9 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                              ((System_Collections_Generic_Dictionary_object__object__o *)local_98,
                               (Il2CppObject *)pUVar14,(Il2CppObject **)&local_c0,
                               (MethodInfo_4AAF440 *)
                               MethodInfo_System_Collections_Generic_Dictionary_Material_Material_TryGetValue)
            ;
            if (!bVar9) {
              pUVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
              UnityEngine_Material___ctor_68dcfd0(pUVar16,pUVar14,(MethodInfo *)0x0);
              pSVar12 = (((Map_MapScriptBasicMaterial_o *)material)->fields).Shader;
              local_c0 = pUVar16;
              if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
              }
              pMVar26 = (MethodInfo *)TypeInfo_Map_MapObjectShader->static_fields->DefaultNoTint;
              bVar9 = System_String__op_Inequality(pSVar12,(System_String_o *)pMVar26,(MethodInfo *)0x0);
              pUVar16 = local_c0;
              if (bVar9) {
                if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                }
                bVar9 = Map_MapLoader__IsParticleMaterial(pUVar14,pMVar26);
                if (bVar9) {
                  if (pUVar14 == (UnityEngine_Material_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  UVar35 = UnityEngine_Material__get_color(pUVar14,(MethodInfo *)0x0);
                  fStack_80 = (float)extraout_XMM0_Dc;
                  local_88 = (undefined1  [8])UVar35.fields._0_8_;
                  fStack_7c = (float)extraout_XMM0_Dd;
                  fStack_50 = in_XMM1_Dc;
                  local_58 = (undefined1  [8])UVar35.fields._8_8_;
                  fStack_4c = in_XMM1_Dd;
                  pUVar8 = (((Map_MapScriptBasicMaterial_o *)material)->fields).Color;
                  if (pUVar8 == (Utility_Color255_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  UVar35 = Utility_Color255__ToColor(pUVar8,(MethodInfo *)0x0);
                  local_88._4_4_ = (float)local_88._4_4_ * UVar35.fields.g;
                  local_88._0_4_ = (float)local_88._0_4_ * UVar35.fields.r;
                  fStack_80 = fStack_80 * extraout_XMM0_Dc_00;
                  fStack_7c = fStack_7c * extraout_XMM0_Dd_00;
                  local_58._4_4_ = (float)local_58._4_4_ * UVar35.fields.a;
                  local_58._0_4_ = (float)local_58._0_4_ * UVar35.fields.b;
                  fStack_50 = fStack_50 * in_XMM1_Dc;
                  fStack_4c = fStack_4c * in_XMM1_Dd;
                }
                else {
                  pUVar8 = (((Map_MapScriptBasicMaterial_o *)material)->fields).Color;
                  if (pUVar8 == (Utility_Color255_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  UVar35 = Utility_Color255__ToColor(pUVar8,(MethodInfo *)0x0);
                  fStack_80 = (float)extraout_XMM0_Dc_01;
                  local_88 = (undefined1  [8])UVar35.fields._0_8_;
                  fStack_7c = (float)extraout_XMM0_Dd_01;
                  fStack_50 = in_XMM1_Dc;
                  local_58 = (undefined1  [8])UVar35.fields._8_8_;
                  fStack_4c = in_XMM1_Dd;
                }
                if (pUVar16 == (UnityEngine_Material_o *)0x0) {
                  ThrowNullReferenceException();
                }
                in_XMM1_Dc = local_58._8_4_;
                in_XMM1_Dd = local_58._12_4_;
                value_01.fields.b = (float)local_58._0_4_;
                value_01.fields.a = (float)local_58._4_4_;
                value_01.fields.r = (float)local_88._0_4_;
                value_01.fields.g = (float)local_88._4_4_;
                UnityEngine_Material__set_color(pUVar16,value_01,(MethodInfo *)0x0);
              }
              pSVar12 = (((Map_MapScriptBasicMaterial_o *)material)->fields).Shader;
              if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
              }
              bVar9 = System_String__op_Equality
                                (pSVar12,TypeInfo_Map_MapObjectShader->static_fields->DefaultTiled,
                                 (MethodInfo *)0x0);
              pUVar16 = local_c0;
              if (bVar9) {
                bVar3 = (TypeInfo_Map_MapScriptDefaultTiledMaterial->_2).typeHierarchyDepth;
                if (((((Map_MapScriptBasicMaterial_o *)material)->klass->_2).typeHierarchyDepth < bVar3) ||
                   ((((Map_MapScriptBasicMaterial_o *)material)->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
                    (Il2CppClass *)TypeInfo_Map_MapScriptDefaultTiledMaterial)) {
                  il2cpp_codegen_raise_invalid_cast_exception(material);
                }
                _fStack_80 = 0;
                local_88 = (undefined1  [8])(((Map_MapScriptBasicMaterial_o *)material)->fields).Texture;
                pMVar26 = extraout_RDX;
                if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                  pMVar26 = extraout_RDX_00;
                }
                Map_MapLoader__SetDefaultTiling(asset,pUVar16,(UnityEngine_Vector2_o)local_88,pMVar26);
              }
              System_Collections_Generic_Dictionary_object__object___Add
                        ((System_Collections_Generic_Dictionary_object__object__o *)local_98,
                         (Il2CppObject *)pUVar14,(Il2CppObject *)local_c0,
                         (MethodInfo_4AAD4E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Material_Material_Add);
            }
            pMVar26 = MethodInfo_System_Collections_Generic_List_Material_Add;
            if (pSVar13 == (System_Collections_Generic_List_Material__o *)0x0) {
label_0599933f:
              ThrowNullReferenceException();
            }
            piVar1 = &(pSVar13->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar7 = (pSVar13->fields)._items;
            if (pUVar7 == (UnityEngine_Material_array *)0x0) goto label_0599933f;
            uVar11 = (pSVar13->fields)._size;
            if (uVar11 < (uint)pUVar7->max_length) {
              (pSVar13->fields)._size = uVar11 + 1;
              pUVar7->m_Items[(int)uVar11] = local_c0;
              Il2CppCodeGenWriteBarrier(pUVar7->m_Items + (int)uVar11);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar13,(Il2CppObject *)local_c0,
                         (MethodInfo_395D230 *)pMVar26->klass->rgctx_data[0xe].method);
            }
          } while( true );
        }
      }
    }
  }
label_05999326:
  ThrowNullReferenceException();
}


// Map.MapLoader$$SetPhysics
// il2cpp: int32_t Map_MapLoader__SetPhysics (UnityEngine_GameObject_o* go, System_String_o* collideMode, System_String_o* collideWith, System_String_o* physicsMaterial, const MethodInfo* method);
// 0x59968b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5996b2b: jmp 0x59969c2

int32_t Map_MapLoader__SetPhysics
                  (UnityEngine_GameObject_o *go,System_String_o *collideMode,System_String_o *collideWith,
                  System_String_o *physicsMaterial,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UnityEngine_Component_o *__this;
  bool bVar3;
  int32_t value;
  int iVar4;
  UnityEngine_Object_o *x;
  System_Object_array *pSVar5;
  il2cpp_array_size_t iVar6;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  uint uVar7;
  UnityEngine_PhysicsMaterial_c *pUVar8;
  
  if (Il2CppMethodInitialized_07545a59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_PhysicsMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&"Physics");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_07545a59 = '\x01';
  }
  x = (UnityEngine_Object_o *)0x0;
  pUVar8 = (UnityEngine_PhysicsMaterial_c *)"Default";
  bVar3 = System_String__op_Inequality(physicsMaterial,"Default",(MethodInfo *)0x0);
  if (bVar3) {
    method_00 = extraout_RDX;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      method_00 = extraout_RDX_00;
    }
    x = Map_MapLoader__LoadAssetCached("Physics",physicsMaterial,method_00);
    if (x == (UnityEngine_Object_o *)0x0) {
      x = (UnityEngine_Object_o *)0x0;
      uVar2 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
      goto joined_r0x059969c0;
    }
    bVar1 = (TypeInfo_UnityEngine_PhysicsMaterial->_2).typeHierarchyDepth;
    if (((x->klass->_2).typeHierarchyDepth < bVar1) ||
       (pUVar8 = TypeInfo_UnityEngine_PhysicsMaterial,
       (x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_PhysicsMaterial))
    {
      il2cpp_codegen_raise_invalid_cast_exception(x);
    }
  }
  uVar2 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  physicsMaterial = (System_String_o *)pUVar8;
joined_r0x059969c0:
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  value = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)physicsMaterial);
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                       (go,(MethodInfo_353C030 *)
                           MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    UnityEngine_GameObject__set_layer(go,value,(MethodInfo *)0x0);
    if (pSVar5 != (System_Object_array *)0x0) {
      iVar6 = pSVar5->max_length;
      iVar4 = (int)iVar6;
      if (0 < iVar4) {
        uVar7 = 0;
        do {
          if ((uint)iVar6 <= uVar7) {
            ThrowIndexOutOfRangeException();
          }
          __this = (UnityEngine_Component_o *)pSVar5->m_Items[(int)uVar7];
          if ((__this == (UnityEngine_Component_o *)0x0) ||
             (__this_00 = UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0),
             __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_05996b30;
          UnityEngine_GameObject__set_layer(__this_00,value,(MethodInfo *)0x0);
          if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
          }
          bVar3 = System_String__op_Equality
                            (collideMode,TypeInfo_Map_MapObjectCollideMode->static_fields->Region,
                             (MethodInfo *)0x0);
          UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)__this,bVar3,(MethodInfo *)0x0);
          bVar3 = System_String__op_Inequality
                            (collideMode,TypeInfo_Map_MapObjectCollideMode->static_fields->None,
                             (MethodInfo *)0x0);
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)__this,bVar3,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) {
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)__this,(UnityEngine_PhysicsMaterial_o *)x,(MethodInfo *)0x0);
          }
          uVar7 = uVar7 + 1;
          iVar6 = pSVar5->max_length;
          iVar4 = (int)iVar6;
        } while ((int)uVar7 < iVar4);
      }
      return iVar4;
    }
  }
label_05996b30:
  ThrowNullReferenceException();
}


// Map.MapLoader$$SetCollider
// il2cpp: void Map_MapLoader__SetCollider (UnityEngine_Collider_o* c, System_String_o* collideMode, System_String_o* collideWith, const MethodInfo* method);
// 0x599a2b0

void Map_MapLoader__SetCollider
               (UnityEngine_Collider_o *c,System_String_o *collideMode,System_String_o *collideWith,
               MethodInfo *method)

{
  bool bVar1;
  int32_t value;
  UnityEngine_GameObject_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545a5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    Il2CppMethodInitialized_07545a5a = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
  }
  bVar1 = System_String__op_Equality
                    (collideMode,TypeInfo_Map_MapObjectCollideMode->static_fields->Region,(MethodInfo *)0x0);
  if (c != (UnityEngine_Collider_o *)0x0) {
    UnityEngine_Collider__set_isTrigger(c,bVar1,(MethodInfo *)0x0);
    bVar1 = System_String__op_Inequality
                      (collideMode,TypeInfo_Map_MapObjectCollideMode->static_fields->None,(MethodInfo *)0x0);
    UnityEngine_Collider__set_enabled(c,bVar1,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)c,(MethodInfo *)0x0);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    value = Map_MapLoader__GetColliderLayer(collideWith,method_00);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__set_layer(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$GetColliderCollideWith
// il2cpp: System_String_o* Map_MapLoader__GetColliderCollideWith (UnityEngine_Collider_o* c, const MethodInfo* method);
// 0x599a3b0

System_String_o * Map_MapLoader__GetColliderCollideWith(UnityEngine_Collider_o *c,MethodInfo *method)

{
  uint32_t uVar1;
  int32_t iVar2;
  UnityEngine_GameObject_o *__this;
  Utility_PhysicsLayer_StaticFields *pUVar3;
  Map_MapObjectCollideWith_StaticFields *pMVar4;
  
  if (Il2CppMethodInitialized_07545a5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_07545a5b = '\x01';
  }
  if (c == (UnityEngine_Collider_o *)0x0) {
label_0599a6c9:
    ThrowNullReferenceException();
  }
  __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)c,(MethodInfo *)0x0);
  if (__this == (UnityEngine_GameObject_o *)0x0) goto label_0599a6c9;
  iVar2 = UnityEngine_GameObject__get_layer(__this,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    pUVar3 = TypeInfo_Utility_PhysicsLayer->static_fields;
    if (iVar2 != pUVar3->MapObjectAll) goto label_0599a461;
label_0599a426:
    if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    }
  }
  else {
    pUVar3 = TypeInfo_Utility_PhysicsLayer->static_fields;
    if (iVar2 == pUVar3->MapObjectAll) goto label_0599a426;
label_0599a461:
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      pUVar3 = TypeInfo_Utility_PhysicsLayer->static_fields;
      if (iVar2 != pUVar3->MapObjectMapObjects) goto label_0599a4ae;
label_0599a46f:
      if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
      }
      pMVar4 = (Map_MapObjectCollideWith_StaticFields *)
               &TypeInfo_Map_MapObjectCollideWith->static_fields->MapObjects;
      goto label_0599a6a9;
    }
    if (iVar2 == pUVar3->MapObjectMapObjects) goto label_0599a46f;
label_0599a4ae:
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      pUVar3 = TypeInfo_Utility_PhysicsLayer->static_fields;
      if (iVar2 != pUVar3->MapObjectCharacters) goto label_0599a4fb;
label_0599a4bc:
      if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
      }
      pMVar4 = (Map_MapObjectCollideWith_StaticFields *)
               &TypeInfo_Map_MapObjectCollideWith->static_fields->Characters;
      goto label_0599a6a9;
    }
    if (iVar2 == pUVar3->MapObjectCharacters) goto label_0599a4bc;
label_0599a4fb:
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      pUVar3 = TypeInfo_Utility_PhysicsLayer->static_fields;
      if (iVar2 != pUVar3->MapObjectTitans) goto label_0599a548;
label_0599a509:
      if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
      }
      pMVar4 = (Map_MapObjectCollideWith_StaticFields *)
               &TypeInfo_Map_MapObjectCollideWith->static_fields->Titans;
      goto label_0599a6a9;
    }
    if (iVar2 == pUVar3->MapObjectTitans) goto label_0599a509;
label_0599a548:
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      pUVar3 = TypeInfo_Utility_PhysicsLayer->static_fields;
    }
    if (iVar2 == pUVar3->MapObjectHumans) {
      if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
      }
      pMVar4 = (Map_MapObjectCollideWith_StaticFields *)
               &TypeInfo_Map_MapObjectCollideWith->static_fields->Humans;
      goto label_0599a6a9;
    }
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      pUVar3 = TypeInfo_Utility_PhysicsLayer->static_fields;
    }
    if (iVar2 == pUVar3->MapObjectProjectiles) {
      if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
      }
      pMVar4 = (Map_MapObjectCollideWith_StaticFields *)
               &TypeInfo_Map_MapObjectCollideWith->static_fields->Projectiles;
      goto label_0599a6a9;
    }
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      pUVar3 = TypeInfo_Utility_PhysicsLayer->static_fields;
    }
    if (iVar2 == pUVar3->MapObjectEntities) {
      if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
      }
      pMVar4 = (Map_MapObjectCollideWith_StaticFields *)
               &TypeInfo_Map_MapObjectCollideWith->static_fields->Entities;
      goto label_0599a6a9;
    }
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      pUVar3 = TypeInfo_Utility_PhysicsLayer->static_fields;
    }
    if (iVar2 == pUVar3->MapEditorObject) {
      if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
      }
      pMVar4 = (Map_MapObjectCollideWith_StaticFields *)
               &TypeInfo_Map_MapObjectCollideWith->static_fields->MapEditor;
      goto label_0599a6a9;
    }
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      pUVar3 = TypeInfo_Utility_PhysicsLayer->static_fields;
    }
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
    if (iVar2 == pUVar3->Hurtbox) {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
      }
      pMVar4 = (Map_MapObjectCollideWith_StaticFields *)
               &TypeInfo_Map_MapObjectCollideWith->static_fields->Hitboxes;
      goto label_0599a6a9;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    }
  }
  pMVar4 = TypeInfo_Map_MapObjectCollideWith->static_fields;
label_0599a6a9:
  return pMVar4->All;
}


// Map.MapLoader$$GetColliderLayer
// il2cpp: int32_t Map_MapLoader__GetColliderLayer (System_String_o* collideWith, const MethodInfo* method);
// 0x5999f60

int32_t Map_MapLoader__GetColliderLayer(System_String_o *collideWith,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_07545a5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_07545a5c = '\x01';
  }
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  bVar1 = System_String__op_Equality
                    (collideWith,TypeInfo_Map_MapObjectCollideWith->static_fields->All,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    iVar2 = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll;
  }
  else {
    if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    }
    bVar1 = System_String__op_Equality
                      (collideWith,TypeInfo_Map_MapObjectCollideWith->static_fields->MapObjects,
                       (MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      }
      iVar2 = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectMapObjects;
    }
    else {
      if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
      }
      bVar1 = System_String__op_Equality
                        (collideWith,TypeInfo_Map_MapObjectCollideWith->static_fields->Characters,
                         (MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
        }
        iVar2 = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectCharacters;
      }
      else {
        if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
        }
        bVar1 = System_String__op_Equality
                          (collideWith,TypeInfo_Map_MapObjectCollideWith->static_fields->Titans,
                           (MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
          }
          iVar2 = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectTitans;
        }
        else {
          if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
          }
          bVar1 = System_String__op_Equality
                            (collideWith,TypeInfo_Map_MapObjectCollideWith->static_fields->Humans,
                             (MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
            }
            iVar2 = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectHumans;
          }
          else {
            if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
            }
            bVar1 = System_String__op_Equality
                              (collideWith,TypeInfo_Map_MapObjectCollideWith->static_fields->Projectiles,
                               (MethodInfo *)0x0);
            if (bVar1) {
              if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
              }
              iVar2 = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectProjectiles;
            }
            else {
              if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
              }
              bVar1 = System_String__op_Equality
                                (collideWith,TypeInfo_Map_MapObjectCollideWith->static_fields->Entities,
                                 (MethodInfo *)0x0);
              if (bVar1) {
                if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
                }
                iVar2 = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities;
              }
              else {
                if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
                }
                bVar1 = System_String__op_Equality
                                  (collideWith,TypeInfo_Map_MapObjectCollideWith->static_fields->MapEditor,
                                   (MethodInfo *)0x0);
                if (bVar1) {
                  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
                  }
                  iVar2 = TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorObject;
                }
                else {
                  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
                  }
                  iVar2 = 0;
                  bVar1 = System_String__op_Equality
                                    (collideWith,TypeInfo_Map_MapObjectCollideWith->static_fields->Hitboxes,
                                     (MethodInfo *)0x0);
                  if (bVar1) {
                    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
                    }
                    iVar2 = TypeInfo_Utility_PhysicsLayer->static_fields->Hurtbox;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar2;
}


// Map.MapLoader$$LoadAssetCached
// il2cpp: UnityEngine_Object_o* Map_MapLoader__LoadAssetCached (System_String_o* path, System_String_o* asset, const MethodInfo* method);
// 0x5999de0

UnityEngine_Object_o *
Map_MapLoader__LoadAssetCached(System_String_o *path,System_String_o *asset,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_String_o *key;
  UnityEngine_Object_o *pUVar3;
  
  if (Il2CppMethodInitialized_07545a5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_07545a5d = '\x01';
  }
  key = System_String__Concat_5301f10(path,"/",asset,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Map_MapLoader->static_fields->_assetCache;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)key,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Object_ContainsKey);
    if (!bVar2) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_MapLoader->static_fields->_assetCache;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar3 = ApplicationManagers_ResourceManager__LoadAsset(path,asset,false,false,(MethodInfo *)0x0);
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05999f51;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)key,(Il2CppObject *)pUVar3,
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Object_Add);
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->_assetCache;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)key,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_Object_get_Item);
      return pUVar3;
    }
  }
label_05999f51:
  ThrowNullReferenceException();
}


// Map.MapLoader$$LoadPrefabCached
// il2cpp: UnityEngine_GameObject_o* Map_MapLoader__LoadPrefabCached (System_String_o* asset, const MethodInfo* method);
// 0x5996320
// eh: try 0x59963fc..0x59966bc -> pad 0x59966e0 (+24 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x59966fb..0x599688c -> pad 0x599688c (+1 call sites) cleanup
// eh: try 0x599688f..0x5996894 -> pad 0x599689c catch (...) [compiler noexcept guard]
// asm: 124 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59966bc: jmp 0x59966e4
// asm:   0x59966be: jmp 0x59966e4
// asm:   0x59966c0: jmp 0x59966e4
// asm:   0x59966c2: jmp 0x59966e4
// asm:   0x59966c4: jmp 0x59966e4
// asm:   0x59966c6: jmp 0x59966e4
// asm:   0x59966c8: jmp 0x59966e4
// asm:   0x59966ca: jmp 0x59966e4
// asm:   0x59966cc: jmp 0x59966e4
// asm:   0x59966ce: jmp 0x59966e4
// asm:   0x59966d0: jmp 0x59966e4
// asm:   0x59966d2: jmp 0x59966e4
// asm:   0x59966d4: jmp 0x59966e4
// asm:   0x59966d6: jmp 0x59966e4
// asm:   0x59966d8: jmp 0x59966e4
// asm:   0x59966da: jmp 0x59966e4
// asm:   0x59966dc: jmp 0x59966e4
// asm:   0x59966de: jmp 0x59966e4
// asm:   0x59966e0: jmp 0x59966e4
// asm:   0x59966e2: jmp 0x59966e4
// asm:   0x59966e4: mov r14, rax
// asm:   0x59966e7: cmp edx, 1
// asm:   0x59966ea: jne 0x5996894
// asm:   0x59966f0: mov rdi, r14
// asm:   0x59966f3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59966f8: mov rbx, rax
// asm:   0x59966fb: lea rdi, [rip + 0x18e19be]  ; TypeInfo_System_Exception
// asm:   0x5996702: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5996707: mov rcx, qword ptr [rbx]
// asm:   0x599670a: mov rsi, qword ptr [rcx]
// asm:   0x599670d: mov rdi, rax
// asm:   0x5996710: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5996715: test al, al
// asm:   0x5996717: je 0x599686b
// asm:   0x599671d: mov r14, qword ptr [rbx]
// asm:   0x5996720: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5996725: test r14, r14
// asm:   0x5996728: je 0x5996866
// asm:   0x599672e: mov rax, qword ptr [r14]
// asm:   0x5996731: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5996738: mov rdi, r14
// asm:   0x599673b: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5996741: mov r12, rax
// asm:   0x5996744: lea rdi, [rip + 0x194548d]  ; "Failed to load asset: "
// asm:   0x599674b: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5996750: mov rbx, rax
// asm:   0x5996753: lea rdi, [rip + 0x1939d2e]  ; ", "
// asm:   0x599675a: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x599675f: mov rdi, rbx
// asm:   0x5996762: mov rsi, r15
// asm:   0x5996765: mov rdx, rax
// asm:   0x5996768: mov rcx, r12
// asm:   0x599676b: xor r8d, r8d
// asm:   0x599676e: call 0x5402810  ; System_String__Concat()
// asm:   0x5996773: mov rbx, rax
// asm:   0x5996776: lea rdi, [rip + 0x18e0ee3]  ; TypeInfo_ApplicationManagers_DebugConsole
// asm:   0x599677d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5996782: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5996789: jne 0x5996793
// asm:   0x599678b: mov rdi, rax
// asm:   0x599678e: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5996793: mov rdi, rbx
// asm:   0x5996796: mov esi, 1
// asm:   0x599679b: xor edx, edx
// asm:   0x599679d: call 0x5e0fa90  ; ApplicationManagers_DebugConsole__Log()
// asm:   0x59967a2: lea rdi, [rip + 0x18e41e7]  ; TypeInfo_Map_MapLoader
// asm:   0x59967a9: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59967ae: cmp dword ptr [rax + 0xe4], 0
// asm:   0x59967b5: jne 0x59967bf
// asm:   0x59967b7: mov rdi, rax
// asm:   0x59967ba: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x59967bf: lea rdi, [rip + 0x18e41ca]  ; TypeInfo_Map_MapLoader
// asm:   0x59967c6: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59967cb: mov rax, qword ptr [rax + 0xb8]
// asm:   0x59967d2: mov r12, qword ptr [rax + 0x80]
// asm:   0x59967d9: mov rax, qword ptr [r14]
// asm:   0x59967dc: mov rsi, qword ptr [rax + 0x190]
// asm:   0x59967e3: mov rdi, r14
// asm:   0x59967e6: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x59967ec: mov r14, rax
// asm:   0x59967ef: lea rdi, [rip + 0x19453e2]  ; "Failed to load asset: "
// asm:   0x59967f6: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59967fb: mov rbx, rax
// asm:   0x59967fe: lea rdi, [rip + 0x1939c83]  ; ", "
// asm:   0x5996805: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x599680a: mov rdi, rbx
// asm:   0x599680d: mov rsi, r15
// asm:   0x5996810: mov rdx, rax
// asm:   0x5996813: mov rcx, r14
// asm:   0x5996816: xor r8d, r8d
// asm:   0x5996819: call 0x5402810  ; System_String__Concat()
// asm:   0x599681e: test r12, r12
// asm:   0x5996821: je 0x5996866
// asm:   0x5996823: mov rbx, rax
// asm:   0x5996826: lea rdi, [rip + 0x190012b]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x599682d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5996832: mov rdi, r12
// asm:   0x5996835: mov rsi, rbx
// asm:   0x5996838: mov rdx, rax
// asm:   0x599683b: call 0x2fa8fa0  ; il2cpp_runtime_helper_02fa8fa0()
// asm:   0x5996840: lea rdi, [rip + 0x18e1e79]  ; TypeInfo_UnityEngine_GameObject
// asm:   0x5996847: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x599684c: mov rdi, rax
// asm:   0x599684f: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5996854: mov rbx, rax
// asm:   0x5996857: mov rdi, rax
// asm:   0x599685a: xor esi, esi
// asm:   0x599685c: call 0x6a1aa10  ; UnityEngine_GameObject___ctor()
// asm:   0x5996861: jmp 0x5996678
// asm:   0x5996866: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x599686b: mov edi, 8
// asm:   0x5996870: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5996875: mov rcx, qword ptr [rbx]
// asm:   0x5996878: mov qword ptr [rax], rcx
// asm:   0x599687b: lea rsi, [rip + 0x1496c7e]
// asm:   0x5996882: mov rdi, rax
// asm:   0x5996885: xor edx, edx
// asm:   0x5996887: call 0x6e255c0  ; __cxa_throw()
// asm:   0x599688c: mov r14, rax
// asm:   0x599688f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5996894: mov rdi, r14
// asm:   0x5996897: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x599689c: mov rdi, rax
// asm:   0x599689f: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_GameObject_o * Map_MapLoader__LoadPrefabCached(System_String_o *asset,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  System_String_array *pSVar4;
  System_String_o *name;
  UnityEngine_Object_o *pUVar5;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_07545a5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"Map");
    il2cpp_codegen_initialize_runtime_metadata(&"/Prefabs/");
    il2cpp_codegen_initialize_runtime_metadata(&"Arenas/CaveMap1");
    Il2CppMethodInitialized_07545a5e = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Map_MapLoader->static_fields->_assetCache;
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar2,(Il2CppObject *)asset,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Object_ContainsKey);
  if (!bVar3) {
    if (asset == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar4 = System_String__Split_5305be0(asset,"/",0,(MethodInfo *)0x0);
    if (pSVar4 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)pSVar4->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    bVar3 = System_String__op_Equality(pSVar4->m_Items[0],"Custom",(MethodInfo *)0x0);
    if (bVar3) {
      if ((pSVar4->max_length & 0xfffffffe) == 0) {
        ThrowIndexOutOfRangeException();
      }
      pSVar6 = pSVar4->m_Items[1];
      if (pSVar6 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      name = System_String__Substring(asset,(pSVar6->fields)._stringLength + 8,(MethodInfo *)0x0);
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_MapLoader->static_fields->_assetCache;
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      pUVar5 = ApplicationManagers_AssetBundleManager__LoadAsset(pSVar6,name,(MethodInfo *)0x0);
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar2,(Il2CppObject *)asset,(Il2CppObject *)pUVar5,
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Object_Add);
    }
    else {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      iVar1 = (int)pSVar4->max_length;
      if (iVar1 == 1) {
        ThrowIndexOutOfRangeException();
      }
      if (iVar1 == 0) {
        ThrowIndexOutOfRangeException();
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_MapLoader->static_fields->_assetCache;
      pSVar6 = System_String__Concat_5301f10
                         (pSVar4->m_Items[0],"/Prefabs/",pSVar4->m_Items[1],(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar5 = ApplicationManagers_ResourceManager__LoadAsset
                         ("Map",pSVar6,false,false,(MethodInfo *)0x0);
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar2,(Il2CppObject *)asset,(Il2CppObject *)pUVar5,
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Object_Add);
    }
    bVar3 = System_String__op_Equality(asset,"Arenas/CaveMap1",(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      }
      Weather_WeatherManager__EnableCaveMap((MethodInfo *)0x0);
    }
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Map_MapLoader->static_fields->_assetCache;
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                     (pSVar2,(Il2CppObject *)asset,
                      (MethodInfo_4AAD450 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_Object_get_Item);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar5 = UnityEngine_Object__Instantiate_69209e0(pUVar5,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_Object_o *)0x0) {
    pUVar5 = (UnityEngine_Object_o *)0x0;
  }
  else if (pUVar5->klass != (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
    il2cpp_codegen_raise_invalid_cast_exception(pUVar5);
  }
  return (UnityEngine_GameObject_o *)pUVar5;
}


// Map.MapLoader$$.ctor
// il2cpp: void Map_MapLoader___ctor (Map_MapLoader_o* __this, const MethodInfo* method);
// 0x599a6d0

void Map_MapLoader___ctor(Map_MapLoader_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader$$.cctor
// il2cpp: void Map_MapLoader___cctor (const MethodInfo* method);
// 0x599a6e0

void Map_MapLoader___cctor(MethodInfo *method)

{
  Map_MapLoader_StaticFields *pMVar1;
  System_Collections_Generic_Dictionary_int__MapObject__o *__this;
  System_Collections_Generic_Dictionary_int__HashSet_int___o *__this_00;
  System_Collections_Generic_List_int__o *__this_01;
  System_Collections_Generic_Dictionary_GameObject__MapObject__o *__this_02;
  System_Collections_Generic_Dictionary_string__List_MapObject___o *__this_03;
  System_Collections_Generic_Dictionary_MapObject__HashSet_string___o *__this_04;
  System_Collections_Generic_List_Light__o *__this_05;
  System_Collections_Generic_List_MapLight__o *__this_06;
  System_Collections_Generic_List_MapTargetable__o *__this_07;
  System_Collections_Generic_Dictionary_string__Object__o *__this_08;
  System_Collections_Generic_Dictionary_string__List_Material___o *pSVar2;
  System_Collections_Generic_Dictionary_string__Material__o *__this_09;
  System_Collections_Generic_List_string__o *__this_10;
  System_Collections_Generic_List_NavMeshBuildSource__o *__this_11;
  System_Collections_Generic_List_Bounds__o *__this_12;
  System_Collections_Generic_List_MapLoader_NavMeshBuild__o *__this_13;
  
  if (Il2CppMethodInitialized_07545a5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_MapObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Material);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_List_Material);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_int_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_List_MapObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_GameObject_MapObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapLoader_NavMeshBuild_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Light_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Bounds_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapTargetable_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_NavMeshBuildSource_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapLight_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapLight);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_MapLoader_NavMeshBuild);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Bounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_NavMeshBuildSource);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Light);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapTargetable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a5f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_MapObject);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_int__object__o *)__this,
             (MethodInfo_4A0EB10 *)MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ctor);
  TypeInfo_Map_MapLoader->static_fields->IdToMapObject = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->IdToMapObject);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_HashSet_int);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_int__object__o *)__this_00,
             (MethodInfo_4A0EB10 *)MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ctor);
  pMVar1 = TypeInfo_Map_MapLoader->static_fields;
  pMVar1->IdToChildren = __this_00;
  Il2CppCodeGenWriteBarrier(&pMVar1->IdToChildren);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (__this_01,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  pMVar1 = TypeInfo_Map_MapLoader->static_fields;
  pMVar1->ObjectOrder = __this_01;
  Il2CppCodeGenWriteBarrier(&pMVar1->ObjectOrder);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_GameObject_MapObject);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ctor)
  ;
  pMVar1 = TypeInfo_Map_MapLoader->static_fields;
  pMVar1->GoToMapObject = __this_02;
  Il2CppCodeGenWriteBarrier(&pMVar1->GoToMapObject);
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_List_MapObject);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_ctor
            );
  pMVar1 = TypeInfo_Map_MapLoader->static_fields;
  pMVar1->Tags = __this_03;
  Il2CppCodeGenWriteBarrier(&pMVar1->Tags);
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_04,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_ctor);
  pMVar1 = TypeInfo_Map_MapLoader->static_fields;
  pMVar1->MapObjectToTags = __this_04;
  Il2CppCodeGenWriteBarrier(&pMVar1->MapObjectToTags);
  __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Light);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_05,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Light_ctor);
  pMVar1 = TypeInfo_Map_MapLoader->static_fields;
  pMVar1->Daylight = __this_05;
  Il2CppCodeGenWriteBarrier(&pMVar1->Daylight);
  __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapLight);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_06,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MapLight_ctor);
  pMVar1 = TypeInfo_Map_MapLoader->static_fields;
  pMVar1->MapLights = __this_06;
  Il2CppCodeGenWriteBarrier(&pMVar1->MapLights);
  __this_07 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapTargetable)
  ;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_07,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MapTargetable_ctor);
  pMVar1 = TypeInfo_Map_MapLoader->static_fields;
  pMVar1->MapTargetables = __this_07;
  Il2CppCodeGenWriteBarrier(&pMVar1->MapTargetables);
  __this_08 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_08,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Object_ctor);
  pMVar1 = TypeInfo_Map_MapLoader->static_fields;
  pMVar1->_assetCache = __this_08;
  Il2CppCodeGenWriteBarrier(&pMVar1->_assetCache);
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_List_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar2,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_ctor)
  ;
  pMVar1 = TypeInfo_Map_MapLoader->static_fields;
  pMVar1->_assetMaterialCache = pSVar2;
  Il2CppCodeGenWriteBarrier(&pMVar1->_assetMaterialCache);
  pSVar2 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_List_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSVar2,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_ctor)
  ;
  pMVar1 = TypeInfo_Map_MapLoader->static_fields;
  pMVar1->_defaultMaterialCache = pSVar2;
  Il2CppCodeGenWriteBarrier(&pMVar1->_defaultMaterialCache);
  __this_09 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_09,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
  pMVar1 = TypeInfo_Map_MapLoader->static_fields;
  pMVar1->_customMaterialCache = __this_09;
  Il2CppCodeGenWriteBarrier(&pMVar1->_customMaterialCache);
  __this_10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_10,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pMVar1 = TypeInfo_Map_MapLoader->static_fields;
  pMVar1->Errors = __this_10;
  Il2CppCodeGenWriteBarrier(&pMVar1->Errors);
  __this_11 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_NavMeshBuildSource);
  System_Collections_Generic_List_NavMeshBuildSource____ctor
            (__this_11,
             (MethodInfo_3958880 *)MethodInfo_System_Collections_Generic_List_NavMeshBuildSource_ctor);
  pMVar1 = TypeInfo_Map_MapLoader->static_fields;
  pMVar1->_navMeshSources = __this_11;
  Il2CppCodeGenWriteBarrier(&pMVar1->_navMeshSources);
  __this_12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Bounds);
  System_Collections_Generic_List_Bounds____ctor
            (__this_12,(MethodInfo_51DE980 *)MethodInfo_System_Collections_Generic_List_Bounds_ctor);
  pMVar1 = TypeInfo_Map_MapLoader->static_fields;
  pMVar1->_navMeshBounds = __this_12;
  Il2CppCodeGenWriteBarrier(&pMVar1->_navMeshBounds);
  __this_13 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapLoader_NavMeshBuild);
  System_Collections_Generic_List_MapLoader_NavMeshBuild____ctor
            (__this_13,
             (MethodInfo_3AB90F0 *)MethodInfo_System_Collections_Generic_List_MapLoader_NavMeshBuild_ctor);
  pMVar1 = TypeInfo_Map_MapLoader->static_fields;
  pMVar1->_navMeshBuilds = __this_13;
  Il2CppCodeGenWriteBarrier(&pMVar1->_navMeshBuilds);
  pMVar1 = TypeInfo_Map_MapLoader->static_fields;
  pMVar1->ROOT_OBJECT_ID = -1;
  pMVar1->NETWORK_OFFSET = 1000;
  return;
}


