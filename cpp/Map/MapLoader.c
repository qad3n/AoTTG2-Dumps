// Type: Map.MapLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/MapLoader.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/MapLoader.cs  [CHANGED since prior version]
// --------------------------------

// Map.MapLoader.<>c__DisplayClass38_0$$.ctor
// il2cpp: void Map_MapLoader___c__DisplayClass38_0___ctor (Map_MapLoader___c__DisplayClass38_0_o* __this, const MethodInfo* method);
// 0x3da3030

void Map_MapLoader_<>c__DisplayClass38_0___ctor
               (Map_MapLoader___c__DisplayClass38_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader.<>c__DisplayClass38_0$$<ResetSources>b__0
// il2cpp: bool Map_MapLoader___c__DisplayClass38_0___ResetSources_b__0 (Map_MapLoader___c__DisplayClass38_0_o* __this, UnityEngine_AI_NavMeshBuildSource_o source, const MethodInfo* method);
// 0x3da9890

bool_conflict
Map_MapLoader_<>c__DisplayClass38_0__<ResetSources>b__0
          (Map_MapLoader___c__DisplayClass38_0_o *__this,UnityEngine_AI_NavMeshBuildSource_o source,
          MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  UnityEngine_AI_NavMeshBuildSource_o __this_01;
  bool_conflict bVar1;
  undefined8 in_RAX;
  UnityEngine_Component_o *__this_02;
  UnityEngine_GameObject_o *item;
  undefined8 unaff_RBX;
  undefined8 unaff_R14;
  undefined8 unaff_retaddr;
  
  unique0x100000fd = source.fields;
  __this_01.fields.m_Transform.fields._24_8_ = unaff_retaddr;
  if (DAT_05702788 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    DAT_05702788 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).staticObjects;
  __this_01.fields.m_Transform.fields.m20 = (float)(int)unaff_RBX;
  __this_01.fields.m_Transform.fields.m30 = (float)(int)((ulong)unaff_RBX >> 0x20);
  __this_01.fields.m_Transform.fields.m00 = (float)(int)in_RAX;
  __this_01.fields.m_Transform.fields.m10 = (float)(int)((ulong)in_RAX >> 0x20);
  __this_01.fields.m_Transform.fields.m01 = (float)(int)unaff_R14;
  __this_01.fields.m_Transform.fields.m11 = (float)(int)((ulong)unaff_R14 >> 0x20);
  __this_02 = UnityEngine_AI_NavMeshBuildSource__get_component(__this_01,(MethodInfo *)&source);
  if (__this_02 != (UnityEngine_Component_o *)0x0) {
    item = UnityEngine_Component__get_gameObject(__this_02,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar1 = System_Collections_Generic_HashSet<object>__Contains
                        (__this_00,(Il2CppObject *)item,MethodInfo_Boolean_Contains);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader.<CreateNavMeshSurfaceAsync>d__40$$MoveNext
// il2cpp: void Map_MapLoader__CreateNavMeshSurfaceAsync_d__40__MoveNext (Map_MapLoader__CreateNavMeshSurfaceAsync_d__40_o __this, const MethodInfo* method);
// 0x3da9900

void Map_MapLoader_<CreateNavMeshSurfaceAsync>d__40__MoveNext
               (Map_MapLoader__CreateNavMeshSurfaceAsync_d__40_o __this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_01;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_02;
  UnityEngine_AI_NavMeshBuildSettings_o __this_03;
  UnityEngine_AI_NavMeshBuildSettings_o __this_04;
  UnityEngine_AI_NavMeshBuildSettings_o __this_05;
  UnityEngine_AI_NavMeshBuildSettings_o __this_06;
  UnityEngine_AI_NavMeshBuildSettings_o __this_07;
  UnityEngine_AI_NavMeshBuildSettings_o __this_08;
  UnityEngine_AI_NavMeshBuildSettings_o __this_09;
  UnityEngine_AI_NavMeshBuildSettings_o buildSettings;
  bool_conflict bVar2;
  UnityEngine_AI_NavMeshData_o *__this_10;
  UnityEngine_AsyncOperation_o *pUVar3;
  UnityEngine_Awaitable_o *__this_11;
  _union_14 in_stack_ffffffffffffff08;
  System_Action_o *in_stack_ffffffffffffff10;
  System_Threading_Tasks_Task_TResult__o *in_stack_ffffffffffffff18;
  undefined8 in_stack_ffffffffffffff20;
  undefined8 in_stack_ffffffffffffff28;
  undefined8 in_stack_ffffffffffffff30;
  undefined8 in_stack_ffffffffffffff38;
  undefined8 in_stack_ffffffffffffff40;
  UnityEngine_Awaitable_Awaiter_Fields local_a0;
  _union_14 local_98;
  System_Action_o *pSStack_90;
  System_Threading_Tasks_Task_TResult__o *local_88;
  undefined8 uStack_80;
  System_Collections_Generic_List_NavMeshBuildSource__o *local_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  _union_14 local_58;
  System_Action_o *pSStack_50;
  System_Threading_Tasks_Task_TResult__o *local_48;
  int32_t iStack_40;
  undefined4 uStack_3c;
  System_Collections_Generic_List_NavMeshBuildSource__o *local_38;
  UnityEngine_Vector3_Fields aUStack_30 [2];
  
  if (DAT_05702789 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_AwaitOnCompleted_Awaitable_Awaiter_MapLoade);
    il2cpp_init_method_metadata(&TypeInfo_AsyncTaskMethodBuilder);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_NavMeshData);
    DAT_05702789 = '\x01';
  }
  auStack_70._8_4_ = 0.0;
  auStack_70._12_4_ = 0.0;
  uStack_60._0_4_ = 0.0;
  uStack_60._4_4_ = 0.0;
  local_78 = (System_Collections_Generic_List_NavMeshBuildSource__o *)0x0;
  auStack_70._0_4_ = 0.0;
  auStack_70._4_4_ = 0.0;
  local_88 = (System_Threading_Tasks_Task_TResult__o *)0x0;
  uStack_80._0_4_ = 0;
  uStack_80._4_4_ = 0;
  local_98.genericMethod = (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  pSStack_90 = (System_Action_o *)0x0;
  local_a0._awaited = (UnityEngine_Awaitable_o *)0x0;
  if (*(int *)&method->methodPointer == 0) {
    local_a0._awaited = *(UnityEngine_Awaitable_o **)&method->token;
    method->token = 0;
    method->flags = 0;
    method->iflags = 0;
    *(undefined4 *)&method->methodPointer = 0xffffffff;
  }
  else {
    __this_10 = (UnityEngine_AI_NavMeshData_o *)il2cpp_runtime_glue(TypeInfo_NavMeshData);
    UnityEngine_AI_NavMeshData___ctor(__this_10,(MethodInfo *)0x0);
    UnityEngine_AI_NavMesh__GetSettingsByID
              ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_58,*(int32_t *)&method->klass,
               (MethodInfo *)0x0);
    auStack_70._8_4_ = aUStack_30[0].z;
    auStack_70._12_4_ = aUStack_30[1].x;
    uStack_60._0_4_ = aUStack_30[1].y;
    uStack_60._4_4_ = aUStack_30[1].z;
    local_78 = local_38;
    auStack_70._0_4_ = aUStack_30[0].x;
    auStack_70._4_4_ = aUStack_30[0].y;
    local_88 = local_48;
    uStack_80._0_4_ = iStack_40;
    uStack_80._4_4_ = uStack_3c;
    local_98 = local_58;
    pSStack_90 = pSStack_50;
    __this_03.fields._8_8_ = in_stack_ffffffffffffff10;
    __this_03.fields._0_8_ = in_stack_ffffffffffffff08.genericMethod;
    __this_03.fields._16_8_ = in_stack_ffffffffffffff18;
    __this_03.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff20;
    __this_03.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
    __this_03.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff28;
    __this_03.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
    __this_03.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff30;
    __this_03.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20);
    __this_03.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff38;
    __this_03.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff38 >> 0x20);
    __this_03.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff40;
    __this_03.fields.m_Debug.fields.m_Flags =
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (char)((ulong)in_stack_ffffffffffffff40 >> 0x20);
    __this_03.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff40 >> 0x28);
    UnityEngine_AI_NavMeshBuildSettings__set_maxJobWorkers
              (__this_03,(uint32_t)&local_98,(MethodInfo *)0x6);
    __this_04.fields._8_8_ = in_stack_ffffffffffffff10;
    __this_04.fields._0_8_ = in_stack_ffffffffffffff08.genericMethod;
    __this_04.fields._16_8_ = in_stack_ffffffffffffff18;
    __this_04.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff20;
    __this_04.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
    __this_04.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff28;
    __this_04.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
    __this_04.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff30;
    __this_04.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20);
    __this_04.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff38;
    __this_04.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff38 >> 0x20);
    __this_04.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff40;
    __this_04.fields.m_Debug.fields.m_Flags =
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (char)((ulong)in_stack_ffffffffffffff40 >> 0x20);
    __this_04.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff40 >> 0x28);
    UnityEngine_AI_NavMeshBuildSettings__set_overrideTileSize
              (__this_04,(bool_conflict)&local_98,(MethodInfo *)0x1);
    __this_05.fields._8_8_ = in_stack_ffffffffffffff10;
    __this_05.fields._0_8_ = in_stack_ffffffffffffff08.genericMethod;
    __this_05.fields._16_8_ = in_stack_ffffffffffffff18;
    __this_05.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff20;
    __this_05.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
    __this_05.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff28;
    __this_05.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
    __this_05.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff30;
    __this_05.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20);
    __this_05.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff38;
    __this_05.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff38 >> 0x20);
    __this_05.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff40;
    __this_05.fields.m_Debug.fields.m_Flags =
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (char)((ulong)in_stack_ffffffffffffff40 >> 0x20);
    __this_05.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff40 >> 0x28);
    UnityEngine_AI_NavMeshBuildSettings__set_tileSize
              (__this_05,(int32_t)&local_98,(MethodInfo *)0x100);
    __this_06.fields._8_8_ = in_stack_ffffffffffffff10;
    __this_06.fields._0_8_ = in_stack_ffffffffffffff08.genericMethod;
    __this_06.fields._16_8_ = in_stack_ffffffffffffff18;
    __this_06.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff20;
    __this_06.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
    __this_06.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff28;
    __this_06.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
    __this_06.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff30;
    __this_06.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20);
    __this_06.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff38;
    __this_06.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff38 >> 0x20);
    __this_06.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff40;
    __this_06.fields.m_Debug.fields.m_Flags =
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (char)((ulong)in_stack_ffffffffffffff40 >> 0x20);
    __this_06.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff40 >> 0x28);
    UnityEngine_AI_NavMeshBuildSettings__set_overrideVoxelSize
              (__this_06,(bool_conflict)&local_98,(MethodInfo *)0x1);
    __this_07.fields._8_8_ = in_stack_ffffffffffffff10;
    __this_07.fields._0_8_ = in_stack_ffffffffffffff08.genericMethod;
    __this_07.fields._16_8_ = in_stack_ffffffffffffff18;
    __this_07.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff20;
    __this_07.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
    __this_07.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff28;
    __this_07.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
    __this_07.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff30;
    __this_07.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20);
    __this_07.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff38;
    __this_07.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff38 >> 0x20);
    __this_07.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff40;
    __this_07.fields.m_Debug.fields.m_Flags =
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (char)((ulong)in_stack_ffffffffffffff40 >> 0x20);
    __this_07.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff40 >> 0x28);
    UnityEngine_AI_NavMeshBuildSettings__set_voxelSize(__this_07,4.0,(MethodInfo *)&local_98);
    __this_08.fields._8_8_ = in_stack_ffffffffffffff10;
    __this_08.fields._0_8_ = in_stack_ffffffffffffff08.genericMethod;
    __this_08.fields._16_8_ = in_stack_ffffffffffffff18;
    __this_08.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff20;
    __this_08.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
    __this_08.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff28;
    __this_08.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
    __this_08.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff30;
    __this_08.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20);
    __this_08.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff38;
    __this_08.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff38 >> 0x20);
    __this_08.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff40;
    __this_08.fields.m_Debug.fields.m_Flags =
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (char)((ulong)in_stack_ffffffffffffff40 >> 0x20);
    __this_08.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff40 >> 0x28);
    UnityEngine_AI_NavMeshBuildSettings__set_minRegionArea(__this_08,100.0,(MethodInfo *)&local_98);
    __this_09.fields._8_8_ = in_stack_ffffffffffffff10;
    __this_09.fields._0_8_ = in_stack_ffffffffffffff08.genericMethod;
    __this_09.fields._16_8_ = in_stack_ffffffffffffff18;
    __this_09.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff20;
    __this_09.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
    __this_09.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff28;
    __this_09.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
    __this_09.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff30;
    __this_09.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20);
    __this_09.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff38;
    __this_09.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff38 >> 0x20);
    __this_09.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff40;
    __this_09.fields.m_Debug.fields.m_Flags =
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (char)((ulong)in_stack_ffffffffffffff40 >> 0x20);
    __this_09.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff40 >> 0x28);
    UnityEngine_AI_NavMeshBuildSettings__set_buildHeightMesh
              (__this_09,(bool_conflict)&local_98,(MethodInfo *)0x1);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (*(long *)(TypeInfo_MapLoader + 0xb8) + 0xc0);
    if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_Dictionary<int__object>__Add
              (__this_00,*(int32_t *)&method->klass,(Il2CppObject *)__this_10,MethodInfo_Void_Add);
    UnityEngine_AI_NavMesh__AddNavMeshData(__this_10,(MethodInfo *)0x0);
    buildSettings.fields._8_8_ = pSStack_90;
    buildSettings.fields._0_8_ = local_98.genericMethod;
    buildSettings.fields._16_8_ = local_88;
    buildSettings.fields.m_MaxJumpAcrossDistance = (float)(int32_t)uStack_80;
    buildSettings.fields.m_MinRegionArea = (float)uStack_80._4_4_;
    buildSettings.fields._32_8_ = local_78;
    buildSettings.fields.m_OverrideTileSize = auStack_70._0_4_;
    buildSettings.fields.m_TileSize = auStack_70._4_4_;
    buildSettings.fields.m_BuildHeightMesh = auStack_70._8_4_;
    buildSettings.fields.m_MaxJobWorkers = auStack_70._12_4_;
    buildSettings.fields._56_8_ = uStack_60;
    in_stack_ffffffffffffff08 = local_98;
    in_stack_ffffffffffffff10 = pSStack_90;
    in_stack_ffffffffffffff18 = local_88;
    pUVar3 = UnityEngine_AI_NavMeshBuilder__UpdateNavMeshDataAsync
                       (__this_10,buildSettings,
                        (System_Collections_Generic_List_NavMeshBuildSource__o *)method->return_type
                        ,(UnityEngine_Bounds_o)*(UnityEngine_Bounds_Fields *)&method->parameters,
                        (MethodInfo *)0x0);
    if (DAT_057027fe == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Awaitable);
      DAT_057027fe = '\x01';
      iVar1 = *(int *)(TypeInfo_Awaitable + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_Awaitable + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    __this_11 = (UnityEngine_Awaitable_o *)il2cpp_glue_03db6bc0(pUVar3,0,0);
    if (__this_11 == (UnityEngine_Awaitable_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    local_a0._awaited =
         (UnityEngine_Awaitable_o *)UnityEngine_Awaitable__GetAwaiter(__this_11,(MethodInfo *)0x0);
    bVar2 = UnityEngine_Awaitable_Awaiter__get_IsCompleted
                      ((UnityEngine_Awaitable_Awaiter_o)&local_a0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      *(undefined4 *)&method->methodPointer = 0;
      *(UnityEngine_Awaitable_o **)&method->token = local_a0._awaited;
      il2cpp_runtime_glue(&method->token,0);
      if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_02.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
           in_stack_ffffffffffffff10;
      __this_02.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
           in_stack_ffffffffffffff08.genericMethod;
      __this_02.fields.m_builder.fields.m_task = in_stack_ffffffffffffff18;
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitOnCompleted<Awaitable_Awaiter__MapLoader_<CreateNavMeshSurfaceAsync>d__40>
                (__this_02,(UnityEngine_Awaitable_Awaiter_o *)&method->virtualMethodPointer,
                 (Map_MapLoader__CreateNavMeshSurfaceAsync_d__40_o *)&local_a0,
                 (MethodInfo_246C8D0 *)method);
      return;
    }
  }
  if (local_a0._awaited != (UnityEngine_Awaitable_o *)0x0) {
    UnityEngine_Awaitable__PropagateExceptionAndRelease(local_a0._awaited,(MethodInfo *)0x0);
    *(undefined4 *)&method->methodPointer = 0xfffffffe;
    if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_01.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
         in_stack_ffffffffffffff10;
    __this_01.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
         in_stack_ffffffffffffff08.genericMethod;
    __this_01.fields.m_builder.fields.m_task = in_stack_ffffffffffffff18;
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult
              (__this_01,(MethodInfo *)&method->virtualMethodPointer);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader.<CreateNavMeshSurfaceAsync>d__40$$SetStateMachine
// il2cpp: void Map_MapLoader__CreateNavMeshSurfaceAsync_d__40__SetStateMachine (Map_MapLoader__CreateNavMeshSurfaceAsync_d__40_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x3da9da0

void Map_MapLoader_<CreateNavMeshSurfaceAsync>d__40__SetStateMachine
               (Map_MapLoader__CreateNavMeshSurfaceAsync_d__40_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method
               )

{
  if (DAT_0570278a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AsyncTaskMethodBuilder);
    DAT_0570278a = '\x01';
  }
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetStateMachine
            ((System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o)__this.fields._0_24_,
             (System_Runtime_CompilerServices_IAsyncStateMachine_o *)&stateMachine->monitor,method);
  return;
}


// Map.MapLoader.<GenerateNavMesh>d__43$$MoveNext
// il2cpp: void Map_MapLoader__GenerateNavMesh_d__43__MoveNext (Map_MapLoader__GenerateNavMesh_d__43_o __this, const MethodInfo* method);
// 0x3da9e00

/* WARNING: Removing unreachable block (ram,0x03daa0d5) */
/* WARNING: Removing unreachable block (ram,0x03daa1cf) */

void Map_MapLoader_<GenerateNavMesh>d__43__MoveNext
               (Map_MapLoader__GenerateNavMesh_d__43_o __this,MethodInfo *method)

{
  int32_t *piVar1;
  bool_conflict *pbVar2;
  int iVar3;
  uint uVar4;
  System_Threading_CancellationTokenSource_o *pSVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_List_Enumerator_int__o __this_00;
  System_Collections_Generic_List_Enumerator_int__o __this_01;
  System_Collections_Generic_List_Enumerator_int__o __this_02;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_03;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_04;
  long lVar7;
  int32_t iVar8;
  bool_conflict bVar9;
  System_Collections_Generic_List_int__o *__this_05;
  System_Collections_Generic_List_object__o *__this_06;
  System_Threading_Tasks_Task_o *pSVar10;
  MethodInfo *in_RSI;
  System_Runtime_CompilerServices_IAsyncStateMachine_o *in_stack_ffffffffffffff68;
  System_Action_o *in_stack_ffffffffffffff70;
  MethodInfo *in_stack_ffffffffffffff78;
  System_Runtime_CompilerServices_TaskAwaiter_Fields local_70;
  System_Runtime_CompilerServices_TaskAwaiter_Fields local_68;
  System_Action_o *pSStack_60;
  System_Threading_Tasks_Task_TResult__o *local_58;
  undefined1 local_48 [16];
  System_Threading_Tasks_Task_TResult__o *local_38;
  
  if (DAT_0570278b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_AwaitUnsafeOnCompleted_TaskAwaiter_MapLoade);
    il2cpp_init_method_metadata(&TypeInfo_AsyncTaskMethodBuilder);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Int32__GetEnumerator);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Threading_Tasks_Task);
    il2cpp_init_method_metadata(&TypeInfo_List_Task);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_Task);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_0570278b = '\x01';
  }
  local_68.m_task = (System_Threading_Tasks_Task_o *)0x0;
  pSStack_60 = (System_Action_o *)0x0;
  local_58 = (System_Threading_Tasks_Task_TResult__o *)0x0;
  local_70.m_task = (System_Threading_Tasks_Task_o *)0x0;
  iVar3 = *(int *)&method->methodPointer;
  if (iVar3 == 0) {
    local_70.m_task = (System_Threading_Tasks_Task_o *)method->return_type;
    method->return_type = (Il2CppType *)0x0;
    *(undefined4 *)&method->methodPointer = 0xffffffff;
  }
  else {
    if (method->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    Map_MapLoader__ResetSources((Map_MapLoader_o *)method->klass,in_RSI);
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_05 = Utility_Util__GetAllTitanAgentIds((MethodInfo *)0x0);
    __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_Task);
    System_Collections_Generic_List<object>___ctor(__this_06,MethodInfo_List_1_System_Threading_Tasks_Task);
    if (__this_05 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_List<int>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,__this_05,MethodInfo_List_1_T__Enumerator_System_Int32__GetEnumerator);
    local_58 = local_38;
    local_68.m_task = (System_Threading_Tasks_Task_o *)local_48._0_8_;
    pSStack_60 = (System_Action_o *)local_48._8_8_;
    if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_01.fields._8_8_ = in_stack_ffffffffffffff70;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
      __this_01.fields._16_8_ = in_stack_ffffffffffffff78;
      bVar9 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                        (__this_01,(MethodInfo_3181160 *)&local_68);
      if ((char)bVar9 != '\0') {
        iVar8 = (int32_t)local_58;
        if (*(int *)((long)&TypeInfo_MapLoader[7].klass + 4) == 0) {
          il2cpp_init_class();
        }
        pSVar5 = TypeInfo_MapLoader[5].fields.m_CancellationTokenSource;
        Map_MapLoader__CreateNavMeshSurfaceAsync
                  (TypeInfo_MapLoader,iVar8,
                   *(System_Collections_Generic_List_NavMeshBuildSource__o **)
                    &pSVar5[2].fields._state,
                   (UnityEngine_Bounds_o)*(UnityEngine_Bounds_Fields *)&pSVar5[2].fields._disposed,
                   (MethodInfo *)pSVar5[2].fields._timer);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      while (__this_00.fields._8_8_ = in_stack_ffffffffffffff70,
            __this_00.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68,
            __this_00.fields._16_8_ = in_stack_ffffffffffffff78,
            bVar9 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                              (__this_00,(MethodInfo_3181160 *)&local_68), (char)bVar9 != '\0') {
        iVar8 = (int32_t)local_58;
        if (*(int *)((long)&TypeInfo_MapLoader[7].klass + 4) == 0) {
          il2cpp_init_class();
        }
        pSVar5 = TypeInfo_MapLoader[5].fields.m_CancellationTokenSource;
        in_stack_ffffffffffffff78 = (MethodInfo *)pSVar5[2].fields._timer;
        pbVar2 = &pSVar5[2].fields._disposed;
        in_stack_ffffffffffffff68 = *(System_Runtime_CompilerServices_IAsyncStateMachine_o **)pbVar2
        ;
        in_stack_ffffffffffffff70 = (System_Action_o *)pSVar5[2].fields._executingCallback;
        pSVar10 = Map_MapLoader__CreateNavMeshSurfaceAsync
                            (TypeInfo_MapLoader,iVar8,
                             *(System_Collections_Generic_List_NavMeshBuildSource__o **)
                              &pSVar5[2].fields._state,
                             (UnityEngine_Bounds_o)*(UnityEngine_Bounds_Fields *)pbVar2,
                             in_stack_ffffffffffffff78);
        lVar7 = MethodInfo_Void_Add;
        piVar1 = &(__this_06->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this_06->fields)._items;
        if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar4 = (__this_06->fields)._size;
        if (uVar4 < (uint)pSVar6->max_length) {
          (__this_06->fields)._size = uVar4 + 1;
          pSVar6->m_Items[(int)uVar4] = (Il2CppObject *)pSVar10;
          il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar4,pSVar10);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_06,(Il2CppObject *)pSVar10,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    if (iVar3 < 0) {
      __this_02.fields._8_8_ = in_stack_ffffffffffffff70;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
      __this_02.fields._16_8_ = in_stack_ffffffffffffff78;
      System_Collections_Generic_List_Enumerator<int>__Dispose
                (__this_02,(MethodInfo_3181150 *)&local_68);
    }
    if (*(int *)(TypeInfo_Task + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar10 = System_Threading_Tasks_Task__WhenAll
                        ((System_Collections_Generic_IEnumerable_Task__o *)__this_06,
                         (MethodInfo *)0x0);
    if (pSVar10 == (System_Threading_Tasks_Task_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    local_70.m_task =
         (System_Threading_Tasks_Task_o *)
         System_Threading_Tasks_Task__GetAwaiter(pSVar10,(MethodInfo *)0x0);
    bVar9 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted
                      ((System_Runtime_CompilerServices_TaskAwaiter_o)&local_70,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      *(undefined4 *)&method->methodPointer = 0;
      method->return_type = (Il2CppType *)local_70.m_task;
      il2cpp_runtime_glue(&method->return_type,0);
      if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_04.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
           in_stack_ffffffffffffff70;
      __this_04.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
           in_stack_ffffffffffffff68;
      __this_04.fields.m_builder.fields.m_task =
           (System_Threading_Tasks_Task_TResult__o *)in_stack_ffffffffffffff78;
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted<TaskAwaiter__MapLoader_<GenerateNavMesh>d__43>
                (__this_04,
                 (System_Runtime_CompilerServices_TaskAwaiter_o *)&method->virtualMethodPointer,
                 (Map_MapLoader__GenerateNavMesh_d__43_o *)&local_70,(MethodInfo_246DC80 *)method);
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult
            ((System_Runtime_CompilerServices_TaskAwaiter_o)&local_70,(MethodInfo *)0x0);
  *(undefined4 *)&method->methodPointer = 0xfffffffe;
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_03.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
       in_stack_ffffffffffffff70;
  __this_03.fields.m_builder.fields.m_coreState.fields.m_stateMachine = in_stack_ffffffffffffff68;
  __this_03.fields.m_builder.fields.m_task =
       (System_Threading_Tasks_Task_TResult__o *)in_stack_ffffffffffffff78;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult
            (__this_03,(MethodInfo *)&method->virtualMethodPointer);
  return;
}


// Map.MapLoader.<GenerateNavMesh>d__43$$SetStateMachine
// il2cpp: void Map_MapLoader__GenerateNavMesh_d__43__SetStateMachine (Map_MapLoader__GenerateNavMesh_d__43_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x3daa3b0

void Map_MapLoader_<GenerateNavMesh>d__43__SetStateMachine
               (Map_MapLoader__GenerateNavMesh_d__43_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method
               )

{
  if (DAT_0570278c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AsyncTaskMethodBuilder);
    DAT_0570278c = '\x01';
  }
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetStateMachine
            ((System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o)__this.fields._0_24_,
             (System_Runtime_CompilerServices_IAsyncStateMachine_o *)&stateMachine->monitor,method);
  return;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__35$$.ctor
// il2cpp: void Map_MapLoader__LoadObjectsCoroutine_d__35___ctor (Map_MapLoader__LoadObjectsCoroutine_d__35_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3da15c0

void Map_MapLoader_<LoadObjectsCoroutine>d__35___ctor
               (Map_MapLoader__LoadObjectsCoroutine_d__35_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__35$$System.IDisposable.Dispose
// il2cpp: void Map_MapLoader__LoadObjectsCoroutine_d__35__System_IDisposable_Dispose (Map_MapLoader__LoadObjectsCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x3daa410

void Map_MapLoader_<LoadObjectsCoroutine>d__35__System_IDisposable_Dispose
               (Map_MapLoader__LoadObjectsCoroutine_d__35_o *__this,MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  switch((__this->fields).__1__state) {
  case -4:
  case 2:
    if (DAT_0570278f == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
      DAT_0570278f = '\x01';
    }
    break;
  case -3:
  case 1:
    if (DAT_0570278e == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
      DAT_0570278e = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
               (MethodInfo_3185E10 *)&(__this->fields).__7__wrap4);
    return;
  default:
    return;
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_3185E10 *)&(__this->fields).__7__wrap7);
  return;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__35$$MoveNext
// il2cpp: bool Map_MapLoader__LoadObjectsCoroutine_d__35__MoveNext (Map_MapLoader__LoadObjectsCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x3daa4b0

/* WARNING: Removing unreachable block (ram,0x03dab706) */
/* WARNING: Removing unreachable block (ram,0x03dab8de) */
/* WARNING: Removing unreachable block (ram,0x03dab8f0) */
/* WARNING: Removing unreachable block (ram,0x03dab442) */
/* WARNING: Removing unreachable block (ram,0x03dab44a) */
/* WARNING: Type propagation algorithm not settling */

bool_conflict
Map_MapLoader_<LoadObjectsCoroutine>d__35__MoveNext
          (Map_MapLoader__LoadObjectsCoroutine_d__35_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  bool_conflict *pbVar2;
  char cVar3;
  uint uVar4;
  Map_MapLoader_o *__this_00;
  System_Threading_Timer_o *__this_01;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_string__o *pSVar6;
  UnityEngine_MonoBehaviour_o *__this_02;
  System_String_o *bundle;
  Map_MapScriptBaseObject_o *scriptObject;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar7;
  System_Threading_CancellationTokenSource_c *pSVar8;
  long lVar9;
  System_Threading_CancellationTokenSource_o *pSVar10;
  UnityEngine_AsyncOperation_array *pUVar11;
  UI_LoadingMenu_o *pUVar12;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_07;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_08;
  System_Collections_Generic_List_Enumerator_int__o __this_09;
  System_Collections_Generic_List_Enumerator_int__o __this_10;
  undefined4 uVar13;
  undefined8 uVar14;
  bool_conflict bVar15;
  System_String_o *pSVar16;
  System_String_array *pSVar17;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar18;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_11;
  Map_MapObject_o *mapObject;
  System_Collections_Generic_List_int__o *__this_12;
  System_Collections_Generic_List_AsyncOperation__o *pSVar19;
  UnityEngine_AsyncOperation_o *pUVar20;
  Il2CppObject *pIVar21;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar22;
  MethodInfo *extraout_RDX_00;
  byte bVar23;
  int iVar24;
  bool bVar25;
  float fVar26;
  undefined8 in_stack_ffffffffffffff28;
  System_Threading_CancellationCallbackInfo_o *in_stack_ffffffffffffff30;
  MethodInfo *in_stack_ffffffffffffff38;
  float fStack_b0;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_a8;
  undefined1 auStack_88 [72];
  uint32_t uStack_40;
  int32_t iStack_3c;
  Map_MapScriptBaseObject_o *pMStack_38;
  
  if (DAT_0570278d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AssetBundleManager);
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_I);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptBaseObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapScriptBaseObject__Ge);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Int32__GetEnumerator);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_AsyncOperation);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_AsyncOperation_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_AsyncOperation);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Thunderspear PVP");
    il2cpp_init_method_metadata(&"AHSS PVP");
    il2cpp_init_method_metadata(&"Blade PVP");
    il2cpp_init_method_metadata(&"Racing");
    il2cpp_init_method_metadata(&"APG PVP");
    il2cpp_init_method_metadata(&"Failed to load bundle: ");
    DAT_0570278d = '\x01';
  }
  auStack_88._32_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  auStack_88._40_8_ = (Il2CppType *)0x0;
  auStack_88._48_8_ = (Map_MapScriptBaseObject_o *)0x0;
  auStack_88._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_88._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_88._16_8_ = (Map_MapScriptBaseObject_o *)0x0;
  uVar4 = (__this->fields).__1__state;
  if (3 < uVar4) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  switch(uVar4) {
  case 0:
    (__this->fields).__1__state = -1;
    pSVar6 = (__this->fields).customAssets;
    if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_88 + 0x40),
               (System_Collections_Generic_List_object__o *)pSVar6,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    SStack_a8.fields._currentKey = (Il2CppObject *)pMStack_38;
    SStack_a8.fields._dictionary._0_4_ = auStack_88._64_4_;
    SStack_a8.fields._dictionary._4_4_ = auStack_88._68_4_;
    SStack_a8.fields._index = uStack_40;
    SStack_a8.fields._version = iStack_3c;
    (__this->fields).__7__wrap4.fields._current = (System_String_o *)pMStack_38;
    *(undefined4 *)&(__this->fields).__7__wrap4.fields._list = auStack_88._64_4_;
    *(undefined4 *)((long)&(__this->fields).__7__wrap4.fields._list + 4) = auStack_88._68_4_;
    (__this->fields).__7__wrap4.fields._index = uStack_40;
    (__this->fields).__7__wrap4.fields._version = iStack_3c;
    il2cpp_runtime_glue(&(__this->fields).__7__wrap4,0);
    (__this->fields).__1__state = -3;
    break;
  case 1:
    (__this->fields).__1__state = -3;
    pSVar16 = (__this->fields)._bundle_5__7;
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar15 = ApplicationManagers_AssetBundleManager__LoadedBundle(pSVar16,(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') {
      pSVar16 = System_String__Concat
                          ("Failed to load bundle: ",(__this->fields)._customAsset_5__6,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
        il2cpp_init_class();
      }
      ApplicationManagers_DebugConsole__Log(pSVar16,1,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_MapLoader[7].klass + 4) == 0) {
        il2cpp_init_class();
      }
      __this_01 = TypeInfo_MapLoader[5].fields.m_CancellationTokenSource[1].fields._timer;
      pSVar16 = System_String__Concat
                          ("Failed to load bundle: ",(__this->fields)._customAsset_5__6,(MethodInfo *)0x0);
      lVar9 = MethodInfo_Void_Add;
      if (__this_01 == (System_Threading_Timer_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      piVar1 = (int32_t *)((long)&(__this_01->fields).callback + 4);
      *piVar1 = *piVar1 + 1;
      pSVar5 = (System_Object_array *)(__this_01->fields)._identity;
      if (pSVar5 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar4 = *(uint *)&(__this_01->fields).callback;
      if (uVar4 < (uint)pSVar5->max_length) {
        *(uint *)&(__this_01->fields).callback = uVar4 + 1;
        pSVar5->m_Items[(int)uVar4] = (Il2CppObject *)pSVar16;
        il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar4,pSVar16);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar16,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    (__this->fields)._bundle_5__7 = (System_String_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._bundle_5__7,0);
    (__this->fields)._customAsset_5__6 = (System_String_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._customAsset_5__6,0);
    break;
  case 2:
    (__this->fields).__1__state = -4;
    iVar24 = (__this->fields)._count_5__3;
    goto LAB_03dab177;
  case 3:
    (__this->fields).__1__state = -1;
    pSVar19 = (__this->fields)._operations_5__9;
    goto joined_r0x03daa7be;
  }
  do {
    __this_03.fields._8_8_ = in_stack_ffffffffffffff30;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
    __this_03.fields._current = (Il2CppObject *)in_stack_ffffffffffffff38;
    bVar15 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                       (__this_03,(MethodInfo_3185E20 *)&(__this->fields).__7__wrap4);
    if ((char)bVar15 == '\0') {
      if (DAT_0570278e == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
        DAT_0570278e = '\x01';
      }
      (__this->fields).__1__state = -1;
      __this_04.fields._8_8_ = in_stack_ffffffffffffff30;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
      __this_04.fields._current = (Il2CppObject *)in_stack_ffffffffffffff38;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_04,(MethodInfo_3185E10 *)&(__this->fields).__7__wrap4);
      (__this->fields).__7__wrap4.fields._list = (System_Collections_Generic_List_T__o *)0x0;
      (__this->fields).__7__wrap4.fields._index = 0;
      (__this->fields).__7__wrap4.fields._version = 0;
      (__this->fields).__7__wrap4.fields._current = (System_String_o *)0x0;
      lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      lVar9 = *(long *)(lVar9 + 0x38);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      lVar9 = *(long *)(lVar9 + 0x30);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar15 = System_String__op_Inequality
                         (*(System_String_o **)(lVar9 + 0x18),"Racing",(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
LAB_03daada8:
        bVar25 = false;
      }
      else {
        lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        lVar9 = *(long *)(lVar9 + 0x38);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        lVar9 = *(long *)(lVar9 + 0x30);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar15 = System_String__op_Inequality
                           (*(System_String_o **)(lVar9 + 0x18),"Thunderspear PVP",(MethodInfo *)0x0);
        if ((char)bVar15 == '\0') goto LAB_03daada8;
        lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        lVar9 = *(long *)(lVar9 + 0x38);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        lVar9 = *(long *)(lVar9 + 0x30);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar15 = System_String__op_Inequality
                           (*(System_String_o **)(lVar9 + 0x18),"Blade PVP",(MethodInfo *)0x0);
        if ((char)bVar15 == '\0') goto LAB_03daada8;
        lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        lVar9 = *(long *)(lVar9 + 0x38);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        lVar9 = *(long *)(lVar9 + 0x30);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar15 = System_String__op_Inequality
                           (*(System_String_o **)(lVar9 + 0x18),"APG PVP",(MethodInfo *)0x0);
        if ((char)bVar15 == '\0') goto LAB_03daada8;
        lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        lVar9 = *(long *)(lVar9 + 0x38);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        lVar9 = *(long *)(lVar9 + 0x30);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar15 = System_String__op_Inequality
                           (*(System_String_o **)(lVar9 + 0x18),"AHSS PVP",(MethodInfo *)0x0);
        if ((char)bVar15 == '\0') goto LAB_03daada8;
        lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        lVar9 = *(long *)(lVar9 + 0x38);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        lVar9 = *(long *)(lVar9 + 0x30);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar15 = System_String__op_Inequality
                           (*(System_String_o **)(lVar9 + 0x18),"None",(MethodInfo *)0x0);
        if ((char)bVar15 == '\0') goto LAB_03daada8;
        pSVar6 = (__this->fields).customAssets;
        if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar25 = true;
        if ((pSVar6->fields)._size == 0) {
          pSVar7 = (__this->fields).objects;
          if (pSVar7 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar25 = (pSVar7->fields)._size != 0;
        }
      }
      if (__this == (Map_MapLoader__LoadObjectsCoroutine_d__35_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      *(bool *)&(__this->fields)._gamemodeNeedsNav_5__2 = bVar25;
      if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
        il2cpp_init_class();
        if (*(char *)(*(long *)(TypeInfo_MapManager + 0xb8) + 0x18) == '\0') goto LAB_03daadd4;
LAB_03daae18:
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar23 = 0;
        bVar15 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        if ((char)bVar15 != '\0') {
          lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          lVar9 = *(long *)(lVar9 + 0x50);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          lVar9 = *(long *)(lVar9 + 0xa8);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar23 = *(byte *)(lVar9 + 0x11);
        }
      }
      else {
        if (*(char *)(*(long *)(TypeInfo_MapManager + 0xb8) + 0x18) != '\0') goto LAB_03daae18;
LAB_03daadd4:
        if (*(int *)((long)&TypeInfo_MapLoader[7].klass + 4) == 0) {
          il2cpp_init_class();
        }
        bVar23 = 0;
        if (*(char *)&TypeInfo_MapLoader[5].fields.m_CancellationTokenSource[2].fields.
                      _registeredCallbacksLists == '\0') goto LAB_03daae18;
      }
      (__this->fields)._count_5__3 = 0;
      if (__this == (Map_MapLoader__LoadObjectsCoroutine_d__35_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (__this->fields)._multiplier_5__4 =
           *(float *)(&DAT_00cd0d28 +
                     (ulong)((bVar23 & (byte)(__this->fields)._gamemodeNeedsNav_5__2) == 0) * 4);
      pSVar7 = (__this->fields).objects;
      if (pSVar7 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_88 + 0x40),
                 (System_Collections_Generic_List_object__o *)pSVar7,MethodInfo_List_1_T__Enumerator_Map_MapScriptBaseObject__Ge);
      SStack_a8.fields._currentKey = (Il2CppObject *)pMStack_38;
      SStack_a8.fields._dictionary._0_4_ = auStack_88._64_4_;
      SStack_a8.fields._dictionary._4_4_ = auStack_88._68_4_;
      SStack_a8.fields._index = uStack_40;
      SStack_a8.fields._version = iStack_3c;
      (__this->fields).__7__wrap7.fields._current = pMStack_38;
      *(undefined4 *)&(__this->fields).__7__wrap7.fields._list = auStack_88._64_4_;
      *(undefined4 *)((long)&(__this->fields).__7__wrap7.fields._list + 4) = auStack_88._68_4_;
      (__this->fields).__7__wrap7.fields._index = uStack_40;
      (__this->fields).__7__wrap7.fields._version = iStack_3c;
      il2cpp_runtime_glue(&(__this->fields).__7__wrap7,0);
      (__this->fields).__1__state = -4;
      goto LAB_03dab17d;
    }
    (__this->fields)._customAsset_5__6 = (__this->fields).__7__wrap4.fields._current;
    il2cpp_runtime_glue(&(__this->fields)._customAsset_5__6);
    pSVar16 = (__this->fields)._customAsset_5__6;
    if (pSVar16 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar17 = System_String__Split(pSVar16,0x2c,0,(MethodInfo *)0x0);
    if (pSVar17 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  } while (pSVar17->max_length == 0);
  if ((int)pSVar17->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pSVar17->m_Items[0] == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar16 = System_String__Trim(pSVar17->m_Items[0],(MethodInfo *)0x0);
  (__this->fields)._bundle_5__7 = pSVar16;
  il2cpp_runtime_glue(&(__this->fields)._bundle_5__7);
  if ((int)pSVar17->max_length < 2) {
    pSVar16 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    iVar24 = *(int *)((long)&TypeInfo_MapLoader[7].klass + 4);
  }
  else {
    if (pSVar17->m_Items[1] == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar16 = System_String__Trim(pSVar17->m_Items[1],(MethodInfo *)0x0);
    iVar24 = *(int *)((long)&TypeInfo_MapLoader[7].klass + 4);
  }
  if (iVar24 == 0) {
    il2cpp_init_class();
  }
  __this_02 = *(UnityEngine_MonoBehaviour_o **)
               &TypeInfo_MapLoader[5].fields.m_CancellationTokenSource[1].fields._state;
  bundle = (__this->fields)._bundle_5__7;
  bVar15 = (__this->fields).editor;
  if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  routine = ApplicationManagers_AssetBundleManager__LoadBundle
                      (bundle,pSVar16,(uint)(byte)bVar15,(MethodInfo *)0x0);
  if (__this_02 == (UnityEngine_MonoBehaviour_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar18 = UnityEngine_MonoBehaviour__StartCoroutine(__this_02,routine,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)pUVar18;
  il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar18);
  (__this->fields).__1__state = 1;
  goto LAB_03dab889;
LAB_03dab17d:
  __this_05.fields._8_8_ = in_stack_ffffffffffffff30;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
  __this_05.fields._current = (Il2CppObject *)in_stack_ffffffffffffff38;
  bVar15 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                     (__this_05,(MethodInfo_3185E20 *)&(__this->fields).__7__wrap7);
  if ((char)bVar15 == '\0') goto code_r0x03dab1a0;
  scriptObject = (__this->fields).__7__wrap7.fields._current;
  bVar15 = (__this->fields).editor;
  pMVar22 = extraout_RDX_00;
  if (*(int *)((long)&TypeInfo_MapLoader[7].klass + 4) == 0) {
    il2cpp_init_class();
    pMVar22 = extraout_RDX;
  }
  Map_MapLoader__LoadObject(scriptObject,(uint)(byte)bVar15,pMVar22);
  iVar24 = (__this->fields)._count_5__3;
  if ((iVar24 == (iVar24 / 100) * 100) && (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 2)) {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
      iVar24 = (__this->fields)._count_5__3;
    }
    pSVar7 = (__this->fields).objects;
    if (pSVar7 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar12 = *(UI_LoadingMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x30);
    if (pUVar12 == (UI_LoadingMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UI_LoadingMenu__UpdateLoading
              (pUVar12,((float)iVar24 / (float)(pSVar7->fields)._size) *
                       (__this->fields)._multiplier_5__4 + 0.5,0,0,(MethodInfo *)0x0);
    pIVar21 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)pIVar21,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar21;
    il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar21);
    (__this->fields).__1__state = 2;
    goto LAB_03dab889;
  }
LAB_03dab177:
  (__this->fields)._count_5__3 = iVar24 + 1;
  goto LAB_03dab17d;
code_r0x03dab1a0:
  if (DAT_0570278f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_0570278f = '\x01';
  }
  (__this->fields).__1__state = -1;
  __this_06.fields._8_8_ = in_stack_ffffffffffffff30;
  __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
  __this_06.fields._current = (Il2CppObject *)in_stack_ffffffffffffff38;
  pMVar22 = MethodInfo_Void_Dispose;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_06,(MethodInfo_3185E10 *)&(__this->fields).__7__wrap7);
  (__this->fields).__7__wrap7.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  (__this->fields).__7__wrap7.fields._index = 0;
  (__this->fields).__7__wrap7.fields._version = 0;
  (__this->fields).__7__wrap7.fields._current = (Map_MapScriptBaseObject_o *)0x0;
  if ((char)(__this->fields).editor == '\0') {
    if (*(int *)((long)&TypeInfo_MapLoader[7].klass + 4) == 0) {
      il2cpp_init_class();
    }
    pSVar8 = (TypeInfo_MapLoader[5].fields.m_CancellationTokenSource)->klass;
    if (pSVar8 == (System_Threading_CancellationTokenSource_c *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_11 = System_Collections_Generic_Dictionary<int__object>__get_Keys
                          ((System_Collections_Generic_Dictionary_int__object__o *)pSVar8,
                           MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_I);
    if (__this_11 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_Dictionary_KeyCollection<int__object>__GetEnumerator
              (&SStack_a8,__this_11,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    auStack_88._48_8_ = SStack_a8.fields._currentKey;
    auStack_88._32_8_ =
         CONCAT44(SStack_a8.fields._dictionary._4_4_,SStack_a8.fields._dictionary._0_4_);
    auStack_88._40_8_ = CONCAT44(SStack_a8.fields._version,SStack_a8.fields._index);
    while (__this_07.fields._8_8_ = in_stack_ffffffffffffff30,
          __this_07.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff28,
          __this_07.fields._currentKey = (Il2CppObject *)in_stack_ffffffffffffff38,
          bVar15 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int__object>__MoveNext
                             (__this_07,(MethodInfo_31C2F60 *)(auStack_88 + 0x20)),
          uVar14 = auStack_88._48_8_, (char)bVar15 != '\0') {
      uVar13 = auStack_88._48_4_;
      if (*(int *)((long)&TypeInfo_MapLoader[7].klass + 4) == 0) {
        il2cpp_init_class();
      }
      pSVar8 = (TypeInfo_MapLoader[5].fields.m_CancellationTokenSource)->klass;
      if (pSVar8 == (System_Threading_CancellationTokenSource_c *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pMVar22 = (MethodInfo *)(uVar14 & 0xffffffff);
      mapObject = (Map_MapObject_o *)
                  System_Collections_Generic_Dictionary<int__object>__get_Item
                            ((System_Collections_Generic_Dictionary_int__object__o *)pSVar8,uVar13,
                             MethodInfo_MapObject_get_Item);
      Map_MapLoader__SetParent(mapObject,pMVar22);
    }
    __this_08.fields._8_8_ = in_stack_ffffffffffffff30;
    __this_08.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff28;
    __this_08.fields._currentKey = (Il2CppObject *)in_stack_ffffffffffffff38;
    pMVar22 = MethodInfo_Void_Dispose;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int__object>__Dispose
              (__this_08,(MethodInfo_31C2F50 *)(auStack_88 + 0x20));
  }
  if ((char)(__this->fields).editor == '\0') {
    if (__this_00 == (Map_MapLoader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    Map_MapLoader__Batch(__this_00,pMVar22);
  }
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_init_class();
    cVar3 = *(char *)(*(long *)(TypeInfo_MapManager + 0xb8) + 0x18);
  }
  else {
    cVar3 = *(char *)(*(long *)(TypeInfo_MapManager + 0xb8) + 0x18);
  }
  if (cVar3 == '\0') {
    if (*(int *)((long)&((Map_MapLoader_o *)((long)TypeInfo_MapLoader + 0xe0))->klass + 4) == 0) {
      il2cpp_init_class();
    }
    if (*(char *)&TypeInfo_MapLoader[5].fields.m_CancellationTokenSource[2].fields.
                  _registeredCallbacksLists != '\0') goto LAB_03dab695;
  }
  UnityEngine_AI_NavMesh__RemoveAllNavMeshData((MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_MapLoader[7].klass + 4) == 0) {
    il2cpp_init_class();
  }
  *(undefined1 *)
   &TypeInfo_MapLoader[5].fields.m_CancellationTokenSource[2].fields._registeredCallbacksLists = 0;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar23 = 0;
  bVar15 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    lVar9 = *(long *)(lVar9 + 0x50);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    lVar9 = *(long *)(lVar9 + 0xa8);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar23 = *(byte *)(lVar9 + 0x11);
  }
  if ((bVar23 & (byte)(__this->fields)._gamemodeNeedsNav_5__2) == 0) goto LAB_03dab695;
  if (__this_00 == (Map_MapLoader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Map_MapLoader__ResetSources(__this_00,pMVar22);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_12 = Utility_Util__GetAllTitanAgentIds((MethodInfo *)0x0);
  pSVar19 = (System_Collections_Generic_List_AsyncOperation__o *)il2cpp_runtime_glue(TypeInfo_List_AsyncOperation);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar19,MethodInfo_List_1_UnityEngine_AsyncOperation);
  (__this->fields)._operations_5__9 = pSVar19;
  il2cpp_runtime_glue(&(__this->fields)._operations_5__9,pSVar19);
  if (__this_12 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<int>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&SStack_a8,__this_12,MethodInfo_List_1_T__Enumerator_System_Int32__GetEnumerator);
  auStack_88._16_8_ = SStack_a8.fields._currentKey;
  auStack_88._0_8_ = CONCAT44(SStack_a8.fields._dictionary._4_4_,SStack_a8.fields._dictionary._0_4_)
  ;
  auStack_88._8_8_ = CONCAT44(SStack_a8.fields._version,SStack_a8.fields._index);
  while (__this_09.fields._8_8_ = in_stack_ffffffffffffff30,
        __this_09.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28,
        __this_09.fields._16_8_ = in_stack_ffffffffffffff38,
        bVar15 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                           (__this_09,(MethodInfo_3181160 *)auStack_88), (char)bVar15 != '\0') {
    uVar13 = auStack_88._16_4_;
    if (*(int *)((long)&TypeInfo_MapLoader[7].klass + 4) == 0) {
      il2cpp_init_class();
    }
    pSVar10 = TypeInfo_MapLoader[5].fields.m_CancellationTokenSource;
    in_stack_ffffffffffffff38 = (MethodInfo *)pSVar10[2].fields._timer;
    pbVar2 = &pSVar10[2].fields._disposed;
    in_stack_ffffffffffffff28 = *(undefined8 *)pbVar2;
    in_stack_ffffffffffffff30 = pSVar10[2].fields._executingCallback;
    pUVar20 = Map_MapLoader__CreateNavMeshSurfaceAsyncOperation
                        (TypeInfo_MapLoader,uVar13,
                         *(System_Collections_Generic_List_NavMeshBuildSource__o **)
                          &pSVar10[2].fields._state,
                         (UnityEngine_Bounds_o)*(UnityEngine_Bounds_Fields *)pbVar2,
                         in_stack_ffffffffffffff38);
    lVar9 = MethodInfo_Void_Add;
    pSVar19 = (__this->fields)._operations_5__9;
    if (pSVar19 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    piVar1 = &(pSVar19->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar11 = (pSVar19->fields)._items;
    if (pUVar11 == (UnityEngine_AsyncOperation_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar4 = (pSVar19->fields)._size;
    if (uVar4 < (uint)pUVar11->max_length) {
      (pSVar19->fields)._size = uVar4 + 1;
      pUVar11->m_Items[(int)uVar4] = pUVar20;
      il2cpp_runtime_glue(pUVar11->m_Items + (int)uVar4,pUVar20);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar19,(Il2CppObject *)pUVar20,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
  __this_10.fields._8_8_ = in_stack_ffffffffffffff30;
  __this_10.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
  __this_10.fields._16_8_ = in_stack_ffffffffffffff38;
  System_Collections_Generic_List_Enumerator<int>__Dispose
            (__this_10,(MethodInfo_3181150 *)auStack_88);
  pSVar19 = (__this->fields)._operations_5__9;
joined_r0x03daa7be:
  if (pSVar19 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((pSVar19->fields)._size < 1) {
    if (*(int *)((long)&TypeInfo_MapLoader[7].klass + 4) == 0) {
      il2cpp_init_class();
    }
    *(undefined1 *)
     &TypeInfo_MapLoader[5].fields.m_CancellationTokenSource[2].fields._registeredCallbacksLists = 1;
    (__this->fields)._operations_5__9 = (System_Collections_Generic_List_AsyncOperation__o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._operations_5__9,0);
LAB_03dab695:
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    **(undefined1 **)(TypeInfo_MapManager + 0xb8) = 1;
    return 0;
  }
  iVar24 = 0;
  fStack_b0 = 1.0;
  if (0 < (pSVar19->fields)._size) {
    do {
      pUVar20 = (UnityEngine_AsyncOperation_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar19,iVar24,MethodInfo_AsyncOperation_get_Item)
      ;
      if (pUVar20 == (UnityEngine_AsyncOperation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar15 = UnityEngine_AsyncOperation__get_isDone(pUVar20,(MethodInfo *)0x0);
      pSVar19 = (__this->fields)._operations_5__9;
      if ((char)bVar15 == '\0') {
        if (pSVar19 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar20 = (UnityEngine_AsyncOperation_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar19,iVar24,
                             MethodInfo_AsyncOperation_get_Item);
        if (pUVar20 == (UnityEngine_AsyncOperation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        fVar26 = UnityEngine_AsyncOperation__get_progress(pUVar20,(MethodInfo *)0x0);
        if (fVar26 <= fStack_b0) {
          fStack_b0 = fVar26;
        }
      }
      else {
        if (pSVar19 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar19,iVar24,MethodInfo_Void_RemoveAt);
        iVar24 = iVar24 + -1;
      }
      iVar24 = iVar24 + 1;
      pSVar19 = (__this->fields)._operations_5__9;
      if (pSVar19 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    } while (iVar24 < (pSVar19->fields)._size);
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar12 = *(UI_LoadingMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x30);
  if (pUVar12 == (UI_LoadingMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  UI_LoadingMenu__UpdateLoading(pUVar12,fStack_b0 * 0.25 + 0.75,0,0,(MethodInfo *)0x0);
  pIVar21 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
  UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar21,(MethodInfo *)0x0)
  ;
  (__this->fields).__2__current = pIVar21;
  il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar21);
  (__this->fields).__1__state = 3;
LAB_03dab889:
  return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
}


// Map.MapLoader.<LoadObjectsCoroutine>d__35$$<>m__Finally1
// il2cpp: void Map_MapLoader__LoadObjectsCoroutine_d__35____m__Finally1 (Map_MapLoader__LoadObjectsCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x3daba70

void Map_MapLoader_<LoadObjectsCoroutine>d__35__<>m__Finally1
               (Map_MapLoader__LoadObjectsCoroutine_d__35_o *__this,MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (DAT_0570278e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_0570278e = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_3185E10 *)&(__this->fields).__7__wrap4);
  return;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__35$$<>m__Finally2
// il2cpp: void Map_MapLoader__LoadObjectsCoroutine_d__35____m__Finally2 (Map_MapLoader__LoadObjectsCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x3dabab0

void Map_MapLoader_<LoadObjectsCoroutine>d__35__<>m__Finally2
               (Map_MapLoader__LoadObjectsCoroutine_d__35_o *__this,MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (DAT_0570278f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_0570278f = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_3185E10 *)&(__this->fields).__7__wrap7);
  return;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__35$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Map_MapLoader__LoadObjectsCoroutine_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current (Map_MapLoader__LoadObjectsCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x3dabaf0

Il2CppObject *
Map_MapLoader_<LoadObjectsCoroutine>d__35__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Map_MapLoader__LoadObjectsCoroutine_d__35_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__35$$System.Collections.IEnumerator.Reset
// il2cpp: void Map_MapLoader__LoadObjectsCoroutine_d__35__System_Collections_IEnumerator_Reset (Map_MapLoader__LoadObjectsCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x3dabb00

void Map_MapLoader_<LoadObjectsCoroutine>d__35__System_Collections_IEnumerator_Reset
               (Map_MapLoader__LoadObjectsCoroutine_d__35_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// Map.MapLoader.<LoadObjectsCoroutine>d__35$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Map_MapLoader__LoadObjectsCoroutine_d__35__System_Collections_IEnumerator_get_Current (Map_MapLoader__LoadObjectsCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x3dabb40

Il2CppObject *
Map_MapLoader_<LoadObjectsCoroutine>d__35__System_Collections_IEnumerator_get_Current
          (Map_MapLoader__LoadObjectsCoroutine_d__35_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.MapLoader.<UpdateAllNavMeshes>d__42$$MoveNext
// il2cpp: void Map_MapLoader__UpdateAllNavMeshes_d__42__MoveNext (Map_MapLoader__UpdateAllNavMeshes_d__42_o __this, const MethodInfo* method);
// 0x3dabb50

void Map_MapLoader_<UpdateAllNavMeshes>d__42__MoveNext
               (Map_MapLoader__UpdateAllNavMeshes_d__42_o __this,MethodInfo *method)

{
  Il2CppClass *__this_00;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_01;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_02;
  bool_conflict bVar1;
  System_Threading_Tasks_Task_o *__this_03;
  System_Threading_Tasks_Task_TResult__o *unaff_RBX;
  MethodInfo *in_RSI;
  System_Runtime_CompilerServices_IAsyncStateMachine_o *in_stack_ffffffffffffffd8;
  System_Runtime_CompilerServices_TaskAwaiter_o SVar2;
  
  if (DAT_05702790 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_AwaitUnsafeOnCompleted_TaskAwaiter_MapLoade);
    il2cpp_init_method_metadata(&TypeInfo_AsyncTaskMethodBuilder);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata();
    DAT_05702790 = '\x01';
  }
  SVar2.fields.m_task =
       (System_Runtime_CompilerServices_TaskAwaiter_Fields)(System_Threading_Tasks_Task_o *)0x0;
  if (*(int *)&method->methodPointer == 0) {
    SVar2.fields.m_task = (System_Runtime_CompilerServices_TaskAwaiter_Fields)method->return_type;
    method->return_type = (Il2CppType *)0x0;
    *(undefined4 *)&method->methodPointer = 0xffffffff;
  }
  else {
    __this_00 = method->klass;
    UnityEngine_AI_NavMesh__RemoveAllNavMeshData((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    *(undefined1 *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x98) = 0;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if ((char)bVar1 == '\0') goto LAB_03dabce0;
    if (__this_00 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_03 = Map_MapLoader__GenerateNavMesh((Map_MapLoader_o *)__this_00,in_RSI);
    if (__this_03 == (System_Threading_Tasks_Task_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    SVar2 = System_Threading_Tasks_Task__GetAwaiter(__this_03,(MethodInfo *)0x0);
    bVar1 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted
                      ((System_Runtime_CompilerServices_TaskAwaiter_o)&stack0xffffffffffffffe0,
                       (MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      *(undefined4 *)&method->methodPointer = 0;
      method->return_type = (Il2CppType *)SVar2.fields.m_task;
      il2cpp_runtime_glue(&method->return_type,0);
      if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_01.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
           (System_Action_o *)SVar2.fields.m_task;
      __this_01.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
           in_stack_ffffffffffffffd8;
      __this_01.fields.m_builder.fields.m_task = unaff_RBX;
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted<TaskAwaiter__MapLoader_<UpdateAllNavMeshes>d__42>
                (__this_01,
                 (System_Runtime_CompilerServices_TaskAwaiter_o *)&method->virtualMethodPointer,
                 (Map_MapLoader__UpdateAllNavMeshes_d__42_o *)&stack0xffffffffffffffe0,
                 (MethodInfo_246DD10 *)method);
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult
            ((System_Runtime_CompilerServices_TaskAwaiter_o)&stack0xffffffffffffffe0,
             (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(undefined1 *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x98) = 1;
LAB_03dabce0:
  *(undefined4 *)&method->methodPointer = 0xfffffffe;
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_02.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
       (System_Action_o *)SVar2.fields.m_task;
  __this_02.fields.m_builder.fields.m_coreState.fields.m_stateMachine = in_stack_ffffffffffffffd8;
  __this_02.fields.m_builder.fields.m_task = unaff_RBX;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult
            (__this_02,(MethodInfo *)&method->virtualMethodPointer);
  return;
}


// Map.MapLoader.<UpdateAllNavMeshes>d__42$$SetStateMachine
// il2cpp: void Map_MapLoader__UpdateAllNavMeshes_d__42__SetStateMachine (Map_MapLoader__UpdateAllNavMeshes_d__42_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x3dabe30

void Map_MapLoader_<UpdateAllNavMeshes>d__42__SetStateMachine
               (Map_MapLoader__UpdateAllNavMeshes_d__42_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method
               )

{
  if (DAT_05702791 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AsyncTaskMethodBuilder);
    DAT_05702791 = '\x01';
  }
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetStateMachine
            ((System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o)__this.fields._0_24_,
             (System_Runtime_CompilerServices_IAsyncStateMachine_o *)&stateMachine->monitor,method);
  return;
}


// Map.MapLoader.<UpdateNavMesh>d__41$$MoveNext
// il2cpp: void Map_MapLoader__UpdateNavMesh_d__41__MoveNext (Map_MapLoader__UpdateNavMesh_d__41_o __this, const MethodInfo* method);
// 0x3dabe90

void Map_MapLoader_<UpdateNavMesh>d__41__MoveNext
               (Map_MapLoader__UpdateNavMesh_d__41_o __this,MethodInfo *method)

{
  Map_MapLoader_o *__this_00;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_01;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_02;
  bool_conflict bVar1;
  System_Threading_Tasks_Task_o *__this_03;
  System_Runtime_CompilerServices_TaskAwaiter_o SVar2;
  System_Action_o *unaff_RBX;
  MethodInfo *in_RSI;
  System_Action_o *unaff_R14;
  
  if (DAT_05702792 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_AwaitUnsafeOnCompleted_TaskAwaiter_MapLoade);
    il2cpp_init_method_metadata(&TypeInfo_AsyncTaskMethodBuilder);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05702792 = '\x01';
  }
  if (*(int *)&method->methodPointer == 0) {
    SVar2.fields.m_task = (System_Runtime_CompilerServices_TaskAwaiter_Fields)method->klass;
    method->klass = (Il2CppClass *)0x0;
    *(undefined4 *)&method->methodPointer = 0xffffffff;
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = *(Map_MapLoader_o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60);
    if (__this_00 == (Map_MapLoader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_03 = Map_MapLoader__UpdateAllNavMeshes(__this_00,in_RSI);
    if (__this_03 == (System_Threading_Tasks_Task_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    SVar2 = System_Threading_Tasks_Task__GetAwaiter(__this_03,(MethodInfo *)0x0);
    bVar1 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted
                      ((System_Runtime_CompilerServices_TaskAwaiter_o)&stack0xffffffffffffffe8,
                       (MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      *(undefined4 *)&method->methodPointer = 0;
      method->klass = (Il2CppClass *)SVar2.fields.m_task;
      il2cpp_runtime_glue(&method->klass,0);
      if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_01.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction = unaff_RBX;
      __this_01.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
           (System_Runtime_CompilerServices_IAsyncStateMachine_o *)SVar2.fields.m_task;
      __this_01.fields.m_builder.fields.m_task = (System_Threading_Tasks_Task_TResult__o *)unaff_R14
      ;
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted<TaskAwaiter__MapLoader_<UpdateNavMesh>d__41>
                (__this_01,
                 (System_Runtime_CompilerServices_TaskAwaiter_o *)&method->virtualMethodPointer,
                 (Map_MapLoader__UpdateNavMesh_d__41_o *)&stack0xffffffffffffffe8,
                 (MethodInfo_246DDA0 *)method);
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult
            ((System_Runtime_CompilerServices_TaskAwaiter_o)&stack0xffffffffffffffe8,
             (MethodInfo *)0x0);
  *(undefined4 *)&method->methodPointer = 0xfffffffe;
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_02.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction = unaff_RBX;
  __this_02.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)SVar2.fields.m_task;
  __this_02.fields.m_builder.fields.m_task = (System_Threading_Tasks_Task_TResult__o *)unaff_R14;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult
            (__this_02,(MethodInfo *)&method->virtualMethodPointer);
  return;
}


// Map.MapLoader.<UpdateNavMesh>d__41$$SetStateMachine
// il2cpp: void Map_MapLoader__UpdateNavMesh_d__41__SetStateMachine (Map_MapLoader__UpdateNavMesh_d__41_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x3dac0f0

void Map_MapLoader_<UpdateNavMesh>d__41__SetStateMachine
               (Map_MapLoader__UpdateNavMesh_d__41_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method
               )

{
  if (DAT_05702793 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AsyncTaskMethodBuilder);
    DAT_05702793 = '\x01';
  }
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetStateMachine
            ((System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o)__this.fields._0_24_,
             (System_Runtime_CompilerServices_IAsyncStateMachine_o *)&stateMachine->monitor,method);
  return;
}


// Map.MapLoader$$Init
// il2cpp: void Map_MapLoader__Init (const MethodInfo* method);
// 0x3d9f990

void Map_MapLoader__Init(MethodInfo *method)

{
  long lVar1;
  Il2CppObject *pIVar2;
  Events_OnPreLoadScene_o *value;
  Map_MapScriptBasicMaterial_o *__this;
  Utility_Color255_o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_05702764 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnPreLoadScene);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_init_method_metadata(&TypeInfo_OnPreLoadScene);
    il2cpp_init_method_metadata(&MethodInfo_MapLoader_CreateSingleton_MapLoader);
    il2cpp_init_method_metadata(&"Transparent");
    DAT_05702764 = '\x01';
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = Utility_SingletonFactory__CreateSingleton<object>
                     (*(Il2CppObject **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60),MethodInfo_MapLoader_CreateSingleton_MapLoader);
  lVar1 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(Il2CppObject **)(lVar1 + 0x60) = pIVar2;
  il2cpp_runtime_glue(lVar1 + 0x60);
  value = (Events_OnPreLoadScene_o *)il2cpp_runtime_glue(TypeInfo_OnPreLoadScene);
  Events_OnPreLoadScene___ctor();
  method_00 = (MethodInfo *)0x0;
  Events_EventManager__add_OnPreLoadScene(value,(MethodInfo *)0x0);
  __this = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_glue(TypeInfo_MapScriptBasicMaterial);
  Map_MapScriptBasicMaterial___ctor(__this,method_00);
  if (__this != (Map_MapScriptBasicMaterial_o *)0x0) {
    (__this->fields).Shader = "Transparent";
    il2cpp_runtime_glue(&__this->fields);
    __this_00 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
    Utility_Color255___ctor(__this_00,0x7e,0xff,0xff,0x50,(MethodInfo *)0x0);
    (__this->fields).Color = __this_00;
    il2cpp_runtime_glue(&(__this->fields).Color,__this_00);
    lVar1 = *(long *)(TypeInfo_MapLoader + 0xb8);
    *(Map_MapScriptBasicMaterial_o **)(lVar1 + 0x70) = __this;
    il2cpp_runtime_glue(lVar1 + 0x70,__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$OnPreLoadScene
// il2cpp: void Map_MapLoader__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x3d9fb20

void Map_MapLoader__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  int iVar1;
  UnityEngine_MonoBehaviour_o *__this;
  long lVar2;
  
  if (DAT_05702765 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05702765 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60);
  }
  else {
    __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60);
  }
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_MonoBehaviour__StopAllCoroutines(__this,(MethodInfo *)0x0);
    lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
    *(undefined1 *)(lVar2 + 0x80) = 0;
    *(undefined8 *)(lVar2 + 0x88) = 0;
    il2cpp_runtime_glue(lVar2 + 0x88,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$GetNextObjectId
// il2cpp: int32_t Map_MapLoader__GetNextObjectId (const MethodInfo* method);
// 0x3d9fbd0

int32_t Map_MapLoader__GetNextObjectId(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702766 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05702766 = '\x01';
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar1 = *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x68) + 1;
  *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x68) = iVar1;
  return iVar1;
}


// Map.MapLoader$$StartLoadObjects
// il2cpp: void Map_MapLoader__StartLoadObjects (System_Collections_Generic_List_string__o* customAssets, System_Collections_Generic_List_MapScriptBaseObject__o* objects, Map_MapScriptOptions_o* options, Settings_WeatherSet_o* weather, bool editor, const MethodInfo* method);
// 0x3d9fc20

void Map_MapLoader__StartLoadObjects
               (System_Collections_Generic_List_string__o *customAssets,
               System_Collections_Generic_List_MapScriptBaseObject__o *objects,
               Map_MapScriptOptions_o *options,Settings_WeatherSet_o *weather,bool_conflict editor,
               MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  Map_MapLoader_o *__this_00;
  long lVar4;
  System_Collections_IEnumerator_o *routine;
  long lVar5;
  bool_conflict bVar6;
  undefined4 in_register_00000084;
  undefined1 uVar7;
  char local_3c;
  
  bVar6 = editor;
  if (DAT_05702767 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05702767 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar4 = *(long *)(TypeInfo_MapLoader + 0xb8);
    lVar5 = *(long *)(lVar4 + 0x78);
  }
  else {
    lVar4 = *(long *)(TypeInfo_MapLoader + 0xb8);
    lVar5 = *(long *)(lVar4 + 0x78);
  }
  if (lVar5 != 0) {
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    iVar2 = *(int32_t *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    if (0 < iVar2) {
      System_Array__Clear(*(System_Array_o **)(lVar5 + 0x10),0,iVar2,(MethodInfo *)0x0);
      lVar4 = *(long *)(TypeInfo_MapLoader + 0xb8);
    }
    if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar4 + 0x58) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Clear
                (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar4 + 0x58),
                 MethodInfo_Void_Clear);
      pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x50);
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__Clear(pSVar3,MethodInfo_Void_Clear);
        pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x48);
        if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__Clear(pSVar3,MethodInfo_Void_Clear);
          __this = *(System_Collections_Generic_Dictionary_int__object__o **)
                    (*(long *)(TypeInfo_MapLoader + 0xb8) + 8);
          if (__this != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            System_Collections_Generic_Dictionary<int__object>__Clear(__this,MethodInfo_Void_Clear);
            if ((System_Collections_Generic_Dictionary_int__object__o *)
                **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
                (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              System_Collections_Generic_Dictionary<int__object>__Clear
                        ((System_Collections_Generic_Dictionary_int__object__o *)
                         **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Void_Clear);
              pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                        (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
              if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary<object__object>__Clear(pSVar3,MethodInfo_Void_Clear);
                lVar4 = *(long *)(TypeInfo_MapLoader + 0xb8);
                lVar5 = *(long *)(lVar4 + 0x28);
                if (lVar5 != 0) {
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  iVar2 = *(int32_t *)(lVar5 + 0x18);
                  *(undefined4 *)(lVar5 + 0x18) = 0;
                  if (0 < iVar2) {
                    System_Array__Clear(*(System_Array_o **)(lVar5 + 0x10),0,iVar2,(MethodInfo *)0x0
                                       );
                    lVar4 = *(long *)(TypeInfo_MapLoader + 0xb8);
                  }
                  lVar5 = *(long *)(lVar4 + 0x30);
                  if (lVar5 != 0) {
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    iVar2 = *(int32_t *)(lVar5 + 0x18);
                    *(undefined4 *)(lVar5 + 0x18) = 0;
                    if (0 < iVar2) {
                      System_Array__Clear(*(System_Array_o **)(lVar5 + 0x10),0,iVar2,
                                          (MethodInfo *)0x0);
                      lVar4 = *(long *)(TypeInfo_MapLoader + 0xb8);
                    }
                    lVar5 = *(long *)(lVar4 + 0x38);
                    if (lVar5 != 0) {
                      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                      iVar2 = *(int32_t *)(lVar5 + 0x18);
                      *(undefined4 *)(lVar5 + 0x18) = 0;
                      if (0 < iVar2) {
                        System_Array__Clear(*(System_Array_o **)(lVar5 + 0x10),0,iVar2,
                                            (MethodInfo *)0x0);
                        lVar4 = *(long *)(TypeInfo_MapLoader + 0xb8);
                      }
                      if (*(System_Collections_Generic_Dictionary_object__object__o **)
                           (lVar4 + 0x40) !=
                          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                        System_Collections_Generic_Dictionary<object__object>__Clear
                                  (*(System_Collections_Generic_Dictionary_object__object__o **)
                                    (lVar4 + 0x40),MethodInfo_Void_Clear);
                        pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                  (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
                        if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0
                           ) {
                          System_Collections_Generic_Dictionary<object__object>__Clear
                                    (pSVar3,MethodInfo_Void_Clear);
                          pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                    (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x20);
                          if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)
                                        0x0) {
                            System_Collections_Generic_Dictionary<object__object>__Clear
                                      (pSVar3,MethodInfo_Void_Clear);
                            lVar4 = TypeInfo_MapLoader;
                            lVar5 = *(long *)(TypeInfo_MapLoader + 0xb8);
                            *(undefined4 *)(lVar5 + 0x68) = 1;
                            local_3c = (char)editor;
                            uVar7 = 0;
                            if ((options != (Map_MapScriptOptions_o *)0x0) &&
                               (uVar7 = 0, local_3c == '\0')) {
                              uVar7 = (undefined1)(options->fields).HasWeather;
                            }
                            if (*(int *)(lVar4 + 0xe4) == 0) {
                              il2cpp_init_class(lVar4);
                              lVar5 = *(long *)(TypeInfo_MapLoader + 0xb8);
                            }
                            *(undefined1 *)(lVar5 + 0x80) = uVar7;
                            *(Settings_WeatherSet_o **)(lVar5 + 0x88) = weather;
                            il2cpp_runtime_glue(lVar5 + 0x88,weather);
                            __this_00 = *(Map_MapLoader_o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60)
                            ;
                            if (__this_00 != (Map_MapLoader_o *)0x0) {
                              routine = Map_MapLoader__LoadObjectsCoroutine
                                                  (__this_00,customAssets,objects,editor & 0xff,
                                                   (MethodInfo *)
                                                   CONCAT44(in_register_00000084,bVar6));
                              UnityEngine_MonoBehaviour__StartCoroutine
                                        ((UnityEngine_MonoBehaviour_o *)__this_00,routine,
                                         (MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$RegisterMapLight
// il2cpp: Map_MapLight_o* Map_MapLoader__RegisterMapLight (UnityEngine_Light_o* light, bool isDaylight, const MethodInfo* method);
// 0x3da00d0

Map_MapLight_o *
Map_MapLoader__RegisterMapLight
          (UnityEngine_Light_o *light,bool_conflict isDaylight,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar3;
  long lVar4;
  Map_MapLight_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  float fVar6;
  
  if (DAT_05702768 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_MapLight);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05702768 = '\x01';
  }
  __this_00 = (Map_MapLight_o *)il2cpp_runtime_glue(TypeInfo_MapLight);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).Light = light;
  il2cpp_runtime_glue(&__this_00->fields);
  if (light != (UnityEngine_Light_o *)0x0) {
    fVar6 = UnityEngine_Light__get_intensity(light,(MethodInfo *)0x0);
    (__this_00->fields).MaxIntensity = fVar6;
    pUVar5 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)light,(MethodInfo *)0x0);
    (__this_00->fields)._transform = pUVar5;
    il2cpp_runtime_glue(&(__this_00->fields)._transform,pUVar5);
    *(char *)&(__this_00->fields)._isDaylight = (char)isDaylight;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar4 = MethodInfo_Void_Add;
    __this = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x30);
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this_00;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this,(Il2CppObject *)__this_00,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        return __this_00;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$FindObjectFromCollider
// il2cpp: Map_MapObject_o* Map_MapLoader__FindObjectFromCollider (UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x3da0210

Map_MapObject_o *
Map_MapLoader__FindObjectFromCollider(UnityEngine_Collider_o *collider,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  UnityEngine_Transform_o *__this;
  UnityEngine_GameObject_o *key;
  UnityEngine_Transform_o *x;
  Map_MapObject_o *pMVar3;
  
  if (DAT_05702769 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702769 = '\x01';
  }
  if (collider != (UnityEngine_Collider_o *)0x0) {
    for (__this = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
        __this != (UnityEngine_Transform_o *)0x0;
        __this = UnityEngine_Transform__get_parent(__this,(MethodInfo *)0x0)) {
      key = UnityEngine_Component__get_gameObject
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        (pSVar1,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pMVar3 = (Map_MapObject_o *)
                   System_Collections_Generic_Dictionary<object__object>__get_Item
                             (pSVar1,(Il2CppObject *)key,MethodInfo_MapObject_get_Item);
          return pMVar3;
        }
        break;
      }
      x = UnityEngine_Transform__get_parent(__this,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        return (Map_MapObject_o *)0x0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$LoadObject
// il2cpp: Map_MapObject_o* Map_MapLoader__LoadObject (Map_MapScriptBaseObject_o* scriptObject, bool editor, const MethodInfo* method);
// 0x3da0370

Map_MapObject_o *
Map_MapLoader__LoadObject
          (Map_MapScriptBaseObject_o *scriptObject,bool_conflict editor,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t parent;
  int iVar3;
  uint key;
  Map_MapScriptBaseObject_o *pMVar4;
  undefined8 *puVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_int__object__o *pSVar6;
  UnityEngine_GameObject_o *pUVar7;
  bool_conflict bVar8;
  Map_MapObject_o *__this_00;
  System_String_o *pSVar9;
  System_Collections_Generic_HashSet_int__o *pSVar10;
  UnityEngine_Transform_o *transform;
  Map_MapScriptBaseObject_c *pMVar11;
  MethodInfo *pMVar12;
  byte bVar13;
  int iVar14;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  MethodInfo *in_R8;
  char local_34;
  
  if (DAT_0570276a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Int32__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_int);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    il2cpp_init_method_metadata(&TypeInfo_MinimapHandler);
    il2cpp_init_method_metadata(&"Interact/Supply");
    il2cpp_init_method_metadata(&"Map load error: map object with duplicate ID found (");
    il2cpp_init_method_metadata(&")");
    il2cpp_init_method_metadata(&"Supply");
    DAT_0570276a = '\x01';
    method = extraout_RDX;
  }
  if (scriptObject == (Map_MapScriptBaseObject_o *)0x0) goto LAB_03da0875;
  pMVar11 = scriptObject->klass;
  bVar2 = (pMVar11->_2).naturalAligment;
  pMVar12 = (MethodInfo *)CONCAT71((int7)((ulong)method >> 8),bVar2);
  bVar13 = (TypeInfo_MapScriptSceneObject->_2).naturalAligment;
  if ((bVar2 < bVar13) || ((pMVar11->_2).typeHierarchy[(ulong)bVar13 - 1] != TypeInfo_MapScriptSceneObject)) {
    pMVar12 = (MethodInfo *)0x0;
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar11 = scriptObject->klass;
      pMVar12 = (MethodInfo *)
                CONCAT71((int7)((ulong)extraout_RDX_00 >> 8),(pMVar11->_2).naturalAligment);
      bVar13 = (TypeInfo_MapScriptSceneObject->_2).naturalAligment;
    }
    if (((byte)pMVar12 < bVar13) || ((pMVar11->_2).typeHierarchy[(ulong)bVar13 - 1] != TypeInfo_MapScriptSceneObject)
       ) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(scriptObject);
    }
    pMVar12 = (MethodInfo *)
              Map_MapLoader__LoadSceneObject
                        ((Map_MapScriptSceneObject_o *)scriptObject,editor & 0xff,pMVar12);
  }
  parent = (scriptObject->fields).Parent;
  __this_00 = (Map_MapObject_o *)il2cpp_runtime_glue(TypeInfo_MapObject);
  Map_MapObject___ctor(__this_00,parent,(UnityEngine_GameObject_o *)pMVar12,scriptObject,in_R8);
  if ((__this_00 == (Map_MapObject_o *)0x0) ||
     (pMVar4 = (__this_00->fields).ScriptObject, pMVar4 == (Map_MapScriptBaseObject_o *)0x0))
  goto LAB_03da0875;
  iVar3 = (pMVar4->fields).Id;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  puVar5 = *(undefined8 **)(TypeInfo_MapLoader + 0xb8);
  iVar14 = *(int *)(puVar5 + 0xd);
  if (*(int *)(puVar5 + 0xd) <= iVar3) {
    iVar14 = iVar3;
  }
  *(int *)(puVar5 + 0xd) = iVar14;
  if ((System_Collections_Generic_Dictionary_int__object__o *)*puVar5 ==
      (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_03da0875;
  piVar1 = &(scriptObject->fields).Id;
  bVar8 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                    ((System_Collections_Generic_Dictionary_int__object__o *)*puVar5,*piVar1,
                     MethodInfo_Boolean_ContainsKey);
  if ((char)bVar8 != '\0') {
    pSVar9 = System_Int32__ToString((int32_t)piVar1,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat("Map load error: map object with duplicate ID found (",pSVar9,")",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ApplicationManagers_DebugConsole__Log(pSVar9,1,(MethodInfo *)0x0);
    return __this_00;
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8)
      == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_03da0875;
  System_Collections_Generic_Dictionary<int__object>__Add
            ((System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8),*piVar1,(Il2CppObject *)__this_00,MethodInfo_Void_Add);
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03da0875;
  System_Collections_Generic_Dictionary<object__object>__Add
            (__this,(Il2CppObject *)pMVar12,(Il2CppObject *)__this_00,MethodInfo_Void_Add);
  local_34 = (char)editor;
  if ((scriptObject->fields).Parent < 1) {
LAB_03da06ce:
    if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto LAB_03da06df;
LAB_03da084d:
    il2cpp_init_class();
    Map_MapLoader__SetTransform(__this_00,pMVar12);
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = *(System_Collections_Generic_Dictionary_int__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 8);
    if (pSVar6 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_03da0875;
    bVar8 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                      (pSVar6,(scriptObject->fields).Parent,MethodInfo_Boolean_ContainsKey);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = *(System_Collections_Generic_Dictionary_int__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 8);
    key = (scriptObject->fields).Parent;
    if ((char)bVar8 != '\0') {
      if ((pSVar6 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
         (pSVar10 = (System_Collections_Generic_HashSet_int__o *)
                    System_Collections_Generic_Dictionary<int__object>__get_Item
                              (pSVar6,key,MethodInfo_HashSet_1_System_Int32__get_Item),
         pSVar10 == (System_Collections_Generic_HashSet_int__o *)0x0)) goto LAB_03da0875;
      pMVar12 = (MethodInfo *)(ulong)(uint)*piVar1;
      System_Collections_Generic_HashSet<int>__Add(pSVar10,*piVar1,MethodInfo_Boolean_Add);
      goto LAB_03da06ce;
    }
    pSVar10 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_glue(TypeInfo_HashSet_int);
    System_Collections_Generic_HashSet<int>___ctor(pSVar10,MethodInfo_HashSet_1_System_Int32);
    if ((pSVar10 == (System_Collections_Generic_HashSet_int__o *)0x0) ||
       (System_Collections_Generic_HashSet<int>__Add(pSVar10,*piVar1,MethodInfo_Boolean_Add),
       pSVar6 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) goto LAB_03da0875;
    pMVar12 = (MethodInfo *)(ulong)key;
    System_Collections_Generic_Dictionary<int__object>__Add
              (pSVar6,key,(Il2CppObject *)pSVar10,MethodInfo_Void_Add);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto LAB_03da084d;
LAB_03da06df:
    Map_MapLoader__SetTransform(__this_00,pMVar12);
  }
  if (local_34 == '\0') {
    if ((char)(scriptObject->fields).Active == '\0') {
      pUVar7 = (__this_00->fields).GameObject;
      if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_03da0875;
      UnityEngine_GameObject__SetActive(pUVar7,0,(MethodInfo *)0x0);
    }
    pSVar9 = (scriptObject->fields).Asset;
    if (pSVar9 == (System_String_o *)0x0) {
LAB_03da0875:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar8 = System_String__StartsWith(pSVar9,"Interact/Supply",(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      pUVar7 = (__this_00->fields).GameObject;
      if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_03da0875;
      transform = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UI_MinimapHandler__CreateMinimapIcon(transform,"Supply",(MethodInfo *)0x0);
    }
  }
  return __this_00;
}


// Map.MapLoader$$SetParent
// il2cpp: void Map_MapLoader__SetParent (Map_MapObject_o* obj, Map_MapObject_o* parent, const MethodInfo* method);
// 0x3da0ce0

void Map_MapLoader__SetParent(Map_MapObject_o *obj,Map_MapObject_o *parent,MethodInfo *method)

{
  int iVar1;
  int32_t key;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  Map_MapScriptBaseObject_o *pMVar3;
  UnityEngine_GameObject_o *pUVar4;
  bool_conflict bVar5;
  System_Collections_Generic_HashSet_int__o *pSVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Transform_o *p;
  
  if (DAT_0570276b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Int32__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_int);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_0570276b = '\x01';
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if ((obj == (Map_MapObject_o *)0x0) ||
     (pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 8),
     pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) goto LAB_03da108b;
  bVar5 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                    (pSVar2,(obj->fields).Parent,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar5 != '\0') {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 8);
    if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_03da108b;
    pSVar6 = (System_Collections_Generic_HashSet_int__o *)
             System_Collections_Generic_Dictionary<int__object>__get_Item
                       (pSVar2,(obj->fields).Parent,MethodInfo_HashSet_1_System_Int32__get_Item);
    pMVar3 = (obj->fields).ScriptObject;
    if ((pMVar3 == (Map_MapScriptBaseObject_o *)0x0) ||
       (pSVar6 == (System_Collections_Generic_HashSet_int__o *)0x0)) goto LAB_03da108b;
    bVar5 = System_Collections_Generic_HashSet<int>__Contains
                      (pSVar6,(pMVar3->fields).Id,MethodInfo_Boolean_Contains);
    if ((char)bVar5 != '\0') {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 8);
      if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_03da108b;
      pSVar6 = (System_Collections_Generic_HashSet_int__o *)
               System_Collections_Generic_Dictionary<int__object>__get_Item
                         (pSVar2,(obj->fields).Parent,MethodInfo_HashSet_1_System_Int32__get_Item);
      pMVar3 = (obj->fields).ScriptObject;
      if ((pMVar3 == (Map_MapScriptBaseObject_o *)0x0) ||
         (pSVar6 == (System_Collections_Generic_HashSet_int__o *)0x0)) goto LAB_03da108b;
      System_Collections_Generic_HashSet<int>__Remove(pSVar6,(pMVar3->fields).Id,MethodInfo_Boolean_Remove);
    }
  }
  if (parent == (Map_MapObject_o *)0x0) {
    (obj->fields).Parent = 0;
    pUVar4 = (obj->fields).GameObject;
    if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar7 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
       pUVar7 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(pUVar7,(UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if (obj == parent) {
      return;
    }
    pMVar3 = (obj->fields).ScriptObject;
    if (pMVar3 != (Map_MapScriptBaseObject_o *)0x0) {
      if ((parent->fields).Parent == (pMVar3->fields).Id) {
        return;
      }
      pMVar3 = (parent->fields).ScriptObject;
      if (pMVar3 != (Map_MapScriptBaseObject_o *)0x0) {
        (obj->fields).Parent = (pMVar3->fields).Id;
        pUVar4 = (obj->fields).GameObject;
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          pUVar7 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
          pUVar4 = (parent->fields).GameObject;
          if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
             (p = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
             pUVar7 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetParent(pUVar7,p,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                      (*(long *)(TypeInfo_MapLoader + 0xb8) + 8);
            if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              bVar5 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                                (pSVar2,(obj->fields).Parent,MethodInfo_Boolean_ContainsKey);
              if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                        (*(long *)(TypeInfo_MapLoader + 0xb8) + 8);
              key = (obj->fields).Parent;
              if ((char)bVar5 == '\0') {
                pSVar6 = (System_Collections_Generic_HashSet_int__o *)
                         il2cpp_runtime_glue(TypeInfo_HashSet_int);
                System_Collections_Generic_HashSet<int>___ctor(pSVar6,MethodInfo_HashSet_1_System_Int32);
                pMVar3 = (obj->fields).ScriptObject;
                if (((pMVar3 != (Map_MapScriptBaseObject_o *)0x0) &&
                    (pSVar6 != (System_Collections_Generic_HashSet_int__o *)0x0)) &&
                   (System_Collections_Generic_HashSet<int>__Add
                              (pSVar6,(pMVar3->fields).Id,MethodInfo_Boolean_Add),
                   pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
                  System_Collections_Generic_Dictionary<int__object>__Add
                            (pSVar2,key,(Il2CppObject *)pSVar6,MethodInfo_Void_Add);
                  return;
                }
              }
              else if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                pSVar6 = (System_Collections_Generic_HashSet_int__o *)
                         System_Collections_Generic_Dictionary<int__object>__get_Item
                                   (pSVar2,key,MethodInfo_HashSet_1_System_Int32__get_Item);
                pMVar3 = (obj->fields).ScriptObject;
                if ((pMVar3 != (Map_MapScriptBaseObject_o *)0x0) &&
                   (pSVar6 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
                  System_Collections_Generic_HashSet<int>__Add
                            (pSVar6,(pMVar3->fields).Id,MethodInfo_Boolean_Add);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03da108b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$DeleteObject
// il2cpp: void Map_MapLoader__DeleteObject (Map_MapObject_o* obj, const MethodInfo* method);
// 0x3da1090

void Map_MapLoader__DeleteObject(Map_MapObject_o *obj,MethodInfo *method)

{
  int iVar1;
  uint key;
  int32_t id;
  Map_MapScriptBaseObject_o *pMVar2;
  UnityEngine_Object_o *obj_00;
  bool_conflict bVar3;
  MethodInfo *method_00;
  
  if (DAT_0570276c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570276c = '\x01';
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (((obj != (Map_MapObject_o *)0x0) &&
      (pMVar2 = (obj->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) &&
     ((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8)
      != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    key = (pMVar2->fields).Id;
    method_00 = (MethodInfo *)(ulong)key;
    bVar3 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_int__object__o *)
                       **(undefined8 **)(TypeInfo_MapLoader + 0xb8),key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      obj_00 = (UnityEngine_Object_o *)(obj->fields).GameObject;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(obj_00,(MethodInfo *)0x0);
      return;
    }
    pMVar2 = (obj->fields).ScriptObject;
    if (pMVar2 != (Map_MapScriptBaseObject_o *)0x0) {
      id = (pMVar2->fields).Id;
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Map_MapLoader__DeleteObject(id,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$DeleteObject
// il2cpp: void Map_MapLoader__DeleteObject (int32_t id, const MethodInfo* method);
// 0x3da11b0

void Map_MapLoader__DeleteObject(int32_t id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  UnityEngine_Object_o *obj;
  System_Collections_Generic_List_Enumerator_int__o __this_00;
  System_Collections_Generic_List_Enumerator_int__o __this_01;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *collection;
  System_Collections_Generic_List_int__o *__this_02;
  Map_MapObject_o *obj_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__c *pSVar4;
  Il2CppType *pIVar5;
  int32_t key;
  int32_t iVar6;
  undefined4 uVar7;
  undefined1 local_48 [24];
  
  if (DAT_0570276d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Int32__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Int32__GetEnumerator);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_List_int);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570276d = '\x01';
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8)
      != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    pIVar3 = System_Collections_Generic_Dictionary<int__object>__get_Item
                       ((System_Collections_Generic_Dictionary_int__object__o *)
                        **(undefined8 **)(TypeInfo_MapLoader + 0xb8),id,MethodInfo_MapObject_get_Item);
    if ((System_Collections_Generic_Dictionary_int__object__o *)
        **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
        (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      System_Collections_Generic_Dictionary<int__object>__Remove
                ((System_Collections_Generic_Dictionary_int__object__o *)
                 **(undefined8 **)(TypeInfo_MapLoader + 0xb8),id,MethodInfo_Boolean_Remove);
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (__this = *(System_Collections_Generic_Dictionary_object__object__o **)
                    (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10),
         __this != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        System_Collections_Generic_Dictionary<object__object>__Remove
                  (__this,pIVar3[1].monitor,MethodInfo_Boolean_Remove);
        pSVar1 = *(System_Collections_Generic_Dictionary_int__object__o **)
                  (*(long *)(TypeInfo_MapLoader + 0xb8) + 8);
        if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          bVar2 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                            (pSVar1,id,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar2 == '\0') {
LAB_03da14c1:
            obj = pIVar3[1].monitor;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
            return;
          }
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar1 = *(System_Collections_Generic_Dictionary_int__object__o **)
                    (*(long *)(TypeInfo_MapLoader + 0xb8) + 8);
          if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            collection = System_Collections_Generic_Dictionary<int__object>__get_Item
                                   (pSVar1,id,MethodInfo_HashSet_1_System_Int32__get_Item);
            __this_02 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_glue(TypeInfo_List_int);
            System_Collections_Generic_List<int>___ctor
                      (__this_02,(System_Collections_Generic_IEnumerable_T__o *)collection,
                       MethodInfo_List_1_System_Int32);
            if (__this_02 != (System_Collections_Generic_List_int__o *)0x0) {
              System_Collections_Generic_List<int>__GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_48,__this_02,
                         MethodInfo_List_1_T__Enumerator_System_Int32__GetEnumerator);
              uVar7 = SUB84(local_48._16_8_,4);
              pSVar4 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
              pIVar5 = (Il2CppType *)local_48._8_8_;
              iVar6 = (int32_t)local_48._16_8_;
              while( true ) {
                key = iVar6;
                __this_00.fields._8_8_ = pIVar5;
                __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar4;
                __this_00.fields._current = key;
                __this_00.fields._20_4_ = uVar7;
                bVar2 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                                  (__this_00,(MethodInfo_3181160 *)&stack0xffffffffffffff98);
                if ((char)bVar2 == '\0') break;
                iVar6 = key;
                if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                if ((System_Collections_Generic_Dictionary_int__object__o *)
                    **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
                    (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                bVar2 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                                  ((System_Collections_Generic_Dictionary_int__object__o *)
                                   **(undefined8 **)(TypeInfo_MapLoader + 0xb8),key,MethodInfo_Boolean_ContainsKey);
                if ((char)bVar2 != '\0') {
                  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  if ((System_Collections_Generic_Dictionary_int__object__o *)
                      **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
                      (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  obj_00 = (Map_MapObject_o *)
                           System_Collections_Generic_Dictionary<int__object>__get_Item
                                     ((System_Collections_Generic_Dictionary_int__object__o *)
                                      **(undefined8 **)(TypeInfo_MapLoader + 0xb8),key,MethodInfo_MapObject_get_Item);
                  Map_MapLoader__SetParent(obj_00,(Map_MapObject_o *)0x0,method_00);
                }
              }
              __this_01.fields._8_8_ = pIVar5;
              __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar4;
              __this_01.fields._current = key;
              __this_01.fields._20_4_ = uVar7;
              System_Collections_Generic_List_Enumerator<int>__Dispose
                        (__this_01,(MethodInfo_3181150 *)&stack0xffffffffffffff98);
              goto LAB_03da14c1;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$LoadObjectsCoroutine
// il2cpp: System_Collections_IEnumerator_o* Map_MapLoader__LoadObjectsCoroutine (Map_MapLoader_o* __this, System_Collections_Generic_List_string__o* customAssets, System_Collections_Generic_List_MapScriptBaseObject__o* objects, bool editor, const MethodInfo* method);
// 0x3da0020

System_Collections_IEnumerator_o *
Map_MapLoader__LoadObjectsCoroutine
          (Map_MapLoader_o *__this,System_Collections_Generic_List_string__o *customAssets,
          System_Collections_Generic_List_MapScriptBaseObject__o *objects,bool_conflict editor,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_0570276e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LoadObjectsCoroutine_d__35);
    DAT_0570276e = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadObjectsCoroutine_d__35);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[3].monitor = __this;
    il2cpp_runtime_glue(&__this_00[3].monitor,__this);
    __this_00[2].klass = (Il2CppClass *)customAssets;
    il2cpp_runtime_glue(__this_00 + 2,customAssets);
    __this_00[3].klass = (Il2CppClass *)objects;
    il2cpp_runtime_glue(__this_00 + 3,objects);
    *(char *)&__this_00[2].monitor = (char)editor;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$GetWorldBounds
// il2cpp: UnityEngine_Bounds_o Map_MapLoader__GetWorldBounds (UnityEngine_Matrix4x4_o mat, UnityEngine_Bounds_o bounds, const MethodInfo* method);
// 0x3da15e0

UnityEngine_Bounds_o *
Map_MapLoader__GetWorldBounds
          (UnityEngine_Bounds_o *__return_storage_ptr__,UnityEngine_Matrix4x4_o mat,
          UnityEngine_Bounds_o bounds,MethodInfo *method)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  UnityEngine_Matrix4x4_o __this;
  UnityEngine_Matrix4x4_o __this_00;
  UnityEngine_Matrix4x4_o __this_01;
  UnityEngine_Matrix4x4_o __this_02;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o UVar13;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 in_stack_ffffffffffffff90;
  undefined4 in_stack_ffffffffffffff94;
  undefined4 in_stack_ffffffffffffff98;
  undefined4 in_stack_ffffffffffffff9c;
  undefined8 in_stack_ffffffffffffffa0;
  undefined8 uVar14;
  undefined4 in_stack_ffffffffffffffa8;
  float in_stack_ffffffffffffffac;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 in_stack_ffffffffffffffb8;
  float fVar15;
  undefined4 in_stack_ffffffffffffffbc;
  float fVar16;
  undefined8 in_stack_ffffffffffffffc0;
  float local_38;
  float fStack_34;
  float fVar4;
  float fVar5;
  
  if (DAT_0570276f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_0570276f = '\x01';
  }
  if (DAT_0570222a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_0570222a = '\x01';
  }
  __this.fields.m20 = (float)in_stack_ffffffffffffff90;
  __this.fields.m00 = (float)(int)in_stack_ffffffffffffff88;
  __this.fields.m10 = (float)(int)((ulong)in_stack_ffffffffffffff88 >> 0x20);
  __this.fields.m30 = (float)in_stack_ffffffffffffff94;
  __this.fields.m01 = (float)in_stack_ffffffffffffff98;
  __this.fields.m11 = (float)in_stack_ffffffffffffff9c;
  __this.fields.m21 = (float)(int)in_stack_ffffffffffffffa0;
  __this.fields.m31 = (float)(int)((ulong)in_stack_ffffffffffffffa0 >> 0x20);
  __this.fields.m02 = (float)in_stack_ffffffffffffffa8;
  __this.fields.m12 = in_stack_ffffffffffffffac;
  __this.fields.m22 = (float)(int)in_stack_ffffffffffffffb0;
  __this.fields.m32 = (float)(int)((ulong)in_stack_ffffffffffffffb0 >> 0x20);
  __this.fields.m03 = (float)in_stack_ffffffffffffffb8;
  __this.fields.m13 = (float)in_stack_ffffffffffffffbc;
  __this.fields.m23 = (float)(int)in_stack_ffffffffffffffc0;
  __this.fields.m33 = (float)(int)((ulong)in_stack_ffffffffffffffc0 >> 0x20);
  UVar12 = UnityEngine_Matrix4x4__MultiplyVector
                     (__this,*(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x3c),
                      (MethodInfo *)&mat);
  fVar5 = UVar12.fields.z;
  fVar6 = UVar12.fields.x;
  fVar4 = UVar12.fields.y;
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    auVar1._8_4_ = extraout_XMM0_Dc;
    auVar1._0_8_ = UVar12.fields._0_8_;
    auVar1._12_4_ = extraout_XMM0_Dd;
    in_stack_ffffffffffffffb0 = auVar1._8_8_;
    il2cpp_init_class();
    in_stack_ffffffffffffffac = fVar4;
  }
  UVar12.fields.y = fVar4;
  UVar12.fields.x = fVar6;
  UVar12.fields.z = fVar5;
  UVar12 = Utility_Util__Abs(UVar12,(MethodInfo *)0x0);
  fVar6 = UVar12.fields.z;
  auVar2._8_4_ = extraout_XMM0_Dc_00;
  auVar2._0_8_ = UVar12.fields._0_8_;
  auVar2._12_4_ = extraout_XMM0_Dd_00;
  fVar4 = UVar12.fields.x;
  fVar5 = UVar12.fields.y;
  uVar14 = auVar2._8_8_;
  if (DAT_056fde1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fde1f = '\x01';
  }
  __this_00.fields.m20 = (float)in_stack_ffffffffffffff90;
  __this_00.fields.m00 = (float)(int)in_stack_ffffffffffffff88;
  __this_00.fields.m10 = (float)(int)((ulong)in_stack_ffffffffffffff88 >> 0x20);
  __this_00.fields.m30 = (float)in_stack_ffffffffffffff94;
  __this_00.fields.m01 = fVar4;
  __this_00.fields.m11 = fVar5;
  __this_00.fields.m21 = (float)(int)uVar14;
  __this_00.fields.m31 = (float)(int)((ulong)uVar14 >> 0x20);
  __this_00.fields.m02 = fVar6;
  __this_00.fields.m12 = in_stack_ffffffffffffffac;
  __this_00.fields.m22 = (float)(int)in_stack_ffffffffffffffb0;
  __this_00.fields.m32 = (float)(int)((ulong)in_stack_ffffffffffffffb0 >> 0x20);
  __this_00.fields.m03 = (float)in_stack_ffffffffffffffb8;
  __this_00.fields.m13 = (float)in_stack_ffffffffffffffbc;
  __this_00.fields.m23 = (float)(int)in_stack_ffffffffffffffc0;
  __this_00.fields.m33 = (float)(int)((ulong)in_stack_ffffffffffffffc0 >> 0x20);
  UVar12 = UnityEngine_Matrix4x4__MultiplyVector
                     (__this_00,
                      *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18),
                      (MethodInfo *)&mat);
  UVar12 = Utility_Util__Abs(UVar12,(MethodInfo *)0x0);
  fVar7 = UVar12.fields.z;
  if (DAT_056fde21 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fde21 = '\x01';
  }
  __this_01.fields.m20 = (float)in_stack_ffffffffffffff90;
  __this_01.fields.m00 = (float)(int)in_stack_ffffffffffffff88;
  __this_01.fields.m10 = (float)(int)((ulong)in_stack_ffffffffffffff88 >> 0x20);
  __this_01.fields.m30 = fVar7;
  __this_01.fields.m01 = fVar4;
  __this_01.fields.m11 = fVar5;
  __this_01.fields.m21 = (float)(int)uVar14;
  __this_01.fields.m31 = (float)(int)((ulong)uVar14 >> 0x20);
  __this_01.fields.m02 = fVar6;
  __this_01.fields.m12 = in_stack_ffffffffffffffac;
  __this_01.fields.m22 = (float)(int)in_stack_ffffffffffffffb0;
  __this_01.fields.m32 = (float)(int)((ulong)in_stack_ffffffffffffffb0 >> 0x20);
  __this_01.fields.m03 = (float)in_stack_ffffffffffffffb8;
  __this_01.fields.m13 = (float)in_stack_ffffffffffffffbc;
  __this_01.fields.m23 = (float)(int)in_stack_ffffffffffffffc0;
  __this_01.fields.m33 = (float)(int)((ulong)in_stack_ffffffffffffffc0 >> 0x20);
  UVar13 = UnityEngine_Matrix4x4__MultiplyVector
                     (__this_01,
                      *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48),
                      (MethodInfo *)&mat);
  UVar13 = Utility_Util__Abs(UVar13,(MethodInfo *)0x0);
  fVar8 = UVar13.fields.z;
  auVar3._8_4_ = extraout_XMM0_Dc_01;
  auVar3._0_8_ = UVar13.fields._0_8_;
  auVar3._12_4_ = extraout_XMM0_Dd_01;
  fVar15 = UVar13.fields.x;
  fVar16 = UVar13.fields.y;
  __this_02.fields.m20 = fVar8;
  __this_02.fields.m00 = (float)(int)in_stack_ffffffffffffff88;
  __this_02.fields.m10 = (float)(int)((ulong)in_stack_ffffffffffffff88 >> 0x20);
  __this_02.fields.m30 = fVar7;
  __this_02.fields.m01 = fVar4;
  __this_02.fields.m11 = fVar5;
  __this_02.fields.m21 = (float)(int)uVar14;
  __this_02.fields.m31 = (float)(int)((ulong)uVar14 >> 0x20);
  __this_02.fields.m02 = fVar6;
  __this_02.fields.m12 = in_stack_ffffffffffffffac;
  __this_02.fields.m22 = (float)(int)in_stack_ffffffffffffffb0;
  __this_02.fields.m32 = (float)(int)((ulong)in_stack_ffffffffffffffb0 >> 0x20);
  __this_02.fields.m03 = fVar15;
  __this_02.fields.m13 = fVar16;
  __this_02.fields.m23 = (float)(int)auVar3._8_8_;
  __this_02.fields.m33 = (float)(int)((ulong)auVar3._8_8_ >> 0x20);
  UVar13 = UnityEngine_Matrix4x4__MultiplyPoint(__this_02,bounds.fields.m_Center,(MethodInfo *)&mat)
  ;
  fVar10 = bounds.fields.m_Extents.fields.x + bounds.fields.m_Extents.fields.x;
  fVar11 = bounds.fields.m_Extents.fields.y + bounds.fields.m_Extents.fields.y;
  fVar9 = bounds.fields.m_Extents.fields.z + bounds.fields.m_Extents.fields.z;
  local_38 = UVar12.fields.x;
  fStack_34 = UVar12.fields.y;
  (__return_storage_ptr__->fields).m_Center.fields.x = (float)(int)UVar13.fields._0_8_;
  (__return_storage_ptr__->fields).m_Center.fields.y =
       (float)(int)((ulong)UVar13.fields._0_8_ >> 0x20);
  (__return_storage_ptr__->fields).m_Center.fields.z = UVar13.fields.z;
  (__return_storage_ptr__->fields).m_Extents.fields.x =
       (fVar9 * fVar15 + local_38 * fVar11 + fVar4 * fVar10) * 0.5;
  (__return_storage_ptr__->fields).m_Extents.fields.y =
       (fVar9 * fVar16 + fStack_34 * fVar11 + fVar5 * fVar10) * 0.5;
  (__return_storage_ptr__->fields).m_Extents.fields.z =
       (fVar8 * fVar9 + fVar7 * fVar11 + fVar6 * fVar10) * 0.5;
  return __return_storage_ptr__;
}


// Map.MapLoader$$CalculateWorldBounds
// il2cpp: UnityEngine_Bounds_o Map_MapLoader__CalculateWorldBounds (Map_MapLoader_o* __this, System_Collections_Generic_List_NavMeshBuildSource__o* sources, const MethodInfo* method);
// 0x3da17f0

UnityEngine_Bounds_o *
Map_MapLoader__CalculateWorldBounds
          (UnityEngine_Bounds_o *__return_storage_ptr__,Map_MapLoader_o *__this,
          System_Collections_Generic_List_NavMeshBuildSource__o *sources,MethodInfo *method)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  UnityEngine_Bounds_o __this_02;
  UnityEngine_Matrix4x4_o __this_03;
  UnityEngine_Matrix4x4_o lhs;
  UnityEngine_Matrix4x4_o mat;
  UnityEngine_Matrix4x4_o lhs_00;
  UnityEngine_Matrix4x4_o mat_00;
  UnityEngine_Matrix4x4_o lhs_01;
  UnityEngine_Matrix4x4_o mat_01;
  UnityEngine_AI_NavMeshBuildSource_o __this_04;
  UnityEngine_AI_NavMeshBuildSource_o __this_05;
  UnityEngine_AI_NavMeshBuildSource_o __this_06;
  UnityEngine_AI_NavMeshBuildSource_o __this_07;
  UnityEngine_AI_NavMeshBuildSource_o __this_08;
  UnityEngine_AI_NavMeshBuildSource_o __this_09;
  UnityEngine_AI_NavMeshBuildSource_o __this_10;
  UnityEngine_Bounds_o bounds;
  UnityEngine_Bounds_o bounds_00;
  UnityEngine_Bounds_o bounds_01;
  UnityEngine_Matrix4x4_o rhs;
  UnityEngine_Matrix4x4_o rhs_00;
  UnityEngine_Matrix4x4_o rhs_01;
  UnityEngine_Bounds_o *pUVar13;
  bool_conflict bVar14;
  int32_t iVar15;
  UnityEngine_Transform_o *pUVar16;
  UnityEngine_TerrainData_o *__this_11;
  MethodInfo *pMVar17;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar26;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar39;
  float fVar40;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar41;
  undefined1 auVar38 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  UnityEngine_Vector3_o UVar46;
  UnityEngine_Quaternion_o UVar47;
  Il2CppClass *in_stack_fffffffffffffbd8;
  System_Collections_Generic_List_T__o *pSVar48;
  Il2CppType *in_stack_fffffffffffffbe0;
  Il2CppMethodPointer pIVar49;
  Il2CppObject *in_stack_fffffffffffffbe8;
  Il2CppObject *pIVar50;
  undefined8 in_stack_fffffffffffffbf0;
  Il2CppMethodPointer pIVar51;
  _union_14 in_stack_fffffffffffffbf8;
  Il2CppClass *pIVar52;
  undefined8 in_stack_fffffffffffffc00;
  Il2CppType *pIVar53;
  undefined8 in_stack_fffffffffffffc08;
  Il2CppClass *pIVar54;
  undefined8 in_stack_fffffffffffffc10;
  _union_13 _Var55;
  Il2CppClass *in_stack_fffffffffffffc18;
  Il2CppClass *pIVar56;
  undefined8 in_stack_fffffffffffffc20;
  Il2CppType *pIVar57;
  undefined8 in_stack_fffffffffffffc28;
  undefined8 in_stack_fffffffffffffc30;
  undefined1 local_3a8 [8];
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  Il2CppClass *local_388;
  Il2CppType *pIStack_380;
  float local_378;
  float fStack_374;
  _union_13 _Stack_370;
  _union_14 local_368;
  float fStack_360;
  float fStack_35c;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  undefined1 local_348 [48];
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  undefined1 local_308 [64];
  _union_14 local_2c8 [2];
  float local_2b8;
  float fStack_2b4;
  undefined1 local_2a8 [16];
  Il2CppObject *local_298;
  Il2CppMethodPointer pIStack_290;
  Il2CppClass *local_288;
  Il2CppType *pIStack_280;
  Il2CppClass *local_278;
  _union_13 _Stack_270;
  _union_247326 local_268;
  _union_13 _Stack_260;
  _union_14 local_258;
  uint32_t uStack_250;
  uint16_t uStack_24c;
  uint16_t uStack_24a;
  uint16_t local_248;
  uint8_t uStack_246;
  uint8_t uStack_245;
  undefined4 uStack_244;
  undefined8 uStack_240;
  UnityEngine_Bounds_o *local_238;
  Il2CppClass *local_230;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  undefined1 local_218 [16];
  undefined1 local_208 [8];
  undefined8 uStack_200;
  Il2CppClass *local_1f8;
  undefined4 uStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  Il2CppClass *local_1e0;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float local_1cc;
  undefined1 local_1c8 [72];
  undefined8 uStack_180;
  _union_14 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  MethodInfo local_158;
  undefined8 uStack_100;
  Il2CppClass *local_f8;
  Il2CppType *pIStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  _union_14 local_d8;
  float fStack_d0;
  float fStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  Il2CppClass *local_b8;
  Il2CppType *pIStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  _union_14 local_98;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  Il2CppClass *local_78;
  Il2CppType *pIStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  _union_14 local_58;
  float fStack_50;
  float fStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (DAT_05702770 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_NavMeshBuildSource_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_AI_NavMeshBuild);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_Mesh);
    il2cpp_init_method_metadata(&TypeInfo_TerrainData);
    DAT_05702770 = '\x01';
  }
  local_308._48_8_ = (Il2CppClass *)0x0;
  local_308._56_8_ = (Il2CppRGCTXData *)0x0;
  local_308._32_8_ = (Il2CppClass *)0x0;
  local_308._40_8_ = (Il2CppType *)0x0;
  local_308._16_8_ = (Il2CppObject *)0x0;
  local_308._24_8_ = (Il2CppMethodPointer)0x0;
  local_308._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_308._8_8_ = (Il2CppMethodPointer)0x0;
  local_3a8 = (undefined1  [8])0x0;
  fStack_3a0 = 0.0;
  fStack_39c = 0.0;
  fStack_398 = 0.0;
  fStack_394 = 0.0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = (_union_14)0x0;
  uStack_170 = 0;
  local_1c8._64_8_ = (void *)0x0;
  uStack_180._0_4_ = 0;
  uStack_180._4_2_ = 0;
  uStack_180._6_2_ = 0;
  local_1c8._48_8_ = (Il2CppType **)0x0;
  local_1c8._56_8_ = (Il2CppRGCTXData *)0x0;
  local_1c8._32_8_ = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  local_1c8._40_8_ = (Il2CppType *)0x0;
  local_1c8._16_8_ = (InvokerMethod)0x0;
  local_1c8._24_8_ = (char *)0x0;
  local_1c8._0_8_ = (Il2CppMethodPointer)0x0;
  local_1c8._8_8_ = (Il2CppMethodPointer)0x0;
  local_158.slot = 0;
  local_158.parameters_count = '\0';
  local_158.bitflags = '\0';
  local_158._84_4_ = 0;
  uStack_100 = 0;
  local_158.field8_0x40.genericMethod = (void *)0x0;
  local_158.token = 0;
  local_158.flags = 0;
  local_158.iflags = 0;
  local_158.parameters = (void *)0x0;
  local_158.field7_0x38.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_158.klass = (Il2CppClass *)0x0;
  local_158.return_type = (Il2CppType *)0x0;
  local_158.invoker_method = (InvokerMethod)0x0;
  local_158.name = (char *)0x0;
  local_158.methodPointer = (Il2CppMethodPointer)0x0;
  local_158.virtualMethodPointer = (Il2CppMethodPointer)0x0;
  pUVar16 = UnityEngine_Component__get_transform
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
    UVar46 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
    _local_2b8 = UVar46.fields._0_8_;
    local_2c8[0]._0_4_ = UVar46.fields.z;
    pUVar16 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
      UVar47 = UnityEngine_Transform__get_rotation(pUVar16,(MethodInfo *)0x0);
      auVar21._8_4_ = extraout_XMM0_Dc;
      auVar21._0_8_ = UVar47.fields._0_8_;
      auVar21._12_4_ = extraout_XMM0_Dd;
      fVar26 = UVar47.fields.z;
      fVar27 = UVar47.fields.w;
      if (DAT_056fe077 == '\0') {
        local_218._8_4_ = in_XMM1_Dc;
        local_218._0_8_ = UVar47.fields._8_8_;
        local_218._12_4_ = in_XMM1_Dd;
        _local_208 = auVar21;
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fe077 = '\x01';
        auVar21 = _local_208;
        fVar26 = (float)local_218._0_4_;
        fVar27 = (float)local_218._4_4_;
      }
      UVar46.fields.z = (float)local_2c8[0]._0_4_;
      UVar46.fields._0_8_ = _local_2b8;
      UVar47.fields._0_8_ = auVar21._0_8_;
      UVar47.fields.w = fVar27;
      UVar47.fields.z = fVar26;
      local_238 = __return_storage_ptr__;
      UnityEngine_Matrix4x4__TRS
                ((UnityEngine_Matrix4x4_o *)local_2a8,UVar46,UVar47,
                 (UnityEngine_Vector3_o)
                 *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                 (MethodInfo *)0x0);
      local_308._48_8_ = local_278;
      local_308._56_8_ = _Stack_270;
      local_308._32_8_ = local_288;
      local_308._40_8_ = pIStack_280;
      local_308._16_8_ = local_298;
      local_308._24_8_ = pIStack_290;
      local_308._0_8_ = local_2a8._0_8_;
      local_308._8_8_ = local_2a8._8_8_;
      __this_03.fields._8_8_ = in_stack_fffffffffffffbe0;
      __this_03.fields._0_8_ = in_stack_fffffffffffffbd8;
      __this_03.fields._16_8_ = in_stack_fffffffffffffbe8;
      __this_03.fields.m21 = (float)(int)in_stack_fffffffffffffbf0;
      __this_03.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffbf0 >> 0x20);
      __this_03.fields._32_8_ = in_stack_fffffffffffffbf8.genericMethod;
      __this_03.fields.m22 = (float)in_stack_fffffffffffffc00;
      __this_03.fields.m32 = SUB84(in_stack_fffffffffffffc00,4);
      __this_03.fields.m03 = (float)(int)in_stack_fffffffffffffc08;
      __this_03.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffc08 >> 0x20);
      __this_03.fields.m23 = (float)(int)in_stack_fffffffffffffc10;
      __this_03.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffc10 >> 0x20);
      UnityEngine_Matrix4x4__get_inverse
                ((UnityEngine_Matrix4x4_o *)local_2a8,__this_03,(MethodInfo *)local_308);
      local_308._48_8_ = local_278;
      local_308._56_8_ = _Stack_270;
      local_308._32_8_ = local_288;
      local_308._40_8_ = pIStack_280;
      local_308._16_8_ = local_298;
      local_308._24_8_ = pIStack_290;
      local_308._0_8_ = local_2a8._0_8_;
      local_308._8_8_ = local_2a8._8_8_;
      local_3a8 = (undefined1  [8])0x0;
      fStack_3a0 = 0.0;
      fStack_39c = 0.0;
      fStack_398 = 0.0;
      fStack_394 = 0.0;
      if (sources != (System_Collections_Generic_List_NavMeshBuildSource__o *)0x0) {
        System_Collections_Generic_List<NavMeshBuildSource>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_2a8,sources,MethodInfo_List_1_T__Enumerator_UnityEngine_AI_NavMeshBuild
                  );
        local_168._0_2_ = local_248;
        local_168._2_1_ = uStack_246;
        local_168._3_1_ = uStack_245;
        local_168._4_4_ = uStack_244;
        uStack_160 = uStack_240;
        local_178 = local_258;
        uStack_170._0_4_ = uStack_250;
        uStack_170._4_2_ = uStack_24c;
        uStack_170._6_2_ = uStack_24a;
        local_1c8._64_8_ = local_268;
        uStack_180 = _Stack_260;
        local_1c8._48_8_ = local_278;
        local_1c8._56_8_ = _Stack_270;
        local_1c8._32_8_ = local_288;
        local_1c8._40_8_ = pIStack_280;
        local_1c8._16_8_ = local_298;
        local_1c8._24_8_ = pIStack_290;
        local_1c8._0_8_ = local_2a8._0_8_;
        local_1c8._8_8_ = local_2a8._8_8_;
LAB_03da1b70:
        while( true ) {
          __this_00.fields._8_8_ = in_stack_fffffffffffffbe0;
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffbd8
          ;
          __this_00.fields._current = in_stack_fffffffffffffbe8;
          bVar14 = System_Collections_Generic_List_Enumerator<NavMeshBuildSource>__MoveNext
                             (__this_00,(MethodInfo_3184F90 *)local_1c8);
          if ((char)bVar14 == '\0') {
            __this_01.fields._8_8_ = in_stack_fffffffffffffbe0;
            __this_01.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffbd8;
            __this_01.fields._current = in_stack_fffffffffffffbe8;
            System_Collections_Generic_List_Enumerator<NavMeshBuildSource>__Dispose
                      (__this_01,(MethodInfo_3184F80 *)local_1c8);
            pUVar13 = local_238;
            __this_02.fields._8_8_ = in_stack_fffffffffffffbe0;
            __this_02.fields.m_Center.fields._0_8_ = in_stack_fffffffffffffbd8;
            __this_02.fields.m_Extents.fields._4_8_ = in_stack_fffffffffffffbe8;
            UnityEngine_Bounds__Expand(__this_02,0.1,(MethodInfo *)local_3a8);
            (pUVar13->fields).m_Extents.fields.y = fStack_398;
            (pUVar13->fields).m_Extents.fields.z = fStack_394;
            (pUVar13->fields).m_Center.fields.x = (float)local_3a8._0_4_;
            (pUVar13->fields).m_Center.fields.y = (float)local_3a8._4_4_;
            *(ulong *)&(pUVar13->fields).m_Center.fields.z = CONCAT44(fStack_39c,fStack_3a0);
            return pUVar13;
          }
          local_158.slot = (uint16_t)local_168;
          local_158.parameters_count = local_168._2_1_;
          local_158.bitflags = local_168._3_1_;
          local_158._84_4_ = local_168._4_4_;
          uStack_100 = uStack_160;
          local_158.field8_0x40 = local_178;
          local_158.token = (uint32_t)uStack_170;
          local_158.flags = uStack_170._4_2_;
          local_158.iflags = uStack_170._6_2_;
          local_158.parameters = (Il2CppType **)local_1c8._64_8_;
          local_158.field7_0x38 = uStack_180;
          local_158.klass = (Il2CppClass *)local_1c8._48_8_;
          local_158.return_type = (Il2CppType *)local_1c8._56_8_;
          local_158.invoker_method = (InvokerMethod)local_1c8._32_8_;
          local_158.name = (char *)local_1c8._40_8_;
          local_158.methodPointer = (Il2CppMethodPointer)local_1c8._16_8_;
          local_158.virtualMethodPointer = (Il2CppMethodPointer)local_1c8._24_8_;
          __this_04.fields.m_Transform.fields._8_8_ = in_stack_fffffffffffffbe0;
          __this_04.fields.m_Transform.fields._0_8_ = in_stack_fffffffffffffbd8;
          __this_04.fields.m_Transform.fields._16_8_ = in_stack_fffffffffffffbe8;
          __this_04.fields.m_Transform.fields.m21 = (float)(int)in_stack_fffffffffffffbf0;
          __this_04.fields.m_Transform.fields.m31 =
               (float)(int)((ulong)in_stack_fffffffffffffbf0 >> 0x20);
          __this_04.fields.m_Transform.fields._32_8_ = in_stack_fffffffffffffbf8.genericMethod;
          __this_04.fields.m_Transform.fields.m22 = (float)in_stack_fffffffffffffc00;
          __this_04.fields.m_Transform.fields.m32 = SUB84(in_stack_fffffffffffffc00,4);
          __this_04.fields.m_Transform.fields.m03 = (float)(int)in_stack_fffffffffffffc08;
          __this_04.fields.m_Transform.fields.m13 =
               (float)(int)((ulong)in_stack_fffffffffffffc08 >> 0x20);
          __this_04.fields.m_Transform.fields.m23 = (float)(int)in_stack_fffffffffffffc10;
          __this_04.fields.m_Transform.fields.m33 =
               (float)(int)((ulong)in_stack_fffffffffffffc10 >> 0x20);
          __this_04.fields.m_Size.fields._0_8_ = in_stack_fffffffffffffc18;
          __this_04.fields.m_Size.fields.z = (float)(int)in_stack_fffffffffffffc20;
          __this_04.fields.m_Shape = (int)((ulong)in_stack_fffffffffffffc20 >> 0x20);
          __this_04.fields.m_Area = (int)in_stack_fffffffffffffc28;
          __this_04.fields.m_InstanceID = (int)((ulong)in_stack_fffffffffffffc28 >> 0x20);
          __this_04.fields.m_ComponentID = (int)in_stack_fffffffffffffc30;
          __this_04.fields.m_GenerateLinks = (int)((ulong)in_stack_fffffffffffffc30 >> 0x20);
          iVar15 = UnityEngine_AI_NavMeshBuildSource__get_shape(__this_04,&local_158);
          if (3 < iVar15 - 2U) break;
          local_278 = (Il2CppClass *)local_308._48_8_;
          _Stack_270.rgctx_data = (Il2CppRGCTXData *)local_308._56_8_;
          local_288 = (Il2CppClass *)local_308._32_8_;
          pIStack_280 = (Il2CppType *)local_308._40_8_;
          local_298 = (Il2CppObject *)local_308._16_8_;
          pIStack_290 = (Il2CppMethodPointer)local_308._24_8_;
          local_2a8._0_8_ = local_308._0_8_;
          local_2a8._8_8_ = local_308._8_8_;
          __this_06.fields.m_Transform.fields._8_8_ = in_stack_fffffffffffffbe0;
          __this_06.fields.m_Transform.fields._0_8_ = in_stack_fffffffffffffbd8;
          __this_06.fields.m_Transform.fields._16_8_ = in_stack_fffffffffffffbe8;
          __this_06.fields.m_Transform.fields.m21 = (float)(int)in_stack_fffffffffffffbf0;
          __this_06.fields.m_Transform.fields.m31 =
               (float)(int)((ulong)in_stack_fffffffffffffbf0 >> 0x20);
          __this_06.fields.m_Transform.fields._32_8_ = in_stack_fffffffffffffbf8.genericMethod;
          __this_06.fields.m_Transform.fields.m22 = (float)in_stack_fffffffffffffc00;
          __this_06.fields.m_Transform.fields.m32 = SUB84(in_stack_fffffffffffffc00,4);
          __this_06.fields.m_Transform.fields.m03 = (float)(int)in_stack_fffffffffffffc08;
          __this_06.fields.m_Transform.fields.m13 =
               (float)(int)((ulong)in_stack_fffffffffffffc08 >> 0x20);
          __this_06.fields.m_Transform.fields.m23 = (float)(int)in_stack_fffffffffffffc10;
          __this_06.fields.m_Transform.fields.m33 =
               (float)(int)((ulong)in_stack_fffffffffffffc10 >> 0x20);
          __this_06.fields.m_Size.fields._0_8_ = in_stack_fffffffffffffc18;
          __this_06.fields.m_Size.fields.z = (float)(int)in_stack_fffffffffffffc20;
          __this_06.fields.m_Shape = (int)((ulong)in_stack_fffffffffffffc20 >> 0x20);
          __this_06.fields.m_Area = (int)in_stack_fffffffffffffc28;
          __this_06.fields.m_InstanceID = (int)((ulong)in_stack_fffffffffffffc28 >> 0x20);
          __this_06.fields.m_ComponentID = (int)in_stack_fffffffffffffc30;
          __this_06.fields.m_GenerateLinks = (int)((ulong)in_stack_fffffffffffffc30 >> 0x20);
          UnityEngine_AI_NavMeshBuildSource__get_transform
                    ((UnityEngine_Matrix4x4_o *)&local_388,__this_06,&local_158);
          uVar28 = CONCAT44(fStack_374,local_378);
          in_stack_fffffffffffffc30 = CONCAT44(_Stack_370._4_4_,_Stack_370._0_4_);
          local_c8 = CONCAT44(fStack_354,local_358);
          uStack_c0 = CONCAT44(fStack_34c,fStack_350);
          local_d8.genericMethod = local_368.genericMethod;
          fStack_d0 = fStack_360;
          fStack_cc = fStack_35c;
          local_f8 = local_388;
          pIStack_f0 = pIStack_380;
          lhs.fields.m20 = (float)local_2a8._8_4_;
          lhs.fields.m30 = (float)local_2a8._12_4_;
          lhs.fields.m00 = (float)local_2a8._0_4_;
          lhs.fields.m10 = (float)local_2a8._4_4_;
          lhs.fields._16_8_ = local_298;
          lhs.fields._24_8_ = pIStack_290;
          lhs.fields._32_8_ = local_288;
          lhs.fields._40_8_ = pIStack_280;
          lhs.fields._48_8_ = local_278;
          lhs.fields._56_8_ = _Stack_270.rgctx_data;
          rhs.fields._8_8_ = pIStack_380;
          rhs.fields._0_8_ = local_388;
          rhs.fields.m01 = local_378;
          rhs.fields.m11 = fStack_374;
          rhs.fields.m21 = (float)_Stack_370._0_4_;
          rhs.fields.m31 = (float)_Stack_370._4_4_;
          rhs.fields._32_8_ = local_368.genericMethod;
          rhs.fields.m22 = fStack_360;
          rhs.fields.m32 = fStack_35c;
          rhs.fields.m03 = local_358;
          rhs.fields.m13 = fStack_354;
          rhs.fields.m23 = fStack_350;
          rhs.fields.m33 = fStack_34c;
          pSVar48 = (System_Collections_Generic_List_T__o *)local_2a8._0_8_;
          pIVar49 = (Il2CppMethodPointer)local_2a8._8_8_;
          pIVar50 = local_298;
          pIVar51 = pIStack_290;
          pIVar52 = local_288;
          pIVar53 = pIStack_280;
          pIVar54 = local_278;
          _Var55 = _Stack_270;
          pIVar56 = local_388;
          local_e8 = uVar28;
          uStack_e0 = in_stack_fffffffffffffc30;
          UnityEngine_Matrix4x4__op_Multiply
                    ((UnityEngine_Matrix4x4_o *)local_348,lhs,rhs,(MethodInfo *)0x0);
          local_358 = local_318;
          fStack_354 = fStack_314;
          fStack_350 = fStack_310;
          fStack_34c = fStack_30c;
          local_368 = (_union_14)local_348._32_8_;
          fStack_360 = (float)local_348._40_4_;
          fStack_35c = (float)local_348._44_4_;
          local_378 = (float)local_348._16_4_;
          fStack_374 = (float)local_348._20_4_;
          _Stack_370._0_4_ = local_348._24_4_;
          _Stack_370._4_4_ = local_348._28_4_;
          local_388 = (Il2CppClass *)local_348._0_8_;
          pIVar57 = pIStack_380;
          pIStack_380 = (Il2CppType *)CONCAT44(local_348._12_4_,local_348._8_4_);
          if (DAT_056fdd15 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fdd15 = '\x01';
          }
          in_stack_fffffffffffffc18 = (Il2CppClass *)**(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          uVar1 = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
          pMVar17 = (MethodInfo *)0x0;
          __this_07.fields.m_Transform.fields._8_8_ = pIVar49;
          __this_07.fields.m_Transform.fields._0_8_ = pSVar48;
          __this_07.fields.m_Transform.fields._16_8_ = pIVar50;
          __this_07.fields.m_Transform.fields._24_8_ = pIVar51;
          __this_07.fields.m_Transform.fields._32_8_ = pIVar52;
          __this_07.fields.m_Transform.fields._40_8_ = pIVar53;
          __this_07.fields.m_Transform.fields._48_8_ = pIVar54;
          __this_07.fields.m_Transform.fields._56_8_ = _Var55.rgctx_data;
          __this_07.fields.m_Size.fields._0_8_ = pIVar56;
          __this_07.fields._72_8_ = pIVar57;
          __this_07.fields.m_Area = (int)uVar28;
          __this_07.fields.m_InstanceID = (int)((ulong)uVar28 >> 0x20);
          __this_07.fields.m_ComponentID = (int)in_stack_fffffffffffffc30;
          __this_07.fields.m_GenerateLinks = (int)((ulong)in_stack_fffffffffffffc30 >> 0x20);
          UVar46 = UnityEngine_AI_NavMeshBuildSource__get_size(__this_07,&local_158);
          _local_2b8 = UVar46.fields._0_8_;
          local_2c8[0]._0_4_ = UVar46.fields.z;
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          fStack_1ec = local_2b8 * 0.5;
          fStack_1e8 = fStack_2b4 * 0.5;
          fStack_1e4 = (float)local_2c8[0]._0_4_ * 0.5;
          in_stack_fffffffffffffc28 = CONCAT44(fStack_1e4,fStack_1e8);
          in_stack_fffffffffffffc20 = CONCAT44(fStack_1ec,uVar1);
          in_stack_fffffffffffffbe8 = (Il2CppObject *)CONCAT44(fStack_374,local_378);
          in_stack_fffffffffffffbf0 = CONCAT44(_Stack_370._4_4_,_Stack_370._0_4_);
          in_stack_fffffffffffffc08 = CONCAT44(fStack_354,local_358);
          in_stack_fffffffffffffc10 = CONCAT44(fStack_34c,fStack_350);
          mat.fields._8_8_ = pIStack_380;
          mat.fields._0_8_ = local_388;
          mat.fields._16_8_ = in_stack_fffffffffffffbe8;
          mat.fields.m21 = (float)_Stack_370._0_4_;
          mat.fields.m31 = (float)_Stack_370._4_4_;
          mat.fields._32_8_ = local_368.genericMethod;
          mat.fields.m22 = fStack_360;
          mat.fields.m32 = fStack_35c;
          mat.fields.m03 = local_358;
          mat.fields.m13 = fStack_354;
          mat.fields.m23 = fStack_350;
          mat.fields.m33 = fStack_34c;
          bounds.fields.m_Center.fields.z = (float)uVar1;
          bounds.fields.m_Extents.fields.x = fStack_1ec;
          bounds.fields.m_Center.fields._0_8_ = in_stack_fffffffffffffc18;
          bounds.fields.m_Extents.fields.y = fStack_1e8;
          bounds.fields.m_Extents.fields.z = fStack_1e4;
          in_stack_fffffffffffffbd8 = local_388;
          in_stack_fffffffffffffbe0 = pIStack_380;
          in_stack_fffffffffffffbf8 = local_368;
          in_stack_fffffffffffffc00 = _fStack_360;
          local_1f8 = in_stack_fffffffffffffc18;
          uStack_1f0 = uVar1;
          Map_MapLoader__GetWorldBounds((UnityEngine_Bounds_o *)local_348,mat,bounds,pMVar17);
          fVar32 = (float)local_348._0_8_ - (float)local_348._12_4_;
          fVar33 = SUB84(local_348._0_8_,4) - (float)local_348._16_4_;
          fVar27 = (float)local_348._8_4_ - (float)local_348._20_4_;
          auVar18._0_4_ = local_3a8._0_4_ - fStack_39c;
          auVar18._4_4_ = local_3a8._4_4_ - fStack_398;
          auVar18._8_8_ = 0;
          auVar5._4_4_ = fVar33;
          auVar5._0_4_ = fVar32;
          auVar5._8_8_ = 0;
          auVar21 = minps(auVar18,auVar5);
          fVar26 = fStack_3a0 - fStack_394;
          if (fVar27 <= fStack_3a0 - fStack_394) {
            fVar26 = fVar27;
          }
          auVar35._0_4_ = local_3a8._0_4_ + fStack_39c;
          auVar35._4_4_ = local_3a8._4_4_ + fStack_398;
          auVar35._8_8_ = 0;
          auVar6._4_4_ = fVar33;
          auVar6._0_4_ = fVar32;
          auVar6._8_8_ = 0;
          auVar37 = maxps(auVar35,auVar6);
          fVar32 = fStack_3a0 + fStack_394;
          if (fStack_3a0 + fStack_394 <= fVar27) {
            fVar32 = fVar27;
          }
          fVar39 = (auVar37._0_4_ - auVar21._0_4_) * 0.5;
          fVar40 = (auVar37._4_4_ - auVar21._4_4_) * 0.5;
          fVar41 = (auVar37._8_4_ - auVar21._8_4_) * 0.0;
          fVar42 = (auVar37._12_4_ - auVar21._12_4_) * 0.0;
          fVar27 = (fVar32 - fVar26) * 0.5;
          fVar32 = auVar21._0_4_ + fVar39;
          fVar33 = auVar21._4_4_ + fVar40;
          fVar25 = auVar21._8_4_ + fVar41;
          fVar34 = auVar21._12_4_ + fVar42;
          fVar45 = (float)local_348._0_8_ + (float)local_348._12_4_;
          fVar44 = SUB84(local_348._0_8_,4) + (float)local_348._16_4_;
          fVar43 = (float)local_348._8_4_ + (float)local_348._20_4_;
          auVar29._0_4_ = fVar32 - fVar39;
          auVar29._4_4_ = fVar33 - fVar40;
          auVar29._8_4_ = fVar25 - fVar41;
          auVar29._12_4_ = fVar34 - fVar42;
          fStack_3a0 = (fVar26 + fVar27) - fVar27;
          auVar11._4_4_ = fVar44;
          auVar11._0_4_ = fVar45;
          auVar11._8_8_ = 0;
          auVar21 = minps(auVar29,auVar11);
          if (fVar43 <= fStack_3a0) {
            fStack_3a0 = fVar43;
          }
          auVar19._0_4_ = fVar32 + fVar39;
          auVar19._4_4_ = fVar33 + fVar40;
          auVar19._8_4_ = fVar25 + fVar41;
          auVar19._12_4_ = fVar34 + fVar42;
          fVar27 = fVar26 + fVar27 + fVar27;
          auVar12._4_4_ = fVar44;
          auVar12._0_4_ = fVar45;
          auVar12._8_8_ = 0;
          auVar37 = maxps(auVar19,auVar12);
          if (fVar27 <= fVar43) {
            fVar27 = fVar43;
          }
          fStack_39c = (auVar37._0_4_ - auVar21._0_4_) * 0.5;
          fStack_398 = (auVar37._4_4_ - auVar21._4_4_) * 0.5;
          fStack_394 = (fVar27 - fStack_3a0) * 0.5;
          local_3a8 = (undefined1  [8])
                      CONCAT44(fStack_398 + auVar21._4_4_,fStack_39c + auVar21._0_4_);
          fStack_3a0 = fStack_394 + fStack_3a0;
        }
        if (iVar15 != 0) goto code_r0x03da1beb;
        __this_08.fields.m_Transform.fields._8_8_ = in_stack_fffffffffffffbe0;
        __this_08.fields.m_Transform.fields._0_8_ = in_stack_fffffffffffffbd8;
        __this_08.fields.m_Transform.fields._16_8_ = in_stack_fffffffffffffbe8;
        __this_08.fields.m_Transform.fields.m21 = (float)(int)in_stack_fffffffffffffbf0;
        __this_08.fields.m_Transform.fields.m31 =
             (float)(int)((ulong)in_stack_fffffffffffffbf0 >> 0x20);
        __this_08.fields.m_Transform.fields._32_8_ = in_stack_fffffffffffffbf8.genericMethod;
        __this_08.fields.m_Transform.fields.m22 = (float)in_stack_fffffffffffffc00;
        __this_08.fields.m_Transform.fields.m32 = SUB84(in_stack_fffffffffffffc00,4);
        __this_08.fields.m_Transform.fields.m03 = (float)(int)in_stack_fffffffffffffc08;
        __this_08.fields.m_Transform.fields.m13 =
             (float)(int)((ulong)in_stack_fffffffffffffc08 >> 0x20);
        __this_08.fields.m_Transform.fields.m23 = (float)(int)in_stack_fffffffffffffc10;
        __this_08.fields.m_Transform.fields.m33 =
             (float)(int)((ulong)in_stack_fffffffffffffc10 >> 0x20);
        __this_08.fields.m_Size.fields._0_8_ = in_stack_fffffffffffffc18;
        __this_08.fields.m_Size.fields.z = (float)(int)in_stack_fffffffffffffc20;
        __this_08.fields.m_Shape = (int)((ulong)in_stack_fffffffffffffc20 >> 0x20);
        __this_08.fields.m_Area = (int)in_stack_fffffffffffffc28;
        __this_08.fields.m_InstanceID = (int)((ulong)in_stack_fffffffffffffc28 >> 0x20);
        __this_08.fields.m_ComponentID = (int)in_stack_fffffffffffffc30;
        __this_08.fields.m_GenerateLinks = (int)((ulong)in_stack_fffffffffffffc30 >> 0x20);
        pMVar17 = (MethodInfo *)
                  UnityEngine_AI_NavMeshBuildSource__get_sourceObject(__this_08,&local_158);
        if (pMVar17 == (MethodInfo *)0x0) {
          pMVar17 = (MethodInfo *)0x0;
        }
        else if ((UnityEngine_Object_c *)pMVar17->methodPointer != TypeInfo_Mesh) {
          pMVar17 = (MethodInfo *)0x0;
        }
        local_278 = (Il2CppClass *)local_308._48_8_;
        _Stack_270.rgctx_data = (Il2CppRGCTXData *)local_308._56_8_;
        local_288 = (Il2CppClass *)local_308._32_8_;
        pIStack_280 = (Il2CppType *)local_308._40_8_;
        local_298 = (Il2CppObject *)local_308._16_8_;
        pIStack_290 = (Il2CppMethodPointer)local_308._24_8_;
        local_2a8._0_8_ = local_308._0_8_;
        local_2a8._8_8_ = local_308._8_8_;
        __this_10.fields.m_Transform.fields._8_8_ = in_stack_fffffffffffffbe0;
        __this_10.fields.m_Transform.fields._0_8_ = in_stack_fffffffffffffbd8;
        __this_10.fields.m_Transform.fields._16_8_ = in_stack_fffffffffffffbe8;
        __this_10.fields.m_Transform.fields.m21 = (float)(int)in_stack_fffffffffffffbf0;
        __this_10.fields.m_Transform.fields.m31 =
             (float)(int)((ulong)in_stack_fffffffffffffbf0 >> 0x20);
        __this_10.fields.m_Transform.fields._32_8_ = in_stack_fffffffffffffbf8.genericMethod;
        __this_10.fields.m_Transform.fields.m22 = (float)in_stack_fffffffffffffc00;
        __this_10.fields.m_Transform.fields.m32 = SUB84(in_stack_fffffffffffffc00,4);
        __this_10.fields.m_Transform.fields.m03 = (float)(int)in_stack_fffffffffffffc08;
        __this_10.fields.m_Transform.fields.m13 =
             (float)(int)((ulong)in_stack_fffffffffffffc08 >> 0x20);
        __this_10.fields.m_Transform.fields.m23 = (float)(int)in_stack_fffffffffffffc10;
        __this_10.fields.m_Transform.fields.m33 =
             (float)(int)((ulong)in_stack_fffffffffffffc10 >> 0x20);
        __this_10.fields.m_Size.fields._0_8_ = in_stack_fffffffffffffc18;
        __this_10.fields.m_Size.fields.z = (float)(int)in_stack_fffffffffffffc20;
        __this_10.fields.m_Shape = (int)((ulong)in_stack_fffffffffffffc20 >> 0x20);
        __this_10.fields.m_Area = (int)in_stack_fffffffffffffc28;
        __this_10.fields.m_InstanceID = (int)((ulong)in_stack_fffffffffffffc28 >> 0x20);
        __this_10.fields.m_ComponentID = (int)in_stack_fffffffffffffc30;
        __this_10.fields.m_GenerateLinks = (int)((ulong)in_stack_fffffffffffffc30 >> 0x20);
        UnityEngine_AI_NavMeshBuildSource__get_transform
                  ((UnityEngine_Matrix4x4_o *)&local_388,__this_10,&local_158);
        local_68 = CONCAT44(fStack_374,local_378);
        in_stack_fffffffffffffc30 = CONCAT44(_Stack_370._4_4_,_Stack_370._0_4_);
        local_48 = CONCAT44(fStack_354,local_358);
        uStack_40 = CONCAT44(fStack_34c,fStack_350);
        local_58.genericMethod = local_368.genericMethod;
        fStack_50 = fStack_360;
        fStack_4c = fStack_35c;
        local_78 = local_388;
        pIStack_70 = pIStack_380;
        lhs_01.fields.m20 = (float)local_2a8._8_4_;
        lhs_01.fields.m30 = (float)local_2a8._12_4_;
        lhs_01.fields.m00 = (float)local_2a8._0_4_;
        lhs_01.fields.m10 = (float)local_2a8._4_4_;
        lhs_01.fields._16_8_ = local_298;
        lhs_01.fields._24_8_ = pIStack_290;
        lhs_01.fields._32_8_ = local_288;
        lhs_01.fields._40_8_ = pIStack_280;
        lhs_01.fields._48_8_ = local_278;
        lhs_01.fields._56_8_ = _Stack_270.rgctx_data;
        rhs_01.fields._8_8_ = pIStack_380;
        rhs_01.fields._0_8_ = local_388;
        rhs_01.fields.m01 = local_378;
        rhs_01.fields.m11 = fStack_374;
        rhs_01.fields.m21 = (float)_Stack_370._0_4_;
        rhs_01.fields.m31 = (float)_Stack_370._4_4_;
        rhs_01.fields._32_8_ = local_368.genericMethod;
        rhs_01.fields.m22 = fStack_360;
        rhs_01.fields.m32 = fStack_35c;
        rhs_01.fields.m03 = local_358;
        rhs_01.fields.m13 = fStack_354;
        rhs_01.fields.m23 = fStack_350;
        rhs_01.fields.m33 = fStack_34c;
        uStack_60 = in_stack_fffffffffffffc30;
        UnityEngine_Matrix4x4__op_Multiply
                  ((UnityEngine_Matrix4x4_o *)local_348,lhs_01,rhs_01,(MethodInfo *)0x0);
        pIStack_380 = (Il2CppType *)CONCAT44(local_348._12_4_,local_348._8_4_);
        local_358 = local_318;
        fStack_354 = fStack_314;
        fStack_350 = fStack_310;
        fStack_34c = fStack_30c;
        local_368 = (_union_14)local_348._32_8_;
        fStack_360 = (float)local_348._40_4_;
        fStack_35c = (float)local_348._44_4_;
        local_378 = (float)local_348._16_4_;
        fStack_374 = (float)local_348._20_4_;
        _Stack_370._0_4_ = local_348._24_4_;
        _Stack_370._4_4_ = local_348._28_4_;
        local_388 = (Il2CppClass *)local_348._0_8_;
        if (pMVar17 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_Mesh__get_bounds
                  ((UnityEngine_Bounds_o *)&local_230,(UnityEngine_Mesh_o *)pMVar17,
                   (MethodInfo *)0x0);
        local_348._16_4_ = fStack_220;
        local_348._20_4_ = fStack_21c;
        local_348._0_8_ = local_230;
        local_348._8_4_ = fStack_228;
        local_348._12_4_ = fStack_224;
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        in_stack_fffffffffffffc28 = CONCAT44(local_348._20_4_,local_348._16_4_);
        in_stack_fffffffffffffc20 = CONCAT44(local_348._12_4_,local_348._8_4_);
        in_stack_fffffffffffffbe8 = (Il2CppObject *)CONCAT44(fStack_374,local_378);
        in_stack_fffffffffffffbf0 = CONCAT44(_Stack_370._4_4_,_Stack_370._0_4_);
        in_stack_fffffffffffffc08 = CONCAT44(fStack_354,local_358);
        in_stack_fffffffffffffc10 = CONCAT44(fStack_34c,fStack_350);
        mat_01.fields._8_8_ = pIStack_380;
        mat_01.fields._0_8_ = local_388;
        mat_01.fields._16_8_ = in_stack_fffffffffffffbe8;
        mat_01.fields.m21 = (float)_Stack_370._0_4_;
        mat_01.fields.m31 = (float)_Stack_370._4_4_;
        mat_01.fields._32_8_ = local_368.genericMethod;
        mat_01.fields.m22 = fStack_360;
        mat_01.fields.m32 = fStack_35c;
        mat_01.fields.m03 = local_358;
        mat_01.fields.m13 = fStack_354;
        mat_01.fields.m23 = fStack_350;
        mat_01.fields.m33 = fStack_34c;
        bounds_01.fields.m_Center.fields.z = (float)local_348._8_4_;
        bounds_01.fields.m_Extents.fields.x = (float)local_348._12_4_;
        bounds_01.fields.m_Center.fields.x = (float)local_348._0_4_;
        bounds_01.fields.m_Center.fields.y = (float)local_348._4_4_;
        bounds_01.fields.m_Extents.fields.y = (float)local_348._16_4_;
        bounds_01.fields.m_Extents.fields.z = (float)local_348._20_4_;
        in_stack_fffffffffffffbd8 = local_388;
        in_stack_fffffffffffffbe0 = pIStack_380;
        in_stack_fffffffffffffbf8 = local_368;
        in_stack_fffffffffffffc00 = _fStack_360;
        in_stack_fffffffffffffc18 = (Il2CppClass *)local_348._0_8_;
        Map_MapLoader__GetWorldBounds((UnityEngine_Bounds_o *)&local_230,mat_01,bounds_01,pMVar17);
        fVar25 = (float)((ulong)local_230 >> 0x20);
        fVar32 = SUB84(local_230,0) - fStack_224;
        fVar33 = fVar25 - fStack_220;
        fVar27 = fStack_228 - fStack_21c;
        auVar23._0_4_ = local_3a8._0_4_ - fStack_39c;
        auVar23._4_4_ = local_3a8._4_4_ - fStack_398;
        auVar23._8_8_ = 0;
        auVar3._4_4_ = fVar33;
        auVar3._0_4_ = fVar32;
        auVar3._8_8_ = 0;
        auVar21 = minps(auVar23,auVar3);
        fVar26 = fStack_3a0 - fStack_394;
        if (fVar27 <= fStack_3a0 - fStack_394) {
          fVar26 = fVar27;
        }
        auVar38._0_4_ = local_3a8._0_4_ + fStack_39c;
        auVar38._4_4_ = local_3a8._4_4_ + fStack_398;
        auVar38._8_8_ = 0;
        auVar4._4_4_ = fVar33;
        auVar4._0_4_ = fVar32;
        auVar4._8_8_ = 0;
        auVar37 = maxps(auVar38,auVar4);
        fVar32 = fStack_3a0 + fStack_394;
        if (fStack_3a0 + fStack_394 <= fVar27) {
          fVar32 = fVar27;
        }
        fVar39 = (auVar37._0_4_ - auVar21._0_4_) * 0.5;
        fVar40 = (auVar37._4_4_ - auVar21._4_4_) * 0.5;
        fVar41 = (auVar37._8_4_ - auVar21._8_4_) * 0.0;
        fVar42 = (auVar37._12_4_ - auVar21._12_4_) * 0.0;
        fStack_394 = (fVar32 - fVar26) * 0.5;
        fVar27 = auVar21._0_4_ + fVar39;
        fVar32 = auVar21._4_4_ + fVar40;
        fVar33 = auVar21._8_4_ + fVar41;
        fVar34 = auVar21._12_4_ + fVar42;
        fVar45 = SUB84(local_230,0) + fStack_224;
        fVar25 = fVar25 + fStack_220;
        fVar43 = fStack_228 + fStack_21c;
        auVar31._0_4_ = fVar27 - fVar39;
        auVar31._4_4_ = fVar32 - fVar40;
        auVar31._8_4_ = fVar33 - fVar41;
        auVar31._12_4_ = fVar34 - fVar42;
        fStack_3a0 = (fVar26 + fStack_394) - fStack_394;
        auVar9._4_4_ = fVar25;
        auVar9._0_4_ = fVar45;
        auVar9._8_8_ = 0;
        auVar21 = minps(auVar31,auVar9);
        uVar28 = auVar21._0_8_;
        if (fVar43 <= fStack_3a0) {
          fStack_3a0 = fVar43;
        }
        auVar24._0_4_ = fVar27 + fVar39;
        auVar24._4_4_ = fVar32 + fVar40;
        auVar24._8_4_ = fVar33 + fVar41;
        auVar24._12_4_ = fVar34 + fVar42;
        fStack_394 = fVar26 + fStack_394 + fStack_394;
        auVar10._4_4_ = fVar25;
        auVar10._0_4_ = fVar45;
        auVar10._8_8_ = 0;
        auVar37 = maxps(auVar24,auVar10);
        if (fStack_394 <= fVar43) {
          fStack_394 = fVar43;
        }
        fStack_39c = auVar37._0_4_ - auVar21._0_4_;
        fStack_398 = auVar37._4_4_ - auVar21._4_4_;
        fStack_394 = fStack_394 - fStack_3a0;
        goto LAB_03da1b3f;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
code_r0x03da1beb:
  if (iVar15 == 1) {
    __this_05.fields.m_Transform.fields._8_8_ = in_stack_fffffffffffffbe0;
    __this_05.fields.m_Transform.fields._0_8_ = in_stack_fffffffffffffbd8;
    __this_05.fields.m_Transform.fields._16_8_ = in_stack_fffffffffffffbe8;
    __this_05.fields.m_Transform.fields.m21 = (float)(int)in_stack_fffffffffffffbf0;
    __this_05.fields.m_Transform.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffbf0 >> 0x20)
    ;
    __this_05.fields.m_Transform.fields._32_8_ = in_stack_fffffffffffffbf8.genericMethod;
    __this_05.fields.m_Transform.fields.m22 = (float)in_stack_fffffffffffffc00;
    __this_05.fields.m_Transform.fields.m32 = SUB84(in_stack_fffffffffffffc00,4);
    __this_05.fields.m_Transform.fields.m03 = (float)(int)in_stack_fffffffffffffc08;
    __this_05.fields.m_Transform.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffc08 >> 0x20)
    ;
    __this_05.fields.m_Transform.fields.m23 = (float)(int)in_stack_fffffffffffffc10;
    __this_05.fields.m_Transform.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffc10 >> 0x20)
    ;
    __this_05.fields.m_Size.fields._0_8_ = in_stack_fffffffffffffc18;
    __this_05.fields.m_Size.fields.z = (float)(int)in_stack_fffffffffffffc20;
    __this_05.fields.m_Shape = (int)((ulong)in_stack_fffffffffffffc20 >> 0x20);
    __this_05.fields.m_Area = (int)in_stack_fffffffffffffc28;
    __this_05.fields.m_InstanceID = (int)((ulong)in_stack_fffffffffffffc28 >> 0x20);
    __this_05.fields.m_ComponentID = (int)in_stack_fffffffffffffc30;
    __this_05.fields.m_GenerateLinks = (int)((ulong)in_stack_fffffffffffffc30 >> 0x20);
    __this_11 = (UnityEngine_TerrainData_o *)
                UnityEngine_AI_NavMeshBuildSource__get_sourceObject(__this_05,&local_158);
    if (__this_11 == (UnityEngine_TerrainData_o *)0x0) {
      __this_11 = (UnityEngine_TerrainData_o *)0x0;
    }
    else if (__this_11->klass != TypeInfo_TerrainData) {
      __this_11 = (UnityEngine_TerrainData_o *)0x0;
    }
    local_278 = (Il2CppClass *)local_308._48_8_;
    _Stack_270.rgctx_data = (Il2CppRGCTXData *)local_308._56_8_;
    local_288 = (Il2CppClass *)local_308._32_8_;
    pIStack_280 = (Il2CppType *)local_308._40_8_;
    local_298 = (Il2CppObject *)local_308._16_8_;
    pIStack_290 = (Il2CppMethodPointer)local_308._24_8_;
    local_2a8._0_8_ = local_308._0_8_;
    local_2a8._8_8_ = local_308._8_8_;
    __this_09.fields.m_Transform.fields._8_8_ = in_stack_fffffffffffffbe0;
    __this_09.fields.m_Transform.fields._0_8_ = in_stack_fffffffffffffbd8;
    __this_09.fields.m_Transform.fields._16_8_ = in_stack_fffffffffffffbe8;
    __this_09.fields.m_Transform.fields.m21 = (float)(int)in_stack_fffffffffffffbf0;
    __this_09.fields.m_Transform.fields.m31 = (float)(int)((ulong)in_stack_fffffffffffffbf0 >> 0x20)
    ;
    __this_09.fields.m_Transform.fields._32_8_ = in_stack_fffffffffffffbf8.genericMethod;
    __this_09.fields.m_Transform.fields.m22 = (float)in_stack_fffffffffffffc00;
    __this_09.fields.m_Transform.fields.m32 = SUB84(in_stack_fffffffffffffc00,4);
    __this_09.fields.m_Transform.fields.m03 = (float)(int)in_stack_fffffffffffffc08;
    __this_09.fields.m_Transform.fields.m13 = (float)(int)((ulong)in_stack_fffffffffffffc08 >> 0x20)
    ;
    __this_09.fields.m_Transform.fields.m23 = (float)(int)in_stack_fffffffffffffc10;
    __this_09.fields.m_Transform.fields.m33 = (float)(int)((ulong)in_stack_fffffffffffffc10 >> 0x20)
    ;
    __this_09.fields.m_Size.fields._0_8_ = in_stack_fffffffffffffc18;
    __this_09.fields.m_Size.fields.z = (float)(int)in_stack_fffffffffffffc20;
    __this_09.fields.m_Shape = (int)((ulong)in_stack_fffffffffffffc20 >> 0x20);
    __this_09.fields.m_Area = (int)in_stack_fffffffffffffc28;
    __this_09.fields.m_InstanceID = (int)((ulong)in_stack_fffffffffffffc28 >> 0x20);
    __this_09.fields.m_ComponentID = (int)in_stack_fffffffffffffc30;
    __this_09.fields.m_GenerateLinks = (int)((ulong)in_stack_fffffffffffffc30 >> 0x20);
    UnityEngine_AI_NavMeshBuildSource__get_transform
              ((UnityEngine_Matrix4x4_o *)&local_388,__this_09,&local_158);
    local_a8 = CONCAT44(fStack_374,local_378);
    in_stack_fffffffffffffc30 = CONCAT44(_Stack_370._4_4_,_Stack_370._0_4_);
    local_88 = CONCAT44(fStack_354,local_358);
    uStack_80 = CONCAT44(fStack_34c,fStack_350);
    local_98.genericMethod = local_368.genericMethod;
    fStack_90 = fStack_360;
    fStack_8c = fStack_35c;
    local_b8 = local_388;
    pIStack_b0 = pIStack_380;
    lhs_00.fields.m20 = (float)local_2a8._8_4_;
    lhs_00.fields.m30 = (float)local_2a8._12_4_;
    lhs_00.fields.m00 = (float)local_2a8._0_4_;
    lhs_00.fields.m10 = (float)local_2a8._4_4_;
    lhs_00.fields._16_8_ = local_298;
    lhs_00.fields._24_8_ = pIStack_290;
    lhs_00.fields._32_8_ = local_288;
    lhs_00.fields._40_8_ = pIStack_280;
    lhs_00.fields._48_8_ = local_278;
    lhs_00.fields._56_8_ = _Stack_270.rgctx_data;
    rhs_00.fields._8_8_ = pIStack_380;
    rhs_00.fields._0_8_ = local_388;
    rhs_00.fields.m01 = local_378;
    rhs_00.fields.m11 = fStack_374;
    rhs_00.fields.m21 = (float)_Stack_370._0_4_;
    rhs_00.fields.m31 = (float)_Stack_370._4_4_;
    rhs_00.fields._32_8_ = local_368.genericMethod;
    rhs_00.fields.m22 = fStack_360;
    rhs_00.fields.m32 = fStack_35c;
    rhs_00.fields.m03 = local_358;
    rhs_00.fields.m13 = fStack_354;
    rhs_00.fields.m23 = fStack_350;
    rhs_00.fields.m33 = fStack_34c;
    uStack_a0 = in_stack_fffffffffffffc30;
    UnityEngine_Matrix4x4__op_Multiply
              ((UnityEngine_Matrix4x4_o *)local_348,lhs_00,rhs_00,(MethodInfo *)0x0);
    pIStack_380 = (Il2CppType *)CONCAT44(local_348._12_4_,local_348._8_4_);
    local_358 = local_318;
    fStack_354 = fStack_314;
    fStack_350 = fStack_310;
    fStack_34c = fStack_30c;
    local_368 = (_union_14)local_348._32_8_;
    fStack_360 = (float)local_348._40_4_;
    fStack_35c = (float)local_348._44_4_;
    local_378 = (float)local_348._16_4_;
    fStack_374 = (float)local_348._20_4_;
    _Stack_370._0_4_ = local_348._24_4_;
    _Stack_370._4_4_ = local_348._28_4_;
    local_388 = (Il2CppClass *)local_348._0_8_;
    if (__this_11 == (UnityEngine_TerrainData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UVar46 = UnityEngine_TerrainData__get_size(__this_11,(MethodInfo *)0x0);
    local_2c8[0] = UVar46.fields._0_8_;
    local_2b8 = UVar46.fields.z;
    pMVar17 = (MethodInfo *)0x0;
    UVar46 = UnityEngine_TerrainData__get_size(__this_11,(MethodInfo *)0x0);
    local_218._0_4_ = UVar46.fields.z;
    uStack_200 = extraout_XMM0_Qb;
    local_208 = (undefined1  [8])UVar46.fields._0_8_;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fStack_1d8 = local_2b8 * 0.5;
    fStack_1d4 = (float)local_208._0_4_ * 0.5;
    fStack_1d0 = (float)local_208._4_4_ * 0.5;
    local_1cc = (float)local_218._0_4_ * 0.5;
    in_stack_fffffffffffffc18 =
         (Il2CppClass *)CONCAT44((float)local_2c8[0]._4_4_ * 0.5,(float)local_2c8[0]._0_4_ * 0.5);
    in_stack_fffffffffffffc28 = CONCAT44(local_1cc,fStack_1d0);
    in_stack_fffffffffffffc20 = CONCAT44(fStack_1d4,fStack_1d8);
    in_stack_fffffffffffffbe8 = (Il2CppObject *)CONCAT44(fStack_374,local_378);
    in_stack_fffffffffffffbf0 = CONCAT44(_Stack_370._4_4_,_Stack_370._0_4_);
    in_stack_fffffffffffffc08 = CONCAT44(fStack_354,local_358);
    in_stack_fffffffffffffc10 = CONCAT44(fStack_34c,fStack_350);
    mat_00.fields._8_8_ = pIStack_380;
    mat_00.fields._0_8_ = local_388;
    mat_00.fields._16_8_ = in_stack_fffffffffffffbe8;
    mat_00.fields.m21 = (float)_Stack_370._0_4_;
    mat_00.fields.m31 = (float)_Stack_370._4_4_;
    mat_00.fields._32_8_ = local_368.genericMethod;
    mat_00.fields.m22 = fStack_360;
    mat_00.fields.m32 = fStack_35c;
    mat_00.fields.m03 = local_358;
    mat_00.fields.m13 = fStack_354;
    mat_00.fields.m23 = fStack_350;
    mat_00.fields.m33 = fStack_34c;
    bounds_00.fields.m_Center.fields.z = fStack_1d8;
    bounds_00.fields.m_Extents.fields.x = fStack_1d4;
    bounds_00.fields.m_Center.fields._0_8_ = in_stack_fffffffffffffc18;
    bounds_00.fields.m_Extents.fields.y = fStack_1d0;
    bounds_00.fields.m_Extents.fields.z = local_1cc;
    in_stack_fffffffffffffbd8 = local_388;
    in_stack_fffffffffffffbe0 = pIStack_380;
    in_stack_fffffffffffffbf8 = local_368;
    in_stack_fffffffffffffc00 = _fStack_360;
    local_1e0 = in_stack_fffffffffffffc18;
    Map_MapLoader__GetWorldBounds((UnityEngine_Bounds_o *)local_348,mat_00,bounds_00,pMVar17);
    fVar32 = (float)local_348._0_8_ - (float)local_348._12_4_;
    fVar33 = SUB84(local_348._0_8_,4) - (float)local_348._16_4_;
    fVar27 = (float)local_348._8_4_ - (float)local_348._20_4_;
    auVar20._0_4_ = local_3a8._0_4_ - fStack_39c;
    auVar20._4_4_ = local_3a8._4_4_ - fStack_398;
    auVar20._8_8_ = 0;
    auVar37._4_4_ = fVar33;
    auVar37._0_4_ = fVar32;
    auVar37._8_8_ = 0;
    auVar21 = minps(auVar20,auVar37);
    fVar26 = fStack_3a0 - fStack_394;
    if (fVar27 <= fStack_3a0 - fStack_394) {
      fVar26 = fVar27;
    }
    auVar36._0_4_ = local_3a8._0_4_ + fStack_39c;
    auVar36._4_4_ = local_3a8._4_4_ + fStack_398;
    auVar36._8_8_ = 0;
    auVar2._4_4_ = fVar33;
    auVar2._0_4_ = fVar32;
    auVar2._8_8_ = 0;
    auVar37 = maxps(auVar36,auVar2);
    fVar32 = fStack_3a0 + fStack_394;
    if (fStack_3a0 + fStack_394 <= fVar27) {
      fVar32 = fVar27;
    }
    fVar34 = (auVar37._0_4_ - auVar21._0_4_) * 0.5;
    fVar39 = (auVar37._4_4_ - auVar21._4_4_) * 0.5;
    fVar40 = (auVar37._8_4_ - auVar21._8_4_) * 0.0;
    fVar41 = (auVar37._12_4_ - auVar21._12_4_) * 0.0;
    fStack_394 = (fVar32 - fVar26) * 0.5;
    fVar27 = auVar21._0_4_ + fVar34;
    fVar32 = auVar21._4_4_ + fVar39;
    fVar33 = auVar21._8_4_ + fVar40;
    fVar25 = auVar21._12_4_ + fVar41;
    fVar43 = (float)local_348._0_8_ + (float)local_348._12_4_;
    fVar45 = SUB84(local_348._0_8_,4) + (float)local_348._16_4_;
    fVar42 = (float)local_348._8_4_ + (float)local_348._20_4_;
    auVar30._0_4_ = fVar27 - fVar34;
    auVar30._4_4_ = fVar32 - fVar39;
    auVar30._8_4_ = fVar33 - fVar40;
    auVar30._12_4_ = fVar25 - fVar41;
    fStack_3a0 = (fVar26 + fStack_394) - fStack_394;
    auVar7._4_4_ = fVar45;
    auVar7._0_4_ = fVar43;
    auVar7._8_8_ = 0;
    auVar21 = minps(auVar30,auVar7);
    uVar28 = auVar21._0_8_;
    if (fVar42 <= fStack_3a0) {
      fStack_3a0 = fVar42;
    }
    auVar22._0_4_ = fVar27 + fVar34;
    auVar22._4_4_ = fVar32 + fVar39;
    auVar22._8_4_ = fVar33 + fVar40;
    auVar22._12_4_ = fVar25 + fVar41;
    fStack_394 = fVar26 + fStack_394 + fStack_394;
    auVar8._4_4_ = fVar45;
    auVar8._0_4_ = fVar43;
    auVar8._8_8_ = 0;
    auVar37 = maxps(auVar22,auVar8);
    if (fStack_394 <= fVar42) {
      fStack_394 = fVar42;
    }
    fStack_39c = auVar37._0_4_ - auVar21._0_4_;
    fStack_398 = auVar37._4_4_ - auVar21._4_4_;
    fStack_394 = fStack_394 - fStack_3a0;
LAB_03da1b3f:
    fStack_398 = fStack_398 * 0.5;
    fStack_39c = fStack_39c * 0.5;
    fStack_394 = fStack_394 * 0.5;
    local_3a8 = (undefined1  [8])
                CONCAT44(fStack_398 + (float)((ulong)uVar28 >> 0x20),fStack_39c + (float)uVar28);
    fStack_3a0 = fStack_394 + fStack_3a0;
  }
  goto LAB_03da1b70;
}


// Map.MapLoader$$ResetSources
// il2cpp: void Map_MapLoader__ResetSources (Map_MapLoader_o* __this, const MethodInfo* method);
// 0x3da2900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Map_MapLoader__ResetSources(Map_MapLoader_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer pIVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  _union_234436 _Var3;
  UnityEngine_LayerMask_o mask;
  int32_t includedLayerMask;
  bool_conflict bVar4;
  uint uVar5;
  Il2CppObject *__this_03;
  System_Int32_array *layers;
  System_Collections_Generic_List_NavMeshBuildMarkup__o *__this_04;
  Il2CppClass *pIVar6;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_05;
  System_Object_array *pSVar7;
  UnityEngine_GameObject_o *item;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar8;
  System_Collections_Generic_List_TSource__o *pSVar9;
  MethodInfo *pMVar10;
  uint uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined8 uVar15;
  undefined8 in_stack_ffffffffffffff80;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar16;
  undefined1 local_48 [16];
  _union_234436 local_38;
  
  if (DAT_05702771 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_AI_NavMeshBuildSource__ToList);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_UnityEngine_AI_NavMeshBuildSource);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_Func_NavMeshBuildSource__bool);
    il2cpp_init_method_metadata(&MethodInfo_Transform___GetComponentsInChildren_Transform);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_AI_NavMeshBuildMarkup);
    il2cpp_init_method_metadata(&TypeInfo_List_NavMeshBuildMarkup);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__ResetSources_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass38_0);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    DAT_05702771 = '\x01';
  }
  __this_03 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass38_0);
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_MapLoader[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = TypeInfo_MapLoader[2].virtualMethodPointer;
  lVar2 = *(long *)(pIVar1 + 0xa0);
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    *(undefined4 *)(lVar2 + 0x18) = 0;
    __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)(pIVar1 + 0xc0);
    if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      System_Collections_Generic_Dictionary<int__object>__Clear(__this_00,MethodInfo_Void_Clear);
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      uVar15 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar14 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      pIVar1 = TypeInfo_MapLoader[2].virtualMethodPointer;
      *(undefined8 *)(pIVar1 + 0xa8) = uVar15;
      *(float *)(pIVar1 + 0xb0) = fVar14;
      *(ulong *)(pIVar1 + 0xb4) = CONCAT44((float)((ulong)uVar15 >> 0x20) * 0.5,(float)uVar15 * 0.5)
      ;
      *(float *)(pIVar1 + 0xbc) = fVar14 * 0.5;
      layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
      if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (layers != (System_Int32_array *)0x0) {
        uVar5 = (uint)layers->max_length;
        if (uVar5 != 0) {
          lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
          layers->m_Items[0] = *(int32_t *)(lVar2 + 0x38);
          if (((uVar5 != 1) && (layers->m_Items[1] = *(int32_t *)(lVar2 + 0x3c), 2 < uVar5)) &&
             (layers->m_Items[2] = *(int32_t *)(lVar2 + 0x34), uVar5 != 3)) {
            layers->m_Items[3] = *(int32_t *)(lVar2 + 0x50);
            mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
            __this_04 = (System_Collections_Generic_List_NavMeshBuildMarkup__o *)
                        il2cpp_runtime_glue(TypeInfo_List_NavMeshBuildMarkup);
            System_Collections_Generic_List<NavMeshBuildMarkup>___ctor(__this_04,MethodInfo_List_1_UnityEngine_AI_NavMeshBuildMarkup);
            includedLayerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
            uVar15 = 0;
            UnityEngine_AI_NavMeshBuilder__CollectSources
                      ((UnityEngine_Transform_o *)0x0,includedLayerMask,1,0,__this_04,
                       *(System_Collections_Generic_List_NavMeshBuildSource__o **)
                        (TypeInfo_MapLoader[2].virtualMethodPointer + 0xa0),(MethodInfo *)0x0);
            pIVar6 = (Il2CppClass *)il2cpp_runtime_glue(TypeInfo_HashSet_GameObject);
            System_Collections_Generic_HashSet<object>___ctor
                      ((System_Collections_Generic_HashSet_object__o *)pIVar6,MethodInfo_HashSet_1_UnityEngine_GameObject);
            if (__this_03 != (Il2CppObject *)0x0) {
              __this_03[1].klass = pIVar6;
              il2cpp_runtime_glue(__this_03 + 1,pIVar6);
              if ((*(System_Collections_Generic_Dictionary_int__object__o **)
                    TypeInfo_MapLoader[2].virtualMethodPointer !=
                   (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                 (__this_05 = System_Collections_Generic_Dictionary<int__object>__get_Values
                                        (*(System_Collections_Generic_Dictionary_int__object__o **)
                                          TypeInfo_MapLoader[2].virtualMethodPointer,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System),
                 __this_05 !=
                 (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
                System_Collections_Generic_Dictionary_ValueCollection<int__object>__GetEnumerator
                          ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                            *)local_48,__this_05,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
                _Var3 = local_38;
                pSVar16 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_48._0_8_;
                while (__this_01.fields._index = (int)in_stack_ffffffffffffff80,
                      __this_01.fields._version = (int)((ulong)in_stack_ffffffffffffff80 >> 0x20),
                      __this_01.fields._dictionary =
                           (System_Collections_Generic_Dictionary_TKey__TValue__o *)uVar15,
                      __this_01.fields._currentValue = (Il2CppObject *)pSVar16,
                      bVar4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__MoveNext
                                        (__this_01,(MethodInfo_31C3100 *)&stack0xffffffffffffff88),
                      (char)bVar4 != '\0') {
                  if (_Var3.genericMethod == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pIVar6 = ((Il2CppObject *)((long)_Var3.genericMethod + 0x20))->klass;
                  if (pIVar6 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  if (*(char *)((long)&(pIVar6->_1).byval_arg.bits + 1) != '\0') {
                    if (*(void **)((long)_Var3.genericMethod + 0x18) ==
                        (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    pSVar7 = UnityEngine_GameObject__GetComponentsInChildren<object>
                                       (*(void **)((long)_Var3.genericMethod + 0x18),MethodInfo_Transform___GetComponentsInChildren_Transform);
                    if (pSVar7 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    uVar5 = (uint)pSVar7->max_length;
                    if (0 < (int)uVar5) {
                      uVar11 = 0;
                      do {
                        if (uVar5 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_raise_exception();
                        }
                        if ((UnityEngine_Component_o *)pSVar7->m_Items[(int)uVar11] ==
                            (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_raise_exception();
                        }
                        pIVar6 = __this_03[1].klass;
                        item = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pSVar7->m_Items[(int)uVar11],
                                          (MethodInfo *)0x0);
                        if (pIVar6 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_raise_exception();
                        }
                        System_Collections_Generic_HashSet<object>__Add
                                  ((System_Collections_Generic_HashSet_object__o *)pIVar6,
                                   (Il2CppObject *)item,MethodInfo_Boolean_Add);
                        uVar11 = uVar11 + 1;
                        uVar5 = (uint)pSVar7->max_length;
                      } while ((int)uVar11 < (int)uVar5);
                    }
                  }
                }
                __this_02.fields._index = (int)in_stack_ffffffffffffff80;
                __this_02.fields._version = (int)((ulong)in_stack_ffffffffffffff80 >> 0x20);
                __this_02.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)uVar15;
                __this_02.fields._currentValue = (Il2CppObject *)pSVar16;
                System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__Dispose
                          (__this_02,(MethodInfo_31C30F0 *)&stack0xffffffffffffff88);
                if (*(int *)((long)&TypeInfo_MapLoader[2].parameters + 4) == 0) {
                  il2cpp_init_class();
                }
                pSVar8 = *(System_Collections_Generic_IEnumerable_TSource__o **)
                          (TypeInfo_MapLoader[2].virtualMethodPointer + 0xa0);
                predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_NavMeshBuildSource__bool);
                System_Func<NavMeshBuildSource__bool>___ctor();
                pSVar8 = System_Linq_Enumerable__Where<NavMeshBuildSource>
                                   (pSVar8,predicate,MethodInfo_IEnumerable_1_UnityEngine_AI_NavMeshBuildSource);
                pSVar9 = System_Linq_Enumerable__ToList<NavMeshBuildSource>(pSVar8,MethodInfo_List_1_UnityEngine_AI_NavMeshBuildSource__ToList);
                pMVar10 = TypeInfo_MapLoader;
                pIVar1 = TypeInfo_MapLoader[2].virtualMethodPointer;
                *(System_Collections_Generic_List_TSource__o **)(pIVar1 + 0xa0) = pSVar9;
                il2cpp_runtime_glue(pIVar1 + 0xa0,pSVar9);
                if (__this_03[1].klass != (Il2CppClass *)0x0) {
                  System_Collections_Generic_HashSet<object>__Clear
                            ((System_Collections_Generic_HashSet_object__o *)__this_03[1].klass,
                             MethodInfo_Void_Clear);
                  Map_MapLoader__CalculateWorldBounds
                            ((UnityEngine_Bounds_o *)local_48,__this,
                             *(System_Collections_Generic_List_NavMeshBuildSource__o **)
                              (TypeInfo_MapLoader[2].virtualMethodPointer + 0xa0),pMVar10);
                  pMVar10 = TypeInfo_MapLoader;
                  pIVar1 = TypeInfo_MapLoader[2].virtualMethodPointer;
                  *(_union_234436 *)(pIVar1 + 0xb8) = local_38;
                  *(undefined8 *)(pIVar1 + 0xa8) = local_48._0_8_;
                  *(undefined8 *)(pIVar1 + 0xb0) = local_48._8_8_;
                  pIVar1 = pMVar10[2].virtualMethodPointer;
                  fVar12 = (float)*(undefined8 *)(pIVar1 + 0xb4);
                  fVar14 = (float)((ulong)*(undefined8 *)(pIVar1 + 0xb4) >> 0x20);
                  auVar13._0_4_ = fVar12 + fVar12;
                  auVar13._4_4_ = fVar14 + fVar14;
                  auVar13._8_8_ = 0;
                  fVar14 = *(float *)(pIVar1 + 0xbc) + *(float *)(pIVar1 + 0xbc);
                  auVar13 = minps(auVar13,_DAT_00ccd3a0);
                  if (15000.0 <= fVar14) {
                    fVar14 = 15000.0;
                  }
                  *(ulong *)(pIVar1 + 0xb4) = CONCAT44(auVar13._4_4_ * 0.5,auVar13._0_4_ * 0.5);
                  *(float *)(pIVar1 + 0xbc) = fVar14 * 0.5;
                  return;
                }
              }
            }
            goto LAB_03da2f1e;
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_03da2f1e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$CreateNavMeshSurfaceAsyncOperation
// il2cpp: UnityEngine_AsyncOperation_o* Map_MapLoader__CreateNavMeshSurfaceAsyncOperation (Map_MapLoader_o* __this, int32_t agentID, System_Collections_Generic_List_NavMeshBuildSource__o* sources, UnityEngine_Bounds_o bounds, const MethodInfo* method);
// 0x3da3040

UnityEngine_AsyncOperation_o *
Map_MapLoader__CreateNavMeshSurfaceAsyncOperation
          (Map_MapLoader_o *__this,int32_t agentID,
          System_Collections_Generic_List_NavMeshBuildSource__o *sources,UnityEngine_Bounds_o bounds
          ,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  UnityEngine_AI_NavMeshBuildSettings_o __this_01;
  UnityEngine_AI_NavMeshBuildSettings_o __this_02;
  UnityEngine_AI_NavMeshBuildSettings_o __this_03;
  UnityEngine_AI_NavMeshBuildSettings_o __this_04;
  UnityEngine_AI_NavMeshBuildSettings_o __this_05;
  UnityEngine_AI_NavMeshBuildSettings_o __this_06;
  UnityEngine_AI_NavMeshBuildSettings_o __this_07;
  UnityEngine_AI_NavMeshBuildSettings_o buildSettings;
  UnityEngine_AI_NavMeshData_o *__this_08;
  UnityEngine_AsyncOperation_o *pUVar1;
  uint32_t value;
  undefined8 in_stack_fffffffffffffef8;
  undefined8 in_stack_ffffffffffffff00;
  undefined8 in_stack_ffffffffffffff08;
  undefined8 in_stack_ffffffffffffff10;
  undefined8 in_stack_ffffffffffffff18;
  undefined8 in_stack_ffffffffffffff20;
  undefined8 in_stack_ffffffffffffff28;
  undefined8 in_stack_ffffffffffffff30;
  undefined1 local_a8 [72];
  undefined1 local_60 [16];
  InvokerMethod local_50;
  char *pcStack_48;
  Il2CppClass *local_40;
  Il2CppType *pIStack_38;
  Il2CppType **local_30;
  _union_13 _Stack_28;
  
  if (DAT_05702772 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_NavMeshData);
    DAT_05702772 = '\x01';
  }
  local_a8._48_8_ = (Il2CppType **)0x0;
  local_a8._56_8_ = (Il2CppRGCTXData *)0x0;
  local_a8._32_8_ = (Il2CppClass *)0x0;
  local_a8._40_8_ = (Il2CppType *)0x0;
  local_a8._16_8_ = (InvokerMethod)0x0;
  local_a8._24_8_ = (char *)0x0;
  local_a8._0_8_ = (Il2CppMethodPointer)0x0;
  local_a8._8_8_ = (Il2CppMethodPointer)0x0;
  __this_08 = (UnityEngine_AI_NavMeshData_o *)il2cpp_runtime_glue(TypeInfo_NavMeshData);
  UnityEngine_AI_NavMeshData___ctor(__this_08,(MethodInfo *)0x0);
  UnityEngine_AI_NavMesh__GetSettingsByID
            ((UnityEngine_AI_NavMeshBuildSettings_o *)local_60,agentID,(MethodInfo *)0x0);
  local_a8._48_8_ = local_30;
  local_a8._56_8_ = _Stack_28;
  local_a8._32_8_ = local_40;
  local_a8._40_8_ = pIStack_38;
  local_a8._16_8_ = local_50;
  local_a8._24_8_ = pcStack_48;
  local_a8._0_8_ = local_60._0_8_;
  local_a8._8_8_ = local_60._8_8_;
  __this_01.fields.m_AgentHeight = (float)(int)in_stack_ffffffffffffff00;
  __this_01.fields.m_AgentSlope = (float)(int)((ulong)in_stack_ffffffffffffff00 >> 0x20);
  __this_01.fields.m_AgentTypeID = (int)in_stack_fffffffffffffef8;
  __this_01.fields.m_AgentRadius = (float)(int)((ulong)in_stack_fffffffffffffef8 >> 0x20);
  __this_01.fields.m_AgentClimb = (float)(int)in_stack_ffffffffffffff08;
  __this_01.fields.m_LedgeDropHeight = (float)(int)((ulong)in_stack_ffffffffffffff08 >> 0x20);
  __this_01.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff10;
  __this_01.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
  __this_01.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff18;
  __this_01.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff18 >> 0x20);
  __this_01.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff20;
  __this_01.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
  __this_01.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff28;
  __this_01.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
  __this_01.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff30;
  __this_01.fields.m_Debug.fields.m_Flags =
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
       (char)((ulong)in_stack_ffffffffffffff30 >> 0x20);
  __this_01.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff30 >> 0x28);
  value = (uint32_t)(MethodInfo *)local_a8;
  UnityEngine_AI_NavMeshBuildSettings__set_maxJobWorkers(__this_01,value,(MethodInfo *)0x3);
  __this_02.fields.m_AgentHeight = (float)(int)in_stack_ffffffffffffff00;
  __this_02.fields.m_AgentSlope = (float)(int)((ulong)in_stack_ffffffffffffff00 >> 0x20);
  __this_02.fields.m_AgentTypeID = (int)in_stack_fffffffffffffef8;
  __this_02.fields.m_AgentRadius = (float)(int)((ulong)in_stack_fffffffffffffef8 >> 0x20);
  __this_02.fields.m_AgentClimb = (float)(int)in_stack_ffffffffffffff08;
  __this_02.fields.m_LedgeDropHeight = (float)(int)((ulong)in_stack_ffffffffffffff08 >> 0x20);
  __this_02.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff10;
  __this_02.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
  __this_02.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff18;
  __this_02.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff18 >> 0x20);
  __this_02.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff20;
  __this_02.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
  __this_02.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff28;
  __this_02.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
  __this_02.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff30;
  __this_02.fields.m_Debug.fields.m_Flags =
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
       (char)((ulong)in_stack_ffffffffffffff30 >> 0x20);
  __this_02.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff30 >> 0x28);
  UnityEngine_AI_NavMeshBuildSettings__set_overrideTileSize(__this_02,value,(MethodInfo *)0x1);
  __this_03.fields.m_AgentHeight = (float)(int)in_stack_ffffffffffffff00;
  __this_03.fields.m_AgentSlope = (float)(int)((ulong)in_stack_ffffffffffffff00 >> 0x20);
  __this_03.fields.m_AgentTypeID = (int)in_stack_fffffffffffffef8;
  __this_03.fields.m_AgentRadius = (float)(int)((ulong)in_stack_fffffffffffffef8 >> 0x20);
  __this_03.fields.m_AgentClimb = (float)(int)in_stack_ffffffffffffff08;
  __this_03.fields.m_LedgeDropHeight = (float)(int)((ulong)in_stack_ffffffffffffff08 >> 0x20);
  __this_03.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff10;
  __this_03.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
  __this_03.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff18;
  __this_03.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff18 >> 0x20);
  __this_03.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff20;
  __this_03.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
  __this_03.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff28;
  __this_03.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
  __this_03.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff30;
  __this_03.fields.m_Debug.fields.m_Flags =
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
       (char)((ulong)in_stack_ffffffffffffff30 >> 0x20);
  __this_03.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff30 >> 0x28);
  UnityEngine_AI_NavMeshBuildSettings__set_tileSize(__this_03,value,(MethodInfo *)0x100);
  __this_04.fields.m_AgentHeight = (float)(int)in_stack_ffffffffffffff00;
  __this_04.fields.m_AgentSlope = (float)(int)((ulong)in_stack_ffffffffffffff00 >> 0x20);
  __this_04.fields.m_AgentTypeID = (int)in_stack_fffffffffffffef8;
  __this_04.fields.m_AgentRadius = (float)(int)((ulong)in_stack_fffffffffffffef8 >> 0x20);
  __this_04.fields.m_AgentClimb = (float)(int)in_stack_ffffffffffffff08;
  __this_04.fields.m_LedgeDropHeight = (float)(int)((ulong)in_stack_ffffffffffffff08 >> 0x20);
  __this_04.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff10;
  __this_04.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
  __this_04.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff18;
  __this_04.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff18 >> 0x20);
  __this_04.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff20;
  __this_04.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
  __this_04.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff28;
  __this_04.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
  __this_04.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff30;
  __this_04.fields.m_Debug.fields.m_Flags =
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
       (char)((ulong)in_stack_ffffffffffffff30 >> 0x20);
  __this_04.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff30 >> 0x28);
  UnityEngine_AI_NavMeshBuildSettings__set_overrideVoxelSize(__this_04,value,(MethodInfo *)0x1);
  __this_05.fields.m_AgentHeight = (float)(int)in_stack_ffffffffffffff00;
  __this_05.fields.m_AgentSlope = (float)(int)((ulong)in_stack_ffffffffffffff00 >> 0x20);
  __this_05.fields.m_AgentTypeID = (int)in_stack_fffffffffffffef8;
  __this_05.fields.m_AgentRadius = (float)(int)((ulong)in_stack_fffffffffffffef8 >> 0x20);
  __this_05.fields.m_AgentClimb = (float)(int)in_stack_ffffffffffffff08;
  __this_05.fields.m_LedgeDropHeight = (float)(int)((ulong)in_stack_ffffffffffffff08 >> 0x20);
  __this_05.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff10;
  __this_05.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
  __this_05.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff18;
  __this_05.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff18 >> 0x20);
  __this_05.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff20;
  __this_05.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
  __this_05.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff28;
  __this_05.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
  __this_05.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff30;
  __this_05.fields.m_Debug.fields.m_Flags =
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
       (char)((ulong)in_stack_ffffffffffffff30 >> 0x20);
  __this_05.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff30 >> 0x28);
  UnityEngine_AI_NavMeshBuildSettings__set_voxelSize(__this_05,4.0,(MethodInfo *)local_a8);
  __this_06.fields.m_AgentHeight = (float)(int)in_stack_ffffffffffffff00;
  __this_06.fields.m_AgentSlope = (float)(int)((ulong)in_stack_ffffffffffffff00 >> 0x20);
  __this_06.fields.m_AgentTypeID = (int)in_stack_fffffffffffffef8;
  __this_06.fields.m_AgentRadius = (float)(int)((ulong)in_stack_fffffffffffffef8 >> 0x20);
  __this_06.fields.m_AgentClimb = (float)(int)in_stack_ffffffffffffff08;
  __this_06.fields.m_LedgeDropHeight = (float)(int)((ulong)in_stack_ffffffffffffff08 >> 0x20);
  __this_06.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff10;
  __this_06.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
  __this_06.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff18;
  __this_06.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff18 >> 0x20);
  __this_06.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff20;
  __this_06.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
  __this_06.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff28;
  __this_06.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
  __this_06.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff30;
  __this_06.fields.m_Debug.fields.m_Flags =
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
       (char)((ulong)in_stack_ffffffffffffff30 >> 0x20);
  __this_06.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff30 >> 0x28);
  UnityEngine_AI_NavMeshBuildSettings__set_minRegionArea(__this_06,100.0,(MethodInfo *)local_a8);
  __this_07.fields.m_AgentHeight = (float)(int)in_stack_ffffffffffffff00;
  __this_07.fields.m_AgentSlope = (float)(int)((ulong)in_stack_ffffffffffffff00 >> 0x20);
  __this_07.fields.m_AgentTypeID = (int)in_stack_fffffffffffffef8;
  __this_07.fields.m_AgentRadius = (float)(int)((ulong)in_stack_fffffffffffffef8 >> 0x20);
  __this_07.fields.m_AgentClimb = (float)(int)in_stack_ffffffffffffff08;
  __this_07.fields.m_LedgeDropHeight = (float)(int)((ulong)in_stack_ffffffffffffff08 >> 0x20);
  __this_07.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff10;
  __this_07.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
  __this_07.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff18;
  __this_07.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff18 >> 0x20);
  __this_07.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff20;
  __this_07.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
  __this_07.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff28;
  __this_07.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
  __this_07.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff30;
  __this_07.fields.m_Debug.fields.m_Flags =
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
       (char)((ulong)in_stack_ffffffffffffff30 >> 0x20);
  __this_07.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff30 >> 0x28);
  UnityEngine_AI_NavMeshBuildSettings__set_buildHeightMesh(__this_07,value,(MethodInfo *)0x1);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0xc0);
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int__object>__Add
              (__this_00,agentID,(Il2CppObject *)__this_08,MethodInfo_Void_Add);
    UnityEngine_AI_NavMesh__AddNavMeshData(__this_08,(MethodInfo *)0x0);
    buildSettings.fields.m_AgentHeight = (float)local_a8._8_4_;
    buildSettings.fields.m_AgentSlope = (float)local_a8._12_4_;
    buildSettings.fields.m_AgentTypeID = local_a8._0_4_;
    buildSettings.fields.m_AgentRadius = (float)local_a8._4_4_;
    buildSettings.fields.m_AgentClimb = (float)local_a8._16_4_;
    buildSettings.fields.m_LedgeDropHeight = (float)local_a8._20_4_;
    buildSettings.fields.m_MaxJumpAcrossDistance = (float)local_a8._24_4_;
    buildSettings.fields.m_MinRegionArea = (float)local_a8._28_4_;
    buildSettings.fields.m_OverrideVoxelSize = local_a8._32_4_;
    buildSettings.fields.m_VoxelSize = (float)local_a8._36_4_;
    buildSettings.fields.m_OverrideTileSize = local_a8._40_4_;
    buildSettings.fields.m_TileSize = local_a8._44_4_;
    buildSettings.fields.m_BuildHeightMesh = local_a8._48_4_;
    buildSettings.fields.m_MaxJobWorkers = local_a8._52_4_;
    buildSettings.fields.m_PreserveTilesOutsideBounds = local_a8._56_4_;
    buildSettings.fields.m_Debug.fields.m_Flags =
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)local_a8[0x3c];
    buildSettings.fields._61_3_ = local_a8._61_3_;
    pUVar1 = UnityEngine_AI_NavMeshBuilder__UpdateNavMeshDataAsync
                       (__this_08,buildSettings,sources,bounds,(MethodInfo *)0x0);
    return pUVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$CreateNavMeshSurfaceAsync
// il2cpp: System_Threading_Tasks_Task_o* Map_MapLoader__CreateNavMeshSurfaceAsync (Map_MapLoader_o* __this, int32_t agentID, System_Collections_Generic_List_NavMeshBuildSource__o* sources, UnityEngine_Bounds_o bounds, const MethodInfo* method);
// 0x3da3240

System_Threading_Tasks_Task_o *
Map_MapLoader__CreateNavMeshSurfaceAsync
          (Map_MapLoader_o *__this,int32_t agentID,
          System_Collections_Generic_List_NavMeshBuildSource__o *sources,UnityEngine_Bounds_o bounds
          ,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_00;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_01;
  System_Threading_Tasks_Task_o *pSVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Il2CppClass *pIStack_80;
  Il2CppType *local_78;
  MethodInfo_24751C0_RGCTXs *pMStack_70;
  _union_213156 local_68;
  _union_14 _Stack_60;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o local_50;
  uint16_t local_38;
  uint8_t uStack_36;
  uint8_t uStack_35;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  System_Threading_Tasks_Task_TResult__o *local_28;
  
  if (DAT_05702773 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_MapLoader__CreateNavMeshSurfaceAsync);
    il2cpp_init_method_metadata(&TypeInfo_AsyncTaskMethodBuilder);
    DAT_05702773 = '\x01';
  }
  local_68.genericMethod = (void *)0x0;
  _Stack_60.genericMethod = (void *)0x0;
  local_78 = (Il2CppType *)0x0;
  pMStack_70 = (MethodInfo_24751C0_RGCTXs *)0x0;
  pIStack_80 = (Il2CppClass *)0x0;
  uVar3 = 0;
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create(&local_50,(MethodInfo *)0x0);
  local_28 = local_50.fields.m_builder.fields.m_task;
  local_38 = (uint16_t)local_50.fields.m_builder.fields.m_coreState.fields.m_stateMachine;
  uStack_36 = local_50.fields.m_builder.fields.m_coreState.fields.m_stateMachine._2_1_;
  uStack_35 = local_50.fields.m_builder.fields.m_coreState.fields.m_stateMachine._3_1_;
  uStack_34 = local_50.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_;
  uStack_30 = local_50.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_;
  uStack_2c = local_50.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_;
  il2cpp_runtime_glue((MethodInfo *)&stack0xffffffffffffff60,0);
  pIStack_80 = (Il2CppClass *)sources;
  il2cpp_runtime_glue(&pIStack_80,sources);
  local_68 = (_union_213156)bounds.fields.m_Extents.fields._4_8_;
  local_78 = (Il2CppType *)bounds.fields.m_Center.fields._0_8_;
  pMStack_70 = (MethodInfo_24751C0_RGCTXs *)bounds.fields._8_8_;
  uVar2 = 0xffffffff;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_ = uVar3;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_ = 0xffffffff;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_2_ =
       (uint16_t)local_50.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._2_1_ =
       SUB41(local_50.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_,2);
  __this_00.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._3_1_ =
       SUB41(local_50.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_,3);
  __this_00.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_ =
       local_50.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_;
  __this_00.fields.m_builder.fields.m_task._0_4_ =
       local_50.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_;
  __this_00.fields.m_builder.fields.m_task._4_4_ =
       local_50.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start<MapLoader_<CreateNavMeshSurfaceAsync>d__40>
            (__this_00,(Map_MapLoader__CreateNavMeshSurfaceAsync_d__40_o *)&stack0xffffffffffffff60,
             (MethodInfo_24751C0 *)&stack0xffffffffffffff58);
  __this_01.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_ = uVar3;
  __this_01.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_ = uVar2;
  __this_01.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_2_ =
       (uint16_t)local_50.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_;
  __this_01.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._2_1_ =
       SUB41(local_50.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_,2);
  __this_01.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._3_1_ =
       SUB41(local_50.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_,3);
  __this_01.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_ =
       local_50.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_;
  __this_01.fields.m_builder.fields.m_task._0_4_ =
       local_50.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_;
  __this_01.fields.m_builder.fields.m_task._4_4_ =
       local_50.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_;
  pSVar1 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task
                     (__this_01,(MethodInfo *)&stack0xffffffffffffff60);
  return pSVar1;
}


// Map.MapLoader$$UpdateNavMesh
// il2cpp: System_Threading_Tasks_Task_o* Map_MapLoader__UpdateNavMesh (const MethodInfo* method);
// 0x3da3350

System_Threading_Tasks_Task_o * Map_MapLoader__UpdateNavMesh(MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_00;
  System_Threading_Tasks_Task_o *pSVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o local_40;
  _union_213165 local_28;
  _union_14 _Stack_20;
  System_Threading_Tasks_Task_TResult__o *local_18;
  
  if (DAT_05702774 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_MapLoader__UpdateNavMesh_d__41);
    il2cpp_init_method_metadata(&TypeInfo_AsyncTaskMethodBuilder);
    DAT_05702774 = '\x01';
  }
  uVar3 = 0;
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create(&local_40,(MethodInfo *)0x0);
  local_18 = local_40.fields.m_builder.fields.m_task;
  local_28._0_4_ = local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_;
  local_28._4_4_ = local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_;
  _Stack_20._0_4_ =
       (uint32_t)local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction;
  _Stack_20._4_2_ = local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_2_
  ;
  _Stack_20._6_2_ = local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._6_2_
  ;
  il2cpp_runtime_glue((MethodInfo *)&stack0xffffffffffffffa0,0);
  uVar2 = 0xffffffff;
  __this.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_ = uVar3;
  __this.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_ = 0xffffffff;
  __this.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_ =
       local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_;
  __this.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_ =
       local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_;
  __this.fields.m_builder.fields.m_task._0_4_ =
       (uint32_t)local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction;
  __this.fields.m_builder.fields.m_task._4_2_ =
       (uint16_t)local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_;
  __this.fields.m_builder.fields.m_task._6_2_ =
       SUB42(local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_,2);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start<MapLoader_<UpdateNavMesh>d__41>
            (__this,(Map_MapLoader__UpdateNavMesh_d__41_o *)&stack0xffffffffffffffa0,
             (MethodInfo_2475490 *)&stack0xffffffffffffff98);
  __this_00.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_ = uVar3;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_ = uVar2;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_ =
       local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_ =
       local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_;
  __this_00.fields.m_builder.fields.m_task._0_4_ =
       (uint32_t)local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction;
  __this_00.fields.m_builder.fields.m_task._4_2_ =
       (uint16_t)local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_;
  __this_00.fields.m_builder.fields.m_task._6_2_ =
       SUB42(local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_,2);
  pSVar1 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task
                     (__this_00,(MethodInfo *)&stack0xffffffffffffffa0);
  return pSVar1;
}


// Map.MapLoader$$UpdateAllNavMeshes
// il2cpp: System_Threading_Tasks_Task_o* Map_MapLoader__UpdateAllNavMeshes (Map_MapLoader_o* __this, const MethodInfo* method);
// 0x3da3410

System_Threading_Tasks_Task_o *
Map_MapLoader__UpdateAllNavMeshes(Map_MapLoader_o *__this,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_00;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_01;
  System_Threading_Tasks_Task_o *pSVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_c *local_58;
  Il2CppClass *pIStack_50;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o local_40;
  uint32_t local_28;
  uint16_t uStack_24;
  uint16_t uStack_22;
  uint16_t uStack_20;
  uint8_t uStack_1e;
  uint8_t uStack_1d;
  undefined4 uStack_1c;
  _union_14 local_18;
  
  if (DAT_05702775 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_MapLoader__UpdateAllNavMeshes_d__42);
    il2cpp_init_method_metadata(&TypeInfo_AsyncTaskMethodBuilder);
    DAT_05702775 = '\x01';
  }
  local_58 = (System_Runtime_CompilerServices_AsyncTaskMethodBuilder_c *)0x0;
  pIStack_50 = (Il2CppClass *)0x0;
  uVar3 = 0;
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create(&local_40,(MethodInfo *)0x0);
  local_18 = (_union_14)local_40.fields.m_builder.fields.m_task;
  local_28 = (uint32_t)local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine;
  uStack_24 = local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_2_;
  uStack_22 = local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine._6_2_;
  uStack_20 = local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_2_;
  uStack_1e = local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._2_1_;
  uStack_1d = local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._3_1_;
  uStack_1c = local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_;
  il2cpp_runtime_glue((MethodInfo *)&stack0xffffffffffffff90,0);
  local_58 = (System_Runtime_CompilerServices_AsyncTaskMethodBuilder_c *)__this;
  il2cpp_runtime_glue(&local_58,__this);
  uVar2 = 0xffffffff;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_ = uVar3;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_ = 0xffffffff;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_ =
       (uint32_t)local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_2_ =
       (uint16_t)local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._6_2_ =
       SUB42(local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_,2);
  __this_00.fields.m_builder.fields.m_task._0_4_ =
       local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_;
  __this_00.fields.m_builder.fields.m_task._4_4_ =
       local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start<MapLoader_<UpdateAllNavMeshes>d__42>
            (__this_00,(Map_MapLoader__UpdateAllNavMeshes_d__42_o *)&stack0xffffffffffffff90,
             (MethodInfo_24753A0 *)&stack0xffffffffffffff88);
  __this_01.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_ = uVar3;
  __this_01.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_ = uVar2;
  __this_01.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_ =
       (uint32_t)local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine;
  __this_01.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_2_ =
       (uint16_t)local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_;
  __this_01.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._6_2_ =
       SUB42(local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_,2);
  __this_01.fields.m_builder.fields.m_task._0_4_ =
       local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_;
  __this_01.fields.m_builder.fields.m_task._4_4_ =
       local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_;
  pSVar1 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task
                     (__this_01,(MethodInfo *)&stack0xffffffffffffff90);
  return pSVar1;
}


// Map.MapLoader$$GenerateNavMesh
// il2cpp: System_Threading_Tasks_Task_o* Map_MapLoader__GenerateNavMesh (Map_MapLoader_o* __this, const MethodInfo* method);
// 0x3da34f0

System_Threading_Tasks_Task_o *
Map_MapLoader__GenerateNavMesh(Map_MapLoader_o *__this,MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_00;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_01;
  System_Threading_Tasks_Task_o *pSVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_c *local_58;
  Il2CppClass *pIStack_50;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o local_40;
  uint32_t local_28;
  uint16_t uStack_24;
  uint16_t uStack_22;
  uint16_t uStack_20;
  uint8_t uStack_1e;
  uint8_t uStack_1d;
  undefined4 uStack_1c;
  _union_14 local_18;
  
  if (DAT_05702776 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_MapLoader__GenerateNavMesh_d__43);
    il2cpp_init_method_metadata(&TypeInfo_AsyncTaskMethodBuilder);
    DAT_05702776 = '\x01';
  }
  local_58 = (System_Runtime_CompilerServices_AsyncTaskMethodBuilder_c *)0x0;
  pIStack_50 = (Il2CppClass *)0x0;
  uVar3 = 0;
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create(&local_40,(MethodInfo *)0x0);
  local_18 = (_union_14)local_40.fields.m_builder.fields.m_task;
  local_28 = (uint32_t)local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine;
  uStack_24 = local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_2_;
  uStack_22 = local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine._6_2_;
  uStack_20 = local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_2_;
  uStack_1e = local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._2_1_;
  uStack_1d = local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._3_1_;
  uStack_1c = local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_;
  il2cpp_runtime_glue((MethodInfo *)&stack0xffffffffffffff90,0);
  local_58 = (System_Runtime_CompilerServices_AsyncTaskMethodBuilder_c *)__this;
  il2cpp_runtime_glue(&local_58,__this);
  uVar2 = 0xffffffff;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_ = uVar3;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_ = 0xffffffff;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_ =
       (uint32_t)local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_2_ =
       (uint16_t)local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_;
  __this_00.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._6_2_ =
       SUB42(local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_,2);
  __this_00.fields.m_builder.fields.m_task._0_4_ =
       local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_;
  __this_00.fields.m_builder.fields.m_task._4_4_ =
       local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start<MapLoader_<GenerateNavMesh>d__43>
            (__this_00,(Map_MapLoader__GenerateNavMesh_d__43_o *)&stack0xffffffffffffff90,
             (MethodInfo_24752B0 *)&stack0xffffffffffffff88);
  __this_01.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_ = uVar3;
  __this_01.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_ = uVar2;
  __this_01.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_ =
       (uint32_t)local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine;
  __this_01.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_2_ =
       (uint16_t)local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_;
  __this_01.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._6_2_ =
       SUB42(local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_,2);
  __this_01.fields.m_builder.fields.m_task._0_4_ =
       local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_;
  __this_01.fields.m_builder.fields.m_task._4_4_ =
       local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_;
  pSVar1 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task
                     (__this_01,(MethodInfo *)&stack0xffffffffffffff90);
  return pSVar1;
}


// Map.MapLoader$$Batch
// il2cpp: void Map_MapLoader__Batch (Map_MapLoader_o* __this, const MethodInfo* method);
// 0x3da35d0

/* WARNING: Removing unreachable block (ram,0x03da4829) */
/* WARNING: Removing unreachable block (ram,0x03da4701) */

void Map_MapLoader__Batch(Map_MapLoader_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  Il2CppClass *pIVar4;
  void *pvVar5;
  UnityEngine_Component_o *__this_00;
  System_Object_array *pSVar6;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_09;
  long lVar7;
  bool_conflict bVar8;
  int32_t iVar9;
  System_Collections_Generic_Dictionary_object__object__o *__this_10;
  System_Collections_Generic_Dictionary_object__object__o *__this_11;
  System_Collections_Generic_Dictionary_object__object__o *__this_12;
  System_Collections_Generic_Dictionary_object__int__o *__this_13;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Transform_o *pUVar13;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar14;
  Il2CppObject *pIVar15;
  System_String_array *values;
  System_String_o *pSVar16;
  System_Object_array *pSVar17;
  UnityEngine_Object_o *pUVar18;
  UnityEngine_Material_array *pUVar19;
  UnityEngine_Object_o *pUVar20;
  System_String_o *pSVar21;
  UnityEngine_Material_o *__this_14;
  System_String_o *pSVar22;
  UnityEngine_Mesh_o *__this_15;
  System_Collections_Generic_List_object__o *pSVar23;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_16;
  uint uVar24;
  int iVar25;
  System_Collections_Generic_Dictionary_object__object__o *pSVar26;
  _union_231280 local_d0;
  undefined8 uStack_c8;
  UnityEngine_GameObject_o *local_c0;
  _union_231280 local_b8;
  undefined8 uStack_b0;
  UnityEngine_GameObject_o *local_a8;
  _union_231280 local_98;
  undefined8 uStack_90;
  UnityEngine_GameObject_o *local_88;
  _union_231280 local_78;
  undefined8 uStack_70;
  UnityEngine_GameObject_o *local_68;
  _union_231280 local_58;
  undefined8 uStack_50;
  UnityEngine_GameObject_o *local_48;
  UnityEngine_GameObject_o *local_40;
  UnityEngine_GameObject_o *local_38;
  
  if (DAT_05702777 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_UnityEngine_GameObject_UnityEngine);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_GameObjec);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_List_1_UnityEngine_Ga);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Transform_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_I);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__List_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__int);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_GameObject__Transform);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_MeshFilter___GetComponentsInChildren_MeshFilter);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectShader);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&" with missing mesh");
    il2cpp_init_method_metadata(&"disabled");
    il2cpp_init_method_metadata(&"-");
    il2cpp_init_method_metadata(&"Combined Meshes");
    il2cpp_init_method_metadata(&"Failed to load static object with no MeshFilter or SharedMesh: ");
    il2cpp_init_method_metadata(&" (Batched) ");
    il2cpp_init_method_metadata(&"Map load error: object ");
    il2cpp_init_method_metadata(&"Batched Scene");
    il2cpp_init_method_metadata(&"Original Objects");
    DAT_05702777 = '\x01';
  }
  local_78.genericMethod = (void *)0x0;
  uStack_70 = 0;
  local_68 = (UnityEngine_GameObject_o *)0x0;
  uVar24 = 0;
  iVar25 = 0;
  local_98.genericMethod = (void *)0x0;
  uStack_90 = 0;
  local_88 = (UnityEngine_GameObject_o *)0x0;
  local_b8.genericMethod = (void *)0x0;
  uStack_b0 = 0;
  local_a8 = (UnityEngine_GameObject_o *)0x0;
  local_58.genericMethod = (void *)0x0;
  uStack_50 = 0;
  local_48 = (UnityEngine_GameObject_o *)0x0;
  __this_10 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__GameObject);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_10,MethodInfo_Dictionary_2_System_String_UnityEngine_GameObjec);
  __this_11 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__List_GameObject);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_11,MethodInfo_Dictionary_2_System_String_List_1_UnityEngine_Ga);
  __this_12 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_GameObject__Transform);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_12,MethodInfo_Dictionary_2_UnityEngine_GameObject_UnityEngine);
  __this_13 = (System_Collections_Generic_Dictionary_object__int__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__int);
  System_Collections_Generic_Dictionary<object__int>___ctor(__this_13,MethodInfo_Dictionary_2_System_String_System_Int32);
  pUVar10 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar10,"Batched Scene",(MethodInfo *)0x0);
  pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar11,"Original Objects",(MethodInfo *)0x0);
  if (((pUVar11 != (UnityEngine_GameObject_o *)0x0) &&
      (local_38 = pUVar11,
      pUVar12 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0),
      pUVar10 != (UnityEngine_GameObject_o *)0x0)) &&
     (pUVar13 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0),
     pUVar12 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetParent(pUVar12,pUVar13,(MethodInfo *)0x0);
    pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(pUVar11,"Combined Meshes",(MethodInfo *)0x0);
    if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
      local_40 = pUVar11;
      pUVar12 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
      pUVar13 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
      if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(pUVar12,pUVar13,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (((System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
             (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
           (pSVar14 = System_Collections_Generic_Dictionary<int__object>__get_Keys
                                ((System_Collections_Generic_Dictionary_int__object__o *)
                                 **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_I),
           pSVar14 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
          System_Collections_Generic_Dictionary_KeyCollection<int__object>__GetEnumerator
                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                      *)&local_d0,pSVar14,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
          local_68 = local_c0;
          local_78 = local_d0;
          uStack_70 = uStack_c8;
          pSVar26 = __this_12;
          while (__this_01.fields._dictionary._4_4_ = iVar25,
                __this_01.fields._dictionary._0_4_ = uVar24, __this_01.fields._8_8_ = __this_11,
                __this_01.fields._currentKey = (Il2CppObject *)pSVar26,
                bVar8 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int__object>__MoveNext
                                  (__this_01,(MethodInfo_31C2F60 *)&local_78), (char)bVar8 != '\0')
          {
            iVar9 = (int32_t)local_68;
            if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if ((System_Collections_Generic_Dictionary_int__object__o *)
                **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
                (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pIVar15 = System_Collections_Generic_Dictionary<int__object>__get_Item
                                ((System_Collections_Generic_Dictionary_int__object__o *)
                                 **(undefined8 **)(TypeInfo_MapLoader + 0xb8),iVar9,MethodInfo_MapObject_get_Item);
            if (pIVar15 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pIVar4 = pIVar15[2].klass;
            if (pIVar4 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if ((*(int *)((long)&(pIVar4->_1).byval_arg.data + 4) < 1) &&
               (*(char *)((long)&(pIVar4->_1).byval_arg.bits + 1) != '\0')) {
              pvVar5 = (pIVar4->_1).image;
              if ((*(byte *)((long)pvVar5 + 0x130) < *(byte *)&TypeInfo_MapScriptSceneObject[3].return_type) ||
                 (*(MethodInfo **)
                   (*(long *)((long)pvVar5 + 200) + -8 +
                   (ulong)*(byte *)&TypeInfo_MapScriptSceneObject[3].return_type * 8) != TypeInfo_MapScriptSceneObject)) {
                    /* WARNING: Subroutine does not return */
                il2cpp_unwind_resume();
              }
              pIVar4 = (pIVar4->_1).klass;
              if (pIVar4 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pSVar16 = (System_String_o *)(pIVar4->_1).name;
              method_01 = TypeInfo_MapScriptSceneObject;
              if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar8 = Map_MapObjectShader__IsLegacyShader(pSVar16,method_01);
              if ((char)bVar8 == '\0') {
                if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar8 = System_String__op_Equality
                                  (pSVar16,*(System_String_o **)
                                            (*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x20),
                                   (MethodInfo *)0x0);
                if ((char)bVar8 == '\0') {
                  if (pIVar15[1].monitor == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pUVar12 = UnityEngine_GameObject__get_transform
                                      (pIVar15[1].monitor,(MethodInfo *)0x0);
                  if (pUVar12 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
                  values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string);
                  iVar9 = (int32_t)&stack0xfffffffffffffee8;
                  pSVar16 = System_Int32__ToString(iVar9,(MethodInfo *)0x0);
                  if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  if ((int)values->max_length == 0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  values->m_Items[0] = pSVar16;
                  il2cpp_runtime_glue(values->m_Items,pSVar16);
                  if ((uint)values->max_length < 2) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  values->m_Items[1] = "-";
                  il2cpp_runtime_glue(values->m_Items + 1);
                  pSVar16 = System_Int32__ToString(iVar9,(MethodInfo *)0x0);
                  if ((uint)values->max_length < 3) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  values->m_Items[2] = pSVar16;
                  il2cpp_runtime_glue(values->m_Items + 2,pSVar16);
                  if ((uint)values->max_length < 4) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  values->m_Items[3] = "-";
                  il2cpp_runtime_glue(values->m_Items + 3);
                  pSVar16 = System_Int32__ToString(iVar9,(MethodInfo *)0x0);
                  if ((uint)values->max_length < 5) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  values->m_Items[4] = pSVar16;
                  il2cpp_runtime_glue(values->m_Items + 4);
                  pSVar16 = System_String__Concat(values,(MethodInfo *)0x0);
                  if (pIVar15[1].monitor == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pSVar17 = UnityEngine_GameObject__GetComponentsInChildren<object>
                                      (pIVar15[1].monitor,MethodInfo_MeshFilter___GetComponentsInChildren_MeshFilter);
                  uVar24 = 0;
                  if (pSVar17 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  iVar2 = (int)pSVar17->max_length;
                  __this_12 = pSVar26;
                  if (0 < iVar2) {
                    if (iVar2 == 0) {
LAB_03da4801:
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    do {
                      __this_00 = (UnityEngine_Component_o *)pSVar17->m_Items[(int)uVar24];
                      if (__this_00 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      pUVar18 = (UnityEngine_Object_o *)
                                UnityEngine_Component__GetComponent<object>(__this_00,MethodInfo_Renderer_GetComponent_Renderer);
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      bVar8 = UnityEngine_Object__op_Equality
                                        (pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                      if ((char)bVar8 == '\0') {
                        if (pUVar18 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_raise_exception();
                        }
                        pUVar19 = UnityEngine_Renderer__get_sharedMaterials
                                            ((UnityEngine_Renderer_o *)pUVar18,(MethodInfo *)0x0);
                        if (pUVar19 == (UnityEngine_Material_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_raise_exception();
                        }
                        if ((int)pUVar19->max_length < 2) {
                          pUVar20 = (UnityEngine_Object_o *)
                                    UnityEngine_MeshFilter__get_sharedMesh
                                              ((UnityEngine_MeshFilter_o *)__this_00,
                                               (MethodInfo *)0x0);
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          bVar8 = UnityEngine_Object__op_Equality
                                            (pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                          if ((char)bVar8 == '\0') {
                            pUVar20 = (UnityEngine_Object_o *)
                                      UnityEngine_Renderer__get_sharedMaterial
                                                ((UnityEngine_Renderer_o *)pUVar18,(MethodInfo *)0x0
                                                );
                            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                              il2cpp_init_class();
                            }
                            bVar8 = UnityEngine_Object__op_Inequality
                                              (pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                              );
                            if ((char)bVar8 != '\0') {
                              __this_14 = UnityEngine_Renderer__get_sharedMaterial
                                                    ((UnityEngine_Renderer_o *)pUVar18,
                                                     (MethodInfo *)0x0);
                              if (__this_14 == (UnityEngine_Material_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                il2cpp_raise_exception();
                              }
                              bVar8 = UnityEngine_Material__get_enableInstancing
                                                (__this_14,(MethodInfo *)0x0);
                              if ((char)bVar8 != '\0') goto LAB_03da3e50;
                            }
                            pUVar20 = (UnityEngine_Object_o *)
                                      UnityEngine_MeshFilter__get_sharedMesh
                                                ((UnityEngine_MeshFilter_o *)__this_00,
                                                 (MethodInfo *)0x0);
                            if (pUVar20 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            UnityEngine_Object__GetInstanceID(pUVar20,(MethodInfo *)0x0);
                            pSVar21 = System_Int32__ToString
                                                ((int32_t)&stack0xfffffffffffffeec,(MethodInfo *)0x0
                                                );
                            pSVar21 = System_String__Concat(pSVar21,pSVar16,(MethodInfo *)0x0);
                            bVar8 = UnityEngine_Renderer__get_enabled
                                              ((UnityEngine_Renderer_o *)pUVar18,(MethodInfo *)0x0);
                            if ((char)bVar8 == '\0') {
                              pSVar21 = System_String__Concat
                                                  (pSVar21,"disabled",(MethodInfo *)0x0);
                            }
                            else {
                              pUVar18 = (UnityEngine_Object_o *)
                                        UnityEngine_Renderer__get_sharedMaterial
                                                  ((UnityEngine_Renderer_o *)pUVar18,
                                                   (MethodInfo *)0x0);
                              if (pUVar18 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                il2cpp_raise_exception();
                              }
                              UnityEngine_Object__GetInstanceID(pUVar18,(MethodInfo *)0x0);
                              pSVar22 = System_Int32__ToString
                                                  ((int32_t)&stack0xfffffffffffffeec,
                                                   (MethodInfo *)0x0);
                              pSVar21 = System_String__Concat(pSVar21,pSVar22,(MethodInfo *)0x0);
                            }
                            if (__this_13 ==
                                (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            bVar8 = System_Collections_Generic_Dictionary<object__int>__ContainsKey
                                              (__this_13,(Il2CppObject *)pSVar21,MethodInfo_Boolean_ContainsKey);
                            if ((char)bVar8 == '\0') {
                              System_Collections_Generic_Dictionary<object__int>__Add
                                        (__this_13,(Il2CppObject *)pSVar21,0,MethodInfo_Void_Add);
                            }
                            __this_15 = UnityEngine_MeshFilter__get_sharedMesh
                                                  ((UnityEngine_MeshFilter_o *)__this_00,
                                                   (MethodInfo *)0x0);
                            if (__this_15 == (UnityEngine_Mesh_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            iVar9 = UnityEngine_Mesh__get_vertexCount(__this_15,(MethodInfo *)0x0);
                            iVar25 = (int)(65000 / (long)iVar9);
                            if (iVar25 < 1) {
                              iVar25 = 1;
                            }
                            iVar9 = System_Collections_Generic_Dictionary<object__int>__get_Item
                                              (__this_13,(Il2CppObject *)pSVar21,MethodInfo_Int32_get_Item);
                            System_Collections_Generic_Dictionary<object__int>__set_Item
                                      (__this_13,(Il2CppObject *)pSVar21,iVar9 + 1,MethodInfo_Void_set_Item);
                            iVar9 = System_Collections_Generic_Dictionary<object__int>__get_Item
                                              (__this_13,(Il2CppObject *)pSVar21,MethodInfo_Int32_get_Item);
                            iVar25 = iVar9 / iVar25;
                            pSVar22 = System_Int32__ToString
                                                ((int32_t)&stack0xfffffffffffffeec,(MethodInfo *)0x0
                                                );
                            pSVar21 = System_String__Concat(pSVar21,pSVar22,(MethodInfo *)0x0);
                            if (__this_10 ==
                                (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            bVar8 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                                              (__this_10,(Il2CppObject *)pSVar21,MethodInfo_Boolean_ContainsKey);
                            if ((char)bVar8 == '\0') {
                              pUVar18 = (UnityEngine_Object_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
                              UnityEngine_GameObject___ctor
                                        ((UnityEngine_GameObject_o *)pUVar18,(MethodInfo *)0x0);
                              if (pIVar15[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                                il2cpp_raise_exception();
                              }
                              pSVar22 = System_String__Concat
                                                  (((pIVar15[2].klass)->_1).this_arg.data,
                                                   " (Batched) ",pSVar21,(MethodInfo *)0x0);
                              if (pUVar18 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                il2cpp_raise_exception();
                              }
                              UnityEngine_Object__set_name(pUVar18,pSVar22,(MethodInfo *)0x0);
                              if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                                il2cpp_init_class();
                              }
                              UnityEngine_GameObject__set_layer
                                        ((UnityEngine_GameObject_o *)pUVar18,
                                         *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x38),
                                         (MethodInfo *)0x0);
                              pUVar12 = UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)pUVar18,
                                                   (MethodInfo *)0x0);
                              pUVar13 = UnityEngine_GameObject__get_transform
                                                  (local_40,(MethodInfo *)0x0);
                              if (pUVar12 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                il2cpp_raise_exception();
                              }
                              UnityEngine_Transform__SetParent(pUVar12,pUVar13,(MethodInfo *)0x0);
                              System_Collections_Generic_Dictionary<object__object>__Add
                                        (__this_10,(Il2CppObject *)pSVar21,(Il2CppObject *)pUVar18,
                                         MethodInfo_Void_Add);
                              pSVar23 = (System_Collections_Generic_List_object__o *)
                                        il2cpp_runtime_glue(TypeInfo_List_GameObject);
                              System_Collections_Generic_List<object>___ctor(pSVar23,MethodInfo_List_1_UnityEngine_GameObject);
                              if (__this_11 ==
                                  (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                il2cpp_raise_exception();
                              }
                              System_Collections_Generic_Dictionary<object__object>__Add
                                        (__this_11,(Il2CppObject *)pSVar21,(Il2CppObject *)pSVar23,
                                         MethodInfo_Void_Add);
                            }
                            else if (__this_11 ==
                                     (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                            {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            pSVar23 = (System_Collections_Generic_List_object__o *)
                                      System_Collections_Generic_Dictionary<object__object>__get_Item
                                                (__this_11,(Il2CppObject *)pSVar21,MethodInfo_List_1_UnityEngine_GameObject__get_Item);
                            pUVar10 = UnityEngine_Component__get_gameObject
                                                (__this_00,(MethodInfo *)0x0);
                            lVar7 = MethodInfo_Void_Add;
                            if (pSVar23 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            piVar1 = &(pSVar23->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pSVar6 = (pSVar23->fields)._items;
                            if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            uVar3 = (pSVar23->fields)._size;
                            if (uVar3 < (uint)pSVar6->max_length) {
                              (pSVar23->fields)._size = uVar3 + 1;
                              pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)pUVar10;
                              il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar3);
                            }
                            else {
                              System_Collections_Generic_List<object>__AddWithResize
                                        (pSVar23,(Il2CppObject *)pUVar10,
                                         *(MethodInfo_35A7350 **)
                                          (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                            }
                            pUVar10 = UnityEngine_Component__get_gameObject
                                                (__this_00,(MethodInfo *)0x0);
                            pUVar12 = UnityEngine_Component__get_transform
                                                (__this_00,(MethodInfo *)0x0);
                            if (pUVar12 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            pUVar12 = UnityEngine_Transform__get_parent(pUVar12,(MethodInfo *)0x0);
                            if (__this_12 ==
                                (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            System_Collections_Generic_Dictionary<object__object>__Add
                                      (__this_12,(Il2CppObject *)pUVar10,(Il2CppObject *)pUVar12,
                                       MethodInfo_Void_Add);
                            pUVar12 = UnityEngine_Component__get_transform
                                                (__this_00,(MethodInfo *)0x0);
                            pUVar10 = (UnityEngine_GameObject_o *)
                                      System_Collections_Generic_Dictionary<object__object>__get_Item
                                                (__this_10,(Il2CppObject *)pSVar21,MethodInfo_GameObject_get_Item);
                            if (pUVar10 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            pUVar13 = UnityEngine_GameObject__get_transform
                                                (pUVar10,(MethodInfo *)0x0);
                            if (pUVar12 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            UnityEngine_Transform__SetParent(pUVar12,pUVar13,(MethodInfo *)0x0);
                          }
                          else {
                            if (pIVar15[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            pSVar21 = System_String__Concat
                                                ("Map load error: object ",((pIVar15[2].klass)->_1).this_arg.data
                                                 ," with missing mesh",(MethodInfo *)0x0);
                            if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
                              il2cpp_init_class();
                            }
                            ApplicationManagers_DebugConsole__Log(pSVar21,1,(MethodInfo *)0x0);
                            if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                              il2cpp_init_class();
                            }
                            if (pIVar15[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            pSVar23 = *(System_Collections_Generic_List_object__o **)
                                       (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x78);
                            pSVar21 = System_String__Concat
                                                ("Failed to load static object with no MeshFilter or SharedMesh: ",((pIVar15[2].klass)->_1).this_arg.data
                                                 ,(MethodInfo *)0x0);
                            lVar7 = MethodInfo_Void_Add;
                            if (pSVar23 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            piVar1 = &(pSVar23->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pSVar6 = (pSVar23->fields)._items;
                            if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            uVar3 = (pSVar23->fields)._size;
                            if (uVar3 < (uint)pSVar6->max_length) {
                              (pSVar23->fields)._size = uVar3 + 1;
                              pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)pSVar21;
                              il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar3);
                            }
                            else {
                              System_Collections_Generic_List<object>__AddWithResize
                                        (pSVar23,(Il2CppObject *)pSVar21,
                                         *(MethodInfo_35A7350 **)
                                          (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                            }
                          }
                        }
                      }
LAB_03da3e50:
                      uVar24 = uVar24 + 1;
                      uVar3 = (uint)pSVar17->max_length;
                      if ((int)uVar3 <= (int)uVar24) break;
                      if (uVar3 <= uVar24) goto LAB_03da4801;
                    } while( true );
                  }
                  if (pIVar15[1].monitor == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pSVar26 = __this_12;
                  pUVar12 = UnityEngine_GameObject__get_transform
                                      (pIVar15[1].monitor,(MethodInfo *)0x0);
                  pUVar13 = UnityEngine_GameObject__get_transform(local_38,(MethodInfo *)0x0);
                  if (pUVar12 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  UnityEngine_Transform__SetParent(pUVar12,pUVar13,(MethodInfo *)0x0);
                }
              }
            }
          }
          __this_02.fields._dictionary._4_4_ = iVar25;
          __this_02.fields._dictionary._0_4_ = uVar24;
          __this_02.fields._8_8_ = __this_11;
          __this_02.fields._currentKey = (Il2CppObject *)pSVar26;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int__object>__Dispose
                    (__this_02,(MethodInfo_31C2F50 *)&local_78);
          if ((__this_10 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
             (pSVar14 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                                  (__this_10,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
             pSVar14 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0))
          {
            System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                        *)&local_d0,pSVar14,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
            local_88 = local_c0;
            local_98 = local_d0;
            uStack_90 = uStack_c8;
            while (__this_03.fields._dictionary._4_4_ = iVar25,
                  __this_03.fields._dictionary._0_4_ = uVar24, __this_03.fields._8_8_ = __this_11,
                  __this_03.fields._currentKey = (Il2CppObject *)pSVar26,
                  bVar8 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                    (__this_03,(MethodInfo_31D0850 *)&local_98), (char)bVar8 != '\0'
                  ) {
              __this_16 = __this_10;
              pUVar10 = (UnityEngine_GameObject_o *)
                        System_Collections_Generic_Dictionary<object__object>__get_Item
                                  (__this_10,(Il2CppObject *)local_88,MethodInfo_GameObject_get_Item);
              Map_MapLoader__CombineMeshes((Map_MapLoader_o *)__this_16,pUVar10,method_00);
            }
            __this_04.fields._dictionary._4_4_ = iVar25;
            __this_04.fields._dictionary._0_4_ = uVar24;
            __this_04.fields._8_8_ = __this_11;
            __this_04.fields._currentKey = (Il2CppObject *)pSVar26;
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                      (__this_04,(MethodInfo_31D0840 *)&local_98);
            if ((__this_11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
               (pSVar14 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                                    (__this_11,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
               pSVar14 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0
               )) {
              System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                        ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                          *)&local_d0,pSVar14,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
              local_a8 = local_c0;
              local_b8 = local_d0;
              uStack_b0 = uStack_c8;
              do {
                __this_05.fields._dictionary._4_4_ = iVar25;
                __this_05.fields._dictionary._0_4_ = uVar24;
                __this_05.fields._8_8_ = __this_11;
                __this_05.fields._currentKey = (Il2CppObject *)pSVar26;
                bVar8 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                  (__this_05,(MethodInfo_31D0850 *)&local_b8);
                if ((char)bVar8 == '\0') {
                  __this_09.fields._dictionary._4_4_ = iVar25;
                  __this_09.fields._dictionary._0_4_ = uVar24;
                  __this_09.fields._8_8_ = __this_11;
                  __this_09.fields._currentKey = (Il2CppObject *)pSVar26;
                  System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                            (__this_09,(MethodInfo_31D0840 *)&local_b8);
                  return;
                }
                pSVar23 = (System_Collections_Generic_List_object__o *)
                          System_Collections_Generic_Dictionary<object__object>__get_Item
                                    (__this_11,(Il2CppObject *)local_a8,MethodInfo_List_1_UnityEngine_GameObject__get_Item);
                if (pSVar23 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                System_Collections_Generic_List<object>__GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)&local_d0,pSVar23,
                           MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
                local_48 = local_c0;
                local_58 = local_d0;
                uStack_50 = uStack_c8;
                if (__this_12 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  __this_07.fields._list._4_4_ = iVar25;
                  __this_07.fields._list._0_4_ = uVar24;
                  __this_07.fields._8_8_ = __this_11;
                  __this_07.fields._current = (Il2CppObject *)pSVar26;
                  bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                    (__this_07,(MethodInfo_3185E20 *)&local_58);
                  if ((char)bVar8 != '\0') {
                    if (local_48 != (UnityEngine_GameObject_o *)0x0) {
                      UnityEngine_GameObject__get_transform(local_48,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
LAB_03da4725:
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                }
                else {
                  while (__this_06.fields._list._4_4_ = iVar25,
                        __this_06.fields._list._0_4_ = uVar24, __this_06.fields._8_8_ = __this_11,
                        __this_06.fields._current = (Il2CppObject *)pSVar26,
                        bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                          (__this_06,(MethodInfo_3185E20 *)&local_58),
                        pUVar10 = local_48, (char)bVar8 != '\0') {
                    if (local_48 == (UnityEngine_GameObject_o *)0x0) goto LAB_03da4725;
                    pUVar12 = UnityEngine_GameObject__get_transform(local_48,(MethodInfo *)0x0);
                    pUVar13 = (UnityEngine_Transform_o *)
                              System_Collections_Generic_Dictionary<object__object>__get_Item
                                        (__this_12,(Il2CppObject *)pUVar10,MethodInfo_Transform_get_Item);
                    if (pUVar12 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    UnityEngine_Transform__SetParent(pUVar12,pUVar13,(MethodInfo *)0x0);
                  }
                }
                __this_12 = pSVar26;
                __this_08.fields._list._4_4_ = iVar25;
                __this_08.fields._list._0_4_ = uVar24;
                __this_08.fields._8_8_ = __this_11;
                __this_08.fields._current = (Il2CppObject *)__this_12;
                System_Collections_Generic_List_Enumerator<object>__Dispose
                          (__this_08,(MethodInfo_3185E10 *)&local_58);
                pSVar26 = __this_12;
              } while( true );
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$CombineMeshes
// il2cpp: void Map_MapLoader__CombineMeshes (Map_MapLoader_o* __this, UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x3da5420

void Map_MapLoader__CombineMeshes
               (Map_MapLoader_o *__this,UnityEngine_GameObject_o *obj,MethodInfo *method)

{
  int32_t *piVar1;
  System_Object_array *pSVar2;
  UnityEngine_CombineInstance_o __this_00;
  UnityEngine_CombineInstance_o __this_01;
  UnityEngine_Matrix4x4_o value;
  long lVar3;
  char cVar4;
  bool_conflict bVar5;
  uint uVar6;
  System_Object_array *pSVar7;
  System_Collections_Generic_List_object__o *__this_02;
  UnityEngine_Object_o *pUVar8;
  UnityEngine_CombineInstance_array *combine;
  UnityEngine_Component_o *pUVar9;
  UnityEngine_Renderer_o *pUVar10;
  UnityEngine_MeshFilter_o *pUVar11;
  MethodInfo *method_00;
  UnityEngine_Transform_o *__this_03;
  UnityEngine_Mesh_o *pUVar12;
  UnityEngine_Renderer_o *__this_04;
  UnityEngine_Material_o *value_00;
  int32_t index;
  ulong uVar13;
  uint uVar14;
  MethodInfo *method_01;
  undefined8 in_stack_fffffffffffffef8;
  undefined8 in_stack_ffffffffffffff00;
  undefined8 in_stack_ffffffffffffff08;
  undefined8 in_stack_ffffffffffffff10;
  undefined8 in_stack_ffffffffffffff18;
  undefined8 in_stack_ffffffffffffff20;
  undefined8 in_stack_ffffffffffffff28;
  undefined8 in_stack_ffffffffffffff30;
  undefined7 in_stack_ffffffffffffff38;
  undefined8 in_stack_ffffffffffffff48;
  undefined8 in_stack_ffffffffffffff50;
  undefined8 in_stack_ffffffffffffff58;
  undefined8 in_stack_ffffffffffffff88;
  undefined8 in_stack_ffffffffffffff90;
  undefined8 in_stack_ffffffffffffff98;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (DAT_05702778 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CombineInstance);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_init_method_metadata(&MethodInfo_MeshFilter_AddComponent_MeshFilter);
    il2cpp_init_method_metadata(&MethodInfo_MeshRenderer_AddComponent_MeshRenderer);
    il2cpp_init_method_metadata(&MethodInfo_MeshFilter___GetComponentsInChildren_MeshFilter);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_MeshFilter);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_MeshFilter_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_MeshFilter);
    il2cpp_init_method_metadata(&TypeInfo_Mesh);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702778 = '\x01';
  }
  if ((obj != (UnityEngine_GameObject_o *)0x0) &&
     (pSVar7 = UnityEngine_GameObject__GetComponentsInChildren<object>(obj,MethodInfo_MeshFilter___GetComponentsInChildren_MeshFilter),
     pSVar7 != (System_Object_array *)0x0)) {
    if (pSVar7->max_length == 0) {
      return;
    }
    __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_MeshFilter);
    System_Collections_Generic_List<object>___ctor(__this_02,MethodInfo_List_1_UnityEngine_MeshFilter);
    uVar6 = (uint)pSVar7->max_length;
    if (0 < (int)uVar6) {
      uVar13 = 0;
      if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
        if (uVar6 != 0) {
          do {
            pUVar9 = (UnityEngine_Component_o *)pSVar7->m_Items[uVar13];
            if (pUVar9 == (UnityEngine_Component_o *)0x0) goto LAB_03da5993;
            pUVar8 = (UnityEngine_Object_o *)
                     UnityEngine_Component__GetComponent<object>(pUVar9,MethodInfo_Renderer_GetComponent_Renderer);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar5 = UnityEngine_Object__op_Inequality
                              (pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            lVar3 = MethodInfo_Void_Add;
            if ((char)bVar5 == '\0') {
LAB_03da557a:
              uVar6 = (uint)pSVar7->max_length;
              if ((int)uVar6 <= (int)uVar13 + 1) goto LAB_03da5695;
            }
            else {
              piVar1 = &(__this_02->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar2 = (__this_02->fields)._items;
              if (pSVar2 == (System_Object_array *)0x0) goto LAB_03da5993;
              uVar6 = (__this_02->fields)._size;
              if ((uint)pSVar2->max_length <= uVar6) {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_02,(Il2CppObject *)pUVar9,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                goto LAB_03da557a;
              }
              (__this_02->fields)._size = uVar6 + 1;
              pSVar2->m_Items[(int)uVar6] = (Il2CppObject *)pUVar9;
              il2cpp_runtime_glue(pSVar2->m_Items + (int)uVar6,pUVar9);
              uVar6 = (uint)pSVar7->max_length;
              if ((int)uVar6 <= (int)uVar13 + 1) goto LAB_03da5695;
            }
            uVar13 = uVar13 + 1;
          } while ((uint)uVar13 < uVar6);
        }
LAB_03da5998:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      do {
        uVar14 = (uint)uVar13;
        if (uVar6 <= uVar14) goto LAB_03da5998;
        if ((UnityEngine_Component_o *)pSVar7->m_Items[(int)uVar14] ==
            (UnityEngine_Component_o *)0x0) goto LAB_03da5993;
        pUVar8 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pSVar7->m_Items[(int)uVar14],MethodInfo_Renderer_GetComponent_Renderer);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          (pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') goto LAB_03da5993;
        uVar13 = (ulong)(uVar14 + 1);
        uVar6 = (uint)pSVar7->max_length;
      } while ((int)(uVar14 + 1) < (int)uVar6);
    }
LAB_03da5695:
    if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
      if ((__this_02->fields)._size == 0) {
        return;
      }
      combine = (UnityEngine_CombineInstance_array *)il2cpp_glue_02274930(TypeInfo_CombineInstance);
      pUVar9 = (UnityEngine_Component_o *)
               System_Collections_Generic_List<object>__get_Item(__this_02,0,MethodInfo_MeshFilter_get_Item);
      if ((pUVar9 != (UnityEngine_Component_o *)0x0) &&
         (pUVar10 = (UnityEngine_Renderer_o *)
                    UnityEngine_Component__GetComponent<object>(pUVar9,MethodInfo_Renderer_GetComponent_Renderer),
         pUVar10 != (UnityEngine_Renderer_o *)0x0)) {
        bVar5 = UnityEngine_Renderer__get_enabled(pUVar10,(MethodInfo *)0x0);
        cVar4 = (char)bVar5;
        if (0 < (__this_02->fields)._size) {
          if (combine == (UnityEngine_CombineInstance_array *)0x0) goto LAB_03da5993;
          method_01 = (MethodInfo *)combine->m_Items;
          uVar13 = 0;
          do {
            index = (int32_t)uVar13;
            pUVar11 = (UnityEngine_MeshFilter_o *)
                      System_Collections_Generic_List<object>__get_Item
                                (__this_02,index,MethodInfo_MeshFilter_get_Item);
            if (pUVar11 == (UnityEngine_MeshFilter_o *)0x0) goto LAB_03da5993;
            method_00 = (MethodInfo *)
                        UnityEngine_MeshFilter__get_sharedMesh(pUVar11,(MethodInfo *)0x0);
            if ((uint)combine->max_length <= uVar13) goto LAB_03da5998;
            __this_00.fields.m_Transform.fields.m00 = (float)in_stack_ffffffffffffff00;
            __this_00.fields.m_Transform.fields.m10 = SUB84(in_stack_ffffffffffffff00,4);
            __this_00.fields.m_MeshInstanceID = (int32_t)(float)in_stack_fffffffffffffef8;
            __this_00.fields.m_SubMeshIndex = (int32_t)SUB84(in_stack_fffffffffffffef8,4);
            __this_00.fields.m_Transform.fields.m20 = (float)in_stack_ffffffffffffff08;
            __this_00.fields.m_Transform.fields.m30 = SUB84(in_stack_ffffffffffffff08,4);
            __this_00.fields.m_Transform.fields.m01 = (float)in_stack_ffffffffffffff10;
            __this_00.fields.m_Transform.fields.m11 = SUB84(in_stack_ffffffffffffff10,4);
            __this_00.fields.m_Transform.fields.m21 = (float)in_stack_ffffffffffffff18;
            __this_00.fields.m_Transform.fields.m31 = SUB84(in_stack_ffffffffffffff18,4);
            __this_00.fields.m_Transform.fields.m02 = (float)in_stack_ffffffffffffff20;
            __this_00.fields.m_Transform.fields.m12 = SUB84(in_stack_ffffffffffffff20,4);
            __this_00.fields.m_Transform.fields.m22 = (float)in_stack_ffffffffffffff28;
            __this_00.fields.m_Transform.fields.m32 = SUB84(in_stack_ffffffffffffff28,4);
            __this_00.fields.m_Transform.fields.m03 = (float)in_stack_ffffffffffffff30;
            __this_00.fields.m_Transform.fields.m13 = SUB84(in_stack_ffffffffffffff30,4);
            __this_00.fields.m_Transform.fields._56_7_ = in_stack_ffffffffffffff38;
            __this_00.fields.m_Transform.fields.m33._3_1_ = cVar4;
            __this_00.fields.m_LightmapScaleOffset.fields._0_8_ = obj;
            __this_00.fields.m_LightmapScaleOffset.fields.z = (float)in_stack_ffffffffffffff48;
            __this_00.fields.m_LightmapScaleOffset.fields.w = SUB84(in_stack_ffffffffffffff48,4);
            __this_00.fields.m_RealtimeLightmapScaleOffset.fields.x =
                 (float)in_stack_ffffffffffffff50;
            __this_00.fields.m_RealtimeLightmapScaleOffset.fields.y =
                 SUB84(in_stack_ffffffffffffff50,4);
            __this_00.fields.m_RealtimeLightmapScaleOffset.fields.z =
                 (float)in_stack_ffffffffffffff58;
            __this_00.fields.m_RealtimeLightmapScaleOffset.fields.w =
                 SUB84(in_stack_ffffffffffffff58,4);
            UnityEngine_CombineInstance__set_mesh
                      (__this_00,(UnityEngine_Mesh_o *)method_01,method_00);
            pUVar9 = (UnityEngine_Component_o *)
                     System_Collections_Generic_List<object>__get_Item(__this_02,index,MethodInfo_MeshFilter_get_Item)
            ;
            if ((pUVar9 == (UnityEngine_Component_o *)0x0) ||
               (__this_03 = UnityEngine_Component__get_transform(pUVar9,(MethodInfo *)0x0),
               __this_03 == (UnityEngine_Transform_o *)0x0)) goto LAB_03da5993;
            in_stack_fffffffffffffef8 = in_stack_ffffffffffffff90;
            in_stack_ffffffffffffff00 = in_stack_ffffffffffffff98;
            UnityEngine_Transform__get_localToWorldMatrix
                      ((UnityEngine_Matrix4x4_o *)&stack0xffffffffffffff90,__this_03,
                       (MethodInfo *)0x0);
            if ((uint)combine->max_length <= uVar13) goto LAB_03da5998;
            __this_01.fields.m_Transform.fields.m00 = (float)in_stack_ffffffffffffff00;
            __this_01.fields.m_Transform.fields.m10 = SUB84(in_stack_ffffffffffffff00,4);
            __this_01.fields.m_MeshInstanceID = (int32_t)(float)in_stack_fffffffffffffef8;
            __this_01.fields.m_SubMeshIndex = (int32_t)SUB84(in_stack_fffffffffffffef8,4);
            __this_01.fields.m_Transform.fields._8_8_ = local_60;
            __this_01.fields.m_Transform.fields._16_8_ = uStack_58;
            __this_01.fields.m_Transform.fields._24_8_ = local_50;
            __this_01.fields.m_Transform.fields._32_8_ = uStack_48;
            __this_01.fields.m_Transform.fields._40_8_ = local_40;
            __this_01.fields.m_Transform.fields._48_8_ = uStack_38;
            __this_01.fields.m_Transform.fields._56_7_ = in_stack_ffffffffffffff38;
            __this_01.fields.m_Transform.fields.m33._3_1_ = cVar4;
            __this_01.fields.m_LightmapScaleOffset.fields._0_8_ = obj;
            __this_01.fields.m_LightmapScaleOffset.fields.z = (float)in_stack_fffffffffffffef8;
            __this_01.fields.m_LightmapScaleOffset.fields.w = SUB84(in_stack_fffffffffffffef8,4);
            __this_01.fields.m_RealtimeLightmapScaleOffset.fields.x =
                 (float)in_stack_ffffffffffffff00;
            __this_01.fields.m_RealtimeLightmapScaleOffset.fields.y =
                 SUB84(in_stack_ffffffffffffff00,4);
            __this_01.fields.m_RealtimeLightmapScaleOffset.fields._8_8_ = local_60;
            value.fields._8_8_ = local_50;
            value.fields._0_8_ = uStack_58;
            value.fields._16_8_ = uStack_48;
            value.fields._24_8_ = local_40;
            value.fields._32_8_ = uStack_38;
            value.fields.m22 = (float)(int)in_stack_ffffffffffffff88;
            value.fields.m32 = (float)(int)((ulong)in_stack_ffffffffffffff88 >> 0x20);
            value.fields.m03 = (float)in_stack_fffffffffffffef8;
            value.fields.m13 = SUB84(in_stack_fffffffffffffef8,4);
            value.fields.m23 = (float)in_stack_ffffffffffffff00;
            value.fields.m33 = SUB84(in_stack_ffffffffffffff00,4);
            in_stack_ffffffffffffff08 = local_60;
            in_stack_ffffffffffffff10 = uStack_58;
            in_stack_ffffffffffffff18 = local_50;
            in_stack_ffffffffffffff20 = uStack_48;
            in_stack_ffffffffffffff28 = local_40;
            in_stack_ffffffffffffff30 = uStack_38;
            in_stack_ffffffffffffff48 = in_stack_fffffffffffffef8;
            in_stack_ffffffffffffff50 = in_stack_ffffffffffffff00;
            in_stack_ffffffffffffff58 = local_60;
            in_stack_ffffffffffffff90 = in_stack_fffffffffffffef8;
            in_stack_ffffffffffffff98 = in_stack_ffffffffffffff00;
            UnityEngine_CombineInstance__set_transform(__this_01,value,method_01);
            pUVar9 = (UnityEngine_Component_o *)
                     System_Collections_Generic_List<object>__get_Item(__this_02,index,MethodInfo_MeshFilter_get_Item)
            ;
            if ((pUVar9 == (UnityEngine_Component_o *)0x0) ||
               (pUVar10 = (UnityEngine_Renderer_o *)
                          UnityEngine_Component__GetComponent<object>(pUVar9,MethodInfo_Renderer_GetComponent_Renderer),
               pUVar10 == (UnityEngine_Renderer_o *)0x0)) goto LAB_03da5993;
            UnityEngine_Renderer__set_enabled(pUVar10,0,(MethodInfo *)0x0);
            uVar13 = uVar13 + 1;
            method_01 = (MethodInfo *)&method_01[1].invoker_method;
          } while ((long)uVar13 < (long)(__this_02->fields)._size);
        }
        pUVar11 = (UnityEngine_MeshFilter_o *)
                  UnityEngine_GameObject__AddComponent<object>(obj,MethodInfo_MeshFilter_AddComponent_MeshFilter);
        pUVar10 = (UnityEngine_Renderer_o *)
                  UnityEngine_GameObject__AddComponent<object>(obj,MethodInfo_MeshRenderer_AddComponent_MeshRenderer);
        pUVar12 = (UnityEngine_Mesh_o *)il2cpp_runtime_glue(TypeInfo_Mesh);
        UnityEngine_Mesh___ctor(pUVar12,(MethodInfo *)0x0);
        if (pUVar11 != (UnityEngine_MeshFilter_o *)0x0) {
          UnityEngine_MeshFilter__set_mesh(pUVar11,pUVar12,(MethodInfo *)0x0);
          pUVar12 = UnityEngine_MeshFilter__get_mesh(pUVar11,(MethodInfo *)0x0);
          if (pUVar12 != (UnityEngine_Mesh_o *)0x0) {
            UnityEngine_Mesh__set_indexFormat(pUVar12,1,(MethodInfo *)0x0);
            pUVar12 = UnityEngine_MeshFilter__get_mesh(pUVar11,(MethodInfo *)0x0);
            if ((pUVar12 != (UnityEngine_Mesh_o *)0x0) &&
               (UnityEngine_Mesh__CombineMeshes(pUVar12,combine,1,1,(MethodInfo *)0x0),
               pUVar10 != (UnityEngine_Renderer_o *)0x0)) {
              UnityEngine_Renderer__set_staticShadowCaster(pUVar10,1,(MethodInfo *)0x0);
              if (cVar4 == '\0') {
                UnityEngine_Renderer__set_enabled(pUVar10,0,(MethodInfo *)0x0);
                return;
              }
              pUVar9 = (UnityEngine_Component_o *)
                       System_Collections_Generic_List<object>__get_Item(__this_02,0,MethodInfo_MeshFilter_get_Item);
              if ((pUVar9 != (UnityEngine_Component_o *)0x0) &&
                 (__this_04 = (UnityEngine_Renderer_o *)
                              UnityEngine_Component__GetComponent<object>(pUVar9,MethodInfo_Renderer_GetComponent_Renderer),
                 __this_04 != (UnityEngine_Renderer_o *)0x0)) {
                value_00 = UnityEngine_Renderer__get_sharedMaterial(__this_04,(MethodInfo *)0x0);
                UnityEngine_Renderer__set_material(pUVar10,value_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_03da5993:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$RegisterTag
// il2cpp: void Map_MapLoader__RegisterTag (System_String_o* tag, Map_MapObject_o* obj, const MethodInfo* method);
// 0x3da59a0

void Map_MapLoader__RegisterTag(System_String_o *tag,Map_MapObject_o *obj,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Object_array *pSVar4;
  long lVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_object__o *pSVar7;
  System_Collections_Generic_HashSet_object__o *pSVar8;
  
  if (DAT_05702779 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapObject__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_List_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05702779 = '\x01';
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto LAB_03da5aa4;
LAB_03da59d0:
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto LAB_03da59d0;
LAB_03da5aa4:
    il2cpp_init_class();
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
  }
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar6 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar3,(Il2CppObject *)tag,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar6 == '\0') {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
      pSVar7 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_MapObject);
      System_Collections_Generic_List<object>___ctor(pSVar7,MethodInfo_List_1_Map_MapObject);
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03da5ccc;
      System_Collections_Generic_Dictionary<object__object>__Add
                (pSVar3,(Il2CppObject *)tag,(Il2CppObject *)pSVar7,MethodInfo_Void_Add);
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x20);
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar6 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        (pSVar3,(Il2CppObject *)obj,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar6 == '\0') {
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x20);
        pSVar8 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
        System_Collections_Generic_HashSet<object>___ctor(pSVar8,MethodInfo_HashSet_1_System_String);
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_03da5ccc;
        System_Collections_Generic_Dictionary<object__object>__Add
                  (pSVar3,(Il2CppObject *)obj,(Il2CppObject *)pSVar8,MethodInfo_Void_Add);
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
      if ((pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (pSVar7 = (System_Collections_Generic_List_object__o *)
                   System_Collections_Generic_Dictionary<object__object>__get_Item
                             (pSVar3,(Il2CppObject *)tag,MethodInfo_List_1_Map_MapObject__get_Item), lVar5 = MethodInfo_Void_Add,
         pSVar7 != (System_Collections_Generic_List_object__o *)0x0)) {
        piVar1 = &(pSVar7->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar7->fields)._items;
        if (pSVar4 != (System_Object_array *)0x0) {
          uVar2 = (pSVar7->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (pSVar7->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)obj;
            il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,obj);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar7,(Il2CppObject *)obj,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                    (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x20);
          if ((pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
             (pSVar8 = (System_Collections_Generic_HashSet_object__o *)
                       System_Collections_Generic_Dictionary<object__object>__get_Item
                                 (pSVar3,(Il2CppObject *)obj,MethodInfo_HashSet_1_System_String__get_Item),
             pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
            System_Collections_Generic_HashSet<object>__Add(pSVar8,(Il2CppObject *)tag,MethodInfo_Boolean_Add)
            ;
            return;
          }
        }
      }
    }
  }
LAB_03da5ccc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$HasTag
// il2cpp: bool Map_MapLoader__HasTag (Map_MapObject_o* obj, System_String_o* tag, const MethodInfo* method);
// 0x3da5ce0

bool_conflict Map_MapLoader__HasTag(Map_MapObject_o *obj,System_String_o *tag,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool_conflict bVar3;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_0570277a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_0570277a = '\x01';
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x20);
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x20);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar2,(Il2CppObject *)obj,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return 0;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x20);
    if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this = (System_Collections_Generic_HashSet_object__o *)
                 System_Collections_Generic_Dictionary<object__object>__get_Item
                           (pSVar2,(Il2CppObject *)obj,MethodInfo_HashSet_1_System_String__get_Item),
       __this != (System_Collections_Generic_HashSet_object__o *)0x0)) {
      bVar3 = System_Collections_Generic_HashSet<object>__Contains
                        (__this,(Il2CppObject *)tag,MethodInfo_Boolean_Contains);
      return bVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$GetMapObject
// il2cpp: Map_MapObject_o* Map_MapLoader__GetMapObject (UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x3da5e00

Map_MapObject_o * Map_MapLoader__GetMapObject(UnityEngine_GameObject_o *obj,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool_conflict bVar3;
  UnityEngine_Transform_o *pUVar4;
  Map_MapObject_o *pMVar5;
  
  if (DAT_0570277b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570277b = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)obj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (Map_MapObject_o *)0x0;
  }
  iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  while( true ) {
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03da5fe7;
    bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar2,(Il2CppObject *)obj,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 != '\0') break;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)obj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') break;
    if (((UnityEngine_Object_o *)obj == (UnityEngine_Object_o *)0x0) ||
       (pUVar4 = UnityEngine_GameObject__get_transform(obj,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03da5fe7;
    pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') break;
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_03da5fe7;
    obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0)
    ;
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar2,(Il2CppObject *)obj,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return (Map_MapObject_o *)0x0;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pMVar5 = (Map_MapObject_o *)
               System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar2,(Il2CppObject *)obj,MethodInfo_MapObject_get_Item);
      return pMVar5;
    }
  }
LAB_03da5fe7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$LoadSceneObject
// il2cpp: UnityEngine_GameObject_o* Map_MapLoader__LoadSceneObject (Map_MapScriptSceneObject_o* obj, bool editor, const MethodInfo* method);
// 0x3da0890

UnityEngine_GameObject_o *
Map_MapLoader__LoadSceneObject
          (Map_MapScriptSceneObject_o *obj,bool_conflict editor,MethodInfo *method)

{
  byte bVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *physicsMaterial;
  Map_MapScriptBaseMaterial_o *material;
  bool_conflict bVar4;
  int32_t iVar5;
  UnityEngine_GameObject_o *__this;
  MethodInfo *pMVar6;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  
  if (DAT_0570277c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_SphereCollider_AddComponent_SphereCollider);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideMode);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    il2cpp_init_method_metadata(&"None");
    DAT_0570277c = '\x01';
  }
  if (obj != (Map_MapScriptSceneObject_o *)0x0) {
    pMVar6 = "None";
    bVar4 = System_String__op_Equality
                      ((obj->fields).Asset,(System_String_o *)"None",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      pSVar2 = (obj->fields).Asset;
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this = Map_MapLoader__LoadPrefabCached(pSVar2,pMVar6);
    }
    else {
      __this = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor(__this,(MethodInfo *)0x0);
    }
    if ((char)editor == '\0') {
      pSVar2 = *(System_String_o **)&(obj->fields).ScaleZ;
      pSVar3 = (obj->fields).CollideMode;
      physicsMaterial = (obj->fields).CollideWith;
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Map_MapLoader__SetPhysics(__this,pSVar2,pSVar3,physicsMaterial,in_R8);
    }
    else {
      if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pMVar6 = (MethodInfo *)**(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
      if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x40);
      pSVar3 = (obj->fields).CollideWith;
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      iVar5 = Map_MapLoader__SetPhysics(__this,(System_String_o *)pMVar6,pSVar2,pSVar3,in_R8);
      if (iVar5 == 0) {
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Map_MapLoader__TryAddEditorCollider(__this,pMVar6);
      }
    }
    pSVar2 = (obj->fields).Asset;
    material = (Map_MapScriptBaseMaterial_o *)(obj->fields).PhysicsMaterial;
    bVar1 = *(byte *)((long)&(obj->fields).Active + 2);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Map_MapLoader__SetMaterial(__this,pSVar2,material,(uint)bVar1,editor & 0xff,in_R9);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$TryAddEditorCollider
// il2cpp: bool Map_MapLoader__TryAddEditorCollider (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x3da6950

bool_conflict Map_MapLoader__TryAddEditorCollider(UnityEngine_GameObject_o *go,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_MeshFilter_o *__this;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  bool_conflict bVar6;
  int32_t iVar7;
  int iVar8;
  System_Object_array *pSVar9;
  UnityEngine_Object_o *pUVar10;
  UnityEngine_Mesh_o *pUVar11;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_MeshCollider_o *__this_01;
  undefined8 extraout_RAX;
  UnityEngine_BoxCollider_o *__this_02;
  UnityEngine_Transform_o *pUVar12;
  MapEditor_EditorGizmoIcon_o *__this_03;
  undefined8 extraout_RAX_00;
  undefined8 extraout_RAX_01;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar20;
  undefined1 auVar19 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value;
  float local_7c;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [12];
  float fStack_5c;
  float local_58;
  float fStack_54;
  UnityEngine_Bounds_o local_48;
  UnityEngine_Vector3_o UVar35;
  
  if (DAT_0570277d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystemRenderer_GetComponent_ParticleSyst);
    il2cpp_init_method_metadata(&MethodInfo_BoxCollider_AddComponent_BoxCollider);
    il2cpp_init_method_metadata(&MethodInfo_EditorGizmoIcon_AddComponent_EditorGizmoIcon);
    il2cpp_init_method_metadata(&MethodInfo_MeshCollider_AddComponent_MeshCollider);
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystem_GetComponentInChildren_ParticleSy);
    il2cpp_init_method_metadata(&MethodInfo_MeshFilter___GetComponentsInChildren_MeshFilter);
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570277d = '\x01';
  }
  if ((go == (UnityEngine_GameObject_o *)0x0) ||
     (pSVar9 = UnityEngine_GameObject__GetComponentsInChildren<object>(go,MethodInfo_MeshFilter___GetComponentsInChildren_MeshFilter),
     pSVar9 == (System_Object_array *)0x0)) goto LAB_03da6ea7;
  iVar8 = (int)pSVar9->max_length;
  if (0 < iVar8) {
    uVar14 = 0;
    if (iVar8 != 0) {
      do {
        __this = (UnityEngine_MeshFilter_o *)pSVar9->m_Items[(int)uVar14];
        if (__this == (UnityEngine_MeshFilter_o *)0x0) goto LAB_03da6ea7;
        pUVar10 = (UnityEngine_Object_o *)
                  UnityEngine_MeshFilter__get_sharedMesh(__this,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          (pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          pUVar11 = UnityEngine_MeshFilter__get_sharedMesh(__this,(MethodInfo *)0x0);
          if (pUVar11 == (UnityEngine_Mesh_o *)0x0) goto LAB_03da6ea7;
          iVar7 = UnityEngine_Mesh__get_vertexCount(pUVar11,(MethodInfo *)0x0);
          if (0 < iVar7) {
            __this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_03da6ea7;
            __this_01 = (UnityEngine_MeshCollider_o *)
                        UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_MeshCollider_AddComponent_MeshCollider);
            pUVar11 = UnityEngine_MeshFilter__get_sharedMesh(__this,(MethodInfo *)0x0);
            if (__this_01 == (UnityEngine_MeshCollider_o *)0x0) goto LAB_03da6ea7;
            UnityEngine_MeshCollider__set_sharedMesh(__this_01,pUVar11,(MethodInfo *)0x0);
            uVar13 = extraout_RAX;
            goto LAB_03da6e96;
          }
        }
        uVar14 = uVar14 + 1;
        uVar1 = (uint)pSVar9->max_length;
        if ((int)uVar1 <= (int)uVar14) goto LAB_03da6ae5;
      } while (uVar14 < uVar1);
    }
LAB_03da6eac:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03da6ae5:
  pSVar9 = UnityEngine_GameObject__GetComponentsInChildren<object>(go,MethodInfo_Renderer___GetComponentsInChildren_Renderer);
  if (pSVar9 == (System_Object_array *)0x0) goto LAB_03da6ea7;
  if ((pSVar9->max_length != 0) && (iVar8 = (int)pSVar9->max_length, 0 < iVar8)) {
    local_68._0_4_ = 0.0;
    local_68._4_4_ = 0.0;
    stack0xffffffffffffffa0 = 0;
    lVar15 = 0;
    bVar5 = false;
    local_7c = 0.0;
    fVar21 = 0.0;
    _local_78 = ZEXT416(0);
    if (iVar8 != 0) {
      do {
        if ((UnityEngine_Renderer_o *)pSVar9->m_Items[lVar15] == (UnityEngine_Renderer_o *)0x0)
        goto LAB_03da6ea7;
        UnityEngine_Renderer__get_bounds
                  (&local_48,(UnityEngine_Renderer_o *)pSVar9->m_Items[lVar15],(MethodInfo *)0x0);
        uVar13._0_4_ = local_48.fields.m_Extents.fields.x;
        uVar13._4_4_ = local_48.fields.m_Extents.fields.y;
        fVar33 = local_48.fields.m_Extents.fields.x;
        fVar34 = local_48.fields.m_Extents.fields.y;
        if ((local_48.fields.m_Extents.fields.z * local_48.fields.m_Extents.fields.z +
             fVar34 * fVar34 + fVar33 * fVar33 <= 0.0) ||
           (((uint)fVar33 & 0x7f800000) == 0x7f800000)) {
LAB_03da6c20:
          uVar14 = (uint)pSVar9->max_length;
          auVar18 = _local_78;
          uVar13 = local_68._0_8_;
          if ((int)uVar14 <= (int)lVar15 + 1) {
LAB_03da6cd5:
            if (!bVar5) goto LAB_03da6cdf;
            __this_02 = (UnityEngine_BoxCollider_o *)
                        UnityEngine_GameObject__AddComponent<object>(go,MethodInfo_BoxCollider_AddComponent_BoxCollider);
            pUVar12 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
            if ((pUVar12 == (UnityEngine_Transform_o *)0x0) ||
               (UVar35.fields.z = local_7c, UVar35.fields.x = (float)local_78._0_4_,
               UVar35.fields.y = (float)local_78._4_4_,
               UVar35 = UnityEngine_Transform__InverseTransformPoint
                                  (pUVar12,UVar35,(MethodInfo *)0x0),
               __this_02 == (UnityEngine_BoxCollider_o *)0x0)) goto LAB_03da6ea7;
            UnityEngine_BoxCollider__set_center(__this_02,UVar35,(MethodInfo *)0x0);
            auVar17._0_4_ = (float)local_68._0_4_ + (float)local_68._0_4_;
            auVar17._4_4_ = (float)local_68._4_4_ + (float)local_68._4_4_;
            auVar17._8_4_ = (float)local_68._8_4_ + (float)local_68._8_4_;
            auVar17._12_4_ = fStack_5c + fStack_5c;
            goto LAB_03da6e88;
          }
        }
        else {
          if (bVar5) {
            fVar29 = local_48.fields.m_Center.fields.x - fVar33;
            fVar30 = local_48.fields.m_Center.fields.y - fVar34;
            fVar31 = local_48.fields.m_Center.fields.z - local_48.fields.m_Extents.fields.z;
            auVar25._0_4_ = (float)local_78._0_4_ - (float)local_68._0_4_;
            auVar25._4_4_ = (float)local_78._4_4_ - (float)local_68._4_4_;
            auVar25._8_4_ = fStack_70 - (float)local_68._8_4_;
            auVar25._12_4_ = fStack_6c - fStack_5c;
            auVar18._4_4_ = fVar30;
            auVar18._0_4_ = fVar29;
            auVar18._8_8_ = 0;
            auVar18 = minps(auVar25,auVar18);
            fVar22 = local_7c - fVar21;
            if (fVar31 <= local_7c - fVar21) {
              fVar22 = fVar31;
            }
            auVar24._0_4_ = (float)local_78._0_4_ + (float)local_68._0_4_;
            auVar24._4_4_ = (float)local_78._4_4_ + (float)local_68._4_4_;
            auVar24._8_4_ = fStack_70 + (float)local_68._8_4_;
            auVar24._12_4_ = fStack_6c + fStack_5c;
            auVar2._4_4_ = fVar30;
            auVar2._0_4_ = fVar29;
            auVar2._8_8_ = 0;
            auVar25 = maxps(auVar24,auVar2);
            fVar29 = fVar21 + local_7c;
            if (fVar21 + local_7c <= fVar31) {
              fVar29 = fVar31;
            }
            fVar23 = (auVar25._0_4_ - auVar18._0_4_) * 0.5;
            fVar26 = (auVar25._4_4_ - auVar18._4_4_) * 0.5;
            fVar27 = (auVar25._8_4_ - auVar18._8_4_) * 0.0;
            fVar28 = (auVar25._12_4_ - auVar18._12_4_) * 0.0;
            fVar21 = (fVar29 - fVar22) * 0.5;
            fVar29 = auVar18._0_4_ + fVar23;
            fVar30 = auVar18._4_4_ + fVar26;
            fVar31 = auVar18._8_4_ + fVar27;
            fVar20 = auVar18._12_4_ + fVar28;
            fVar33 = local_48.fields.m_Center.fields.x + fVar33;
            fVar34 = local_48.fields.m_Center.fields.y + fVar34;
            fVar32 = local_48.fields.m_Center.fields.z + local_48.fields.m_Extents.fields.z;
            auVar16._0_4_ = fVar29 - fVar23;
            auVar16._4_4_ = fVar30 - fVar26;
            auVar16._8_4_ = fVar31 - fVar27;
            auVar16._12_4_ = fVar20 - fVar28;
            local_7c = (fVar22 + fVar21) - fVar21;
            auVar3._4_4_ = fVar34;
            auVar3._0_4_ = fVar33;
            auVar3._8_8_ = 0;
            auVar18 = minps(auVar16,auVar3);
            if (fVar32 <= local_7c) {
              local_7c = fVar32;
            }
            auVar19._0_4_ = fVar29 + fVar23;
            auVar19._4_4_ = fVar30 + fVar26;
            auVar19._8_4_ = fVar31 + fVar27;
            auVar19._12_4_ = fVar20 + fVar28;
            fVar21 = fVar22 + fVar21 + fVar21;
            auVar4._4_4_ = fVar34;
            auVar4._0_4_ = fVar33;
            auVar4._8_8_ = 0;
            auVar25 = maxps(auVar19,auVar4);
            if (fVar21 <= fVar32) {
              fVar21 = fVar32;
            }
            local_68._0_4_ = (auVar25._0_4_ - auVar18._0_4_) * 0.5;
            local_68._4_4_ = (auVar25._4_4_ - auVar18._4_4_) * 0.5;
            fVar33 = (auVar25._8_4_ - auVar18._8_4_) * 0.0;
            fVar34 = (auVar25._12_4_ - auVar18._12_4_) * 0.0;
            fVar21 = (fVar21 - local_7c) * 0.5;
            local_7c = local_7c + fVar21;
            local_78._4_4_ = auVar18._4_4_ + (float)local_68._4_4_;
            local_78._0_4_ = auVar18._0_4_ + (float)local_68._0_4_;
            fStack_70 = auVar18._8_4_ + fVar33;
            fStack_6c = auVar18._12_4_ + fVar34;
            stack0xffffffffffffffa0 = CONCAT44(fVar34,fVar33);
            goto LAB_03da6c20;
          }
          _fStack_70 = 0;
          local_78._0_4_ = local_48.fields.m_Center.fields.x;
          local_78._4_4_ = local_48.fields.m_Center.fields.y;
          auVar18 = _local_78;
          local_78._0_4_ = local_48.fields.m_Center.fields.x;
          local_78._4_4_ = local_48.fields.m_Center.fields.y;
          local_68._0_4_ = local_48.fields.m_Extents.fields.x;
          local_68._4_4_ = local_48.fields.m_Extents.fields.y;
          stack0xffffffffffffffa0 = 0;
          local_7c = local_48.fields.m_Center.fields.z;
          bVar5 = true;
          uVar14 = (uint)pSVar9->max_length;
          fVar21 = local_48.fields.m_Extents.fields.z;
          if ((int)uVar14 <= (int)lVar15 + 1) goto LAB_03da6cd5;
        }
        local_68._0_8_ = uVar13;
        _local_78 = auVar18;
        lVar15 = lVar15 + 1;
      } while ((uint)lVar15 < uVar14);
    }
    goto LAB_03da6eac;
  }
LAB_03da6cdf:
  pUVar10 = (UnityEngine_Object_o *)
            UnityEngine_GameObject__GetComponentInChildren<object>(go,MethodInfo_ParticleSystem_GetComponentInChildren_ParticleSy);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    if (pUVar10 == (UnityEngine_Object_o *)0x0) goto LAB_03da6ea7;
    pUVar10 = (UnityEngine_Object_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar10,MethodInfo_ParticleSystemRenderer_GetComponent_ParticleSyst);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = UnityEngine_Object__op_Inequality(pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar6 != '\0') {
      if (pUVar10 != (UnityEngine_Object_o *)0x0) {
        UnityEngine_Renderer__get_bounds
                  (&local_48,(UnityEngine_Renderer_o *)pUVar10,(MethodInfo *)0x0);
        __this_02 = (UnityEngine_BoxCollider_o *)
                    UnityEngine_GameObject__AddComponent<object>(go,MethodInfo_BoxCollider_AddComponent_BoxCollider);
        pUVar12 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
        if ((pUVar12 == (UnityEngine_Transform_o *)0x0) ||
           (position.fields.z = local_48.fields.m_Center.fields.z,
           position.fields.x = local_48.fields.m_Center.fields.x,
           position.fields.y = local_48.fields.m_Center.fields.y,
           UVar35 = UnityEngine_Transform__InverseTransformPoint(pUVar12,position,(MethodInfo *)0x0)
           , __this_02 == (UnityEngine_BoxCollider_o *)0x0)) goto LAB_03da6ea7;
        UnityEngine_BoxCollider__set_center(__this_02,UVar35,(MethodInfo *)0x0);
        local_58 = local_48.fields.m_Extents.fields.x;
        fStack_54 = local_48.fields.m_Extents.fields.y;
        auVar17._0_4_ = local_58 + local_58;
        auVar17._4_4_ = fStack_54 + fStack_54;
        auVar17._8_8_ = 0;
        fVar21 = local_48.fields.m_Extents.fields.z;
LAB_03da6e88:
        value.fields.z = fVar21 + fVar21;
        value.fields._0_8_ = auVar17._0_8_;
        UnityEngine_BoxCollider__set_size(__this_02,value,(MethodInfo *)0x0);
        uVar13 = extraout_RAX_01;
        goto LAB_03da6e96;
      }
      goto LAB_03da6ea7;
    }
  }
  __this_03 = (MapEditor_EditorGizmoIcon_o *)
              UnityEngine_GameObject__AddComponent<object>(go,MethodInfo_EditorGizmoIcon_AddComponent_EditorGizmoIcon);
  if (__this_03 != (MapEditor_EditorGizmoIcon_o *)0x0) {
    MapEditor_EditorGizmoIcon__Setup(__this_03,(MethodInfo *)0x0);
    uVar13 = extraout_RAX_00;
LAB_03da6e96:
    return (bool_conflict)CONCAT71((int7)((ulong)uVar13 >> 8),1);
  }
LAB_03da6ea7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$SetTransform
// il2cpp: void Map_MapLoader__SetTransform (Map_MapObject_o* mapObject, const MethodInfo* method);
// 0x3da0be0

void Map_MapLoader__SetTransform(Map_MapObject_o *mapObject,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UnityEngine_Object_o *__this;
  Map_MapScriptBaseObject_o *pMVar5;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o value_00;
  
  if ((mapObject != (Map_MapObject_o *)0x0) &&
     (__this = (UnityEngine_Object_o *)(mapObject->fields).GameObject,
     __this != (UnityEngine_Object_o *)0x0)) {
    pMVar5 = (mapObject->fields).ScriptObject;
    __this_00 = UnityEngine_GameObject__get_transform
                          ((UnityEngine_GameObject_o *)__this,(MethodInfo *)0x0);
    if (pMVar5 != (Map_MapScriptBaseObject_o *)0x0) {
      UnityEngine_GameObject__set_isStatic
                ((UnityEngine_GameObject_o *)__this,
                 (uint)*(byte *)((long)&(pMVar5->fields).Active + 1),(MethodInfo *)0x0);
      UnityEngine_Object__set_name
                (__this,*(System_String_o **)&(pMVar5->fields).Visible,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_position
                  (__this_00,
                   (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&(pMVar5->fields).Name,
                   (MethodInfo *)0x0);
        uVar1 = (pMVar5->fields).PositionY;
        uVar3 = (pMVar5->fields).PositionZ;
        UVar6.fields.x = (float)uVar1 * 0.017453292;
        UVar6.fields.y = (float)uVar3 * 0.017453292;
        UVar6.fields.z = (pMVar5->fields).RotationX * 0.017453292;
        value_00 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar6,(MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation(__this_00,value_00,(MethodInfo *)0x0);
        UVar6 = UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0);
        (mapObject->fields).BaseScale.fields.x = UVar6.fields.x;
        (mapObject->fields).BaseScale.fields.y = UVar6.fields.y;
        (mapObject->fields).BaseScale.fields.z = UVar6.fields.z;
        uVar2 = (pMVar5->fields).RotationY;
        uVar4 = (pMVar5->fields).RotationZ;
        value.fields.x = UVar6.fields.x * (float)uVar2;
        value.fields.y = UVar6.fields.y * (float)uVar4;
        value.fields.z = UVar6.fields.z * (pMVar5->fields).ScaleX;
        UnityEngine_Transform__set_localScale(__this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$SetParent
// il2cpp: void Map_MapLoader__SetParent (Map_MapObject_o* mapObject, const MethodInfo* method);
// 0x3da8700

void Map_MapLoader__SetParent(Map_MapObject_o *mapObject,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  Map_MapScriptBaseObject_o *pMVar1;
  bool_conflict bVar2;
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *pIVar3;
  UnityEngine_Transform_o *p;
  System_String_o *pSVar4;
  int32_t *piVar5;
  
  if (DAT_0570277e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&")");
    il2cpp_init_method_metadata(&"Map load error: object parent id not found (");
    DAT_0570277e = '\x01';
  }
  if ((mapObject != (Map_MapObject_o *)0x0) &&
     (__this = (mapObject->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    pMVar1 = (mapObject->fields).ScriptObject;
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (pMVar1 != (Map_MapScriptBaseObject_o *)0x0) {
      if ((pMVar1->fields).Parent < 1) {
        return;
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((System_Collections_Generic_Dictionary_int__object__o *)
          **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
          (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        piVar5 = &(pMVar1->fields).Parent;
        bVar2 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                          ((System_Collections_Generic_Dictionary_int__object__o *)
                           **(undefined8 **)(TypeInfo_MapLoader + 0xb8),*piVar5,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar2 == '\0') {
          pSVar4 = System_Int32__ToString((int32_t)piVar5,(MethodInfo *)0x0);
          pSVar4 = System_String__Concat("Map load error: object parent id not found (",pSVar4,")",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
            il2cpp_init_class();
          }
          ApplicationManagers_DebugConsole__Log(pSVar4,1,(MethodInfo *)0x0);
          return;
        }
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if ((System_Collections_Generic_Dictionary_int__object__o *)
            **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
            (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          pIVar3 = System_Collections_Generic_Dictionary<int__object>__get_Item
                             ((System_Collections_Generic_Dictionary_int__object__o *)
                              **(undefined8 **)(TypeInfo_MapLoader + 0xb8),*piVar5,MethodInfo_MapObject_get_Item);
          if ((pIVar3 != (Il2CppObject *)0x0) &&
             (pIVar3[1].monitor != (UnityEngine_GameObject_o *)0x0)) {
            p = UnityEngine_GameObject__get_transform(pIVar3[1].monitor,(MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent(__this_00,p,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$SetDefaultTiling
// il2cpp: void Map_MapLoader__SetDefaultTiling (System_String_o* asset, UnityEngine_Material_o* mat, UnityEngine_Vector2_o tiling, const MethodInfo* method);
// 0x3da88b0

void Map_MapLoader__SetDefaultTiling
               (System_String_o *asset,UnityEngine_Material_o *mat,UnityEngine_Vector2_o tiling,
               MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  
  if (DAT_0570277f == '\0') {
    il2cpp_init_method_metadata(&"FX/LavaCube1");
    il2cpp_init_method_metadata(&"_BaseColorTiling");
    il2cpp_init_method_metadata(&"_EmitColorTiling");
    il2cpp_init_method_metadata(&"FX/WaterCube1");
    il2cpp_init_method_metadata(&"_Tiling_1");
    il2cpp_init_method_metadata(&"_Normal_Tiling");
    il2cpp_init_method_metadata(&"_Tiling");
    DAT_0570277f = '\x01';
  }
  bVar1 = System_String__op_Equality(asset,"FX/WaterCube1",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(asset,"FX/LavaCube1",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return;
    }
    if (mat == (UnityEngine_Material_o *)0x0) goto LAB_03da89d3;
    value.fields.z = 0.0;
    value.fields.w = 0.0;
    value.fields._0_8_ = tiling.fields;
    UnityEngine_Material__SetVector(mat,"_BaseColorTiling",value,(MethodInfo *)0x0);
    puVar3 = (undefined8 *)&"_Normal_Tiling";
    puVar2 = &"_EmitColorTiling";
  }
  else {
    if (mat == (UnityEngine_Material_o *)0x0) {
LAB_03da89d3:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    puVar3 = &"_Tiling_1";
    puVar2 = &"_Tiling";
  }
  value_00.fields.z = 0.0;
  value_00.fields.w = 0.0;
  value_00.fields._0_8_ = tiling.fields;
  UnityEngine_Material__SetVector(mat,(System_String_o *)*puVar2,value_00,(MethodInfo *)0x0);
  value_01.fields.z = 0.0;
  value_01.fields.w = 0.0;
  value_01.fields._0_8_ = tiling.fields;
  UnityEngine_Material__SetVector(mat,(System_String_o *)*puVar3,value_01,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader$$SetMaterial
// il2cpp: void Map_MapLoader__SetMaterial (UnityEngine_GameObject_o* go, System_String_o* asset, Map_MapScriptBaseMaterial_o* material, bool visible, bool editor, const MethodInfo* method);
// 0x3da6ec0

void Map_MapLoader__SetMaterial
               (UnityEngine_GameObject_o *go,System_String_o *asset,
               Map_MapScriptBaseMaterial_o *material,bool_conflict visible,bool_conflict editor,
               MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  System_Object_array *pSVar3;
  Utility_Color255_o *pUVar4;
  UnityEngine_Vector2_o value;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_RuntimeTypeHandle_o handle;
  UnityEngine_Object_o *__this_06;
  char cVar5;
  bool_conflict bVar6;
  uint uVar7;
  bool_conflict bVar8;
  System_Object_array *pSVar9;
  System_Collections_Generic_List_object__o *__this_07;
  System_String_o *pSVar10;
  System_Collections_Generic_List_object__o *pSVar11;
  UnityEngine_Material_o *pUVar12;
  System_Collections_Generic_List_object__o *__this_08;
  System_Collections_Generic_Dictionary_object__object__o *pSVar13;
  UnityEngine_Object_o *pUVar14;
  UnityEngine_Renderer_o *pUVar15;
  MethodInfo *pMVar16;
  System_Type_o *pSVar17;
  System_Type_o *pSVar18;
  System_String_array *pSVar19;
  Il2CppObject *pIVar20;
  UnityEngine_Texture_o *value_00;
  System_String_o *pSVar21;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar22;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  int iVar23;
  long lVar24;
  Map_MapScriptBaseMaterial_o *pMVar25;
  uint uVar26;
  UnityEngine_Color_o UVar27;
  undefined8 in_stack_ffffffffffffff28;
  undefined8 in_stack_ffffffffffffff30;
  Map_MapScriptBaseMaterial_o *pMVar28;
  undefined4 in_stack_ffffffffffffff38;
  UnityEngine_Material_o *local_b0;
  _union_247328 local_a8;
  undefined8 uStack_a0;
  UnityEngine_Object_o *local_98;
  _union_247328 local_88;
  undefined8 uStack_80;
  UnityEngine_Object_o *local_78;
  _union_247328 local_68;
  undefined8 uStack_60;
  UnityEngine_Object_o *local_58;
  System_String_o *local_50;
  UnityEngine_Vector2_Fields local_48;
  undefined8 uStack_40;
  
  if (DAT_05702780 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapTextures);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_UnityEngine_Material_UnityEngine_Ma);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptBasicMaterial_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Material_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Material__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_Material__Material);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Material_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_Renderer__GetEn);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_Material__GetEn);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Renderer);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Material_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_Material);
    il2cpp_init_method_metadata(&TypeInfo_List_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectShader);
    il2cpp_init_method_metadata(&TypeRef_MapScriptBasicMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptDefaultTiledMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptLegacyMaterial);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptReflectiveMaterial);
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&"_TintColor");
    il2cpp_init_method_metadata(&"OutlineGizmo");
    il2cpp_init_method_metadata(&"Map/Materials");
    il2cpp_init_method_metadata(&"Editor");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Map/Textures/");
    il2cpp_init_method_metadata(&"_SpecularMap");
    il2cpp_init_method_metadata(&"Misc/None");
    il2cpp_init_method_metadata(&"Texture");
    il2cpp_init_method_metadata(&"Map/Legacy/Materials");
    il2cpp_init_method_metadata(&"Legacy");
    il2cpp_init_method_metadata(&"Map");
    il2cpp_init_method_metadata(&"Material");
    DAT_05702780 = '\x01';
  }
  local_a8.genericMethod = (void *)0x0;
  uStack_a0 = 0;
  local_98 = (UnityEngine_Object_o *)0x0;
  local_88.genericMethod = (void *)0x0;
  uStack_80 = 0;
  local_78 = (UnityEngine_Object_o *)0x0;
  local_b0 = (UnityEngine_Material_o *)0x0;
  bVar6 = System_String__op_Equality(asset,"None",(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  if (go == (UnityEngine_GameObject_o *)0x0) goto LAB_03da8385;
  pSVar9 = UnityEngine_GameObject__GetComponentsInChildren<object>(go,MethodInfo_Renderer___GetComponentsInChildren_Renderer);
  __this_07 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_Renderer);
  System_Collections_Generic_List<object>___ctor(__this_07,MethodInfo_List_1_UnityEngine_Renderer);
  if (((char)visible == '\0') && ((char)editor != '\0')) {
    if (asset == (System_String_o *)0x0) goto LAB_03da8385;
    bVar6 = System_String__Contains(asset,"Editor",(MethodInfo *)0x0);
    visible = (bool_conflict)CONCAT71((uint7)(uint3)((uint)visible >> 8),1);
    if ((char)bVar6 == '\0') {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      material = *(Map_MapScriptBaseMaterial_o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x70);
    }
  }
  if (pSVar9 == (System_Object_array *)0x0) goto LAB_03da8385;
  uVar7 = (uint)pSVar9->max_length;
  if (__this_07 == (System_Collections_Generic_List_object__o *)0x0) {
    if (0 < (int)uVar7) {
      lVar24 = 0;
      do {
        if (uVar7 <= (uint)lVar24) goto LAB_03da838a;
        if ((UnityEngine_Object_o *)pSVar9->m_Items[lVar24] == (UnityEngine_Object_o *)0x0)
        goto LAB_03da8385;
        pSVar10 = UnityEngine_Object__get_name
                            ((UnityEngine_Object_o *)pSVar9->m_Items[lVar24],(MethodInfo *)0x0);
        bVar6 = System_String__op_Inequality(pSVar10,"OutlineGizmo",(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') goto LAB_03da8385;
        uVar7 = (uint)pSVar9->max_length;
        lVar24 = lVar24 + 1;
      } while ((int)lVar24 < (int)uVar7);
    }
  }
  else if (0 < (int)uVar7) {
    uVar26 = 0;
    if (uVar7 != 0) {
      do {
        pUVar14 = (UnityEngine_Object_o *)pSVar9->m_Items[(int)uVar26];
        if (pUVar14 == (UnityEngine_Object_o *)0x0) goto LAB_03da8385;
        pSVar10 = UnityEngine_Object__get_name(pUVar14,(MethodInfo *)0x0);
        bVar6 = System_String__op_Inequality(pSVar10,"OutlineGizmo",(MethodInfo *)0x0);
        lVar24 = MethodInfo_Void_Add;
        if ((char)bVar6 == '\0') {
LAB_03da72e7:
          uVar7 = (uint)pSVar9->max_length;
          if ((int)uVar7 <= (int)(uVar26 + 1)) goto LAB_03da73cf;
        }
        else {
          piVar1 = &(__this_07->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_07->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_03da8385;
          uVar7 = (__this_07->fields)._size;
          if ((uint)pSVar3->max_length <= uVar7) {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_07,(Il2CppObject *)pUVar14,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
            goto LAB_03da72e7;
          }
          (__this_07->fields)._size = uVar7 + 1;
          pSVar3->m_Items[(int)uVar7] = (Il2CppObject *)pUVar14;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar7);
          uVar7 = (uint)pSVar9->max_length;
          if ((int)uVar7 <= (int)(uVar26 + 1)) goto LAB_03da73cf;
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar7);
    }
    goto LAB_03da838a;
  }
LAB_03da73cf:
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
             (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x48);
  if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03da8385;
  bVar6 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                    (pSVar13,(Il2CppObject *)asset,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar6 == '\0') {
    pSVar11 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_Material);
    System_Collections_Generic_List<object>___ctor(pSVar11,MethodInfo_List_1_UnityEngine_Material);
    if (__this_07 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03da8385;
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_68,__this_07,MethodInfo_List_1_T__Enumerator_UnityEngine_Renderer__GetEn);
    local_98 = local_58;
    local_a8 = local_68;
    uStack_a0 = uStack_60;
    if (pSVar11 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_00.fields._index = (int)in_stack_ffffffffffffff30;
      __this_00.fields._version = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20);
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
      __this_00.fields._current._0_4_ = in_stack_ffffffffffffff38;
      __this_00.fields._current._4_4_ = visible;
      bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&local_a8);
      if ((char)bVar6 != '\0') {
        if (local_98 != (UnityEngine_Object_o *)0x0) {
          UnityEngine_Renderer__get_sharedMaterial
                    ((UnityEngine_Renderer_o *)local_98,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_03da83d5:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      while (__this.fields._index = (int)in_stack_ffffffffffffff30,
            __this.fields._version = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20),
            __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28,
            __this.fields._current._0_4_ = in_stack_ffffffffffffff38,
            __this.fields._current._4_4_ = visible,
            bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this,(MethodInfo_3185E20 *)&local_a8), (char)bVar6 != '\0') {
        if (local_98 == (UnityEngine_Object_o *)0x0) goto LAB_03da83d5;
        pUVar12 = UnityEngine_Renderer__get_sharedMaterial
                            ((UnityEngine_Renderer_o *)local_98,(MethodInfo *)0x0);
        lVar24 = MethodInfo_Void_Add;
        piVar1 = &(pSVar11->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar9 = (pSVar11->fields)._items;
        if (pSVar9 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar7 = (pSVar11->fields)._size;
        if (uVar7 < (uint)pSVar9->max_length) {
          (pSVar11->fields)._size = uVar7 + 1;
          pSVar9->m_Items[(int)uVar7] = (Il2CppObject *)pUVar12;
          il2cpp_runtime_glue(pSVar9->m_Items + (int)uVar7,pUVar12);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (pSVar11,(Il2CppObject *)pUVar12,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_01.fields._index = (int)in_stack_ffffffffffffff30;
    __this_01.fields._version = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20);
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
    __this_01.fields._current._0_4_ = in_stack_ffffffffffffff38;
    __this_01.fields._current._4_4_ = visible;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_01,(MethodInfo_3185E10 *)&local_a8);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x48);
    if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
    goto LAB_03da8385;
    System_Collections_Generic_Dictionary<object__object>__Add
              (pSVar13,(Il2CppObject *)asset,(Il2CppObject *)pSVar11,MethodInfo_Void_Add);
  }
  if (material == (Map_MapScriptBaseMaterial_o *)0x0) goto LAB_03da8385;
  pSVar10 = (material->fields).Shader;
  if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = System_String__op_Equality
                    (pSVar10,(System_String_o *)**(undefined8 **)(TypeInfo_MapObjectShader + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pSVar10 = (material->fields).Shader;
    if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = System_String__op_Equality
                      (pSVar10,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 8),
                       (MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      pSVar10 = (material->fields).Shader;
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar6 = System_String__op_Equality
                        (pSVar10,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x10),
                         (MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        pMVar25 = material;
        pMVar16 = (MethodInfo *)
                  (*(material->klass->vtable)._8_Serialize.methodPtr)
                            (material,(material->klass->vtable)._8_Serialize.method);
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x58);
        if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_03da8385;
        pMVar22 = pMVar16;
        bVar6 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                          (pSVar13,(Il2CppObject *)pMVar16,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar6 == '\0') {
          pSVar10 = (material->fields).Shader;
          if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar6 = Map_MapObjectShader__IsLegacyShader(pSVar10,pMVar22);
          handle = TypeRef_MapScriptBasicMaterial;
          if ((char)bVar6 == '\0') {
            if (*(int *)(DAT_05711100 + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar17 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
            pSVar18 = System_Object__GetType((Il2CppObject *)material,(MethodInfo *)0x0);
            if (pSVar17 == (System_Type_o *)0x0) goto LAB_03da8385;
            cVar5 = (*(pSVar17->klass->vtable)._22_IsAssignableFrom.methodPtr)
                              (pSVar17,pSVar18,(pSVar17->klass->vtable)._22_IsAssignableFrom.method)
            ;
            if (cVar5 == '\0') {
              pUVar14 = (UnityEngine_Object_o *)0x0;
              iVar23 = *(int *)(TypeInfo_MapLoader + 0xe4);
              uVar7 = visible;
              goto joined_r0x03da811c;
            }
            bVar2 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
            if (((material->klass->_2).naturalAligment < bVar2) ||
               ((material->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapScriptBasicMaterial))
            goto LAB_03da83da;
            pSVar10 = System_String__Concat
                                ((material->fields).Shader,"Material",(MethodInfo *)0x0);
            pMVar22 = extraout_RDX_03;
            if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
              il2cpp_init_class();
              pMVar22 = extraout_RDX_04;
            }
            pUVar14 = Map_MapLoader__LoadAssetCached("Map/Materials",pSVar10,pMVar22);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pUVar14 = UnityEngine_Object__Instantiate(pUVar14,(MethodInfo *)0x0);
            if (pUVar14 != (UnityEngine_Object_o *)0x0) {
              bVar2 = (TypeInfo_Material->_2).naturalAligment;
              if (((pUVar14->klass->_2).naturalAligment < bVar2) ||
                 ((pUVar14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Material))
              goto LAB_03da83ee;
            }
            pMVar28 = pMVar25;
            bVar6 = System_String__op_Inequality
                              ((System_String_o *)pMVar25[1].klass,"Misc/None",(MethodInfo *)0x0);
            if (((char)bVar6 == '\0') ||
               (bVar6 = System_String__op_Inequality
                                  ((System_String_o *)pMVar25[1].klass,"None",
                                   (MethodInfo *)0x0), (char)bVar6 == '\0')) goto LAB_03da81e1;
            if ((pMVar25[1].klass == (Map_MapScriptBaseMaterial_c *)0x0) ||
               (pSVar19 = System_String__Split
                                    ((System_String_o *)pMVar25[1].klass,0x2f,0,(MethodInfo *)0x0),
               pSVar19 == (System_String_array *)0x0)) goto LAB_03da8385;
            iVar23 = (int)pSVar19->max_length;
            if ((iVar23 == 0) || (iVar23 == 1)) {
LAB_03da838a:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar10 = pSVar19->m_Items[0];
            pSVar21 = pSVar19->m_Items[1];
            bVar6 = System_String__op_Equality(pSVar10,"Legacy",(MethodInfo *)0x0);
            pMVar25 = pMVar28;
            if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
              il2cpp_init_class();
              pMVar25 = pMVar28;
            }
            pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
                       (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 8);
            if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto LAB_03da8385;
            bVar8 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                              (pSVar13,(Il2CppObject *)pSVar21,MethodInfo_Boolean_ContainsKey);
            pMVar28 = pMVar25;
            if ((char)bVar8 != '\0') {
              if ((char)bVar6 != '\0') {
                if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
                           (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x28);
                if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto LAB_03da8385;
                bVar8 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                                  (pSVar13,(Il2CppObject *)pSVar21,MethodInfo_Boolean_ContainsKey);
                pMVar28 = pMVar25;
                if ((char)bVar8 == '\0') goto LAB_03da81e1;
              }
              if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
                         (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 8);
              if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto LAB_03da8385;
              pIVar20 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                  (pSVar13,(Il2CppObject *)pSVar21,MethodInfo_MapScriptBasicMaterial_get_Item);
              if ((char)bVar6 == '\0') {
                pSVar10 = System_String__Concat("Map/Textures/",pSVar10,(MethodInfo *)0x0);
                pSVar21 = System_String__Concat(pSVar21,"Texture",(MethodInfo *)0x0);
                pMVar22 = extraout_RDX_07;
                if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                  il2cpp_init_class();
                  pMVar22 = extraout_RDX_08;
                }
                value_00 = (UnityEngine_Texture_o *)
                           Map_MapLoader__LoadAssetCached(pSVar10,pSVar21,pMVar22);
                if (value_00 == (UnityEngine_Texture_o *)0x0) goto LAB_03da8192;
LAB_03da817b:
                if (value_00->klass != TypeInfo_Texture2D) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_unwind_resume(value_00);
                }
              }
              else {
                if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
                           (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x28);
                if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto LAB_03da8385;
                pSVar10 = (System_String_o *)
                          System_Collections_Generic_Dictionary<object__object>__get_Item
                                    (pSVar13,(Il2CppObject *)pSVar21,MethodInfo_String_get_Item);
                pMVar22 = extraout_RDX_05;
                if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                  il2cpp_init_class();
                  pMVar22 = extraout_RDX_06;
                }
                value_00 = (UnityEngine_Texture_o *)
                           Map_MapLoader__LoadAssetCached("Map",pSVar10,pMVar22);
                if (value_00 != (UnityEngine_Texture_o *)0x0) goto LAB_03da817b;
LAB_03da8192:
                value_00 = (UnityEngine_Texture_o *)0x0;
              }
              if ((pUVar14 == (UnityEngine_Object_o *)0x0) ||
                 (UnityEngine_Material__set_mainTexture
                            ((UnityEngine_Material_o *)pUVar14,value_00,(MethodInfo *)0x0),
                 pIVar20 == (Il2CppObject *)0x0)) goto LAB_03da8385;
              value.fields.y =
                   (float)((ulong)pIVar20[2].monitor >> 0x20) *
                   (float)((ulong)pMVar25[1].monitor >> 0x20);
              value.fields.x = SUB84(pIVar20[2].monitor,0) * SUB84(pMVar25[1].monitor,0);
              pMVar28 = pMVar25;
              UnityEngine_Material__set_mainTextureScale
                        ((UnityEngine_Material_o *)pUVar14,value,(MethodInfo *)0x0);
              UnityEngine_Material__set_mainTextureOffset
                        ((UnityEngine_Material_o *)pUVar14,
                         (UnityEngine_Vector2_o)pMVar25[1].fields.Shader,(MethodInfo *)0x0);
            }
LAB_03da81e1:
            pUVar4 = (pMVar25->fields).Color;
            if ((pUVar4 == (Utility_Color255_o *)0x0) ||
               (UVar27 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0),
               pUVar14 == (UnityEngine_Object_o *)0x0)) goto LAB_03da8385;
            uVar7 = visible;
            UnityEngine_Material__set_color
                      ((UnityEngine_Material_o *)pUVar14,UVar27,(MethodInfo *)0x0);
            bVar2 = (TypeInfo_MapScriptReflectiveMaterial->_2).naturalAligment;
            if ((bVar2 <= (pMVar28->klass->_2).naturalAligment) &&
               ((pMVar28->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_MapScriptReflectiveMaterial)) {
              pUVar4 = pMVar28[1].fields.Color;
              if (pUVar4 == (Utility_Color255_o *)0x0) goto LAB_03da8385;
              UVar27 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pUVar14,"_SpecularMap",UVar27,(MethodInfo *)0x0);
            }
            iVar23 = *(int *)(TypeInfo_MapLoader + 0xe4);
            pMVar25 = pMVar28;
          }
          else {
            bVar2 = (TypeInfo_MapScriptLegacyMaterial->_2).naturalAligment;
            if (((material->klass->_2).naturalAligment < bVar2) ||
               ((material->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapScriptLegacyMaterial)) {
LAB_03da83da:
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(material);
            }
            pSVar10 = (material->fields).Shader;
            pMVar22 = extraout_RDX_01;
            if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
              il2cpp_init_class();
              pMVar22 = extraout_RDX_02;
            }
            pUVar14 = Map_MapLoader__LoadAssetCached("Map/Legacy/Materials",pSVar10,pMVar22);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pUVar14 = UnityEngine_Object__Instantiate(pUVar14,(MethodInfo *)0x0);
            if (pUVar14 != (UnityEngine_Object_o *)0x0) {
              bVar2 = (TypeInfo_Material->_2).naturalAligment;
              if (((pUVar14->klass->_2).naturalAligment < bVar2) ||
                 ((pUVar14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Material)) {
LAB_03da83ee:
                    /* WARNING: Subroutine does not return */
                il2cpp_unwind_resume(pUVar14);
              }
            }
            pUVar4 = (pMVar25->fields).Color;
            if ((pUVar4 == (Utility_Color255_o *)0x0) ||
               (uVar7 = visible, UVar27 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0),
               pUVar14 == (UnityEngine_Object_o *)0x0)) goto LAB_03da8385;
            UnityEngine_Material__SetColor
                      ((UnityEngine_Material_o *)pUVar14,"_TintColor",UVar27,(MethodInfo *)0x0);
            UnityEngine_Material__set_mainTextureScale
                      ((UnityEngine_Material_o *)pUVar14,(UnityEngine_Vector2_o)pMVar25[1].klass,
                       (MethodInfo *)0x0);
            iVar23 = *(int *)(TypeInfo_MapLoader + 0xe4);
          }
joined_r0x03da811c:
          if (iVar23 == 0) {
            il2cpp_init_class();
          }
          pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x58);
          if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_03da8385;
          System_Collections_Generic_Dictionary<object__object>__Add
                    (pSVar13,(Il2CppObject *)pMVar16,(Il2CppObject *)pUVar14,MethodInfo_Void_Add);
        }
        else {
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x58);
          if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_03da8385;
          uVar7 = visible;
          pUVar14 = (UnityEngine_Object_o *)
                    System_Collections_Generic_Dictionary<object__object>__get_Item
                              (pSVar13,(Il2CppObject *)pMVar16,MethodInfo_Material_get_Item);
        }
        if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&local_68,__this_07,
                     MethodInfo_List_1_T__Enumerator_UnityEngine_Renderer__GetEn);
          local_98 = local_58;
          local_a8 = local_68;
          uStack_a0 = uStack_60;
          do {
            __this_04.fields._8_8_ = pMVar25;
            __this_04.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
            __this_04.fields._current._0_4_ = in_stack_ffffffffffffff38;
            __this_04.fields._current._4_4_ = uVar7;
            bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_04,(MethodInfo_3185E20 *)&local_a8);
            __this_06 = local_98;
            if ((char)bVar6 == '\0') {
              __this_05.fields._8_8_ = pMVar25;
              __this_05.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
              __this_05.fields._current._0_4_ = in_stack_ffffffffffffff38;
              __this_05.fields._current._4_4_ = uVar7;
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (__this_05,(MethodInfo_3185E10 *)&local_a8);
              return;
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar6 = UnityEngine_Object__op_Inequality
                              (pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar6 == '\0') {
              if (__this_06 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
            }
            else {
              if (__this_06 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              UnityEngine_Renderer__set_sharedMaterial
                        ((UnityEngine_Renderer_o *)__this_06,(UnityEngine_Material_o *)pUVar14,
                         (MethodInfo *)0x0);
            }
            UnityEngine_Renderer__set_enabled
                      ((UnityEngine_Renderer_o *)__this_06,visible & 0xff,(MethodInfo *)0x0);
          } while( true );
        }
        goto LAB_03da8385;
      }
    }
  }
  pSVar10 = (System_String_o *)
            (*(material->klass->vtable)._8_Serialize.methodPtr)
                      (material,(material->klass->vtable)._8_Serialize.method);
  pSVar10 = System_String__Concat(asset,pSVar10,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
             (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x50);
  if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03da8385;
  bVar6 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                    (pSVar13,(Il2CppObject *)pSVar10,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar6 == '\0') {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x48);
    if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
    goto LAB_03da8385;
    local_50 = pSVar10;
    pSVar11 = (System_Collections_Generic_List_object__o *)
              System_Collections_Generic_Dictionary<object__object>__get_Item
                        (pSVar13,(Il2CppObject *)asset,MethodInfo_List_1_UnityEngine_Material__get_Item);
    __this_08 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_Material);
    System_Collections_Generic_List<object>___ctor(__this_08,MethodInfo_List_1_UnityEngine_Material);
    pSVar13 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_Material__Material);
    System_Collections_Generic_Dictionary<object__object>___ctor(pSVar13,MethodInfo_Dictionary_2_UnityEngine_Material_UnityEngine_Ma);
    if (pSVar11 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03da8385;
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_68,pSVar11,MethodInfo_List_1_T__Enumerator_UnityEngine_Material__GetEn);
    local_78 = local_58;
    local_88 = local_68;
    uStack_80 = uStack_60;
    while (__this_02.fields._8_8_ = material,
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28
          , __this_02.fields._current._0_4_ = in_stack_ffffffffffffff38,
          __this_02.fields._current._4_4_ = visible,
          bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_02,(MethodInfo_3185E20 *)&local_88), pUVar14 = local_78,
          (char)bVar6 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar6 = UnityEngine_Object__op_Equality(pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
      ;
      lVar24 = MethodInfo_Void_Add;
      if ((char)bVar6 == '\0') {
        if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar6 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                          (pSVar13,(Il2CppObject *)pUVar14,(Il2CppObject **)&local_b0,MethodInfo_Boolean_TryGetValue);
        if ((char)bVar6 == '\0') {
          pUVar12 = (UnityEngine_Material_o *)il2cpp_runtime_glue(TypeInfo_Material);
          UnityEngine_Material___ctor(pUVar12,(UnityEngine_Material_o *)pUVar14,(MethodInfo *)0x0);
          pSVar10 = (material->fields).Shader;
          local_b0 = pUVar12;
          if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar6 = System_String__op_Inequality
                            (pSVar10,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 8),
                             (MethodInfo *)0x0);
          pUVar12 = local_b0;
          if ((char)bVar6 != '\0') {
            pUVar4 = (material->fields).Color;
            if (pUVar4 == (Utility_Color255_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            UVar27 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
            if (pUVar12 == (UnityEngine_Material_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            UnityEngine_Material__set_color(pUVar12,UVar27,(MethodInfo *)0x0);
          }
          pSVar10 = (material->fields).Shader;
          if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar6 = System_String__op_Equality
                            (pSVar10,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x10),
                             (MethodInfo *)0x0);
          pUVar12 = local_b0;
          if ((char)bVar6 != '\0') {
            bVar2 = (TypeInfo_MapScriptDefaultTiledMaterial->_2).naturalAligment;
            if (((material->klass->_2).naturalAligment < bVar2) ||
               ((material->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapScriptDefaultTiledMaterial)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(material);
            }
            local_48 = (UnityEngine_Vector2_Fields)material[1].klass;
            uStack_40 = 0;
            pMVar16 = extraout_RDX;
            if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
              il2cpp_init_class();
              pMVar16 = extraout_RDX_00;
            }
            Map_MapLoader__SetDefaultTiling(asset,pUVar12,(UnityEngine_Vector2_o)local_48,pMVar16);
          }
          System_Collections_Generic_Dictionary<object__object>__Add
                    (pSVar13,(Il2CppObject *)pUVar14,(Il2CppObject *)local_b0,MethodInfo_Void_Add);
        }
        lVar24 = MethodInfo_Void_Add;
        if (__this_08 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        piVar1 = &(__this_08->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar9 = (__this_08->fields)._items;
        if (pSVar9 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar7 = (__this_08->fields)._size;
        if (uVar7 < (uint)pSVar9->max_length) {
          (__this_08->fields)._size = uVar7 + 1;
          pSVar9->m_Items[(int)uVar7] = (Il2CppObject *)local_b0;
          il2cpp_runtime_glue(pSVar9->m_Items + (int)uVar7);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_08,(Il2CppObject *)local_b0,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        if (__this_08 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        piVar1 = &(__this_08->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar9 = (__this_08->fields)._items;
        if (pSVar9 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar7 = (__this_08->fields)._size;
        if (uVar7 < (uint)pSVar9->max_length) {
          (__this_08->fields)._size = uVar7 + 1;
          pSVar9->m_Items[(int)uVar7] = (Il2CppObject *)0x0;
          il2cpp_runtime_glue(pSVar9->m_Items + (int)uVar7,0);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_08,(Il2CppObject *)0x0,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_03.fields._8_8_ = material;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
    __this_03.fields._current._0_4_ = in_stack_ffffffffffffff38;
    __this_03.fields._current._4_4_ = visible;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)&local_88);
    pSVar10 = local_50;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x50);
    if (pSVar13 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
    goto LAB_03da8385;
    System_Collections_Generic_Dictionary<object__object>__Add
              (pSVar13,(Il2CppObject *)pSVar10,(Il2CppObject *)__this_08,MethodInfo_Void_Add);
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
             (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x50);
  if ((pSVar13 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (pSVar11 = (System_Collections_Generic_List_object__o *)
                System_Collections_Generic_Dictionary<object__object>__get_Item
                          (pSVar13,(Il2CppObject *)pSVar10,MethodInfo_List_1_UnityEngine_Material__get_Item),
     __this_07 != (System_Collections_Generic_List_object__o *)0x0)) {
    iVar23 = (__this_07->fields)._size;
    if (pSVar11 == (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < iVar23) goto LAB_03da8385;
    }
    else if (0 < iVar23) {
      iVar23 = 0;
      do {
        if (iVar23 < (pSVar11->fields)._size) {
          pUVar14 = (UnityEngine_Object_o *)
                    System_Collections_Generic_List<object>__get_Item(pSVar11,iVar23,MethodInfo_Material_get_Item);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar6 = UnityEngine_Object__op_Inequality
                            (pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            pUVar15 = (UnityEngine_Renderer_o *)
                      System_Collections_Generic_List<object>__get_Item
                                (__this_07,iVar23,MethodInfo_Renderer_get_Item);
            pUVar12 = (UnityEngine_Material_o *)
                      System_Collections_Generic_List<object>__get_Item(pSVar11,iVar23,MethodInfo_Material_get_Item)
            ;
            if (pUVar15 == (UnityEngine_Renderer_o *)0x0) goto LAB_03da8385;
            UnityEngine_Renderer__set_sharedMaterial(pUVar15,pUVar12,(MethodInfo *)0x0);
          }
        }
        pUVar15 = (UnityEngine_Renderer_o *)
                  System_Collections_Generic_List<object>__get_Item(__this_07,iVar23,MethodInfo_Renderer_get_Item);
        if (pUVar15 == (UnityEngine_Renderer_o *)0x0) goto LAB_03da8385;
        UnityEngine_Renderer__set_enabled(pUVar15,visible & 0xff,(MethodInfo *)0x0);
        iVar23 = iVar23 + 1;
      } while (iVar23 < (__this_07->fields)._size);
    }
    return;
  }
LAB_03da8385:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$SetPhysics
// il2cpp: int32_t Map_MapLoader__SetPhysics (UnityEngine_GameObject_o* go, System_String_o* collideMode, System_String_o* collideWith, System_String_o* physicsMaterial, const MethodInfo* method);
// 0x3da66c0

int32_t Map_MapLoader__SetPhysics
                  (UnityEngine_GameObject_o *go,System_String_o *collideMode,
                  System_String_o *collideWith,System_String_o *physicsMaterial,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Component_o *__this;
  bool_conflict bVar2;
  int32_t value;
  int iVar3;
  uint uVar4;
  UnityEngine_Object_o *x;
  System_Object_array *pSVar5;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  uint uVar6;
  Il2CppClass *method_01;
  
  if (DAT_05702781 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Collider___GetComponentsInChildren_Collider);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideMode);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicMaterial);
    il2cpp_init_method_metadata(&"Physics");
    il2cpp_init_method_metadata(&"Default");
    DAT_05702781 = '\x01';
  }
  x = (UnityEngine_Object_o *)0x0;
  method_01 = "Default";
  bVar2 = System_String__op_Inequality
                    (physicsMaterial,(System_String_o *)"Default",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    method_00 = extraout_RDX;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
      method_00 = extraout_RDX_00;
    }
    x = Map_MapLoader__LoadAssetCached("Physics",physicsMaterial,method_00);
    method_01 = (Il2CppClass *)physicsMaterial;
    if (x != (UnityEngine_Object_o *)0x0) {
      bVar1 = (TypeInfo_PhysicMaterial->_2).naturalAligment;
      if (((x->klass->_2).naturalAligment < bVar1) ||
         (method_01 = TypeInfo_PhysicMaterial, (x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_PhysicMaterial))
      {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(x);
      }
    }
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)method_01);
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pSVar5 = UnityEngine_GameObject__GetComponentsInChildren<object>(go,MethodInfo_Collider___GetComponentsInChildren_Collider);
    UnityEngine_GameObject__set_layer(go,value,(MethodInfo *)0x0);
    if (pSVar5 != (System_Object_array *)0x0) {
      iVar3 = (int)pSVar5->max_length;
      if (iVar3 < 1) {
        return iVar3;
      }
      uVar6 = 0;
      if (iVar3 != 0) {
        do {
          __this = (UnityEngine_Component_o *)pSVar5->m_Items[(int)uVar6];
          if ((__this == (UnityEngine_Component_o *)0x0) ||
             (__this_00 = UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0),
             __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03da6932;
          UnityEngine_GameObject__set_layer(__this_00,value,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          uVar4 = System_String__op_Equality
                            (collideMode,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 8),
                             (MethodInfo *)0x0);
          UnityEngine_Collider__set_isTrigger
                    ((UnityEngine_Collider_o *)__this,uVar4 & 0xff,(MethodInfo *)0x0);
          uVar4 = System_String__op_Inequality
                            (collideMode,
                             *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 0x10),
                             (MethodInfo *)0x0);
          UnityEngine_Collider__set_enabled
                    ((UnityEngine_Collider_o *)__this,uVar4 & 0xff,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar2 != '\0') {
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)__this,(UnityEngine_PhysicMaterial_o *)x,
                       (MethodInfo *)0x0);
          }
          uVar6 = uVar6 + 1;
          uVar4 = (uint)pSVar5->max_length;
          if ((int)uVar4 <= (int)uVar6) {
            return uVar4;
          }
        } while (uVar6 < uVar4);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_03da6932:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$SetCollider
// il2cpp: void Map_MapLoader__SetCollider (UnityEngine_Collider_o* c, System_String_o* collideMode, System_String_o* collideWith, const MethodInfo* method);
// 0x3da8eb0

void Map_MapLoader__SetCollider
               (UnityEngine_Collider_o *c,System_String_o *collideMode,System_String_o *collideWith,
               MethodInfo *method)

{
  uint uVar1;
  int32_t value;
  UnityEngine_GameObject_o *__this;
  MethodInfo *method_00;
  
  if (DAT_05702782 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideMode);
    DAT_05702782 = '\x01';
  }
  if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = System_String__op_Equality
                    (collideMode,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 8),
                     (MethodInfo *)0x0);
  if (c != (UnityEngine_Collider_o *)0x0) {
    UnityEngine_Collider__set_isTrigger(c,uVar1 & 0xff,(MethodInfo *)0x0);
    uVar1 = System_String__op_Inequality
                      (collideMode,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 0x10),
                       (MethodInfo *)0x0);
    UnityEngine_Collider__set_enabled(c,uVar1 & 0xff,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)c,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = Map_MapLoader__GetColliderLayer(collideWith,method_00);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__set_layer(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$GetColliderCollideWith
// il2cpp: System_String_o* Map_MapLoader__GetColliderCollideWith (UnityEngine_Collider_o* c, const MethodInfo* method);
// 0x3da8fb0

System_String_o *
Map_MapLoader__GetColliderCollideWith(UnityEngine_Collider_o *c,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  UnityEngine_GameObject_o *__this;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05702783 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    DAT_05702783 = '\x01';
  }
  if ((c != (UnityEngine_Collider_o *)0x0) &&
     (__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)c,(MethodInfo *)0x0)
     , __this != (UnityEngine_GameObject_o *)0x0)) {
    iVar2 = UnityEngine_GameObject__get_layer(__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_init_class();
      lVar4 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      iVar1 = *(int *)(lVar4 + 0x3c);
    }
    else {
      lVar4 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      iVar1 = *(int *)(lVar4 + 0x3c);
    }
    if (iVar2 == iVar1) {
      if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
        il2cpp_init_class();
      }
      puVar3 = *(undefined8 **)(TypeInfo_MapObjectCollideWith + 0xb8);
    }
    else {
      if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
        il2cpp_init_class();
        lVar4 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
        iVar1 = *(int *)(lVar4 + 0x2c);
      }
      else {
        iVar1 = *(int *)(lVar4 + 0x2c);
      }
      if (iVar2 == iVar1) {
        if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
          il2cpp_init_class();
        }
        puVar3 = (undefined8 *)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 8);
      }
      else {
        if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
          il2cpp_init_class();
          lVar4 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
          iVar1 = *(int *)(lVar4 + 0x34);
        }
        else {
          iVar1 = *(int *)(lVar4 + 0x34);
        }
        if (iVar2 == iVar1) {
          if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
            il2cpp_init_class();
          }
          puVar3 = (undefined8 *)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x10);
        }
        else {
          if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
            il2cpp_init_class();
            lVar4 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
            iVar1 = *(int *)(lVar4 + 0x50);
          }
          else {
            iVar1 = *(int *)(lVar4 + 0x50);
          }
          if (iVar2 == iVar1) {
            if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
              il2cpp_init_class();
            }
            puVar3 = (undefined8 *)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x18);
          }
          else {
            if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
              il2cpp_init_class();
              lVar4 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
            }
            if (iVar2 == *(int *)(lVar4 + 0x54)) {
              if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                il2cpp_init_class();
              }
              puVar3 = (undefined8 *)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x20);
            }
            else {
              if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                il2cpp_init_class();
                lVar4 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
              }
              if (iVar2 == *(int *)(lVar4 + 0x30)) {
                if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                puVar3 = (undefined8 *)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x28);
              }
              else {
                if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                  il2cpp_init_class();
                  lVar4 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
                }
                if (iVar2 == *(int *)(lVar4 + 0x38)) {
                  if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  puVar3 = (undefined8 *)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30);
                }
                else {
                  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                    il2cpp_init_class();
                    lVar4 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
                  }
                  if (iVar2 == *(int *)(lVar4 + 0x40)) {
                    if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    puVar3 = (undefined8 *)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x40);
                  }
                  else {
                    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                      il2cpp_init_class();
                      lVar4 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
                    }
                    iVar1 = *(int *)(lVar4 + 0x18);
                    if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    puVar3 = *(undefined8 **)(TypeInfo_MapObjectCollideWith + 0xb8);
                    if (iVar2 == iVar1) {
                      puVar3 = puVar3 + 7;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return (System_String_o *)*puVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$GetColliderLayer
// il2cpp: int32_t Map_MapLoader__GetColliderLayer (System_String_o* collideWith, const MethodInfo* method);
// 0x3da8b60

int32_t Map_MapLoader__GetColliderLayer(System_String_o *collideWith,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  
  if (DAT_05702784 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    DAT_05702784 = '\x01';
  }
  if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_String__op_Equality
                    (collideWith,(System_String_o *)**(undefined8 **)(TypeInfo_MapObjectCollideWith + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = System_String__op_Equality
                      (collideWith,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 8),
                       (MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = System_String__op_Equality
                        (collideWith,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x10),
                         (MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = System_String__op_Equality
                          (collideWith,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x18),
                           (MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar1 = System_String__op_Equality
                            (collideWith,
                             *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x20),
                             (MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar1 = System_String__op_Equality
                              (collideWith,
                               *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x28),
                               (MethodInfo *)0x0);
            if ((char)bVar1 == '\0') {
              if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar1 = System_String__op_Equality
                                (collideWith,
                                 *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30),
                                 (MethodInfo *)0x0);
              if ((char)bVar1 == '\0') {
                if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar1 = System_String__op_Equality
                                  (collideWith,
                                   *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x40),
                                   (MethodInfo *)0x0);
                if ((char)bVar1 == '\0') {
                  if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  iVar2 = 0;
                  bVar1 = System_String__op_Equality
                                    (collideWith,
                                     *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x38),
                                     (MethodInfo *)0x0);
                  if ((char)bVar1 != '\0') {
                    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    iVar2 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x18);
                  }
                }
                else {
                  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  iVar2 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x40);
                }
              }
              else {
                if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                iVar2 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x38);
              }
            }
            else {
              if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                il2cpp_init_class();
              }
              iVar2 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x30);
            }
          }
          else {
            if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
              il2cpp_init_class();
            }
            iVar2 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x54);
          }
        }
        else {
          if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
            il2cpp_init_class();
          }
          iVar2 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x50);
        }
      }
      else {
        if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
          il2cpp_init_class();
        }
        iVar2 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x34);
      }
    }
    else {
      if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
        il2cpp_init_class();
      }
      iVar2 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x2c);
    }
  }
  else {
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar2 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x3c);
  }
  return iVar2;
}


// Map.MapLoader$$LoadAssetCached
// il2cpp: UnityEngine_Object_o* Map_MapLoader__LoadAssetCached (System_String_o* path, System_String_o* asset, const MethodInfo* method);
// 0x3da89e0

UnityEngine_Object_o *
Map_MapLoader__LoadAssetCached(System_String_o *path,System_String_o *asset,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  System_String_o *key;
  UnityEngine_Object_o *pUVar3;
  
  if (DAT_05702785 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&"/");
    DAT_05702785 = '\x01';
  }
  key = System_String__Concat(path,"/",asset,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar1,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar3 = ApplicationManagers_ResourceManager__LoadAsset(path,asset,0,(MethodInfo *)0x0);
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03da8b4e;
      System_Collections_Generic_Dictionary<object__object>__Add
                (pSVar1,(Il2CppObject *)key,(Il2CppObject *)pUVar3,MethodInfo_Void_Add);
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar3 = (UnityEngine_Object_o *)
               System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar1,(Il2CppObject *)key,MethodInfo_Object_get_Item);
      return pUVar3;
    }
  }
LAB_03da8b4e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$LoadPrefabCached
// il2cpp: UnityEngine_GameObject_o* Map_MapLoader__LoadPrefabCached (System_String_o* asset, const MethodInfo* method);
// 0x3da5ff0

UnityEngine_GameObject_o *
Map_MapLoader__LoadPrefabCached(System_String_o *asset,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool_conflict bVar3;
  System_String_array *pSVar4;
  System_String_o *name;
  UnityEngine_Object_o *pUVar5;
  System_String_o *pSVar6;
  
  if (DAT_05702786 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AssetBundleManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    il2cpp_init_method_metadata(&"Custom");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"Map");
    il2cpp_init_method_metadata(&"/Prefabs/");
    il2cpp_init_method_metadata(&"Arenas/CaveMap1");
    DAT_05702786 = '\x01';
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                    (pSVar2,(Il2CppObject *)asset,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar3 == '\0') {
    if (asset == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar4 = System_String__Split(asset,"/",0,(MethodInfo *)0x0);
    if (pSVar4 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((int)pSVar4->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar3 = System_String__op_Equality(pSVar4->m_Items[0],"Custom",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      iVar1 = (int)pSVar4->max_length;
      if (iVar1 == 1) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
      pSVar6 = System_String__Concat
                         (pSVar4->m_Items[0],"/Prefabs/",pSVar4->m_Items[1],(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar5 = ApplicationManagers_ResourceManager__LoadAsset
                         ("Map",pSVar6,0,(MethodInfo *)0x0);
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_Dictionary<object__object>__Add
                (pSVar2,(Il2CppObject *)asset,(Il2CppObject *)pUVar5,MethodInfo_Void_Add);
    }
    else {
      if ((uint)pSVar4->max_length < 2) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar6 = pSVar4->m_Items[1];
      if (pSVar6 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      name = System_String__Substring(asset,(pSVar6->fields)._stringLength + 8,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
      if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar5 = ApplicationManagers_AssetBundleManager__LoadAsset(pSVar6,name,(MethodInfo *)0x0);
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_Dictionary<object__object>__Add
                (pSVar2,(Il2CppObject *)asset,(Il2CppObject *)pUVar5,MethodInfo_Void_Add);
    }
    bVar3 = System_String__op_Equality(asset,"Arenas/CaveMap1",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Weather_WeatherManager__EnableCaveMap((MethodInfo *)0x0);
    }
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pUVar5 = (UnityEngine_Object_o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar2,(Il2CppObject *)asset,MethodInfo_Object_get_Item);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar5 = UnityEngine_Object__Instantiate(pUVar5,(MethodInfo *)0x0);
    if ((pUVar5 != (UnityEngine_Object_o *)0x0) && (pUVar5->klass != TypeInfo_GameObject)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pUVar5);
    }
    return (UnityEngine_GameObject_o *)pUVar5;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapLoader$$.ctor
// il2cpp: void Map_MapLoader___ctor (Map_MapLoader_o* __this, const MethodInfo* method);
// 0x3da92c0

void Map_MapLoader___ctor(Map_MapLoader_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader$$.cctor
// il2cpp: void Map_MapLoader___cctor (const MethodInfo* method);
// 0x3da92d0

void Map_MapLoader___cctor(MethodInfo *method)

{
  float fVar1;
  long lVar2;
  undefined8 uVar3;
  System_Collections_Generic_Dictionary_int__object__o *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  System_Collections_Generic_List_NavMeshBuildSource__o *__this;
  
  if (DAT_05702787 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Int32_Map_MapObject);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_List_1_Map_MapObject);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_UnityEngine_GameObject_Map_MapObjec);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_Map_MapObject_HashSet_1_System_Stri);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Int32_HashSet_1_System_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_Object);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_List_1_UnityEngine_Ma);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Int32_UnityEngine_AI_NavMesh);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_int__MapObject);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Material);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__List_Material);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_int__HashSet_int);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__List_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_int__NavMeshData);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_GameObject__MapObject);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_MapObject__HashSet_string);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Light);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapTargetable);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_AI_NavMeshBuildSource);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapLight);
    il2cpp_init_method_metadata(&TypeInfo_List_MapLight);
    il2cpp_init_method_metadata(&TypeInfo_List_NavMeshBuildSource);
    il2cpp_init_method_metadata(&TypeInfo_List_Light);
    il2cpp_init_method_metadata(&TypeInfo_List_MapTargetable);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05702787 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_int__MapObject);
  System_Collections_Generic_Dictionary<int__object>___ctor(pSVar4,MethodInfo_Dictionary_2_System_Int32_Map_MapObject);
  **(undefined8 **)(TypeInfo_MapLoader + 0xb8) = pSVar4;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_MapLoader + 0xb8),pSVar4);
  pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_int__HashSet_int);
  System_Collections_Generic_Dictionary<int__object>___ctor(pSVar4,MethodInfo_Dictionary_2_System_Int32_HashSet_1_System_Int32);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_Dictionary_int__object__o **)(lVar2 + 8) = pSVar4;
  il2cpp_runtime_glue(lVar2 + 8,pSVar4);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_GameObject__MapObject);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar5,MethodInfo_Dictionary_2_UnityEngine_GameObject_Map_MapObjec);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x10) = pSVar5;
  il2cpp_runtime_glue(lVar2 + 0x10,pSVar5);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__List_MapObject);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar5,MethodInfo_Dictionary_2_System_String_List_1_Map_MapObject);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x18) = pSVar5;
  il2cpp_runtime_glue(lVar2 + 0x18,pSVar5);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_MapObject__HashSet_string);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar5,MethodInfo_Dictionary_2_Map_MapObject_HashSet_1_System_Stri);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x20) = pSVar5;
  il2cpp_runtime_glue(lVar2 + 0x20,pSVar5);
  pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_Light);
  System_Collections_Generic_List<object>___ctor(pSVar6,MethodInfo_List_1_UnityEngine_Light);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar2 + 0x28) = pSVar6;
  il2cpp_runtime_glue(lVar2 + 0x28,pSVar6);
  pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_MapLight);
  System_Collections_Generic_List<object>___ctor(pSVar6,MethodInfo_List_1_Map_MapLight);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar2 + 0x30) = pSVar6;
  il2cpp_runtime_glue(lVar2 + 0x30,pSVar6);
  pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_MapTargetable);
  System_Collections_Generic_List<object>___ctor(pSVar6,MethodInfo_List_1_Map_MapTargetable);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar2 + 0x38) = pSVar6;
  il2cpp_runtime_glue(lVar2 + 0x38,pSVar6);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__Object);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar5,MethodInfo_Dictionary_2_System_String_UnityEngine_Object);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x40) = pSVar5;
  il2cpp_runtime_glue(lVar2 + 0x40,pSVar5);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__List_Material);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar5,MethodInfo_Dictionary_2_System_String_List_1_UnityEngine_Ma);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x48) = pSVar5;
  il2cpp_runtime_glue(lVar2 + 0x48,pSVar5);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__List_Material);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar5,MethodInfo_Dictionary_2_System_String_List_1_UnityEngine_Ma);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x50) = pSVar5;
  il2cpp_runtime_glue(lVar2 + 0x50,pSVar5);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__Material);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar5,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x58) = pSVar5;
  il2cpp_runtime_glue(lVar2 + 0x58,pSVar5);
  pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(pSVar6,MethodInfo_List_1_System_String);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar2 + 0x78) = pSVar6;
  il2cpp_runtime_glue(lVar2 + 0x78,pSVar6);
  __this = (System_Collections_Generic_List_NavMeshBuildSource__o *)il2cpp_runtime_glue(TypeInfo_List_NavMeshBuildSource)
  ;
  System_Collections_Generic_List<NavMeshBuildSource>___ctor(__this,MethodInfo_List_1_UnityEngine_AI_NavMeshBuildSource);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_List_NavMeshBuildSource__o **)(lVar2 + 0xa0) = __this;
  il2cpp_runtime_glue(lVar2 + 0xa0,__this);
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  uVar3 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(undefined8 *)(lVar2 + 0xa8) = uVar3;
  *(float *)(lVar2 + 0xb0) = fVar1;
  *(ulong *)(lVar2 + 0xb4) = CONCAT44((float)((ulong)uVar3 >> 0x20) * 0.5,(float)uVar3 * 0.5);
  *(float *)(lVar2 + 0xbc) = fVar1 * 0.5;
  pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_int__NavMeshData);
  System_Collections_Generic_Dictionary<int__object>___ctor(pSVar4,MethodInfo_Dictionary_2_System_Int32_UnityEngine_AI_NavMesh);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_Dictionary_int__object__o **)(lVar2 + 0xc0) = pSVar4;
  il2cpp_runtime_glue(lVar2 + 0xc0,pSVar4);
  *(undefined8 *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 200) = 0x3e8ffffffff;
  return;
}


