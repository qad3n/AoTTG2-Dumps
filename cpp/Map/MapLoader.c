// Type: Map.MapLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapLoader.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapLoader.cs
// --------------------------------

// Map.MapLoader.<>c__DisplayClass38_0$$.ctor
// il2cpp: void Map_MapLoader___c__DisplayClass38_0___ctor (Map_MapLoader___c__DisplayClass38_0_o* __this, const MethodInfo* method);
// 0x40aeee0

void Map_MapLoader___c__DisplayClass38_0___ctor
               (Map_MapLoader___c__DisplayClass38_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader.<>c__DisplayClass38_0$$<ResetSources>b__0
// il2cpp: bool Map_MapLoader___c__DisplayClass38_0___ResetSources_b__0 (Map_MapLoader___c__DisplayClass38_0_o* __this, UnityEngine_AI_NavMeshBuildSource_o source, const MethodInfo* method);
// 0x40aeef0

bool_conflict
Map_MapLoader___c__DisplayClass38_0___ResetSources_b__0
          (Map_MapLoader___c__DisplayClass38_0_o *__this,UnityEngine_AI_NavMeshBuildSource_o source,
          MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_02;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_03;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_04;
  UnityEngine_AI_NavMeshBuildSettings_o __this_05;
  UnityEngine_AI_NavMeshBuildSettings_o __this_06;
  UnityEngine_AI_NavMeshBuildSettings_o __this_07;
  UnityEngine_AI_NavMeshBuildSettings_o __this_08;
  UnityEngine_AI_NavMeshBuildSettings_o __this_09;
  UnityEngine_AI_NavMeshBuildSettings_o __this_10;
  UnityEngine_AI_NavMeshBuildSettings_o __this_11;
  UnityEngine_AI_NavMeshBuildSettings_o buildSettings;
  UnityEngine_AI_NavMeshBuildSource_o __this_12;
  char cVar2;
  bool_conflict bVar3;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  undefined8 in_RAX;
  MethodInfo *pMVar4;
  UnityEngine_GameObject_o *item;
  UnityEngine_AI_NavMeshData_o *__this_13;
  UnityEngine_AsyncOperation_o *pUVar5;
  UnityEngine_Awaitable_o *__this_14;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 unaff_RBX;
  MethodInfo *method_00;
  undefined8 unaff_R14;
  undefined1 auVar10 [12];
  undefined8 unaff_retaddr;
  _union_14 in_stack_fffffffffffffef0;
  System_Action_o *in_stack_fffffffffffffef8;
  System_Threading_Tasks_Task_TResult__o *in_stack_ffffffffffffff00;
  undefined8 in_stack_ffffffffffffff08;
  undefined8 in_stack_ffffffffffffff10;
  undefined8 in_stack_ffffffffffffff18;
  undefined8 in_stack_ffffffffffffff20;
  undefined8 in_stack_ffffffffffffff28;
  UnityEngine_Awaitable_Awaiter_Fields UStack_b8;
  _union_14 _Stack_b0;
  System_Action_o *pSStack_a8;
  System_Threading_Tasks_Task_TResult__o *pSStack_a0;
  undefined8 uStack_98;
  System_Collections_Generic_List_NavMeshBuildSource__o *pSStack_90;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  _union_14 _Stack_70;
  System_Action_o *pSStack_68;
  System_Threading_Tasks_Task_TResult__o *pSStack_60;
  int32_t iStack_58;
  undefined4 uStack_54;
  System_Collections_Generic_List_NavMeshBuildSource__o *pSStack_50;
  UnityEngine_Vector3_Fields aUStack_48 [2];
  System_Collections_Generic_HashSet_object__o *pSStack_30;
  MethodInfo *pMStack_28;
  
  unique0x10001383 = source.fields;
  __this_12.fields.m_Transform.fields._24_8_ = unaff_retaddr;
  if (g_data_057ac4bd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    g_data_057ac4bd = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).staticObjects;
  __this_12.fields.m_Transform.fields.m20 = (float)(int)unaff_RBX;
  __this_12.fields.m_Transform.fields.m30 = (float)(int)((ulong)unaff_RBX >> 0x20);
  __this_12.fields.m_Transform.fields.m00 = (float)(int)in_RAX;
  __this_12.fields.m_Transform.fields.m10 = (float)(int)((ulong)in_RAX >> 0x20);
  __this_12.fields.m_Transform.fields.m01 = (float)(int)unaff_R14;
  __this_12.fields.m_Transform.fields.m11 = (float)(int)((ulong)unaff_R14 >> 0x20);
  method_00 = (MethodInfo *)&source;
  pMVar4 = (MethodInfo *)UnityEngine_AI_NavMeshBuildSource__get_component(__this_12,(MethodInfo *)&source);
  if ((pMVar4 != (MethodInfo *)0x0) &&
     (item = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pMVar4,(MethodInfo *)0x0),
     method_00 = pMVar4, __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    bVar3 = System_Collections_Generic_HashSet_object___Contains(__this_00,(Il2CppObject *)item,MethodInfo_Boolean_Contains);
    return bVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_30 = __this_00;
  pMStack_28 = (MethodInfo *)&source;
  if (g_data_057ac4be == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitOnCompleted_Awaitable_Awaiter_MapLoader_Create);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NavMeshData);
    g_data_057ac4be = '\x01';
  }
  auStack_88._8_4_ = 0.0;
  auStack_88._12_4_ = 0.0;
  uStack_78._0_4_ = 0.0;
  uStack_78._4_4_ = 0.0;
  pSStack_90 = (System_Collections_Generic_List_NavMeshBuildSource__o *)0x0;
  auStack_88._0_4_ = 0.0;
  auStack_88._4_4_ = 0.0;
  pSStack_a0 = (System_Threading_Tasks_Task_TResult__o *)0x0;
  uStack_98._0_4_ = 0;
  uStack_98._4_4_ = 0;
  _Stack_b0.genericMethod = (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  pSStack_a8 = (System_Action_o *)0x0;
  UStack_b8._awaited = (UnityEngine_Awaitable_o *)0x0;
  if (*(int *)&method_00->methodPointer == 0) {
    UStack_b8._awaited = *(UnityEngine_Awaitable_o **)&method_00->token;
    method_00->token = 0;
    method_00->flags = 0;
    method_00->iflags = 0;
    *(undefined4 *)&method_00->methodPointer = 0xffffffff;
joined_r0x040af1b4:
    if (UStack_b8._awaited != (UnityEngine_Awaitable_o *)0x0) {
      UnityEngine_Awaitable__PropagateExceptionAndRelease(UStack_b8._awaited,(MethodInfo *)0x0);
      *(undefined4 *)&method_00->methodPointer = 0xfffffffe;
      if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_02.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction = in_stack_fffffffffffffef8;
      __this_02.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
           in_stack_fffffffffffffef0.genericMethod;
      __this_02.fields.m_builder.fields.m_task = in_stack_ffffffffffffff00;
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult
                (__this_02,(MethodInfo *)&method_00->virtualMethodPointer);
      return extraout_EAX;
    }
    il2cpp_runtime_helper_022b2c90();
label_040af265:
    *(undefined4 *)&method_00->methodPointer = 0;
    *(UnityEngine_Awaitable_o **)&method_00->token = UStack_b8._awaited;
    il2cpp_runtime_helper_022b4080(&method_00->token,0);
    if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_03.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction = in_stack_fffffffffffffef8;
    __this_03.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
         in_stack_fffffffffffffef0.genericMethod;
    __this_03.fields.m_builder.fields.m_task = in_stack_ffffffffffffff00;
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitOnCompleted_Awaitable_Awaiter__MapLoader__CreateNavMeshSurfaceAsync_d__40_
              (__this_03,(UnityEngine_Awaitable_Awaiter_o *)&method_00->virtualMethodPointer,
               (Map_MapLoader__CreateNavMeshSurfaceAsync_d__40_o *)&UStack_b8,(MethodInfo_24AF480 *)method_00)
    ;
    bVar3 = extraout_EAX_00;
  }
  else {
    __this_13 = (UnityEngine_AI_NavMeshData_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NavMeshData);
    UnityEngine_AI_NavMeshData___ctor(__this_13,(MethodInfo *)0x0);
    UnityEngine_AI_NavMesh__GetSettingsByID
              ((UnityEngine_AI_NavMeshBuildSettings_o *)&_Stack_70,*(int32_t *)&method_00->klass,
               (MethodInfo *)0x0);
    auStack_88._8_4_ = aUStack_48[0].z;
    auStack_88._12_4_ = aUStack_48[1].x;
    uStack_78._0_4_ = aUStack_48[1].y;
    uStack_78._4_4_ = aUStack_48[1].z;
    pSStack_90 = pSStack_50;
    auStack_88._0_4_ = aUStack_48[0].x;
    auStack_88._4_4_ = aUStack_48[0].y;
    pSStack_a0 = pSStack_60;
    uStack_98._0_4_ = iStack_58;
    uStack_98._4_4_ = uStack_54;
    _Stack_b0 = _Stack_70;
    pSStack_a8 = pSStack_68;
    __this_05.fields._8_8_ = in_stack_fffffffffffffef8;
    __this_05.fields._0_8_ = in_stack_fffffffffffffef0.genericMethod;
    __this_05.fields._16_8_ = in_stack_ffffffffffffff00;
    __this_05.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff08;
    __this_05.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff08 >> 0x20);
    __this_05.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff10;
    __this_05.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
    __this_05.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff18;
    __this_05.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff18 >> 0x20);
    __this_05.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff20;
    __this_05.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
    __this_05.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff28;
    __this_05.fields.m_Debug.fields.m_Flags =
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)((ulong)in_stack_ffffffffffffff28 >> 0x20);
    __this_05.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff28 >> 0x28);
    UnityEngine_AI_NavMeshBuildSettings__set_maxJobWorkers(__this_05,(uint32_t)&_Stack_b0,(MethodInfo *)0x6);
    __this_06.fields._8_8_ = in_stack_fffffffffffffef8;
    __this_06.fields._0_8_ = in_stack_fffffffffffffef0.genericMethod;
    __this_06.fields._16_8_ = in_stack_ffffffffffffff00;
    __this_06.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff08;
    __this_06.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff08 >> 0x20);
    __this_06.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff10;
    __this_06.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
    __this_06.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff18;
    __this_06.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff18 >> 0x20);
    __this_06.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff20;
    __this_06.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
    __this_06.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff28;
    __this_06.fields.m_Debug.fields.m_Flags =
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)((ulong)in_stack_ffffffffffffff28 >> 0x20);
    __this_06.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff28 >> 0x28);
    UnityEngine_AI_NavMeshBuildSettings__set_overrideTileSize
              (__this_06,(bool_conflict)&_Stack_b0,(MethodInfo *)0x1);
    __this_07.fields._8_8_ = in_stack_fffffffffffffef8;
    __this_07.fields._0_8_ = in_stack_fffffffffffffef0.genericMethod;
    __this_07.fields._16_8_ = in_stack_ffffffffffffff00;
    __this_07.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff08;
    __this_07.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff08 >> 0x20);
    __this_07.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff10;
    __this_07.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
    __this_07.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff18;
    __this_07.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff18 >> 0x20);
    __this_07.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff20;
    __this_07.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
    __this_07.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff28;
    __this_07.fields.m_Debug.fields.m_Flags =
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)((ulong)in_stack_ffffffffffffff28 >> 0x20);
    __this_07.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff28 >> 0x28);
    UnityEngine_AI_NavMeshBuildSettings__set_tileSize(__this_07,(int32_t)&_Stack_b0,(MethodInfo *)0x100);
    __this_08.fields._8_8_ = in_stack_fffffffffffffef8;
    __this_08.fields._0_8_ = in_stack_fffffffffffffef0.genericMethod;
    __this_08.fields._16_8_ = in_stack_ffffffffffffff00;
    __this_08.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff08;
    __this_08.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff08 >> 0x20);
    __this_08.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff10;
    __this_08.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
    __this_08.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff18;
    __this_08.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff18 >> 0x20);
    __this_08.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff20;
    __this_08.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
    __this_08.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff28;
    __this_08.fields.m_Debug.fields.m_Flags =
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)((ulong)in_stack_ffffffffffffff28 >> 0x20);
    __this_08.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff28 >> 0x28);
    UnityEngine_AI_NavMeshBuildSettings__set_overrideVoxelSize
              (__this_08,(bool_conflict)&_Stack_b0,(MethodInfo *)0x1);
    __this_09.fields._8_8_ = in_stack_fffffffffffffef8;
    __this_09.fields._0_8_ = in_stack_fffffffffffffef0.genericMethod;
    __this_09.fields._16_8_ = in_stack_ffffffffffffff00;
    __this_09.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff08;
    __this_09.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff08 >> 0x20);
    __this_09.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff10;
    __this_09.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
    __this_09.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff18;
    __this_09.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff18 >> 0x20);
    __this_09.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff20;
    __this_09.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
    __this_09.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff28;
    __this_09.fields.m_Debug.fields.m_Flags =
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)((ulong)in_stack_ffffffffffffff28 >> 0x20);
    __this_09.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff28 >> 0x28);
    UnityEngine_AI_NavMeshBuildSettings__set_voxelSize(__this_09,4.0,(MethodInfo *)&_Stack_b0);
    __this_10.fields._8_8_ = in_stack_fffffffffffffef8;
    __this_10.fields._0_8_ = in_stack_fffffffffffffef0.genericMethod;
    __this_10.fields._16_8_ = in_stack_ffffffffffffff00;
    __this_10.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff08;
    __this_10.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff08 >> 0x20);
    __this_10.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff10;
    __this_10.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
    __this_10.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff18;
    __this_10.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff18 >> 0x20);
    __this_10.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff20;
    __this_10.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
    __this_10.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff28;
    __this_10.fields.m_Debug.fields.m_Flags =
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)((ulong)in_stack_ffffffffffffff28 >> 0x20);
    __this_10.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff28 >> 0x28);
    UnityEngine_AI_NavMeshBuildSettings__set_minRegionArea(__this_10,100.0,(MethodInfo *)&_Stack_b0);
    __this_11.fields._8_8_ = in_stack_fffffffffffffef8;
    __this_11.fields._0_8_ = in_stack_fffffffffffffef0.genericMethod;
    __this_11.fields._16_8_ = in_stack_ffffffffffffff00;
    __this_11.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff08;
    __this_11.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff08 >> 0x20);
    __this_11.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff10;
    __this_11.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
    __this_11.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff18;
    __this_11.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff18 >> 0x20);
    __this_11.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff20;
    __this_11.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
    __this_11.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff28;
    __this_11.fields.m_Debug.fields.m_Flags =
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)((ulong)in_stack_ffffffffffffff28 >> 0x20);
    __this_11.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff28 >> 0x28);
    UnityEngine_AI_NavMeshBuildSettings__set_buildHeightMesh
              (__this_11,(bool_conflict)&_Stack_b0,(MethodInfo *)0x1);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (*(long *)(TypeInfo_MapLoader + 0xb8) + 0xc0);
    if (__this_01 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      System_Collections_Generic_Dictionary_int__object___Add
                (__this_01,*(int32_t *)&method_00->klass,(Il2CppObject *)__this_13,MethodInfo_Void_Add);
      UnityEngine_AI_NavMesh__AddNavMeshData(__this_13,(MethodInfo *)0x0);
      buildSettings.fields._8_8_ = pSStack_a8;
      buildSettings.fields._0_8_ = _Stack_b0.genericMethod;
      buildSettings.fields._16_8_ = pSStack_a0;
      buildSettings.fields.m_MaxJumpAcrossDistance = (float)(int32_t)uStack_98;
      buildSettings.fields.m_MinRegionArea = (float)uStack_98._4_4_;
      buildSettings.fields._32_8_ = pSStack_90;
      buildSettings.fields.m_OverrideTileSize = auStack_88._0_4_;
      buildSettings.fields.m_TileSize = auStack_88._4_4_;
      buildSettings.fields.m_BuildHeightMesh = auStack_88._8_4_;
      buildSettings.fields.m_MaxJobWorkers = auStack_88._12_4_;
      buildSettings.fields._56_8_ = uStack_78;
      in_stack_fffffffffffffef0 = _Stack_b0;
      in_stack_fffffffffffffef8 = pSStack_a8;
      in_stack_ffffffffffffff00 = pSStack_a0;
      pUVar5 = UnityEngine_AI_NavMeshBuilder__UpdateNavMeshDataAsync
                         (__this_13,buildSettings,
                          (System_Collections_Generic_List_NavMeshBuildSource__o *)method_00->return_type,
                          (UnityEngine_Bounds_o)*(UnityEngine_Bounds_Fields *)&method_00->parameters,
                          (MethodInfo *)0x0);
      if (g_data_057ac62e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Awaitable);
        g_data_057ac62e = '\x01';
        iVar1 = *(int *)(TypeInfo_Awaitable + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_Awaitable + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_14 = (UnityEngine_Awaitable_o *)il2cpp_runtime_helper_040d2000(pUVar5,0,0);
      if (__this_14 != (UnityEngine_Awaitable_o *)0x0) {
        UStack_b8._awaited =
             (UnityEngine_Awaitable_o *)UnityEngine_Awaitable__GetAwaiter(__this_14,(MethodInfo *)0x0);
        bVar3 = UnityEngine_Awaitable_Awaiter__get_IsCompleted
                          ((UnityEngine_Awaitable_Awaiter_o)&UStack_b8,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') goto joined_r0x040af1b4;
        goto label_040af265;
      }
    }
    auVar10 = il2cpp_runtime_helper_022b2c90();
    if (auVar10._8_4_ != 1) {
      _Unwind_Resume(auVar10._0_8_);
    }
    puVar6 = (undefined8 *)__cxa_begin_catch(auVar10._0_8_);
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    cVar2 = il2cpp_runtime_helper_0233e000(uVar7,*(undefined8 *)*puVar6);
    if (cVar2 == '\0') {
      puVar9 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar9 = *puVar6;
      __cxa_throw(puVar9,&PTR_PTR_05215060,0);
    }
    pMVar4 = (MethodInfo *)*puVar6;
    __cxa_end_catch();
    *(undefined4 *)&method_00->methodPointer = 0xfffffffe;
    lVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(lVar8);
    }
    __this_04.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction = in_stack_fffffffffffffef8;
    __this_04.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
         in_stack_fffffffffffffef0.genericMethod;
    __this_04.fields.m_builder.fields.m_task = in_stack_ffffffffffffff00;
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetException
              (__this_04,(System_Exception_o *)&method_00->virtualMethodPointer,pMVar4);
    bVar3 = extraout_EAX_01;
  }
  return bVar3;
}


// Map.MapLoader.<CreateNavMeshSurfaceAsync>d__40$$MoveNext
// il2cpp: void Map_MapLoader__CreateNavMeshSurfaceAsync_d__40__MoveNext (Map_MapLoader__CreateNavMeshSurfaceAsync_d__40_o __this, const MethodInfo* method);
// 0x40aef60

void Map_MapLoader__CreateNavMeshSurfaceAsync_d__40__MoveNext
               (Map_MapLoader__CreateNavMeshSurfaceAsync_d__40_o __this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  MethodInfo *method_00;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_01;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_02;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_03;
  UnityEngine_AI_NavMeshBuildSettings_o __this_04;
  UnityEngine_AI_NavMeshBuildSettings_o __this_05;
  UnityEngine_AI_NavMeshBuildSettings_o __this_06;
  UnityEngine_AI_NavMeshBuildSettings_o __this_07;
  UnityEngine_AI_NavMeshBuildSettings_o __this_08;
  UnityEngine_AI_NavMeshBuildSettings_o __this_09;
  UnityEngine_AI_NavMeshBuildSettings_o __this_10;
  UnityEngine_AI_NavMeshBuildSettings_o buildSettings;
  char cVar2;
  bool_conflict bVar3;
  UnityEngine_AI_NavMeshData_o *__this_11;
  UnityEngine_AsyncOperation_o *pUVar4;
  UnityEngine_Awaitable_o *__this_12;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [12];
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
  
  if (g_data_057ac4be == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitOnCompleted_Awaitable_Awaiter_MapLoader_Create);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NavMeshData);
    g_data_057ac4be = '\x01';
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
joined_r0x040af1b4:
    if (local_a0._awaited != (UnityEngine_Awaitable_o *)0x0) {
      UnityEngine_Awaitable__PropagateExceptionAndRelease(local_a0._awaited,(MethodInfo *)0x0);
      *(undefined4 *)&method->methodPointer = 0xfffffffe;
      if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction = in_stack_ffffffffffffff10;
      __this_01.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
           in_stack_ffffffffffffff08.genericMethod;
      __this_01.fields.m_builder.fields.m_task = in_stack_ffffffffffffff18;
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult
                (__this_01,(MethodInfo *)&method->virtualMethodPointer);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
label_040af265:
    *(undefined4 *)&method->methodPointer = 0;
    *(UnityEngine_Awaitable_o **)&method->token = local_a0._awaited;
    il2cpp_runtime_helper_022b4080(&method->token,0);
    if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction = in_stack_ffffffffffffff10;
    __this_02.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
         in_stack_ffffffffffffff08.genericMethod;
    __this_02.fields.m_builder.fields.m_task = in_stack_ffffffffffffff18;
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitOnCompleted_Awaitable_Awaiter__MapLoader__CreateNavMeshSurfaceAsync_d__40_
              (__this_02,(UnityEngine_Awaitable_Awaiter_o *)&method->virtualMethodPointer,
               (Map_MapLoader__CreateNavMeshSurfaceAsync_d__40_o *)&local_a0,(MethodInfo_24AF480 *)method);
  }
  else {
    __this_11 = (UnityEngine_AI_NavMeshData_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NavMeshData);
    UnityEngine_AI_NavMeshData___ctor(__this_11,(MethodInfo *)0x0);
    UnityEngine_AI_NavMesh__GetSettingsByID
              ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_58,*(int32_t *)&method->klass,(MethodInfo *)0x0
              );
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
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)((ulong)in_stack_ffffffffffffff40 >> 0x20);
    __this_04.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff40 >> 0x28);
    UnityEngine_AI_NavMeshBuildSettings__set_maxJobWorkers(__this_04,(uint32_t)&local_98,(MethodInfo *)0x6);
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
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)((ulong)in_stack_ffffffffffffff40 >> 0x20);
    __this_05.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff40 >> 0x28);
    UnityEngine_AI_NavMeshBuildSettings__set_overrideTileSize
              (__this_05,(bool_conflict)&local_98,(MethodInfo *)0x1);
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
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)((ulong)in_stack_ffffffffffffff40 >> 0x20);
    __this_06.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff40 >> 0x28);
    UnityEngine_AI_NavMeshBuildSettings__set_tileSize(__this_06,(int32_t)&local_98,(MethodInfo *)0x100);
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
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)((ulong)in_stack_ffffffffffffff40 >> 0x20);
    __this_07.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff40 >> 0x28);
    UnityEngine_AI_NavMeshBuildSettings__set_overrideVoxelSize
              (__this_07,(bool_conflict)&local_98,(MethodInfo *)0x1);
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
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)((ulong)in_stack_ffffffffffffff40 >> 0x20);
    __this_08.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff40 >> 0x28);
    UnityEngine_AI_NavMeshBuildSettings__set_voxelSize(__this_08,4.0,(MethodInfo *)&local_98);
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
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)((ulong)in_stack_ffffffffffffff40 >> 0x20);
    __this_09.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff40 >> 0x28);
    UnityEngine_AI_NavMeshBuildSettings__set_minRegionArea(__this_09,100.0,(MethodInfo *)&local_98);
    __this_10.fields._8_8_ = in_stack_ffffffffffffff10;
    __this_10.fields._0_8_ = in_stack_ffffffffffffff08.genericMethod;
    __this_10.fields._16_8_ = in_stack_ffffffffffffff18;
    __this_10.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff20;
    __this_10.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
    __this_10.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff28;
    __this_10.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
    __this_10.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff30;
    __this_10.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20);
    __this_10.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff38;
    __this_10.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff38 >> 0x20);
    __this_10.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff40;
    __this_10.fields.m_Debug.fields.m_Flags =
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
         (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)((ulong)in_stack_ffffffffffffff40 >> 0x20);
    __this_10.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff40 >> 0x28);
    UnityEngine_AI_NavMeshBuildSettings__set_buildHeightMesh
              (__this_10,(bool_conflict)&local_98,(MethodInfo *)0x1);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (*(long *)(TypeInfo_MapLoader + 0xb8) + 0xc0);
    if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      System_Collections_Generic_Dictionary_int__object___Add
                (__this_00,*(int32_t *)&method->klass,(Il2CppObject *)__this_11,MethodInfo_Void_Add);
      UnityEngine_AI_NavMesh__AddNavMeshData(__this_11,(MethodInfo *)0x0);
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
      pUVar4 = UnityEngine_AI_NavMeshBuilder__UpdateNavMeshDataAsync
                         (__this_11,buildSettings,
                          (System_Collections_Generic_List_NavMeshBuildSource__o *)method->return_type,
                          (UnityEngine_Bounds_o)*(UnityEngine_Bounds_Fields *)&method->parameters,
                          (MethodInfo *)0x0);
      if (g_data_057ac62e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Awaitable);
        g_data_057ac62e = '\x01';
        iVar1 = *(int *)(TypeInfo_Awaitable + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_Awaitable + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_12 = (UnityEngine_Awaitable_o *)il2cpp_runtime_helper_040d2000(pUVar4,0,0);
      if (__this_12 != (UnityEngine_Awaitable_o *)0x0) {
        local_a0._awaited =
             (UnityEngine_Awaitable_o *)UnityEngine_Awaitable__GetAwaiter(__this_12,(MethodInfo *)0x0);
        bVar3 = UnityEngine_Awaitable_Awaiter__get_IsCompleted
                          ((UnityEngine_Awaitable_Awaiter_o)&local_a0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') goto joined_r0x040af1b4;
        goto label_040af265;
      }
    }
    auVar9 = il2cpp_runtime_helper_022b2c90();
    if (auVar9._8_4_ != 1) {
      _Unwind_Resume(auVar9._0_8_);
    }
    puVar5 = (undefined8 *)__cxa_begin_catch(auVar9._0_8_);
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    cVar2 = il2cpp_runtime_helper_0233e000(uVar6,*(undefined8 *)*puVar5);
    if (cVar2 == '\0') {
      puVar8 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar8 = *puVar5;
      __cxa_throw(puVar8,&PTR_PTR_05215060,0);
    }
    method_00 = (MethodInfo *)*puVar5;
    __cxa_end_catch();
    *(undefined4 *)&method->methodPointer = 0xfffffffe;
    lVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
    if (*(int *)(lVar7 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(lVar7);
    }
    __this_03.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction = in_stack_ffffffffffffff10;
    __this_03.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
         in_stack_ffffffffffffff08.genericMethod;
    __this_03.fields.m_builder.fields.m_task = in_stack_ffffffffffffff18;
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetException
              (__this_03,(System_Exception_o *)&method->virtualMethodPointer,method_00);
  }
  return;
}


// Map.MapLoader.<CreateNavMeshSurfaceAsync>d__40$$SetStateMachine
// il2cpp: void Map_MapLoader__CreateNavMeshSurfaceAsync_d__40__SetStateMachine (Map_MapLoader__CreateNavMeshSurfaceAsync_d__40_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x40af400

void Map_MapLoader__CreateNavMeshSurfaceAsync_d__40__SetStateMachine
               (Map_MapLoader__CreateNavMeshSurfaceAsync_d__40_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  if (g_data_057ac4bf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
    g_data_057ac4bf = '\x01';
  }
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetStateMachine
            ((System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o)__this.fields._0_24_,
             (System_Runtime_CompilerServices_IAsyncStateMachine_o *)&stateMachine->monitor,method);
  return;
}


// Map.MapLoader.<GenerateNavMesh>d__43$$MoveNext
// il2cpp: void Map_MapLoader__GenerateNavMesh_d__43__MoveNext (Map_MapLoader__GenerateNavMesh_d__43_o __this, const MethodInfo* method);
// 0x40af460

void Map_MapLoader__GenerateNavMesh_d__43__MoveNext
               (Map_MapLoader__GenerateNavMesh_d__43_o __this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_Enumerator_int__o __this_00;
  System_Collections_Generic_List_Enumerator_int__o __this_01;
  System_Collections_Generic_List_Enumerator_int__o __this_02;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_03;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_04;
  System_Collections_Generic_List_Enumerator_int__o __this_05;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_06;
  int32_t iVar4;
  int iVar5;
  char cVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_int__o *__this_07;
  System_Collections_Generic_List_object__o *__this_08;
  System_Threading_Tasks_Task_o *pSVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *unaff_R12;
  MethodInfo *pMVar14;
  Il2CppClass *__this_09;
  undefined1 auVar15 [12];
  System_Runtime_CompilerServices_IAsyncStateMachine_o *in_stack_ffffffffffffff68;
  System_Action_o *in_stack_ffffffffffffff70;
  System_Threading_Tasks_Task_TResult__o *in_stack_ffffffffffffff78;
  System_Runtime_CompilerServices_TaskAwaiter_Fields local_78;
  uint local_6c;
  System_Collections_Generic_List_Enumerator_T__c *local_68;
  System_Threading_Tasks_Task_TResult__o *pSStack_60;
  Map_MapLoader_o *local_58;
  undefined1 local_48 [16];
  Map_MapLoader_o *local_38;
  
  if (g_data_057ac4c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitUnsafeOnCompleted_TaskAwaiter_MapLoader_Genera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Int32_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Threading_Tasks_Task);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Task);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Task);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ac4c0 = '\x01';
  }
  local_68 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pSStack_60 = (System_Threading_Tasks_Task_TResult__o *)0x0;
  local_58 = (Map_MapLoader_o *)0x0;
  local_78.m_task = (System_Threading_Tasks_Task_o *)0x0;
  uVar2 = *(uint *)&method->methodPointer;
  __this_08 = (System_Collections_Generic_List_object__o *)(ulong)uVar2;
  if (uVar2 == 0) {
    local_78.m_task = (System_Threading_Tasks_Task_o *)method->return_type;
    method->return_type = (Il2CppType *)0x0;
    *(undefined4 *)&method->methodPointer = 0xffffffff;
label_040af791:
    System_Runtime_CompilerServices_TaskAwaiter__GetResult
              ((System_Runtime_CompilerServices_TaskAwaiter_o)&local_78,(MethodInfo *)0x0);
    *(undefined4 *)&method->methodPointer = 0xfffffffe;
    if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_03.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction = in_stack_ffffffffffffff70;
    __this_03.fields.m_builder.fields.m_coreState.fields.m_stateMachine = in_stack_ffffffffffffff68;
    __this_03.fields.m_builder.fields.m_task = in_stack_ffffffffffffff78;
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult
              (__this_03,(MethodInfo *)&method->virtualMethodPointer);
    return;
  }
  __this_09 = method->klass;
  pMVar14 = method;
  if (__this_09 == (Il2CppClass *)0x0) {
label_040af82e:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    Map_MapLoader__ResetSources((Map_MapLoader_o *)__this_09,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    local_6c = uVar2;
    __this_07 = Utility_Util__GetAllTitanAgentIds((MethodInfo *)0x0);
    __this_08 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Task);
    System_Collections_Generic_List_object____ctor(__this_08,MethodInfo_List_1_System_Threading_Tasks_Task);
    unaff_R12 = (undefined8 *)0x0;
    if (__this_07 != (System_Collections_Generic_List_int__o *)0x0) {
      System_Collections_Generic_List_int___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,__this_07,MethodInfo_List_1_T_Enumerator_System_Int32_GetEnumerator);
      local_58 = local_38;
      local_68 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pSStack_60 = (System_Threading_Tasks_Task_TResult__o *)local_48._8_8_;
      if (__this_08 == (System_Collections_Generic_List_object__o *)0x0) {
        __this_01.fields._8_8_ = in_stack_ffffffffffffff70;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
        __this_01.fields._16_8_ = in_stack_ffffffffffffff78;
        bVar7 = System_Collections_Generic_List_Enumerator_int___MoveNext
                          (__this_01,(MethodInfo_3215510 *)&local_68);
        if ((char)bVar7 != '\0') goto label_040af845;
      }
      else {
        pMVar14 = (MethodInfo *)&TypeInfo_MapLoader;
        unaff_R12 = &MethodInfo_Void_Add;
        while (__this_00.fields._8_8_ = in_stack_ffffffffffffff70,
              __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68,
              __this_00.fields._16_8_ = in_stack_ffffffffffffff78,
              bVar7 = System_Collections_Generic_List_Enumerator_int___MoveNext
                                (__this_00,(MethodInfo_3215510 *)&local_68), (char)bVar7 != '\0') {
          iVar4 = (int32_t)local_58;
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar11 = *(long *)(TypeInfo_MapLoader + 0xb8);
          in_stack_ffffffffffffff78 = *(System_Threading_Tasks_Task_TResult__o **)(lVar11 + 0xb8);
          in_stack_ffffffffffffff68 =
               *(System_Runtime_CompilerServices_IAsyncStateMachine_o **)
                &(((UnityEngine_Bounds_Fields *)(lVar11 + 0xa8))->m_Center).fields;
          in_stack_ffffffffffffff70 = *(System_Action_o **)(lVar11 + 0xb0);
          pSVar8 = Map_MapLoader__CreateNavMeshSurfaceAsync
                             ((Map_MapLoader_o *)__this_09,iVar4,
                              *(System_Collections_Generic_List_NavMeshBuildSource__o **)(lVar11 + 0xa0),
                              (UnityEngine_Bounds_o)*(UnityEngine_Bounds_Fields *)(lVar11 + 0xa8),
                              (MethodInfo *)0x0);
          lVar11 = MethodInfo_Void_Add;
          piVar1 = &(__this_08->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_08->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_040af82e;
          }
          uVar2 = (__this_08->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_08->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar8;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pSVar8);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_08,(Il2CppObject *)pSVar8,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      iVar13 = 5;
      unaff_R12 = (undefined8 *)0x0;
      iVar5 = 5;
      if (-1 < (int)local_6c) goto label_040af731;
      goto label_040af71d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  method = pMVar14;
  do {
    il2cpp_runtime_helper_022fefe0(unaff_R12);
    while( true ) {
      il2cpp_runtime_helper_022b2c90();
label_040af845:
      iVar4 = (int32_t)local_58;
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar11 = *(long *)(TypeInfo_MapLoader + 0xb8);
      in_stack_ffffffffffffff78 = *(System_Threading_Tasks_Task_TResult__o **)(lVar11 + 0xb8);
      in_stack_ffffffffffffff68 =
           *(System_Runtime_CompilerServices_IAsyncStateMachine_o **)
            &(((UnityEngine_Bounds_Fields *)(lVar11 + 0xa8))->m_Center).fields;
      in_stack_ffffffffffffff70 = *(System_Action_o **)(lVar11 + 0xb0);
      Map_MapLoader__CreateNavMeshSurfaceAsync
                ((Map_MapLoader_o *)__this_09,iVar4,
                 *(System_Collections_Generic_List_NavMeshBuildSource__o **)(lVar11 + 0xa0),
                 (UnityEngine_Bounds_o)*(UnityEngine_Bounds_Fields *)(lVar11 + 0xa8),(MethodInfo *)0x0);
      auVar15 = il2cpp_runtime_helper_022b2c90();
      __this_09 = auVar15._0_8_;
      iVar13 = 0;
      if (auVar15._8_4_ != 1) {
        if ((int)local_6c < 0) {
          __this_05.fields._8_8_ = in_stack_ffffffffffffff70;
          __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
          __this_05.fields._16_8_ = in_stack_ffffffffffffff78;
          System_Collections_Generic_List_Enumerator_int___Dispose(__this_05,(MethodInfo_3215500 *)&local_68);
        }
        if (auVar15._8_4_ == 1) {
          puVar9 = (undefined8 *)__cxa_begin_catch(__this_09);
          uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
          cVar6 = il2cpp_runtime_helper_0233e000(uVar10,*(undefined8 *)*puVar9);
          if (cVar6 != '\0') {
            pMVar14 = (MethodInfo *)*puVar9;
            __cxa_end_catch();
            *(undefined4 *)&method->methodPointer = 0xfffffffe;
            lVar11 = il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
            if (*(int *)(lVar11 + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0(lVar11);
            }
            __this_06.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
                 in_stack_ffffffffffffff70;
            __this_06.fields.m_builder.fields.m_coreState.fields.m_stateMachine = in_stack_ffffffffffffff68;
            __this_06.fields.m_builder.fields.m_task = in_stack_ffffffffffffff78;
            System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetException
                      (__this_06,(System_Exception_o *)&method->virtualMethodPointer,pMVar14);
            return;
          }
          puVar12 = (undefined8 *)__cxa_allocate_exception(8);
          *puVar12 = *puVar9;
          __cxa_throw(puVar12,&PTR_PTR_05215060,0);
        }
        _Unwind_Resume(__this_09);
      }
      puVar9 = (undefined8 *)__cxa_begin_catch(__this_09);
      unaff_R12 = (undefined8 *)*puVar9;
      __cxa_end_catch();
      iVar5 = iVar13;
      if ((int)local_6c < 0) {
label_040af71d:
        iVar13 = iVar5;
        __this_02.fields._8_8_ = in_stack_ffffffffffffff70;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
        __this_02.fields._16_8_ = in_stack_ffffffffffffff78;
        System_Collections_Generic_List_Enumerator_int___Dispose(__this_02,(MethodInfo_3215500 *)&local_68);
      }
label_040af731:
      if (unaff_R12 != (undefined8 *)0x0) break;
      if ((iVar13 != 5) && (iVar13 != 0)) {
        return;
      }
      if (*(int *)(TypeInfo_Task + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = System_Threading_Tasks_Task__WhenAll
                         ((System_Collections_Generic_IEnumerable_Task__o *)__this_08,(MethodInfo *)0x0);
      if (pSVar8 != (System_Threading_Tasks_Task_o *)0x0) {
        local_78.m_task =
             (System_Threading_Tasks_Task_o *)
             System_Threading_Tasks_Task__GetAwaiter(pSVar8,(MethodInfo *)0x0);
        bVar7 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted
                          ((System_Runtime_CompilerServices_TaskAwaiter_o)&local_78,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          *(undefined4 *)&method->methodPointer = 0;
          method->return_type = (Il2CppType *)local_78.m_task;
          il2cpp_runtime_helper_022b4080(&method->return_type,0);
          if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_04.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
               in_stack_ffffffffffffff70;
          __this_04.fields.m_builder.fields.m_coreState.fields.m_stateMachine = in_stack_ffffffffffffff68;
          __this_04.fields.m_builder.fields.m_task = in_stack_ffffffffffffff78;
          System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted_TaskAwaiter__MapLoader__GenerateNavMesh_d__43_
                    (__this_04,(System_Runtime_CompilerServices_TaskAwaiter_o *)&method->virtualMethodPointer,
                     (Map_MapLoader__GenerateNavMesh_d__43_o *)&local_78,(MethodInfo_24B0830 *)method);
          return;
        }
        goto label_040af791;
      }
    }
  } while( true );
}


// Map.MapLoader.<GenerateNavMesh>d__43$$SetStateMachine
// il2cpp: void Map_MapLoader__GenerateNavMesh_d__43__SetStateMachine (Map_MapLoader__GenerateNavMesh_d__43_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x40afa10

void Map_MapLoader__GenerateNavMesh_d__43__SetStateMachine
               (Map_MapLoader__GenerateNavMesh_d__43_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  if (g_data_057ac4c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
    g_data_057ac4c1 = '\x01';
  }
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetStateMachine
            ((System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o)__this.fields._0_24_,
             (System_Runtime_CompilerServices_IAsyncStateMachine_o *)&stateMachine->monitor,method);
  return;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__35$$.ctor
// il2cpp: void Map_MapLoader__LoadObjectsCoroutine_d__35___ctor (Map_MapLoader__LoadObjectsCoroutine_d__35_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x40afa70

void Map_MapLoader__LoadObjectsCoroutine_d__35___ctor
               (Map_MapLoader__LoadObjectsCoroutine_d__35_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__35$$System.IDisposable.Dispose
// il2cpp: void Map_MapLoader__LoadObjectsCoroutine_d__35__System_IDisposable_Dispose (Map_MapLoader__LoadObjectsCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x40afa90

void Map_MapLoader__LoadObjectsCoroutine_d__35__System_IDisposable_Dispose
               (Map_MapLoader__LoadObjectsCoroutine_d__35_o *__this,MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  switch((__this->fields).__1__state) {
  case -4:
  case 2:
    if (g_data_057ac4c4 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      g_data_057ac4c4 = '\x01';
    }
    break;
  case -3:
  case 1:
    if (g_data_057ac4c3 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      g_data_057ac4c3 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
               (MethodInfo_321A1C0 *)&(__this->fields).__7__wrap4);
    return;
  default:
    return;
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_321A1C0 *)&(__this->fields).__7__wrap7);
  return;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__35$$MoveNext
// il2cpp: bool Map_MapLoader__LoadObjectsCoroutine_d__35__MoveNext (Map_MapLoader__LoadObjectsCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x40afb30

bool_conflict
Map_MapLoader__LoadObjectsCoroutine_d__35__MoveNext
          (Map_MapLoader__LoadObjectsCoroutine_d__35_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Bounds_Fields *pUVar2;
  char cVar3;
  uint uVar4;
  Map_MapLoader_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_string__o *pSVar6;
  UnityEngine_MonoBehaviour_o *__this_02;
  System_String_o *bundle;
  long lVar7;
  Map_MapScriptBaseObject_o *scriptObject;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar8;
  UnityEngine_AsyncOperation_array *pUVar9;
  UI_LoadingMenu_o *pUVar10;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_09;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_10;
  System_Collections_Generic_List_Enumerator_int__o __this_11;
  System_Collections_Generic_List_Enumerator_int__o __this_12;
  float fVar11;
  undefined4 uVar12;
  bool_conflict bVar13;
  System_String_o *pSVar14;
  System_String_array *pSVar15;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar16;
  long *plVar17;
  undefined8 uVar18;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_13;
  Map_MapObject_o *mapObject;
  System_Collections_Generic_List_int__o *__this_14;
  System_Collections_Generic_List_AsyncOperation__o *pSVar19;
  UnityEngine_AsyncOperation_o *pUVar20;
  Il2CppObject *pIVar21;
  byte bVar22;
  int iVar23;
  bool bVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined8 in_stack_ffffffffffffff28;
  undefined8 in_stack_ffffffffffffff30;
  Il2CppObject *in_stack_ffffffffffffff38;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_a8;
  undefined1 auStack_88 [72];
  uint32_t uStack_40;
  int32_t iStack_3c;
  Map_MapScriptBaseObject_o *pMStack_38;
  
  if (g_data_057ac4c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Map);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBaseObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapScriptBaseObject_GetEnumerato);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Int32_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_AsyncOperation);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AsyncOperation_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AsyncOperation);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForEndOfFrame);
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Thunderspear PVP");
    il2cpp_runtime_helper_023445d0(&"AHSS PVP");
    il2cpp_runtime_helper_023445d0(&"Blade PVP");
    il2cpp_runtime_helper_023445d0(&"Racing");
    il2cpp_runtime_helper_023445d0(&"APG PVP");
    il2cpp_runtime_helper_023445d0(&"Failed to load bundle: ");
    g_data_057ac4c2 = '\x01';
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
label_040b05af:
      il2cpp_runtime_helper_022b2c90();
label_040b05b4:
      il2cpp_runtime_helper_022b2ca0();
label_040b05b9:
      il2cpp_runtime_helper_022b2c90();
label_040b05be:
      il2cpp_runtime_helper_022b2c90();
label_040b05c3:
      il2cpp_runtime_helper_022b2c90();
label_040b05c8:
      il2cpp_runtime_helper_022b2c90();
label_040b05cd:
      il2cpp_runtime_helper_022b2c90();
label_040b05d2:
      il2cpp_runtime_helper_022b2c90();
      goto label_040b05d7;
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_88 + 0x40),
               (System_Collections_Generic_List_object__o *)pSVar6,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
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
    il2cpp_runtime_helper_022b4080(&(__this->fields).__7__wrap4,0);
    (__this->fields).__1__state = -3;
label_040afff0:
    do {
      __this_03.fields._index = (int)in_stack_ffffffffffffff30;
      __this_03.fields._version = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20);
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
      __this_03.fields._current = in_stack_ffffffffffffff38;
      bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                         (__this_03,(MethodInfo_321A1D0 *)&(__this->fields).__7__wrap4);
      if ((char)bVar13 == '\0') {
        if (g_data_057ac4c3 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          g_data_057ac4c3 = '\x01';
        }
        (__this->fields).__1__state = -1;
        __this_04.fields._index = (int)in_stack_ffffffffffffff30;
        __this_04.fields._version = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20);
        __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
        __this_04.fields._current = in_stack_ffffffffffffff38;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_321A1C0 *)&(__this->fields).__7__wrap4);
        (__this->fields).__7__wrap4.fields._list = (System_Collections_Generic_List_T__o *)0x0;
        (__this->fields).__7__wrap4.fields._index = 0;
        (__this->fields).__7__wrap4.fields._version = 0;
        (__this->fields).__7__wrap4.fields._current = (System_String_o *)0x0;
        lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
        if (lVar7 == 0) goto label_040b0596;
        lVar7 = *(long *)(lVar7 + 0x38);
        if (lVar7 == 0) goto label_040b059b;
        lVar7 = *(long *)(lVar7 + 0x30);
        if (lVar7 == 0) goto label_040b05a0;
        bVar13 = System_String__op_Inequality
                           (*(System_String_o **)(lVar7 + 0x18),"Racing",(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
label_040b0428:
          bVar24 = false;
        }
        else {
          lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
          if (lVar7 == 0) goto label_040b05c3;
          lVar7 = *(long *)(lVar7 + 0x38);
          if (lVar7 == 0) goto label_040b05c8;
          lVar7 = *(long *)(lVar7 + 0x30);
          if (lVar7 == 0) goto label_040b05cd;
          bVar13 = System_String__op_Inequality
                             (*(System_String_o **)(lVar7 + 0x18),"Thunderspear PVP",(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') goto label_040b0428;
          lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
          if (lVar7 == 0) goto label_040b05f0;
          lVar7 = *(long *)(lVar7 + 0x38);
          if (lVar7 == 0) goto label_040b05f5;
          lVar7 = *(long *)(lVar7 + 0x30);
          if (lVar7 == 0) goto label_040b05fa;
          bVar13 = System_String__op_Inequality
                             (*(System_String_o **)(lVar7 + 0x18),"Blade PVP",(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') goto label_040b0428;
          lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
          if (lVar7 == 0) goto label_040b05ff;
          lVar7 = *(long *)(lVar7 + 0x38);
          if (lVar7 == 0) goto label_040b0604;
          lVar7 = *(long *)(lVar7 + 0x30);
          if (lVar7 == 0) goto label_040b0609;
          bVar13 = System_String__op_Inequality
                             (*(System_String_o **)(lVar7 + 0x18),"APG PVP",(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') goto label_040b0428;
          lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
          if (lVar7 == 0) goto label_040b060e;
          lVar7 = *(long *)(lVar7 + 0x38);
          if (lVar7 == 0) goto label_040b0613;
          lVar7 = *(long *)(lVar7 + 0x30);
          if (lVar7 == 0) goto label_040b0618;
          bVar13 = System_String__op_Inequality
                             (*(System_String_o **)(lVar7 + 0x18),"AHSS PVP",(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') goto label_040b0428;
          lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
          if (lVar7 == 0) goto label_040b061d;
          lVar7 = *(long *)(lVar7 + 0x38);
          if (lVar7 == 0) goto label_040b0622;
          lVar7 = *(long *)(lVar7 + 0x30);
          if (lVar7 == 0) goto label_040b0627;
          bVar13 = System_String__op_Inequality
                             (*(System_String_o **)(lVar7 + 0x18),"None",(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') goto label_040b0428;
          pSVar6 = (__this->fields).customAssets;
          if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) goto label_040b062c;
          bVar24 = true;
          if ((pSVar6->fields)._size == 0) {
            pSVar8 = (__this->fields).objects;
            if (pSVar8 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) goto label_040b0631;
            bVar24 = (pSVar8->fields)._size != 0;
          }
        }
        if (__this == (Map_MapLoader__LoadObjectsCoroutine_d__35_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          pSVar15 = (System_String_array *)0x0;
          goto label_040b0376;
        }
        *(bool *)&(__this->fields)._gamemodeNeedsNav_5__2 = bVar24;
        if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          if (*(char *)(*(long *)(TypeInfo_MapManager + 0xb8) + 0x18) == '\0') goto label_040b0454;
label_040b0498:
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar22 = 0;
          bVar13 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
          if ((char)bVar13 != '\0') {
            lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
            if (lVar7 == 0) goto label_040b05e1;
            lVar7 = *(long *)(lVar7 + 0x50);
            if (lVar7 == 0) goto label_040b05e6;
            lVar7 = *(long *)(lVar7 + 0xa8);
            if (lVar7 == 0) goto label_040b05eb;
            bVar22 = *(byte *)(lVar7 + 0x11);
          }
        }
        else {
          if (*(char *)(*(long *)(TypeInfo_MapManager + 0xb8) + 0x18) != '\0') goto label_040b0498;
label_040b0454:
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar22 = 0;
          if (*(char *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x98) == '\0') goto label_040b0498;
        }
        (__this->fields)._count_5__3 = 0;
        if (__this == (Map_MapLoader__LoadObjectsCoroutine_d__35_o *)0x0) goto label_040b05a5;
        (__this->fields)._multiplier_5__4 =
             *(float *)(&g_data_00d1d3c0 +
                       (ulong)((bVar22 & (byte)(__this->fields)._gamemodeNeedsNav_5__2) == 0) * 4);
        pSVar8 = (__this->fields).objects;
        if (pSVar8 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_88 + 0x40),
                     (System_Collections_Generic_List_object__o *)pSVar8,MethodInfo_List_1_T_Enumerator_Map_MapScriptBaseObject_GetEnumerato);
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
          il2cpp_runtime_helper_022b4080(&(__this->fields).__7__wrap7,0);
          (__this->fields).__1__state = -4;
          goto label_040b07ff;
        }
label_040b05aa:
        il2cpp_runtime_helper_022b2c90();
        goto label_040b05af;
      }
      (__this->fields)._customAsset_5__6 = (__this->fields).__7__wrap4.fields._current;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._customAsset_5__6);
      pSVar14 = (__this->fields)._customAsset_5__6;
      if (pSVar14 == (System_String_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_040b0591:
        il2cpp_runtime_helper_022b2c90();
label_040b0596:
        il2cpp_runtime_helper_022b2c90();
label_040b059b:
        il2cpp_runtime_helper_022b2c90();
label_040b05a0:
        il2cpp_runtime_helper_022b2c90();
label_040b05a5:
        il2cpp_runtime_helper_022b2c90();
        goto label_040b05aa;
      }
      pSVar15 = System_String__Split(pSVar14,0x2c,0,(MethodInfo *)0x0);
      if (pSVar15 == (System_String_array *)0x0) goto label_040b0591;
    } while (pSVar15->max_length == 0);
    if ((int)pSVar15->max_length == 0) goto label_040b05b4;
    if (pSVar15->m_Items[0] == (System_String_o *)0x0) goto label_040b05b9;
    pSVar14 = System_String__Trim(pSVar15->m_Items[0],(MethodInfo *)0x0);
    (__this->fields)._bundle_5__7 = pSVar14;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._bundle_5__7);
    if ((int)pSVar15->max_length < 2) {
      pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      iVar23 = *(int *)(TypeInfo_MapLoader + 0xe4);
joined_r0x040b00bc:
      if (iVar23 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_02 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60);
      bundle = (__this->fields)._bundle_5__7;
      bVar13 = (__this->fields).editor;
      if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      routine = ApplicationManagers_AssetBundleManager__LoadBundle
                          (bundle,pSVar14,(uint)(byte)bVar13,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_MonoBehaviour_o *)0x0) {
        pUVar16 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680(__this_02,routine,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pUVar16;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar16);
        (__this->fields).__1__state = 1;
        goto label_040b0f19;
      }
      goto label_040b05be;
    }
label_040b0376:
    if (pSVar15->m_Items[1] != (System_String_o *)0x0) {
      pSVar14 = System_String__Trim(pSVar15->m_Items[1],(MethodInfo *)0x0);
      iVar23 = *(int *)(TypeInfo_MapLoader + 0xe4);
      goto joined_r0x040b00bc;
    }
    break;
  case 1:
    (__this->fields).__1__state = -3;
    pSVar14 = (__this->fields)._bundle_5__7;
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar13 = ApplicationManagers_AssetBundleManager__LoadedBundle(pSVar14,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
label_040affb7:
      (__this->fields)._bundle_5__7 = (System_String_o *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._bundle_5__7,0);
      (__this->fields)._customAsset_5__6 = (System_String_o *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._customAsset_5__6,0);
      goto label_040afff0;
    }
    pSVar14 = System_String__Concat_3ae5ba0("Failed to load bundle: ",(__this->fields)._customAsset_5__6,(MethodInfo *)0x0)
    ;
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_DebugConsole__Log(pSVar14,1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x78);
    pSVar14 = System_String__Concat_3ae5ba0("Failed to load bundle: ",(__this->fields)._customAsset_5__6,(MethodInfo *)0x0)
    ;
    lVar7 = MethodInfo_Void_Add;
    if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_040b05d2;
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this_01->fields)._items;
    if (pSVar5 != (System_Object_array *)0x0) {
      uVar4 = (__this_01->fields)._size;
      if (uVar4 < (uint)pSVar5->max_length) {
        (__this_01->fields)._size = uVar4 + 1;
        pSVar5->m_Items[(int)uVar4] = (Il2CppObject *)pSVar14;
        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar4,pSVar14);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_01,(Il2CppObject *)pSVar14,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      goto label_040affb7;
    }
label_040b05d7:
    il2cpp_runtime_helper_022b2c90();
    break;
  case 2:
    (__this->fields).__1__state = -4;
    iVar23 = (__this->fields)._count_5__3;
    goto label_040b07f9;
  case 3:
    (__this->fields).__1__state = -1;
    pSVar19 = (__this->fields)._operations_5__9;
    if (pSVar19 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
label_040b0d9b:
      il2cpp_runtime_helper_022b2c90();
      pSVar19 = (__this->fields)._operations_5__9;
      if (pSVar19 != (System_Collections_Generic_List_AsyncOperation__o *)0x0) goto label_040b0db5;
label_040b0f2d:
      il2cpp_runtime_helper_022b2c90();
label_040b0f32:
      il2cpp_runtime_helper_022b2c90();
label_040b0f37:
      il2cpp_runtime_helper_022b2c90();
label_040b0f3c:
      il2cpp_runtime_helper_022b2c90();
label_040b0f41:
      il2cpp_runtime_helper_022b2c90();
label_040b0f46:
      il2cpp_runtime_helper_022b2c90();
label_040b0f4b:
      il2cpp_runtime_helper_022b2c90();
label_040b0f50:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
label_040afe44:
      if ((pSVar19->fields)._size < 1) {
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined1 *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x98) = 1;
        (__this->fields)._operations_5__9 = (System_Collections_Generic_List_AsyncOperation__o *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._operations_5__9,0);
label_040b0d2a:
        if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        **(undefined1 **)(TypeInfo_MapManager + 0xb8) = 1;
        return 0;
      }
label_040b0db5:
      iVar23 = 0;
      fVar11 = 1.0;
      if (0 < (pSVar19->fields)._size) {
        do {
          pUVar20 = (UnityEngine_AsyncOperation_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar19,iVar23,MethodInfo_AsyncOperation_get_Item);
          if (pUVar20 == (UnityEngine_AsyncOperation_o *)0x0) goto label_040b0f32;
          bVar13 = UnityEngine_AsyncOperation__get_isDone(pUVar20,(MethodInfo *)0x0);
          pSVar19 = (__this->fields)._operations_5__9;
          if ((char)bVar13 == '\0') {
            if (pSVar19 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) goto label_040b0f50;
            pUVar20 = (UnityEngine_AsyncOperation_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar19,iVar23,MethodInfo_AsyncOperation_get_Item);
            if (pUVar20 == (UnityEngine_AsyncOperation_o *)0x0) goto label_040b0f46;
            fVar25 = UnityEngine_AsyncOperation__get_progress(pUVar20,(MethodInfo *)0x0);
            if (fVar25 <= fVar11) {
              fVar11 = fVar25;
            }
          }
          else {
            if (pSVar19 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) goto label_040b0f4b;
            System_Collections_Generic_List_object___RemoveAt
                      ((System_Collections_Generic_List_object__o *)pSVar19,iVar23,MethodInfo_Void_RemoveAt);
            iVar23 = iVar23 + -1;
          }
          iVar23 = iVar23 + 1;
          pSVar19 = (__this->fields)._operations_5__9;
          if (pSVar19 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) goto label_040b0f2d;
        } while (iVar23 < (pSVar19->fields)._size);
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar10 = *(UI_LoadingMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x30);
      if (pUVar10 != (UI_LoadingMenu_o *)0x0) {
        UI_LoadingMenu__UpdateLoading(pUVar10,fVar11 * 0.25 + 0.75,0,0,(MethodInfo *)0x0);
        pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar21,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar21;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar21);
        (__this->fields).__1__state = 3;
label_040b0f19:
        return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_040b0f5a:
    il2cpp_runtime_helper_022b2c90();
label_040b0f5f:
    il2cpp_runtime_helper_022b2c90();
label_040b0f64:
    il2cpp_runtime_helper_022b2c90();
label_040b0f69:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0();
label_040b0f73:
    il2cpp_runtime_helper_022b2c90();
    goto label_040b0f78;
  }
  il2cpp_runtime_helper_022b2c90();
label_040b05e1:
  il2cpp_runtime_helper_022b2c90();
label_040b05e6:
  il2cpp_runtime_helper_022b2c90();
label_040b05eb:
  il2cpp_runtime_helper_022b2c90();
label_040b05f0:
  il2cpp_runtime_helper_022b2c90();
label_040b05f5:
  il2cpp_runtime_helper_022b2c90();
label_040b05fa:
  il2cpp_runtime_helper_022b2c90();
label_040b05ff:
  il2cpp_runtime_helper_022b2c90();
label_040b0604:
  il2cpp_runtime_helper_022b2c90();
label_040b0609:
  il2cpp_runtime_helper_022b2c90();
label_040b060e:
  il2cpp_runtime_helper_022b2c90();
label_040b0613:
  il2cpp_runtime_helper_022b2c90();
label_040b0618:
  il2cpp_runtime_helper_022b2c90();
label_040b061d:
  il2cpp_runtime_helper_022b2c90();
label_040b0622:
  il2cpp_runtime_helper_022b2c90();
label_040b0627:
  il2cpp_runtime_helper_022b2c90();
label_040b062c:
  il2cpp_runtime_helper_022b2c90();
label_040b0631:
  auVar26 = il2cpp_runtime_helper_022b2c90();
label_040b069c:
  while (uVar18 = auVar26._0_8_, auVar26._8_4_ == 1) {
    plVar17 = (long *)__cxa_begin_catch(uVar18);
    lVar7 = *plVar17;
    __cxa_end_catch();
    if (lVar7 == 0) {
      return 0;
    }
    il2cpp_runtime_helper_02234b90(__this);
    uVar18 = il2cpp_runtime_helper_022fefe0(lVar7);
    if (lVar7 == 0) break;
    switch((__this->fields).__1__state) {
    case -4:
    case 2:
      if (g_data_057ac4c4 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        g_data_057ac4c4 = '\x01';
      }
      (__this->fields).__1__state = -1;
      __this_05.fields._index = (int)in_stack_ffffffffffffff30;
      __this_05.fields._version = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20);
      __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
      __this_05.fields._current = in_stack_ffffffffffffff38;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&(__this->fields).__7__wrap7);
      break;
    case -3:
    case 1:
      if (g_data_057ac4c3 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        g_data_057ac4c3 = '\x01';
      }
      (__this->fields).__1__state = -1;
      __this_06.fields._index = (int)in_stack_ffffffffffffff30;
      __this_06.fields._version = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20);
      __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
      __this_06.fields._current = in_stack_ffffffffffffff38;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_06,(MethodInfo_321A1C0 *)&(__this->fields).__7__wrap4);
    }
    auVar26 = il2cpp_runtime_helper_022fefe0(lVar7);
  }
  _Unwind_Resume(uVar18);
label_040b07ff:
  __this_07.fields._index = (int)in_stack_ffffffffffffff30;
  __this_07.fields._version = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20);
  __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
  __this_07.fields._current = in_stack_ffffffffffffff38;
  bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                     (__this_07,(MethodInfo_321A1D0 *)&(__this->fields).__7__wrap7);
  if ((char)bVar13 == '\0') goto code_r0x040b0822;
  scriptObject = (__this->fields).__7__wrap7.fields._current;
  bVar13 = (__this->fields).editor;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Map_MapLoader__LoadObject(scriptObject,(uint)(byte)bVar13,(MethodInfo *)0x0);
  iVar23 = (__this->fields)._count_5__3;
  if ((iVar23 == (iVar23 / 100) * 100) && (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 2)) {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      iVar23 = (__this->fields)._count_5__3;
    }
    pSVar8 = (__this->fields).objects;
    if (pSVar8 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) goto label_040b0f5a;
    pUVar10 = *(UI_LoadingMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x30);
    if (pUVar10 == (UI_LoadingMenu_o *)0x0) goto label_040b0f5f;
    UI_LoadingMenu__UpdateLoading
              (pUVar10,((float)iVar23 / (float)(pSVar8->fields)._size) * (__this->fields)._multiplier_5__4 +
                       0.5,0,0,(MethodInfo *)0x0);
    pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar21,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar21;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar21);
    (__this->fields).__1__state = 2;
    goto label_040b0f19;
  }
label_040b07f9:
  (__this->fields)._count_5__3 = iVar23 + 1;
  goto label_040b07ff;
code_r0x040b0822:
  if (g_data_057ac4c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057ac4c4 = '\x01';
  }
  (__this->fields).__1__state = -1;
  __this_08.fields._index = (int)in_stack_ffffffffffffff30;
  __this_08.fields._version = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20);
  __this_08.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
  __this_08.fields._current = in_stack_ffffffffffffff38;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_08,(MethodInfo_321A1C0 *)&(__this->fields).__7__wrap7);
  (__this->fields).__7__wrap7.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  (__this->fields).__7__wrap7.fields._index = 0;
  (__this->fields).__7__wrap7.fields._version = 0;
  (__this->fields).__7__wrap7.fields._current = (Map_MapScriptBaseObject_o *)0x0;
  if ((char)(__this->fields).editor == '\0') {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
        (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_040b0f73;
    __this_13 = System_Collections_Generic_Dictionary_int__object___get_Keys
                          ((System_Collections_Generic_Dictionary_int__object__o *)
                           **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Map);
    if (__this_13 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator
                (&SStack_a8,__this_13,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      auStack_88._48_8_ = SStack_a8.fields._currentKey;
      auStack_88._32_8_ = CONCAT44(SStack_a8.fields._dictionary._4_4_,SStack_a8.fields._dictionary._0_4_);
      auStack_88._40_8_ = CONCAT44(SStack_a8.fields._version,SStack_a8.fields._index);
      while (__this_09.fields._index = (int)in_stack_ffffffffffffff30,
            __this_09.fields._version = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20),
            __this_09.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff28,
            __this_09.fields._currentKey = in_stack_ffffffffffffff38,
            bVar13 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext
                               (__this_09,(MethodInfo_3244230 *)(auStack_88 + 0x20)), (char)bVar13 != '\0') {
        uVar12 = auStack_88._48_4_;
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if ((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
            (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_040b0f41;
        mapObject = (Map_MapObject_o *)
                    System_Collections_Generic_Dictionary_int__object___get_Item
                              ((System_Collections_Generic_Dictionary_int__object__o *)
                               **(undefined8 **)(TypeInfo_MapLoader + 0xb8),uVar12,MethodInfo_MapObject_get_Item);
        Map_MapLoader__SetParent_3fadd50(mapObject,(MethodInfo *)0x0);
      }
      __this_10.fields._index = (int)in_stack_ffffffffffffff30;
      __this_10.fields._version = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20);
      __this_10.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff28;
      __this_10.fields._currentKey = in_stack_ffffffffffffff38;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
                (__this_10,(MethodInfo_3244220 *)(auStack_88 + 0x20));
      goto label_040b087c;
    }
label_040b0f78:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0();
label_040b0f82:
    il2cpp_runtime_helper_022b2c90();
label_040b0f87:
    il2cpp_runtime_helper_022b2c90();
label_040b0f8c:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
label_040b087c:
    if ((char)(__this->fields).editor != '\0') {
label_040b089a:
      if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        cVar3 = *(char *)(*(long *)(TypeInfo_MapManager + 0xb8) + 0x18);
      }
      else {
        cVar3 = *(char *)(*(long *)(TypeInfo_MapManager + 0xb8) + 0x18);
      }
      if (cVar3 == '\0') {
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (*(char *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x98) != '\0') goto label_040b0d2a;
      }
      UnityEngine_AI_NavMesh__RemoveAllNavMeshData((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined1 *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x98) = 0;
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar22 = 0;
      bVar13 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
label_040b0b7e:
        if ((bVar22 & (byte)(__this->fields)._gamemodeNeedsNav_5__2) == 0) goto label_040b0d2a;
        if (__this_00 == (Map_MapLoader_o *)0x0) goto label_040b0f64;
        Map_MapLoader__ResetSources(__this_00,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_14 = Utility_Util__GetAllTitanAgentIds((MethodInfo *)0x0);
        pSVar19 = (System_Collections_Generic_List_AsyncOperation__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AsyncOperation);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)pSVar19,MethodInfo_List_1_UnityEngine_AsyncOperation);
        (__this->fields)._operations_5__9 = pSVar19;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._operations_5__9,pSVar19);
        if (__this_14 != (System_Collections_Generic_List_int__o *)0x0) {
          System_Collections_Generic_List_int___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&SStack_a8,__this_14,MethodInfo_List_1_T_Enumerator_System_Int32_GetEnumerator);
          auStack_88._16_8_ = SStack_a8.fields._currentKey;
          auStack_88._0_8_ = CONCAT44(SStack_a8.fields._dictionary._4_4_,SStack_a8.fields._dictionary._0_4_);
          auStack_88._8_8_ = CONCAT44(SStack_a8.fields._version,SStack_a8.fields._index);
          while (__this_11.fields._index = (int)in_stack_ffffffffffffff30,
                __this_11.fields._version = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20),
                __this_11.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28,
                __this_11.fields._16_8_ = in_stack_ffffffffffffff38,
                bVar13 = System_Collections_Generic_List_Enumerator_int___MoveNext
                                   (__this_11,(MethodInfo_3215510 *)auStack_88), (char)bVar13 != '\0') {
            uVar12 = auStack_88._16_4_;
            if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar7 = *(long *)(TypeInfo_MapLoader + 0xb8);
            in_stack_ffffffffffffff38 = *(Il2CppObject **)(lVar7 + 0xb8);
            pUVar2 = (UnityEngine_Bounds_Fields *)(lVar7 + 0xa8);
            in_stack_ffffffffffffff28._0_4_ = (pUVar2->m_Center).fields.x;
            in_stack_ffffffffffffff28._4_4_ = (pUVar2->m_Center).fields.y;
            in_stack_ffffffffffffff30 = *(undefined8 *)(lVar7 + 0xb0);
            pUVar20 = Map_MapLoader__CreateNavMeshSurfaceAsyncOperation
                                (__this_00,uVar12,
                                 *(System_Collections_Generic_List_NavMeshBuildSource__o **)(lVar7 + 0xa0),
                                 (UnityEngine_Bounds_o)*pUVar2,(MethodInfo *)0x0);
            lVar7 = MethodInfo_Void_Add;
            pSVar19 = (__this->fields)._operations_5__9;
            if (pSVar19 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) goto label_040b0f37;
            piVar1 = &(pSVar19->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar9 = (pSVar19->fields)._items;
            if (pUVar9 == (UnityEngine_AsyncOperation_array *)0x0) goto label_040b0f3c;
            uVar4 = (pSVar19->fields)._size;
            if (uVar4 < (uint)pUVar9->max_length) {
              (pSVar19->fields)._size = uVar4 + 1;
              pUVar9->m_Items[(int)uVar4] = pUVar20;
              il2cpp_runtime_helper_022b4080(pUVar9->m_Items + (int)uVar4,pUVar20);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar19,(Il2CppObject *)pUVar20,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
          }
          __this_12.fields._index = (int)in_stack_ffffffffffffff30;
          __this_12.fields._version = (int)((ulong)in_stack_ffffffffffffff30 >> 0x20);
          __this_12.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
          __this_12.fields._16_8_ = in_stack_ffffffffffffff38;
          System_Collections_Generic_List_Enumerator_int___Dispose(__this_12,(MethodInfo_3215500 *)auStack_88)
          ;
          pSVar19 = (__this->fields)._operations_5__9;
          if (pSVar19 != (System_Collections_Generic_List_AsyncOperation__o *)0x0) goto label_040afe44;
          goto label_040b0d9b;
        }
        goto label_040b0f69;
      }
      lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      if (lVar7 == 0) goto label_040b0f82;
      lVar7 = *(long *)(lVar7 + 0x50);
      if (lVar7 == 0) goto label_040b0f87;
      lVar7 = *(long *)(lVar7 + 0xa8);
      if (lVar7 != 0) {
        bVar22 = *(byte *)(lVar7 + 0x11);
        goto label_040b0b7e;
      }
      goto label_040b0f8c;
    }
    if (__this_00 != (Map_MapLoader_o *)0x0) {
      Map_MapLoader__Batch(__this_00,(MethodInfo *)0x0);
      goto label_040b089a;
    }
  }
  auVar26 = il2cpp_runtime_helper_022b2c90();
  goto label_040b069c;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__35$$<>m__Finally1
// il2cpp: void Map_MapLoader__LoadObjectsCoroutine_d__35____m__Finally1 (Map_MapLoader__LoadObjectsCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x40b1120

void Map_MapLoader__LoadObjectsCoroutine_d__35____m__Finally1
               (Map_MapLoader__LoadObjectsCoroutine_d__35_o *__this,MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (g_data_057ac4c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057ac4c3 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_321A1C0 *)&(__this->fields).__7__wrap4);
  return;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__35$$<>m__Finally2
// il2cpp: void Map_MapLoader__LoadObjectsCoroutine_d__35____m__Finally2 (Map_MapLoader__LoadObjectsCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x40b1160

void Map_MapLoader__LoadObjectsCoroutine_d__35____m__Finally2
               (Map_MapLoader__LoadObjectsCoroutine_d__35_o *__this,MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (g_data_057ac4c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057ac4c4 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_321A1C0 *)&(__this->fields).__7__wrap7);
  return;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__35$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Map_MapLoader__LoadObjectsCoroutine_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current (Map_MapLoader__LoadObjectsCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x40b11a0

Il2CppObject *
Map_MapLoader__LoadObjectsCoroutine_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Map_MapLoader__LoadObjectsCoroutine_d__35_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__35$$System.Collections.IEnumerator.Reset
// il2cpp: void Map_MapLoader__LoadObjectsCoroutine_d__35__System_Collections_IEnumerator_Reset (Map_MapLoader__LoadObjectsCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x40b11b0

void Map_MapLoader__LoadObjectsCoroutine_d__35__System_Collections_IEnumerator_Reset
               (Map_MapLoader__LoadObjectsCoroutine_d__35_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__35$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Map_MapLoader__LoadObjectsCoroutine_d__35__System_Collections_IEnumerator_get_Current (Map_MapLoader__LoadObjectsCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x40b11f0

Il2CppObject *
Map_MapLoader__LoadObjectsCoroutine_d__35__System_Collections_IEnumerator_get_Current
          (Map_MapLoader__LoadObjectsCoroutine_d__35_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.MapLoader.<UpdateAllNavMeshes>d__42$$MoveNext
// il2cpp: void Map_MapLoader__UpdateAllNavMeshes_d__42__MoveNext (Map_MapLoader__UpdateAllNavMeshes_d__42_o __this, const MethodInfo* method);
// 0x40b1200

void Map_MapLoader__UpdateAllNavMeshes_d__42__MoveNext
               (Map_MapLoader__UpdateAllNavMeshes_d__42_o __this,MethodInfo *method)

{
  Il2CppClass *__this_00;
  MethodInfo *method_00;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_01;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_02;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_03;
  char cVar1;
  bool_conflict bVar2;
  System_Threading_Tasks_Task_o *__this_04;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  System_Threading_Tasks_Task_TResult__o *unaff_RBX;
  undefined1 auVar7 [12];
  System_Runtime_CompilerServices_IAsyncStateMachine_o *in_stack_ffffffffffffffd8;
  System_Runtime_CompilerServices_TaskAwaiter_o SVar8;
  
  if (g_data_057ac4c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitUnsafeOnCompleted_TaskAwaiter_MapLoader_Update);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0();
    g_data_057ac4c5 = '\x01';
  }
  SVar8.fields.m_task =
       (System_Runtime_CompilerServices_TaskAwaiter_Fields)(System_Threading_Tasks_Task_o *)0x0;
  if (*(int *)&method->methodPointer == 0) {
    SVar8.fields.m_task = (System_Runtime_CompilerServices_TaskAwaiter_Fields)method->return_type;
    method->return_type = (Il2CppType *)0x0;
    *(undefined4 *)&method->methodPointer = 0xffffffff;
  }
  else {
    __this_00 = method->klass;
    UnityEngine_AI_NavMesh__RemoveAllNavMeshData((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined1 *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x98) = 0;
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if ((char)bVar2 == '\0') goto label_040b1392;
    if (__this_00 == (Il2CppClass *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_040b13ce:
      auVar7 = il2cpp_runtime_helper_022b2c90();
      if (auVar7._8_4_ != 1) {
        _Unwind_Resume(auVar7._0_8_);
      }
      puVar3 = (undefined8 *)__cxa_begin_catch(auVar7._0_8_);
      uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      cVar1 = il2cpp_runtime_helper_0233e000(uVar4,*(undefined8 *)*puVar3);
      if (cVar1 != '\0') {
        method_00 = (MethodInfo *)*puVar3;
        __cxa_end_catch();
        *(undefined4 *)&method->methodPointer = 0xfffffffe;
        lVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
        if (*(int *)(lVar5 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0(lVar5);
        }
        __this_03.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
             (System_Action_o *)SVar8.fields.m_task;
        __this_03.fields.m_builder.fields.m_coreState.fields.m_stateMachine = in_stack_ffffffffffffffd8;
        __this_03.fields.m_builder.fields.m_task = unaff_RBX;
        System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetException
                  (__this_03,(System_Exception_o *)&method->virtualMethodPointer,method_00);
        return;
      }
      puVar6 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar6 = *puVar3;
      __cxa_throw(puVar6,&PTR_PTR_05215060,0);
    }
    __this_04 = Map_MapLoader__GenerateNavMesh((Map_MapLoader_o *)__this_00,(MethodInfo *)0x0);
    if (__this_04 == (System_Threading_Tasks_Task_o *)0x0) goto label_040b13ce;
    SVar8 = System_Threading_Tasks_Task__GetAwaiter(__this_04,(MethodInfo *)0x0);
    bVar2 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted
                      ((System_Runtime_CompilerServices_TaskAwaiter_o)&stack0xffffffffffffffe0,
                       (MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      *(undefined4 *)&method->methodPointer = 0;
      method->return_type = (Il2CppType *)SVar8.fields.m_task;
      il2cpp_runtime_helper_022b4080(&method->return_type,0);
      if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
           (System_Action_o *)SVar8.fields.m_task;
      __this_01.fields.m_builder.fields.m_coreState.fields.m_stateMachine = in_stack_ffffffffffffffd8;
      __this_01.fields.m_builder.fields.m_task = unaff_RBX;
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted_TaskAwaiter__MapLoader__UpdateAllNavMeshes_d__42_
                (__this_01,(System_Runtime_CompilerServices_TaskAwaiter_o *)&method->virtualMethodPointer,
                 (Map_MapLoader__UpdateAllNavMeshes_d__42_o *)&stack0xffffffffffffffe0,
                 (MethodInfo_24B08C0 *)method);
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult
            ((System_Runtime_CompilerServices_TaskAwaiter_o)&stack0xffffffffffffffe0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x98) = 1;
label_040b1392:
  *(undefined4 *)&method->methodPointer = 0xfffffffe;
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
       (System_Action_o *)SVar8.fields.m_task;
  __this_02.fields.m_builder.fields.m_coreState.fields.m_stateMachine = in_stack_ffffffffffffffd8;
  __this_02.fields.m_builder.fields.m_task = unaff_RBX;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult
            (__this_02,(MethodInfo *)&method->virtualMethodPointer);
  return;
}


// Map.MapLoader.<UpdateAllNavMeshes>d__42$$SetStateMachine
// il2cpp: void Map_MapLoader__UpdateAllNavMeshes_d__42__SetStateMachine (Map_MapLoader__UpdateAllNavMeshes_d__42_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x40b14e0

void Map_MapLoader__UpdateAllNavMeshes_d__42__SetStateMachine
               (Map_MapLoader__UpdateAllNavMeshes_d__42_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  if (g_data_057ac4c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
    g_data_057ac4c6 = '\x01';
  }
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetStateMachine
            ((System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o)__this.fields._0_24_,
             (System_Runtime_CompilerServices_IAsyncStateMachine_o *)&stateMachine->monitor,method);
  return;
}


// Map.MapLoader.<UpdateNavMesh>d__41$$MoveNext
// il2cpp: void Map_MapLoader__UpdateNavMesh_d__41__MoveNext (Map_MapLoader__UpdateNavMesh_d__41_o __this, const MethodInfo* method);
// 0x40b1540

void Map_MapLoader__UpdateNavMesh_d__41__MoveNext
               (Map_MapLoader__UpdateNavMesh_d__41_o __this,MethodInfo *method)

{
  Map_MapLoader_o *__this_00;
  MethodInfo *method_00;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_01;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_02;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_03;
  char cVar1;
  bool_conflict bVar2;
  System_Threading_Tasks_Task_o *__this_04;
  System_Runtime_CompilerServices_TaskAwaiter_o SVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  System_Action_o *unaff_RBX;
  System_Action_o *unaff_R14;
  undefined1 auVar8 [12];
  System_Runtime_CompilerServices_IAsyncStateMachine_o *pSVar9;
  
  if (g_data_057ac4c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitUnsafeOnCompleted_TaskAwaiter_MapLoader_Update);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac4c7 = '\x01';
  }
  pSVar9 = (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  if (*(int *)&method->methodPointer != 0) {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(Map_MapLoader_o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60);
    if (__this_00 == (Map_MapLoader_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      __this_04 = Map_MapLoader__UpdateAllNavMeshes(__this_00,(MethodInfo *)0x0);
      if (__this_04 != (System_Threading_Tasks_Task_o *)0x0) {
        SVar3 = System_Threading_Tasks_Task__GetAwaiter(__this_04,(MethodInfo *)0x0);
        bVar2 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted
                          ((System_Runtime_CompilerServices_TaskAwaiter_o)&stack0xffffffffffffffe8,
                           (MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          *(undefined4 *)&method->methodPointer = 0;
          method->klass = (Il2CppClass *)SVar3.fields.m_task;
          il2cpp_runtime_helper_022b4080(&method->klass,0);
          if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_01.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction = unaff_RBX;
          __this_01.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
               (System_Runtime_CompilerServices_IAsyncStateMachine_o *)SVar3.fields.m_task;
          __this_01.fields.m_builder.fields.m_task = (System_Threading_Tasks_Task_TResult__o *)unaff_R14;
          System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted_TaskAwaiter__MapLoader__UpdateNavMesh_d__41_
                    (__this_01,(System_Runtime_CompilerServices_TaskAwaiter_o *)&method->virtualMethodPointer,
                     (Map_MapLoader__UpdateNavMesh_d__41_o *)&stack0xffffffffffffffe8,
                     (MethodInfo_24B0950 *)method);
          return;
        }
        goto label_040b164f;
      }
    }
    auVar8 = il2cpp_runtime_helper_022b2c90();
    if (auVar8._8_4_ != 1) {
      _Unwind_Resume(auVar8._0_8_);
    }
    puVar4 = (undefined8 *)__cxa_begin_catch(auVar8._0_8_);
    uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    cVar1 = il2cpp_runtime_helper_0233e000(uVar5,*(undefined8 *)*puVar4);
    if (cVar1 != '\0') {
      method_00 = (MethodInfo *)*puVar4;
      __cxa_end_catch();
      *(undefined4 *)&method->methodPointer = 0xfffffffe;
      lVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar6);
      }
      __this_03.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction = unaff_RBX;
      __this_03.fields.m_builder.fields.m_coreState.fields.m_stateMachine = pSVar9;
      __this_03.fields.m_builder.fields.m_task = (System_Threading_Tasks_Task_TResult__o *)unaff_R14;
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetException
                (__this_03,(System_Exception_o *)&method->virtualMethodPointer,method_00);
      return;
    }
    puVar7 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar7 = *puVar4;
    __cxa_throw(puVar7,&PTR_PTR_05215060,0);
  }
  SVar3.fields.m_task = (System_Runtime_CompilerServices_TaskAwaiter_Fields)method->klass;
  method->klass = (Il2CppClass *)0x0;
  *(undefined4 *)&method->methodPointer = 0xffffffff;
label_040b164f:
  System_Runtime_CompilerServices_TaskAwaiter__GetResult
            ((System_Runtime_CompilerServices_TaskAwaiter_o)&stack0xffffffffffffffe8,(MethodInfo *)0x0);
  *(undefined4 *)&method->methodPointer = 0xfffffffe;
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction = unaff_RBX;
  __this_02.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)SVar3.fields.m_task;
  __this_02.fields.m_builder.fields.m_task = (System_Threading_Tasks_Task_TResult__o *)unaff_R14;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult
            (__this_02,(MethodInfo *)&method->virtualMethodPointer);
  return;
}


// Map.MapLoader.<UpdateNavMesh>d__41$$SetStateMachine
// il2cpp: void Map_MapLoader__UpdateNavMesh_d__41__SetStateMachine (Map_MapLoader__UpdateNavMesh_d__41_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x40b17a0

void Map_MapLoader__UpdateNavMesh_d__41__SetStateMachine
               (Map_MapLoader__UpdateNavMesh_d__41_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  if (g_data_057ac4c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
    g_data_057ac4c8 = '\x01';
  }
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetStateMachine
            ((System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o)__this.fields._0_24_,
             (System_Runtime_CompilerServices_IAsyncStateMachine_o *)&stateMachine->monitor,method);
  return;
}


// Map.MapLoader$$Init
// il2cpp: void Map_MapLoader__Init (const MethodInfo* method);
// 0x40a4cb0

void Map_MapLoader__Init(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UnityEngine_MonoBehaviour_o *__this;
  Il2CppObject *pIVar3;
  Events_OnPreLoadScene_o *value;
  Map_MapScriptBasicMaterial_o *__this_00;
  Utility_Color255_o *__this_01;
  
  if (g_data_057ac498 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapLoader_CreateSingleton_MapLoader);
    il2cpp_runtime_helper_023445d0(&"Transparent");
    g_data_057ac498 = '\x01';
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar3 = Utility_SingletonFactory__CreateSingleton_object_
                     (*(Il2CppObject **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x60),MethodInfo_MapLoader_CreateSingleton_MapLoader);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(Il2CppObject **)(lVar2 + 0x60) = pIVar3;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x60);
  value = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
  Events_OnPreLoadScene___ctor();
  Events_EventManager__add_OnPreLoadScene(value,(MethodInfo *)0x0);
  __this_00 = (Map_MapScriptBasicMaterial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
  Map_MapScriptBasicMaterial___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Map_MapScriptBasicMaterial_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac499 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
      g_data_057ac499 = '\x01';
      iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
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
      il2cpp_runtime_helper_022b4080(lVar2 + 0x88,0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ac49a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
      g_data_057ac49a = '\x01';
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x68) = *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x68) + 1;
    return;
  }
  (__this_00->fields).Shader = "Transparent";
  il2cpp_runtime_helper_022b4080(&__this_00->fields);
  __this_01 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor(__this_01,0x7e,0xff,0xff,0x50,(MethodInfo *)0x0);
  (__this_00->fields).Color = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).Color,__this_01);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(Map_MapScriptBasicMaterial_o **)(lVar2 + 0x70) = __this_00;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x70,__this_00);
  return;
}


// Map.MapLoader$$OnPreLoadScene
// il2cpp: void Map_MapLoader__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x40a4e40

void Map_MapLoader__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  int iVar1;
  UnityEngine_MonoBehaviour_o *__this;
  long lVar2;
  
  if (g_data_057ac499 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac499 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
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
    il2cpp_runtime_helper_022b4080(lVar2 + 0x88,0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac49a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac49a = '\x01';
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x68) = *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x68) + 1;
  return;
}


// Map.MapLoader$$GetNextObjectId
// il2cpp: int32_t Map_MapLoader__GetNextObjectId (const MethodInfo* method);
// 0x40a4ef0

int32_t Map_MapLoader__GetNextObjectId(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ac49a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac49a = '\x01';
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar1 = *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x68) + 1;
  *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x68) = iVar1;
  return iVar1;
}


// Map.MapLoader$$StartLoadObjects
// il2cpp: void Map_MapLoader__StartLoadObjects (System_Collections_Generic_List_string__o* customAssets, System_Collections_Generic_List_MapScriptBaseObject__o* objects, Map_MapScriptOptions_o* options, Settings_WeatherSet_o* weather, bool editor, const MethodInfo* method);
// 0x40a4f40

void Map_MapLoader__StartLoadObjects
               (System_Collections_Generic_List_string__o *customAssets,
               System_Collections_Generic_List_MapScriptBaseObject__o *objects,Map_MapScriptOptions_o *options
               ,Settings_WeatherSet_o *weather,bool_conflict editor,MethodInfo *method)

{
  int *piVar1;
  Map_MapScriptOptions_Fields *pMVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  Map_MapLoader_o *__this;
  System_Object_array *pSVar6;
  Map_MapScriptBaseObject_o *pMVar7;
  System_String_o *pSVar8;
  System_String_o *physicsMaterial;
  void *pvVar9;
  long lVar10;
  int32_t *piVar11;
  Il2CppType *pIVar12;
  bool_conflict bVar13;
  int32_t iVar14;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar15;
  System_Collections_IEnumerator_o *routine;
  Il2CppClass *pIVar16;
  Il2CppObject *pIVar17;
  Il2CppClass *pIVar18;
  Il2CppClass *pIVar19;
  UnityEngine_Transform_o *pUVar20;
  Map_MapObject_o *__this_00;
  System_String_o *pSVar21;
  System_Collections_Generic_HashSet_int__o *pSVar22;
  Map_MapLoader__LoadObjectsCoroutine_d__35_c *pMVar23;
  UnityEngine_GameObject_o *pUVar24;
  System_Collections_Generic_Dictionary_int__object__o *pSVar25;
  UnityEngine_Transform_o *p;
  System_Collections_Generic_Dictionary_object__object__o *pSVar26;
  byte bVar27;
  int iVar28;
  Map_MapScriptOptions_o *pMVar29;
  void *extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar30;
  MethodInfo *pMVar31;
  undefined8 extraout_RDX_02;
  undefined1 uVar32;
  Settings_WeatherSet_o *pSVar33;
  MethodInfo *pMVar34;
  System_Collections_Generic_Dictionary_object__object__o *pSVar35;
  Il2CppClass *pIVar36;
  undefined4 in_register_00000084;
  undefined1 uVar37;
  float fVar38;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar39;
  UnityEngine_Vector3_o value_00;
  char local_3c;
  
  pMVar34 = (MethodInfo *)CONCAT44(in_register_00000084,editor);
  pSVar33 = (Settings_WeatherSet_o *)objects;
  if (g_data_057ac49b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac49b = '\x01';
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) != 0) goto label_040a4f82;
label_040a5056:
    il2cpp_runtime_helper_02337ed0();
    pSVar15 = TypeInfo_MapLoader[2].fields._entries;
    pMVar29 = *(Map_MapScriptOptions_o **)((long)pSVar15->m_Items + 0x58);
    pSVar35 = TypeInfo_MapLoader;
  }
  else {
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) goto label_040a5056;
label_040a4f82:
    pSVar15 = TypeInfo_MapLoader[2].fields._entries;
    pMVar29 = *(Map_MapScriptOptions_o **)((long)pSVar15->m_Items + 0x58);
    pSVar35 = TypeInfo_MapLoader;
  }
  TypeInfo_MapLoader = pSVar35;
  if (pMVar29 != (Map_MapScriptOptions_o *)0x0) {
    piVar1 = (int *)((long)&(pMVar29->fields).Description + 4);
    *piVar1 = *piVar1 + 1;
    iVar14 = *(int32_t *)&(pMVar29->fields).Description;
    *(undefined4 *)&(pMVar29->fields).Description = 0;
    if (0 < iVar14) {
      pMVar2 = &pMVar29->fields;
      pSVar33 = (Settings_WeatherSet_o *)0x0;
      pMVar29 = (Map_MapScriptOptions_o *)0x0;
      System_Array__Clear((System_Array_o *)pMVar2->EditorVersion,0,iVar14,(MethodInfo *)0x0);
      pSVar15 = TypeInfo_MapLoader[2].fields._entries;
    }
    pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)((long)pSVar15->m_Items + 0x38);
    pSVar35 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
    if (pSVar26 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar33 = MethodInfo_Void_Clear;
      System_Collections_Generic_Dictionary_object__object___Clear(pSVar26,(MethodInfo_3104FC0 *)MethodInfo_Void_Clear)
      ;
      pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                  ((long)(TypeInfo_MapLoader[2].fields._entries)->m_Items + 0x30))->fields;
      pSVar35 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
      if (pSVar26 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar33 = MethodInfo_Void_Clear;
        System_Collections_Generic_Dictionary_object__object___Clear
                  (pSVar26,(MethodInfo_3104FC0 *)MethodInfo_Void_Clear);
        pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   ((long)(TypeInfo_MapLoader[2].fields._entries)->m_Items + 0x28);
        pSVar35 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
        if (pSVar26 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pSVar33 = MethodInfo_Void_Clear;
          System_Collections_Generic_Dictionary_object__object___Clear
                    (pSVar26,(MethodInfo_3104FC0 *)MethodInfo_Void_Clear);
          pSVar25 = *(void **)((long)&(TypeInfo_MapLoader[2].fields._entries)->obj + 8);
          pSVar35 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
          if (pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            pSVar33 = MethodInfo_Void_Clear;
            System_Collections_Generic_Dictionary_int__object___Clear
                      (pSVar25,(MethodInfo_3086EF0 *)MethodInfo_Void_Clear);
            pSVar25 = *(System_Collections_Generic_Dictionary_int__object__o **)
                       &(TypeInfo_MapLoader[2].fields._entries)->obj;
            pSVar35 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
            if (pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              pSVar33 = MethodInfo_Void_Clear;
              System_Collections_Generic_Dictionary_int__object___Clear
                        (pSVar25,(MethodInfo_3086EF0 *)MethodInfo_Void_Clear);
              pSVar35 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (TypeInfo_MapLoader[2].fields._entries)->bounds;
              if (pSVar35 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                pSVar33 = MethodInfo_Void_Clear;
                System_Collections_Generic_Dictionary_object__object___Clear
                          (pSVar35,(MethodInfo_3104FC0 *)MethodInfo_Void_Clear);
                pSVar15 = TypeInfo_MapLoader[2].fields._entries;
                pIVar17 = *(Il2CppObject **)((long)pSVar15->m_Items + 8);
                pMVar29 = (Map_MapScriptOptions_o *)0x0;
                if (pIVar17 != (Il2CppObject *)0x0) {
                  *(int *)((long)(pIVar17 + 1) + 0xcU) = *(int *)((long)(pIVar17 + 1) + 0xcU) + 1;
                  iVar14 = *(int32_t *)((long)(pIVar17 + 1) + 8);
                  *(undefined4 *)((long)(pIVar17 + 1) + 8) = 0;
                  if (0 < iVar14) {
                    pSVar35 = (System_Collections_Generic_Dictionary_object__object__o *)pIVar17[1].klass;
                    pSVar33 = (Settings_WeatherSet_o *)0x0;
                    System_Array__Clear((System_Array_o *)pSVar35,0,iVar14,(MethodInfo *)0x0);
                    pSVar15 = TypeInfo_MapLoader[2].fields._entries;
                  }
                  pIVar17 = *(Il2CppObject **)((long)pSVar15->m_Items + 0x10);
                  pMVar29 = (Map_MapScriptOptions_o *)0x0;
                  if (pIVar17 != (Il2CppObject *)0x0) {
                    *(int *)((long)(pIVar17 + 1) + 0xcU) = *(int *)((long)(pIVar17 + 1) + 0xcU) + 1;
                    iVar14 = *(int32_t *)((long)(pIVar17 + 1) + 8);
                    *(undefined4 *)((long)(pIVar17 + 1) + 8) = 0;
                    if (0 < iVar14) {
                      pSVar35 = (System_Collections_Generic_Dictionary_object__object__o *)pIVar17[1].klass;
                      pSVar33 = (Settings_WeatherSet_o *)0x0;
                      System_Array__Clear((System_Array_o *)pSVar35,0,iVar14,(MethodInfo *)0x0);
                      pSVar15 = TypeInfo_MapLoader[2].fields._entries;
                    }
                    pMVar29 = *(Map_MapScriptOptions_o **)
                               &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                                ((long)pSVar15->m_Items + 0x18))->fields;
                    if (pMVar29 != (Map_MapScriptOptions_o *)0x0) {
                      piVar1 = (int *)((long)&(pMVar29->fields).Description + 4);
                      *piVar1 = *piVar1 + 1;
                      iVar14 = *(int32_t *)&(pMVar29->fields).Description;
                      *(undefined4 *)&(pMVar29->fields).Description = 0;
                      if (0 < iVar14) {
                        pMVar2 = &pMVar29->fields;
                        pSVar33 = (Settings_WeatherSet_o *)0x0;
                        pMVar29 = (Map_MapScriptOptions_o *)0x0;
                        System_Array__Clear((System_Array_o *)pMVar2->EditorVersion,0,iVar14,(MethodInfo *)0x0
                                           );
                        pSVar15 = TypeInfo_MapLoader[2].fields._entries;
                      }
                      pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                 ((long)pSVar15->m_Items + 0x20);
                      pSVar35 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
                      if (pSVar26 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                        pSVar33 = MethodInfo_Void_Clear;
                        System_Collections_Generic_Dictionary_object__object___Clear
                                  (pSVar26,(MethodInfo_3104FC0 *)MethodInfo_Void_Clear);
                        pSVar26 = (System_Collections_Generic_Dictionary_object__object__o *)
                                  (TypeInfo_MapLoader[2].fields._entries)->max_length;
                        pSVar35 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
                        if (pSVar26 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                          pSVar33 = MethodInfo_Void_Clear;
                          System_Collections_Generic_Dictionary_object__object___Clear
                                    (pSVar26,(MethodInfo_3104FC0 *)MethodInfo_Void_Clear);
                          pSVar26 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                     &(TypeInfo_MapLoader[2].fields._entries)->m_Items[0].fields;
                          pSVar35 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
                          if (pSVar26 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                            System_Collections_Generic_Dictionary_object__object___Clear(pSVar26,MethodInfo_Void_Clear)
                            ;
                            pSVar35 = TypeInfo_MapLoader;
                            pSVar15 = TypeInfo_MapLoader[2].fields._entries;
                            (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                             ((long)pSVar15->m_Items + 0x48))->fields).hashCode = 1;
                            uVar37 = 0;
                            local_3c = (char)editor;
                            if ((options != (Map_MapScriptOptions_o *)0x0) && (local_3c == '\0')) {
                              uVar37 = (undefined1)(options->fields).HasWeather;
                            }
                            pMVar29 = options;
                            if (*(int *)((long)&pSVar35[2].fields._values + 4) == 0) {
                              il2cpp_runtime_helper_02337ed0(pSVar35);
                              pSVar15 = TypeInfo_MapLoader[2].fields._entries;
                              pMVar29 = options;
                            }
                            *(undefined1 *)
                             &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                              ((long)pSVar15->m_Items + 0x60))->fields = uVar37;
                            *(Settings_WeatherSet_o **)((long)pSVar15->m_Items + 0x68) = weather;
                            pSVar35 = (System_Collections_Generic_Dictionary_object__object__o *)
                                      ((long)pSVar15->m_Items + 0x68);
                            il2cpp_runtime_helper_022b4080();
                            __this = *(Map_MapLoader_o **)
                                      ((long)(TypeInfo_MapLoader[2].fields._entries)->m_Items + 0x40);
                            pSVar33 = weather;
                            if (__this != (Map_MapLoader_o *)0x0) {
                              routine = Map_MapLoader__LoadObjectsCoroutine
                                                  (__this,customAssets,objects,editor & 0xff,pMVar34);
                              UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
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
  uVar37 = SUB81(pMVar29,0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadObjectsCoroutine_d__35);
    g_data_057ac4a2 = '\x01';
  }
  pIVar16 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadObjectsCoroutine_d__35);
  uVar32 = 0;
  pIVar36 = pIVar16;
  Map_MapLoader__LoadObjectsCoroutine_d__35___ctor
            ((Map_MapLoader__LoadObjectsCoroutine_d__35_o *)pIVar16,0,(MethodInfo *)0x0);
  if (pIVar16 != (Il2CppClass *)0x0) {
    *(System_Collections_Generic_Dictionary_object__object__o **)&(pIVar16->_1).this_arg.bits = pSVar35;
    il2cpp_runtime_helper_022b4080(&(pIVar16->_1).this_arg.bits,pSVar35);
    (pIVar16->_1).byval_arg.data = pSVar33;
    il2cpp_runtime_helper_022b4080(&(pIVar16->_1).byval_arg,pSVar33);
    (pIVar16->_1).this_arg.data = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(pIVar16->_1).this_arg,extraout_RDX);
    *(undefined1 *)&(pIVar16->_1).byval_arg.bits = uVar37;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac49c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLight);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac49c = '\x01';
  }
  pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_MapLight);
  System_Object___ctor(pIVar17,(MethodInfo *)0x0);
  pIVar16 = (Il2CppClass *)(pIVar17 + 1);
  pIVar17[1].klass = pIVar36;
  pIVar18 = pIVar36;
  il2cpp_runtime_helper_022b4080();
  if (pIVar36 != (Il2CppClass *)0x0) {
    fVar38 = UnityEngine_Light__get_intensity((UnityEngine_Light_o *)pIVar36,(MethodInfo *)0x0);
    *(float *)&pIVar17[1].monitor = fVar38;
    pIVar18 = (Il2CppClass *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar36,(MethodInfo *)0x0);
    pIVar17[2].klass = pIVar18;
    il2cpp_runtime_helper_022b4080(pIVar17 + 2);
    *(undefined1 *)&pIVar17[2].monitor = uVar32;
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar10 = MethodInfo_Void_Add;
    pIVar16 = *(Il2CppClass **)((long)(TypeInfo_MapLoader[2].fields._entries)->m_Items + 0x10);
    if (pIVar16 != (Il2CppClass *)0x0) {
      piVar11 = (int32_t *)((long)&(pIVar16->_1).namespaze + 4);
      *piVar11 = *piVar11 + 1;
      pSVar6 = ((System_Collections_Generic_List_object__Fields *)&(pIVar16->_1).name)->_items;
      if (pSVar6 != (System_Object_array *)0x0) {
        uVar4 = *(uint *)&(pIVar16->_1).namespaze;
        if (uVar4 < (uint)pSVar6->max_length) {
          *(uint *)&(pIVar16->_1).namespaze = uVar4 + 1;
          pSVar6->m_Items[(int)uVar4] = pIVar17;
          il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar4,pIVar17);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pIVar16,pIVar17,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar36 = pIVar16;
  if (g_data_057ac49d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    pIVar36 = (Il2CppClass *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac49d = '\x01';
  }
  if (pIVar16 != (Il2CppClass *)0x0) {
    pIVar18 = (Il2CppClass *)0x0;
    pIVar19 = (Il2CppClass *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar16,(MethodInfo *)0x0);
    pIVar36 = pIVar16;
    while (pIVar16 = pIVar19, pIVar16 != (Il2CppClass *)0x0) {
      pIVar18 = (Il2CppClass *)0x0;
      pIVar19 = (Il2CppClass *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar16,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar35 = (System_Collections_Generic_Dictionary_object__object__o *)
                (TypeInfo_MapLoader[2].fields._entries)->bounds;
      pIVar36 = (Il2CppClass *)0x0;
      if (pSVar35 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      pIVar18 = pIVar19;
      bVar13 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                         (pSVar35,(Il2CppObject *)pIVar19,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar13 != '\0') {
        if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar35 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (TypeInfo_MapLoader[2].fields._entries)->bounds;
        pIVar36 = (Il2CppClass *)0x0;
        if (pSVar35 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___get_Item
                    (pSVar35,(Il2CppObject *)pIVar19,MethodInfo_MapObject_get_Item);
          return;
        }
        break;
      }
      pUVar20 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pIVar16,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar13 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar13 != '\0') {
        return;
      }
      pIVar18 = (Il2CppClass *)0x0;
      pIVar19 = (Il2CppClass *)
                UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pIVar16,(MethodInfo *)0x0);
      pIVar36 = pIVar16;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar30 = extraout_RDX_00;
  pIVar16 = pIVar18;
  if (g_data_057ac49e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapHandler);
    il2cpp_runtime_helper_023445d0(&"Interact/Supply");
    il2cpp_runtime_helper_023445d0(&"Map load error: map object with duplicate ID found (");
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&"Supply");
    g_data_057ac49e = '\x01';
    uVar30 = extraout_RDX_01;
  }
  if (pIVar36 == (Il2CppClass *)0x0) {
label_040a5b88:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar23 = (pIVar36->_1).image;
    bVar3 = (pMVar23->_2).naturalAligment;
    pMVar31 = (MethodInfo *)CONCAT71((int7)((ulong)uVar30 >> 8),bVar3);
    bVar27 = (TypeInfo_MapScriptSceneObject->_2).naturalAligment;
    if ((bVar3 < bVar27) || ((pMVar23->_2).typeHierarchy[(ulong)bVar27 - 1] != TypeInfo_MapScriptSceneObject)) {
      pIVar19 = (Il2CppClass *)0x0;
label_040a57bb:
      uVar4 = *(uint *)((long)&(pIVar36->_1).byval_arg.data + 4);
      __this_00 = (Map_MapObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapObject);
      pIVar16 = (Il2CppClass *)(ulong)uVar4;
      pMVar34 = (MethodInfo *)0x0;
      Map_MapObject___ctor
                (__this_00,uVar4,(UnityEngine_GameObject_o *)pIVar19,(Map_MapScriptBaseObject_o *)pIVar36,
                 (MethodInfo *)0x0);
      if ((__this_00 != (Map_MapObject_o *)0x0) &&
         (pMVar7 = (__this_00->fields).ScriptObject, pMVar7 != (Map_MapScriptBaseObject_o *)0x0)) {
        iVar5 = (pMVar7->fields).Id;
        if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar15 = TypeInfo_MapLoader[2].fields._entries;
        iVar28 = (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                  ((long)pSVar15->m_Items + 0x48))->fields).hashCode;
        if (iVar28 <= iVar5) {
          iVar28 = iVar5;
        }
        (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)((long)pSVar15->m_Items + 0x48))->
        fields).hashCode = iVar28;
        if (*(System_Collections_Generic_Dictionary_int__object__o **)&pSVar15->obj !=
            (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          pIVar12 = &(pIVar36->_1).byval_arg;
          pIVar16 = (Il2CppClass *)(ulong)*(uint *)&pIVar12->data;
          bVar13 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                             (*(System_Collections_Generic_Dictionary_int__object__o **)&pSVar15->obj,
                              *(uint *)&pIVar12->data,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar13 != '\0') {
            pSVar21 = System_Int32__ToString((int32_t)pIVar12,(MethodInfo *)0x0);
            pSVar21 = System_String__Concat_3af7150("Map load error: map object with duplicate ID found (",pSVar21,")",(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            ApplicationManagers_DebugConsole__Log(pSVar21,1,(MethodInfo *)0x0);
            return;
          }
          if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar25 = *(System_Collections_Generic_Dictionary_int__object__o **)
                     &(TypeInfo_MapLoader[2].fields._entries)->obj;
          if (pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            pIVar16 = (Il2CppClass *)(ulong)*(uint *)&pIVar12->data;
            System_Collections_Generic_Dictionary_int__object___Add
                      (pSVar25,*(uint *)&pIVar12->data,(Il2CppObject *)__this_00,MethodInfo_Void_Add);
            pSVar35 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (TypeInfo_MapLoader[2].fields._entries)->bounds;
            if (pSVar35 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___Add
                        (pSVar35,(Il2CppObject *)pIVar19,(Il2CppObject *)__this_00,MethodInfo_Void_Add);
              if (*(int *)((long)&(pIVar36->_1).byval_arg.data + 4) < 1) {
label_040a59e1:
                iVar5 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
joined_r0x040a5b5a:
                if (iVar5 == 0) {
                  il2cpp_runtime_helper_02337ed0();
                  Map_MapLoader__SetTransform(__this_00,(MethodInfo *)pIVar19);
                  pIVar16 = pIVar19;
                }
                else {
                  Map_MapLoader__SetTransform(__this_00,(MethodInfo *)pIVar19);
                  pIVar16 = pIVar19;
                }
                if ((char)pIVar18 != '\0') {
                  return;
                }
                if ((char)(pIVar36->_1).byval_arg.bits == '\0') {
                  pUVar24 = (__this_00->fields).GameObject;
                  if (pUVar24 == (UnityEngine_GameObject_o *)0x0) goto label_040a5b88;
                  pIVar16 = (Il2CppClass *)0x0;
                  UnityEngine_GameObject__SetActive(pUVar24,0,(MethodInfo *)0x0);
                }
                pSVar21 = (System_String_o *)(pIVar36->_1).namespaze;
                if (pSVar21 != (System_String_o *)0x0) {
                  pIVar16 = "Interact/Supply";
                  bVar13 = System_String__StartsWith
                                     (pSVar21,(System_String_o *)"Interact/Supply",(MethodInfo *)0x0);
                  if ((char)bVar13 == '\0') {
                    return;
                  }
                  pUVar24 = (__this_00->fields).GameObject;
                  if (pUVar24 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar20 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UI_MinimapHandler__CreateMinimapIcon(pUVar20,"Supply",(MethodInfo *)0x0);
                    return;
                  }
                }
              }
              else {
                if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar25 = *(void **)((long)&(TypeInfo_MapLoader[2].fields._entries)->obj + 8);
                pIVar16 = pIVar19;
                if (pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                  uVar4 = *(uint *)((long)&(pIVar36->_1).byval_arg.data + 4);
                  pIVar16 = (Il2CppClass *)(ulong)uVar4;
                  bVar13 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                     (pSVar25,uVar4,MethodInfo_Boolean_ContainsKey);
                  if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar25 = *(void **)((long)&(TypeInfo_MapLoader[2].fields._entries)->obj + 8);
                  uVar4 = *(uint *)((long)&(pIVar36->_1).byval_arg.data + 4);
                  pIVar19 = (Il2CppClass *)(ulong)uVar4;
                  if ((char)bVar13 == '\0') {
                    pSVar22 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_int);
                    pIVar16 = MethodInfo_HashSet_1_System_Int32;
                    System_Collections_Generic_HashSet_int____ctor(pSVar22,(MethodInfo_33D4530 *)MethodInfo_HashSet_1_System_Int32)
                    ;
                    if (pSVar22 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                      pIVar16 = (Il2CppClass *)(ulong)*(uint *)&pIVar12->data;
                      System_Collections_Generic_HashSet_int___Add
                                (pSVar22,*(uint *)&pIVar12->data,MethodInfo_Boolean_Add);
                      if (pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                        System_Collections_Generic_Dictionary_int__object___Add
                                  (pSVar25,uVar4,(Il2CppObject *)pSVar22,MethodInfo_Void_Add);
                        iVar5 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
                        goto joined_r0x040a5b5a;
                      }
                    }
                  }
                  else if ((pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                          (pSVar22 = (System_Collections_Generic_HashSet_int__o *)
                                     System_Collections_Generic_Dictionary_int__object___get_Item
                                               (pSVar25,uVar4,MethodInfo_HashSet_1_System_Int32_get_Item), pIVar16 = pIVar19,
                          pSVar22 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
                    pIVar19 = (Il2CppClass *)(ulong)*(uint *)&pIVar12->data;
                    System_Collections_Generic_HashSet_int___Add(pSVar22,*(uint *)&pIVar12->data,MethodInfo_Boolean_Add)
                    ;
                    goto label_040a59e1;
                  }
                }
              }
            }
          }
        }
      }
      goto label_040a5b88;
    }
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar23 = (pIVar36->_1).image;
      pMVar31 = (MethodInfo *)CONCAT71((int7)((ulong)extraout_RDX_02 >> 8),(pMVar23->_2).naturalAligment);
      bVar27 = (TypeInfo_MapScriptSceneObject->_2).naturalAligment;
    }
    pIVar16 = TypeInfo_MapScriptSceneObject;
    if ((bVar27 <= (byte)pMVar31) && ((pMVar23->_2).typeHierarchy[(ulong)bVar27 - 1] == TypeInfo_MapScriptSceneObject)) {
      pIVar19 = (Il2CppClass *)
                Map_MapLoader__LoadSceneObject
                          ((Map_MapScriptSceneObject_o *)pIVar36,(uint)pIVar18 & 0xff,pMVar31);
      goto label_040a57bb;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  pIVar18 = pIVar16;
  pIVar19 = pIVar36;
  if (g_data_057ac4b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SphereCollider_AddComponent_SphereCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    pIVar19 = (Il2CppClass *)&"None";
    il2cpp_runtime_helper_023445d0();
    g_data_057ac4b0 = '\x01';
  }
  if (pIVar36 != (Il2CppClass *)0x0) {
    pMVar31 = "None";
    bVar13 = System_String__op_Equality
                       ((System_String_o *)(pIVar36->_1).namespaze,(System_String_o *)"None",
                        (MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      pSVar21 = (System_String_o *)(pIVar36->_1).namespaze;
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar24 = Map_MapLoader__LoadPrefabCached(pSVar21,pMVar31);
    }
    else {
      pUVar24 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc3c0(pUVar24,(MethodInfo *)0x0);
    }
    if ((char)pIVar16 == '\0') {
      pSVar21 = (pIVar36->_1).generic_class;
      pSVar8 = (pIVar36->_1).typeMetadataHandle;
      physicsMaterial = (pIVar36->_1).interopData;
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapLoader__SetPhysics(pUVar24,pSVar21,pSVar8,physicsMaterial,pMVar34);
    }
    else {
      if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar31 = (MethodInfo *)**(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
      if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar21 = *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x40);
      pSVar8 = (pIVar36->_1).interopData;
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar14 = Map_MapLoader__SetPhysics(pUVar24,(System_String_o *)pMVar31,pSVar21,pSVar8,pMVar34);
      if (iVar14 == 0) {
        if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Map_MapLoader__TryAddEditorCollider(pUVar24,pMVar31);
      }
    }
    pSVar21 = (System_String_o *)(pIVar36->_1).namespaze;
    pIVar18 = (pIVar36->_1).klass;
    bVar3 = *(undefined1 *)((long)&(pIVar36->_1).byval_arg.bits + 2);
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Map_MapLoader__SetMaterial
              (pUVar24,pSVar21,(Map_MapScriptBaseMaterial_o *)pIVar18,(uint)bVar3,(uint)pIVar16 & 0xff,method)
    ;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar36 = pIVar19;
  if ((pIVar19 != (Il2CppClass *)0x0) &&
     (pIVar16 = (Il2CppClass *)(pIVar19->_1).namespaze, pIVar16 != (Il2CppClass *)0x0)) {
    pvVar9 = (pIVar19->_1).byval_arg.data;
    pIVar18 = (Il2CppClass *)0x0;
    pIVar36 = pIVar16;
    pUVar20 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pIVar16,(MethodInfo *)0x0);
    if (pvVar9 != (void *)0x0) {
      UnityEngine_GameObject__set_isStatic
                ((UnityEngine_GameObject_o *)pIVar16,(uint)*(byte *)((long)pvVar9 + 0x29),(MethodInfo *)0x0);
      pIVar18 = *(Il2CppClass **)((long)pvVar9 + 0x30);
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pIVar16,(System_String_o *)pIVar18,(MethodInfo *)0x0);
      pIVar36 = pIVar16;
      if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_position
                  (pUVar20,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)((long)pvVar9 + 0x38),
                   (MethodInfo *)0x0);
        UVar39.fields.x = (float)*(undefined8 *)((long)pvVar9 + 0x44) * 0.017453292;
        UVar39.fields.y = (float)((ulong)*(undefined8 *)((long)pvVar9 + 0x44) >> 0x20) * 0.017453292;
        UVar39.fields.z = *(float *)((long)pvVar9 + 0x4c) * 0.017453292;
        value = UnityEngine_Quaternion__Internal_FromEulerRad(UVar39,(MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation(pUVar20,value,(MethodInfo *)0x0);
        UVar39 = UnityEngine_Transform__get_localScale(pUVar20,(MethodInfo *)0x0);
        (pIVar19->_1).byval_arg.bits = (uint)UVar39.fields.x;
        *(float *)&(pIVar19->_1).byval_arg.field_0xc = UVar39.fields.y;
        *(float *)&(pIVar19->_1).this_arg.data = UVar39.fields.z;
        value_00.fields.x = UVar39.fields.x * (float)*(undefined8 *)((long)pvVar9 + 0x50);
        value_00.fields.y = UVar39.fields.y * (float)((ulong)*(undefined8 *)((long)pvVar9 + 0x50) >> 0x20);
        value_00.fields.z = UVar39.fields.z * *(float *)((long)pvVar9 + 0x58);
        UnityEngine_Transform__set_localScale(pUVar20,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac49f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac49f = '\x01';
    iVar5 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  else {
    iVar5 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  if (iVar5 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar35 = TypeInfo_MapLoader;
  if ((pIVar36 != (Il2CppClass *)0x0) &&
     (pSVar25 = *(void **)((long)&(TypeInfo_MapLoader[2].fields._entries)->obj + 8),
     pSVar35 = (System_Collections_Generic_Dictionary_object__object__o *)pSVar25,
     pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar13 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                       (pSVar25,(int32_t)*(intptr_t *)
                                          &((System_String_Fields *)&(pIVar36->_1).name)->_stringLength,
                        MethodInfo_Boolean_ContainsKey);
    if ((char)bVar13 == '\0') goto label_040a5fd3;
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar35 = *(void **)((long)&(TypeInfo_MapLoader[2].fields._entries)->obj + 8);
    if (pSVar35 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar25 = (System_Collections_Generic_Dictionary_int__object__o *)
                System_Collections_Generic_Dictionary_int__object___get_Item
                          ((System_Collections_Generic_Dictionary_int__object__o *)pSVar35,
                           (int32_t)*(intptr_t *)&((System_String_Fields *)&(pIVar36->_1).name)->_stringLength
                           ,MethodInfo_HashSet_1_System_Int32_get_Item);
      pvVar9 = (pIVar36->_1).byval_arg.data;
      if ((pvVar9 != (void *)0x0) && (pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0))
      {
        bVar13 = System_Collections_Generic_HashSet_int___Contains
                           ((System_Collections_Generic_HashSet_int__o *)pSVar25,
                            *(int32_t *)((long)pvVar9 + 0x20),MethodInfo_Boolean_Contains);
        if ((char)bVar13 == '\0') {
label_040a5fd3:
          if (pIVar18 == (Il2CppClass *)0x0) {
            ((System_String_Fields *)&(pIVar36->_1).name)->_stringLength = 0;
            pSVar35 = (System_Collections_Generic_Dictionary_object__object__o *)(pIVar36->_1).namespaze;
            if ((pSVar35 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
               (pUVar20 = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)pSVar35,(MethodInfo *)0x0),
               pUVar20 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent(pUVar20,(UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            if (pIVar36 == pIVar18) {
              return;
            }
            pvVar9 = (pIVar36->_1).byval_arg.data;
            pSVar35 = (System_Collections_Generic_Dictionary_object__object__o *)pSVar25;
            if (pvVar9 != (void *)0x0) {
              if ((int)*(intptr_t *)&((System_String_Fields *)&(pIVar18->_1).name)->_stringLength ==
                  *(int *)((long)pvVar9 + 0x20)) {
                return;
              }
              pvVar9 = (pIVar18->_1).byval_arg.data;
              if (pvVar9 != (void *)0x0) {
                ((System_String_Fields *)&(pIVar36->_1).name)->_stringLength =
                     *(undefined4 *)((long)pvVar9 + 0x20);
                pUVar24 = (UnityEngine_GameObject_o *)(pIVar36->_1).namespaze;
                pSVar35 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
                if (pUVar24 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar20 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
                  pSVar35 = (System_Collections_Generic_Dictionary_object__object__o *)(pIVar18->_1).namespaze
                  ;
                  if ((pSVar35 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
                     (p = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)pSVar35,(MethodInfo *)0x0),
                     pUVar20 != (UnityEngine_Transform_o *)0x0)) {
                    UnityEngine_Transform__SetParent(pUVar20,p,(MethodInfo *)0x0);
                    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar25 = *(void **)((long)&(TypeInfo_MapLoader[2].fields._entries)->obj + 8);
                    pSVar35 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
                    if (pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                      bVar13 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                         (pSVar25,(int32_t)*(intptr_t *)
                                                            &((System_String_Fields *)&(pIVar36->_1).name)->
                                                             _stringLength,MethodInfo_Boolean_ContainsKey);
                      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pSVar25 = *(void **)((long)&(TypeInfo_MapLoader[2].fields._entries)->obj + 8);
                      iVar14 = (int32_t)*(intptr_t *)
                                         &((System_String_Fields *)&(pIVar36->_1).name)->_stringLength;
                      if ((char)bVar13 == '\0') {
                        pSVar26 = (System_Collections_Generic_Dictionary_object__object__o *)
                                  il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_int);
                        pSVar35 = pSVar26;
                        System_Collections_Generic_HashSet_int____ctor
                                  ((System_Collections_Generic_HashSet_int__o *)pSVar26,
                                   (MethodInfo_33D4530 *)MethodInfo_HashSet_1_System_Int32);
                        pvVar9 = (pIVar36->_1).byval_arg.data;
                        if (((pvVar9 != (void *)0x0) &&
                            (pSVar26 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
                           (pSVar35 = pSVar26,
                           System_Collections_Generic_HashSet_int___Add
                                     ((System_Collections_Generic_HashSet_int__o *)pSVar26,
                                      *(int32_t *)((long)pvVar9 + 0x20),MethodInfo_Boolean_Add),
                           pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
                          System_Collections_Generic_Dictionary_int__object___Add
                                    (pSVar25,iVar14,(Il2CppObject *)pSVar26,MethodInfo_Void_Add);
                          return;
                        }
                      }
                      else {
                        pSVar35 = TypeInfo_MapLoader;
                        if (pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                          pSVar22 = (System_Collections_Generic_HashSet_int__o *)
                                    System_Collections_Generic_Dictionary_int__object___get_Item
                                              (pSVar25,iVar14,MethodInfo_HashSet_1_System_Int32_get_Item);
                          pvVar9 = (pIVar36->_1).byval_arg.data;
                          pSVar35 = (System_Collections_Generic_Dictionary_object__object__o *)pSVar25;
                          if ((pvVar9 != (void *)0x0) &&
                             (pSVar22 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
                            System_Collections_Generic_HashSet_int___Add
                                      (pSVar22,*(int32_t *)((long)pvVar9 + 0x20),MethodInfo_Boolean_Add);
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
        else {
          if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar35 = *(void **)((long)&(TypeInfo_MapLoader[2].fields._entries)->obj + 8);
          if (pSVar35 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pSVar25 = (System_Collections_Generic_Dictionary_int__object__o *)
                      System_Collections_Generic_Dictionary_int__object___get_Item
                                ((System_Collections_Generic_Dictionary_int__object__o *)pSVar35,
                                 (int32_t)*(intptr_t *)
                                           &((System_String_Fields *)&(pIVar36->_1).name)->_stringLength,
                                 MethodInfo_HashSet_1_System_Int32_get_Item);
            pvVar9 = (pIVar36->_1).byval_arg.data;
            if ((pvVar9 != (void *)0x0) &&
               (pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
              System_Collections_Generic_HashSet_int___Remove
                        ((System_Collections_Generic_HashSet_int__o *)pSVar25,
                         *(int32_t *)((long)pvVar9 + 0x20),MethodInfo_Boolean_Remove);
              goto label_040a5fd3;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac4a0 = '\x01';
    iVar5 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  else {
    iVar5 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  if (iVar5 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (((pSVar35 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
      (lVar10 = *(long *)&(pSVar35->fields)._count, lVar10 != 0)) &&
     (pSVar25 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 &(TypeInfo_MapLoader[2].fields._entries)->obj,
     pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    uVar4 = *(uint *)(lVar10 + 0x20);
    pMVar34 = (MethodInfo *)(ulong)uVar4;
    bVar13 = System_Collections_Generic_Dictionary_int__object___ContainsKey(pSVar25,uVar4,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar13 == '\0') goto label_040a6341;
    lVar10 = *(long *)&(pSVar35->fields)._count;
    if (lVar10 != 0) {
      iVar14 = *(int32_t *)(lVar10 + 0x20);
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapLoader__DeleteObject_3fa6370(iVar14,pMVar34);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040a6341:
  pSVar15 = (pSVar35->fields)._entries;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar15,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader$$RegisterMapLight
// il2cpp: Map_MapLight_o* Map_MapLoader__RegisterMapLight (UnityEngine_Light_o* light, bool isDaylight, const MethodInfo* method);
// 0x40a53e0

Map_MapLight_o *
Map_MapLoader__RegisterMapLight(UnityEngine_Light_o *light,bool_conflict isDaylight,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  Map_MapScriptBaseObject_o *pMVar6;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar7;
  Il2CppClass *pIVar8;
  UnityEngine_GameObject_o *pUVar9;
  System_String_o *pSVar10;
  System_String_o *physicsMaterial;
  void *pvVar11;
  long lVar12;
  int32_t *piVar13;
  Il2CppType *pIVar14;
  bool_conflict bVar15;
  int32_t iVar16;
  Map_MapLight_o *pMVar17;
  Il2CppClass *pIVar18;
  Il2CppClass *pIVar19;
  UnityEngine_Transform_o *pUVar20;
  Map_MapObject_o *__this;
  System_String_o *pSVar21;
  System_Collections_Generic_HashSet_int__o *pSVar22;
  Map_MapScriptSceneObject_c *pMVar23;
  Map_MapLight_o *extraout_RAX;
  undefined4 extraout_var;
  System_Collections_Generic_Dictionary_int__object__o *pSVar24;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  Map_MapLight_o *extraout_RAX_00;
  UnityEngine_Transform_o *p;
  undefined4 extraout_var_02;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  Map_MapLight_o *extraout_RAX_01;
  Map_MapLight_o *extraout_RAX_02;
  Map_MapLight_o *extraout_RAX_03;
  byte bVar25;
  int iVar26;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar27;
  MethodInfo *pMVar28;
  undefined8 extraout_RDX_01;
  Il2CppClass *pIVar29;
  Il2CppClass *pIVar30;
  System_Collections_Generic_Dictionary_int__object__o *pSVar31;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  float fVar32;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o value_00;
  
  if (g_data_057ac49c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLight);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac49c = '\x01';
  }
  pMVar17 = (Map_MapLight_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapLight);
  System_Object___ctor((Il2CppObject *)pMVar17,(MethodInfo *)0x0);
  pIVar29 = (Il2CppClass *)&pMVar17->fields;
  (pMVar17->fields).Light = light;
  pIVar18 = (Il2CppClass *)light;
  il2cpp_runtime_helper_022b4080();
  if (light != (UnityEngine_Light_o *)0x0) {
    fVar32 = UnityEngine_Light__get_intensity(light,(MethodInfo *)0x0);
    (pMVar17->fields).MaxIntensity = fVar32;
    pIVar18 = (Il2CppClass *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)light,(MethodInfo *)0x0);
    (pMVar17->fields)._transform = (UnityEngine_Transform_o *)pIVar18;
    il2cpp_runtime_helper_022b4080(&(pMVar17->fields)._transform);
    *(char *)&(pMVar17->fields)._isDaylight = (char)isDaylight;
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar12 = MethodInfo_Void_Add;
    pIVar29 = (Il2CppClass *)(TypeInfo_MapLoader[2].fields._entries)->m_Items[0].fields.value;
    if (pIVar29 != (Il2CppClass *)0x0) {
      piVar13 = (int32_t *)((long)&(pIVar29->_1).namespaze + 4);
      *piVar13 = *piVar13 + 1;
      pSVar4 = ((System_Collections_Generic_List_object__Fields *)&(pIVar29->_1).name)->_items;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar2 = *(uint *)&(pIVar29->_1).namespaze;
        if (uVar2 < (uint)pSVar4->max_length) {
          *(uint *)&(pIVar29->_1).namespaze = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pMVar17;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pMVar17);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pIVar29,(Il2CppObject *)pMVar17,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        return pMVar17;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar30 = pIVar29;
  if (g_data_057ac49d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    pIVar30 = (Il2CppClass *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac49d = '\x01';
  }
  if (pIVar29 != (Il2CppClass *)0x0) {
    pIVar18 = (Il2CppClass *)0x0;
    pIVar19 = (Il2CppClass *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar29,(MethodInfo *)0x0);
    pIVar30 = pIVar29;
    while (pIVar29 = pIVar19, pIVar29 != (Il2CppClass *)0x0) {
      pIVar18 = (Il2CppClass *)0x0;
      pIVar19 = (Il2CppClass *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar29,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
               (TypeInfo_MapLoader[2].fields._entries)->bounds;
      pIVar30 = (Il2CppClass *)0x0;
      if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      pIVar18 = pIVar19;
      bVar15 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                         (pSVar5,(Il2CppObject *)pIVar19,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar15 != '\0') {
        if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (TypeInfo_MapLoader[2].fields._entries)->bounds;
        pIVar30 = (Il2CppClass *)0x0;
        if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pMVar17 = (Map_MapLight_o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar5,(Il2CppObject *)pIVar19,MethodInfo_MapObject_get_Item);
          return pMVar17;
        }
        break;
      }
      pUVar20 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pIVar29,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar15 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        return (Map_MapLight_o *)0x0;
      }
      pIVar18 = (Il2CppClass *)0x0;
      pIVar19 = (Il2CppClass *)
                UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pIVar29,(MethodInfo *)0x0);
      pIVar30 = pIVar29;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar27 = extraout_RDX;
  pIVar29 = pIVar18;
  if (g_data_057ac49e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapHandler);
    il2cpp_runtime_helper_023445d0(&"Interact/Supply");
    il2cpp_runtime_helper_023445d0(&"Map load error: map object with duplicate ID found (");
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&"Supply");
    g_data_057ac49e = '\x01';
    uVar27 = extraout_RDX_00;
  }
  if (pIVar30 == (Il2CppClass *)0x0) {
label_040a5b88:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar23 = (pIVar30->_1).image;
    bVar1 = (pMVar23->_2).naturalAligment;
    pMVar28 = (MethodInfo *)CONCAT71((int7)((ulong)uVar27 >> 8),bVar1);
    bVar25 = (TypeInfo_MapScriptSceneObject->_2).naturalAligment;
    if ((bVar1 < bVar25) || ((pMVar23->_2).typeHierarchy[(ulong)bVar25 - 1] != TypeInfo_MapScriptSceneObject)) {
      pIVar19 = (Il2CppClass *)0x0;
label_040a57bb:
      uVar2 = *(uint *)((long)&(pIVar30->_1).byval_arg.data + 4);
      __this = (Map_MapObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapObject);
      pIVar29 = (Il2CppClass *)(ulong)uVar2;
      in_R8 = (MethodInfo *)0x0;
      Map_MapObject___ctor
                (__this,uVar2,(UnityEngine_GameObject_o *)pIVar19,(Map_MapScriptBaseObject_o *)pIVar30,
                 (MethodInfo *)0x0);
      if ((__this != (Map_MapObject_o *)0x0) &&
         (pMVar6 = (__this->fields).ScriptObject, pMVar6 != (Map_MapScriptBaseObject_o *)0x0)) {
        iVar3 = (pMVar6->fields).Id;
        if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = TypeInfo_MapLoader[2].fields._entries;
        iVar26 = pSVar7->m_Items[3].fields.hashCode;
        if (iVar26 <= iVar3) {
          iVar26 = iVar3;
        }
        pSVar7->m_Items[3].fields.hashCode = iVar26;
        pIVar8 = (pSVar7->obj).klass;
        if (pIVar8 != (Il2CppClass *)0x0) {
          pIVar14 = &(pIVar30->_1).byval_arg;
          pIVar29 = (Il2CppClass *)(ulong)*(uint *)&pIVar14->data;
          bVar15 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                             ((System_Collections_Generic_Dictionary_int__object__o *)pIVar8,
                              *(uint *)&pIVar14->data,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar15 != '\0') {
            pSVar21 = System_Int32__ToString((int32_t)pIVar14,(MethodInfo *)0x0);
            pSVar21 = System_String__Concat_3af7150("Map load error: map object with duplicate ID found (",pSVar21,")",(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            ApplicationManagers_DebugConsole__Log(pSVar21,1,(MethodInfo *)0x0);
            return (Map_MapLight_o *)__this;
          }
          if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar8 = ((TypeInfo_MapLoader[2].fields._entries)->obj).klass;
          if (pIVar8 != (Il2CppClass *)0x0) {
            pIVar29 = (Il2CppClass *)(ulong)*(uint *)&pIVar14->data;
            System_Collections_Generic_Dictionary_int__object___Add
                      ((System_Collections_Generic_Dictionary_int__object__o *)pIVar8,*(uint *)&pIVar14->data,
                       (Il2CppObject *)__this,MethodInfo_Void_Add);
            pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (TypeInfo_MapLoader[2].fields._entries)->bounds;
            if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___Add
                        (pSVar5,(Il2CppObject *)pIVar19,(Il2CppObject *)__this,MethodInfo_Void_Add);
              if (*(int *)((long)&(pIVar30->_1).byval_arg.data + 4) < 1) {
label_040a59e1:
                iVar3 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
joined_r0x040a5b5a:
                if (iVar3 == 0) {
                  il2cpp_runtime_helper_02337ed0();
                  Map_MapLoader__SetTransform(__this,(MethodInfo *)pIVar19);
                  pIVar29 = pIVar19;
                }
                else {
                  Map_MapLoader__SetTransform(__this,(MethodInfo *)pIVar19);
                  pIVar29 = pIVar19;
                }
                if ((char)pIVar18 != '\0') {
                  return (Map_MapLight_o *)__this;
                }
                if ((char)(pIVar30->_1).byval_arg.bits == '\0') {
                  pUVar9 = (__this->fields).GameObject;
                  if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_040a5b88;
                  pIVar29 = (Il2CppClass *)0x0;
                  UnityEngine_GameObject__SetActive(pUVar9,0,(MethodInfo *)0x0);
                }
                pSVar21 = (System_String_o *)(pIVar30->_1).namespaze;
                if (pSVar21 != (System_String_o *)0x0) {
                  pIVar29 = "Interact/Supply";
                  bVar15 = System_String__StartsWith
                                     (pSVar21,(System_String_o *)"Interact/Supply",(MethodInfo *)0x0);
                  if ((char)bVar15 == '\0') {
                    return (Map_MapLight_o *)__this;
                  }
                  pUVar9 = (__this->fields).GameObject;
                  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar20 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UI_MinimapHandler__CreateMinimapIcon(pUVar20,"Supply",(MethodInfo *)0x0);
                    return (Map_MapLight_o *)__this;
                  }
                }
              }
              else {
                if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar31 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
                pIVar29 = pIVar19;
                if (pSVar31 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                  uVar2 = *(uint *)((long)&(pIVar30->_1).byval_arg.data + 4);
                  pIVar29 = (Il2CppClass *)(ulong)uVar2;
                  bVar15 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                     (pSVar31,uVar2,MethodInfo_Boolean_ContainsKey);
                  if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar31 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
                  uVar2 = *(uint *)((long)&(pIVar30->_1).byval_arg.data + 4);
                  pIVar19 = (Il2CppClass *)(ulong)uVar2;
                  if ((char)bVar15 == '\0') {
                    pSVar22 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_int);
                    pIVar29 = MethodInfo_HashSet_1_System_Int32;
                    System_Collections_Generic_HashSet_int____ctor(pSVar22,(MethodInfo_33D4530 *)MethodInfo_HashSet_1_System_Int32)
                    ;
                    if (pSVar22 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                      pIVar29 = (Il2CppClass *)(ulong)*(uint *)&pIVar14->data;
                      System_Collections_Generic_HashSet_int___Add
                                (pSVar22,*(uint *)&pIVar14->data,MethodInfo_Boolean_Add);
                      if (pSVar31 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                        System_Collections_Generic_Dictionary_int__object___Add
                                  (pSVar31,uVar2,(Il2CppObject *)pSVar22,MethodInfo_Void_Add);
                        iVar3 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
                        goto joined_r0x040a5b5a;
                      }
                    }
                  }
                  else if ((pSVar31 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                          (pSVar22 = (System_Collections_Generic_HashSet_int__o *)
                                     System_Collections_Generic_Dictionary_int__object___get_Item
                                               (pSVar31,uVar2,MethodInfo_HashSet_1_System_Int32_get_Item), pIVar29 = pIVar19,
                          pSVar22 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
                    pIVar19 = (Il2CppClass *)(ulong)*(uint *)&pIVar14->data;
                    System_Collections_Generic_HashSet_int___Add(pSVar22,*(uint *)&pIVar14->data,MethodInfo_Boolean_Add)
                    ;
                    goto label_040a59e1;
                  }
                }
              }
            }
          }
        }
      }
      goto label_040a5b88;
    }
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar23 = (pIVar30->_1).image;
      pMVar28 = (MethodInfo *)CONCAT71((int7)((ulong)extraout_RDX_01 >> 8),(pMVar23->_2).naturalAligment);
      bVar25 = (TypeInfo_MapScriptSceneObject->_2).naturalAligment;
    }
    pIVar29 = TypeInfo_MapScriptSceneObject;
    if ((bVar25 <= (byte)pMVar28) && ((pMVar23->_2).typeHierarchy[(ulong)bVar25 - 1] == TypeInfo_MapScriptSceneObject)) {
      pIVar19 = (Il2CppClass *)
                Map_MapLoader__LoadSceneObject
                          ((Map_MapScriptSceneObject_o *)pIVar30,(uint)pIVar18 & 0xff,pMVar28);
      goto label_040a57bb;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  pIVar18 = pIVar29;
  pIVar19 = pIVar30;
  if (g_data_057ac4b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SphereCollider_AddComponent_SphereCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    pIVar19 = (Il2CppClass *)&"None";
    il2cpp_runtime_helper_023445d0();
    g_data_057ac4b0 = '\x01';
  }
  if (pIVar30 != (Il2CppClass *)0x0) {
    pMVar28 = "None";
    bVar15 = System_String__op_Equality
                       ((System_String_o *)(pIVar30->_1).namespaze,(System_String_o *)"None",
                        (MethodInfo *)0x0);
    if ((char)bVar15 == '\0') {
      pSVar21 = (System_String_o *)(pIVar30->_1).namespaze;
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar17 = (Map_MapLight_o *)Map_MapLoader__LoadPrefabCached(pSVar21,pMVar28);
    }
    else {
      pMVar17 = (Map_MapLight_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc3c0((UnityEngine_GameObject_o *)pMVar17,(MethodInfo *)0x0);
    }
    if ((char)pIVar29 == '\0') {
      pSVar21 = (pIVar30->_1).generic_class;
      pSVar10 = (pIVar30->_1).typeMetadataHandle;
      physicsMaterial = (pIVar30->_1).interopData;
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapLoader__SetPhysics((UnityEngine_GameObject_o *)pMVar17,pSVar21,pSVar10,physicsMaterial,in_R8);
    }
    else {
      if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar28 = (MethodInfo *)**(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
      if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar21 = *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x40);
      pSVar10 = (pIVar30->_1).interopData;
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar16 = Map_MapLoader__SetPhysics
                         ((UnityEngine_GameObject_o *)pMVar17,(System_String_o *)pMVar28,pSVar21,pSVar10,in_R8
                         );
      if (iVar16 == 0) {
        if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Map_MapLoader__TryAddEditorCollider((UnityEngine_GameObject_o *)pMVar17,pMVar28);
      }
    }
    pSVar21 = (System_String_o *)(pIVar30->_1).namespaze;
    pIVar18 = (pIVar30->_1).klass;
    bVar1 = *(undefined1 *)((long)&(pIVar30->_1).byval_arg.bits + 2);
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Map_MapLoader__SetMaterial
              ((UnityEngine_GameObject_o *)pMVar17,pSVar21,(Map_MapScriptBaseMaterial_o *)pIVar18,(uint)bVar1,
               (uint)pIVar29 & 0xff,in_R9);
    return pMVar17;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar29 = pIVar19;
  if ((pIVar19 != (Il2CppClass *)0x0) &&
     (pIVar30 = (Il2CppClass *)(pIVar19->_1).namespaze, pIVar30 != (Il2CppClass *)0x0)) {
    pvVar11 = (pIVar19->_1).byval_arg.data;
    pIVar18 = (Il2CppClass *)0x0;
    pIVar29 = pIVar30;
    pUVar20 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pIVar30,(MethodInfo *)0x0);
    if (pvVar11 != (void *)0x0) {
      UnityEngine_GameObject__set_isStatic
                ((UnityEngine_GameObject_o *)pIVar30,(uint)*(byte *)((long)pvVar11 + 0x29),(MethodInfo *)0x0);
      pIVar18 = *(Il2CppClass **)((long)pvVar11 + 0x30);
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pIVar30,(System_String_o *)pIVar18,(MethodInfo *)0x0);
      pIVar29 = pIVar30;
      if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_position
                  (pUVar20,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)((long)pvVar11 + 0x38),
                   (MethodInfo *)0x0);
        UVar33.fields.x = (float)*(undefined8 *)((long)pvVar11 + 0x44) * 0.017453292;
        UVar33.fields.y = (float)((ulong)*(undefined8 *)((long)pvVar11 + 0x44) >> 0x20) * 0.017453292;
        UVar33.fields.z = *(float *)((long)pvVar11 + 0x4c) * 0.017453292;
        value = UnityEngine_Quaternion__Internal_FromEulerRad(UVar33,(MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation(pUVar20,value,(MethodInfo *)0x0);
        UVar33 = UnityEngine_Transform__get_localScale(pUVar20,(MethodInfo *)0x0);
        (pIVar19->_1).byval_arg.bits = (uint)UVar33.fields.x;
        *(float *)&(pIVar19->_1).byval_arg.field_0xc = UVar33.fields.y;
        *(float *)&(pIVar19->_1).this_arg.data = UVar33.fields.z;
        value_00.fields.x = UVar33.fields.x * (float)*(undefined8 *)((long)pvVar11 + 0x50);
        value_00.fields.y = UVar33.fields.y * (float)((ulong)*(undefined8 *)((long)pvVar11 + 0x50) >> 0x20);
        value_00.fields.z = UVar33.fields.z * *(float *)((long)pvVar11 + 0x58);
        UnityEngine_Transform__set_localScale(pUVar20,value_00,(MethodInfo *)0x0);
        return extraout_RAX;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac49f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac49f = '\x01';
    iVar3 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  else {
    iVar3 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar31 = TypeInfo_MapLoader;
  if ((pIVar29 != (Il2CppClass *)0x0) &&
     (pSVar24 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor, pSVar31 = pSVar24,
     pSVar24 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar15 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                       (pSVar24,(int32_t)*(intptr_t *)
                                          &((System_String_Fields *)&(pIVar29->_1).name)->_stringLength,
                        MethodInfo_Boolean_ContainsKey);
    pMVar17 = (Map_MapLight_o *)CONCAT44(extraout_var,bVar15);
    if ((char)bVar15 == '\0') goto label_040a5fd3;
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar31 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
    if (pSVar31 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      pSVar24 = (System_Collections_Generic_Dictionary_int__object__o *)
                System_Collections_Generic_Dictionary_int__object___get_Item
                          (pSVar31,(int32_t)*(intptr_t *)
                                             &((System_String_Fields *)&(pIVar29->_1).name)->_stringLength,
                           MethodInfo_HashSet_1_System_Int32_get_Item);
      pvVar11 = (pIVar29->_1).byval_arg.data;
      if ((pvVar11 != (void *)0x0) && (pSVar24 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)
         ) {
        bVar15 = System_Collections_Generic_HashSet_int___Contains
                           ((System_Collections_Generic_HashSet_int__o *)pSVar24,
                            *(int32_t *)((long)pvVar11 + 0x20),MethodInfo_Boolean_Contains);
        pMVar17 = (Map_MapLight_o *)CONCAT44(extraout_var_00,bVar15);
        if ((char)bVar15 == '\0') {
label_040a5fd3:
          if (pIVar18 == (Il2CppClass *)0x0) {
            ((System_String_Fields *)&(pIVar29->_1).name)->_stringLength = 0;
            pSVar31 = (System_Collections_Generic_Dictionary_int__object__o *)(pIVar29->_1).namespaze;
            if ((pSVar31 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
               (pUVar20 = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)pSVar31,(MethodInfo *)0x0),
               pUVar20 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent(pUVar20,(UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
              return extraout_RAX_00;
            }
          }
          else {
            if (pIVar29 == pIVar18) {
              return pMVar17;
            }
            pMVar17 = (pIVar29->_1).byval_arg.data;
            pSVar31 = pSVar24;
            if (pMVar17 != (Map_MapLight_o *)0x0) {
              if ((int)*(intptr_t *)&((System_String_Fields *)&(pIVar18->_1).name)->_stringLength ==
                  *(int *)&(pMVar17->fields)._transform) {
                return pMVar17;
              }
              pvVar11 = (pIVar18->_1).byval_arg.data;
              if (pvVar11 != (void *)0x0) {
                ((System_String_Fields *)&(pIVar29->_1).name)->_stringLength =
                     *(undefined4 *)((long)pvVar11 + 0x20);
                pUVar9 = (UnityEngine_GameObject_o *)(pIVar29->_1).namespaze;
                pSVar31 = (System_Collections_Generic_Dictionary_int__object__o *)0x0;
                if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar20 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                  pSVar31 = (System_Collections_Generic_Dictionary_int__object__o *)(pIVar18->_1).namespaze;
                  if ((pSVar31 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                     (p = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)pSVar31,(MethodInfo *)0x0),
                     pUVar20 != (UnityEngine_Transform_o *)0x0)) {
                    UnityEngine_Transform__SetParent(pUVar20,p,(MethodInfo *)0x0);
                    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar24 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
                    pSVar31 = (System_Collections_Generic_Dictionary_int__object__o *)0x0;
                    if (pSVar24 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                      bVar15 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                         (pSVar24,(int32_t)*(intptr_t *)
                                                            &((System_String_Fields *)&(pIVar29->_1).name)->
                                                             _stringLength,MethodInfo_Boolean_ContainsKey);
                      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pSVar24 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
                      iVar16 = (int32_t)*(intptr_t *)
                                         &((System_String_Fields *)&(pIVar29->_1).name)->_stringLength;
                      if ((char)bVar15 == '\0') {
                        __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                                    il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_int);
                        pSVar31 = __this_00;
                        System_Collections_Generic_HashSet_int____ctor
                                  ((System_Collections_Generic_HashSet_int__o *)__this_00,
                                   (MethodInfo_33D4530 *)MethodInfo_HashSet_1_System_Int32);
                        pvVar11 = (pIVar29->_1).byval_arg.data;
                        if (((pvVar11 != (void *)0x0) &&
                            (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) &&
                           (pSVar31 = __this_00,
                           System_Collections_Generic_HashSet_int___Add
                                     ((System_Collections_Generic_HashSet_int__o *)__this_00,
                                      *(int32_t *)((long)pvVar11 + 0x20),MethodInfo_Boolean_Add),
                           pSVar24 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
                          System_Collections_Generic_Dictionary_int__object___Add
                                    (pSVar24,iVar16,(Il2CppObject *)__this_00,MethodInfo_Void_Add);
                          return extraout_RAX_01;
                        }
                      }
                      else {
                        pSVar31 = TypeInfo_MapLoader;
                        if (pSVar24 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                          pSVar22 = (System_Collections_Generic_HashSet_int__o *)
                                    System_Collections_Generic_Dictionary_int__object___get_Item
                                              (pSVar24,iVar16,MethodInfo_HashSet_1_System_Int32_get_Item);
                          pvVar11 = (pIVar29->_1).byval_arg.data;
                          pSVar31 = pSVar24;
                          if ((pvVar11 != (void *)0x0) &&
                             (pSVar22 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
                            bVar15 = System_Collections_Generic_HashSet_int___Add
                                               (pSVar22,*(int32_t *)((long)pvVar11 + 0x20),MethodInfo_Boolean_Add);
                            return (Map_MapLight_o *)CONCAT44(extraout_var_02,bVar15);
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
        else {
          if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar31 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
          if (pSVar31 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            pSVar24 = (System_Collections_Generic_Dictionary_int__object__o *)
                      System_Collections_Generic_Dictionary_int__object___get_Item
                                (pSVar31,(int32_t)*(intptr_t *)
                                                   &((System_String_Fields *)&(pIVar29->_1).name)->
                                                    _stringLength,MethodInfo_HashSet_1_System_Int32_get_Item);
            pvVar11 = (pIVar29->_1).byval_arg.data;
            if ((pvVar11 != (void *)0x0) &&
               (pSVar24 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
              bVar15 = System_Collections_Generic_HashSet_int___Remove
                                 ((System_Collections_Generic_HashSet_int__o *)pSVar24,
                                  *(int32_t *)((long)pvVar11 + 0x20),MethodInfo_Boolean_Remove);
              pMVar17 = (Map_MapLight_o *)CONCAT44(extraout_var_01,bVar15);
              goto label_040a5fd3;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac4a0 = '\x01';
    iVar3 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  else {
    iVar3 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (((pSVar31 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
      (lVar12 = *(long *)&(pSVar31->fields)._count, lVar12 != 0)) &&
     (pIVar29 = ((TypeInfo_MapLoader[2].fields._entries)->obj).klass, pIVar29 != (Il2CppClass *)0x0)) {
    uVar2 = *(uint *)(lVar12 + 0x20);
    pMVar28 = (MethodInfo *)(ulong)uVar2;
    bVar15 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_int__object__o *)pIVar29,uVar2,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar15 == '\0') goto label_040a6341;
    lVar12 = *(long *)&(pSVar31->fields)._count;
    if (lVar12 != 0) {
      iVar16 = *(int32_t *)(lVar12 + 0x20);
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapLoader__DeleteObject_3fa6370(iVar16,pMVar28);
      return extraout_RAX_02;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040a6341:
  pSVar7 = (pSVar31->fields)._entries;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar7,(MethodInfo *)0x0);
  return extraout_RAX_03;
}


// Map.MapLoader$$FindObjectFromCollider
// il2cpp: Map_MapObject_o* Map_MapLoader__FindObjectFromCollider (UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x40a5520

Map_MapObject_o * Map_MapLoader__FindObjectFromCollider(UnityEngine_Collider_o *collider,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  Map_MapScriptBaseObject_o *pMVar5;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar6;
  UnityEngine_GameObject_o *pUVar7;
  System_String_o *pSVar8;
  System_String_o *physicsMaterial;
  void *pvVar9;
  long lVar10;
  Il2CppType *pIVar11;
  bool_conflict bVar12;
  int32_t iVar13;
  Il2CppClass *pIVar14;
  UnityEngine_Transform_o *pUVar15;
  Map_MapObject_o *pMVar16;
  System_String_o *pSVar17;
  System_Collections_Generic_HashSet_int__o *pSVar18;
  Map_MapScriptSceneObject_c *pMVar19;
  Il2CppClass *pIVar20;
  Map_MapObject_o *extraout_RAX;
  undefined4 extraout_var;
  System_Collections_Generic_Dictionary_int__object__o *pSVar21;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  Map_MapObject_o *extraout_RAX_00;
  UnityEngine_Transform_o *p;
  undefined4 extraout_var_02;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  Map_MapObject_o *extraout_RAX_01;
  Map_MapObject_o *extraout_RAX_02;
  Map_MapObject_o *extraout_RAX_03;
  byte bVar22;
  int iVar23;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar24;
  MethodInfo *pMVar25;
  undefined8 extraout_RDX_01;
  Il2CppClass *pIVar26;
  Il2CppClass *pIVar27;
  System_Collections_Generic_Dictionary_int__object__o *pSVar28;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar29;
  UnityEngine_Vector3_o value_00;
  
  pIVar26 = (Il2CppClass *)collider;
  if (g_data_057ac49d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    pIVar26 = (Il2CppClass *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac49d = '\x01';
  }
  if (collider != (UnityEngine_Collider_o *)0x0) {
    method = (MethodInfo *)0x0;
    pIVar14 = (Il2CppClass *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    pIVar26 = (Il2CppClass *)collider;
    while (pIVar20 = pIVar14, pIVar20 != (Il2CppClass *)0x0) {
      method = (MethodInfo *)0x0;
      pIVar14 = (Il2CppClass *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar20,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               (TypeInfo_MapLoader[2].fields._entries)->bounds;
      pIVar26 = (Il2CppClass *)0x0;
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      method = (MethodInfo *)pIVar14;
      bVar12 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                         (pSVar4,(Il2CppObject *)pIVar14,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar12 != '\0') {
        if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (TypeInfo_MapLoader[2].fields._entries)->bounds;
        pIVar26 = (Il2CppClass *)0x0;
        if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pMVar16 = (Map_MapObject_o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar4,(Il2CppObject *)pIVar14,MethodInfo_MapObject_get_Item);
          return pMVar16;
        }
        break;
      }
      pUVar15 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pIVar20,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar12 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        return (Map_MapObject_o *)0x0;
      }
      method = (MethodInfo *)0x0;
      pIVar14 = (Il2CppClass *)
                UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pIVar20,(MethodInfo *)0x0);
      pIVar26 = pIVar20;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar24 = extraout_RDX;
  pIVar14 = (Il2CppClass *)method;
  if (g_data_057ac49e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapHandler);
    il2cpp_runtime_helper_023445d0(&"Interact/Supply");
    il2cpp_runtime_helper_023445d0(&"Map load error: map object with duplicate ID found (");
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&"Supply");
    g_data_057ac49e = '\x01';
    uVar24 = extraout_RDX_00;
  }
  if (pIVar26 == (Il2CppClass *)0x0) {
label_040a5b88:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar19 = (pIVar26->_1).image;
    bVar1 = (pMVar19->_2).naturalAligment;
    pMVar25 = (MethodInfo *)CONCAT71((int7)((ulong)uVar24 >> 8),bVar1);
    bVar22 = (TypeInfo_MapScriptSceneObject->_2).naturalAligment;
    if ((bVar1 < bVar22) || ((pMVar19->_2).typeHierarchy[(ulong)bVar22 - 1] != TypeInfo_MapScriptSceneObject)) {
      pIVar20 = (Il2CppClass *)0x0;
label_040a57bb:
      uVar2 = *(uint *)((long)&(pIVar26->_1).byval_arg.data + 4);
      pMVar16 = (Map_MapObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapObject);
      pIVar14 = (Il2CppClass *)(ulong)uVar2;
      in_R8 = (MethodInfo *)0x0;
      Map_MapObject___ctor
                (pMVar16,uVar2,(UnityEngine_GameObject_o *)pIVar20,(Map_MapScriptBaseObject_o *)pIVar26,
                 (MethodInfo *)0x0);
      if ((pMVar16 != (Map_MapObject_o *)0x0) &&
         (pMVar5 = (pMVar16->fields).ScriptObject, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
        iVar3 = (pMVar5->fields).Id;
        if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = TypeInfo_MapLoader[2].fields._entries;
        iVar23 = pSVar6->m_Items[3].fields.hashCode;
        if (iVar23 <= iVar3) {
          iVar23 = iVar3;
        }
        pSVar6->m_Items[3].fields.hashCode = iVar23;
        pIVar27 = (pSVar6->obj).klass;
        if (pIVar27 != (Il2CppClass *)0x0) {
          pIVar11 = &(pIVar26->_1).byval_arg;
          pIVar14 = (Il2CppClass *)(ulong)*(uint *)&pIVar11->data;
          bVar12 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                             ((System_Collections_Generic_Dictionary_int__object__o *)pIVar27,
                              *(uint *)&pIVar11->data,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar12 != '\0') {
            pSVar17 = System_Int32__ToString((int32_t)pIVar11,(MethodInfo *)0x0);
            pSVar17 = System_String__Concat_3af7150("Map load error: map object with duplicate ID found (",pSVar17,")",(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            ApplicationManagers_DebugConsole__Log(pSVar17,1,(MethodInfo *)0x0);
            return pMVar16;
          }
          if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar27 = ((TypeInfo_MapLoader[2].fields._entries)->obj).klass;
          if (pIVar27 != (Il2CppClass *)0x0) {
            pIVar14 = (Il2CppClass *)(ulong)*(uint *)&pIVar11->data;
            System_Collections_Generic_Dictionary_int__object___Add
                      ((System_Collections_Generic_Dictionary_int__object__o *)pIVar27,*(uint *)&pIVar11->data
                       ,(Il2CppObject *)pMVar16,MethodInfo_Void_Add);
            pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (TypeInfo_MapLoader[2].fields._entries)->bounds;
            if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___Add
                        (pSVar4,(Il2CppObject *)pIVar20,(Il2CppObject *)pMVar16,MethodInfo_Void_Add);
              if (*(int *)((long)&(pIVar26->_1).byval_arg.data + 4) < 1) {
label_040a59e1:
                iVar3 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
joined_r0x040a5b5a:
                if (iVar3 == 0) {
                  il2cpp_runtime_helper_02337ed0();
                  Map_MapLoader__SetTransform(pMVar16,(MethodInfo *)pIVar20);
                  pIVar14 = pIVar20;
                }
                else {
                  Map_MapLoader__SetTransform(pMVar16,(MethodInfo *)pIVar20);
                  pIVar14 = pIVar20;
                }
                if ((char)method != '\0') {
                  return pMVar16;
                }
                if ((char)(pIVar26->_1).byval_arg.bits == '\0') {
                  pUVar7 = (pMVar16->fields).GameObject;
                  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_040a5b88;
                  pIVar14 = (Il2CppClass *)0x0;
                  UnityEngine_GameObject__SetActive(pUVar7,0,(MethodInfo *)0x0);
                }
                pSVar17 = (System_String_o *)(pIVar26->_1).namespaze;
                if (pSVar17 != (System_String_o *)0x0) {
                  pIVar14 = "Interact/Supply";
                  bVar12 = System_String__StartsWith
                                     (pSVar17,(System_String_o *)"Interact/Supply",(MethodInfo *)0x0);
                  if ((char)bVar12 == '\0') {
                    return pMVar16;
                  }
                  pUVar7 = (pMVar16->fields).GameObject;
                  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar15 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UI_MinimapHandler__CreateMinimapIcon(pUVar15,"Supply",(MethodInfo *)0x0);
                    return pMVar16;
                  }
                }
              }
              else {
                if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar28 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
                pIVar14 = pIVar20;
                if (pSVar28 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                  uVar2 = *(uint *)((long)&(pIVar26->_1).byval_arg.data + 4);
                  pIVar14 = (Il2CppClass *)(ulong)uVar2;
                  bVar12 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                     (pSVar28,uVar2,MethodInfo_Boolean_ContainsKey);
                  if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar28 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
                  uVar2 = *(uint *)((long)&(pIVar26->_1).byval_arg.data + 4);
                  pIVar20 = (Il2CppClass *)(ulong)uVar2;
                  if ((char)bVar12 == '\0') {
                    pSVar18 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_int);
                    pIVar14 = MethodInfo_HashSet_1_System_Int32;
                    System_Collections_Generic_HashSet_int____ctor(pSVar18,(MethodInfo_33D4530 *)MethodInfo_HashSet_1_System_Int32)
                    ;
                    if (pSVar18 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                      pIVar14 = (Il2CppClass *)(ulong)*(uint *)&pIVar11->data;
                      System_Collections_Generic_HashSet_int___Add
                                (pSVar18,*(uint *)&pIVar11->data,MethodInfo_Boolean_Add);
                      if (pSVar28 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                        System_Collections_Generic_Dictionary_int__object___Add
                                  (pSVar28,uVar2,(Il2CppObject *)pSVar18,MethodInfo_Void_Add);
                        iVar3 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
                        goto joined_r0x040a5b5a;
                      }
                    }
                  }
                  else if ((pSVar28 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                          (pSVar18 = (System_Collections_Generic_HashSet_int__o *)
                                     System_Collections_Generic_Dictionary_int__object___get_Item
                                               (pSVar28,uVar2,MethodInfo_HashSet_1_System_Int32_get_Item), pIVar14 = pIVar20,
                          pSVar18 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
                    pIVar20 = (Il2CppClass *)(ulong)*(uint *)&pIVar11->data;
                    System_Collections_Generic_HashSet_int___Add(pSVar18,*(uint *)&pIVar11->data,MethodInfo_Boolean_Add)
                    ;
                    goto label_040a59e1;
                  }
                }
              }
            }
          }
        }
      }
      goto label_040a5b88;
    }
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar19 = (pIVar26->_1).image;
      pMVar25 = (MethodInfo *)CONCAT71((int7)((ulong)extraout_RDX_01 >> 8),(pMVar19->_2).naturalAligment);
      bVar22 = (TypeInfo_MapScriptSceneObject->_2).naturalAligment;
    }
    pIVar14 = TypeInfo_MapScriptSceneObject;
    if ((bVar22 <= (byte)pMVar25) && ((pMVar19->_2).typeHierarchy[(ulong)bVar22 - 1] == TypeInfo_MapScriptSceneObject)) {
      pIVar20 = (Il2CppClass *)
                Map_MapLoader__LoadSceneObject
                          ((Map_MapScriptSceneObject_o *)pIVar26,(uint)method & 0xff,pMVar25);
      goto label_040a57bb;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  pIVar20 = pIVar14;
  pIVar27 = pIVar26;
  if (g_data_057ac4b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SphereCollider_AddComponent_SphereCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    pIVar27 = (Il2CppClass *)&"None";
    il2cpp_runtime_helper_023445d0();
    g_data_057ac4b0 = '\x01';
  }
  if (pIVar26 != (Il2CppClass *)0x0) {
    pMVar25 = "None";
    bVar12 = System_String__op_Equality
                       ((System_String_o *)(pIVar26->_1).namespaze,(System_String_o *)"None",
                        (MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      pSVar17 = (System_String_o *)(pIVar26->_1).namespaze;
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar16 = (Map_MapObject_o *)Map_MapLoader__LoadPrefabCached(pSVar17,pMVar25);
    }
    else {
      pMVar16 = (Map_MapObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc3c0((UnityEngine_GameObject_o *)pMVar16,(MethodInfo *)0x0);
    }
    if ((char)pIVar14 == '\0') {
      pSVar17 = (pIVar26->_1).generic_class;
      pSVar8 = (pIVar26->_1).typeMetadataHandle;
      physicsMaterial = (pIVar26->_1).interopData;
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapLoader__SetPhysics((UnityEngine_GameObject_o *)pMVar16,pSVar17,pSVar8,physicsMaterial,in_R8);
    }
    else {
      if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar25 = (MethodInfo *)**(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
      if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar17 = *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x40);
      pSVar8 = (pIVar26->_1).interopData;
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar13 = Map_MapLoader__SetPhysics
                         ((UnityEngine_GameObject_o *)pMVar16,(System_String_o *)pMVar25,pSVar17,pSVar8,in_R8)
      ;
      if (iVar13 == 0) {
        if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Map_MapLoader__TryAddEditorCollider((UnityEngine_GameObject_o *)pMVar16,pMVar25);
      }
    }
    pSVar17 = (System_String_o *)(pIVar26->_1).namespaze;
    pIVar20 = (pIVar26->_1).klass;
    bVar1 = *(undefined1 *)((long)&(pIVar26->_1).byval_arg.bits + 2);
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Map_MapLoader__SetMaterial
              ((UnityEngine_GameObject_o *)pMVar16,pSVar17,(Map_MapScriptBaseMaterial_o *)pIVar20,(uint)bVar1,
               (uint)pIVar14 & 0xff,in_R9);
    return pMVar16;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar26 = pIVar27;
  if ((pIVar27 != (Il2CppClass *)0x0) &&
     (pIVar14 = (Il2CppClass *)(pIVar27->_1).namespaze, pIVar14 != (Il2CppClass *)0x0)) {
    pvVar9 = (pIVar27->_1).byval_arg.data;
    pIVar20 = (Il2CppClass *)0x0;
    pIVar26 = pIVar14;
    pUVar15 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pIVar14,(MethodInfo *)0x0);
    if (pvVar9 != (void *)0x0) {
      UnityEngine_GameObject__set_isStatic
                ((UnityEngine_GameObject_o *)pIVar14,(uint)*(byte *)((long)pvVar9 + 0x29),(MethodInfo *)0x0);
      pIVar20 = *(Il2CppClass **)((long)pvVar9 + 0x30);
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pIVar14,(System_String_o *)pIVar20,(MethodInfo *)0x0);
      pIVar26 = pIVar14;
      if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_position
                  (pUVar15,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)((long)pvVar9 + 0x38),
                   (MethodInfo *)0x0);
        UVar29.fields.x = (float)*(undefined8 *)((long)pvVar9 + 0x44) * 0.017453292;
        UVar29.fields.y = (float)((ulong)*(undefined8 *)((long)pvVar9 + 0x44) >> 0x20) * 0.017453292;
        UVar29.fields.z = *(float *)((long)pvVar9 + 0x4c) * 0.017453292;
        value = UnityEngine_Quaternion__Internal_FromEulerRad(UVar29,(MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation(pUVar15,value,(MethodInfo *)0x0);
        UVar29 = UnityEngine_Transform__get_localScale(pUVar15,(MethodInfo *)0x0);
        (pIVar27->_1).byval_arg.bits = (uint)UVar29.fields.x;
        *(float *)&(pIVar27->_1).byval_arg.field_0xc = UVar29.fields.y;
        *(float *)&(pIVar27->_1).this_arg.data = UVar29.fields.z;
        value_00.fields.x = UVar29.fields.x * (float)*(undefined8 *)((long)pvVar9 + 0x50);
        value_00.fields.y = UVar29.fields.y * (float)((ulong)*(undefined8 *)((long)pvVar9 + 0x50) >> 0x20);
        value_00.fields.z = UVar29.fields.z * *(float *)((long)pvVar9 + 0x58);
        UnityEngine_Transform__set_localScale(pUVar15,value_00,(MethodInfo *)0x0);
        return extraout_RAX;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac49f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac49f = '\x01';
    iVar3 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  else {
    iVar3 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar28 = TypeInfo_MapLoader;
  if ((pIVar26 != (Il2CppClass *)0x0) &&
     (pSVar21 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor, pSVar28 = pSVar21,
     pSVar21 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar12 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                       (pSVar21,(int32_t)*(intptr_t *)
                                          &((System_String_Fields *)&(pIVar26->_1).name)->_stringLength,
                        MethodInfo_Boolean_ContainsKey);
    pMVar16 = (Map_MapObject_o *)CONCAT44(extraout_var,bVar12);
    if ((char)bVar12 == '\0') goto label_040a5fd3;
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar28 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
    if (pSVar28 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      pSVar21 = (System_Collections_Generic_Dictionary_int__object__o *)
                System_Collections_Generic_Dictionary_int__object___get_Item
                          (pSVar28,(int32_t)*(intptr_t *)
                                             &((System_String_Fields *)&(pIVar26->_1).name)->_stringLength,
                           MethodInfo_HashSet_1_System_Int32_get_Item);
      pvVar9 = (pIVar26->_1).byval_arg.data;
      if ((pvVar9 != (void *)0x0) && (pSVar21 != (System_Collections_Generic_Dictionary_int__object__o *)0x0))
      {
        bVar12 = System_Collections_Generic_HashSet_int___Contains
                           ((System_Collections_Generic_HashSet_int__o *)pSVar21,
                            *(int32_t *)((long)pvVar9 + 0x20),MethodInfo_Boolean_Contains);
        pMVar16 = (Map_MapObject_o *)CONCAT44(extraout_var_00,bVar12);
        if ((char)bVar12 == '\0') {
label_040a5fd3:
          if (pIVar20 == (Il2CppClass *)0x0) {
            ((System_String_Fields *)&(pIVar26->_1).name)->_stringLength = 0;
            pSVar28 = (System_Collections_Generic_Dictionary_int__object__o *)(pIVar26->_1).namespaze;
            if ((pSVar28 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
               (pUVar15 = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)pSVar28,(MethodInfo *)0x0),
               pUVar15 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent(pUVar15,(UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
              return extraout_RAX_00;
            }
          }
          else {
            if (pIVar26 == pIVar20) {
              return pMVar16;
            }
            pMVar16 = (pIVar26->_1).byval_arg.data;
            pSVar28 = pSVar21;
            if (pMVar16 != (Map_MapObject_o *)0x0) {
              if ((int)*(intptr_t *)&((System_String_Fields *)&(pIVar20->_1).name)->_stringLength ==
                  *(int *)&(pMVar16->fields).ScriptObject) {
                return pMVar16;
              }
              pvVar9 = (pIVar20->_1).byval_arg.data;
              if (pvVar9 != (void *)0x0) {
                ((System_String_Fields *)&(pIVar26->_1).name)->_stringLength =
                     *(undefined4 *)((long)pvVar9 + 0x20);
                pUVar7 = (UnityEngine_GameObject_o *)(pIVar26->_1).namespaze;
                pSVar28 = (System_Collections_Generic_Dictionary_int__object__o *)0x0;
                if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar15 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                  pSVar28 = (System_Collections_Generic_Dictionary_int__object__o *)(pIVar20->_1).namespaze;
                  if ((pSVar28 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                     (p = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)pSVar28,(MethodInfo *)0x0),
                     pUVar15 != (UnityEngine_Transform_o *)0x0)) {
                    UnityEngine_Transform__SetParent(pUVar15,p,(MethodInfo *)0x0);
                    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar21 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
                    pSVar28 = (System_Collections_Generic_Dictionary_int__object__o *)0x0;
                    if (pSVar21 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                      bVar12 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                         (pSVar21,(int32_t)*(intptr_t *)
                                                            &((System_String_Fields *)&(pIVar26->_1).name)->
                                                             _stringLength,MethodInfo_Boolean_ContainsKey);
                      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pSVar21 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
                      iVar13 = (int32_t)*(intptr_t *)
                                         &((System_String_Fields *)&(pIVar26->_1).name)->_stringLength;
                      if ((char)bVar12 == '\0') {
                        __this = (System_Collections_Generic_Dictionary_int__object__o *)
                                 il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_int);
                        pSVar28 = __this;
                        System_Collections_Generic_HashSet_int____ctor
                                  ((System_Collections_Generic_HashSet_int__o *)__this,
                                   (MethodInfo_33D4530 *)MethodInfo_HashSet_1_System_Int32);
                        pvVar9 = (pIVar26->_1).byval_arg.data;
                        if (((pvVar9 != (void *)0x0) &&
                            (__this != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) &&
                           (pSVar28 = __this,
                           System_Collections_Generic_HashSet_int___Add
                                     ((System_Collections_Generic_HashSet_int__o *)__this,
                                      *(int32_t *)((long)pvVar9 + 0x20),MethodInfo_Boolean_Add),
                           pSVar21 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
                          System_Collections_Generic_Dictionary_int__object___Add
                                    (pSVar21,iVar13,(Il2CppObject *)__this,MethodInfo_Void_Add);
                          return extraout_RAX_01;
                        }
                      }
                      else {
                        pSVar28 = TypeInfo_MapLoader;
                        if (pSVar21 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                          pSVar18 = (System_Collections_Generic_HashSet_int__o *)
                                    System_Collections_Generic_Dictionary_int__object___get_Item
                                              (pSVar21,iVar13,MethodInfo_HashSet_1_System_Int32_get_Item);
                          pvVar9 = (pIVar26->_1).byval_arg.data;
                          pSVar28 = pSVar21;
                          if ((pvVar9 != (void *)0x0) &&
                             (pSVar18 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
                            bVar12 = System_Collections_Generic_HashSet_int___Add
                                               (pSVar18,*(int32_t *)((long)pvVar9 + 0x20),MethodInfo_Boolean_Add);
                            return (Map_MapObject_o *)CONCAT44(extraout_var_02,bVar12);
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
        else {
          if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar28 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
          if (pSVar28 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            pSVar21 = (System_Collections_Generic_Dictionary_int__object__o *)
                      System_Collections_Generic_Dictionary_int__object___get_Item
                                (pSVar28,(int32_t)*(intptr_t *)
                                                   &((System_String_Fields *)&(pIVar26->_1).name)->
                                                    _stringLength,MethodInfo_HashSet_1_System_Int32_get_Item);
            pvVar9 = (pIVar26->_1).byval_arg.data;
            if ((pvVar9 != (void *)0x0) &&
               (pSVar21 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
              bVar12 = System_Collections_Generic_HashSet_int___Remove
                                 ((System_Collections_Generic_HashSet_int__o *)pSVar21,
                                  *(int32_t *)((long)pvVar9 + 0x20),MethodInfo_Boolean_Remove);
              pMVar16 = (Map_MapObject_o *)CONCAT44(extraout_var_01,bVar12);
              goto label_040a5fd3;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac4a0 = '\x01';
    iVar3 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  else {
    iVar3 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (((pSVar28 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
      (lVar10 = *(long *)&(pSVar28->fields)._count, lVar10 != 0)) &&
     (pIVar26 = ((TypeInfo_MapLoader[2].fields._entries)->obj).klass, pIVar26 != (Il2CppClass *)0x0)) {
    uVar2 = *(uint *)(lVar10 + 0x20);
    pMVar25 = (MethodInfo *)(ulong)uVar2;
    bVar12 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_int__object__o *)pIVar26,uVar2,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar12 == '\0') goto label_040a6341;
    lVar10 = *(long *)&(pSVar28->fields)._count;
    if (lVar10 != 0) {
      iVar13 = *(int32_t *)(lVar10 + 0x20);
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapLoader__DeleteObject_3fa6370(iVar13,pMVar25);
      return extraout_RAX_02;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040a6341:
  pSVar6 = (pSVar28->fields)._entries;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar6,(MethodInfo *)0x0);
  return extraout_RAX_03;
}


// Map.MapLoader$$LoadObject
// il2cpp: Map_MapObject_o* Map_MapLoader__LoadObject (Map_MapScriptBaseObject_o* scriptObject, bool editor, const MethodInfo* method);
// 0x40a5680

Map_MapObject_o *
Map_MapLoader__LoadObject(Map_MapScriptBaseObject_o *scriptObject,bool_conflict editor,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  Map_MapScriptBaseObject_o *pMVar5;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_GameObject_o *pUVar7;
  System_String_o *pSVar8;
  System_String_o *physicsMaterial;
  void *pvVar9;
  long lVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  Map_MapObject_o *pMVar13;
  System_String_o *pSVar14;
  System_Collections_Generic_HashSet_int__o *pSVar15;
  UnityEngine_Transform_o *pUVar16;
  Map_MapScriptBaseObject_c *pMVar17;
  Il2CppClass *pIVar18;
  Map_MapObject_o *extraout_RAX;
  undefined4 extraout_var;
  System_Collections_Generic_Dictionary_int__object__o *pSVar19;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  Map_MapObject_o *extraout_RAX_00;
  UnityEngine_Transform_o *p;
  undefined4 extraout_var_02;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  Map_MapObject_o *extraout_RAX_01;
  Map_MapObject_o *extraout_RAX_02;
  Map_MapObject_o *extraout_RAX_03;
  byte bVar20;
  int iVar21;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar22;
  undefined8 extraout_RDX_00;
  undefined4 in_register_00000034;
  Il2CppClass *pIVar23;
  Il2CppClass *pIVar24;
  Il2CppClass *__this_01;
  System_Collections_Generic_Dictionary_int__object__o *pSVar25;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar26;
  UnityEngine_Vector3_o value_00;
  
  pIVar23 = (Il2CppClass *)CONCAT44(in_register_00000034,editor);
  if (g_data_057ac49e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapHandler);
    il2cpp_runtime_helper_023445d0(&"Interact/Supply");
    il2cpp_runtime_helper_023445d0(&"Map load error: map object with duplicate ID found (");
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&"Supply");
    g_data_057ac49e = '\x01';
    method = extraout_RDX;
  }
  if (scriptObject == (Map_MapScriptBaseObject_o *)0x0) {
label_040a5b88:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar17 = scriptObject->klass;
    bVar2 = (pMVar17->_2).naturalAligment;
    pMVar22 = (MethodInfo *)CONCAT71((int7)((ulong)method >> 8),bVar2);
    bVar20 = (TypeInfo_MapScriptSceneObject->_2).naturalAligment;
    if ((bVar2 < bVar20) || ((pMVar17->_2).typeHierarchy[(ulong)bVar20 - 1] != TypeInfo_MapScriptSceneObject)) {
      pIVar18 = (Il2CppClass *)0x0;
label_040a57bb:
      uVar3 = (scriptObject->fields).Parent;
      pMVar13 = (Map_MapObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapObject);
      pIVar23 = (Il2CppClass *)(ulong)uVar3;
      in_R8 = (MethodInfo *)0x0;
      Map_MapObject___ctor(pMVar13,uVar3,(UnityEngine_GameObject_o *)pIVar18,scriptObject,(MethodInfo *)0x0);
      if ((pMVar13 != (Map_MapObject_o *)0x0) &&
         (pMVar5 = (pMVar13->fields).ScriptObject, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
        iVar4 = (pMVar5->fields).Id;
        if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = TypeInfo_MapLoader[2].fields._entries;
        iVar21 = pSVar6->m_Items[3].fields.hashCode;
        if (iVar21 <= iVar4) {
          iVar21 = iVar4;
        }
        pSVar6->m_Items[3].fields.hashCode = iVar21;
        pIVar24 = (pSVar6->obj).klass;
        if (pIVar24 != (Il2CppClass *)0x0) {
          piVar1 = &(scriptObject->fields).Id;
          pIVar23 = (Il2CppClass *)(ulong)(uint)*piVar1;
          bVar11 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                             ((System_Collections_Generic_Dictionary_int__object__o *)pIVar24,*piVar1,
                              MethodInfo_Boolean_ContainsKey);
          if ((char)bVar11 != '\0') {
            pSVar14 = System_Int32__ToString((int32_t)piVar1,(MethodInfo *)0x0);
            pSVar14 = System_String__Concat_3af7150("Map load error: map object with duplicate ID found (",pSVar14,")",(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            ApplicationManagers_DebugConsole__Log(pSVar14,1,(MethodInfo *)0x0);
            return pMVar13;
          }
          if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar24 = ((TypeInfo_MapLoader[2].fields._entries)->obj).klass;
          if (pIVar24 != (Il2CppClass *)0x0) {
            pIVar23 = (Il2CppClass *)(ulong)(uint)*piVar1;
            System_Collections_Generic_Dictionary_int__object___Add
                      ((System_Collections_Generic_Dictionary_int__object__o *)pIVar24,*piVar1,
                       (Il2CppObject *)pMVar13,MethodInfo_Void_Add);
            __this = (System_Collections_Generic_Dictionary_object__object__o *)
                     (TypeInfo_MapLoader[2].fields._entries)->bounds;
            if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,(Il2CppObject *)pIVar18,(Il2CppObject *)pMVar13,MethodInfo_Void_Add);
              if ((scriptObject->fields).Parent < 1) {
label_040a59e1:
                iVar4 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
joined_r0x040a5b5a:
                if (iVar4 == 0) {
                  il2cpp_runtime_helper_02337ed0();
                  Map_MapLoader__SetTransform(pMVar13,(MethodInfo *)pIVar18);
                  pIVar23 = pIVar18;
                }
                else {
                  Map_MapLoader__SetTransform(pMVar13,(MethodInfo *)pIVar18);
                  pIVar23 = pIVar18;
                }
                if ((char)editor != '\0') {
                  return pMVar13;
                }
                if ((char)(scriptObject->fields).Active == '\0') {
                  pUVar7 = (pMVar13->fields).GameObject;
                  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_040a5b88;
                  pIVar23 = (Il2CppClass *)0x0;
                  UnityEngine_GameObject__SetActive(pUVar7,0,(MethodInfo *)0x0);
                }
                pSVar14 = (scriptObject->fields).Asset;
                if (pSVar14 != (System_String_o *)0x0) {
                  pIVar23 = "Interact/Supply";
                  bVar11 = System_String__StartsWith
                                     (pSVar14,(System_String_o *)"Interact/Supply",(MethodInfo *)0x0);
                  if ((char)bVar11 == '\0') {
                    return pMVar13;
                  }
                  pUVar7 = (pMVar13->fields).GameObject;
                  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar16 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UI_MinimapHandler__CreateMinimapIcon(pUVar16,"Supply",(MethodInfo *)0x0);
                    return pMVar13;
                  }
                }
              }
              else {
                if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar25 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
                pIVar23 = pIVar18;
                if (pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                  uVar3 = (scriptObject->fields).Parent;
                  pIVar23 = (Il2CppClass *)(ulong)uVar3;
                  bVar11 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                     (pSVar25,uVar3,MethodInfo_Boolean_ContainsKey);
                  if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar25 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
                  uVar3 = (scriptObject->fields).Parent;
                  pIVar18 = (Il2CppClass *)(ulong)uVar3;
                  if ((char)bVar11 == '\0') {
                    pSVar15 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_int);
                    pIVar23 = MethodInfo_HashSet_1_System_Int32;
                    System_Collections_Generic_HashSet_int____ctor(pSVar15,(MethodInfo_33D4530 *)MethodInfo_HashSet_1_System_Int32)
                    ;
                    if (pSVar15 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                      pIVar23 = (Il2CppClass *)(ulong)(uint)*piVar1;
                      System_Collections_Generic_HashSet_int___Add(pSVar15,*piVar1,MethodInfo_Boolean_Add);
                      if (pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                        System_Collections_Generic_Dictionary_int__object___Add
                                  (pSVar25,uVar3,(Il2CppObject *)pSVar15,MethodInfo_Void_Add);
                        iVar4 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
                        goto joined_r0x040a5b5a;
                      }
                    }
                  }
                  else if ((pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                          (pSVar15 = (System_Collections_Generic_HashSet_int__o *)
                                     System_Collections_Generic_Dictionary_int__object___get_Item
                                               (pSVar25,uVar3,MethodInfo_HashSet_1_System_Int32_get_Item), pIVar23 = pIVar18,
                          pSVar15 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
                    pIVar18 = (Il2CppClass *)(ulong)(uint)*piVar1;
                    System_Collections_Generic_HashSet_int___Add(pSVar15,*piVar1,MethodInfo_Boolean_Add);
                    goto label_040a59e1;
                  }
                }
              }
            }
          }
        }
      }
      goto label_040a5b88;
    }
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar17 = scriptObject->klass;
      pMVar22 = (MethodInfo *)CONCAT71((int7)((ulong)extraout_RDX_00 >> 8),(pMVar17->_2).naturalAligment);
      bVar20 = (TypeInfo_MapScriptSceneObject->_2).naturalAligment;
    }
    pIVar23 = TypeInfo_MapScriptSceneObject;
    if ((bVar20 <= (byte)pMVar22) && ((pMVar17->_2).typeHierarchy[(ulong)bVar20 - 1] == TypeInfo_MapScriptSceneObject)) {
      pIVar18 = (Il2CppClass *)
                Map_MapLoader__LoadSceneObject
                          ((Map_MapScriptSceneObject_o *)scriptObject,editor & 0xff,pMVar22);
      goto label_040a57bb;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  pIVar18 = pIVar23;
  pIVar24 = (Il2CppClass *)scriptObject;
  if (g_data_057ac4b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SphereCollider_AddComponent_SphereCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    pIVar24 = (Il2CppClass *)&"None";
    il2cpp_runtime_helper_023445d0();
    g_data_057ac4b0 = '\x01';
  }
  if ((Il2CppClass *)scriptObject != (Il2CppClass *)0x0) {
    pMVar22 = "None";
    bVar11 = System_String__op_Equality
                       ((System_String_o *)(((Il2CppClass *)scriptObject)->_1).namespaze,
                        (System_String_o *)"None",(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      pSVar14 = (System_String_o *)(((Il2CppClass *)scriptObject)->_1).namespaze;
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar13 = (Map_MapObject_o *)Map_MapLoader__LoadPrefabCached(pSVar14,pMVar22);
    }
    else {
      pMVar13 = (Map_MapObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc3c0((UnityEngine_GameObject_o *)pMVar13,(MethodInfo *)0x0);
    }
    if ((char)pIVar23 == '\0') {
      pSVar14 = (((Il2CppClass *)scriptObject)->_1).generic_class;
      pSVar8 = (((Il2CppClass *)scriptObject)->_1).typeMetadataHandle;
      physicsMaterial = (((Il2CppClass *)scriptObject)->_1).interopData;
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapLoader__SetPhysics((UnityEngine_GameObject_o *)pMVar13,pSVar14,pSVar8,physicsMaterial,in_R8);
    }
    else {
      if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar22 = (MethodInfo *)**(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
      if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar14 = *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x40);
      pSVar8 = (((Il2CppClass *)scriptObject)->_1).interopData;
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar12 = Map_MapLoader__SetPhysics
                         ((UnityEngine_GameObject_o *)pMVar13,(System_String_o *)pMVar22,pSVar14,pSVar8,in_R8)
      ;
      if (iVar12 == 0) {
        if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Map_MapLoader__TryAddEditorCollider((UnityEngine_GameObject_o *)pMVar13,pMVar22);
      }
    }
    pSVar14 = (System_String_o *)(((Il2CppClass *)scriptObject)->_1).namespaze;
    pIVar18 = (((Il2CppClass *)scriptObject)->_1).klass;
    bVar2 = *(undefined1 *)((long)&(((Il2CppClass *)scriptObject)->_1).byval_arg.bits + 2);
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Map_MapLoader__SetMaterial
              ((UnityEngine_GameObject_o *)pMVar13,pSVar14,(Map_MapScriptBaseMaterial_o *)pIVar18,(uint)bVar2,
               (uint)pIVar23 & 0xff,in_R9);
    return pMVar13;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar23 = pIVar24;
  if ((pIVar24 != (Il2CppClass *)0x0) &&
     (__this_01 = (Il2CppClass *)(pIVar24->_1).namespaze, __this_01 != (Il2CppClass *)0x0)) {
    pvVar9 = (pIVar24->_1).byval_arg.data;
    pIVar18 = (Il2CppClass *)0x0;
    pIVar23 = __this_01;
    pUVar16 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
    if (pvVar9 != (void *)0x0) {
      UnityEngine_GameObject__set_isStatic
                ((UnityEngine_GameObject_o *)__this_01,(uint)*(byte *)((long)pvVar9 + 0x29),(MethodInfo *)0x0)
      ;
      pIVar18 = *(Il2CppClass **)((long)pvVar9 + 0x30);
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)__this_01,(System_String_o *)pIVar18,(MethodInfo *)0x0);
      pIVar23 = __this_01;
      if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_position
                  (pUVar16,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)((long)pvVar9 + 0x38),
                   (MethodInfo *)0x0);
        UVar26.fields.x = (float)*(undefined8 *)((long)pvVar9 + 0x44) * 0.017453292;
        UVar26.fields.y = (float)((ulong)*(undefined8 *)((long)pvVar9 + 0x44) >> 0x20) * 0.017453292;
        UVar26.fields.z = *(float *)((long)pvVar9 + 0x4c) * 0.017453292;
        value = UnityEngine_Quaternion__Internal_FromEulerRad(UVar26,(MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation(pUVar16,value,(MethodInfo *)0x0);
        UVar26 = UnityEngine_Transform__get_localScale(pUVar16,(MethodInfo *)0x0);
        (pIVar24->_1).byval_arg.bits = (uint)UVar26.fields.x;
        *(float *)&(pIVar24->_1).byval_arg.field_0xc = UVar26.fields.y;
        *(float *)&(pIVar24->_1).this_arg.data = UVar26.fields.z;
        value_00.fields.x = UVar26.fields.x * (float)*(undefined8 *)((long)pvVar9 + 0x50);
        value_00.fields.y = UVar26.fields.y * (float)((ulong)*(undefined8 *)((long)pvVar9 + 0x50) >> 0x20);
        value_00.fields.z = UVar26.fields.z * *(float *)((long)pvVar9 + 0x58);
        UnityEngine_Transform__set_localScale(pUVar16,value_00,(MethodInfo *)0x0);
        return extraout_RAX;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac49f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac49f = '\x01';
    iVar4 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  else {
    iVar4 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  if (iVar4 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar25 = TypeInfo_MapLoader;
  if ((pIVar23 != (Il2CppClass *)0x0) &&
     (pSVar19 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor, pSVar25 = pSVar19,
     pSVar19 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar11 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                       (pSVar19,(int32_t)*(intptr_t *)
                                          &((System_String_Fields *)&(pIVar23->_1).name)->_stringLength,
                        MethodInfo_Boolean_ContainsKey);
    pMVar13 = (Map_MapObject_o *)CONCAT44(extraout_var,bVar11);
    if ((char)bVar11 == '\0') goto label_040a5fd3;
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar25 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
    if (pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      pSVar19 = (System_Collections_Generic_Dictionary_int__object__o *)
                System_Collections_Generic_Dictionary_int__object___get_Item
                          (pSVar25,(int32_t)*(intptr_t *)
                                             &((System_String_Fields *)&(pIVar23->_1).name)->_stringLength,
                           MethodInfo_HashSet_1_System_Int32_get_Item);
      pvVar9 = (pIVar23->_1).byval_arg.data;
      if ((pvVar9 != (void *)0x0) && (pSVar19 != (System_Collections_Generic_Dictionary_int__object__o *)0x0))
      {
        bVar11 = System_Collections_Generic_HashSet_int___Contains
                           ((System_Collections_Generic_HashSet_int__o *)pSVar19,
                            *(int32_t *)((long)pvVar9 + 0x20),MethodInfo_Boolean_Contains);
        pMVar13 = (Map_MapObject_o *)CONCAT44(extraout_var_00,bVar11);
        if ((char)bVar11 == '\0') {
label_040a5fd3:
          if (pIVar18 == (Il2CppClass *)0x0) {
            ((System_String_Fields *)&(pIVar23->_1).name)->_stringLength = 0;
            pSVar25 = (System_Collections_Generic_Dictionary_int__object__o *)(pIVar23->_1).namespaze;
            if ((pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
               (pUVar16 = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)pSVar25,(MethodInfo *)0x0),
               pUVar16 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent(pUVar16,(UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
              return extraout_RAX_00;
            }
          }
          else {
            if (pIVar23 == pIVar18) {
              return pMVar13;
            }
            pMVar13 = (pIVar23->_1).byval_arg.data;
            pSVar25 = pSVar19;
            if (pMVar13 != (Map_MapObject_o *)0x0) {
              if ((int)*(intptr_t *)&((System_String_Fields *)&(pIVar18->_1).name)->_stringLength ==
                  *(int *)&(pMVar13->fields).ScriptObject) {
                return pMVar13;
              }
              pvVar9 = (pIVar18->_1).byval_arg.data;
              if (pvVar9 != (void *)0x0) {
                ((System_String_Fields *)&(pIVar23->_1).name)->_stringLength =
                     *(undefined4 *)((long)pvVar9 + 0x20);
                pUVar7 = (UnityEngine_GameObject_o *)(pIVar23->_1).namespaze;
                pSVar25 = (System_Collections_Generic_Dictionary_int__object__o *)0x0;
                if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar16 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
                  pSVar25 = (System_Collections_Generic_Dictionary_int__object__o *)(pIVar18->_1).namespaze;
                  if ((pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                     (p = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)pSVar25,(MethodInfo *)0x0),
                     pUVar16 != (UnityEngine_Transform_o *)0x0)) {
                    UnityEngine_Transform__SetParent(pUVar16,p,(MethodInfo *)0x0);
                    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar19 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
                    pSVar25 = (System_Collections_Generic_Dictionary_int__object__o *)0x0;
                    if (pSVar19 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                      bVar11 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                         (pSVar19,(int32_t)*(intptr_t *)
                                                            &((System_String_Fields *)&(pIVar23->_1).name)->
                                                             _stringLength,MethodInfo_Boolean_ContainsKey);
                      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pSVar19 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
                      iVar12 = (int32_t)*(intptr_t *)
                                         &((System_String_Fields *)&(pIVar23->_1).name)->_stringLength;
                      if ((char)bVar11 == '\0') {
                        __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                                    il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_int);
                        pSVar25 = __this_00;
                        System_Collections_Generic_HashSet_int____ctor
                                  ((System_Collections_Generic_HashSet_int__o *)__this_00,
                                   (MethodInfo_33D4530 *)MethodInfo_HashSet_1_System_Int32);
                        pvVar9 = (pIVar23->_1).byval_arg.data;
                        if (((pvVar9 != (void *)0x0) &&
                            (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) &&
                           (pSVar25 = __this_00,
                           System_Collections_Generic_HashSet_int___Add
                                     ((System_Collections_Generic_HashSet_int__o *)__this_00,
                                      *(int32_t *)((long)pvVar9 + 0x20),MethodInfo_Boolean_Add),
                           pSVar19 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
                          System_Collections_Generic_Dictionary_int__object___Add
                                    (pSVar19,iVar12,(Il2CppObject *)__this_00,MethodInfo_Void_Add);
                          return extraout_RAX_01;
                        }
                      }
                      else {
                        pSVar25 = TypeInfo_MapLoader;
                        if (pSVar19 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                          pSVar15 = (System_Collections_Generic_HashSet_int__o *)
                                    System_Collections_Generic_Dictionary_int__object___get_Item
                                              (pSVar19,iVar12,MethodInfo_HashSet_1_System_Int32_get_Item);
                          pvVar9 = (pIVar23->_1).byval_arg.data;
                          pSVar25 = pSVar19;
                          if ((pvVar9 != (void *)0x0) &&
                             (pSVar15 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
                            bVar11 = System_Collections_Generic_HashSet_int___Add
                                               (pSVar15,*(int32_t *)((long)pvVar9 + 0x20),MethodInfo_Boolean_Add);
                            return (Map_MapObject_o *)CONCAT44(extraout_var_02,bVar11);
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
        else {
          if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar25 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
          if (pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            pSVar19 = (System_Collections_Generic_Dictionary_int__object__o *)
                      System_Collections_Generic_Dictionary_int__object___get_Item
                                (pSVar25,(int32_t)*(intptr_t *)
                                                   &((System_String_Fields *)&(pIVar23->_1).name)->
                                                    _stringLength,MethodInfo_HashSet_1_System_Int32_get_Item);
            pvVar9 = (pIVar23->_1).byval_arg.data;
            if ((pvVar9 != (void *)0x0) &&
               (pSVar19 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
              bVar11 = System_Collections_Generic_HashSet_int___Remove
                                 ((System_Collections_Generic_HashSet_int__o *)pSVar19,
                                  *(int32_t *)((long)pvVar9 + 0x20),MethodInfo_Boolean_Remove);
              pMVar13 = (Map_MapObject_o *)CONCAT44(extraout_var_01,bVar11);
              goto label_040a5fd3;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac4a0 = '\x01';
    iVar4 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  else {
    iVar4 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  if (iVar4 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (((pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
      (lVar10 = *(long *)&(pSVar25->fields)._count, lVar10 != 0)) &&
     (pIVar23 = ((TypeInfo_MapLoader[2].fields._entries)->obj).klass, pIVar23 != (Il2CppClass *)0x0)) {
    uVar3 = *(uint *)(lVar10 + 0x20);
    pMVar22 = (MethodInfo *)(ulong)uVar3;
    bVar11 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_int__object__o *)pIVar23,uVar3,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar11 == '\0') goto label_040a6341;
    lVar10 = *(long *)&(pSVar25->fields)._count;
    if (lVar10 != 0) {
      iVar12 = *(int32_t *)(lVar10 + 0x20);
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapLoader__DeleteObject_3fa6370(iVar12,pMVar22);
      return extraout_RAX_02;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040a6341:
  pSVar6 = (pSVar25->fields)._entries;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar6,(MethodInfo *)0x0);
  return extraout_RAX_03;
}


// Map.MapLoader$$SetParent
// il2cpp: void Map_MapLoader__SetParent (Map_MapObject_o* obj, Map_MapObject_o* parent, const MethodInfo* method);
// 0x40a5ea0

void Map_MapLoader__SetParent(Map_MapObject_o *obj,Map_MapObject_o *parent,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  uint key;
  Map_MapScriptBaseObject_o *pMVar3;
  UnityEngine_GameObject_o *__this;
  long lVar4;
  Il2CppClass *__this_00;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *obj_00;
  bool_conflict bVar5;
  System_Collections_Generic_Dictionary_int__object__o *pSVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Transform_o *p;
  System_Collections_Generic_HashSet_int__o *__this_01;
  System_Collections_Generic_Dictionary_int__object__o *__this_02;
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_03;
  
  if (g_data_057ac49f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac49f = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_03 = TypeInfo_MapLoader;
  if ((obj != (Map_MapObject_o *)0x0) &&
     (pSVar6 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor, __this_03 = pSVar6,
     pSVar6 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar5 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar6,(obj->fields).Parent,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar5 == '\0') goto label_040a5fd3;
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_03 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
    if (__this_03 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
               System_Collections_Generic_Dictionary_int__object___get_Item
                         (__this_03,(obj->fields).Parent,MethodInfo_HashSet_1_System_Int32_get_Item);
      pMVar3 = (obj->fields).ScriptObject;
      if ((pMVar3 != (Map_MapScriptBaseObject_o *)0x0) &&
         (pSVar6 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
        bVar5 = System_Collections_Generic_HashSet_int___Contains
                          ((System_Collections_Generic_HashSet_int__o *)pSVar6,(pMVar3->fields).Id,
                           MethodInfo_Boolean_Contains);
        if ((char)bVar5 == '\0') {
label_040a5fd3:
          if (parent == (Map_MapObject_o *)0x0) {
            (obj->fields).Parent = 0;
            __this_03 = (System_Collections_Generic_Dictionary_int__object__o *)(obj->fields).GameObject;
            if ((__this_03 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
               (pUVar7 = UnityEngine_GameObject__get_transform
                                   ((UnityEngine_GameObject_o *)__this_03,(MethodInfo *)0x0),
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
            __this_03 = pSVar6;
            if (pMVar3 != (Map_MapScriptBaseObject_o *)0x0) {
              if ((parent->fields).Parent == (pMVar3->fields).Id) {
                return;
              }
              pMVar3 = (parent->fields).ScriptObject;
              if (pMVar3 != (Map_MapScriptBaseObject_o *)0x0) {
                (obj->fields).Parent = (pMVar3->fields).Id;
                __this = (obj->fields).GameObject;
                __this_03 = (System_Collections_Generic_Dictionary_int__object__o *)0x0;
                if (__this != (UnityEngine_GameObject_o *)0x0) {
                  pUVar7 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
                  __this_03 = (System_Collections_Generic_Dictionary_int__object__o *)
                              (parent->fields).GameObject;
                  if ((__this_03 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                     (p = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)__this_03,(MethodInfo *)0x0),
                     pUVar7 != (UnityEngine_Transform_o *)0x0)) {
                    UnityEngine_Transform__SetParent(pUVar7,p,(MethodInfo *)0x0);
                    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar6 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
                    __this_03 = (System_Collections_Generic_Dictionary_int__object__o *)0x0;
                    if (pSVar6 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                      bVar5 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                        (pSVar6,(obj->fields).Parent,MethodInfo_Boolean_ContainsKey);
                      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pSVar6 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
                      iVar2 = (obj->fields).Parent;
                      if ((char)bVar5 == '\0') {
                        __this_02 = (System_Collections_Generic_Dictionary_int__object__o *)
                                    il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_int);
                        __this_03 = __this_02;
                        System_Collections_Generic_HashSet_int____ctor
                                  ((System_Collections_Generic_HashSet_int__o *)__this_02,MethodInfo_HashSet_1_System_Int32);
                        pMVar3 = (obj->fields).ScriptObject;
                        if (((pMVar3 != (Map_MapScriptBaseObject_o *)0x0) &&
                            (__this_02 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) &&
                           (__this_03 = __this_02,
                           System_Collections_Generic_HashSet_int___Add
                                     ((System_Collections_Generic_HashSet_int__o *)__this_02,
                                      (pMVar3->fields).Id,MethodInfo_Boolean_Add),
                           pSVar6 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
                          System_Collections_Generic_Dictionary_int__object___Add
                                    (pSVar6,iVar2,(Il2CppObject *)__this_02,MethodInfo_Void_Add);
                          return;
                        }
                      }
                      else {
                        __this_03 = TypeInfo_MapLoader;
                        if (pSVar6 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                          __this_01 = (System_Collections_Generic_HashSet_int__o *)
                                      System_Collections_Generic_Dictionary_int__object___get_Item
                                                (pSVar6,iVar2,MethodInfo_HashSet_1_System_Int32_get_Item);
                          pMVar3 = (obj->fields).ScriptObject;
                          __this_03 = pSVar6;
                          if ((pMVar3 != (Map_MapScriptBaseObject_o *)0x0) &&
                             (__this_01 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
                            System_Collections_Generic_HashSet_int___Add
                                      (__this_01,(pMVar3->fields).Id,MethodInfo_Boolean_Add);
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
        else {
          if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_03 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
          if (__this_03 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
                     System_Collections_Generic_Dictionary_int__object___get_Item
                               (__this_03,(obj->fields).Parent,MethodInfo_HashSet_1_System_Int32_get_Item);
            pMVar3 = (obj->fields).ScriptObject;
            if ((pMVar3 != (Map_MapScriptBaseObject_o *)0x0) &&
               (pSVar6 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
              System_Collections_Generic_HashSet_int___Remove
                        ((System_Collections_Generic_HashSet_int__o *)pSVar6,(pMVar3->fields).Id,MethodInfo_Boolean_Remove)
              ;
              goto label_040a5fd3;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac4a0 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (((__this_03 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
      (lVar4 = *(long *)&(__this_03->fields)._count, lVar4 != 0)) &&
     (__this_00 = ((TypeInfo_MapLoader[2].fields._entries)->obj).klass, __this_00 != (Il2CppClass *)0x0)) {
    key = *(uint *)(lVar4 + 0x20);
    method_00 = (MethodInfo *)(ulong)key;
    bVar5 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_int__object__o *)__this_00,key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar5 == '\0') goto label_040a6341;
    lVar4 = *(long *)&(__this_03->fields)._count;
    if (lVar4 != 0) {
      iVar2 = *(int32_t *)(lVar4 + 0x20);
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapLoader__DeleteObject_3fa6370(iVar2,method_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040a6341:
  obj_00 = (__this_03->fields)._entries;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)obj_00,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader$$DeleteObject
// il2cpp: void Map_MapLoader__DeleteObject (Map_MapObject_o* obj, const MethodInfo* method);
// 0x40a6250

void Map_MapLoader__DeleteObject(Map_MapObject_o *obj,MethodInfo *method)

{
  int iVar1;
  uint key;
  int32_t id;
  Map_MapScriptBaseObject_o *pMVar2;
  UnityEngine_Object_o *obj_00;
  bool_conflict bVar3;
  MethodInfo *method_00;
  
  if (g_data_057ac4a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac4a0 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (((obj != (Map_MapObject_o *)0x0) &&
      (pMVar2 = (obj->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) &&
     ((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
      (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    key = (pMVar2->fields).Id;
    method_00 = (MethodInfo *)(ulong)key;
    bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_int__object__o *)
                       **(undefined8 **)(TypeInfo_MapLoader + 0xb8),key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') goto label_040a6341;
    pMVar2 = (obj->fields).ScriptObject;
    if (pMVar2 != (Map_MapScriptBaseObject_o *)0x0) {
      id = (pMVar2->fields).Id;
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapLoader__DeleteObject_3fa6370(id,method_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040a6341:
  obj_00 = (UnityEngine_Object_o *)(obj->fields).GameObject;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__Destroy_4e01c60(obj_00,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader$$DeleteObject
// il2cpp: void Map_MapLoader__DeleteObject (int32_t id, const MethodInfo* method);
// 0x40a6370

void Map_MapLoader__DeleteObject_3fa6370(int32_t id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  UnityEngine_Object_o *obj;
  long lVar2;
  System_Collections_Generic_List_Enumerator_int__o __this_00;
  System_Collections_Generic_List_Enumerator_int__o __this_01;
  System_Collections_Generic_List_Enumerator_int__o __this_02;
  System_Collections_Generic_List_Enumerator_int__o __this_03;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *collection;
  System_Collections_Generic_List_int__o *__this_04;
  Map_MapObject_o *obj_00;
  long *plVar5;
  MethodInfo *method_00;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppType *pIVar8;
  int32_t iVar9;
  int32_t key;
  undefined4 uVar10;
  Il2CppObject *local_50;
  undefined1 local_48 [24];
  
  if (g_data_057ac4a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Int32_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac4a1 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar8 = (Il2CppType *)0x0;
  iVar9 = 0;
  uVar10 = 0;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
      (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    pIVar4 = System_Collections_Generic_Dictionary_int__object___get_Item
                       ((System_Collections_Generic_Dictionary_int__object__o *)
                        **(undefined8 **)(TypeInfo_MapLoader + 0xb8),id,MethodInfo_MapObject_get_Item);
    if ((((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
          (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
        (System_Collections_Generic_Dictionary_int__object___Remove
                   ((System_Collections_Generic_Dictionary_int__object__o *)
                    **(undefined8 **)(TypeInfo_MapLoader + 0xb8),id,MethodInfo_Boolean_Remove), pIVar4 != (Il2CppObject *)0x0))
       && (__this = *(System_Collections_Generic_Dictionary_object__object__o **)
                     (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10),
          __this != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      System_Collections_Generic_Dictionary_object__object___Remove(__this,pIVar4[1].monitor,MethodInfo_Boolean_Remove);
      pSVar1 = *(System_Collections_Generic_Dictionary_int__object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 8);
      if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey(pSVar1,id,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar3 == '\0') goto label_040a6681;
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar1 = *(System_Collections_Generic_Dictionary_int__object__o **)
                  (*(long *)(TypeInfo_MapLoader + 0xb8) + 8);
        if (pSVar1 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          collection = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar1,id,MethodInfo_HashSet_1_System_Int32_get_Item);
          __this_04 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
          System_Collections_Generic_List_int____ctor_35fd820
                    (__this_04,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_System_Int32);
          local_50 = pIVar4;
          if (__this_04 != (System_Collections_Generic_List_int__o *)0x0) {
            System_Collections_Generic_List_int___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_48,__this_04,MethodInfo_List_1_T_Enumerator_System_Int32_GetEnumerator);
            uVar10 = SUB84(local_48._16_8_,4);
            pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
            pIVar8 = (Il2CppType *)local_48._8_8_;
            iVar9 = (int32_t)local_48._16_8_;
label_040a65e0:
            key = iVar9;
            __this_00.fields._8_8_ = pIVar8;
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
            __this_00.fields._current = key;
            __this_00.fields._20_4_ = uVar10;
            bVar3 = System_Collections_Generic_List_Enumerator_int___MoveNext
                              (__this_00,(MethodInfo_3215510 *)&stack0xffffffffffffff98);
            if ((char)bVar3 != '\0') {
              iVar9 = key;
              if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              if ((System_Collections_Generic_Dictionary_int__object__o *)
                  **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
                  (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto code_r0x040a661d;
              il2cpp_runtime_helper_022b2c90();
              goto label_040a66bb;
            }
            __this_01.fields._8_8_ = pIVar8;
            __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
            __this_01.fields._current = key;
            __this_01.fields._20_4_ = uVar10;
            System_Collections_Generic_List_Enumerator_int___Dispose
                      (__this_01,(MethodInfo_3215500 *)&stack0xffffffffffffff98);
            goto label_040a6681;
          }
        }
      }
    }
  }
label_040a66c0:
  auVar6 = il2cpp_runtime_helper_022b2c90();
  pIVar4 = auVar6._0_8_;
  if (auVar6._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(pIVar4);
    lVar2 = *plVar5;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar8;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
    __this_02.fields._current = iVar9;
    __this_02.fields._20_4_ = uVar10;
    System_Collections_Generic_List_Enumerator_int___Dispose
              (__this_02,(MethodInfo_3215500 *)&stack0xffffffffffffff98);
    pIVar4 = local_50;
    if (lVar2 == 0) {
label_040a6681:
      obj = pIVar4[1].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_03.fields._8_8_ = pIVar8;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
  __this_03.fields._current = iVar9;
  __this_03.fields._20_4_ = uVar10;
  System_Collections_Generic_List_Enumerator_int___Dispose
            (__this_03,(MethodInfo_3215500 *)&stack0xffffffffffffff98);
  _Unwind_Resume(pIVar4);
code_r0x040a661d:
  bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                    ((System_Collections_Generic_Dictionary_int__object__o *)
                     **(undefined8 **)(TypeInfo_MapLoader + 0xb8),key,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
        (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
label_040a66bb:
      il2cpp_runtime_helper_022b2c90();
      goto label_040a66c0;
    }
    obj_00 = (Map_MapObject_o *)
             System_Collections_Generic_Dictionary_int__object___get_Item
                       ((System_Collections_Generic_Dictionary_int__object__o *)
                        **(undefined8 **)(TypeInfo_MapLoader + 0xb8),key,MethodInfo_MapObject_get_Item);
    Map_MapLoader__SetParent(obj_00,(Map_MapObject_o *)0x0,method_00);
  }
  goto label_040a65e0;
}


// Map.MapLoader$$LoadObjectsCoroutine
// il2cpp: System_Collections_IEnumerator_o* Map_MapLoader__LoadObjectsCoroutine (Map_MapLoader_o* __this, System_Collections_Generic_List_string__o* customAssets, System_Collections_Generic_List_MapScriptBaseObject__o* objects, bool editor, const MethodInfo* method);
// 0x40a5340

System_Collections_IEnumerator_o *
Map_MapLoader__LoadObjectsCoroutine
          (Map_MapLoader_o *__this,System_Collections_Generic_List_string__o *customAssets,
          System_Collections_Generic_List_MapScriptBaseObject__o *objects,bool_conflict editor,
          MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  Map_MapScriptBaseObject_o *pMVar6;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar7;
  Il2CppClass *pIVar8;
  System_String_o *pSVar9;
  System_String_o *physicsMaterial;
  void *pvVar10;
  long lVar11;
  int32_t *piVar12;
  Il2CppType *pIVar13;
  bool_conflict bVar14;
  int32_t iVar15;
  Il2CppClass *pIVar16;
  Il2CppObject *pIVar17;
  Il2CppClass *pIVar18;
  Il2CppClass *pIVar19;
  UnityEngine_Transform_o *pUVar20;
  Map_MapObject_o *__this_00;
  System_String_o *pSVar21;
  System_Collections_Generic_HashSet_int__o *pSVar22;
  Map_MapLoader__LoadObjectsCoroutine_d__35_c *pMVar23;
  UnityEngine_GameObject_o *pUVar24;
  System_Collections_IEnumerator_o *extraout_RAX;
  System_Collections_IEnumerator_o *pSVar25;
  System_Collections_Generic_Dictionary_int__object__o *pSVar26;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  System_Collections_IEnumerator_o *extraout_RAX_00;
  UnityEngine_Transform_o *p;
  undefined4 extraout_var_02;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  System_Collections_IEnumerator_o *extraout_RAX_01;
  System_Collections_IEnumerator_o *extraout_RAX_02;
  System_Collections_IEnumerator_o *extraout_RAX_03;
  byte bVar27;
  int iVar28;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar29;
  MethodInfo *pMVar30;
  undefined8 extraout_RDX_01;
  undefined1 uVar31;
  Il2CppClass *pIVar32;
  System_Collections_Generic_Dictionary_int__object__o *pSVar33;
  MethodInfo *in_R9;
  float fVar34;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar35;
  UnityEngine_Vector3_o value_00;
  undefined4 extraout_var;
  
  if (g_data_057ac4a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadObjectsCoroutine_d__35);
    g_data_057ac4a2 = '\x01';
  }
  pIVar16 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadObjectsCoroutine_d__35);
  uVar31 = 0;
  pIVar32 = pIVar16;
  Map_MapLoader__LoadObjectsCoroutine_d__35___ctor
            ((Map_MapLoader__LoadObjectsCoroutine_d__35_o *)pIVar16,0,(MethodInfo *)0x0);
  if (pIVar16 != (Il2CppClass *)0x0) {
    *(Map_MapLoader_o **)&(pIVar16->_1).this_arg.bits = __this;
    il2cpp_runtime_helper_022b4080(&(pIVar16->_1).this_arg.bits,__this);
    (pIVar16->_1).byval_arg.data = customAssets;
    il2cpp_runtime_helper_022b4080(&(pIVar16->_1).byval_arg,customAssets);
    (pIVar16->_1).this_arg.data = objects;
    il2cpp_runtime_helper_022b4080(&(pIVar16->_1).this_arg,objects);
    *(char *)&(pIVar16->_1).byval_arg.bits = (char)editor;
    return (System_Collections_IEnumerator_o *)pIVar16;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac49c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLight);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac49c = '\x01';
  }
  pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_MapLight);
  System_Object___ctor(pIVar17,(MethodInfo *)0x0);
  pIVar16 = (Il2CppClass *)(pIVar17 + 1);
  pIVar17[1].klass = pIVar32;
  pIVar18 = pIVar32;
  il2cpp_runtime_helper_022b4080();
  if (pIVar32 != (Il2CppClass *)0x0) {
    fVar34 = UnityEngine_Light__get_intensity((UnityEngine_Light_o *)pIVar32,(MethodInfo *)0x0);
    *(float *)&pIVar17[1].monitor = fVar34;
    pIVar18 = (Il2CppClass *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar32,(MethodInfo *)0x0);
    pIVar17[2].klass = pIVar18;
    il2cpp_runtime_helper_022b4080(pIVar17 + 2);
    *(undefined1 *)&pIVar17[2].monitor = uVar31;
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar11 = MethodInfo_Void_Add;
    pIVar16 = (Il2CppClass *)(TypeInfo_MapLoader[2].fields._entries)->m_Items[0].fields.value;
    if (pIVar16 != (Il2CppClass *)0x0) {
      piVar12 = (int32_t *)((long)&(pIVar16->_1).namespaze + 4);
      *piVar12 = *piVar12 + 1;
      pSVar4 = ((System_Collections_Generic_List_object__Fields *)&(pIVar16->_1).name)->_items;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar2 = *(uint *)&(pIVar16->_1).namespaze;
        if (uVar2 < (uint)pSVar4->max_length) {
          *(uint *)&(pIVar16->_1).namespaze = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = pIVar17;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pIVar17);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pIVar16,pIVar17,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        return (System_Collections_IEnumerator_o *)pIVar17;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar32 = pIVar16;
  if (g_data_057ac49d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    pIVar32 = (Il2CppClass *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac49d = '\x01';
  }
  if (pIVar16 != (Il2CppClass *)0x0) {
    pIVar18 = (Il2CppClass *)0x0;
    pIVar19 = (Il2CppClass *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar16,(MethodInfo *)0x0);
    pIVar32 = pIVar16;
    while (pIVar16 = pIVar19, pIVar16 != (Il2CppClass *)0x0) {
      pIVar18 = (Il2CppClass *)0x0;
      pIVar19 = (Il2CppClass *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar16,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
               (TypeInfo_MapLoader[2].fields._entries)->bounds;
      pIVar32 = (Il2CppClass *)0x0;
      if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      pIVar18 = pIVar19;
      bVar14 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                         (pSVar5,(Il2CppObject *)pIVar19,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar14 != '\0') {
        if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (TypeInfo_MapLoader[2].fields._entries)->bounds;
        pIVar32 = (Il2CppClass *)0x0;
        if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pIVar17 = System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar5,(Il2CppObject *)pIVar19,MethodInfo_MapObject_get_Item);
          return (System_Collections_IEnumerator_o *)pIVar17;
        }
        break;
      }
      pUVar20 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pIVar16,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar14 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        return (System_Collections_IEnumerator_o *)0x0;
      }
      pIVar18 = (Il2CppClass *)0x0;
      pIVar19 = (Il2CppClass *)
                UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pIVar16,(MethodInfo *)0x0);
      pIVar32 = pIVar16;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar29 = extraout_RDX;
  pIVar16 = pIVar18;
  if (g_data_057ac49e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapHandler);
    il2cpp_runtime_helper_023445d0(&"Interact/Supply");
    il2cpp_runtime_helper_023445d0(&"Map load error: map object with duplicate ID found (");
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&"Supply");
    g_data_057ac49e = '\x01';
    uVar29 = extraout_RDX_00;
  }
  if (pIVar32 == (Il2CppClass *)0x0) {
label_040a5b88:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar23 = (pIVar32->_1).image;
    bVar1 = (pMVar23->_2).naturalAligment;
    pMVar30 = (MethodInfo *)CONCAT71((int7)((ulong)uVar29 >> 8),bVar1);
    bVar27 = (TypeInfo_MapScriptSceneObject->_2).naturalAligment;
    if ((bVar1 < bVar27) || ((pMVar23->_2).typeHierarchy[(ulong)bVar27 - 1] != TypeInfo_MapScriptSceneObject)) {
      pIVar19 = (Il2CppClass *)0x0;
label_040a57bb:
      uVar2 = *(uint *)((long)&(pIVar32->_1).byval_arg.data + 4);
      __this_00 = (Map_MapObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapObject);
      pIVar16 = (Il2CppClass *)(ulong)uVar2;
      method = (MethodInfo *)0x0;
      Map_MapObject___ctor
                (__this_00,uVar2,(UnityEngine_GameObject_o *)pIVar19,(Map_MapScriptBaseObject_o *)pIVar32,
                 (MethodInfo *)0x0);
      if ((__this_00 != (Map_MapObject_o *)0x0) &&
         (pMVar6 = (__this_00->fields).ScriptObject, pMVar6 != (Map_MapScriptBaseObject_o *)0x0)) {
        iVar3 = (pMVar6->fields).Id;
        if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = TypeInfo_MapLoader[2].fields._entries;
        iVar28 = pSVar7->m_Items[3].fields.hashCode;
        if (iVar28 <= iVar3) {
          iVar28 = iVar3;
        }
        pSVar7->m_Items[3].fields.hashCode = iVar28;
        pIVar8 = (pSVar7->obj).klass;
        if (pIVar8 != (Il2CppClass *)0x0) {
          pIVar13 = &(pIVar32->_1).byval_arg;
          pIVar16 = (Il2CppClass *)(ulong)*(uint *)&pIVar13->data;
          bVar14 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                             ((System_Collections_Generic_Dictionary_int__object__o *)pIVar8,
                              *(uint *)&pIVar13->data,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar14 != '\0') {
            pSVar21 = System_Int32__ToString((int32_t)pIVar13,(MethodInfo *)0x0);
            pSVar21 = System_String__Concat_3af7150("Map load error: map object with duplicate ID found (",pSVar21,")",(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            ApplicationManagers_DebugConsole__Log(pSVar21,1,(MethodInfo *)0x0);
            return (System_Collections_IEnumerator_o *)__this_00;
          }
          if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar8 = ((TypeInfo_MapLoader[2].fields._entries)->obj).klass;
          if (pIVar8 != (Il2CppClass *)0x0) {
            pIVar16 = (Il2CppClass *)(ulong)*(uint *)&pIVar13->data;
            System_Collections_Generic_Dictionary_int__object___Add
                      ((System_Collections_Generic_Dictionary_int__object__o *)pIVar8,*(uint *)&pIVar13->data,
                       (Il2CppObject *)__this_00,MethodInfo_Void_Add);
            pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (TypeInfo_MapLoader[2].fields._entries)->bounds;
            if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___Add
                        (pSVar5,(Il2CppObject *)pIVar19,(Il2CppObject *)__this_00,MethodInfo_Void_Add);
              if (*(int *)((long)&(pIVar32->_1).byval_arg.data + 4) < 1) {
label_040a59e1:
                iVar3 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
joined_r0x040a5b5a:
                if (iVar3 == 0) {
                  il2cpp_runtime_helper_02337ed0();
                  Map_MapLoader__SetTransform(__this_00,(MethodInfo *)pIVar19);
                  pIVar16 = pIVar19;
                }
                else {
                  Map_MapLoader__SetTransform(__this_00,(MethodInfo *)pIVar19);
                  pIVar16 = pIVar19;
                }
                if ((char)pIVar18 != '\0') {
                  return (System_Collections_IEnumerator_o *)__this_00;
                }
                if ((char)(pIVar32->_1).byval_arg.bits == '\0') {
                  pUVar24 = (__this_00->fields).GameObject;
                  if (pUVar24 == (UnityEngine_GameObject_o *)0x0) goto label_040a5b88;
                  pIVar16 = (Il2CppClass *)0x0;
                  UnityEngine_GameObject__SetActive(pUVar24,0,(MethodInfo *)0x0);
                }
                pSVar21 = (System_String_o *)(pIVar32->_1).namespaze;
                if (pSVar21 != (System_String_o *)0x0) {
                  pIVar16 = "Interact/Supply";
                  bVar14 = System_String__StartsWith
                                     (pSVar21,(System_String_o *)"Interact/Supply",(MethodInfo *)0x0);
                  if ((char)bVar14 == '\0') {
                    return (System_Collections_IEnumerator_o *)__this_00;
                  }
                  pUVar24 = (__this_00->fields).GameObject;
                  if (pUVar24 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar20 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UI_MinimapHandler__CreateMinimapIcon(pUVar20,"Supply",(MethodInfo *)0x0);
                    return (System_Collections_IEnumerator_o *)__this_00;
                  }
                }
              }
              else {
                if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar33 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
                pIVar16 = pIVar19;
                if (pSVar33 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                  uVar2 = *(uint *)((long)&(pIVar32->_1).byval_arg.data + 4);
                  pIVar16 = (Il2CppClass *)(ulong)uVar2;
                  bVar14 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                     (pSVar33,uVar2,MethodInfo_Boolean_ContainsKey);
                  if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar33 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
                  uVar2 = *(uint *)((long)&(pIVar32->_1).byval_arg.data + 4);
                  pIVar19 = (Il2CppClass *)(ulong)uVar2;
                  if ((char)bVar14 == '\0') {
                    pSVar22 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_int);
                    pIVar16 = MethodInfo_HashSet_1_System_Int32;
                    System_Collections_Generic_HashSet_int____ctor(pSVar22,(MethodInfo_33D4530 *)MethodInfo_HashSet_1_System_Int32)
                    ;
                    if (pSVar22 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                      pIVar16 = (Il2CppClass *)(ulong)*(uint *)&pIVar13->data;
                      System_Collections_Generic_HashSet_int___Add
                                (pSVar22,*(uint *)&pIVar13->data,MethodInfo_Boolean_Add);
                      if (pSVar33 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                        System_Collections_Generic_Dictionary_int__object___Add
                                  (pSVar33,uVar2,(Il2CppObject *)pSVar22,MethodInfo_Void_Add);
                        iVar3 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
                        goto joined_r0x040a5b5a;
                      }
                    }
                  }
                  else if ((pSVar33 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                          (pSVar22 = (System_Collections_Generic_HashSet_int__o *)
                                     System_Collections_Generic_Dictionary_int__object___get_Item
                                               (pSVar33,uVar2,MethodInfo_HashSet_1_System_Int32_get_Item), pIVar16 = pIVar19,
                          pSVar22 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
                    pIVar19 = (Il2CppClass *)(ulong)*(uint *)&pIVar13->data;
                    System_Collections_Generic_HashSet_int___Add(pSVar22,*(uint *)&pIVar13->data,MethodInfo_Boolean_Add)
                    ;
                    goto label_040a59e1;
                  }
                }
              }
            }
          }
        }
      }
      goto label_040a5b88;
    }
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar23 = (pIVar32->_1).image;
      pMVar30 = (MethodInfo *)CONCAT71((int7)((ulong)extraout_RDX_01 >> 8),(pMVar23->_2).naturalAligment);
      bVar27 = (TypeInfo_MapScriptSceneObject->_2).naturalAligment;
    }
    pIVar16 = TypeInfo_MapScriptSceneObject;
    if ((bVar27 <= (byte)pMVar30) && ((pMVar23->_2).typeHierarchy[(ulong)bVar27 - 1] == TypeInfo_MapScriptSceneObject)) {
      pIVar19 = (Il2CppClass *)
                Map_MapLoader__LoadSceneObject
                          ((Map_MapScriptSceneObject_o *)pIVar32,(uint)pIVar18 & 0xff,pMVar30);
      goto label_040a57bb;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  pIVar18 = pIVar16;
  pIVar19 = pIVar32;
  if (g_data_057ac4b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SphereCollider_AddComponent_SphereCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    pIVar19 = (Il2CppClass *)&"None";
    il2cpp_runtime_helper_023445d0();
    g_data_057ac4b0 = '\x01';
  }
  if (pIVar32 != (Il2CppClass *)0x0) {
    pMVar30 = "None";
    bVar14 = System_String__op_Equality
                       ((System_String_o *)(pIVar32->_1).namespaze,(System_String_o *)"None",
                        (MethodInfo *)0x0);
    if ((char)bVar14 == '\0') {
      pSVar21 = (System_String_o *)(pIVar32->_1).namespaze;
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar24 = Map_MapLoader__LoadPrefabCached(pSVar21,pMVar30);
    }
    else {
      pUVar24 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc3c0(pUVar24,(MethodInfo *)0x0);
    }
    if ((char)pIVar16 == '\0') {
      pSVar21 = (pIVar32->_1).generic_class;
      pSVar9 = (pIVar32->_1).typeMetadataHandle;
      physicsMaterial = (pIVar32->_1).interopData;
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapLoader__SetPhysics(pUVar24,pSVar21,pSVar9,physicsMaterial,method);
    }
    else {
      if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar30 = (MethodInfo *)**(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
      if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar21 = *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x40);
      pSVar9 = (pIVar32->_1).interopData;
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar15 = Map_MapLoader__SetPhysics(pUVar24,(System_String_o *)pMVar30,pSVar21,pSVar9,method);
      if (iVar15 == 0) {
        if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Map_MapLoader__TryAddEditorCollider(pUVar24,pMVar30);
      }
    }
    pSVar21 = (System_String_o *)(pIVar32->_1).namespaze;
    pIVar18 = (pIVar32->_1).klass;
    bVar1 = *(undefined1 *)((long)&(pIVar32->_1).byval_arg.bits + 2);
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Map_MapLoader__SetMaterial
              (pUVar24,pSVar21,(Map_MapScriptBaseMaterial_o *)pIVar18,(uint)bVar1,(uint)pIVar16 & 0xff,in_R9);
    return (System_Collections_IEnumerator_o *)pUVar24;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar32 = pIVar19;
  if ((pIVar19 != (Il2CppClass *)0x0) &&
     (pIVar16 = (Il2CppClass *)(pIVar19->_1).namespaze, pIVar16 != (Il2CppClass *)0x0)) {
    pvVar10 = (pIVar19->_1).byval_arg.data;
    pIVar18 = (Il2CppClass *)0x0;
    pIVar32 = pIVar16;
    pUVar20 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pIVar16,(MethodInfo *)0x0);
    if (pvVar10 != (void *)0x0) {
      UnityEngine_GameObject__set_isStatic
                ((UnityEngine_GameObject_o *)pIVar16,(uint)*(byte *)((long)pvVar10 + 0x29),(MethodInfo *)0x0);
      pIVar18 = *(Il2CppClass **)((long)pvVar10 + 0x30);
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)pIVar16,(System_String_o *)pIVar18,(MethodInfo *)0x0);
      pIVar32 = pIVar16;
      if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_position
                  (pUVar20,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)((long)pvVar10 + 0x38),
                   (MethodInfo *)0x0);
        UVar35.fields.x = (float)*(undefined8 *)((long)pvVar10 + 0x44) * 0.017453292;
        UVar35.fields.y = (float)((ulong)*(undefined8 *)((long)pvVar10 + 0x44) >> 0x20) * 0.017453292;
        UVar35.fields.z = *(float *)((long)pvVar10 + 0x4c) * 0.017453292;
        value = UnityEngine_Quaternion__Internal_FromEulerRad(UVar35,(MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation(pUVar20,value,(MethodInfo *)0x0);
        UVar35 = UnityEngine_Transform__get_localScale(pUVar20,(MethodInfo *)0x0);
        (pIVar19->_1).byval_arg.bits = (uint)UVar35.fields.x;
        *(float *)&(pIVar19->_1).byval_arg.field_0xc = UVar35.fields.y;
        *(float *)&(pIVar19->_1).this_arg.data = UVar35.fields.z;
        value_00.fields.x = UVar35.fields.x * (float)*(undefined8 *)((long)pvVar10 + 0x50);
        value_00.fields.y = UVar35.fields.y * (float)((ulong)*(undefined8 *)((long)pvVar10 + 0x50) >> 0x20);
        value_00.fields.z = UVar35.fields.z * *(float *)((long)pvVar10 + 0x58);
        UnityEngine_Transform__set_localScale(pUVar20,value_00,(MethodInfo *)0x0);
        return extraout_RAX;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac49f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac49f = '\x01';
    iVar3 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  else {
    iVar3 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar33 = TypeInfo_MapLoader;
  if ((pIVar32 != (Il2CppClass *)0x0) &&
     (pSVar26 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor, pSVar33 = pSVar26,
     pSVar26 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar14 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                       (pSVar26,(int32_t)*(intptr_t *)
                                          &((System_String_Fields *)&(pIVar32->_1).name)->_stringLength,
                        MethodInfo_Boolean_ContainsKey);
    pSVar25 = (System_Collections_IEnumerator_o *)CONCAT44(extraout_var,bVar14);
    if ((char)bVar14 == '\0') goto label_040a5fd3;
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar33 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
    if (pSVar33 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      pSVar26 = (System_Collections_Generic_Dictionary_int__object__o *)
                System_Collections_Generic_Dictionary_int__object___get_Item
                          (pSVar33,(int32_t)*(intptr_t *)
                                             &((System_String_Fields *)&(pIVar32->_1).name)->_stringLength,
                           MethodInfo_HashSet_1_System_Int32_get_Item);
      pvVar10 = (pIVar32->_1).byval_arg.data;
      if ((pvVar10 != (void *)0x0) && (pSVar26 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)
         ) {
        bVar14 = System_Collections_Generic_HashSet_int___Contains
                           ((System_Collections_Generic_HashSet_int__o *)pSVar26,
                            *(int32_t *)((long)pvVar10 + 0x20),MethodInfo_Boolean_Contains);
        pSVar25 = (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_00,bVar14);
        if ((char)bVar14 == '\0') {
label_040a5fd3:
          if (pIVar18 == (Il2CppClass *)0x0) {
            ((System_String_Fields *)&(pIVar32->_1).name)->_stringLength = 0;
            pSVar33 = (System_Collections_Generic_Dictionary_int__object__o *)(pIVar32->_1).namespaze;
            if ((pSVar33 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
               (pUVar20 = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)pSVar33,(MethodInfo *)0x0),
               pUVar20 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent(pUVar20,(UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
              return extraout_RAX_00;
            }
          }
          else {
            if (pIVar32 == pIVar18) {
              return pSVar25;
            }
            pSVar25 = (pIVar32->_1).byval_arg.data;
            pSVar33 = pSVar26;
            if (pSVar25 != (System_Collections_IEnumerator_o *)0x0) {
              if ((int)*(intptr_t *)&((System_String_Fields *)&(pIVar18->_1).name)->_stringLength ==
                  *(int *)&pSVar25[2].klass) {
                return pSVar25;
              }
              pvVar10 = (pIVar18->_1).byval_arg.data;
              if (pvVar10 != (void *)0x0) {
                ((System_String_Fields *)&(pIVar32->_1).name)->_stringLength =
                     *(undefined4 *)((long)pvVar10 + 0x20);
                pUVar24 = (UnityEngine_GameObject_o *)(pIVar32->_1).namespaze;
                pSVar33 = (System_Collections_Generic_Dictionary_int__object__o *)0x0;
                if (pUVar24 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar20 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
                  pSVar33 = (System_Collections_Generic_Dictionary_int__object__o *)(pIVar18->_1).namespaze;
                  if ((pSVar33 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                     (p = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)pSVar33,(MethodInfo *)0x0),
                     pUVar20 != (UnityEngine_Transform_o *)0x0)) {
                    UnityEngine_Transform__SetParent(pUVar20,p,(MethodInfo *)0x0);
                    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar26 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
                    pSVar33 = (System_Collections_Generic_Dictionary_int__object__o *)0x0;
                    if (pSVar26 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                      bVar14 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                         (pSVar26,(int32_t)*(intptr_t *)
                                                            &((System_String_Fields *)&(pIVar32->_1).name)->
                                                             _stringLength,MethodInfo_Boolean_ContainsKey);
                      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pSVar26 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
                      iVar15 = (int32_t)*(intptr_t *)
                                         &((System_String_Fields *)&(pIVar32->_1).name)->_stringLength;
                      if ((char)bVar14 == '\0') {
                        __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
                                    il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_int);
                        pSVar33 = __this_01;
                        System_Collections_Generic_HashSet_int____ctor
                                  ((System_Collections_Generic_HashSet_int__o *)__this_01,
                                   (MethodInfo_33D4530 *)MethodInfo_HashSet_1_System_Int32);
                        pvVar10 = (pIVar32->_1).byval_arg.data;
                        if (((pvVar10 != (void *)0x0) &&
                            (__this_01 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) &&
                           (pSVar33 = __this_01,
                           System_Collections_Generic_HashSet_int___Add
                                     ((System_Collections_Generic_HashSet_int__o *)__this_01,
                                      *(int32_t *)((long)pvVar10 + 0x20),MethodInfo_Boolean_Add),
                           pSVar26 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
                          System_Collections_Generic_Dictionary_int__object___Add
                                    (pSVar26,iVar15,(Il2CppObject *)__this_01,MethodInfo_Void_Add);
                          return extraout_RAX_01;
                        }
                      }
                      else {
                        pSVar33 = TypeInfo_MapLoader;
                        if (pSVar26 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                          pSVar22 = (System_Collections_Generic_HashSet_int__o *)
                                    System_Collections_Generic_Dictionary_int__object___get_Item
                                              (pSVar26,iVar15,MethodInfo_HashSet_1_System_Int32_get_Item);
                          pvVar10 = (pIVar32->_1).byval_arg.data;
                          pSVar33 = pSVar26;
                          if ((pvVar10 != (void *)0x0) &&
                             (pSVar22 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
                            bVar14 = System_Collections_Generic_HashSet_int___Add
                                               (pSVar22,*(int32_t *)((long)pvVar10 + 0x20),MethodInfo_Boolean_Add);
                            return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_02,bVar14);
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
        else {
          if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar33 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
          if (pSVar33 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            pSVar26 = (System_Collections_Generic_Dictionary_int__object__o *)
                      System_Collections_Generic_Dictionary_int__object___get_Item
                                (pSVar33,(int32_t)*(intptr_t *)
                                                   &((System_String_Fields *)&(pIVar32->_1).name)->
                                                    _stringLength,MethodInfo_HashSet_1_System_Int32_get_Item);
            pvVar10 = (pIVar32->_1).byval_arg.data;
            if ((pvVar10 != (void *)0x0) &&
               (pSVar26 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
              bVar14 = System_Collections_Generic_HashSet_int___Remove
                                 ((System_Collections_Generic_HashSet_int__o *)pSVar26,
                                  *(int32_t *)((long)pvVar10 + 0x20),MethodInfo_Boolean_Remove);
              pSVar25 = (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_01,bVar14);
              goto label_040a5fd3;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac4a0 = '\x01';
    iVar3 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  else {
    iVar3 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (((pSVar33 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
      (lVar11 = *(long *)&(pSVar33->fields)._count, lVar11 != 0)) &&
     (pIVar32 = ((TypeInfo_MapLoader[2].fields._entries)->obj).klass, pIVar32 != (Il2CppClass *)0x0)) {
    uVar2 = *(uint *)(lVar11 + 0x20);
    pMVar30 = (MethodInfo *)(ulong)uVar2;
    bVar14 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_int__object__o *)pIVar32,uVar2,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar14 == '\0') goto label_040a6341;
    lVar11 = *(long *)&(pSVar33->fields)._count;
    if (lVar11 != 0) {
      iVar15 = *(int32_t *)(lVar11 + 0x20);
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapLoader__DeleteObject_3fa6370(iVar15,pMVar30);
      return extraout_RAX_02;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040a6341:
  pSVar7 = (pSVar33->fields)._entries;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar7,(MethodInfo *)0x0);
  return extraout_RAX_03;
}


// Map.MapLoader$$GetWorldBounds
// il2cpp: UnityEngine_Bounds_o Map_MapLoader__GetWorldBounds (UnityEngine_Matrix4x4_o mat, UnityEngine_Bounds_o bounds, const MethodInfo* method);
// 0x40a6780

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
  
  if (g_data_057ac4a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ac4a3 = '\x01';
  }
  if (g_data_057abfed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057abfed = '\x01';
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
    il2cpp_runtime_helper_02337ed0();
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
  if (g_data_057a6844 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a6844 = '\x01';
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
                     (__this_00,*(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18),
                      (MethodInfo *)&mat);
  UVar12 = Utility_Util__Abs(UVar12,(MethodInfo *)0x0);
  fVar7 = UVar12.fields.z;
  if (g_data_057a6846 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a6846 = '\x01';
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
                     (__this_01,*(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x48),
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
  UVar13 = UnityEngine_Matrix4x4__MultiplyPoint(__this_02,bounds.fields.m_Center,(MethodInfo *)&mat);
  fVar10 = bounds.fields.m_Extents.fields.x + bounds.fields.m_Extents.fields.x;
  fVar11 = bounds.fields.m_Extents.fields.y + bounds.fields.m_Extents.fields.y;
  fVar9 = bounds.fields.m_Extents.fields.z + bounds.fields.m_Extents.fields.z;
  local_38 = UVar12.fields.x;
  fStack_34 = UVar12.fields.y;
  (__return_storage_ptr__->fields).m_Center.fields.x = (float)(int)UVar13.fields._0_8_;
  (__return_storage_ptr__->fields).m_Center.fields.y = (float)(int)((ulong)UVar13.fields._0_8_ >> 0x20);
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
// 0x40a6990

UnityEngine_Bounds_o *
Map_MapLoader__CalculateWorldBounds
          (UnityEngine_Bounds_o *__return_storage_ptr__,Map_MapLoader_o *__this,
          System_Collections_Generic_List_NavMeshBuildSource__o *sources,MethodInfo *method)

{
  undefined4 uVar1;
  long lVar2;
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
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  UnityEngine_Bounds_o __this_02;
  System_Collections_Generic_List_Enumerator_T__o __this_03;
  System_Collections_Generic_List_Enumerator_T__o __this_04;
  UnityEngine_Matrix4x4_o __this_05;
  UnityEngine_Matrix4x4_o lhs;
  UnityEngine_Matrix4x4_o mat;
  UnityEngine_Matrix4x4_o lhs_00;
  UnityEngine_Matrix4x4_o mat_00;
  UnityEngine_Matrix4x4_o lhs_01;
  UnityEngine_Matrix4x4_o mat_01;
  UnityEngine_AI_NavMeshBuildSource_o __this_06;
  UnityEngine_AI_NavMeshBuildSource_o __this_07;
  UnityEngine_AI_NavMeshBuildSource_o __this_08;
  UnityEngine_AI_NavMeshBuildSource_o __this_09;
  UnityEngine_AI_NavMeshBuildSource_o __this_10;
  UnityEngine_AI_NavMeshBuildSource_o __this_11;
  UnityEngine_AI_NavMeshBuildSource_o __this_12;
  UnityEngine_Bounds_o bounds;
  UnityEngine_Bounds_o bounds_00;
  UnityEngine_Bounds_o bounds_01;
  UnityEngine_Matrix4x4_o rhs;
  UnityEngine_Matrix4x4_o rhs_00;
  UnityEngine_Matrix4x4_o rhs_01;
  undefined1 auVar15 [16];
  bool_conflict bVar16;
  int32_t iVar17;
  UnityEngine_Transform_o *pUVar18;
  UnityEngine_TerrainData_o *__this_13;
  MethodInfo *pMVar19;
  long *plVar20;
  UnityEngine_Bounds_o *pUVar21;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 in_XMM1_Dc;
  undefined4 extraout_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 extraout_XMM1_Dd;
  float fVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar43;
  float fVar44;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar45;
  undefined1 auVar42 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  UnityEngine_Quaternion_o UVar50;
  undefined1 auVar51 [12];
  UnityEngine_Vector3_o UVar52;
  Il2CppClass *in_stack_fffffffffffffbd8;
  Il2CppClass *pIVar53;
  Il2CppType *in_stack_fffffffffffffbe0;
  Il2CppType *pIVar54;
  Il2CppObject *in_stack_fffffffffffffbe8;
  Il2CppObject *pIVar55;
  _union_13 in_stack_fffffffffffffbf0;
  Il2CppMethodPointer pIVar56;
  _union_14 in_stack_fffffffffffffbf8;
  Il2CppClass *pIVar57;
  undefined8 in_stack_fffffffffffffc00;
  Il2CppType *pIVar58;
  undefined8 in_stack_fffffffffffffc08;
  Il2CppClass *pIVar59;
  undefined8 in_stack_fffffffffffffc10;
  _union_13 _Var60;
  Il2CppClass *in_stack_fffffffffffffc18;
  Il2CppClass *pIVar61;
  undefined8 in_stack_fffffffffffffc20;
  Il2CppType *pIVar62;
  undefined8 in_stack_fffffffffffffc28;
  Il2CppType **ppIVar63;
  _union_13 in_stack_fffffffffffffc30;
  undefined1 local_3a8 [8];
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  Il2CppClass *local_388;
  Il2CppType *pIStack_380;
  undefined1 local_378 [16];
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
  _union_249687 local_268;
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
  _union_13 _Stack_180;
  _union_14 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  MethodInfo local_158;
  undefined8 uStack_100;
  Il2CppClass *local_f8;
  Il2CppType *pIStack_f0;
  Il2CppType **local_e8;
  _union_13 _Stack_e0;
  _union_14 local_d8;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  Il2CppClass *local_b8;
  Il2CppType *pIStack_b0;
  Il2CppType **local_a8;
  _union_13 _Stack_a0;
  _union_14 local_98;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  Il2CppClass *local_78;
  Il2CppType *pIStack_70;
  Il2CppType **local_68;
  _union_13 _Stack_60;
  _union_14 local_58;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  if (g_data_057ac4a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_NavMeshBuildSource_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_AI_NavMeshBuildSource_Ge);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mesh);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TerrainData);
    g_data_057ac4a4 = '\x01';
    in_XMM1_Dc = extraout_XMM1_Dc;
    in_XMM1_Dd = extraout_XMM1_Dd;
  }
  local_308._48_8_ = (Il2CppClass *)0x0;
  local_308._56_8_ = (Il2CppRGCTXData *)0x0;
  local_308._32_8_ = (Il2CppClass *)0x0;
  local_308._40_8_ = (Il2CppType *)0x0;
  local_308._16_8_ = (Il2CppObject *)0x0;
  local_308._24_8_ = (Il2CppMethodPointer)0x0;
  local_308._0_8_ = (Il2CppClass *)0x0;
  local_308._8_8_ = (Il2CppType *)0x0;
  local_3a8 = (undefined1  [8])0x0;
  fStack_3a0 = 0.0;
  fStack_39c = 0.0;
  fStack_398 = 0.0;
  fStack_394 = 0.0;
  local_168._0_2_ = 0;
  local_168._2_1_ = '\0';
  local_168._3_1_ = '\0';
  local_168._4_4_ = 0;
  uStack_160 = 0;
  local_178.genericMethod = (void *)0x0;
  uStack_170._0_4_ = 0;
  uStack_170._4_2_ = 0;
  uStack_170._6_2_ = 0;
  local_1c8._64_8_ = (void *)0x0;
  _Stack_180.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_1c8._48_8_ = (Il2CppClass *)0x0;
  local_1c8._56_8_ = (Il2CppRGCTXData *)0x0;
  local_1c8._32_8_ = (Il2CppClass *)0x0;
  local_1c8._40_8_ = (Il2CppType *)0x0;
  local_1c8._16_8_ = (Il2CppObject *)0x0;
  local_1c8._24_8_ = (Il2CppMethodPointer)0x0;
  local_1c8._0_8_ = (Il2CppClass *)0x0;
  local_1c8._8_8_ = (Il2CppType *)0x0;
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
  pUVar18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
    UVar52 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
    _local_2b8 = UVar52.fields._0_8_;
    local_2c8[0]._0_4_ = UVar52.fields.z;
    pUVar18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
      UVar50 = UnityEngine_Transform__get_rotation(pUVar18,(MethodInfo *)0x0);
      auVar25._8_4_ = extraout_XMM0_Dc;
      auVar25._0_8_ = UVar50.fields._0_8_;
      auVar25._12_4_ = extraout_XMM0_Dd;
      fVar35 = UVar50.fields.z;
      fVar30 = UVar50.fields.w;
      if (g_data_057a6932 == '\0') {
        local_218._8_4_ = in_XMM1_Dc;
        local_218._0_8_ = UVar50.fields._8_8_;
        local_218._12_4_ = in_XMM1_Dd;
        _local_208 = auVar25;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6932 = '\x01';
        auVar25 = _local_208;
        fVar35 = (float)local_218._0_4_;
        fVar30 = (float)local_218._4_4_;
      }
      UVar52.fields.z = (float)local_2c8[0]._0_4_;
      UVar52.fields._0_8_ = _local_2b8;
      UVar50.fields._0_8_ = auVar25._0_8_;
      UVar50.fields.w = fVar30;
      UVar50.fields.z = fVar35;
      local_238 = __return_storage_ptr__;
      UnityEngine_Matrix4x4__TRS
                ((UnityEngine_Matrix4x4_o *)local_2a8,UVar52,UVar50,
                 (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                 (MethodInfo *)0x0);
      local_308._48_8_ = local_278;
      local_308._56_8_ = _Stack_270;
      local_308._32_8_ = local_288;
      local_308._40_8_ = pIStack_280;
      local_308._16_8_ = local_298;
      local_308._24_8_ = pIStack_290;
      local_308._0_8_ = local_2a8._0_8_;
      local_308._8_8_ = local_2a8._8_8_;
      __this_05.fields._8_8_ = in_stack_fffffffffffffbe0;
      __this_05.fields._0_8_ = in_stack_fffffffffffffbd8;
      __this_05.fields._16_8_ = in_stack_fffffffffffffbe8;
      __this_05.fields._24_8_ = in_stack_fffffffffffffbf0.rgctx_data;
      __this_05.fields._32_8_ = in_stack_fffffffffffffbf8.genericMethod;
      __this_05.fields.m22 = (float)in_stack_fffffffffffffc00;
      __this_05.fields.m32 = SUB84(in_stack_fffffffffffffc00,4);
      __this_05.fields.m03 = (float)in_stack_fffffffffffffc08;
      __this_05.fields.m13 = SUB84(in_stack_fffffffffffffc08,4);
      __this_05.fields.m23 = (float)in_stack_fffffffffffffc10;
      __this_05.fields.m33 = SUB84(in_stack_fffffffffffffc10,4);
      UnityEngine_Matrix4x4__get_inverse
                ((UnityEngine_Matrix4x4_o *)local_2a8,__this_05,(MethodInfo *)local_308);
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
        System_Collections_Generic_List_NavMeshBuildSource___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_2a8,sources,MethodInfo_List_1_T_Enumerator_UnityEngine_AI_NavMeshBuildSource_Ge);
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
        _Stack_180 = _Stack_260;
        local_1c8._48_8_ = local_278;
        local_1c8._56_8_ = _Stack_270;
        local_1c8._32_8_ = local_288;
        local_1c8._40_8_ = pIStack_280;
        local_1c8._16_8_ = local_298;
        local_1c8._24_8_ = pIStack_290;
        local_1c8._0_8_ = local_2a8._0_8_;
        local_1c8._8_8_ = local_2a8._8_8_;
label_040a6d10:
        while (__this_00.fields._8_8_ = in_stack_fffffffffffffbe0,
              __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffbd8,
              __this_00.fields._current = in_stack_fffffffffffffbe8,
              bVar16 = System_Collections_Generic_List_Enumerator_NavMeshBuildSource___MoveNext
                                 (__this_00,(MethodInfo_3219340 *)local_1c8), (char)bVar16 != '\0') {
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
          local_158.field7_0x38 = _Stack_180;
          local_158.klass = (Il2CppClass *)local_1c8._48_8_;
          local_158.return_type = (Il2CppType *)local_1c8._56_8_;
          local_158.invoker_method = (InvokerMethod)local_1c8._32_8_;
          local_158.name = (char *)local_1c8._40_8_;
          local_158.methodPointer = (Il2CppMethodPointer)local_1c8._16_8_;
          local_158.virtualMethodPointer = (Il2CppMethodPointer)local_1c8._24_8_;
          __this_06.fields.m_Transform.fields._8_8_ = in_stack_fffffffffffffbe0;
          __this_06.fields.m_Transform.fields._0_8_ = in_stack_fffffffffffffbd8;
          __this_06.fields.m_Transform.fields._16_8_ = in_stack_fffffffffffffbe8;
          __this_06.fields.m_Transform.fields._24_8_ = in_stack_fffffffffffffbf0.rgctx_data;
          __this_06.fields.m_Transform.fields._32_8_ = in_stack_fffffffffffffbf8.genericMethod;
          __this_06.fields.m_Transform.fields.m22 = (float)in_stack_fffffffffffffc00;
          __this_06.fields.m_Transform.fields.m32 = SUB84(in_stack_fffffffffffffc00,4);
          __this_06.fields.m_Transform.fields.m03 = (float)in_stack_fffffffffffffc08;
          __this_06.fields.m_Transform.fields.m13 = SUB84(in_stack_fffffffffffffc08,4);
          __this_06.fields.m_Transform.fields.m23 = (float)in_stack_fffffffffffffc10;
          __this_06.fields.m_Transform.fields.m33 = SUB84(in_stack_fffffffffffffc10,4);
          __this_06.fields.m_Size.fields._0_8_ = in_stack_fffffffffffffc18;
          __this_06.fields.m_Size.fields.z = (float)(int)in_stack_fffffffffffffc20;
          __this_06.fields.m_Shape = (int)((ulong)in_stack_fffffffffffffc20 >> 0x20);
          __this_06.fields.m_Area = (int)in_stack_fffffffffffffc28;
          __this_06.fields.m_InstanceID = (int)((ulong)in_stack_fffffffffffffc28 >> 0x20);
          __this_06.fields._88_8_ = in_stack_fffffffffffffc30.rgctx_data;
          iVar17 = UnityEngine_AI_NavMeshBuildSource__get_shape(__this_06,&local_158);
          if (3 < iVar17 - 2U) {
            if (iVar17 != 0) goto code_r0x040a6d8b;
            __this_10.fields.m_Transform.fields._8_8_ = in_stack_fffffffffffffbe0;
            __this_10.fields.m_Transform.fields._0_8_ = in_stack_fffffffffffffbd8;
            __this_10.fields.m_Transform.fields._16_8_ = in_stack_fffffffffffffbe8;
            __this_10.fields.m_Transform.fields._24_8_ = in_stack_fffffffffffffbf0.rgctx_data;
            __this_10.fields.m_Transform.fields._32_8_ = in_stack_fffffffffffffbf8.genericMethod;
            __this_10.fields.m_Transform.fields.m22 = (float)in_stack_fffffffffffffc00;
            __this_10.fields.m_Transform.fields.m32 = SUB84(in_stack_fffffffffffffc00,4);
            __this_10.fields.m_Transform.fields.m03 = (float)in_stack_fffffffffffffc08;
            __this_10.fields.m_Transform.fields.m13 = SUB84(in_stack_fffffffffffffc08,4);
            __this_10.fields.m_Transform.fields.m23 = (float)in_stack_fffffffffffffc10;
            __this_10.fields.m_Transform.fields.m33 = SUB84(in_stack_fffffffffffffc10,4);
            __this_10.fields.m_Size.fields._0_8_ = in_stack_fffffffffffffc18;
            __this_10.fields.m_Size.fields.z = (float)(int)in_stack_fffffffffffffc20;
            __this_10.fields.m_Shape = (int)((ulong)in_stack_fffffffffffffc20 >> 0x20);
            __this_10.fields.m_Area = (int)in_stack_fffffffffffffc28;
            __this_10.fields.m_InstanceID = (int)((ulong)in_stack_fffffffffffffc28 >> 0x20);
            __this_10.fields._88_8_ = in_stack_fffffffffffffc30.rgctx_data;
            pMVar19 = (MethodInfo *)UnityEngine_AI_NavMeshBuildSource__get_sourceObject(__this_10,&local_158);
            if (pMVar19 == (MethodInfo *)0x0) {
              pMVar19 = (MethodInfo *)0x0;
            }
            else if ((UnityEngine_Object_c *)pMVar19->methodPointer != TypeInfo_Mesh) {
              pMVar19 = (MethodInfo *)0x0;
            }
            local_278 = (Il2CppClass *)local_308._48_8_;
            _Stack_270.rgctx_data = (Il2CppRGCTXData *)local_308._56_8_;
            local_288 = (Il2CppClass *)local_308._32_8_;
            pIStack_280 = (Il2CppType *)local_308._40_8_;
            local_298 = (Il2CppObject *)local_308._16_8_;
            pIStack_290 = (Il2CppMethodPointer)local_308._24_8_;
            local_2a8._0_8_ = local_308._0_8_;
            local_2a8._8_8_ = local_308._8_8_;
            __this_12.fields.m_Transform.fields._8_8_ = in_stack_fffffffffffffbe0;
            __this_12.fields.m_Transform.fields._0_8_ = in_stack_fffffffffffffbd8;
            __this_12.fields.m_Transform.fields._16_8_ = in_stack_fffffffffffffbe8;
            __this_12.fields.m_Transform.fields._24_8_ = in_stack_fffffffffffffbf0.rgctx_data;
            __this_12.fields.m_Transform.fields._32_8_ = in_stack_fffffffffffffbf8.genericMethod;
            __this_12.fields.m_Transform.fields.m22 = (float)in_stack_fffffffffffffc00;
            __this_12.fields.m_Transform.fields.m32 = SUB84(in_stack_fffffffffffffc00,4);
            __this_12.fields.m_Transform.fields.m03 = (float)in_stack_fffffffffffffc08;
            __this_12.fields.m_Transform.fields.m13 = SUB84(in_stack_fffffffffffffc08,4);
            __this_12.fields.m_Transform.fields.m23 = (float)in_stack_fffffffffffffc10;
            __this_12.fields.m_Transform.fields.m33 = SUB84(in_stack_fffffffffffffc10,4);
            __this_12.fields.m_Size.fields._0_8_ = in_stack_fffffffffffffc18;
            __this_12.fields.m_Size.fields.z = (float)(int)in_stack_fffffffffffffc20;
            __this_12.fields.m_Shape = (int)((ulong)in_stack_fffffffffffffc20 >> 0x20);
            __this_12.fields.m_Area = (int)in_stack_fffffffffffffc28;
            __this_12.fields.m_InstanceID = (int)((ulong)in_stack_fffffffffffffc28 >> 0x20);
            __this_12.fields._88_8_ = in_stack_fffffffffffffc30.rgctx_data;
            UnityEngine_AI_NavMeshBuildSource__get_transform
                      ((UnityEngine_Matrix4x4_o *)&local_388,__this_12,&local_158);
            local_48 = local_358;
            fStack_44 = fStack_354;
            fStack_40 = fStack_350;
            fStack_3c = fStack_34c;
            local_58.genericMethod = local_368.genericMethod;
            fStack_50 = fStack_360;
            fStack_4c = fStack_35c;
            local_68 = (Il2CppType **)local_378._0_8_;
            _Stack_60.rgctx_data = (Il2CppRGCTXData *)local_378._8_8_;
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
            rhs_01.fields.m01 = (float)local_378._0_4_;
            rhs_01.fields.m11 = (float)local_378._4_4_;
            rhs_01.fields.m21 = (float)local_378._8_4_;
            rhs_01.fields.m31 = (float)local_378._12_4_;
            rhs_01.fields._32_8_ = local_368.genericMethod;
            rhs_01.fields.m22 = fStack_360;
            rhs_01.fields.m32 = fStack_35c;
            rhs_01.fields.m03 = local_358;
            rhs_01.fields.m13 = fStack_354;
            rhs_01.fields.m23 = fStack_350;
            rhs_01.fields.m33 = fStack_34c;
            in_stack_fffffffffffffbd8 = (Il2CppClass *)local_2a8._0_8_;
            in_stack_fffffffffffffbe0 = (Il2CppType *)local_2a8._8_8_;
            in_stack_fffffffffffffbe8 = local_298;
            in_stack_fffffffffffffc30 = (_union_13)local_378._8_8_;
            UnityEngine_Matrix4x4__op_Multiply
                      ((UnityEngine_Matrix4x4_o *)local_348,lhs_01,rhs_01,(MethodInfo *)0x0);
            pIStack_380 = (Il2CppType *)CONCAT44(local_348._12_4_,local_348._8_4_);
            local_378._4_4_ = local_348._20_4_;
            local_378._0_4_ = local_348._16_4_;
            fStack_354 = fStack_314;
            local_358 = local_318;
            fStack_34c = fStack_30c;
            fStack_350 = fStack_310;
            local_368 = (_union_14)local_348._32_8_;
            fStack_360 = (float)local_348._40_4_;
            fStack_35c = (float)local_348._44_4_;
            local_378._8_8_ = local_348._24_8_;
            local_388 = (Il2CppClass *)local_348._0_8_;
            if (pMVar19 != (MethodInfo *)0x0) {
              UnityEngine_Mesh__get_bounds
                        ((UnityEngine_Bounds_o *)&local_230,(UnityEngine_Mesh_o *)pMVar19,(MethodInfo *)0x0);
              local_348._16_4_ = fStack_220;
              local_348._20_4_ = fStack_21c;
              local_348._0_8_ = local_230;
              local_348._8_4_ = fStack_228;
              local_348._12_4_ = fStack_224;
              if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              auVar25 = local_378;
              in_stack_fffffffffffffc28 = CONCAT44(local_348._20_4_,local_348._16_4_);
              in_stack_fffffffffffffc20 = CONCAT44(local_348._12_4_,local_348._8_4_);
              mat_01.fields._8_8_ = pIStack_380;
              mat_01.fields._0_8_ = local_388;
              mat_01.fields.m01 = (float)local_378._0_4_;
              mat_01.fields.m11 = (float)local_378._4_4_;
              mat_01.fields.m21 = (float)local_378._8_4_;
              mat_01.fields.m31 = (float)local_378._12_4_;
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
              in_stack_fffffffffffffbe8 = (Il2CppObject *)local_378._0_8_;
              in_stack_fffffffffffffbf0 = (_union_13)local_378._8_8_;
              in_stack_fffffffffffffbf8 = local_368;
              in_stack_fffffffffffffc00 = _fStack_360;
              in_stack_fffffffffffffc08 = _local_358;
              in_stack_fffffffffffffc10 = _fStack_350;
              in_stack_fffffffffffffc18 = (Il2CppClass *)local_348._0_8_;
              local_378 = auVar25;
              Map_MapLoader__GetWorldBounds((UnityEngine_Bounds_o *)&local_230,mat_01,bounds_01,pMVar19);
              fVar29 = (float)((ulong)local_230 >> 0x20);
              fVar36 = SUB84(local_230,0) - fStack_224;
              fVar37 = fVar29 - fStack_220;
              fVar30 = fStack_228 - fStack_21c;
              auVar27._0_4_ = local_3a8._0_4_ - fStack_39c;
              auVar27._4_4_ = local_3a8._4_4_ - fStack_398;
              auVar27._8_8_ = 0;
              auVar5._4_4_ = fVar37;
              auVar5._0_4_ = fVar36;
              auVar5._8_8_ = 0;
              auVar25 = minps(auVar27,auVar5);
              fVar35 = fStack_3a0 - fStack_394;
              if (fVar30 <= fStack_3a0 - fStack_394) {
                fVar35 = fVar30;
              }
              auVar42._0_4_ = local_3a8._0_4_ + fStack_39c;
              auVar42._4_4_ = local_3a8._4_4_ + fStack_398;
              auVar42._8_8_ = 0;
              auVar6._4_4_ = fVar37;
              auVar6._0_4_ = fVar36;
              auVar6._8_8_ = 0;
              auVar41 = maxps(auVar42,auVar6);
              fVar36 = fStack_3a0 + fStack_394;
              if (fStack_3a0 + fStack_394 <= fVar30) {
                fVar36 = fVar30;
              }
              fVar43 = (auVar41._0_4_ - auVar25._0_4_) * 0.5;
              fVar44 = (auVar41._4_4_ - auVar25._4_4_) * 0.5;
              fVar45 = (auVar41._8_4_ - auVar25._8_4_) * 0.0;
              fVar46 = (auVar41._12_4_ - auVar25._12_4_) * 0.0;
              fStack_394 = (fVar36 - fVar35) * 0.5;
              fVar30 = auVar25._0_4_ + fVar43;
              fVar36 = auVar25._4_4_ + fVar44;
              fVar37 = auVar25._8_4_ + fVar45;
              fVar38 = auVar25._12_4_ + fVar46;
              fVar49 = SUB84(local_230,0) + fStack_224;
              fVar29 = fVar29 + fStack_220;
              fVar47 = fStack_228 + fStack_21c;
              auVar34._0_4_ = fVar30 - fVar43;
              auVar34._4_4_ = fVar36 - fVar44;
              auVar34._8_4_ = fVar37 - fVar45;
              auVar34._12_4_ = fVar38 - fVar46;
              fStack_3a0 = (fVar35 + fStack_394) - fStack_394;
              auVar11._4_4_ = fVar29;
              auVar11._0_4_ = fVar49;
              auVar11._8_8_ = 0;
              auVar25 = minps(auVar34,auVar11);
              uVar31 = auVar25._0_8_;
              if (fVar47 <= fStack_3a0) {
                fStack_3a0 = fVar47;
              }
              auVar28._0_4_ = fVar30 + fVar43;
              auVar28._4_4_ = fVar36 + fVar44;
              auVar28._8_4_ = fVar37 + fVar45;
              auVar28._12_4_ = fVar38 + fVar46;
              fStack_394 = fVar35 + fStack_394 + fStack_394;
              auVar12._4_4_ = fVar29;
              auVar12._0_4_ = fVar49;
              auVar12._8_8_ = 0;
              auVar41 = maxps(auVar28,auVar12);
              if (fStack_394 <= fVar47) {
                fStack_394 = fVar47;
              }
              fStack_39c = auVar41._0_4_ - auVar25._0_4_;
              fStack_398 = auVar41._4_4_ - auVar25._4_4_;
              fStack_394 = fStack_394 - fStack_3a0;
              goto label_040a6cdf;
            }
            goto label_040a780b;
          }
          local_278 = (Il2CppClass *)local_308._48_8_;
          _Stack_270.rgctx_data = (Il2CppRGCTXData *)local_308._56_8_;
          local_288 = (Il2CppClass *)local_308._32_8_;
          pIStack_280 = (Il2CppType *)local_308._40_8_;
          local_298 = (Il2CppObject *)local_308._16_8_;
          pIStack_290 = (Il2CppMethodPointer)local_308._24_8_;
          local_2a8._0_8_ = local_308._0_8_;
          local_2a8._8_8_ = local_308._8_8_;
          __this_08.fields.m_Transform.fields._8_8_ = in_stack_fffffffffffffbe0;
          __this_08.fields.m_Transform.fields._0_8_ = in_stack_fffffffffffffbd8;
          __this_08.fields.m_Transform.fields._16_8_ = in_stack_fffffffffffffbe8;
          __this_08.fields.m_Transform.fields._24_8_ = in_stack_fffffffffffffbf0.rgctx_data;
          __this_08.fields.m_Transform.fields._32_8_ = in_stack_fffffffffffffbf8.genericMethod;
          __this_08.fields.m_Transform.fields.m22 = (float)in_stack_fffffffffffffc00;
          __this_08.fields.m_Transform.fields.m32 = SUB84(in_stack_fffffffffffffc00,4);
          __this_08.fields.m_Transform.fields.m03 = (float)in_stack_fffffffffffffc08;
          __this_08.fields.m_Transform.fields.m13 = SUB84(in_stack_fffffffffffffc08,4);
          __this_08.fields.m_Transform.fields.m23 = (float)in_stack_fffffffffffffc10;
          __this_08.fields.m_Transform.fields.m33 = SUB84(in_stack_fffffffffffffc10,4);
          __this_08.fields.m_Size.fields._0_8_ = in_stack_fffffffffffffc18;
          __this_08.fields.m_Size.fields.z = (float)(int)in_stack_fffffffffffffc20;
          __this_08.fields.m_Shape = (int)((ulong)in_stack_fffffffffffffc20 >> 0x20);
          __this_08.fields.m_Area = (int)in_stack_fffffffffffffc28;
          __this_08.fields.m_InstanceID = (int)((ulong)in_stack_fffffffffffffc28 >> 0x20);
          __this_08.fields._88_8_ = in_stack_fffffffffffffc30.rgctx_data;
          UnityEngine_AI_NavMeshBuildSource__get_transform
                    ((UnityEngine_Matrix4x4_o *)&local_388,__this_08,&local_158);
          local_c8 = local_358;
          fStack_c4 = fStack_354;
          fStack_c0 = fStack_350;
          fStack_bc = fStack_34c;
          local_d8.genericMethod = local_368.genericMethod;
          fStack_d0 = fStack_360;
          fStack_cc = fStack_35c;
          local_e8 = (Il2CppType **)local_378._0_8_;
          _Stack_e0.rgctx_data = (Il2CppRGCTXData *)local_378._8_8_;
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
          rhs.fields.m01 = (float)local_378._0_4_;
          rhs.fields.m11 = (float)local_378._4_4_;
          rhs.fields.m21 = (float)local_378._8_4_;
          rhs.fields.m31 = (float)local_378._12_4_;
          rhs.fields._32_8_ = local_368.genericMethod;
          rhs.fields.m22 = fStack_360;
          rhs.fields.m32 = fStack_35c;
          rhs.fields.m03 = local_358;
          rhs.fields.m13 = fStack_354;
          rhs.fields.m23 = fStack_350;
          rhs.fields.m33 = fStack_34c;
          pIVar53 = (Il2CppClass *)local_2a8._0_8_;
          pIVar54 = (Il2CppType *)local_2a8._8_8_;
          pIVar55 = local_298;
          pIVar56 = pIStack_290;
          pIVar57 = local_288;
          pIVar58 = pIStack_280;
          pIVar59 = local_278;
          _Var60 = _Stack_270;
          pIVar61 = local_388;
          UnityEngine_Matrix4x4__op_Multiply((UnityEngine_Matrix4x4_o *)local_348,lhs,rhs,(MethodInfo *)0x0);
          auVar15._4_4_ = local_348._20_4_;
          auVar15._0_4_ = local_348._16_4_;
          auVar15._8_8_ = local_348._24_8_;
          fStack_354 = fStack_314;
          local_358 = local_318;
          fStack_34c = fStack_30c;
          fStack_350 = fStack_310;
          local_368 = (_union_14)local_348._32_8_;
          fStack_360 = (float)local_348._40_4_;
          fStack_35c = (float)local_348._44_4_;
          local_388 = (Il2CppClass *)local_348._0_8_;
          pIVar62 = pIStack_380;
          ppIVar63 = (Il2CppType **)local_378._0_8_;
          in_stack_fffffffffffffc30 = (_union_13)local_378._8_8_;
          pIStack_380 = (Il2CppType *)CONCAT44(local_348._12_4_,local_348._8_4_);
          if (g_data_057a65d5 == '\0') {
            local_378 = auVar15;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a65d5 = '\x01';
            auVar15 = local_378;
          }
          local_378 = auVar15;
          in_stack_fffffffffffffc18 = (Il2CppClass *)**(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          uVar1 = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
          pMVar19 = (MethodInfo *)0x0;
          __this_09.fields.m_Transform.fields._8_8_ = pIVar54;
          __this_09.fields.m_Transform.fields._0_8_ = pIVar53;
          __this_09.fields.m_Transform.fields._16_8_ = pIVar55;
          __this_09.fields.m_Transform.fields._24_8_ = pIVar56;
          __this_09.fields.m_Transform.fields._32_8_ = pIVar57;
          __this_09.fields.m_Transform.fields._40_8_ = pIVar58;
          __this_09.fields.m_Transform.fields._48_8_ = pIVar59;
          __this_09.fields.m_Transform.fields._56_8_ = _Var60.rgctx_data;
          __this_09.fields.m_Size.fields._0_8_ = pIVar61;
          __this_09.fields._72_8_ = pIVar62;
          __this_09.fields._80_8_ = ppIVar63;
          __this_09.fields._88_8_ = in_stack_fffffffffffffc30.rgctx_data;
          UVar52 = UnityEngine_AI_NavMeshBuildSource__get_size(__this_09,&local_158);
          _local_2b8 = UVar52.fields._0_8_;
          local_2c8[0]._0_4_ = UVar52.fields.z;
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          auVar25 = local_378;
          fStack_1ec = local_2b8 * 0.5;
          fStack_1e8 = fStack_2b4 * 0.5;
          fStack_1e4 = (float)local_2c8[0]._0_4_ * 0.5;
          in_stack_fffffffffffffc28 = CONCAT44(fStack_1e4,fStack_1e8);
          in_stack_fffffffffffffc20 = CONCAT44(fStack_1ec,uVar1);
          mat.fields._8_8_ = pIStack_380;
          mat.fields._0_8_ = local_388;
          mat.fields.m01 = (float)local_378._0_4_;
          mat.fields.m11 = (float)local_378._4_4_;
          mat.fields.m21 = (float)local_378._8_4_;
          mat.fields.m31 = (float)local_378._12_4_;
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
          in_stack_fffffffffffffbe8 = (Il2CppObject *)local_378._0_8_;
          in_stack_fffffffffffffbf0 = (_union_13)local_378._8_8_;
          in_stack_fffffffffffffbf8 = local_368;
          in_stack_fffffffffffffc00 = _fStack_360;
          in_stack_fffffffffffffc08 = _local_358;
          in_stack_fffffffffffffc10 = _fStack_350;
          local_378 = auVar25;
          local_1f8 = in_stack_fffffffffffffc18;
          uStack_1f0 = uVar1;
          Map_MapLoader__GetWorldBounds((UnityEngine_Bounds_o *)local_348,mat,bounds,pMVar19);
          fVar36 = (float)local_348._0_8_ - (float)local_348._12_4_;
          fVar37 = SUB84(local_348._0_8_,4) - (float)local_348._16_4_;
          fVar30 = (float)local_348._8_4_ - (float)local_348._20_4_;
          auVar22._0_4_ = local_3a8._0_4_ - fStack_39c;
          auVar22._4_4_ = local_3a8._4_4_ - fStack_398;
          auVar22._8_8_ = 0;
          auVar7._4_4_ = fVar37;
          auVar7._0_4_ = fVar36;
          auVar7._8_8_ = 0;
          auVar25 = minps(auVar22,auVar7);
          fVar35 = fStack_3a0 - fStack_394;
          if (fVar30 <= fStack_3a0 - fStack_394) {
            fVar35 = fVar30;
          }
          auVar39._0_4_ = local_3a8._0_4_ + fStack_39c;
          auVar39._4_4_ = local_3a8._4_4_ + fStack_398;
          auVar39._8_8_ = 0;
          auVar8._4_4_ = fVar37;
          auVar8._0_4_ = fVar36;
          auVar8._8_8_ = 0;
          auVar41 = maxps(auVar39,auVar8);
          fVar36 = fStack_3a0 + fStack_394;
          if (fStack_3a0 + fStack_394 <= fVar30) {
            fVar36 = fVar30;
          }
          fVar43 = (auVar41._0_4_ - auVar25._0_4_) * 0.5;
          fVar44 = (auVar41._4_4_ - auVar25._4_4_) * 0.5;
          fVar45 = (auVar41._8_4_ - auVar25._8_4_) * 0.0;
          fVar46 = (auVar41._12_4_ - auVar25._12_4_) * 0.0;
          fVar30 = (fVar36 - fVar35) * 0.5;
          fVar36 = auVar25._0_4_ + fVar43;
          fVar37 = auVar25._4_4_ + fVar44;
          fVar29 = auVar25._8_4_ + fVar45;
          fVar38 = auVar25._12_4_ + fVar46;
          fVar49 = (float)local_348._0_8_ + (float)local_348._12_4_;
          fVar48 = SUB84(local_348._0_8_,4) + (float)local_348._16_4_;
          fVar47 = (float)local_348._8_4_ + (float)local_348._20_4_;
          auVar32._0_4_ = fVar36 - fVar43;
          auVar32._4_4_ = fVar37 - fVar44;
          auVar32._8_4_ = fVar29 - fVar45;
          auVar32._12_4_ = fVar38 - fVar46;
          fStack_3a0 = (fVar35 + fVar30) - fVar30;
          auVar13._4_4_ = fVar48;
          auVar13._0_4_ = fVar49;
          auVar13._8_8_ = 0;
          auVar25 = minps(auVar32,auVar13);
          if (fVar47 <= fStack_3a0) {
            fStack_3a0 = fVar47;
          }
          auVar23._0_4_ = fVar36 + fVar43;
          auVar23._4_4_ = fVar37 + fVar44;
          auVar23._8_4_ = fVar29 + fVar45;
          auVar23._12_4_ = fVar38 + fVar46;
          fVar30 = fVar35 + fVar30 + fVar30;
          auVar14._4_4_ = fVar48;
          auVar14._0_4_ = fVar49;
          auVar14._8_8_ = 0;
          auVar41 = maxps(auVar23,auVar14);
          if (fVar30 <= fVar47) {
            fVar30 = fVar47;
          }
          fStack_39c = (auVar41._0_4_ - auVar25._0_4_) * 0.5;
          fStack_398 = (auVar41._4_4_ - auVar25._4_4_) * 0.5;
          fStack_394 = (fVar30 - fStack_3a0) * 0.5;
          local_3a8 = (undefined1  [8])CONCAT44(fStack_398 + auVar25._4_4_,fStack_39c + auVar25._0_4_);
          fStack_3a0 = fStack_394 + fStack_3a0;
        }
        __this_01.fields._8_8_ = in_stack_fffffffffffffbe0;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffbd8;
        __this_01.fields._current = in_stack_fffffffffffffbe8;
        System_Collections_Generic_List_Enumerator_NavMeshBuildSource___Dispose
                  (__this_01,(MethodInfo_3219330 *)local_1c8);
        pUVar21 = local_238;
        goto label_040a77c3;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040a780b:
  il2cpp_runtime_helper_022b2c90();
label_040a7810:
  auVar51 = il2cpp_runtime_helper_022b2c90();
  pUVar21 = local_238;
  if (auVar51._8_4_ == 1) {
    plVar20 = (long *)__cxa_begin_catch(auVar51._0_8_);
    lVar2 = *plVar20;
    __cxa_end_catch();
    __this_03.fields._8_8_ = in_stack_fffffffffffffbe0;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffbd8;
    __this_03.fields._current = in_stack_fffffffffffffbe8;
    System_Collections_Generic_List_Enumerator_NavMeshBuildSource___Dispose
              (__this_03,(MethodInfo_3219330 *)local_1c8);
    if (lVar2 == 0) {
label_040a77c3:
      __this_02.fields._8_8_ = in_stack_fffffffffffffbe0;
      __this_02.fields.m_Center.fields._0_8_ = in_stack_fffffffffffffbd8;
      __this_02.fields.m_Extents.fields._4_8_ = in_stack_fffffffffffffbe8;
      UnityEngine_Bounds__Expand(__this_02,0.1,(MethodInfo *)local_3a8);
      (pUVar21->fields).m_Extents.fields.y = fStack_398;
      (pUVar21->fields).m_Extents.fields.z = fStack_394;
      (pUVar21->fields).m_Center.fields.x = (float)local_3a8._0_4_;
      (pUVar21->fields).m_Center.fields.y = (float)local_3a8._4_4_;
      *(ulong *)&(pUVar21->fields).m_Center.fields.z = CONCAT44(fStack_39c,fStack_3a0);
      return pUVar21;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = in_stack_fffffffffffffbe0;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffbd8;
  __this_04.fields._current = in_stack_fffffffffffffbe8;
  System_Collections_Generic_List_Enumerator_NavMeshBuildSource___Dispose
            (__this_04,(MethodInfo_3219330 *)local_1c8);
  _Unwind_Resume(auVar51._0_8_);
code_r0x040a6d8b:
  if (iVar17 == 1) {
    __this_07.fields.m_Transform.fields._8_8_ = in_stack_fffffffffffffbe0;
    __this_07.fields.m_Transform.fields._0_8_ = in_stack_fffffffffffffbd8;
    __this_07.fields.m_Transform.fields._16_8_ = in_stack_fffffffffffffbe8;
    __this_07.fields.m_Transform.fields._24_8_ = in_stack_fffffffffffffbf0.rgctx_data;
    __this_07.fields.m_Transform.fields._32_8_ = in_stack_fffffffffffffbf8.genericMethod;
    __this_07.fields.m_Transform.fields.m22 = (float)in_stack_fffffffffffffc00;
    __this_07.fields.m_Transform.fields.m32 = SUB84(in_stack_fffffffffffffc00,4);
    __this_07.fields.m_Transform.fields.m03 = (float)in_stack_fffffffffffffc08;
    __this_07.fields.m_Transform.fields.m13 = SUB84(in_stack_fffffffffffffc08,4);
    __this_07.fields.m_Transform.fields.m23 = (float)in_stack_fffffffffffffc10;
    __this_07.fields.m_Transform.fields.m33 = SUB84(in_stack_fffffffffffffc10,4);
    __this_07.fields.m_Size.fields._0_8_ = in_stack_fffffffffffffc18;
    __this_07.fields.m_Size.fields.z = (float)(int)in_stack_fffffffffffffc20;
    __this_07.fields.m_Shape = (int)((ulong)in_stack_fffffffffffffc20 >> 0x20);
    __this_07.fields.m_Area = (int)in_stack_fffffffffffffc28;
    __this_07.fields.m_InstanceID = (int)((ulong)in_stack_fffffffffffffc28 >> 0x20);
    __this_07.fields._88_8_ = in_stack_fffffffffffffc30.rgctx_data;
    __this_13 = (UnityEngine_TerrainData_o *)
                UnityEngine_AI_NavMeshBuildSource__get_sourceObject(__this_07,&local_158);
    if (__this_13 == (UnityEngine_TerrainData_o *)0x0) {
      __this_13 = (UnityEngine_TerrainData_o *)0x0;
    }
    else if (__this_13->klass != TypeInfo_TerrainData) {
      __this_13 = (UnityEngine_TerrainData_o *)0x0;
    }
    local_278 = (Il2CppClass *)local_308._48_8_;
    _Stack_270.rgctx_data = (Il2CppRGCTXData *)local_308._56_8_;
    local_288 = (Il2CppClass *)local_308._32_8_;
    pIStack_280 = (Il2CppType *)local_308._40_8_;
    local_298 = (Il2CppObject *)local_308._16_8_;
    pIStack_290 = (Il2CppMethodPointer)local_308._24_8_;
    local_2a8._0_8_ = local_308._0_8_;
    local_2a8._8_8_ = local_308._8_8_;
    __this_11.fields.m_Transform.fields._8_8_ = in_stack_fffffffffffffbe0;
    __this_11.fields.m_Transform.fields._0_8_ = in_stack_fffffffffffffbd8;
    __this_11.fields.m_Transform.fields._16_8_ = in_stack_fffffffffffffbe8;
    __this_11.fields.m_Transform.fields._24_8_ = in_stack_fffffffffffffbf0.rgctx_data;
    __this_11.fields.m_Transform.fields._32_8_ = in_stack_fffffffffffffbf8.genericMethod;
    __this_11.fields.m_Transform.fields.m22 = (float)in_stack_fffffffffffffc00;
    __this_11.fields.m_Transform.fields.m32 = SUB84(in_stack_fffffffffffffc00,4);
    __this_11.fields.m_Transform.fields.m03 = (float)in_stack_fffffffffffffc08;
    __this_11.fields.m_Transform.fields.m13 = SUB84(in_stack_fffffffffffffc08,4);
    __this_11.fields.m_Transform.fields.m23 = (float)in_stack_fffffffffffffc10;
    __this_11.fields.m_Transform.fields.m33 = SUB84(in_stack_fffffffffffffc10,4);
    __this_11.fields.m_Size.fields._0_8_ = in_stack_fffffffffffffc18;
    __this_11.fields.m_Size.fields.z = (float)(int)in_stack_fffffffffffffc20;
    __this_11.fields.m_Shape = (int)((ulong)in_stack_fffffffffffffc20 >> 0x20);
    __this_11.fields.m_Area = (int)in_stack_fffffffffffffc28;
    __this_11.fields.m_InstanceID = (int)((ulong)in_stack_fffffffffffffc28 >> 0x20);
    __this_11.fields._88_8_ = in_stack_fffffffffffffc30.rgctx_data;
    UnityEngine_AI_NavMeshBuildSource__get_transform
              ((UnityEngine_Matrix4x4_o *)&local_388,__this_11,&local_158);
    local_88 = local_358;
    fStack_84 = fStack_354;
    fStack_80 = fStack_350;
    fStack_7c = fStack_34c;
    local_98.genericMethod = local_368.genericMethod;
    fStack_90 = fStack_360;
    fStack_8c = fStack_35c;
    local_a8 = (Il2CppType **)local_378._0_8_;
    _Stack_a0.rgctx_data = (Il2CppRGCTXData *)local_378._8_8_;
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
    rhs_00.fields.m01 = (float)local_378._0_4_;
    rhs_00.fields.m11 = (float)local_378._4_4_;
    rhs_00.fields.m21 = (float)local_378._8_4_;
    rhs_00.fields.m31 = (float)local_378._12_4_;
    rhs_00.fields._32_8_ = local_368.genericMethod;
    rhs_00.fields.m22 = fStack_360;
    rhs_00.fields.m32 = fStack_35c;
    rhs_00.fields.m03 = local_358;
    rhs_00.fields.m13 = fStack_354;
    rhs_00.fields.m23 = fStack_350;
    rhs_00.fields.m33 = fStack_34c;
    in_stack_fffffffffffffbd8 = (Il2CppClass *)local_2a8._0_8_;
    in_stack_fffffffffffffbe0 = (Il2CppType *)local_2a8._8_8_;
    in_stack_fffffffffffffbe8 = local_298;
    UnityEngine_Matrix4x4__op_Multiply((UnityEngine_Matrix4x4_o *)local_348,lhs_00,rhs_00,(MethodInfo *)0x0);
    pIStack_380 = (Il2CppType *)CONCAT44(local_348._12_4_,local_348._8_4_);
    auVar41._4_4_ = local_348._20_4_;
    auVar41._0_4_ = local_348._16_4_;
    auVar41._8_8_ = local_348._24_8_;
    fStack_354 = fStack_314;
    local_358 = local_318;
    fStack_34c = fStack_30c;
    fStack_350 = fStack_310;
    local_368 = (_union_14)local_348._32_8_;
    fStack_360 = (float)local_348._40_4_;
    fStack_35c = (float)local_348._44_4_;
    local_388 = (Il2CppClass *)local_348._0_8_;
    if (__this_13 == (UnityEngine_TerrainData_o *)0x0) goto label_040a7810;
    in_stack_fffffffffffffc30 = (_union_13)local_378._8_8_;
    local_378 = auVar41;
    UVar52 = UnityEngine_TerrainData__get_size(__this_13,(MethodInfo *)0x0);
    local_2c8[0] = UVar52.fields._0_8_;
    local_2b8 = UVar52.fields.z;
    pMVar19 = (MethodInfo *)0x0;
    UVar52 = UnityEngine_TerrainData__get_size(__this_13,(MethodInfo *)0x0);
    local_218._0_4_ = UVar52.fields.z;
    uStack_200 = extraout_XMM0_Qb;
    local_208 = (undefined1  [8])UVar52.fields._0_8_;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    auVar25 = local_378;
    fStack_1d8 = local_2b8 * 0.5;
    fStack_1d4 = (float)local_208._0_4_ * 0.5;
    fStack_1d0 = (float)local_208._4_4_ * 0.5;
    local_1cc = (float)local_218._0_4_ * 0.5;
    in_stack_fffffffffffffc18 =
         (Il2CppClass *)CONCAT44((float)local_2c8[0]._4_4_ * 0.5,(float)local_2c8[0]._0_4_ * 0.5);
    in_stack_fffffffffffffc28 = CONCAT44(local_1cc,fStack_1d0);
    in_stack_fffffffffffffc20 = CONCAT44(fStack_1d4,fStack_1d8);
    mat_00.fields._8_8_ = pIStack_380;
    mat_00.fields._0_8_ = local_388;
    mat_00.fields.m01 = (float)local_378._0_4_;
    mat_00.fields.m11 = (float)local_378._4_4_;
    mat_00.fields.m21 = (float)local_378._8_4_;
    mat_00.fields.m31 = (float)local_378._12_4_;
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
    in_stack_fffffffffffffbe8 = (Il2CppObject *)local_378._0_8_;
    in_stack_fffffffffffffbf0 = (_union_13)local_378._8_8_;
    in_stack_fffffffffffffbf8 = local_368;
    in_stack_fffffffffffffc00 = _fStack_360;
    in_stack_fffffffffffffc08 = _local_358;
    in_stack_fffffffffffffc10 = _fStack_350;
    local_378 = auVar25;
    local_1e0 = in_stack_fffffffffffffc18;
    Map_MapLoader__GetWorldBounds((UnityEngine_Bounds_o *)local_348,mat_00,bounds_00,pMVar19);
    fVar36 = (float)local_348._0_8_ - (float)local_348._12_4_;
    fVar37 = SUB84(local_348._0_8_,4) - (float)local_348._16_4_;
    fVar30 = (float)local_348._8_4_ - (float)local_348._20_4_;
    auVar24._0_4_ = local_3a8._0_4_ - fStack_39c;
    auVar24._4_4_ = local_3a8._4_4_ - fStack_398;
    auVar24._8_8_ = 0;
    auVar3._4_4_ = fVar37;
    auVar3._0_4_ = fVar36;
    auVar3._8_8_ = 0;
    auVar25 = minps(auVar24,auVar3);
    fVar35 = fStack_3a0 - fStack_394;
    if (fVar30 <= fStack_3a0 - fStack_394) {
      fVar35 = fVar30;
    }
    auVar40._0_4_ = local_3a8._0_4_ + fStack_39c;
    auVar40._4_4_ = local_3a8._4_4_ + fStack_398;
    auVar40._8_8_ = 0;
    auVar4._4_4_ = fVar37;
    auVar4._0_4_ = fVar36;
    auVar4._8_8_ = 0;
    auVar41 = maxps(auVar40,auVar4);
    fVar36 = fStack_3a0 + fStack_394;
    if (fStack_3a0 + fStack_394 <= fVar30) {
      fVar36 = fVar30;
    }
    fVar38 = (auVar41._0_4_ - auVar25._0_4_) * 0.5;
    fVar43 = (auVar41._4_4_ - auVar25._4_4_) * 0.5;
    fVar44 = (auVar41._8_4_ - auVar25._8_4_) * 0.0;
    fVar45 = (auVar41._12_4_ - auVar25._12_4_) * 0.0;
    fStack_394 = (fVar36 - fVar35) * 0.5;
    fVar30 = auVar25._0_4_ + fVar38;
    fVar36 = auVar25._4_4_ + fVar43;
    fVar37 = auVar25._8_4_ + fVar44;
    fVar29 = auVar25._12_4_ + fVar45;
    fVar47 = (float)local_348._0_8_ + (float)local_348._12_4_;
    fVar49 = SUB84(local_348._0_8_,4) + (float)local_348._16_4_;
    fVar46 = (float)local_348._8_4_ + (float)local_348._20_4_;
    auVar33._0_4_ = fVar30 - fVar38;
    auVar33._4_4_ = fVar36 - fVar43;
    auVar33._8_4_ = fVar37 - fVar44;
    auVar33._12_4_ = fVar29 - fVar45;
    fStack_3a0 = (fVar35 + fStack_394) - fStack_394;
    auVar9._4_4_ = fVar49;
    auVar9._0_4_ = fVar47;
    auVar9._8_8_ = 0;
    auVar25 = minps(auVar33,auVar9);
    uVar31 = auVar25._0_8_;
    if (fVar46 <= fStack_3a0) {
      fStack_3a0 = fVar46;
    }
    auVar26._0_4_ = fVar30 + fVar38;
    auVar26._4_4_ = fVar36 + fVar43;
    auVar26._8_4_ = fVar37 + fVar44;
    auVar26._12_4_ = fVar29 + fVar45;
    fStack_394 = fVar35 + fStack_394 + fStack_394;
    auVar10._4_4_ = fVar49;
    auVar10._0_4_ = fVar47;
    auVar10._8_8_ = 0;
    auVar41 = maxps(auVar26,auVar10);
    if (fStack_394 <= fVar46) {
      fStack_394 = fVar46;
    }
    fStack_39c = auVar41._0_4_ - auVar25._0_4_;
    fStack_398 = auVar41._4_4_ - auVar25._4_4_;
    fStack_394 = fStack_394 - fStack_3a0;
label_040a6cdf:
    fStack_398 = fStack_398 * 0.5;
    fStack_39c = fStack_39c * 0.5;
    fStack_394 = fStack_394 * 0.5;
    local_3a8 = (undefined1  [8])
                CONCAT44(fStack_398 + (float)((ulong)uVar31 >> 0x20),fStack_39c + (float)uVar31);
    fStack_3a0 = fStack_394 + fStack_3a0;
  }
  goto label_040a6d10;
}


// Map.MapLoader$$ResetSources
// il2cpp: void Map_MapLoader__ResetSources (Map_MapLoader_o* __this, const MethodInfo* method);
// 0x40a7aa0

void Map_MapLoader__ResetSources(Map_MapLoader_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer pIVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  undefined8 uVar3;
  Il2CppClass *pIVar4;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_04;
  _union_236485 _Var5;
  UnityEngine_LayerMask_o mask;
  int32_t includedLayerMask;
  bool_conflict bVar6;
  uint uVar7;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar8;
  System_Int32_array *layers;
  System_Collections_Generic_List_NavMeshBuildMarkup__o *__this_05;
  System_Collections_Generic_HashSet_object__o *pSVar9;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_06;
  System_Object_array *pSVar10;
  UnityEngine_GameObject_o *item;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar11;
  System_Collections_Generic_List_TSource__o *pSVar12;
  long *plVar13;
  MethodInfo *pMVar14;
  Map_MapLoader___c__DisplayClass38_0_Fields *pMVar15;
  uint uVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [12];
  undefined8 in_stack_ffffffffffffff78;
  undefined8 in_stack_ffffffffffffff80;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar21;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *local_58;
  Map_MapLoader_o *local_50;
  undefined1 local_48 [16];
  _union_236485 local_38;
  
  if (g_data_057ac4a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Ma);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_AI_NavMeshBuildSource_ToList_NavMeshB);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_UnityEngine_AI_NavMeshBuildSource_Where_Na);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_NavMeshBuildSource_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_GetComponentsInChildren_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_AI_NavMeshBuildMarkup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_NavMeshBuildMarkup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ResetSources_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass38_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    g_data_057ac4a5 = '\x01';
  }
  pSVar21 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pSVar8 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
           il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass38_0);
  Map_MapLoader___c__DisplayClass38_0___ctor
            ((Map_MapLoader___c__DisplayClass38_0_o *)pSVar8,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_MapLoader[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar1 = TypeInfo_MapLoader[2].virtualMethodPointer;
  lVar2 = *(long *)(pIVar1 + 0xa0);
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    *(undefined4 *)(lVar2 + 0x18) = 0;
    __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)(pIVar1 + 0xc0);
    if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      System_Collections_Generic_Dictionary_int__object___Clear(__this_00,MethodInfo_Void_Clear);
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar3 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      pIVar1 = TypeInfo_MapLoader[2].virtualMethodPointer;
      *(undefined8 *)(pIVar1 + 0xa8) = uVar3;
      *(float *)(pIVar1 + 0xb0) = fVar19;
      *(ulong *)(pIVar1 + 0xb4) = CONCAT44((float)((ulong)uVar3 >> 0x20) * 0.5,(float)uVar3 * 0.5);
      *(float *)(pIVar1 + 0xbc) = fVar19 * 0.5;
      layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
      if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (layers != (System_Int32_array *)0x0) {
        uVar7 = (uint)layers->max_length;
        if (uVar7 == 0) goto label_040a80c3;
        lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
        layers->m_Items[0] = *(int32_t *)(lVar2 + 0x38);
        if (uVar7 == 1) goto label_040a80c3;
        layers->m_Items[1] = *(int32_t *)(lVar2 + 0x3c);
        if (uVar7 < 3) goto label_040a80c3;
        layers->m_Items[2] = *(int32_t *)(lVar2 + 0x34);
        if (uVar7 == 3) goto label_040a80c3;
        layers->m_Items[3] = *(int32_t *)(lVar2 + 0x50);
        mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
        __this_05 = (System_Collections_Generic_List_NavMeshBuildMarkup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_NavMeshBuildMarkup);
        System_Collections_Generic_List_NavMeshBuildMarkup____ctor(__this_05,MethodInfo_List_1_UnityEngine_AI_NavMeshBuildMarkup);
        includedLayerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
        in_stack_ffffffffffffff78 = 0;
        UnityEngine_AI_NavMeshBuilder__CollectSources_4d8f990
                  ((UnityEngine_Transform_o *)0x0,includedLayerMask,1,0,__this_05,
                   *(System_Collections_Generic_List_NavMeshBuildSource__o **)
                    (TypeInfo_MapLoader[2].virtualMethodPointer + 0xa0),(MethodInfo *)0x0);
        pSVar9 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_GameObject);
        System_Collections_Generic_HashSet_object____ctor(pSVar9,MethodInfo_HashSet_1_UnityEngine_GameObject);
        if (pSVar8 != (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0)
        {
          pMVar15 = (Map_MapLoader___c__DisplayClass38_0_Fields *)&(pSVar8->_1).name;
          ((Map_MapLoader___c__DisplayClass38_0_Fields *)&(pSVar8->_1).name)->staticObjects =
               (System_Collections_Generic_HashSet_GameObject__o *)pSVar9;
          il2cpp_runtime_helper_022b4080(pMVar15,pSVar9);
          if ((*(System_Collections_Generic_Dictionary_int__object__o **)TypeInfo_MapLoader[2].virtualMethodPointer
               != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
             (__this_06 = System_Collections_Generic_Dictionary_int__object___get_Values
                                    (*(System_Collections_Generic_Dictionary_int__object__o **)
                                      TypeInfo_MapLoader[2].virtualMethodPointer,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Ma), local_58 = pSVar8,
             local_50 = __this,
             __this_06 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
            System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator
                      ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                       local_48,__this_06,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
            _Var5 = local_38;
            pSVar21 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_48._0_8_;
label_040a7e70:
            do {
              __this_01.fields._index = (int)in_stack_ffffffffffffff80;
              __this_01.fields._version = (int)((ulong)in_stack_ffffffffffffff80 >> 0x20);
              __this_01.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff78;
              __this_01.fields._currentValue = (Il2CppObject *)pSVar21;
              bVar6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                                (__this_01,(MethodInfo_32443D0 *)&stack0xffffffffffffff88);
              if ((char)bVar6 == '\0') {
                __this_02.fields._index = (int)in_stack_ffffffffffffff80;
                __this_02.fields._version = (int)((ulong)in_stack_ffffffffffffff80 >> 0x20);
                __this_02.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff78;
                __this_02.fields._currentValue = (Il2CppObject *)pSVar21;
                System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                          (__this_02,(MethodInfo_32443C0 *)&stack0xffffffffffffff88);
                goto label_040a7f52;
              }
              if (_Var5.genericMethod == (Il2CppObject *)0x0) {
label_040a80aa:
                il2cpp_runtime_helper_022b2c90();
label_040a80af:
                il2cpp_runtime_helper_022b2c90();
                goto label_040a80b4;
              }
              pIVar4 = ((Il2CppObject *)((long)_Var5.genericMethod + 0x20))->klass;
              if (pIVar4 == (Il2CppClass *)0x0) goto label_040a80af;
            } while (*(char *)((long)&(pIVar4->_1).byval_arg.bits + 1) == '\0');
            if (*(void **)((long)_Var5.genericMethod + 0x18) == (UnityEngine_GameObject_o *)0x0) {
label_040a80b4:
              il2cpp_runtime_helper_022b2c90();
            }
            else {
              pSVar10 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                                  (*(void **)((long)_Var5.genericMethod + 0x18),MethodInfo_Transform_GetComponentsInChildren_Transform);
              if (pSVar10 != (System_Object_array *)0x0) {
                uVar7 = (uint)pSVar10->max_length;
                if (0 < (int)uVar7) {
                  uVar16 = 0;
                  do {
                    if (uVar7 <= uVar16) {
                      il2cpp_runtime_helper_022b2ca0();
label_040a80a0:
                      il2cpp_runtime_helper_022b2c90();
label_040a80a5:
                      il2cpp_runtime_helper_022b2c90();
                      goto label_040a80aa;
                    }
                    if ((UnityEngine_Component_o *)pSVar10->m_Items[(int)uVar16] ==
                        (UnityEngine_Component_o *)0x0) goto label_040a80a5;
                    pSVar9 = (System_Collections_Generic_HashSet_object__o *)pMVar15->staticObjects;
                    item = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pSVar10->m_Items[(int)uVar16],
                                      (MethodInfo *)0x0);
                    if (pSVar9 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_040a80a0;
                    System_Collections_Generic_HashSet_object___Add(pSVar9,(Il2CppObject *)item,MethodInfo_Boolean_Add);
                    uVar16 = uVar16 + 1;
                    uVar7 = (uint)pSVar10->max_length;
                  } while ((int)uVar16 < (int)uVar7);
                }
                goto label_040a7e70;
              }
            }
            il2cpp_runtime_helper_022b2c90();
          }
        }
      }
    }
  }
  do {
    il2cpp_runtime_helper_022b2c90();
label_040a80c3:
    auVar20 = il2cpp_runtime_helper_022b2ca0();
    pSVar8 = auVar20._0_8_;
    if (auVar20._8_4_ != 1) {
label_040a8189:
      __this_04.fields._index = (int)in_stack_ffffffffffffff80;
      __this_04.fields._version = (int)((ulong)in_stack_ffffffffffffff80 >> 0x20);
      __this_04.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff78;
      __this_04.fields._currentValue = (Il2CppObject *)pSVar21;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                (__this_04,(MethodInfo_32443C0 *)&stack0xffffffffffffff88);
      _Unwind_Resume(pSVar8);
    }
    plVar13 = (long *)__cxa_begin_catch(pSVar8);
    lVar2 = *plVar13;
    __cxa_end_catch();
    __this_03.fields._index = (int)in_stack_ffffffffffffff80;
    __this_03.fields._version = (int)((ulong)in_stack_ffffffffffffff80 >> 0x20);
    __this_03.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff78;
    __this_03.fields._currentValue = (Il2CppObject *)pSVar21;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
              (__this_03,(MethodInfo_32443C0 *)&stack0xffffffffffffff88);
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      pSVar8 = local_58;
      goto label_040a8189;
    }
label_040a7f52:
    if (*(int *)((long)&TypeInfo_MapLoader[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = *(System_Collections_Generic_IEnumerable_TSource__o **)
               (TypeInfo_MapLoader[2].virtualMethodPointer + 0xa0);
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_NavMeshBuildSource_bool);
    System_Func_NavMeshBuildSource__bool____ctor();
    pSVar11 = System_Linq_Enumerable__Where_NavMeshBuildSource_(pSVar11,predicate,MethodInfo_IEnumerable_1_UnityEngine_AI_NavMeshBuildSource_Where_Na);
    pSVar12 = System_Linq_Enumerable__ToList_NavMeshBuildSource_(pSVar11,MethodInfo_List_1_UnityEngine_AI_NavMeshBuildSource_ToList_NavMeshB);
    pMVar14 = TypeInfo_MapLoader;
    pIVar1 = TypeInfo_MapLoader[2].virtualMethodPointer;
    *(System_Collections_Generic_List_TSource__o **)(pIVar1 + 0xa0) = pSVar12;
    il2cpp_runtime_helper_022b4080(pIVar1 + 0xa0,pSVar12);
    pSVar9 = (System_Collections_Generic_HashSet_object__o *)
             ((Map_MapLoader___c__DisplayClass38_0_Fields *)&(local_58->_1).name)->staticObjects;
    if (pSVar9 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Clear(pSVar9,MethodInfo_Void_Clear);
      Map_MapLoader__CalculateWorldBounds
                ((UnityEngine_Bounds_o *)local_48,local_50,
                 *(System_Collections_Generic_List_NavMeshBuildSource__o **)
                  (TypeInfo_MapLoader[2].virtualMethodPointer + 0xa0),pMVar14);
      pMVar14 = TypeInfo_MapLoader;
      pIVar1 = TypeInfo_MapLoader[2].virtualMethodPointer;
      *(_union_236485 *)(pIVar1 + 0xb8) = local_38;
      *(undefined8 *)(pIVar1 + 0xa8) = local_48._0_8_;
      *(undefined8 *)(pIVar1 + 0xb0) = local_48._8_8_;
      pIVar1 = pMVar14[2].virtualMethodPointer;
      fVar17 = (float)*(undefined8 *)(pIVar1 + 0xb4);
      fVar19 = (float)((ulong)*(undefined8 *)(pIVar1 + 0xb4) >> 0x20);
      auVar18._0_4_ = fVar17 + fVar17;
      auVar18._4_4_ = fVar19 + fVar19;
      auVar18._8_8_ = 0;
      fVar19 = *(float *)(pIVar1 + 0xbc) + *(float *)(pIVar1 + 0xbc);
      auVar18 = minps(auVar18,_DAT_00d199e0);
      if (15000.0 <= fVar19) {
        fVar19 = 15000.0;
      }
      *(ulong *)(pIVar1 + 0xb4) = CONCAT44(auVar18._4_4_ * 0.5,auVar18._0_4_ * 0.5);
      *(float *)(pIVar1 + 0xbc) = fVar19 * 0.5;
      return;
    }
  } while( true );
}


// Map.MapLoader$$CreateNavMeshSurfaceAsyncOperation
// il2cpp: UnityEngine_AsyncOperation_o* Map_MapLoader__CreateNavMeshSurfaceAsyncOperation (Map_MapLoader_o* __this, int32_t agentID, System_Collections_Generic_List_NavMeshBuildSource__o* sources, UnityEngine_Bounds_o bounds, const MethodInfo* method);
// 0x40a81d0

UnityEngine_AsyncOperation_o *
Map_MapLoader__CreateNavMeshSurfaceAsyncOperation
          (Map_MapLoader_o *__this,int32_t agentID,
          System_Collections_Generic_List_NavMeshBuildSource__o *sources,UnityEngine_Bounds_o bounds,
          MethodInfo *method)

{
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
  UnityEngine_AI_NavMeshData_o *__this_10;
  UnityEngine_AsyncOperation_o *pUVar1;
  System_Threading_Tasks_Task_o *pSVar2;
  Il2CppClass *extraout_RDX;
  uint32_t value;
  undefined4 uVar3;
  undefined4 uVar4;
  Il2CppClass *pIStack_188;
  Il2CppType *pIStack_180;
  MethodInfo_24B7D70_RGCTXs *pMStack_178;
  _union_214927 _Stack_170;
  _union_14 _Stack_168;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o SStack_158;
  uint16_t uStack_140;
  uint8_t uStack_13e;
  uint8_t uStack_13d;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  System_Threading_Tasks_Task_TResult__o *pSStack_130;
  UnityEngine_AI_NavMeshData_o *pUStack_128;
  System_Collections_Generic_List_NavMeshBuildSource__o *pSStack_120;
  ulong uStack_118;
  undefined8 *puStack_110;
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
  
  if (g_data_057ac4a6 == '\0') {
    puStack_110 = (undefined8 *)0x40a81f8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    puStack_110 = (undefined8 *)0x40a8204;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    puStack_110 = (undefined8 *)0x40a8210;
    il2cpp_runtime_helper_023445d0(&TypeInfo_NavMeshData);
    g_data_057ac4a6 = '\x01';
  }
  local_a8._48_8_ = (Il2CppType **)0x0;
  local_a8._56_8_ = (Il2CppRGCTXData *)0x0;
  local_a8._32_8_ = (Il2CppClass *)0x0;
  local_a8._40_8_ = (Il2CppType *)0x0;
  local_a8._16_8_ = (InvokerMethod)0x0;
  local_a8._24_8_ = (char *)0x0;
  local_a8._0_8_ = (Il2CppMethodPointer)0x0;
  local_a8._8_8_ = (Il2CppMethodPointer)0x0;
  puStack_110 = (undefined8 *)0x40a8243;
  __this_10 = (UnityEngine_AI_NavMeshData_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NavMeshData);
  puStack_110 = (undefined8 *)0x40a8250;
  UnityEngine_AI_NavMeshData___ctor(__this_10,(MethodInfo *)0x0);
  puStack_110 = (undefined8 *)0x40a8262;
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
  puStack_110 = (undefined8 *)0x40a82b0;
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
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)((ulong)in_stack_ffffffffffffff30 >> 0x20);
  __this_03.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff30 >> 0x28);
  value = (uint32_t)(MethodInfo *)local_a8;
  UnityEngine_AI_NavMeshBuildSettings__set_maxJobWorkers(__this_03,value,(MethodInfo *)0x3);
  puStack_110 = (undefined8 *)0x40a82bf;
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
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)((ulong)in_stack_ffffffffffffff30 >> 0x20);
  __this_04.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff30 >> 0x28);
  UnityEngine_AI_NavMeshBuildSettings__set_overrideTileSize(__this_04,value,(MethodInfo *)0x1);
  puStack_110 = (undefined8 *)0x40a82ce;
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
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)((ulong)in_stack_ffffffffffffff30 >> 0x20);
  __this_05.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff30 >> 0x28);
  UnityEngine_AI_NavMeshBuildSettings__set_tileSize(__this_05,value,(MethodInfo *)0x100);
  puStack_110 = (undefined8 *)0x40a82dd;
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
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)((ulong)in_stack_ffffffffffffff30 >> 0x20);
  __this_06.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff30 >> 0x28);
  UnityEngine_AI_NavMeshBuildSettings__set_overrideVoxelSize(__this_06,value,(MethodInfo *)0x1);
  puStack_110 = (undefined8 *)0x40a82ef;
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
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)((ulong)in_stack_ffffffffffffff30 >> 0x20);
  __this_07.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff30 >> 0x28);
  UnityEngine_AI_NavMeshBuildSettings__set_voxelSize(__this_07,4.0,(MethodInfo *)local_a8);
  puStack_110 = (undefined8 *)0x40a8301;
  __this_08.fields.m_AgentHeight = (float)(int)in_stack_ffffffffffffff00;
  __this_08.fields.m_AgentSlope = (float)(int)((ulong)in_stack_ffffffffffffff00 >> 0x20);
  __this_08.fields.m_AgentTypeID = (int)in_stack_fffffffffffffef8;
  __this_08.fields.m_AgentRadius = (float)(int)((ulong)in_stack_fffffffffffffef8 >> 0x20);
  __this_08.fields.m_AgentClimb = (float)(int)in_stack_ffffffffffffff08;
  __this_08.fields.m_LedgeDropHeight = (float)(int)((ulong)in_stack_ffffffffffffff08 >> 0x20);
  __this_08.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff10;
  __this_08.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
  __this_08.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff18;
  __this_08.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff18 >> 0x20);
  __this_08.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff20;
  __this_08.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
  __this_08.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff28;
  __this_08.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
  __this_08.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff30;
  __this_08.fields.m_Debug.fields.m_Flags =
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)((ulong)in_stack_ffffffffffffff30 >> 0x20);
  __this_08.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff30 >> 0x28);
  UnityEngine_AI_NavMeshBuildSettings__set_minRegionArea(__this_08,100.0,(MethodInfo *)local_a8);
  puStack_110 = (undefined8 *)0x40a8310;
  __this_09.fields.m_AgentHeight = (float)(int)in_stack_ffffffffffffff00;
  __this_09.fields.m_AgentSlope = (float)(int)((ulong)in_stack_ffffffffffffff00 >> 0x20);
  __this_09.fields.m_AgentTypeID = (int)in_stack_fffffffffffffef8;
  __this_09.fields.m_AgentRadius = (float)(int)((ulong)in_stack_fffffffffffffef8 >> 0x20);
  __this_09.fields.m_AgentClimb = (float)(int)in_stack_ffffffffffffff08;
  __this_09.fields.m_LedgeDropHeight = (float)(int)((ulong)in_stack_ffffffffffffff08 >> 0x20);
  __this_09.fields.m_MaxJumpAcrossDistance = (float)(int)in_stack_ffffffffffffff10;
  __this_09.fields.m_MinRegionArea = (float)(int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
  __this_09.fields.m_OverrideVoxelSize = (int)in_stack_ffffffffffffff18;
  __this_09.fields.m_VoxelSize = (float)(int)((ulong)in_stack_ffffffffffffff18 >> 0x20);
  __this_09.fields.m_OverrideTileSize = (int)in_stack_ffffffffffffff20;
  __this_09.fields.m_TileSize = (int)((ulong)in_stack_ffffffffffffff20 >> 0x20);
  __this_09.fields.m_BuildHeightMesh = (int)in_stack_ffffffffffffff28;
  __this_09.fields.m_MaxJobWorkers = (int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
  __this_09.fields.m_PreserveTilesOutsideBounds = (int)in_stack_ffffffffffffff30;
  __this_09.fields.m_Debug.fields.m_Flags =
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)
       (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)(char)((ulong)in_stack_ffffffffffffff30 >> 0x20);
  __this_09.fields._61_3_ = (int3)((ulong)in_stack_ffffffffffffff30 >> 0x28);
  UnityEngine_AI_NavMeshBuildSettings__set_buildHeightMesh(__this_09,value,(MethodInfo *)0x1);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    puStack_110 = (undefined8 *)0x40a8329;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0xc0);
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    puStack_110 = (undefined8 *)0x40a8361;
    System_Collections_Generic_Dictionary_int__object___Add
              (__this_00,agentID,(Il2CppObject *)__this_10,MethodInfo_Void_Add);
    puStack_110 = (undefined8 *)0x40a836b;
    UnityEngine_AI_NavMesh__AddNavMeshData(__this_10,(MethodInfo *)0x0);
    puStack_110 = (undefined8 *)0x40a83b7;
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
                       (__this_10,buildSettings,sources,bounds,(MethodInfo *)0x0);
    return pUVar1;
  }
  puStack_110 = (undefined8 *)0x40a83ca;
  il2cpp_runtime_helper_022b2c90();
  puStack_110 = &TypeInfo_MapLoader;
  pUStack_128 = __this_10;
  pSStack_120 = sources;
  uStack_118 = (ulong)(uint)agentID;
  if (g_data_057ac4a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_MapLoader_CreateNavMeshSurfaceAsync_d__40);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
    g_data_057ac4a7 = '\x01';
  }
  _Stack_170.genericMethod = (void *)0x0;
  _Stack_168.genericMethod = (void *)0x0;
  pIStack_180 = (Il2CppType *)0x0;
  pMStack_178 = (MethodInfo_24B7D70_RGCTXs *)0x0;
  pIStack_188 = (Il2CppClass *)0x0;
  uVar4 = 0;
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create(&SStack_158,(MethodInfo *)0x0);
  pSStack_130 = SStack_158.fields.m_builder.fields.m_task;
  uStack_140 = (uint16_t)SStack_158.fields.m_builder.fields.m_coreState.fields.m_stateMachine;
  uStack_13e = SStack_158.fields.m_builder.fields.m_coreState.fields.m_stateMachine._2_1_;
  uStack_13d = SStack_158.fields.m_builder.fields.m_coreState.fields.m_stateMachine._3_1_;
  uStack_13c = SStack_158.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_;
  uStack_138 = SStack_158.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_;
  uStack_134 = SStack_158.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_;
  il2cpp_runtime_helper_022b4080((MethodInfo *)&stack0xfffffffffffffe58,0);
  pIStack_188 = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&pIStack_188,extraout_RDX);
  uVar3 = 0xffffffff;
  __this_01.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_ = uVar4;
  __this_01.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_ = 0xffffffff;
  __this_01.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_2_ =
       (uint16_t)SStack_158.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_;
  __this_01.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._2_1_ =
       SUB41(SStack_158.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_,2);
  __this_01.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._3_1_ =
       SUB41(SStack_158.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_,3);
  __this_01.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_ =
       SStack_158.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_;
  __this_01.fields.m_builder.fields.m_task._0_4_ =
       SStack_158.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_;
  __this_01.fields.m_builder.fields.m_task._4_4_ =
       SStack_158.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_MapLoader__CreateNavMeshSurfaceAsync_d__40_
            (__this_01,(Map_MapLoader__CreateNavMeshSurfaceAsync_d__40_o *)&stack0xfffffffffffffe58,
             (MethodInfo_24B7D70 *)&stack0xfffffffffffffe50);
  __this_02.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_ = uVar4;
  __this_02.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_ = uVar3;
  __this_02.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_2_ =
       (uint16_t)SStack_158.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_;
  __this_02.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._2_1_ =
       SUB41(SStack_158.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_,2);
  __this_02.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._3_1_ =
       SUB41(SStack_158.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_,3);
  __this_02.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_ =
       SStack_158.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_;
  __this_02.fields.m_builder.fields.m_task._0_4_ =
       SStack_158.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_;
  __this_02.fields.m_builder.fields.m_task._4_4_ =
       SStack_158.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_;
  pSVar2 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task
                     (__this_02,(MethodInfo *)&stack0xfffffffffffffe58);
  return (UnityEngine_AsyncOperation_o *)pSVar2;
}


// Map.MapLoader$$CreateNavMeshSurfaceAsync
// il2cpp: System_Threading_Tasks_Task_o* Map_MapLoader__CreateNavMeshSurfaceAsync (Map_MapLoader_o* __this, int32_t agentID, System_Collections_Generic_List_NavMeshBuildSource__o* sources, UnityEngine_Bounds_o bounds, const MethodInfo* method);
// 0x40a83d0

System_Threading_Tasks_Task_o *
Map_MapLoader__CreateNavMeshSurfaceAsync
          (Map_MapLoader_o *__this,int32_t agentID,
          System_Collections_Generic_List_NavMeshBuildSource__o *sources,UnityEngine_Bounds_o bounds,
          MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_00;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_01;
  System_Threading_Tasks_Task_o *pSVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Il2CppClass *pIStack_80;
  Il2CppType *local_78;
  MethodInfo_24B7D70_RGCTXs *pMStack_70;
  _union_214927 local_68;
  _union_14 _Stack_60;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o local_50;
  uint16_t local_38;
  uint8_t uStack_36;
  uint8_t uStack_35;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  System_Threading_Tasks_Task_TResult__o *local_28;
  
  if (g_data_057ac4a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_MapLoader_CreateNavMeshSurfaceAsync_d__40);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
    g_data_057ac4a7 = '\x01';
  }
  local_68.genericMethod = (void *)0x0;
  _Stack_60.genericMethod = (void *)0x0;
  local_78 = (Il2CppType *)0x0;
  pMStack_70 = (MethodInfo_24B7D70_RGCTXs *)0x0;
  pIStack_80 = (Il2CppClass *)0x0;
  uVar3 = 0;
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create(&local_50,(MethodInfo *)0x0);
  local_28 = local_50.fields.m_builder.fields.m_task;
  local_38 = (uint16_t)local_50.fields.m_builder.fields.m_coreState.fields.m_stateMachine;
  uStack_36 = local_50.fields.m_builder.fields.m_coreState.fields.m_stateMachine._2_1_;
  uStack_35 = local_50.fields.m_builder.fields.m_coreState.fields.m_stateMachine._3_1_;
  uStack_34 = local_50.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_;
  uStack_30 = local_50.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._0_4_;
  uStack_2c = local_50.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_4_;
  il2cpp_runtime_helper_022b4080((MethodInfo *)&stack0xffffffffffffff60,0);
  pIStack_80 = (Il2CppClass *)sources;
  il2cpp_runtime_helper_022b4080(&pIStack_80,sources);
  local_68 = (_union_214927)bounds.fields.m_Extents.fields._4_8_;
  local_78 = (Il2CppType *)bounds.fields.m_Center.fields._0_8_;
  pMStack_70 = (MethodInfo_24B7D70_RGCTXs *)bounds.fields._8_8_;
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
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_MapLoader__CreateNavMeshSurfaceAsync_d__40_
            (__this_00,(Map_MapLoader__CreateNavMeshSurfaceAsync_d__40_o *)&stack0xffffffffffffff60,
             (MethodInfo_24B7D70 *)&stack0xffffffffffffff58);
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
// 0x40a84e0

System_Threading_Tasks_Task_o * Map_MapLoader__UpdateNavMesh(MethodInfo *method)

{
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o __this_00;
  System_Threading_Tasks_Task_o *pSVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o local_40;
  _union_214936 local_28;
  _union_14 _Stack_20;
  System_Threading_Tasks_Task_TResult__o *local_18;
  
  if (g_data_057ac4a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_MapLoader_UpdateNavMesh_d__41);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
    g_data_057ac4a8 = '\x01';
  }
  uVar3 = 0;
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create(&local_40,(MethodInfo *)0x0);
  local_18 = local_40.fields.m_builder.fields.m_task;
  local_28._0_4_ = local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine._0_4_;
  local_28._4_4_ = local_40.fields.m_builder.fields.m_coreState.fields.m_stateMachine._4_4_;
  _Stack_20._0_4_ = (uint32_t)local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction;
  _Stack_20._4_2_ = local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._4_2_;
  _Stack_20._6_2_ = local_40.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction._6_2_;
  il2cpp_runtime_helper_022b4080((MethodInfo *)&stack0xffffffffffffffa0,0);
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
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_MapLoader__UpdateNavMesh_d__41_
            (__this,(Map_MapLoader__UpdateNavMesh_d__41_o *)&stack0xffffffffffffffa0,
             (MethodInfo_24B8040 *)&stack0xffffffffffffff98);
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
// 0x40a85a0

System_Threading_Tasks_Task_o * Map_MapLoader__UpdateAllNavMeshes(Map_MapLoader_o *__this,MethodInfo *method)

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
  
  if (g_data_057ac4a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_MapLoader_UpdateAllNavMeshes_d__42);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
    g_data_057ac4a9 = '\x01';
  }
  local_58 = (System_Runtime_CompilerServices_AsyncTaskMethodBuilder_c *)0x0;
  pIStack_50 = (Il2CppClass *)0x0;
  uVar3 = 0;
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
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
  il2cpp_runtime_helper_022b4080((MethodInfo *)&stack0xffffffffffffff90,0);
  local_58 = (System_Runtime_CompilerServices_AsyncTaskMethodBuilder_c *)__this;
  il2cpp_runtime_helper_022b4080(&local_58,__this);
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
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_MapLoader__UpdateAllNavMeshes_d__42_
            (__this_00,(Map_MapLoader__UpdateAllNavMeshes_d__42_o *)&stack0xffffffffffffff90,
             (MethodInfo_24B7F50 *)&stack0xffffffffffffff88);
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
// 0x40a8680

System_Threading_Tasks_Task_o * Map_MapLoader__GenerateNavMesh(Map_MapLoader_o *__this,MethodInfo *method)

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
  
  if (g_data_057ac4aa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_MapLoader_GenerateNavMesh_d__43);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AsyncTaskMethodBuilder);
    g_data_057ac4aa = '\x01';
  }
  local_58 = (System_Runtime_CompilerServices_AsyncTaskMethodBuilder_c *)0x0;
  pIStack_50 = (Il2CppClass *)0x0;
  uVar3 = 0;
  if (*(int *)(TypeInfo_AsyncTaskMethodBuilder + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
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
  il2cpp_runtime_helper_022b4080((MethodInfo *)&stack0xffffffffffffff90,0);
  local_58 = (System_Runtime_CompilerServices_AsyncTaskMethodBuilder_c *)__this;
  il2cpp_runtime_helper_022b4080(&local_58,__this);
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
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_MapLoader__GenerateNavMesh_d__43_
            (__this_00,(Map_MapLoader__GenerateNavMesh_d__43_o *)&stack0xffffffffffffff90,
             (MethodInfo_24B7E60 *)&stack0xffffffffffffff88);
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
// 0x40a8760

void Map_MapLoader__Batch(Map_MapLoader_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  Il2CppClass *pIVar4;
  void *pvVar5;
  UnityEngine_Component_o *__this_00;
  System_Object_array *pSVar6;
  long lVar7;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_09;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_10;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_11;
  bool_conflict bVar8;
  int32_t iVar9;
  System_Collections_Generic_Dictionary_object__object__o *pSVar10;
  System_Collections_Generic_Dictionary_object__object__o *__this_12;
  System_Object_array *__this_13;
  System_Collections_Generic_Dictionary_object__int__o *__this_14;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_Transform_o *pUVar14;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar15;
  Il2CppObject *pIVar16;
  System_String_array *values;
  System_String_o *pSVar17;
  UnityEngine_Object_o *pUVar18;
  UnityEngine_Material_array *pUVar19;
  UnityEngine_Object_o *pUVar20;
  System_String_o *pSVar21;
  UnityEngine_Material_o *__this_15;
  System_String_o *pSVar22;
  UnityEngine_Mesh_o *__this_16;
  System_Collections_Generic_List_object__o *pSVar23;
  long *plVar24;
  MethodInfo *method_00;
  undefined1 auVar25 [12];
  UnityEngine_Vector3_o UVar26;
  uint uVar27;
  int iVar28;
  System_Object_array *in_stack_fffffffffffffef8;
  System_Collections_Generic_Dictionary_object__object__o *local_100;
  float local_f8;
  float fStack_f4;
  _union_233249 local_d0;
  undefined8 uStack_c8;
  UnityEngine_GameObject_o *local_c0;
  _union_233249 local_b8;
  undefined8 uStack_b0;
  UnityEngine_GameObject_o *local_a8;
  _union_233249 local_98;
  undefined8 uStack_90;
  UnityEngine_GameObject_o *local_88;
  _union_233249 local_78;
  undefined8 uStack_70;
  UnityEngine_GameObject_o *local_68;
  _union_233249 local_58;
  undefined8 uStack_50;
  UnityEngine_GameObject_o *local_48;
  UnityEngine_GameObject_o *local_40;
  UnityEngine_GameObject_o *local_38;
  
  if (g_data_057ac4ab == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_GameObject_UnityEngine_Transfor);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Map);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Lis);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_List_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_GameObject_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectShader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&" with missing mesh");
    il2cpp_runtime_helper_023445d0(&"disabled");
    il2cpp_runtime_helper_023445d0(&"-");
    il2cpp_runtime_helper_023445d0(&"Combined Meshes");
    il2cpp_runtime_helper_023445d0(&"Failed to load static object with no MeshFilter or SharedMesh: ");
    il2cpp_runtime_helper_023445d0(&" (Batched) ");
    il2cpp_runtime_helper_023445d0(&"Map load error: object ");
    il2cpp_runtime_helper_023445d0(&"Batched Scene");
    il2cpp_runtime_helper_023445d0(&"Original Objects");
    g_data_057ac4ab = '\x01';
  }
  local_78.genericMethod = (void *)0x0;
  uStack_70 = 0;
  local_68 = (UnityEngine_GameObject_o *)0x0;
  uVar27 = 0;
  iVar28 = 0;
  local_98.genericMethod = (void *)0x0;
  uStack_90 = 0;
  local_88 = (UnityEngine_GameObject_o *)0x0;
  local_b8.genericMethod = (void *)0x0;
  uStack_b0 = 0;
  local_a8 = (UnityEngine_GameObject_o *)0x0;
  local_58.genericMethod = (void *)0x0;
  uStack_50 = 0;
  local_48 = (UnityEngine_GameObject_o *)0x0;
  pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_GameObject);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar10,MethodInfo_Dictionary_2_System_String_UnityEngine_GameObject);
  __this_12 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_List_GameObject);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_12,MethodInfo_Dictionary_2_System_String_List_1_UnityEngine_GameObject);
  __this_13 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_GameObject_Transform);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_13,MethodInfo_Dictionary_2_UnityEngine_GameObject_UnityEngine_Transfor);
  __this_14 = (System_Collections_Generic_Dictionary_object__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor(__this_14,MethodInfo_Dictionary_2_System_String_System_Int32);
  pUVar11 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar11,"Batched Scene",(MethodInfo *)0x0);
  pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar12,"Original Objects",(MethodInfo *)0x0);
  if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_040a99c1;
  local_38 = pUVar12;
  pUVar13 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
  if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_040a99c1;
  pUVar14 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
  if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_040a99c1;
  UnityEngine_Transform__SetParent(pUVar13,pUVar14,(MethodInfo *)0x0);
  pUVar12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar12,"Combined Meshes",(MethodInfo *)0x0);
  if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_040a99c1;
  local_40 = pUVar12;
  pUVar13 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
  pUVar14 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
  if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_040a99c1;
  UnityEngine_Transform__SetParent(pUVar13,pUVar14,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
      (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_040a99c1;
  pSVar15 = System_Collections_Generic_Dictionary_int__object___get_Keys
                      ((System_Collections_Generic_Dictionary_int__object__o *)
                       **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Map);
  local_100 = pSVar10;
  if (pSVar15 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_040a99c1;
  System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&local_d0,
             pSVar15,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  local_68 = local_c0;
  local_78 = local_d0;
  uStack_70 = uStack_c8;
  in_stack_fffffffffffffef8 = __this_13;
  do {
    do {
      do {
        do {
          __this_01.fields._dictionary._4_4_ = iVar28;
          __this_01.fields._dictionary._0_4_ = uVar27;
          __this_01.fields._8_8_ = __this_12;
          __this_01.fields._currentKey = &in_stack_fffffffffffffef8->obj;
          bVar8 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext
                            (__this_01,(MethodInfo_3244230 *)&local_78);
          if ((char)bVar8 == '\0') {
            __this_02.fields._dictionary._4_4_ = iVar28;
            __this_02.fields._dictionary._0_4_ = uVar27;
            __this_02.fields._8_8_ = __this_12;
            __this_02.fields._currentKey = &in_stack_fffffffffffffef8->obj;
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
                      (__this_02,(MethodInfo_3244220 *)&local_78);
            goto label_040a9660;
          }
          iVar9 = (int32_t)local_68;
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if ((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8)
              == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_040a9996;
          pIVar16 = System_Collections_Generic_Dictionary_int__object___get_Item
                              ((System_Collections_Generic_Dictionary_int__object__o *)
                               **(undefined8 **)(TypeInfo_MapLoader + 0xb8),iVar9,MethodInfo_MapObject_get_Item);
          if (pIVar16 == (Il2CppObject *)0x0) goto label_040a999b;
          pIVar4 = pIVar16[2].klass;
          if (pIVar4 == (Il2CppClass *)0x0) goto label_040a99a0;
        } while ((0 < *(int *)((long)&(pIVar4->_1).byval_arg.data + 4)) ||
                (*(char *)((long)&(pIVar4->_1).byval_arg.bits + 1) == '\0'));
        pvVar5 = (pIVar4->_1).image;
        if (*(byte *)((long)pvVar5 + 0x130) < *(byte *)(TypeInfo_MapScriptSceneObject + 0x130)) goto label_040a99af;
        if (*(long *)(*(long *)((long)pvVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MapScriptSceneObject + 0x130) * 8) !=
            TypeInfo_MapScriptSceneObject) goto label_040a99af;
        pIVar4 = (pIVar4->_1).klass;
        if (pIVar4 == (Il2CppClass *)0x0) goto label_040a99c6;
        pSVar17 = (System_String_o *)(pIVar4->_1).name;
        if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar8 = Map_MapObjectShader__IsLegacyShader(pSVar17,(MethodInfo *)0x0);
      } while ((char)bVar8 != '\0');
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = System_String__op_Equality
                        (pSVar17,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x20),
                         (MethodInfo *)0x0);
    } while ((char)bVar8 != '\0');
    if (pIVar16[1].monitor == (UnityEngine_GameObject_o *)0x0) goto label_040a9a16;
    pUVar13 = UnityEngine_GameObject__get_transform(pIVar16[1].monitor,(MethodInfo *)0x0);
    if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_040a9a1b;
    UVar26 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
    local_f8 = UVar26.fields.x;
    uVar27 = (uint)(local_f8 / 1000.0);
    iVar9 = (int32_t)&stack0xfffffffffffffee8;
    pSVar17 = System_Int32__ToString(iVar9,(MethodInfo *)0x0);
    if (values == (System_String_array *)0x0) goto label_040a9a20;
    if ((int)values->max_length == 0) goto label_040a9a25;
    values->m_Items[0] = pSVar17;
    il2cpp_runtime_helper_022b4080(values->m_Items,pSVar17);
    if ((uint)values->max_length < 2) goto label_040a99e4;
    values->m_Items[1] = "-";
    il2cpp_runtime_helper_022b4080(values->m_Items + 1);
    fStack_f4 = UVar26.fields.y;
    uVar27 = (uint)(fStack_f4 / 1000.0);
    pSVar17 = System_Int32__ToString(iVar9,(MethodInfo *)0x0);
    if ((uint)values->max_length < 3) goto label_040a99e9;
    values->m_Items[2] = pSVar17;
    il2cpp_runtime_helper_022b4080(values->m_Items + 2,pSVar17);
    if ((uint)values->max_length < 4) goto label_040a99df;
    values->m_Items[3] = "-";
    il2cpp_runtime_helper_022b4080(values->m_Items + 3);
    uVar27 = (uint)(UVar26.fields.z / 1000.0);
    pSVar17 = System_Int32__ToString(iVar9,(MethodInfo *)0x0);
    __this_13 = in_stack_fffffffffffffef8;
    if ((uint)values->max_length < 5) goto label_040a9a6b;
    values->m_Items[4] = pSVar17;
    il2cpp_runtime_helper_022b4080(values->m_Items + 4);
    pSVar17 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
    if (pIVar16[1].monitor == (UnityEngine_GameObject_o *)0x0) goto label_040a9a2a;
    __this_13 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                          (pIVar16[1].monitor,MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
    uVar27 = 0;
    if (__this_13 == (System_Object_array *)0x0) goto label_040a9a2f;
    iVar2 = (int)__this_13->max_length;
    if (0 < iVar2) {
      if (iVar2 == 0) goto label_040a9991;
      do {
        __this_00 = (UnityEngine_Component_o *)__this_13->m_Items[(int)uVar27];
        if (__this_00 == (UnityEngine_Component_o *)0x0) goto label_040a998c;
        pUVar18 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(__this_00,MethodInfo_Renderer_GetComponent_Renderer);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar8 = UnityEngine_Object__op_Equality(pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          if (pUVar18 == (UnityEngine_Object_o *)0x0) goto label_040a99aa;
          pUVar19 = UnityEngine_Renderer__get_sharedMaterials
                              ((UnityEngine_Renderer_o *)pUVar18,(MethodInfo *)0x0);
          if (pUVar19 == (UnityEngine_Material_array *)0x0) goto label_040a99a5;
          if ((int)pUVar19->max_length < 2) {
            pUVar20 = (UnityEngine_Object_o *)
                      UnityEngine_MeshFilter__get_sharedMesh
                                ((UnityEngine_MeshFilter_o *)__this_00,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar8 = UnityEngine_Object__op_Equality(pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar8 == '\0') {
              pUVar20 = (UnityEngine_Object_o *)
                        UnityEngine_Renderer__get_sharedMaterial
                                  ((UnityEngine_Renderer_o *)pUVar18,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar8 = UnityEngine_Object__op_Inequality(pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if ((char)bVar8 != '\0') {
                __this_15 = UnityEngine_Renderer__get_sharedMaterial
                                      ((UnityEngine_Renderer_o *)pUVar18,(MethodInfo *)0x0);
                if (__this_15 == (UnityEngine_Material_o *)0x0) goto label_040a99fd;
                bVar8 = UnityEngine_Material__get_enableInstancing(__this_15,(MethodInfo *)0x0);
                if ((char)bVar8 != '\0') goto label_040a8fe0;
              }
              pUVar20 = (UnityEngine_Object_o *)
                        UnityEngine_MeshFilter__get_sharedMesh
                                  ((UnityEngine_MeshFilter_o *)__this_00,(MethodInfo *)0x0);
              if (pUVar20 == (UnityEngine_Object_o *)0x0) goto label_040a9a48;
              iVar28 = UnityEngine_Object__GetInstanceID(pUVar20,(MethodInfo *)0x0);
              pSVar21 = System_Int32__ToString((int32_t)&stack0xfffffffffffffeec,(MethodInfo *)0x0);
              pSVar21 = System_String__Concat_3ae5ba0(pSVar21,pSVar17,(MethodInfo *)0x0);
              bVar8 = UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)pUVar18,(MethodInfo *)0x0);
              if ((char)bVar8 == '\0') {
                pSVar21 = System_String__Concat_3ae5ba0(pSVar21,"disabled",(MethodInfo *)0x0);
              }
              else {
                pUVar18 = (UnityEngine_Object_o *)
                          UnityEngine_Renderer__get_sharedMaterial
                                    ((UnityEngine_Renderer_o *)pUVar18,(MethodInfo *)0x0);
                if (pUVar18 == (UnityEngine_Object_o *)0x0) goto label_040a9a07;
                iVar28 = UnityEngine_Object__GetInstanceID(pUVar18,(MethodInfo *)0x0);
                pSVar22 = System_Int32__ToString((int32_t)&stack0xfffffffffffffeec,(MethodInfo *)0x0);
                pSVar21 = System_String__Concat_3ae5ba0(pSVar21,pSVar22,(MethodInfo *)0x0);
              }
              if (__this_14 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) goto label_040a9a57;
              bVar8 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                                (__this_14,(Il2CppObject *)pSVar21,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar8 == '\0') {
                System_Collections_Generic_Dictionary_object__int___Add
                          (__this_14,(Il2CppObject *)pSVar21,0,MethodInfo_Void_Add);
              }
              __this_16 = UnityEngine_MeshFilter__get_sharedMesh
                                    ((UnityEngine_MeshFilter_o *)__this_00,(MethodInfo *)0x0);
              if (__this_16 == (UnityEngine_Mesh_o *)0x0) goto label_040a9a0c;
              iVar9 = UnityEngine_Mesh__get_vertexCount(__this_16,(MethodInfo *)0x0);
              iVar28 = (int)(65000 / (long)iVar9);
              if (iVar28 < 1) {
                iVar28 = 1;
              }
              iVar9 = System_Collections_Generic_Dictionary_object__int___get_Item
                                (__this_14,(Il2CppObject *)pSVar21,MethodInfo_Int32_get_Item);
              System_Collections_Generic_Dictionary_object__int___set_Item
                        (__this_14,(Il2CppObject *)pSVar21,iVar9 + 1,MethodInfo_Void_set_Item);
              iVar9 = System_Collections_Generic_Dictionary_object__int___get_Item
                                (__this_14,(Il2CppObject *)pSVar21,MethodInfo_Int32_get_Item);
              iVar28 = iVar9 / iVar28;
              pSVar22 = System_Int32__ToString((int32_t)&stack0xfffffffffffffeec,(MethodInfo *)0x0);
              pSVar21 = System_String__Concat_3ae5ba0(pSVar21,pSVar22,(MethodInfo *)0x0);
              if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_040a9a5c;
              bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                (pSVar10,(Il2CppObject *)pSVar21,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar8 == '\0') {
                pUVar18 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                UnityEngine_GameObject___ctor_4dfc3c0((UnityEngine_GameObject_o *)pUVar18,(MethodInfo *)0x0);
                if (pIVar16[2].klass == (Il2CppClass *)0x0) goto label_040a9a4d;
                pSVar22 = System_String__Concat_3af7150
                                    (((pIVar16[2].klass)->_1).this_arg.data," (Batched) ",pSVar21,
                                     (MethodInfo *)0x0);
                if (pUVar18 == (UnityEngine_Object_o *)0x0) goto label_040a99ee;
                UnityEngine_Object__set_name(pUVar18,pSVar22,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                UnityEngine_GameObject__set_layer
                          ((UnityEngine_GameObject_o *)pUVar18,
                           *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x38),(MethodInfo *)0x0);
                pUVar13 = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)pUVar18,(MethodInfo *)0x0);
                pUVar14 = UnityEngine_GameObject__get_transform(local_40,(MethodInfo *)0x0);
                if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_040a9a66;
                UnityEngine_Transform__SetParent(pUVar13,pUVar14,(MethodInfo *)0x0);
                System_Collections_Generic_Dictionary_object__object___Add
                          (pSVar10,(Il2CppObject *)pSVar21,(Il2CppObject *)pUVar18,MethodInfo_Void_Add);
                pSVar23 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
                System_Collections_Generic_List_object____ctor(pSVar23,MethodInfo_List_1_UnityEngine_GameObject);
                if (__this_12 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_040a99f3;
                System_Collections_Generic_Dictionary_object__object___Add
                          (__this_12,(Il2CppObject *)pSVar21,(Il2CppObject *)pSVar23,MethodInfo_Void_Add);
              }
              else if (__this_12 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_040a9a11;
              pSVar23 = (System_Collections_Generic_List_object__o *)
                        System_Collections_Generic_Dictionary_object__object___get_Item
                                  (__this_12,(Il2CppObject *)pSVar21,MethodInfo_List_1_UnityEngine_GameObject_get_Item);
              pUVar11 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
              lVar7 = MethodInfo_Void_Add;
              if (pSVar23 == (System_Collections_Generic_List_object__o *)0x0) goto label_040a9a61;
              piVar1 = &(pSVar23->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar6 = (pSVar23->fields)._items;
              if (pSVar6 == (System_Object_array *)0x0) goto label_040a9a3e;
              uVar3 = (pSVar23->fields)._size;
              if (uVar3 < (uint)pSVar6->max_length) {
                (pSVar23->fields)._size = uVar3 + 1;
                pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)pUVar11;
                il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar3);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar23,(Il2CppObject *)pUVar11,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              }
              pUVar11 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
              pUVar13 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
              if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_040a99f8;
              pUVar13 = UnityEngine_Transform__get_parent(pUVar13,(MethodInfo *)0x0);
              if (in_stack_fffffffffffffef8 == (System_Object_array *)0x0) goto label_040a9a43;
              System_Collections_Generic_Dictionary_object__object___Add
                        ((System_Collections_Generic_Dictionary_object__object__o *)in_stack_fffffffffffffef8,
                         (Il2CppObject *)pUVar11,(Il2CppObject *)pUVar13,MethodInfo_Void_Add);
              pUVar13 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
              pUVar11 = (UnityEngine_GameObject_o *)
                        System_Collections_Generic_Dictionary_object__object___get_Item
                                  (pSVar10,(Il2CppObject *)pSVar21,MethodInfo_GameObject_get_Item);
              if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_040a9a02;
              pUVar14 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
              if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_040a9a52;
              UnityEngine_Transform__SetParent(pUVar13,pUVar14,(MethodInfo *)0x0);
            }
            else {
              if (pIVar16[2].klass == (Il2CppClass *)0x0) goto label_040a99cb;
              pSVar21 = System_String__Concat_3af7150
                                  ("Map load error: object ",((pIVar16[2].klass)->_1).this_arg.data," with missing mesh",
                                   (MethodInfo *)0x0);
              if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              ApplicationManagers_DebugConsole__Log(pSVar21,1,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              if (pIVar16[2].klass == (Il2CppClass *)0x0) goto label_040a99da;
              pSVar23 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x78)
              ;
              pSVar21 = System_String__Concat_3ae5ba0
                                  ("Failed to load static object with no MeshFilter or SharedMesh: ",((pIVar16[2].klass)->_1).this_arg.data,(MethodInfo *)0x0);
              lVar7 = MethodInfo_Void_Add;
              if (pSVar23 == (System_Collections_Generic_List_object__o *)0x0) goto label_040a99d0;
              piVar1 = &(pSVar23->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar6 = (pSVar23->fields)._items;
              if (pSVar6 == (System_Object_array *)0x0) goto label_040a99d5;
              uVar3 = (pSVar23->fields)._size;
              if (uVar3 < (uint)pSVar6->max_length) {
                (pSVar23->fields)._size = uVar3 + 1;
                pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)pSVar21;
                il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar3);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar23,(Il2CppObject *)pSVar21,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
label_040a8fe0:
        uVar27 = uVar27 + 1;
        uVar3 = (uint)__this_13->max_length;
        if ((int)uVar3 <= (int)uVar27) break;
        if (uVar3 <= uVar27) goto label_040a9991;
      } while( true );
    }
    __this_13 = in_stack_fffffffffffffef8;
    in_stack_fffffffffffffef8 = __this_13;
    if (pIVar16[1].monitor == (UnityEngine_GameObject_o *)0x0) goto label_040a9a34;
    pUVar13 = UnityEngine_GameObject__get_transform(pIVar16[1].monitor,(MethodInfo *)0x0);
    pUVar14 = UnityEngine_GameObject__get_transform(local_38,(MethodInfo *)0x0);
    if (pUVar13 == (UnityEngine_Transform_o *)0x0) break;
    UnityEngine_Transform__SetParent(pUVar13,pUVar14,(MethodInfo *)0x0);
  } while( true );
label_040a9a39:
  il2cpp_runtime_helper_022b2c90();
label_040a9a3e:
  il2cpp_runtime_helper_022b2c90();
label_040a9a43:
  il2cpp_runtime_helper_022b2c90();
label_040a9a48:
  il2cpp_runtime_helper_022b2c90();
label_040a9a4d:
  il2cpp_runtime_helper_022b2c90();
label_040a9a52:
  il2cpp_runtime_helper_022b2c90();
label_040a9a57:
  il2cpp_runtime_helper_022b2c90();
label_040a9a5c:
  il2cpp_runtime_helper_022b2c90();
label_040a9a61:
  il2cpp_runtime_helper_022b2c90();
label_040a9a66:
  il2cpp_runtime_helper_022b2c90();
  __this_13 = in_stack_fffffffffffffef8;
label_040a9a6b:
  auVar25 = il2cpp_runtime_helper_022b2ca0();
  if (auVar25._8_4_ != 1) {
label_040aa402:
    __this_11.fields._dictionary._4_4_ = iVar28;
    __this_11.fields._dictionary._0_4_ = uVar27;
    __this_11.fields._8_8_ = __this_12;
    __this_11.fields._currentKey = &__this_13->obj;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
              (__this_11,(MethodInfo_3244220 *)&local_78);
    _Unwind_Resume(auVar25._0_8_);
  }
  plVar24 = (long *)__cxa_begin_catch(auVar25._0_8_);
  lVar7 = *plVar24;
  __cxa_end_catch();
  __this_10.fields._dictionary._4_4_ = iVar28;
  __this_10.fields._dictionary._0_4_ = uVar27;
  __this_10.fields._8_8_ = __this_12;
  __this_10.fields._currentKey = &__this_13->obj;
  in_stack_fffffffffffffef8 = __this_13;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
            (__this_10,(MethodInfo_3244220 *)&local_78);
  if (lVar7 != 0) {
    il2cpp_runtime_helper_022fefe0(lVar7);
    __this_13 = in_stack_fffffffffffffef8;
    goto label_040aa402;
  }
label_040a9660:
  if ((local_100 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (pSVar15 = System_Collections_Generic_Dictionary_object__object___get_Keys(local_100,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni),
     pSVar15 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&local_d0,
               pSVar15,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    local_88 = local_c0;
    local_98 = local_d0;
    uStack_90 = uStack_c8;
    while (__this_03.fields._dictionary._4_4_ = iVar28, __this_03.fields._dictionary._0_4_ = uVar27,
          __this_03.fields._8_8_ = __this_12, __this_03.fields._currentKey = &in_stack_fffffffffffffef8->obj,
          bVar8 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                            (__this_03,(MethodInfo_3251B20 *)&local_98), (char)bVar8 != '\0') {
      pSVar10 = local_100;
      pUVar11 = (UnityEngine_GameObject_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (local_100,(Il2CppObject *)local_88,MethodInfo_GameObject_get_Item);
      Map_MapLoader__CombineMeshes((Map_MapLoader_o *)pSVar10,pUVar11,method_00);
    }
    __this_04.fields._dictionary._4_4_ = iVar28;
    __this_04.fields._dictionary._0_4_ = uVar27;
    __this_04.fields._8_8_ = __this_12;
    __this_04.fields._currentKey = &in_stack_fffffffffffffef8->obj;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_04,(MethodInfo_3251B10 *)&local_98);
    if ((__this_12 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pSVar15 = System_Collections_Generic_Dictionary_object__object___get_Keys(__this_12,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Lis),
       pSVar15 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&local_d0,
                 pSVar15,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      local_a8 = local_c0;
      local_b8 = local_d0;
      uStack_b0 = uStack_c8;
      do {
        __this_05.fields._dictionary._4_4_ = iVar28;
        __this_05.fields._dictionary._0_4_ = uVar27;
        __this_05.fields._8_8_ = __this_12;
        __this_05.fields._currentKey = &in_stack_fffffffffffffef8->obj;
        bVar8 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                          (__this_05,(MethodInfo_3251B20 *)&local_b8);
        if ((char)bVar8 == '\0') {
          __this_09.fields._dictionary._4_4_ = iVar28;
          __this_09.fields._dictionary._0_4_ = uVar27;
          __this_09.fields._8_8_ = __this_12;
          __this_09.fields._currentKey = &in_stack_fffffffffffffef8->obj;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                    (__this_09,(MethodInfo_3251B10 *)&local_b8);
          return;
        }
        pSVar23 = (System_Collections_Generic_List_object__o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_12,(Il2CppObject *)local_a8,MethodInfo_List_1_UnityEngine_GameObject_get_Item);
        if (pSVar23 == (System_Collections_Generic_List_object__o *)0x0) goto label_040a99b4;
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&local_d0,pSVar23,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
        local_48 = local_c0;
        local_58 = local_d0;
        uStack_50 = uStack_c8;
        if (__this_13 == (System_Object_array *)0x0) {
          __this_07.fields._list._4_4_ = iVar28;
          __this_07.fields._list._0_4_ = uVar27;
          __this_07.fields._8_8_ = __this_12;
          __this_07.fields._current = &in_stack_fffffffffffffef8->obj;
          bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_07,(MethodInfo_321A1D0 *)&local_58);
          if ((char)bVar8 != '\0') goto label_040a98a8;
        }
        else {
          while (__this_06.fields._list._4_4_ = iVar28, __this_06.fields._list._0_4_ = uVar27,
                __this_06.fields._8_8_ = __this_12,
                __this_06.fields._current = &in_stack_fffffffffffffef8->obj,
                bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  (__this_06,(MethodInfo_321A1D0 *)&local_58), pUVar11 = local_48,
                (char)bVar8 != '\0') {
            if (local_48 == (UnityEngine_GameObject_o *)0x0) goto label_040a98b5;
            pUVar13 = UnityEngine_GameObject__get_transform(local_48,(MethodInfo *)0x0);
            pUVar14 = (UnityEngine_Transform_o *)
                      System_Collections_Generic_Dictionary_object__object___get_Item
                                ((System_Collections_Generic_Dictionary_object__object__o *)__this_13,
                                 (Il2CppObject *)pUVar11,MethodInfo_Transform_get_Item);
            if (pUVar13 == (UnityEngine_Transform_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_040a998c;
            }
            UnityEngine_Transform__SetParent(pUVar13,pUVar14,(MethodInfo *)0x0);
          }
        }
        __this_13 = in_stack_fffffffffffffef8;
        __this_08.fields._list._4_4_ = iVar28;
        __this_08.fields._list._0_4_ = uVar27;
        __this_08.fields._8_8_ = __this_12;
        __this_08.fields._current = &__this_13->obj;
        System_Collections_Generic_List_Enumerator_object___Dispose(__this_08,(MethodInfo_321A1C0 *)&local_58)
        ;
        in_stack_fffffffffffffef8 = __this_13;
      } while( true );
    }
  }
  goto label_040a99c1;
label_040a98a8:
  if (local_48 == (UnityEngine_GameObject_o *)0x0) {
label_040a98b5:
    il2cpp_runtime_helper_022b2c90();
label_040a998c:
    il2cpp_runtime_helper_022b2c90();
label_040a9991:
    il2cpp_runtime_helper_022b2ca0();
label_040a9996:
    il2cpp_runtime_helper_022b2c90();
label_040a999b:
    il2cpp_runtime_helper_022b2c90();
label_040a99a0:
    il2cpp_runtime_helper_022b2c90();
label_040a99a5:
    il2cpp_runtime_helper_022b2c90();
label_040a99aa:
    il2cpp_runtime_helper_022b2c90();
label_040a99af:
    il2cpp_runtime_helper_022b2fd0();
label_040a99b4:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(__this_13);
label_040a99c1:
    il2cpp_runtime_helper_022b2c90();
label_040a99c6:
    il2cpp_runtime_helper_022b2c90();
label_040a99cb:
    il2cpp_runtime_helper_022b2c90();
label_040a99d0:
    il2cpp_runtime_helper_022b2c90();
label_040a99d5:
    il2cpp_runtime_helper_022b2c90();
label_040a99da:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    UnityEngine_GameObject__get_transform(local_48,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
  }
label_040a99df:
  il2cpp_runtime_helper_022b2ca0();
label_040a99e4:
  il2cpp_runtime_helper_022b2ca0();
label_040a99e9:
  il2cpp_runtime_helper_022b2ca0();
label_040a99ee:
  il2cpp_runtime_helper_022b2c90();
label_040a99f3:
  il2cpp_runtime_helper_022b2c90();
label_040a99f8:
  il2cpp_runtime_helper_022b2c90();
label_040a99fd:
  il2cpp_runtime_helper_022b2c90();
label_040a9a02:
  il2cpp_runtime_helper_022b2c90();
label_040a9a07:
  il2cpp_runtime_helper_022b2c90();
label_040a9a0c:
  il2cpp_runtime_helper_022b2c90();
label_040a9a11:
  il2cpp_runtime_helper_022b2c90();
label_040a9a16:
  il2cpp_runtime_helper_022b2c90();
label_040a9a1b:
  il2cpp_runtime_helper_022b2c90();
label_040a9a20:
  il2cpp_runtime_helper_022b2c90();
label_040a9a25:
  il2cpp_runtime_helper_022b2ca0();
label_040a9a2a:
  il2cpp_runtime_helper_022b2c90();
label_040a9a2f:
  il2cpp_runtime_helper_022b2c90();
label_040a9a34:
  il2cpp_runtime_helper_022b2c90();
  goto label_040a9a39;
}


// Map.MapLoader$$CombineMeshes
// il2cpp: void Map_MapLoader__CombineMeshes (Map_MapLoader_o* __this, UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x40aa4c0

void Map_MapLoader__CombineMeshes(Map_MapLoader_o *__this,UnityEngine_GameObject_o *obj,MethodInfo *method)

{
  int *piVar1;
  int32_t *piVar2;
  int iVar3;
  Il2CppArrayBounds *pIVar4;
  System_Collections_Generic_List_object__c *pSVar5;
  void *pvVar6;
  UnityEngine_CombineInstance_o __this_00;
  UnityEngine_CombineInstance_o __this_01;
  UnityEngine_Matrix4x4_o value;
  char cVar7;
  uint uVar8;
  bool_conflict bVar9;
  System_Object_array *pSVar10;
  UnityEngine_CombineInstance_array *__this_02;
  UnityEngine_CombineInstance_array *pUVar11;
  UnityEngine_CombineInstance_array *pUVar12;
  UnityEngine_CombineInstance_array *pUVar13;
  MethodInfo *method_00;
  UnityEngine_Renderer_o *pUVar14;
  UnityEngine_Mesh_o *__this_03;
  UnityEngine_Renderer_o *__this_04;
  UnityEngine_Material_o *value_00;
  System_Collections_Generic_HashSet_object__o *pSVar15;
  UnityEngine_Transform_o *__this_05;
  System_Collections_Generic_Dictionary_object__object__o *pSVar16;
  System_Collections_Generic_Dictionary_object__object__o *pSVar17;
  System_String_array *pSVar18;
  System_String_o *pSVar19;
  UnityEngine_Object_o *pUVar20;
  System_Collections_Generic_List_object__o *pSVar21;
  undefined8 uVar22;
  System_String_o *pSVar23;
  System_String_o *pSVar24;
  long lVar25;
  UnityEngine_GameObject_o *pUVar26;
  undefined8 *puVar27;
  int32_t index;
  ulong uVar28;
  uint uVar29;
  MethodInfo *method_01;
  UnityEngine_CombineInstance_array *key;
  System_Collections_Generic_Dictionary_object__object__o *pSVar30;
  undefined1 auVar31 [12];
  Il2CppClass *in_stack_fffffffffffffef8;
  void *in_stack_ffffffffffffff00;
  Il2CppArrayBounds *in_stack_ffffffffffffff08;
  il2cpp_array_size_t in_stack_ffffffffffffff10;
  undefined8 in_stack_ffffffffffffff18;
  undefined8 in_stack_ffffffffffffff20;
  undefined8 in_stack_ffffffffffffff28;
  undefined8 in_stack_ffffffffffffff30;
  undefined7 in_stack_ffffffffffffff38;
  Il2CppClass *in_stack_ffffffffffffff48;
  void *in_stack_ffffffffffffff50;
  Il2CppArrayBounds *in_stack_ffffffffffffff58;
  undefined8 in_stack_ffffffffffffff88;
  Il2CppClass *in_stack_ffffffffffffff90;
  void *in_stack_ffffffffffffff98;
  Il2CppArrayBounds *local_60;
  il2cpp_array_size_t iStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  key = (UnityEngine_CombineInstance_array *)obj;
  if (g_data_057ac4ac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CombineInstance);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_AddComponent_MeshFilter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshRenderer_AddComponent_MeshRenderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_MeshFilter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MeshFilter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Mesh);
    __this = (Map_MapLoader_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac4ac = '\x01';
  }
  if ((obj == (UnityEngine_GameObject_o *)0x0) ||
     (key = MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter, pUVar26 = obj,
     pSVar10 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         (obj,(MethodInfo_255AB00 *)MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter), __this = (Map_MapLoader_o *)obj,
     pSVar10 == (System_Object_array *)0x0)) {
label_040aaa33:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (pSVar10->max_length == 0) {
      return;
    }
    __this_02 = (UnityEngine_CombineInstance_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MeshFilter);
    key = MethodInfo_List_1_UnityEngine_MeshFilter;
    __this = (Map_MapLoader_o *)__this_02;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_02,(MethodInfo_362B8B0 *)MethodInfo_List_1_UnityEngine_MeshFilter);
    uVar8 = (uint)pSVar10->max_length;
    pUVar11 = key;
    if ((int)uVar8 < 1) {
label_040aa735:
      key = pUVar11;
      if (__this_02 != (UnityEngine_CombineInstance_array *)0x0) {
        if (*(int *)&__this_02->max_length == 0) {
          return;
        }
        pUVar11 = (UnityEngine_CombineInstance_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_CombineInstance);
        key = (UnityEngine_CombineInstance_array *)0x0;
        __this = (Map_MapLoader_o *)__this_02;
        pUVar12 = (UnityEngine_CombineInstance_array *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_02,0,MethodInfo_MeshFilter_get_Item);
        if ((pUVar12 != (UnityEngine_CombineInstance_array *)0x0) &&
           (key = MethodInfo_Renderer_GetComponent_Renderer,
           pUVar13 = (UnityEngine_CombineInstance_array *)
                     UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar12,(MethodInfo_24E7B40 *)MethodInfo_Renderer_GetComponent_Renderer),
           __this = (Map_MapLoader_o *)pUVar12, pUVar13 != (UnityEngine_CombineInstance_array *)0x0)) {
          key = (UnityEngine_CombineInstance_array *)0x0;
          bVar9 = UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)pUVar13,(MethodInfo *)0x0);
          cVar7 = (char)bVar9;
          if (0 < *(int *)&__this_02->max_length) {
            __this = (Map_MapLoader_o *)pUVar13;
            if (pUVar11 == (UnityEngine_CombineInstance_array *)0x0) goto label_040aaa33;
            method_01 = (MethodInfo *)pUVar11->m_Items;
            uVar28 = 0;
            do {
              index = (int32_t)uVar28;
              key = (UnityEngine_CombineInstance_array *)(uVar28 & 0xffffffff);
              __this = (Map_MapLoader_o *)__this_02;
              pUVar12 = (UnityEngine_CombineInstance_array *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_02,index,MethodInfo_MeshFilter_get_Item);
              if (pUVar12 == (UnityEngine_CombineInstance_array *)0x0) goto label_040aaa33;
              key = (UnityEngine_CombineInstance_array *)0x0;
              method_00 = (MethodInfo *)
                          UnityEngine_MeshFilter__get_sharedMesh
                                    ((UnityEngine_MeshFilter_o *)pUVar12,(MethodInfo *)0x0);
              __this = (Map_MapLoader_o *)pUVar12;
              if ((uint)pUVar11->max_length <= uVar28) goto label_040aaa38;
              __this_00.fields.m_Transform.fields._0_8_ = in_stack_ffffffffffffff00;
              __this_00.fields._0_8_ = in_stack_fffffffffffffef8;
              __this_00.fields.m_Transform.fields._8_8_ = in_stack_ffffffffffffff08;
              __this_00.fields.m_Transform.fields.m01 = (float)(int)in_stack_ffffffffffffff10;
              __this_00.fields.m_Transform.fields.m11 = (float)(int)(in_stack_ffffffffffffff10 >> 0x20);
              __this_00.fields.m_Transform.fields.m21 = (float)(int32_t)in_stack_ffffffffffffff18;
              __this_00.fields.m_Transform.fields.m31 = (float)SUB84(in_stack_ffffffffffffff18,4);
              __this_00.fields.m_Transform.fields.m02 = (float)in_stack_ffffffffffffff20;
              __this_00.fields.m_Transform.fields.m12 = SUB84(in_stack_ffffffffffffff20,4);
              __this_00.fields.m_Transform.fields.m22 = (float)in_stack_ffffffffffffff28;
              __this_00.fields.m_Transform.fields.m32 = SUB84(in_stack_ffffffffffffff28,4);
              __this_00.fields.m_Transform.fields.m03 = (float)in_stack_ffffffffffffff30;
              __this_00.fields.m_Transform.fields.m13 = SUB84(in_stack_ffffffffffffff30,4);
              __this_00.fields.m_Transform.fields._56_7_ = in_stack_ffffffffffffff38;
              __this_00.fields.m_Transform.fields.m33._3_1_ = cVar7;
              __this_00.fields.m_LightmapScaleOffset.fields._0_8_ = pUVar26;
              __this_00.fields.m_LightmapScaleOffset.fields._8_8_ = in_stack_ffffffffffffff48;
              __this_00.fields.m_RealtimeLightmapScaleOffset.fields._0_8_ = in_stack_ffffffffffffff50;
              __this_00.fields.m_RealtimeLightmapScaleOffset.fields._8_8_ = in_stack_ffffffffffffff58;
              UnityEngine_CombineInstance__set_mesh(__this_00,(UnityEngine_Mesh_o *)method_01,method_00);
              key = (UnityEngine_CombineInstance_array *)(uVar28 & 0xffffffff);
              __this = (Map_MapLoader_o *)__this_02;
              pUVar12 = (UnityEngine_CombineInstance_array *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_02,index,MethodInfo_MeshFilter_get_Item);
              if (pUVar12 == (UnityEngine_CombineInstance_array *)0x0) goto label_040aaa33;
              key = (UnityEngine_CombineInstance_array *)0x0;
              pUVar13 = (UnityEngine_CombineInstance_array *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0);
              __this = (Map_MapLoader_o *)pUVar12;
              if (pUVar13 == (UnityEngine_CombineInstance_array *)0x0) goto label_040aaa33;
              __this = (Map_MapLoader_o *)&stack0xffffffffffffff90;
              in_stack_fffffffffffffef8 = in_stack_ffffffffffffff90;
              in_stack_ffffffffffffff00 = in_stack_ffffffffffffff98;
              UnityEngine_Transform__get_localToWorldMatrix
                        ((UnityEngine_Matrix4x4_o *)&stack0xffffffffffffff90,
                         (UnityEngine_Transform_o *)pUVar13,(MethodInfo *)0x0);
              key = pUVar13;
              if ((uint)pUVar11->max_length <= uVar28) goto label_040aaa38;
              __this_01.fields.m_Transform.fields._0_8_ = in_stack_ffffffffffffff00;
              __this_01.fields._0_8_ = in_stack_fffffffffffffef8;
              __this_01.fields.m_Transform.fields._8_8_ = local_60;
              __this_01.fields.m_Transform.fields._16_8_ = iStack_58;
              __this_01.fields.m_Transform.fields._24_8_ = local_50;
              __this_01.fields.m_Transform.fields._32_8_ = uStack_48;
              __this_01.fields.m_Transform.fields._40_8_ = local_40;
              __this_01.fields.m_Transform.fields._48_8_ = uStack_38;
              __this_01.fields.m_Transform.fields._56_7_ = in_stack_ffffffffffffff38;
              __this_01.fields.m_Transform.fields.m33._3_1_ = cVar7;
              __this_01.fields.m_LightmapScaleOffset.fields._0_8_ = pUVar26;
              __this_01.fields.m_LightmapScaleOffset.fields._8_8_ = in_stack_fffffffffffffef8;
              __this_01.fields.m_RealtimeLightmapScaleOffset.fields._0_8_ = in_stack_ffffffffffffff00;
              __this_01.fields.m_RealtimeLightmapScaleOffset.fields._8_8_ = local_60;
              value.fields._8_8_ = local_50;
              value.fields._0_8_ = iStack_58;
              value.fields._16_8_ = uStack_48;
              value.fields._24_8_ = local_40;
              value.fields._32_8_ = uStack_38;
              value.fields.m22 = (float)(int)in_stack_ffffffffffffff88;
              value.fields.m32 = (float)(int)((ulong)in_stack_ffffffffffffff88 >> 0x20);
              value.fields._48_8_ = in_stack_fffffffffffffef8;
              value.fields._56_8_ = in_stack_ffffffffffffff00;
              in_stack_ffffffffffffff08 = local_60;
              in_stack_ffffffffffffff10 = iStack_58;
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
              key = (UnityEngine_CombineInstance_array *)(uVar28 & 0xffffffff);
              __this = (Map_MapLoader_o *)__this_02;
              pUVar12 = (UnityEngine_CombineInstance_array *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_02,index,MethodInfo_MeshFilter_get_Item);
              if ((pUVar12 == (UnityEngine_CombineInstance_array *)0x0) ||
                 (key = MethodInfo_Renderer_GetComponent_Renderer,
                 pUVar14 = (UnityEngine_Renderer_o *)
                           UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar12,(MethodInfo_24E7B40 *)MethodInfo_Renderer_GetComponent_Renderer),
                 __this = (Map_MapLoader_o *)pUVar12, pUVar14 == (UnityEngine_Renderer_o *)0x0))
              goto label_040aaa33;
              UnityEngine_Renderer__set_enabled(pUVar14,0,(MethodInfo *)0x0);
              uVar28 = uVar28 + 1;
              method_01 = (MethodInfo *)&method_01[1].invoker_method;
            } while ((long)uVar28 < (long)*(int *)&__this_02->max_length);
          }
          pUVar12 = (UnityEngine_CombineInstance_array *)
                    UnityEngine_GameObject__AddComponent_object_(pUVar26,MethodInfo_MeshFilter_AddComponent_MeshFilter);
          pUVar14 = (UnityEngine_Renderer_o *)
                    UnityEngine_GameObject__AddComponent_object_(pUVar26,MethodInfo_MeshRenderer_AddComponent_MeshRenderer);
          pUVar13 = (UnityEngine_CombineInstance_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Mesh);
          key = (UnityEngine_CombineInstance_array *)0x0;
          __this = (Map_MapLoader_o *)pUVar13;
          UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)pUVar13,(MethodInfo *)0x0);
          if (pUVar12 != (UnityEngine_CombineInstance_array *)0x0) {
            UnityEngine_MeshFilter__set_mesh
                      ((UnityEngine_MeshFilter_o *)pUVar12,(UnityEngine_Mesh_o *)pUVar13,(MethodInfo *)0x0);
            key = (UnityEngine_CombineInstance_array *)0x0;
            __this = (Map_MapLoader_o *)pUVar12;
            __this_03 = UnityEngine_MeshFilter__get_mesh
                                  ((UnityEngine_MeshFilter_o *)pUVar12,(MethodInfo *)0x0);
            if (__this_03 != (UnityEngine_Mesh_o *)0x0) {
              UnityEngine_Mesh__set_indexFormat(__this_03,1,(MethodInfo *)0x0);
              key = (UnityEngine_CombineInstance_array *)0x0;
              pUVar13 = (UnityEngine_CombineInstance_array *)
                        UnityEngine_MeshFilter__get_mesh
                                  ((UnityEngine_MeshFilter_o *)pUVar12,(MethodInfo *)0x0);
              __this = (Map_MapLoader_o *)pUVar12;
              if ((pUVar13 != (UnityEngine_CombineInstance_array *)0x0) &&
                 (UnityEngine_Mesh__CombineMeshes((UnityEngine_Mesh_o *)pUVar13,pUVar11,1,1,(MethodInfo *)0x0)
                 , key = pUVar11, __this = (Map_MapLoader_o *)pUVar13,
                 pUVar14 != (UnityEngine_Renderer_o *)0x0)) {
                UnityEngine_Renderer__set_staticShadowCaster(pUVar14,1,(MethodInfo *)0x0);
                if (cVar7 == '\0') {
                  UnityEngine_Renderer__set_enabled(pUVar14,0,(MethodInfo *)0x0);
                  return;
                }
                key = (UnityEngine_CombineInstance_array *)0x0;
                pUVar11 = (UnityEngine_CombineInstance_array *)
                          System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)__this_02,0,MethodInfo_MeshFilter_get_Item);
                __this = (Map_MapLoader_o *)__this_02;
                if ((pUVar11 != (UnityEngine_CombineInstance_array *)0x0) &&
                   (key = MethodInfo_Renderer_GetComponent_Renderer,
                   __this_04 = (UnityEngine_Renderer_o *)
                               UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)pUVar11,
                                          (MethodInfo_24E7B40 *)MethodInfo_Renderer_GetComponent_Renderer),
                   __this = (Map_MapLoader_o *)pUVar11, __this_04 != (UnityEngine_Renderer_o *)0x0)) {
                  value_00 = UnityEngine_Renderer__get_sharedMaterial(__this_04,(MethodInfo *)0x0);
                  UnityEngine_Renderer__set_material(pUVar14,value_00,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      goto label_040aaa33;
    }
    uVar28 = 0;
    if (__this_02 == (UnityEngine_CombineInstance_array *)0x0) {
      do {
        uVar29 = (uint)uVar28;
        if (uVar8 <= uVar29) goto label_040aaa38;
        __this = (Map_MapLoader_o *)0x0;
        if ((UnityEngine_Component_o *)pSVar10->m_Items[(int)uVar29] == (UnityEngine_Component_o *)0x0)
        goto label_040aaa33;
        __this = (Map_MapLoader_o *)
                 UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pSVar10->m_Items[(int)uVar29],
                            (MethodInfo_24E7B40 *)MethodInfo_Renderer_GetComponent_Renderer);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        key = (UnityEngine_CombineInstance_array *)0x0;
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') goto label_040aaa33;
        uVar28 = (ulong)(uVar29 + 1);
        uVar8 = (uint)pSVar10->max_length;
        pUVar11 = key;
      } while ((int)(uVar29 + 1) < (int)uVar8);
      goto label_040aa735;
    }
    if (uVar8 != 0) {
      do {
        pUVar11 = (UnityEngine_CombineInstance_array *)pSVar10->m_Items[uVar28];
        if (pUVar11 == (UnityEngine_CombineInstance_array *)0x0) goto label_040aaa33;
        __this = (Map_MapLoader_o *)
                 UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar11,(MethodInfo_24E7B40 *)MethodInfo_Renderer_GetComponent_Renderer);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        key = (UnityEngine_CombineInstance_array *)0x0;
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        lVar25 = MethodInfo_Void_Add;
        if ((char)bVar9 == '\0') {
label_040aa61a:
          uVar8 = (uint)pSVar10->max_length;
          pUVar11 = key;
          if ((int)uVar8 <= (int)uVar28 + 1) goto label_040aa735;
        }
        else {
          piVar1 = (int *)((long)&__this_02->max_length + 4);
          *piVar1 = *piVar1 + 1;
          pIVar4 = __this_02->bounds;
          if (pIVar4 == (Il2CppArrayBounds *)0x0) goto label_040aaa33;
          uVar8 = *(uint *)&__this_02->max_length;
          if ((uint)pIVar4[1].lower_bound <= uVar8) {
            __this = (Map_MapLoader_o *)__this_02;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)pUVar11,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
            key = pUVar11;
            goto label_040aa61a;
          }
          *(uint *)&__this_02->max_length = uVar8 + 1;
          __this = (Map_MapLoader_o *)(&pIVar4[2].length + (int)uVar8);
          (&pIVar4[2].length)[(int)uVar8] = (il2cpp_array_size_t)pUVar11;
          il2cpp_runtime_helper_022b4080();
          uVar8 = (uint)pSVar10->max_length;
          key = pUVar11;
          if ((int)uVar8 <= (int)uVar28 + 1) goto label_040aa735;
        }
        uVar28 = uVar28 + 1;
      } while ((uint)uVar28 < uVar8);
    }
  }
label_040aaa38:
  il2cpp_runtime_helper_022b2ca0();
  pUVar11 = key;
  if (g_data_057ac4ad == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac4ad = '\x01';
    if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_040aaa70;
label_040aab44:
    il2cpp_runtime_helper_02337ed0();
    pSVar16 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
    pSVar30 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
    if (pSVar16 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_040aab61:
      pUVar11 = (UnityEngine_CombineInstance_array *)__this;
      bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar16,(Il2CppObject *)__this,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar9 == '\0') {
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar16 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
        pSVar17 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapObject);
        pUVar11 = MethodInfo_List_1_Map_MapObject;
        pSVar30 = pSVar17;
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)pSVar17,(MethodInfo_362B8B0 *)MethodInfo_List_1_Map_MapObject);
        if (pSVar16 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040aad6c;
        pUVar11 = (UnityEngine_CombineInstance_array *)__this;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar16,(Il2CppObject *)__this,(Il2CppObject *)pSVar17,MethodInfo_Void_Add);
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x20);
      pSVar30 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
      if (pSVar16 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pUVar11 = key;
        bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar16,&key->obj,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar9 == '\0') {
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar16 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x20);
          pSVar17 = (System_Collections_Generic_Dictionary_object__object__o *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
          pUVar11 = MethodInfo_HashSet_1_System_String;
          pSVar30 = pSVar17;
          System_Collections_Generic_HashSet_object____ctor
                    ((System_Collections_Generic_HashSet_object__o *)pSVar17,
                     (MethodInfo_33E0570 *)MethodInfo_HashSet_1_System_String);
          if (pSVar16 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040aad6c;
          pUVar11 = key;
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar16,&key->obj,(Il2CppObject *)pSVar17,MethodInfo_Void_Add);
        }
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar30 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
        if ((pSVar30 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
           (pUVar11 = (UnityEngine_CombineInstance_array *)__this,
           pSVar21 = (System_Collections_Generic_List_object__o *)
                     System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar30,(Il2CppObject *)__this,MethodInfo_List_1_Map_MapObject_get_Item), lVar25 = MethodInfo_Void_Add,
           pSVar21 != (System_Collections_Generic_List_object__o *)0x0)) {
          piVar2 = &(pSVar21->fields)._version;
          *piVar2 = *piVar2 + 1;
          pSVar10 = (pSVar21->fields)._items;
          if (pSVar10 != (System_Object_array *)0x0) {
            uVar8 = (pSVar21->fields)._size;
            if (uVar8 < (uint)pSVar10->max_length) {
              (pSVar21->fields)._size = uVar8 + 1;
              pSVar10->m_Items[(int)uVar8] = &key->obj;
              pUVar11 = key;
              il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar8);
            }
            else {
              pUVar11 = key;
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar21,&key->obj,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
            }
            pSVar30 = *(System_Collections_Generic_Dictionary_object__object__o **)
                       (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x20);
            if ((pSVar30 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
               (pSVar15 = (System_Collections_Generic_HashSet_object__o *)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar30,&key->obj,MethodInfo_HashSet_1_System_String_get_Item), pUVar11 = key,
               pSVar15 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
              System_Collections_Generic_HashSet_object___Add(pSVar15,(Il2CppObject *)__this,MethodInfo_Boolean_Add);
              return;
            }
          }
        }
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_040aab44;
label_040aaa70:
    pSVar16 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
    if (pSVar16 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040aab61;
    pSVar30 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  }
label_040aad6c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac4ae = '\x01';
    if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_040aada7;
label_040aae06:
    il2cpp_runtime_helper_02337ed0();
    pSVar16 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x20);
    pSVar17 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
    if (pSVar16 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_040aae1e:
      bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar16,(Il2CppObject *)pSVar30,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar9 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar17 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x20);
      if ((pSVar17 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (pSVar15 = (System_Collections_Generic_HashSet_object__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar17,(Il2CppObject *)pSVar30,MethodInfo_HashSet_1_System_String_get_Item),
         pSVar15 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        System_Collections_Generic_HashSet_object___Contains(pSVar15,&pUVar11->obj,MethodInfo_Boolean_Contains);
        return;
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_040aae06;
label_040aada7:
    pSVar16 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x20);
    if (pSVar16 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040aae1e;
    pSVar17 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4af == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac4af = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return;
  }
  iVar3 = *(int *)(TypeInfo_MapLoader + 0xe4);
  while( true ) {
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar16 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
    pSVar30 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
    if (pSVar16 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ab087;
    bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar16,(Il2CppObject *)pSVar17,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar9 != '\0') break;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar30 = pSVar17;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pSVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') break;
    if ((pSVar17 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (pSVar30 = pSVar17,
       __this_05 = UnityEngine_GameObject__get_transform
                             ((UnityEngine_GameObject_o *)pSVar17,(MethodInfo *)0x0),
       __this_05 == (UnityEngine_Transform_o *)0x0)) goto label_040ab087;
    pSVar16 = (System_Collections_Generic_Dictionary_object__object__o *)
              UnityEngine_Transform__get_parent(__this_05,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar30 = pSVar16;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pSVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') break;
    if (pSVar16 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ab087;
    pSVar17 = (System_Collections_Generic_Dictionary_object__object__o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar16,(MethodInfo *)0x0);
    iVar3 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = *(System_Collections_Generic_Dictionary_object__object__o **)
             (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
  pSVar30 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  if (pSVar16 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar16,(Il2CppObject *)pSVar17,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar9 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar16 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
    pSVar30 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
    if (pSVar16 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                (pSVar16,(Il2CppObject *)pSVar17,MethodInfo_MapObject_get_Item);
      return;
    }
  }
label_040ab087:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"Map");
    il2cpp_runtime_helper_023445d0(&"/Prefabs/");
    il2cpp_runtime_helper_023445d0(&"Arenas/CaveMap1");
    g_data_057ac4ba = '\x01';
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = *(System_Collections_Generic_Dictionary_object__object__o **)
             (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
  if (pSVar16 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_040ab3e4:
    pUVar20 = (UnityEngine_Object_o *)il2cpp_runtime_helper_022b2c90();
label_040ab3e9:
    il2cpp_runtime_helper_022b2fd0(pUVar20);
label_040ab3f1:
    il2cpp_runtime_helper_022b2c90();
label_040ab3f6:
    il2cpp_runtime_helper_022b2c90();
label_040ab3fb:
    il2cpp_runtime_helper_022b2ca0();
label_040ab400:
    il2cpp_runtime_helper_022b2ca0();
label_040ab405:
    il2cpp_runtime_helper_022b2c90();
label_040ab40a:
    il2cpp_runtime_helper_022b2ca0();
label_040ab40f:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar16,(Il2CppObject *)pSVar30,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar9 != '\0') {
label_040ab364:
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
      if (pSVar16 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ab3e4;
      pUVar20 = (UnityEngine_Object_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar16,(Il2CppObject *)pSVar30,MethodInfo_Object_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar20 = UnityEngine_Object__Instantiate_4e01490(pUVar20,(MethodInfo *)0x0);
      if (pUVar20 == (UnityEngine_Object_o *)0x0) {
        return;
      }
      if (pUVar20->klass == TypeInfo_GameObject) {
        return;
      }
      goto label_040ab3e9;
    }
    if (pSVar30 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ab3f1;
    pSVar18 = System_String__Split_3afa740((System_String_o *)pSVar30,"/",0,(MethodInfo *)0x0);
    if (pSVar18 == (System_String_array *)0x0) goto label_040ab3f6;
    if ((int)pSVar18->max_length == 0) goto label_040ab3fb;
    bVar9 = System_String__op_Equality(pSVar18->m_Items[0],"Custom",(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar3 = (int)pSVar18->max_length;
      if (iVar3 == 1) goto label_040ab40a;
      if (iVar3 != 0) {
        pSVar16 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
        pSVar23 = System_String__Concat_3af7150
                            (pSVar18->m_Items[0],"/Prefabs/",pSVar18->m_Items[1],(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar20 = ApplicationManagers_ResourceManager__LoadAsset("Map",pSVar23,0,(MethodInfo *)0x0);
        if (pSVar16 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ab419;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar16,(Il2CppObject *)pSVar30,(Il2CppObject *)pUVar20,MethodInfo_Void_Add);
label_040ab32d:
        bVar9 = System_String__op_Equality((System_String_o *)pSVar30,"Arenas/CaveMap1",(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Weather_WeatherManager__EnableCaveMap((MethodInfo *)0x0);
        }
        goto label_040ab364;
      }
      goto label_040ab40f;
    }
    if ((uint)pSVar18->max_length < 2) goto label_040ab400;
    pSVar23 = pSVar18->m_Items[1];
    if (pSVar23 == (System_String_o *)0x0) goto label_040ab405;
    pSVar19 = System_String__Substring
                        ((System_String_o *)pSVar30,(pSVar23->fields)._stringLength + 8,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar16 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar20 = ApplicationManagers_AssetBundleManager__LoadAsset(pSVar23,pSVar19,(MethodInfo *)0x0);
    if (pSVar16 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar16,(Il2CppObject *)pSVar30,(Il2CppObject *)pUVar20,MethodInfo_Void_Add);
      goto label_040ab32d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040ab419:
  auVar31 = il2cpp_runtime_helper_022b2c90();
  if (auVar31._8_4_ != 1) {
    _Unwind_Resume(auVar31._0_8_);
  }
  pSVar21 = (System_Collections_Generic_List_object__o *)__cxa_begin_catch(auVar31._0_8_);
  uVar22 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  cVar7 = il2cpp_runtime_helper_0233e000(uVar22,(pSVar21->klass->_1).image);
  if (cVar7 != '\0') {
    pSVar5 = pSVar21->klass;
    __cxa_end_catch();
    if (pSVar5 != (System_Collections_Generic_List_object__c *)0x0) {
      pvVar6 = (pSVar5->_1).image;
      pSVar23 = (System_String_o *)
                (**(code **)((long)pvVar6 + 0x188))(pSVar5,*(undefined8 *)((long)pvVar6 + 400));
      pSVar19 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Failed to load asset: ");
      pSVar24 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", ");
      pSVar23 = System_String__Concat_3af7470
                          (pSVar19,(System_String_o *)pSVar30,pSVar24,pSVar23,(MethodInfo *)0x0);
      lVar25 = il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
      if (*(int *)(lVar25 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar25);
      }
      ApplicationManagers_DebugConsole__Log(pSVar23,1,(MethodInfo *)0x0);
      lVar25 = il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
      if (*(int *)(lVar25 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar25);
      }
      lVar25 = il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
      pSVar21 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar25 + 0xb8) + 0x78);
      pvVar6 = (pSVar5->_1).image;
      pSVar23 = (System_String_o *)
                (**(code **)((long)pvVar6 + 0x188))(pSVar5,*(undefined8 *)((long)pvVar6 + 400));
      pSVar19 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Failed to load asset: ");
      pSVar24 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", ");
      pSVar23 = System_String__Concat_3af7470
                          (pSVar19,(System_String_o *)pSVar30,pSVar24,pSVar23,(MethodInfo *)0x0);
      if (pSVar21 != (System_Collections_Generic_List_object__o *)0x0) {
        lVar25 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        piVar2 = &(pSVar21->fields)._version;
        *piVar2 = *piVar2 + 1;
        pSVar10 = (pSVar21->fields)._items;
        if (pSVar10 != (System_Object_array *)0x0) {
          uVar8 = (pSVar21->fields)._size;
          if (uVar8 < (uint)pSVar10->max_length) {
            (pSVar21->fields)._size = uVar8 + 1;
            pSVar10->m_Items[(int)uVar8] = (Il2CppObject *)pSVar23;
            il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar8);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar21,(Il2CppObject *)pSVar23,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
          }
          uVar22 = il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
          pUVar26 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(uVar22);
          UnityEngine_GameObject___ctor_4dfc3c0(pUVar26,(MethodInfo *)0x0);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  puVar27 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar27 = pSVar21->klass;
  __cxa_throw(puVar27,&PTR_PTR_05215060,0);
}


// Map.MapLoader$$RegisterTag
// il2cpp: void Map_MapLoader__RegisterTag (System_String_o* tag, Map_MapObject_o* obj, const MethodInfo* method);
// 0x40aaa40

void Map_MapLoader__RegisterTag(System_String_o *tag,Map_MapObject_o *obj,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  System_Collections_Generic_List_object__c *pSVar4;
  void *pvVar5;
  System_Object_array *pSVar6;
  char cVar7;
  bool_conflict bVar8;
  System_Collections_Generic_HashSet_object__o *pSVar9;
  UnityEngine_Transform_o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar10;
  System_Collections_Generic_Dictionary_object__object__o *pSVar11;
  System_String_array *pSVar12;
  System_String_o *pSVar13;
  UnityEngine_Object_o *pUVar14;
  System_Collections_Generic_List_object__o *pSVar15;
  undefined8 uVar16;
  System_String_o *pSVar17;
  System_String_o *pSVar18;
  long lVar19;
  UnityEngine_GameObject_o *__this_00;
  undefined8 *puVar20;
  MethodInfo_362B8B0 *pMVar21;
  System_Collections_Generic_Dictionary_object__object__o *pSVar22;
  undefined1 auVar23 [12];
  
  pMVar21 = (MethodInfo_362B8B0 *)obj;
  if (g_data_057ac4ad == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac4ad = '\x01';
    if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_040aaa70;
label_040aab44:
    il2cpp_runtime_helper_02337ed0();
    pSVar10 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
    pSVar22 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
    if (pSVar10 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_040aab61:
      pMVar21 = (MethodInfo_362B8B0 *)tag;
      bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar10,(Il2CppObject *)tag,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar8 == '\0') {
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar10 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
        pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapObject);
        pMVar21 = MethodInfo_List_1_Map_MapObject;
        pSVar22 = pSVar11;
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)pSVar11,MethodInfo_List_1_Map_MapObject);
        if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040aad6c;
        pMVar21 = (MethodInfo_362B8B0 *)tag;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar10,(Il2CppObject *)tag,(Il2CppObject *)pSVar11,MethodInfo_Void_Add);
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x20);
      pSVar22 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
      if (pSVar10 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pMVar21 = (MethodInfo_362B8B0 *)obj;
        bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar10,(Il2CppObject *)obj,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar8 == '\0') {
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x20);
          pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
          pMVar21 = MethodInfo_HashSet_1_System_String;
          pSVar22 = pSVar11;
          System_Collections_Generic_HashSet_object____ctor
                    ((System_Collections_Generic_HashSet_object__o *)pSVar11,
                     (MethodInfo_33E0570 *)MethodInfo_HashSet_1_System_String);
          if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040aad6c;
          pMVar21 = (MethodInfo_362B8B0 *)obj;
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar10,(Il2CppObject *)obj,(Il2CppObject *)pSVar11,MethodInfo_Void_Add);
        }
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar22 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
        if ((pSVar22 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
           (pMVar21 = (MethodInfo_362B8B0 *)tag,
           pSVar15 = (System_Collections_Generic_List_object__o *)
                     System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar22,(Il2CppObject *)tag,MethodInfo_List_1_Map_MapObject_get_Item), lVar19 = MethodInfo_Void_Add,
           pSVar15 != (System_Collections_Generic_List_object__o *)0x0)) {
          piVar1 = &(pSVar15->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (pSVar15->fields)._items;
          if (pSVar6 != (System_Object_array *)0x0) {
            uVar3 = (pSVar15->fields)._size;
            if (uVar3 < (uint)pSVar6->max_length) {
              (pSVar15->fields)._size = uVar3 + 1;
              pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)obj;
              pMVar21 = (MethodInfo_362B8B0 *)obj;
              il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar3);
            }
            else {
              pMVar21 = (MethodInfo_362B8B0 *)obj;
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar15,(Il2CppObject *)obj,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            pSVar22 = *(System_Collections_Generic_Dictionary_object__object__o **)
                       (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x20);
            if ((pSVar22 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
               (pSVar9 = (System_Collections_Generic_HashSet_object__o *)
                         System_Collections_Generic_Dictionary_object__object___get_Item
                                   (pSVar22,(Il2CppObject *)obj,MethodInfo_HashSet_1_System_String_get_Item),
               pMVar21 = (MethodInfo_362B8B0 *)obj,
               pSVar9 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
              System_Collections_Generic_HashSet_object___Add(pSVar9,(Il2CppObject *)tag,MethodInfo_Boolean_Add);
              return;
            }
          }
        }
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_040aab44;
label_040aaa70:
    pSVar10 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
    if (pSVar10 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040aab61;
    pSVar22 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  }
label_040aad6c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac4ae = '\x01';
    if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_040aada7;
label_040aae06:
    il2cpp_runtime_helper_02337ed0();
    pSVar10 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x20);
    pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
    if (pSVar10 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_040aae1e:
      bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar10,(Il2CppObject *)pSVar22,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar8 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x20);
      if ((pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (pSVar9 = (System_Collections_Generic_HashSet_object__o *)
                   System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar11,(Il2CppObject *)pSVar22,MethodInfo_HashSet_1_System_String_get_Item),
         pSVar9 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        System_Collections_Generic_HashSet_object___Contains(pSVar9,(Il2CppObject *)pMVar21,MethodInfo_Boolean_Contains);
        return;
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_040aae06;
label_040aada7:
    pSVar10 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x20);
    if (pSVar10 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040aae1e;
    pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4af == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac4af = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  iVar2 = *(int *)(TypeInfo_MapLoader + 0xe4);
  while( true ) {
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
    pSVar22 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
    if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ab087;
    bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar10,(Il2CppObject *)pSVar11,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar8 != '\0') break;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar22 = pSVar11;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pSVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') break;
    if ((pSVar11 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (pSVar22 = pSVar11,
       __this = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pSVar11,(MethodInfo *)0x0),
       __this == (UnityEngine_Transform_o *)0x0)) goto label_040ab087;
    pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)
              UnityEngine_Transform__get_parent(__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar22 = pSVar10;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pSVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') break;
    if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ab087;
    pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar10,(MethodInfo *)0x0);
    iVar2 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = *(System_Collections_Generic_Dictionary_object__object__o **)
             (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
  pSVar22 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  if (pSVar10 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar10,(Il2CppObject *)pSVar11,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar8 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
    pSVar22 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
    if (pSVar10 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                (pSVar10,(Il2CppObject *)pSVar11,MethodInfo_MapObject_get_Item);
      return;
    }
  }
label_040ab087:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"Map");
    il2cpp_runtime_helper_023445d0(&"/Prefabs/");
    il2cpp_runtime_helper_023445d0(&"Arenas/CaveMap1");
    g_data_057ac4ba = '\x01';
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = *(System_Collections_Generic_Dictionary_object__object__o **)
             (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
  if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_040ab3e4:
    pUVar14 = (UnityEngine_Object_o *)il2cpp_runtime_helper_022b2c90();
label_040ab3e9:
    il2cpp_runtime_helper_022b2fd0(pUVar14);
label_040ab3f1:
    il2cpp_runtime_helper_022b2c90();
label_040ab3f6:
    il2cpp_runtime_helper_022b2c90();
label_040ab3fb:
    il2cpp_runtime_helper_022b2ca0();
label_040ab400:
    il2cpp_runtime_helper_022b2ca0();
label_040ab405:
    il2cpp_runtime_helper_022b2c90();
label_040ab40a:
    il2cpp_runtime_helper_022b2ca0();
label_040ab40f:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar10,(Il2CppObject *)pSVar22,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar8 != '\0') {
label_040ab364:
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
      if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ab3e4;
      pUVar14 = (UnityEngine_Object_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar10,(Il2CppObject *)pSVar22,MethodInfo_Object_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar14 = UnityEngine_Object__Instantiate_4e01490(pUVar14,(MethodInfo *)0x0);
      if (pUVar14 == (UnityEngine_Object_o *)0x0) {
        return;
      }
      if (pUVar14->klass == TypeInfo_GameObject) {
        return;
      }
      goto label_040ab3e9;
    }
    if (pSVar22 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ab3f1;
    pSVar12 = System_String__Split_3afa740((System_String_o *)pSVar22,"/",0,(MethodInfo *)0x0);
    if (pSVar12 == (System_String_array *)0x0) goto label_040ab3f6;
    if ((int)pSVar12->max_length == 0) goto label_040ab3fb;
    bVar8 = System_String__op_Equality(pSVar12->m_Items[0],"Custom",(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar2 = (int)pSVar12->max_length;
      if (iVar2 == 1) goto label_040ab40a;
      if (iVar2 != 0) {
        pSVar10 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
        pSVar17 = System_String__Concat_3af7150
                            (pSVar12->m_Items[0],"/Prefabs/",pSVar12->m_Items[1],(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar14 = ApplicationManagers_ResourceManager__LoadAsset("Map",pSVar17,0,(MethodInfo *)0x0);
        if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ab419;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar10,(Il2CppObject *)pSVar22,(Il2CppObject *)pUVar14,MethodInfo_Void_Add);
label_040ab32d:
        bVar8 = System_String__op_Equality((System_String_o *)pSVar22,"Arenas/CaveMap1",(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Weather_WeatherManager__EnableCaveMap((MethodInfo *)0x0);
        }
        goto label_040ab364;
      }
      goto label_040ab40f;
    }
    if ((uint)pSVar12->max_length < 2) goto label_040ab400;
    pSVar17 = pSVar12->m_Items[1];
    if (pSVar17 == (System_String_o *)0x0) goto label_040ab405;
    pSVar13 = System_String__Substring
                        ((System_String_o *)pSVar22,(pSVar17->fields)._stringLength + 8,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar14 = ApplicationManagers_AssetBundleManager__LoadAsset(pSVar17,pSVar13,(MethodInfo *)0x0);
    if (pSVar10 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar10,(Il2CppObject *)pSVar22,(Il2CppObject *)pUVar14,MethodInfo_Void_Add);
      goto label_040ab32d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040ab419:
  auVar23 = il2cpp_runtime_helper_022b2c90();
  if (auVar23._8_4_ != 1) {
    _Unwind_Resume(auVar23._0_8_);
  }
  pSVar15 = (System_Collections_Generic_List_object__o *)__cxa_begin_catch(auVar23._0_8_);
  uVar16 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  cVar7 = il2cpp_runtime_helper_0233e000(uVar16,(pSVar15->klass->_1).image);
  if (cVar7 != '\0') {
    pSVar4 = pSVar15->klass;
    __cxa_end_catch();
    if (pSVar4 != (System_Collections_Generic_List_object__c *)0x0) {
      pvVar5 = (pSVar4->_1).image;
      pSVar17 = (System_String_o *)
                (**(code **)((long)pvVar5 + 0x188))(pSVar4,*(undefined8 *)((long)pvVar5 + 400));
      pSVar13 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Failed to load asset: ");
      pSVar18 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", ");
      pSVar17 = System_String__Concat_3af7470
                          (pSVar13,(System_String_o *)pSVar22,pSVar18,pSVar17,(MethodInfo *)0x0);
      lVar19 = il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
      if (*(int *)(lVar19 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar19);
      }
      ApplicationManagers_DebugConsole__Log(pSVar17,1,(MethodInfo *)0x0);
      lVar19 = il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
      if (*(int *)(lVar19 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar19);
      }
      lVar19 = il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
      pSVar15 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar19 + 0xb8) + 0x78);
      pvVar5 = (pSVar4->_1).image;
      pSVar17 = (System_String_o *)
                (**(code **)((long)pvVar5 + 0x188))(pSVar4,*(undefined8 *)((long)pvVar5 + 400));
      pSVar13 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Failed to load asset: ");
      pSVar18 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", ");
      pSVar17 = System_String__Concat_3af7470
                          (pSVar13,(System_String_o *)pSVar22,pSVar18,pSVar17,(MethodInfo *)0x0);
      if (pSVar15 != (System_Collections_Generic_List_object__o *)0x0) {
        lVar19 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        piVar1 = &(pSVar15->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (pSVar15->fields)._items;
        if (pSVar6 != (System_Object_array *)0x0) {
          uVar3 = (pSVar15->fields)._size;
          if (uVar3 < (uint)pSVar6->max_length) {
            (pSVar15->fields)._size = uVar3 + 1;
            pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)pSVar17;
            il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar15,(Il2CppObject *)pSVar17,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          uVar16 = il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
          __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(uVar16);
          UnityEngine_GameObject___ctor_4dfc3c0(__this_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  puVar20 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar20 = pSVar15->klass;
  __cxa_throw(puVar20,&PTR_PTR_05215060,0);
}


// Map.MapLoader$$HasTag
// il2cpp: bool Map_MapLoader__HasTag (Map_MapObject_o* obj, System_String_o* tag, const MethodInfo* method);
// 0x40aad80

bool_conflict Map_MapLoader__HasTag(Map_MapObject_o *obj,System_String_o *tag,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  System_Collections_Generic_List_object__c *pSVar4;
  void *pvVar5;
  System_Object_array *pSVar6;
  char cVar7;
  bool_conflict bVar8;
  System_Collections_Generic_HashSet_object__o *__this;
  UnityEngine_Transform_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar9;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Il2CppObject *pIVar10;
  System_String_array *pSVar11;
  System_String_o *pSVar12;
  UnityEngine_Object_o *pUVar13;
  System_Collections_Generic_List_object__o *__this_02;
  undefined8 uVar14;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  long lVar17;
  undefined8 *puVar18;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  undefined1 auVar19 [12];
  
  if (g_data_057ac4ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac4ae = '\x01';
    if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_040aada7;
label_040aae06:
    il2cpp_runtime_helper_02337ed0();
    pSVar9 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x20);
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
    if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_040aae1e:
      bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar9,(Il2CppObject *)obj,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar8 == '\0') {
        return 0;
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x20);
      if ((__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (__this = (System_Collections_Generic_HashSet_object__o *)
                   System_Collections_Generic_Dictionary_object__object___get_Item
                             (__this_01,(Il2CppObject *)obj,MethodInfo_HashSet_1_System_String_get_Item),
         __this != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        bVar8 = System_Collections_Generic_HashSet_object___Contains(__this,(Il2CppObject *)tag,MethodInfo_Boolean_Contains);
        return bVar8;
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_040aae06;
label_040aada7:
    pSVar9 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x20);
    if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040aae1e;
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4af == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac4af = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return 0;
  }
  iVar2 = *(int *)(TypeInfo_MapLoader + 0xe4);
  while( true ) {
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
    __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
    if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ab087;
    bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar9,(Il2CppObject *)__this_01,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar8 != '\0') break;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_03 = __this_01;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') break;
    if ((__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (__this_03 = __this_01,
       __this_00 = UnityEngine_GameObject__get_transform
                             ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_Transform_o *)0x0)) goto label_040ab087;
    pSVar9 = (System_Collections_Generic_Dictionary_object__object__o *)
             UnityEngine_Transform__get_parent(__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_03 = pSVar9;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pSVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') break;
    if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ab087;
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar9,(MethodInfo *)0x0);
    iVar2 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
  __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar9,(Il2CppObject *)__this_01,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar8 == '\0') {
      return 0;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
    __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
    if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar9,(Il2CppObject *)__this_01,MethodInfo_MapObject_get_Item);
      return (bool_conflict)pIVar10;
    }
  }
label_040ab087:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"Map");
    il2cpp_runtime_helper_023445d0(&"/Prefabs/");
    il2cpp_runtime_helper_023445d0(&"Arenas/CaveMap1");
    g_data_057ac4ba = '\x01';
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
  if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_040ab3e4:
    pUVar13 = (UnityEngine_Object_o *)il2cpp_runtime_helper_022b2c90();
label_040ab3e9:
    il2cpp_runtime_helper_022b2fd0(pUVar13);
label_040ab3f1:
    il2cpp_runtime_helper_022b2c90();
label_040ab3f6:
    il2cpp_runtime_helper_022b2c90();
label_040ab3fb:
    il2cpp_runtime_helper_022b2ca0();
label_040ab400:
    il2cpp_runtime_helper_022b2ca0();
label_040ab405:
    il2cpp_runtime_helper_022b2c90();
label_040ab40a:
    il2cpp_runtime_helper_022b2ca0();
label_040ab40f:
    il2cpp_runtime_helper_022b2ca0();
label_040ab414:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar9,(Il2CppObject *)__this_03,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar8 != '\0') {
label_040ab364:
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
      if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ab3e4;
      pUVar13 = (UnityEngine_Object_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar9,(Il2CppObject *)__this_03,MethodInfo_Object_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar13 = UnityEngine_Object__Instantiate_4e01490(pUVar13,(MethodInfo *)0x0);
      if ((pUVar13 == (UnityEngine_Object_o *)0x0) || (pUVar13->klass == TypeInfo_GameObject)) goto label_040ab3d5;
      goto label_040ab3e9;
    }
    if (__this_03 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ab3f1;
    pSVar11 = System_String__Split_3afa740((System_String_o *)__this_03,"/",0,(MethodInfo *)0x0);
    if (pSVar11 == (System_String_array *)0x0) goto label_040ab3f6;
    if ((int)pSVar11->max_length == 0) goto label_040ab3fb;
    bVar8 = System_String__op_Equality(pSVar11->m_Items[0],"Custom",(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if ((uint)pSVar11->max_length < 2) goto label_040ab400;
      pSVar15 = pSVar11->m_Items[1];
      if (pSVar15 == (System_String_o *)0x0) goto label_040ab405;
      pSVar12 = System_String__Substring
                          ((System_String_o *)__this_03,(pSVar15->fields)._stringLength + 8,(MethodInfo *)0x0)
      ;
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
      if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar13 = ApplicationManagers_AssetBundleManager__LoadAsset(pSVar15,pSVar12,(MethodInfo *)0x0);
      if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar9,(Il2CppObject *)__this_03,(Il2CppObject *)pUVar13,MethodInfo_Void_Add);
        goto label_040ab32d;
      }
      goto label_040ab414;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = (int)pSVar11->max_length;
    if (iVar2 == 1) goto label_040ab40a;
    if (iVar2 == 0) goto label_040ab40f;
    pSVar9 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
    pSVar15 = System_String__Concat_3af7150
                        (pSVar11->m_Items[0],"/Prefabs/",pSVar11->m_Items[1],(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar13 = ApplicationManagers_ResourceManager__LoadAsset("Map",pSVar15,0,(MethodInfo *)0x0);
    if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar9,(Il2CppObject *)__this_03,(Il2CppObject *)pUVar13,MethodInfo_Void_Add);
label_040ab32d:
      bVar8 = System_String__op_Equality((System_String_o *)__this_03,"Arenas/CaveMap1",(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Weather_WeatherManager__EnableCaveMap((MethodInfo *)0x0);
      }
      goto label_040ab364;
    }
  }
  auVar19 = il2cpp_runtime_helper_022b2c90();
  if (auVar19._8_4_ != 1) {
    _Unwind_Resume(auVar19._0_8_);
  }
  __this_02 = (System_Collections_Generic_List_object__o *)__cxa_begin_catch(auVar19._0_8_);
  uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  cVar7 = il2cpp_runtime_helper_0233e000(uVar14,(__this_02->klass->_1).image);
  if (cVar7 != '\0') {
    pSVar4 = __this_02->klass;
    __cxa_end_catch();
    if (pSVar4 != (System_Collections_Generic_List_object__c *)0x0) {
      pvVar5 = (pSVar4->_1).image;
      pSVar15 = (System_String_o *)
                (**(code **)((long)pvVar5 + 0x188))(pSVar4,*(undefined8 *)((long)pvVar5 + 400));
      pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Failed to load asset: ");
      pSVar16 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", ");
      pSVar15 = System_String__Concat_3af7470
                          (pSVar12,(System_String_o *)__this_03,pSVar16,pSVar15,(MethodInfo *)0x0);
      lVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
      if (*(int *)(lVar17 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar17);
      }
      ApplicationManagers_DebugConsole__Log(pSVar15,1,(MethodInfo *)0x0);
      lVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
      if (*(int *)(lVar17 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar17);
      }
      lVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
      __this_02 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar17 + 0xb8) + 0x78);
      pvVar5 = (pSVar4->_1).image;
      pSVar15 = (System_String_o *)
                (**(code **)((long)pvVar5 + 0x188))(pSVar4,*(undefined8 *)((long)pvVar5 + 400));
      pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Failed to load asset: ");
      pSVar16 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", ");
      pSVar15 = System_String__Concat_3af7470
                          (pSVar12,(System_String_o *)__this_03,pSVar16,pSVar15,(MethodInfo *)0x0);
      if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
        lVar17 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        piVar1 = &(__this_02->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this_02->fields)._items;
        if (pSVar6 != (System_Object_array *)0x0) {
          uVar3 = (__this_02->fields)._size;
          if (uVar3 < (uint)pSVar6->max_length) {
            (__this_02->fields)._size = uVar3 + 1;
            pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)pSVar15;
            il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_02,(Il2CppObject *)pSVar15,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
          uVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
          pUVar13 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(uVar14);
          UnityEngine_GameObject___ctor_4dfc3c0((UnityEngine_GameObject_o *)pUVar13,(MethodInfo *)0x0);
label_040ab3d5:
          return (bool_conflict)pUVar13;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  puVar18 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar18 = __this_02->klass;
  __cxa_throw(puVar18,&PTR_PTR_05215060,0);
}


// Map.MapLoader$$GetMapObject
// il2cpp: Map_MapObject_o* Map_MapLoader__GetMapObject (UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x40aaea0

Map_MapObject_o * Map_MapLoader__GetMapObject(UnityEngine_GameObject_o *obj,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Collections_Generic_List_object__c *pSVar5;
  void *pvVar6;
  System_Object_array *pSVar7;
  char cVar8;
  bool_conflict bVar9;
  UnityEngine_Transform_o *__this;
  System_String_o *pSVar10;
  System_String_array *pSVar11;
  System_String_o *pSVar12;
  UnityEngine_Object_o *pUVar13;
  Map_MapObject_o *pMVar14;
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 uVar15;
  System_String_o *pSVar16;
  long lVar17;
  System_String_o *pSVar18;
  undefined8 *puVar19;
  undefined1 auVar20 [12];
  
  if (g_data_057ac4af == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac4af = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)obj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return (Map_MapObject_o *)0x0;
  }
  iVar2 = *(int *)(TypeInfo_MapLoader + 0xe4);
  while( true ) {
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
    pSVar18 = (System_String_o *)0x0;
    if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ab087;
    bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar4,(Il2CppObject *)obj,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar9 != '\0') break;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar18 = (System_String_o *)obj;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)obj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') break;
    if (((System_String_o *)obj == (System_String_o *)0x0) ||
       (pSVar18 = (System_String_o *)obj,
       __this = UnityEngine_GameObject__get_transform(obj,(MethodInfo *)0x0),
       __this == (UnityEngine_Transform_o *)0x0)) goto label_040ab087;
    pSVar10 = (System_String_o *)UnityEngine_Transform__get_parent(__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar18 = pSVar10;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pSVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') break;
    if (pSVar10 == (System_String_o *)0x0) goto label_040ab087;
    obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar10,(MethodInfo *)0x0);
    iVar2 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
  pSVar18 = (System_String_o *)0x0;
  if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar4,(Il2CppObject *)obj,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar9 == '\0') {
      return (Map_MapObject_o *)0x0;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
    pSVar18 = (System_String_o *)0x0;
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pMVar14 = (Map_MapObject_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar4,(Il2CppObject *)obj,MethodInfo_MapObject_get_Item);
      return pMVar14;
    }
  }
label_040ab087:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"Map");
    il2cpp_runtime_helper_023445d0(&"/Prefabs/");
    il2cpp_runtime_helper_023445d0(&"Arenas/CaveMap1");
    g_data_057ac4ba = '\x01';
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
  if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_040ab3e4:
    pMVar14 = (Map_MapObject_o *)il2cpp_runtime_helper_022b2c90();
label_040ab3e9:
    il2cpp_runtime_helper_022b2fd0(pMVar14);
label_040ab3f1:
    il2cpp_runtime_helper_022b2c90();
label_040ab3f6:
    il2cpp_runtime_helper_022b2c90();
label_040ab3fb:
    il2cpp_runtime_helper_022b2ca0();
label_040ab400:
    il2cpp_runtime_helper_022b2ca0();
label_040ab405:
    il2cpp_runtime_helper_022b2c90();
label_040ab40a:
    il2cpp_runtime_helper_022b2ca0();
label_040ab40f:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar4,(Il2CppObject *)pSVar18,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar9 != '\0') {
label_040ab364:
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ab3e4;
      pUVar13 = (UnityEngine_Object_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar4,(Il2CppObject *)pSVar18,MethodInfo_Object_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar14 = (Map_MapObject_o *)UnityEngine_Object__Instantiate_4e01490(pUVar13,(MethodInfo *)0x0);
      if (pMVar14 == (Map_MapObject_o *)0x0) {
        return (Map_MapObject_o *)0x0;
      }
      if ((UnityEngine_Object_c *)pMVar14->klass == TypeInfo_GameObject) {
        return pMVar14;
      }
      goto label_040ab3e9;
    }
    if (pSVar18 == (System_String_o *)0x0) goto label_040ab3f1;
    pSVar11 = System_String__Split_3afa740(pSVar18,"/",0,(MethodInfo *)0x0);
    if (pSVar11 == (System_String_array *)0x0) goto label_040ab3f6;
    if ((int)pSVar11->max_length == 0) goto label_040ab3fb;
    bVar9 = System_String__op_Equality(pSVar11->m_Items[0],"Custom",(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar2 = (int)pSVar11->max_length;
      if (iVar2 == 1) goto label_040ab40a;
      if (iVar2 != 0) {
        pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
        pSVar10 = System_String__Concat_3af7150
                            (pSVar11->m_Items[0],"/Prefabs/",pSVar11->m_Items[1],(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar13 = ApplicationManagers_ResourceManager__LoadAsset("Map",pSVar10,0,(MethodInfo *)0x0);
        if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ab419;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar4,(Il2CppObject *)pSVar18,(Il2CppObject *)pUVar13,MethodInfo_Void_Add);
label_040ab32d:
        bVar9 = System_String__op_Equality(pSVar18,"Arenas/CaveMap1",(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Weather_WeatherManager__EnableCaveMap((MethodInfo *)0x0);
        }
        goto label_040ab364;
      }
      goto label_040ab40f;
    }
    if ((uint)pSVar11->max_length < 2) goto label_040ab400;
    pSVar10 = pSVar11->m_Items[1];
    if (pSVar10 == (System_String_o *)0x0) goto label_040ab405;
    pSVar12 = System_String__Substring(pSVar18,(pSVar10->fields)._stringLength + 8,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar13 = ApplicationManagers_AssetBundleManager__LoadAsset(pSVar10,pSVar12,(MethodInfo *)0x0);
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar4,(Il2CppObject *)pSVar18,(Il2CppObject *)pUVar13,MethodInfo_Void_Add);
      goto label_040ab32d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040ab419:
  auVar20 = il2cpp_runtime_helper_022b2c90();
  if (auVar20._8_4_ != 1) {
    _Unwind_Resume(auVar20._0_8_);
  }
  __this_00 = (System_Collections_Generic_List_object__o *)__cxa_begin_catch(auVar20._0_8_);
  uVar15 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  cVar8 = il2cpp_runtime_helper_0233e000(uVar15,(__this_00->klass->_1).image);
  if (cVar8 != '\0') {
    pSVar5 = __this_00->klass;
    __cxa_end_catch();
    if (pSVar5 != (System_Collections_Generic_List_object__c *)0x0) {
      pvVar6 = (pSVar5->_1).image;
      pSVar10 = (System_String_o *)
                (**(code **)((long)pvVar6 + 0x188))(pSVar5,*(undefined8 *)((long)pvVar6 + 400));
      pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Failed to load asset: ");
      pSVar16 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", ");
      pSVar10 = System_String__Concat_3af7470(pSVar12,pSVar18,pSVar16,pSVar10,(MethodInfo *)0x0);
      lVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
      if (*(int *)(lVar17 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar17);
      }
      ApplicationManagers_DebugConsole__Log(pSVar10,1,(MethodInfo *)0x0);
      lVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
      if (*(int *)(lVar17 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar17);
      }
      lVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
      __this_00 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar17 + 0xb8) + 0x78);
      pvVar6 = (pSVar5->_1).image;
      pSVar10 = (System_String_o *)
                (**(code **)((long)pvVar6 + 0x188))(pSVar5,*(undefined8 *)((long)pvVar6 + 400));
      pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Failed to load asset: ");
      pSVar16 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", ");
      pSVar18 = System_String__Concat_3af7470(pSVar12,pSVar18,pSVar16,pSVar10,(MethodInfo *)0x0);
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
        lVar17 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar7 = (__this_00->fields)._items;
        if (pSVar7 != (System_Object_array *)0x0) {
          uVar3 = (__this_00->fields)._size;
          if (uVar3 < (uint)pSVar7->max_length) {
            (__this_00->fields)._size = uVar3 + 1;
            pSVar7->m_Items[(int)uVar3] = (Il2CppObject *)pSVar18;
            il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)pSVar18,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
          uVar15 = il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
          pMVar14 = (Map_MapObject_o *)il2cpp_runtime_helper_023052d0(uVar15);
          UnityEngine_GameObject___ctor_4dfc3c0((UnityEngine_GameObject_o *)pMVar14,(MethodInfo *)0x0);
          return pMVar14;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  puVar19 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar19 = __this_00->klass;
  __cxa_throw(puVar19,&PTR_PTR_05215060,0);
}


// Map.MapLoader$$LoadSceneObject
// il2cpp: UnityEngine_GameObject_o* Map_MapLoader__LoadSceneObject (Map_MapScriptSceneObject_o* obj, bool editor, const MethodInfo* method);
// 0x40a5ba0

UnityEngine_GameObject_o *
Map_MapLoader__LoadSceneObject(Map_MapScriptSceneObject_o *obj,bool_conflict editor,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  uint key;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *physicsMaterial;
  Map_MapScriptBaseMaterial_o *material;
  long lVar5;
  Il2CppClass *__this;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *obj_00;
  bool_conflict bVar6;
  int32_t iVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_GameObject_o *extraout_RAX;
  undefined4 extraout_var;
  System_Collections_Generic_Dictionary_int__object__o *pSVar10;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  UnityEngine_GameObject_o *extraout_RAX_00;
  UnityEngine_Transform_o *p;
  System_Collections_Generic_HashSet_int__o *__this_00;
  undefined4 extraout_var_02;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  UnityEngine_GameObject_o *extraout_RAX_01;
  UnityEngine_GameObject_o *extraout_RAX_02;
  UnityEngine_GameObject_o *extraout_RAX_03;
  undefined4 in_register_00000034;
  Map_MapScriptSceneObject_o *value;
  MethodInfo *pMVar11;
  Map_MapScriptSceneObject_o *pMVar12;
  Map_MapScriptSceneObject_o *pMVar13;
  Map_MapScriptSceneObject_o *__this_02;
  System_Collections_Generic_Dictionary_int__object__o *__this_03;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  UnityEngine_Quaternion_o value_00;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o value_01;
  
  value = (Map_MapScriptSceneObject_o *)CONCAT44(in_register_00000034,editor);
  pMVar12 = obj;
  if (g_data_057ac4b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SphereCollider_AddComponent_SphereCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    pMVar12 = (Map_MapScriptSceneObject_o *)&"None";
    il2cpp_runtime_helper_023445d0();
    g_data_057ac4b0 = '\x01';
  }
  if (obj != (Map_MapScriptSceneObject_o *)0x0) {
    pMVar11 = "None";
    bVar6 = System_String__op_Equality((obj->fields).Asset,(System_String_o *)"None",(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      pSVar3 = (obj->fields).Asset;
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar8 = Map_MapLoader__LoadPrefabCached(pSVar3,pMVar11);
    }
    else {
      pUVar8 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc3c0(pUVar8,(MethodInfo *)0x0);
    }
    if ((char)editor == '\0') {
      pSVar3 = *(System_String_o **)&(obj->fields).ScaleZ;
      pSVar4 = (obj->fields).CollideMode;
      physicsMaterial = (obj->fields).CollideWith;
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapLoader__SetPhysics(pUVar8,pSVar3,pSVar4,physicsMaterial,in_R8);
    }
    else {
      if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar11 = (MethodInfo *)**(undefined8 **)(TypeInfo_MapObjectCollideMode + 0xb8);
      if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x40);
      pSVar4 = (obj->fields).CollideWith;
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar7 = Map_MapLoader__SetPhysics(pUVar8,(System_String_o *)pMVar11,pSVar3,pSVar4,in_R8);
      if (iVar7 == 0) {
        if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Map_MapLoader__TryAddEditorCollider(pUVar8,pMVar11);
      }
    }
    pSVar3 = (obj->fields).Asset;
    material = (Map_MapScriptBaseMaterial_o *)(obj->fields).PhysicsMaterial;
    bVar1 = *(byte *)((long)&(obj->fields).Active + 2);
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Map_MapLoader__SetMaterial(pUVar8,pSVar3,material,(uint)bVar1,editor & 0xff,in_R9);
    return pUVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar13 = pMVar12;
  if ((pMVar12 != (Map_MapScriptSceneObject_o *)0x0) &&
     (__this_02 = (Map_MapScriptSceneObject_o *)(pMVar12->fields).Asset,
     __this_02 != (Map_MapScriptSceneObject_o *)0x0)) {
    lVar5 = *(long *)&(pMVar12->fields).Id;
    value = (Map_MapScriptSceneObject_o *)0x0;
    pMVar13 = __this_02;
    pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_02,(MethodInfo *)0x0);
    if (lVar5 != 0) {
      UnityEngine_GameObject__set_isStatic
                ((UnityEngine_GameObject_o *)__this_02,(uint)*(byte *)(lVar5 + 0x29),(MethodInfo *)0x0);
      value = *(Map_MapScriptSceneObject_o **)(lVar5 + 0x30);
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)__this_02,(System_String_o *)value,(MethodInfo *)0x0);
      pMVar13 = __this_02;
      if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_position
                  (pUVar9,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(lVar5 + 0x38),
                   (MethodInfo *)0x0);
        UVar14.fields.x = (float)*(undefined8 *)(lVar5 + 0x44) * 0.017453292;
        UVar14.fields.y = (float)((ulong)*(undefined8 *)(lVar5 + 0x44) >> 0x20) * 0.017453292;
        UVar14.fields.z = *(float *)(lVar5 + 0x4c) * 0.017453292;
        value_00 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar14,(MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation(pUVar9,value_00,(MethodInfo *)0x0);
        UVar14 = UnityEngine_Transform__get_localScale(pUVar9,(MethodInfo *)0x0);
        (pMVar12->fields).Active = (bool_conflict)UVar14.fields.x;
        (pMVar12->fields).Static = (bool_conflict)UVar14.fields.y;
        (pMVar12->fields).Visible = (bool_conflict)UVar14.fields.z;
        value_01.fields.x = UVar14.fields.x * (float)*(undefined8 *)(lVar5 + 0x50);
        value_01.fields.y = UVar14.fields.y * (float)((ulong)*(undefined8 *)(lVar5 + 0x50) >> 0x20);
        value_01.fields.z = UVar14.fields.z * *(float *)(lVar5 + 0x58);
        UnityEngine_Transform__set_localScale(pUVar9,value_01,(MethodInfo *)0x0);
        return extraout_RAX;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac49f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac49f = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_03 = TypeInfo_MapLoader;
  if ((pMVar13 != (Map_MapScriptSceneObject_o *)0x0) &&
     (pSVar10 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor, __this_03 = pSVar10,
     pSVar10 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar10,*(int32_t *)&(pMVar13->fields).Type,MethodInfo_Boolean_ContainsKey);
    pUVar8 = (UnityEngine_GameObject_o *)CONCAT44(extraout_var,bVar6);
    if ((char)bVar6 == '\0') goto label_040a5fd3;
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_03 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
    if (__this_03 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      pSVar10 = (System_Collections_Generic_Dictionary_int__object__o *)
                System_Collections_Generic_Dictionary_int__object___get_Item
                          (__this_03,*(int32_t *)&(pMVar13->fields).Type,MethodInfo_HashSet_1_System_Int32_get_Item);
      lVar5 = *(long *)&(pMVar13->fields).Id;
      if ((lVar5 != 0) && (pSVar10 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
        bVar6 = System_Collections_Generic_HashSet_int___Contains
                          ((System_Collections_Generic_HashSet_int__o *)pSVar10,*(int32_t *)(lVar5 + 0x20),
                           MethodInfo_Boolean_Contains);
        pUVar8 = (UnityEngine_GameObject_o *)CONCAT44(extraout_var_00,bVar6);
        if ((char)bVar6 == '\0') {
label_040a5fd3:
          if (value == (Map_MapScriptSceneObject_o *)0x0) {
            *(undefined4 *)&(pMVar13->fields).Type = 0;
            __this_03 = (System_Collections_Generic_Dictionary_int__object__o *)(pMVar13->fields).Asset;
            if ((__this_03 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
               (pUVar9 = UnityEngine_GameObject__get_transform
                                   ((UnityEngine_GameObject_o *)__this_03,(MethodInfo *)0x0),
               pUVar9 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent(pUVar9,(UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
              return extraout_RAX_00;
            }
          }
          else {
            if (pMVar13 == value) {
              return pUVar8;
            }
            pUVar8 = *(UnityEngine_GameObject_o **)&(pMVar13->fields).Id;
            __this_03 = pSVar10;
            if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
              if (*(int *)&(value->fields).Type == *(int *)&pUVar8[1].monitor) {
                return pUVar8;
              }
              lVar5 = *(long *)&(value->fields).Id;
              if (lVar5 != 0) {
                *(undefined4 *)&(pMVar13->fields).Type = *(undefined4 *)(lVar5 + 0x20);
                pSVar3 = (pMVar13->fields).Asset;
                __this_03 = (System_Collections_Generic_Dictionary_int__object__o *)0x0;
                if (pSVar3 != (System_String_o *)0x0) {
                  pUVar9 = UnityEngine_GameObject__get_transform
                                     ((UnityEngine_GameObject_o *)pSVar3,(MethodInfo *)0x0);
                  __this_03 = (System_Collections_Generic_Dictionary_int__object__o *)(value->fields).Asset;
                  if ((__this_03 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                     (p = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)__this_03,(MethodInfo *)0x0),
                     pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                    UnityEngine_Transform__SetParent(pUVar9,p,(MethodInfo *)0x0);
                    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar10 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
                    __this_03 = (System_Collections_Generic_Dictionary_int__object__o *)0x0;
                    if (pSVar10 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                      bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                        (pSVar10,*(int32_t *)&(pMVar13->fields).Type,MethodInfo_Boolean_ContainsKey);
                      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pSVar10 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
                      iVar7 = *(int32_t *)&(pMVar13->fields).Type;
                      if ((char)bVar6 == '\0') {
                        __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
                                    il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_int);
                        __this_03 = __this_01;
                        System_Collections_Generic_HashSet_int____ctor
                                  ((System_Collections_Generic_HashSet_int__o *)__this_01,MethodInfo_HashSet_1_System_Int32);
                        lVar5 = *(long *)&(pMVar13->fields).Id;
                        if (((lVar5 != 0) &&
                            (__this_01 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) &&
                           (__this_03 = __this_01,
                           System_Collections_Generic_HashSet_int___Add
                                     ((System_Collections_Generic_HashSet_int__o *)__this_01,
                                      *(int32_t *)(lVar5 + 0x20),MethodInfo_Boolean_Add),
                           pSVar10 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
                          System_Collections_Generic_Dictionary_int__object___Add
                                    (pSVar10,iVar7,(Il2CppObject *)__this_01,MethodInfo_Void_Add);
                          return extraout_RAX_01;
                        }
                      }
                      else {
                        __this_03 = TypeInfo_MapLoader;
                        if (pSVar10 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                          __this_00 = (System_Collections_Generic_HashSet_int__o *)
                                      System_Collections_Generic_Dictionary_int__object___get_Item
                                                (pSVar10,iVar7,MethodInfo_HashSet_1_System_Int32_get_Item);
                          lVar5 = *(long *)&(pMVar13->fields).Id;
                          __this_03 = pSVar10;
                          if ((lVar5 != 0) && (__this_00 != (System_Collections_Generic_HashSet_int__o *)0x0))
                          {
                            bVar6 = System_Collections_Generic_HashSet_int___Add
                                              (__this_00,*(int32_t *)(lVar5 + 0x20),MethodInfo_Boolean_Add);
                            return (UnityEngine_GameObject_o *)CONCAT44(extraout_var_02,bVar6);
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
        else {
          if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_03 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
          if (__this_03 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            pSVar10 = (System_Collections_Generic_Dictionary_int__object__o *)
                      System_Collections_Generic_Dictionary_int__object___get_Item
                                (__this_03,*(int32_t *)&(pMVar13->fields).Type,MethodInfo_HashSet_1_System_Int32_get_Item);
            lVar5 = *(long *)&(pMVar13->fields).Id;
            if ((lVar5 != 0) && (pSVar10 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
              bVar6 = System_Collections_Generic_HashSet_int___Remove
                                ((System_Collections_Generic_HashSet_int__o *)pSVar10,
                                 *(int32_t *)(lVar5 + 0x20),MethodInfo_Boolean_Remove);
              pUVar8 = (UnityEngine_GameObject_o *)CONCAT44(extraout_var_01,bVar6);
              goto label_040a5fd3;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac4a0 = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (((__this_03 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
      (lVar5 = *(long *)&(__this_03->fields)._count, lVar5 != 0)) &&
     (__this = ((TypeInfo_MapLoader[2].fields._entries)->obj).klass, __this != (Il2CppClass *)0x0)) {
    key = *(uint *)(lVar5 + 0x20);
    pMVar11 = (MethodInfo *)(ulong)key;
    bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_int__object__o *)__this,key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar6 == '\0') goto label_040a6341;
    lVar5 = *(long *)&(__this_03->fields)._count;
    if (lVar5 != 0) {
      iVar7 = *(int32_t *)(lVar5 + 0x20);
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapLoader__DeleteObject_3fa6370(iVar7,pMVar11);
      return extraout_RAX_02;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040a6341:
  obj_00 = (__this_03->fields)._entries;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)obj_00,(MethodInfo *)0x0);
  return extraout_RAX_03;
}


// Map.MapLoader$$TryAddEditorCollider
// il2cpp: bool Map_MapLoader__TryAddEditorCollider (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x40ab9f0

bool_conflict Map_MapLoader__TryAddEditorCollider(UnityEngine_GameObject_o *go,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector2_o value;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  UnityEngine_Matrix4x4_o lhs;
  UnityEngine_Matrix4x4_o __this_08;
  UnityEngine_Matrix4x4_o __this_09;
  UnityEngine_Matrix4x4_o __this_10;
  UnityEngine_Matrix4x4_o __this_11;
  UnityEngine_Matrix4x4_o rhs;
  System_RuntimeTypeHandle_o handle;
  char cVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  bool_conflict extraout_EAX;
  uint uVar13;
  bool_conflict extraout_EAX_00;
  System_Object_array *pSVar14;
  Il2CppRGCTXData *pIVar15;
  UnityEngine_GameObject_o *__this_12;
  UnityEngine_MeshCollider_o *__this_13;
  UnityEngine_Mesh_o *value_00;
  undefined8 extraout_RAX;
  System_Object_array *pSVar16;
  UnityEngine_Transform_o *pUVar17;
  MapEditor_EditorGizmoIcon_o *__this_14;
  undefined8 extraout_RAX_00;
  undefined8 uVar18;
  UnityEngine_BoxCollider_o *__this_15;
  undefined8 extraout_RAX_01;
  System_String_o *pSVar19;
  System_Collections_Generic_List_object__o *__this_16;
  System_String_o **__this_17;
  System_Collections_Generic_Dictionary_object__object__o *pSVar20;
  Il2CppClass *pIVar21;
  UnityEngine_Object_o *x;
  UnityEngine_Renderer_o *pUVar22;
  UnityEngine_Material_o *value_01;
  long *x_00;
  System_Type_o *pSVar23;
  System_Type_o *pSVar24;
  System_String_array *pSVar25;
  Il2CppObject *pIVar26;
  UnityEngine_Texture_o *value_02;
  long *plVar27;
  MethodInfo_255A020 **in_RCX;
  Il2CppRGCTXData *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *pMVar28;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  int iVar29;
  Il2CppRGCTXData *unaff_RBX;
  long lVar30;
  uint uVar31;
  Il2CppRGCTXData *unaff_RBP;
  void **ppvVar32;
  Il2CppRGCTXData *pIVar33;
  undefined4 in_R8D;
  Il2CppRGCTXData *unaff_R12;
  System_String_o **__this_18;
  long *plVar34;
  UnityEngine_GameObject_o *pUVar35;
  long *plVar36;
  long *unaff_R14;
  System_Object_array *unaff_R15;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  float fVar41;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar48;
  float fVar49;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  UnityEngine_Color_o UVar58;
  undefined1 auVar59 [12];
  UnityEngine_Vector3_o point;
  UnityEngine_Vector3_o point_00;
  UnityEngine_Vector3_o point_01;
  UnityEngine_Vector3_o value_03;
  UnityEngine_Vector3_o value_04;
  undefined8 in_stack_fffffffffffffc90;
  Il2CppRGCTXData *in_stack_fffffffffffffc98;
  undefined4 in_stack_fffffffffffffca0;
  uint in_stack_fffffffffffffca4;
  Il2CppRGCTXData *pIStack_358;
  Il2CppRGCTXData *pIStack_350;
  Il2CppClass *pIStack_348;
  Il2CppRGCTXData IStack_340;
  undefined8 uStack_338;
  Il2CppRGCTXData *pIStack_330;
  Il2CppRGCTXData IStack_320;
  undefined8 uStack_318;
  Il2CppRGCTXData *pIStack_310;
  Il2CppRGCTXData IStack_300;
  undefined8 uStack_2f8;
  Il2CppRGCTXData *pIStack_2f0;
  Il2CppRGCTXData *pIStack_2e8;
  Il2CppRGCTXData IStack_2e0;
  undefined8 uStack_2d8;
  Il2CppRGCTXData *pIStack_2c8;
  Il2CppRGCTXData *pIStack_2c0;
  UnityEngine_GameObject_o *pUStack_2b8;
  long *plStack_2b0;
  System_Object_array *pSStack_2a8;
  Il2CppRGCTXData *pIStack_2a0;
  Il2CppRGCTXData IVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  float local_210;
  undefined1 local_208 [8];
  float fStack_200;
  float fStack_1fc;
  undefined1 local_1f8 [8];
  float fStack_1f0;
  float fStack_1ec;
  float local_1e0;
  undefined1 local_1d8 [8];
  float fStack_1d0;
  float fStack_1cc;
  undefined1 local_1c8 [8];
  float fStack_1c0;
  float fStack_1bc;
  float local_198;
  Il2CppRGCTXData local_178;
  undefined8 uStack_170;
  float local_168;
  float fStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  Il2CppRGCTXData local_138;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  Il2CppRGCTXData local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float local_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  Il2CppRGCTXData local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  UnityEngine_Vector3_o UVar60;
  
  plVar27 = (long *)go;
  if (g_data_057ac4b1 == '\0') {
    pIStack_2a0 = (Il2CppRGCTXData *)0x40aba19;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BoxCollider_AddComponent_BoxCollider);
    pIStack_2a0 = (Il2CppRGCTXData *)0x40aba25;
    il2cpp_runtime_helper_023445d0(&MethodInfo_EditorGizmoIcon_AddComponent_EditorGizmoIcon);
    pIStack_2a0 = (Il2CppRGCTXData *)0x40aba31;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshCollider_AddComponent_MeshCollider);
    pIStack_2a0 = (Il2CppRGCTXData *)0x40aba3d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_GetComponentInChildren_ParticleSystem);
    pIStack_2a0 = (Il2CppRGCTXData *)0x40aba49;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
    pIStack_2a0 = (Il2CppRGCTXData *)0x40aba55;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    pIStack_2a0 = (Il2CppRGCTXData *)0x40aba61;
    il2cpp_runtime_helper_023445d0(&TypeInfo_LineRenderer);
    pIStack_2a0 = (Il2CppRGCTXData *)0x40aba6d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    ppvVar32 = &TypeInfo_TrailRenderer;
    pIStack_2a0 = (Il2CppRGCTXData *)0x40aba79;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac4b1 = '\x01';
    plVar27 = (long *)ppvVar32;
  }
  cVar10 = (char)in_R8D;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8.rgctxDataDummy = (void *)0x0;
  uStack_d0 = 0;
  pUVar35 = go;
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pIStack_2a0 = (Il2CppRGCTXData *)0x40ababe;
    unaff_RBX = (Il2CppRGCTXData *)UnityEngine_GameObject__GetComponentInChildren_object_(go,MethodInfo_ParticleSystem_GetComponentInChildren_ParticleSystem);
    unaff_R14 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pIStack_2a0 = (Il2CppRGCTXData *)0x40abad9;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_2a0 = (Il2CppRGCTXData *)0x40abae5;
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    cVar10 = (char)in_R8D;
    pSVar14 = unaff_R15;
    if ((char)bVar11 == '\0') {
      pIStack_2a0 = (Il2CppRGCTXData *)0x40abaff;
      method = (MethodInfo *)MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter;
      plVar27 = (long *)go;
      pSVar14 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                          (go,(MethodInfo_255AB00 *)MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
      cVar10 = (char)in_R8D;
      if (pSVar14 != (System_Object_array *)0x0) {
        iVar29 = (int)pSVar14->max_length;
        unaff_R15 = pSVar14;
        if (0 < iVar29) {
          unaff_RBX = (Il2CppRGCTXData *)0x0;
          pUStack_2b8 = go;
          if (iVar29 != 0) {
            do {
              cVar10 = (char)in_R8D;
              unaff_RBP = (Il2CppRGCTXData *)pSVar14->m_Items[(int)unaff_RBX];
              if (unaff_RBP == (Il2CppRGCTXData *)0x0) goto label_040ac502;
              pIStack_2a0 = (Il2CppRGCTXData *)0x40abb62;
              unaff_R12 = (Il2CppRGCTXData *)
                          UnityEngine_MeshFilter__get_sharedMesh
                                    ((UnityEngine_MeshFilter_o *)unaff_RBP,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pIStack_2a0 = (Il2CppRGCTXData *)0x40abb76;
                il2cpp_runtime_helper_02337ed0();
              }
              method = (MethodInfo *)0x0;
              pIStack_2a0 = (Il2CppRGCTXData *)0x40abb82;
              plVar27 = (long *)unaff_R12;
              bVar11 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar11 != '\0') {
                method = (MethodInfo *)0x0;
                pIStack_2a0 = (Il2CppRGCTXData *)0x40abb90;
                plVar27 = (long *)unaff_RBP;
                pIVar15 = (Il2CppRGCTXData *)
                          UnityEngine_MeshFilter__get_sharedMesh
                                    ((UnityEngine_MeshFilter_o *)unaff_RBP,(MethodInfo *)0x0);
                cVar10 = (char)in_R8D;
                if (pIVar15 == (Il2CppRGCTXData *)0x0) goto label_040ac502;
                method = (MethodInfo *)0x0;
                pIStack_2a0 = (Il2CppRGCTXData *)0x40abba3;
                iVar12 = UnityEngine_Mesh__get_vertexCount((UnityEngine_Mesh_o *)pIVar15,(MethodInfo *)0x0);
                cVar10 = (char)in_R8D;
                plVar27 = (long *)pIVar15;
                if (0 < iVar12) {
                  method = (MethodInfo *)0x0;
                  pIStack_2a0 = (Il2CppRGCTXData *)0x40abbb1;
                  plVar27 = (long *)unaff_RBP;
                  __this_12 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)unaff_RBP,(MethodInfo *)0x0);
                  if (__this_12 == (UnityEngine_GameObject_o *)0x0) goto label_040ac502;
                  in_RCX = &MethodInfo_MeshCollider_AddComponent_MeshCollider;
                  pIStack_2a0 = (Il2CppRGCTXData *)0x40abbcc;
                  __this_13 = (UnityEngine_MeshCollider_o *)
                              UnityEngine_GameObject__AddComponent_object_(__this_12,MethodInfo_MeshCollider_AddComponent_MeshCollider);
                  method = (MethodInfo *)0x0;
                  pIStack_2a0 = (Il2CppRGCTXData *)0x40abbd9;
                  plVar27 = (long *)unaff_RBP;
                  value_00 = UnityEngine_MeshFilter__get_sharedMesh
                                       ((UnityEngine_MeshFilter_o *)unaff_RBP,(MethodInfo *)0x0);
                  unaff_RBX = (Il2CppRGCTXData *)0x0;
                  if (__this_13 == (UnityEngine_MeshCollider_o *)0x0) goto label_040ac502;
                  pIStack_2a0 = (Il2CppRGCTXData *)0x40abbef;
                  UnityEngine_MeshCollider__set_sharedMesh(__this_13,value_00,(MethodInfo *)0x0);
                  uVar18 = extraout_RAX;
                  goto label_040ac479;
                }
              }
              cVar10 = (char)in_R8D;
              uVar13 = (int)unaff_RBX + 1;
              unaff_RBX = (Il2CppRGCTXData *)(ulong)uVar13;
              uVar31 = (uint)pSVar14->max_length;
              if ((int)uVar31 <= (int)uVar13) goto label_040abbf4;
            } while (uVar13 < uVar31);
          }
          goto label_040ac507;
        }
label_040abbf4:
        pIStack_2a0 = (Il2CppRGCTXData *)0x40abc06;
        method = (MethodInfo *)MethodInfo_Renderer_GetComponentsInChildren_Renderer;
        plVar27 = (long *)go;
        pSVar16 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                            (go,(MethodInfo_255AB00 *)MethodInfo_Renderer_GetComponentsInChildren_Renderer);
        cVar10 = (char)in_R8D;
        if (pSVar16 != (System_Object_array *)0x0) {
          in_RCX = (MethodInfo_255A020 **)pSVar16->max_length;
          if ((in_RCX != (MethodInfo_255A020 **)0x0) && (0 < (int)in_RCX)) {
            fVar44 = 0.0;
            fVar48 = 0.0;
            fVar49 = 0.0;
            fVar50 = 0.0;
            unaff_R14 = (long *)0x0;
            unaff_RBP = &local_178;
            unaff_RBX = &local_d8;
            pSVar14 = (System_Object_array *)0x0;
            fVar42 = 0.0;
            local_210 = 0.0;
            fVar37 = 0.0;
            fVar39 = 0.0;
            fVar40 = 0.0;
            fVar41 = 0.0;
            pUStack_2b8 = (UnityEngine_GameObject_o *)&TypeInfo_Vector3;
            if ((int)in_RCX != 0) {
              do {
                cVar10 = (char)in_R8D;
                unaff_RBP = &local_178;
                in_RCX = (MethodInfo_255A020 **)(long)(int)pSVar14;
                unaff_R12 = (Il2CppRGCTXData *)pSVar16->m_Items[(long)in_RCX];
                pUVar35 = (UnityEngine_GameObject_o *)&TypeInfo_Vector3;
                unaff_R15 = pSVar14;
                if (unaff_R12 == (Il2CppRGCTXData *)0x0) goto label_040ac502;
                if ((unaff_R12->rgctxDataDummy != TypeInfo_TrailRenderer) &&
                   (ppvVar32 = &TypeInfo_LineRenderer, unaff_R12->rgctxDataDummy != TypeInfo_LineRenderer)) {
                  plVar27 = (long *)&local_138;
                  pIStack_2a0 = (Il2CppRGCTXData *)0x40abd0a;
                  method = (MethodInfo *)unaff_R12;
                  UnityEngine_Renderer__get_localBounds
                            ((UnityEngine_Bounds_o *)plVar27,(UnityEngine_Renderer_o *)unaff_R12,
                             (MethodInfo *)0x0);
                  fVar57 = fStack_124;
                  fVar9 = fStack_128;
                  fVar38 = fStack_130;
                  if ((0.0 < fStack_124 * fStack_124 + fStack_128 * fStack_128 + fStack_12c * fStack_12c) &&
                     (((uint)fStack_12c & 0x7f800000) != 0x7f800000)) {
                    uStack_e0 = 0;
                    local_f8 = local_138;
                    uStack_f0 = 0;
                    method = (MethodInfo *)0x0;
                    pIStack_2a0 = (Il2CppRGCTXData *)0x40abdab;
                    plVar27 = (long *)go;
                    local_e8 = CONCAT44(fStack_128,fStack_12c);
                    pUVar17 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
                    cVar10 = (char)in_R8D;
                    in_RCX = ppvVar32;
                    pUVar35 = (UnityEngine_GameObject_o *)&TypeInfo_Vector3;
                    if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_040ac502;
                    pIStack_2a0 = (Il2CppRGCTXData *)0x40abdc1;
                    UnityEngine_Transform__get_worldToLocalMatrix
                              ((UnityEngine_Matrix4x4_o *)unaff_RBP,pUVar17,(MethodInfo *)0x0);
                    local_108 = local_148;
                    uStack_100 = uStack_140;
                    local_118 = local_158;
                    uStack_110 = uStack_150;
                    fStack_128 = local_168;
                    fStack_124 = fStack_164;
                    uStack_120 = uStack_160;
                    uStack_11c = uStack_15c;
                    local_138.rgctxDataDummy = local_178.rgctxDataDummy;
                    fStack_130 = (float)uStack_170;
                    fStack_12c = (float)((ulong)uStack_170 >> 0x20);
                    method = (MethodInfo *)0x0;
                    pIStack_2a0 = (Il2CppRGCTXData *)0x40abe0b;
                    plVar27 = (long *)unaff_R12;
                    pUVar17 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)unaff_R12,(MethodInfo *)0x0);
                    cVar10 = (char)in_R8D;
                    in_RCX = ppvVar32;
                    pUVar35 = (UnityEngine_GameObject_o *)&TypeInfo_Vector3;
                    if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_040ac502;
                    pIStack_2a0 = (Il2CppRGCTXData *)0x40abe21;
                    UnityEngine_Transform__get_localToWorldMatrix
                              ((UnityEngine_Matrix4x4_o *)unaff_RBP,pUVar17,(MethodInfo *)0x0);
                    rhs.fields.m11 = fStack_164;
                    rhs.fields.m01 = local_168;
                    rhs.fields.m31 = (float)uStack_15c;
                    rhs.fields.m21 = (float)uStack_160;
                    local_48 = local_148;
                    uStack_40 = uStack_140;
                    local_58 = local_158;
                    uStack_50 = uStack_150;
                    local_78.rgctxDataDummy = local_178.rgctxDataDummy;
                    uStack_70 = uStack_170;
                    uVar18 = CONCAT44(fStack_12c,fStack_130);
                    uVar62 = CONCAT44(fStack_124,fStack_128);
                    uVar63 = CONCAT44(uStack_11c,uStack_120);
                    pIStack_2a0 = (Il2CppRGCTXData *)0x40abed2;
                    lhs.fields.m20 = fStack_130;
                    lhs.fields.m30 = fStack_12c;
                    lhs.fields._0_8_ = local_138.rgctxDataDummy;
                    lhs.fields.m01 = fStack_128;
                    lhs.fields.m11 = fStack_124;
                    lhs.fields.m21 = (float)uStack_120;
                    lhs.fields.m31 = (float)uStack_11c;
                    lhs.fields.m02 = (float)(undefined4)local_118;
                    lhs.fields.m12 = (float)local_118._4_4_;
                    lhs.fields.m22 = (float)(undefined4)uStack_110;
                    lhs.fields.m32 = (float)uStack_110._4_4_;
                    lhs.fields.m03 = (float)(undefined4)local_108;
                    lhs.fields.m13 = (float)local_108._4_4_;
                    lhs.fields.m23 = (float)(undefined4)uStack_100;
                    lhs.fields.m33 = (float)uStack_100._4_4_;
                    rhs.fields.m20 = (float)(undefined4)uStack_170;
                    rhs.fields.m30 = (float)uStack_170._4_4_;
                    rhs.fields._0_8_ = local_178.rgctxDataDummy;
                    rhs.fields.m02 = (float)(undefined4)local_158;
                    rhs.fields.m12 = (float)local_158._4_4_;
                    rhs.fields.m22 = (float)(undefined4)uStack_150;
                    rhs.fields.m32 = (float)uStack_150._4_4_;
                    rhs.fields.m03 = (float)(undefined4)local_148;
                    rhs.fields.m13 = (float)local_148._4_4_;
                    rhs.fields.m23 = (float)(undefined4)uStack_140;
                    rhs.fields.m33 = (float)uStack_140._4_4_;
                    IVar61 = local_138;
                    uVar64 = local_118;
                    uVar65 = uStack_110;
                    uVar66 = local_108;
                    uVar67 = uStack_100;
                    UnityEngine_Matrix4x4__op_Multiply
                              ((UnityEngine_Matrix4x4_o *)unaff_RBP,lhs,rhs,(MethodInfo *)0x0);
                    local_c8 = CONCAT44(fStack_164,local_168);
                    uStack_c0 = CONCAT44(uStack_15c,uStack_160);
                    local_a8 = local_148;
                    uStack_a0 = uStack_140;
                    local_b8 = local_158;
                    uStack_b0 = uStack_150;
                    local_d8.rgctxDataDummy = local_178.rgctxDataDummy;
                    uStack_d0 = uStack_170;
                    local_98 = local_f8._4_4_ - fVar9;
                    fStack_94 = local_f8._4_4_;
                    uStack_90 = (undefined4)uStack_f0;
                    uStack_8c = uStack_f0._4_4_;
                    fVar43 = fVar38 - fVar57;
                    fVar38 = fVar38 + fVar57;
                    local_88 = local_f8._4_4_ + fVar9;
                    fStack_84 = local_f8._4_4_;
                    uStack_80 = (undefined4)uStack_f0;
                    uStack_7c = uStack_f0._4_4_;
                    uVar31 = 0xffffffff;
                    do {
                      fVar9 = local_98;
                      point.fields.x = (float)(int)uVar31 * (float)local_e8 + (float)local_f8;
                      pIStack_2a0 = (Il2CppRGCTXData *)0x40ac07c;
                      __this_08.fields.m20 = (float)(int)uVar18;
                      __this_08.fields.m30 = (float)(int)((ulong)uVar18 >> 0x20);
                      __this_08.fields._0_8_ = IVar61.rgctxDataDummy;
                      __this_08.fields.m01 = (float)(int)uVar62;
                      __this_08.fields.m11 = (float)(int)((ulong)uVar62 >> 0x20);
                      __this_08.fields.m21 = (float)(int)uVar63;
                      __this_08.fields.m31 = (float)(int)((ulong)uVar63 >> 0x20);
                      __this_08.fields.m02 = (float)(int)uVar64;
                      __this_08.fields.m12 = (float)(int)((ulong)uVar64 >> 0x20);
                      __this_08.fields.m22 = (float)(int)uVar65;
                      __this_08.fields.m32 = (float)(int)((ulong)uVar65 >> 0x20);
                      __this_08.fields.m03 = (float)(int)uVar66;
                      __this_08.fields.m13 = (float)(int)((ulong)uVar66 >> 0x20);
                      __this_08.fields.m23 = (float)(int)uVar67;
                      __this_08.fields.m33 = (float)(int)((ulong)uVar67 >> 0x20);
                      point.fields.y = local_98;
                      point.fields.z = fVar43;
                      UVar60 = UnityEngine_Matrix4x4__MultiplyPoint3x4
                                         (__this_08,point,(MethodInfo *)unaff_RBX);
                      local_1e0 = UVar60.fields.z;
                      uVar1 = UVar60.fields._0_8_;
                      if (unaff_R14 == (long *)0x0) {
                        fStack_1c0 = (float)extraout_XMM0_Dc;
                        local_1c8 = (undefined1  [8])uVar1;
                        fStack_1bc = (float)extraout_XMM0_Dd;
                        if (g_data_057a65d5 == '\0') {
                          pIStack_2a0 = (Il2CppRGCTXData *)0x40ac0a4;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                          g_data_057a65d5 = '\x01';
                        }
                        uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                        local_1f8._4_4_ = (float)((ulong)uVar1 >> 0x20) * 0.5;
                        local_1f8._0_4_ = (float)uVar1 * 0.5;
                        _fStack_1f0 = 0;
                        local_210 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1) * 0.5;
                        unaff_R14 = (long *)0x1;
                      }
                      else {
                        auVar46._0_4_ = fVar37 - fVar44;
                        auVar46._4_4_ = fVar39 - fVar48;
                        auVar46._8_4_ = fVar40 - fVar49;
                        auVar46._12_4_ = fVar41 - fVar50;
                        auVar52._8_4_ = extraout_XMM0_Dc;
                        auVar52._0_8_ = uVar1;
                        auVar52._12_4_ = extraout_XMM0_Dd;
                        auVar52 = minps(auVar46,auVar52);
                        fVar57 = fVar42 - local_210;
                        if (local_1e0 <= fVar42 - local_210) {
                          fVar57 = local_1e0;
                        }
                        auVar53._0_4_ = fVar37 + fVar44;
                        auVar53._4_4_ = fVar39 + fVar48;
                        auVar53._8_4_ = fVar40 + fVar49;
                        auVar53._12_4_ = fVar41 + fVar50;
                        auVar8._8_4_ = extraout_XMM0_Dc;
                        auVar8._0_8_ = uVar1;
                        auVar8._12_4_ = extraout_XMM0_Dd;
                        auVar46 = maxps(auVar53,auVar8);
                        fVar40 = local_210 + fVar42;
                        if (local_210 + fVar42 <= local_1e0) {
                          fVar40 = local_1e0;
                        }
                        local_1f8._0_4_ = (auVar46._0_4_ - auVar52._0_4_) * 0.5;
                        local_1f8._4_4_ = (auVar46._4_4_ - auVar52._4_4_) * 0.5;
                        fStack_1f0 = (auVar46._8_4_ - auVar52._8_4_) * 0.0;
                        fStack_1ec = (auVar46._12_4_ - auVar52._12_4_) * 0.0;
                        local_210 = (fVar40 - fVar57) * 0.5;
                        local_1e0 = fVar57 + local_210;
                        local_1c8._4_4_ = auVar52._4_4_ + (float)local_1f8._4_4_;
                        local_1c8._0_4_ = auVar52._0_4_ + (float)local_1f8._0_4_;
                        fStack_1c0 = auVar52._8_4_ + fStack_1f0;
                        fStack_1bc = auVar52._12_4_ + fStack_1ec;
                      }
                      UVar60.fields.y = fVar9;
                      UVar60.fields.x = point.fields.x;
                      pIStack_2a0 = (Il2CppRGCTXData *)0x40ac18e;
                      __this_09.fields.m20 = (float)(int)uVar18;
                      __this_09.fields.m30 = (float)(int)((ulong)uVar18 >> 0x20);
                      __this_09.fields._0_8_ = IVar61.rgctxDataDummy;
                      __this_09.fields.m01 = (float)(int)uVar62;
                      __this_09.fields.m11 = (float)(int)((ulong)uVar62 >> 0x20);
                      __this_09.fields.m21 = (float)(int)uVar63;
                      __this_09.fields.m31 = (float)(int)((ulong)uVar63 >> 0x20);
                      __this_09.fields.m02 = (float)(int)uVar64;
                      __this_09.fields.m12 = (float)(int)((ulong)uVar64 >> 0x20);
                      __this_09.fields.m22 = (float)(int)uVar65;
                      __this_09.fields.m32 = (float)(int)((ulong)uVar65 >> 0x20);
                      __this_09.fields.m03 = (float)(int)uVar66;
                      __this_09.fields.m13 = (float)(int)((ulong)uVar66 >> 0x20);
                      __this_09.fields.m23 = (float)(int)uVar67;
                      __this_09.fields.m33 = (float)(int)((ulong)uVar67 >> 0x20);
                      UVar60.fields.z = fVar38;
                      UVar60 = UnityEngine_Matrix4x4__MultiplyPoint3x4
                                         (__this_09,UVar60,(MethodInfo *)unaff_RBX);
                      local_198 = UVar60.fields.z;
                      uVar1 = UVar60.fields._0_8_;
                      if (unaff_R14 == (long *)0x0) {
                        fStack_200 = (float)extraout_XMM0_Dc_00;
                        local_208 = (undefined1  [8])uVar1;
                        fStack_1fc = (float)extraout_XMM0_Dd_00;
                        if (g_data_057a65d5 == '\0') {
                          pIStack_2a0 = (Il2CppRGCTXData *)0x40ac1b6;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                          g_data_057a65d5 = '\x01';
                        }
                        uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                        local_1c8._4_4_ = (float)((ulong)uVar1 >> 0x20) * 0.5;
                        local_1c8._0_4_ = (float)uVar1 * 0.5;
                        _fStack_1c0 = 0;
                        local_210 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1) * 0.5;
                        unaff_R14 = (long *)0x1;
                      }
                      else {
                        auVar55._0_4_ = (float)local_1c8._0_4_ - (float)local_1f8._0_4_;
                        auVar55._4_4_ = (float)local_1c8._4_4_ - (float)local_1f8._4_4_;
                        auVar55._8_4_ = fStack_1c0 - fStack_1f0;
                        auVar55._12_4_ = fStack_1bc - fStack_1ec;
                        auVar6._8_4_ = extraout_XMM0_Dc_00;
                        auVar6._0_8_ = uVar1;
                        auVar6._12_4_ = extraout_XMM0_Dd_00;
                        auVar52 = minps(auVar55,auVar6);
                        fVar40 = local_1e0 - local_210;
                        if (local_198 <= local_1e0 - local_210) {
                          fVar40 = local_198;
                        }
                        auVar54._0_4_ = (float)local_1c8._0_4_ + (float)local_1f8._0_4_;
                        auVar54._4_4_ = (float)local_1c8._4_4_ + (float)local_1f8._4_4_;
                        auVar54._8_4_ = fStack_1c0 + fStack_1f0;
                        auVar54._12_4_ = fStack_1bc + fStack_1ec;
                        auVar7._8_4_ = extraout_XMM0_Dc_00;
                        auVar7._0_8_ = uVar1;
                        auVar7._12_4_ = extraout_XMM0_Dd_00;
                        auVar46 = maxps(auVar54,auVar7);
                        fVar41 = local_210 + local_1e0;
                        if (local_210 + local_1e0 <= local_198) {
                          fVar41 = local_198;
                        }
                        local_1c8._0_4_ = (auVar46._0_4_ - auVar52._0_4_) * 0.5;
                        local_1c8._4_4_ = (auVar46._4_4_ - auVar52._4_4_) * 0.5;
                        fStack_1c0 = (auVar46._8_4_ - auVar52._8_4_) * 0.0;
                        fStack_1bc = (auVar46._12_4_ - auVar52._12_4_) * 0.0;
                        local_210 = (fVar41 - fVar40) * 0.5;
                        local_198 = fVar40 + local_210;
                        local_208._4_4_ = auVar52._4_4_ + (float)local_1c8._4_4_;
                        local_208._0_4_ = auVar52._0_4_ + (float)local_1c8._0_4_;
                        fStack_200 = auVar52._8_4_ + fStack_1c0;
                        fStack_1fc = auVar52._12_4_ + fStack_1bc;
                      }
                      fVar41 = local_88;
                      pIStack_2a0 = (Il2CppRGCTXData *)0x40ac2b6;
                      __this_10.fields.m20 = (float)(int)uVar18;
                      __this_10.fields.m30 = (float)(int)((ulong)uVar18 >> 0x20);
                      __this_10.fields._0_8_ = IVar61.rgctxDataDummy;
                      __this_10.fields.m01 = (float)(int)uVar62;
                      __this_10.fields.m11 = (float)(int)((ulong)uVar62 >> 0x20);
                      __this_10.fields.m21 = (float)(int)uVar63;
                      __this_10.fields.m31 = (float)(int)((ulong)uVar63 >> 0x20);
                      __this_10.fields.m02 = (float)(int)uVar64;
                      __this_10.fields.m12 = (float)(int)((ulong)uVar64 >> 0x20);
                      __this_10.fields.m22 = (float)(int)uVar65;
                      __this_10.fields.m32 = (float)(int)((ulong)uVar65 >> 0x20);
                      __this_10.fields.m03 = (float)(int)uVar66;
                      __this_10.fields.m13 = (float)(int)((ulong)uVar66 >> 0x20);
                      __this_10.fields.m23 = (float)(int)uVar67;
                      __this_10.fields.m33 = (float)(int)((ulong)uVar67 >> 0x20);
                      point_00.fields.y = local_88;
                      point_00.fields.x = point.fields.x;
                      point_00.fields.z = fVar43;
                      UVar60 = UnityEngine_Matrix4x4__MultiplyPoint3x4
                                         (__this_10,point_00,(MethodInfo *)unaff_RBX);
                      fVar40 = UVar60.fields.z;
                      uVar1 = UVar60.fields._0_8_;
                      if (unaff_R14 == (long *)0x0) {
                        fStack_1d0 = (float)extraout_XMM0_Dc_01;
                        local_1d8 = (undefined1  [8])uVar1;
                        fStack_1cc = (float)extraout_XMM0_Dd_01;
                        if (g_data_057a65d5 == '\0') {
                          pIStack_2a0 = (Il2CppRGCTXData *)0x40ac2de;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                          g_data_057a65d5 = '\x01';
                        }
                        uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                        local_208._4_4_ = (float)((ulong)uVar1 >> 0x20) * 0.5;
                        local_208._0_4_ = (float)uVar1 * 0.5;
                        _fStack_200 = 0;
                        local_210 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1) * 0.5;
                        unaff_R14 = (long *)0x1;
                      }
                      else {
                        auVar47._0_4_ = (float)local_208._0_4_ - (float)local_1c8._0_4_;
                        auVar47._4_4_ = (float)local_208._4_4_ - (float)local_1c8._4_4_;
                        auVar47._8_4_ = fStack_200 - fStack_1c0;
                        auVar47._12_4_ = fStack_1fc - fStack_1bc;
                        auVar4._8_4_ = extraout_XMM0_Dc_01;
                        auVar4._0_8_ = uVar1;
                        auVar4._12_4_ = extraout_XMM0_Dd_01;
                        auVar52 = minps(auVar47,auVar4);
                        fVar37 = local_198 - local_210;
                        if (fVar40 <= local_198 - local_210) {
                          fVar37 = fVar40;
                        }
                        auVar56._0_4_ = (float)local_208._0_4_ + (float)local_1c8._0_4_;
                        auVar56._4_4_ = (float)local_208._4_4_ + (float)local_1c8._4_4_;
                        auVar56._8_4_ = fStack_200 + fStack_1c0;
                        auVar56._12_4_ = fStack_1fc + fStack_1bc;
                        auVar5._8_4_ = extraout_XMM0_Dc_01;
                        auVar5._0_8_ = uVar1;
                        auVar5._12_4_ = extraout_XMM0_Dd_01;
                        auVar46 = maxps(auVar56,auVar5);
                        fVar39 = local_210 + local_198;
                        if (local_210 + local_198 <= fVar40) {
                          fVar39 = fVar40;
                        }
                        local_208._0_4_ = (auVar46._0_4_ - auVar52._0_4_) * 0.5;
                        local_208._4_4_ = (auVar46._4_4_ - auVar52._4_4_) * 0.5;
                        fStack_200 = (auVar46._8_4_ - auVar52._8_4_) * 0.0;
                        fStack_1fc = (auVar46._12_4_ - auVar52._12_4_) * 0.0;
                        local_210 = (fVar39 - fVar37) * 0.5;
                        fVar40 = fVar37 + local_210;
                        local_1d8._4_4_ = auVar52._4_4_ + (float)local_208._4_4_;
                        local_1d8._0_4_ = auVar52._0_4_ + (float)local_208._0_4_;
                        fStack_1d0 = auVar52._8_4_ + fStack_200;
                        fStack_1cc = auVar52._12_4_ + fStack_1fc;
                      }
                      method = (MethodInfo *)0x0;
                      pIStack_2a0 = (Il2CppRGCTXData *)0x40ac3ce;
                      __this_11.fields.m20 = (float)(int)uVar18;
                      __this_11.fields.m30 = (float)(int)((ulong)uVar18 >> 0x20);
                      __this_11.fields._0_8_ = IVar61.rgctxDataDummy;
                      __this_11.fields.m01 = (float)(int)uVar62;
                      __this_11.fields.m11 = (float)(int)((ulong)uVar62 >> 0x20);
                      __this_11.fields.m21 = (float)(int)uVar63;
                      __this_11.fields.m31 = (float)(int)((ulong)uVar63 >> 0x20);
                      __this_11.fields.m02 = (float)(int)uVar64;
                      __this_11.fields.m12 = (float)(int)((ulong)uVar64 >> 0x20);
                      __this_11.fields.m22 = (float)(int)uVar65;
                      __this_11.fields.m32 = (float)(int)((ulong)uVar65 >> 0x20);
                      __this_11.fields.m03 = (float)(int)uVar66;
                      __this_11.fields.m13 = (float)(int)((ulong)uVar66 >> 0x20);
                      __this_11.fields.m23 = (float)(int)uVar67;
                      __this_11.fields.m33 = (float)(int)((ulong)uVar67 >> 0x20);
                      point_01.fields.z = fVar38;
                      point_01.fields.x = point.fields.x;
                      point_01.fields.y = fVar41;
                      plVar27 = (long *)unaff_RBX;
                      UVar60 = UnityEngine_Matrix4x4__MultiplyPoint3x4
                                         (__this_11,point_01,(MethodInfo *)unaff_RBX);
                      fVar42 = UVar60.fields.z;
                      fVar37 = UVar60.fields.x;
                      fVar39 = UVar60.fields.y;
                      if (unaff_R14 == (long *)0x0) {
                        if (g_data_057a65d5 == '\0') {
                          plVar27 = &TypeInfo_Vector3;
                          pIStack_2a0 = (Il2CppRGCTXData *)0x40ac3fa;
                          il2cpp_runtime_helper_023445d0();
                          g_data_057a65d5 = '\x01';
                        }
                        uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                        fVar44 = (float)uVar1 * 0.5;
                        fVar48 = (float)((ulong)uVar1 >> 0x20) * 0.5;
                        fVar49 = 0.0;
                        fVar50 = 0.0;
                        local_210 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1) * 0.5;
                        unaff_R14 = (long *)0x1;
                        fVar40 = extraout_XMM0_Dc_02;
                        fVar41 = extraout_XMM0_Dd_02;
                      }
                      else {
                        auVar51._0_4_ = (float)local_1d8._0_4_ - (float)local_208._0_4_;
                        auVar51._4_4_ = (float)local_1d8._4_4_ - (float)local_208._4_4_;
                        auVar51._8_4_ = fStack_1d0 - fStack_200;
                        auVar51._12_4_ = fStack_1cc - fStack_1fc;
                        auVar2._8_4_ = extraout_XMM0_Dc_02;
                        auVar2._0_8_ = UVar60.fields._0_8_;
                        auVar2._12_4_ = extraout_XMM0_Dd_02;
                        auVar52 = minps(auVar51,auVar2);
                        fVar9 = fVar40 - local_210;
                        if (fVar42 <= fVar40 - local_210) {
                          fVar9 = fVar42;
                        }
                        auVar45._0_4_ = (float)local_1d8._0_4_ + (float)local_208._0_4_;
                        auVar45._4_4_ = (float)local_1d8._4_4_ + (float)local_208._4_4_;
                        auVar45._8_4_ = fStack_1d0 + fStack_200;
                        auVar45._12_4_ = fStack_1cc + fStack_1fc;
                        auVar3._8_4_ = extraout_XMM0_Dc_02;
                        auVar3._0_8_ = UVar60.fields._0_8_;
                        auVar3._12_4_ = extraout_XMM0_Dd_02;
                        auVar46 = maxps(auVar45,auVar3);
                        fVar41 = local_210 + fVar40;
                        if (local_210 + fVar40 <= fVar42) {
                          fVar41 = fVar42;
                        }
                        fVar44 = (auVar46._0_4_ - auVar52._0_4_) * 0.5;
                        fVar48 = (auVar46._4_4_ - auVar52._4_4_) * 0.5;
                        fVar49 = (auVar46._8_4_ - auVar52._8_4_) * 0.0;
                        fVar50 = (auVar46._12_4_ - auVar52._12_4_) * 0.0;
                        local_210 = (fVar41 - fVar9) * 0.5;
                        fVar37 = auVar52._0_4_ + fVar44;
                        fVar39 = auVar52._4_4_ + fVar48;
                        fVar40 = auVar52._8_4_ + fVar49;
                        fVar41 = auVar52._12_4_ + fVar50;
                        fVar42 = fVar9 + local_210;
                      }
                      uVar31 = uVar31 + 2;
                    } while (uVar31 < 2);
                  }
                }
                cVar10 = (char)in_R8D;
                uVar13 = (int)pSVar14 + 1;
                pSVar14 = (System_Object_array *)(ulong)uVar13;
                uVar31 = (uint)pSVar16->max_length;
                in_RCX = (MethodInfo_255A020 **)(ulong)uVar31;
                unaff_RBP = &local_178;
                if ((int)uVar31 <= (int)uVar13) {
                  if (unaff_R14 == (long *)0x0) goto label_040ac454;
                  pIStack_2a0 = (Il2CppRGCTXData *)0x40ac4b8;
                  method = (MethodInfo *)MethodInfo_BoxCollider_AddComponent_BoxCollider;
                  plVar27 = (long *)go;
                  __this_15 = (UnityEngine_BoxCollider_o *)
                              UnityEngine_GameObject__AddComponent_object_
                                        (go,(MethodInfo_255A020 *)MethodInfo_BoxCollider_AddComponent_BoxCollider);
                  pUVar35 = go;
                  unaff_R15 = pSVar14;
                  if (__this_15 == (UnityEngine_BoxCollider_o *)0x0) goto label_040ac502;
                  pIStack_2a0 = (Il2CppRGCTXData *)0x40ac4db;
                  value_03.fields.z = fVar42;
                  value_03.fields.x = fVar37;
                  value_03.fields.y = fVar39;
                  UnityEngine_BoxCollider__set_center(__this_15,value_03,(MethodInfo *)0x0);
                  value_04.fields.x = fVar44 + fVar44;
                  value_04.fields.y = fVar48 + fVar48;
                  value_04.fields.z = local_210 + local_210;
                  pIStack_2a0 = (Il2CppRGCTXData *)0x40ac4fd;
                  UnityEngine_BoxCollider__set_size(__this_15,value_04,(MethodInfo *)0x0);
                  uVar18 = extraout_RAX_01;
                  goto label_040ac479;
                }
                pUStack_2b8 = (UnityEngine_GameObject_o *)&TypeInfo_Vector3;
              } while (uVar13 < uVar31);
            }
            goto label_040ac507;
          }
          goto label_040ac454;
        }
      }
    }
    else {
label_040ac454:
      pIStack_2a0 = (Il2CppRGCTXData *)0x40ac466;
      method = (MethodInfo *)MethodInfo_EditorGizmoIcon_AddComponent_EditorGizmoIcon;
      plVar27 = (long *)go;
      __this_14 = (MapEditor_EditorGizmoIcon_o *)
                  UnityEngine_GameObject__AddComponent_object_(go,(MethodInfo_255A020 *)MethodInfo_EditorGizmoIcon_AddComponent_EditorGizmoIcon);
      pUVar35 = go;
      unaff_R15 = pSVar14;
      if (__this_14 != (MapEditor_EditorGizmoIcon_o *)0x0) {
        pIStack_2a0 = (Il2CppRGCTXData *)0x40ac479;
        MapEditor_EditorGizmoIcon__Setup(__this_14,(MethodInfo *)0x0);
        uVar18 = extraout_RAX_00;
label_040ac479:
        return (bool_conflict)CONCAT71((int7)((ulong)uVar18 >> 8),1);
      }
    }
  }
label_040ac502:
  pIStack_2a0 = (Il2CppRGCTXData *)0x40ac507;
  il2cpp_runtime_helper_022b2c90();
  pUStack_2b8 = pUVar35;
  pSVar14 = unaff_R15;
label_040ac507:
  pIStack_2a0 = (Il2CppRGCTXData *)0x40ac50c;
  il2cpp_runtime_helper_022b2ca0();
  plVar36 = (long *)((ulong)in_RCX & 0xffffffff);
  pIStack_2c8 = unaff_RBX;
  pIStack_2c0 = unaff_R12;
  plStack_2b0 = unaff_R14;
  pSStack_2a8 = pSVar14;
  pIStack_2a0 = unaff_RBP;
  if (g_data_057ac4b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapTextures);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Material_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBasicMaterial_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Material_Material);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Material_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectShader);
    il2cpp_runtime_helper_023445d0(&TypeRef_MapScriptBasicMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptDefaultTiledMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptLegacyMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptReflectiveMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"_TintColor");
    il2cpp_runtime_helper_023445d0(&"OutlineGizmo");
    il2cpp_runtime_helper_023445d0(&"Map/Materials");
    il2cpp_runtime_helper_023445d0(&"Editor");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Map/Textures/");
    il2cpp_runtime_helper_023445d0(&"_SpecularMap");
    il2cpp_runtime_helper_023445d0(&"Misc/None");
    il2cpp_runtime_helper_023445d0(&"Texture");
    il2cpp_runtime_helper_023445d0(&"Map/Legacy/Materials");
    il2cpp_runtime_helper_023445d0(&"Legacy");
    il2cpp_runtime_helper_023445d0(&"Map");
    il2cpp_runtime_helper_023445d0(&"Material");
    g_data_057ac4b4 = '\x01';
  }
  IStack_340.rgctxDataDummy = (void *)0x0;
  uStack_338 = 0;
  pIStack_330 = (Il2CppRGCTXData *)0x0;
  IStack_320.rgctxDataDummy = (void *)0x0;
  uStack_318 = 0;
  pIStack_310 = (Il2CppRGCTXData *)0x0;
  pIStack_348 = (Il2CppClass *)0x0;
  bVar11 = System_String__op_Equality((System_String_o *)method,"None",(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    return bVar11;
  }
  __this_17 = (System_String_o **)method;
  __this_18 = (System_String_o **)extraout_RDX;
  pIStack_358 = (Il2CppRGCTXData *)method;
  if ((Il2CppRGCTXData *)plVar27 == (Il2CppRGCTXData *)0x0) goto label_040ad9d5;
  pSVar14 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                      ((UnityEngine_GameObject_o *)plVar27,(MethodInfo_255AB00 *)MethodInfo_Renderer_GetComponentsInChildren_Renderer);
  pIStack_350 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Renderer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pIStack_350,MethodInfo_List_1_UnityEngine_Renderer);
  __this_18 = (System_String_o **)extraout_RDX;
  if (((char)plVar36 == '\0') && (cVar10 != '\0')) {
    if ((Il2CppRGCTXData *)method == (Il2CppRGCTXData *)0x0) goto label_040ad9d5;
    bVar11 = System_String__Contains((System_String_o *)method,"Editor",(MethodInfo *)0x0);
    plVar36 = (long *)CONCAT71((int7)((ulong)plVar36 >> 8),1);
    if ((char)bVar11 == '\0') {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_18 = *(System_String_o ***)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x70);
    }
  }
  if (pSVar14 == (System_Object_array *)0x0) goto label_040ad9d5;
  in_stack_fffffffffffffca4 = (uint)plVar36;
  uVar31 = (uint)pSVar14->max_length;
  if (pIStack_350 == (Il2CppRGCTXData *)0x0) {
    if (0 < (int)uVar31) {
      lVar30 = 0;
      __this_17 = &"OutlineGizmo";
      do {
        if (uVar31 <= (uint)lVar30) goto label_040ad9da;
        if ((UnityEngine_Object_o *)pSVar14->m_Items[lVar30] == (UnityEngine_Object_o *)0x0)
        goto label_040ad9d5;
        pSVar19 = UnityEngine_Object__get_name
                            ((UnityEngine_Object_o *)pSVar14->m_Items[lVar30],(MethodInfo *)0x0);
        bVar11 = System_String__op_Inequality(pSVar19,"OutlineGizmo",(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') goto label_040ad9d5;
        uVar31 = (uint)pSVar14->max_length;
        lVar30 = lVar30 + 1;
      } while ((int)lVar30 < (int)uVar31);
    }
  }
  else if (0 < (int)uVar31) {
    __this_17 = (System_String_o **)0x0;
    plVar36 = &MethodInfo_Void_Add;
    if (uVar31 == 0) goto label_040ad9da;
    do {
      iVar29 = (int)__this_17;
      pIVar21 = (Il2CppClass *)pSVar14->m_Items[iVar29];
      if (pIVar21 == (Il2CppClass *)0x0) goto label_040ad9d5;
      pSVar19 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pIVar21,(MethodInfo *)0x0);
      bVar11 = System_String__op_Inequality(pSVar19,"OutlineGizmo",(MethodInfo *)0x0);
      lVar30 = MethodInfo_Void_Add;
      if ((char)bVar11 == '\0') {
label_040ac937:
        __this_17 = (System_String_o **)(ulong)(iVar29 + 1U);
        uVar31 = (uint)pSVar14->max_length;
        if ((int)uVar31 <= (int)(iVar29 + 1U)) break;
      }
      else {
        *(int *)((long)pIStack_350 + 0x1c) = *(int *)((long)pIStack_350 + 0x1c) + 1;
        pMVar28 = pIStack_350[2].method;
        if (pMVar28 == (MethodInfo *)0x0) goto label_040ad9d5;
        uVar31 = *(uint *)(pIStack_350 + 3);
        if (*(uint *)&pMVar28->name <= uVar31) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pIStack_350,(Il2CppObject *)pIVar21,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
          goto label_040ac937;
        }
        *(uint *)(pIStack_350 + 3) = uVar31 + 1;
        (&pMVar28->klass)[(int)uVar31] = pIVar21;
        il2cpp_runtime_helper_022b4080(&pMVar28->klass + (int)uVar31);
        __this_17 = (System_String_o **)(ulong)(iVar29 + 1U);
        uVar31 = (uint)pSVar14->max_length;
        if ((int)uVar31 <= (int)(iVar29 + 1U)) break;
      }
      if (uVar31 <= (uint)__this_17) goto label_040ad9da;
    } while( true );
  }
  plVar27 = &TypeInfo_MapLoader;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar20 = *(System_Collections_Generic_Dictionary_object__object__o **)
             (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x48);
  if (pSVar20 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ad9d5;
  bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                     (pSVar20,(Il2CppObject *)method,MethodInfo_Boolean_ContainsKey);
  pIVar15 = (Il2CppRGCTXData *)__this_18;
  if ((char)bVar11 != '\0') goto label_040acbe5;
  __this_17 = (System_String_o **)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_17,MethodInfo_List_1_UnityEngine_Material);
  if (pIStack_350 == (Il2CppRGCTXData *)0x0) goto label_040ad9d5;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&IStack_300,
             (System_Collections_Generic_List_object__o *)pIStack_350,MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
  pIStack_330 = pIStack_2f0;
  IStack_340 = IStack_300;
  uStack_338 = uStack_2f8;
  x_00 = &TypeInfo_MapLoader;
  plVar34 = (long *)__this_18;
  if ((Il2CppRGCTXData *)__this_17 == (Il2CppRGCTXData *)0x0) {
    __this_00.fields._8_8_ = in_stack_fffffffffffffc98;
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffc90;
    __this_00.fields._current._0_4_ = in_stack_fffffffffffffca0;
    __this_00.fields._current._4_4_ = in_stack_fffffffffffffca4;
    bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       (__this_00,(MethodInfo_321A1D0 *)&IStack_340);
    if ((char)bVar11 != '\0') goto label_040ada1b;
  }
  else {
    while (__this.fields._8_8_ = in_stack_fffffffffffffc98,
          __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffc90,
          __this.fields._current._0_4_ = in_stack_fffffffffffffca0,
          __this.fields._current._4_4_ = in_stack_fffffffffffffca4,
          bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (__this,(MethodInfo_321A1D0 *)&IStack_340), (char)bVar11 != '\0') {
      pIVar15 = in_stack_fffffffffffffc98;
      uVar31 = in_stack_fffffffffffffca4;
      if (pIStack_330 == (Il2CppRGCTXData *)0x0) goto label_040ada25;
      pIVar21 = (Il2CppClass *)
                UnityEngine_Renderer__get_sharedMaterial
                          ((UnityEngine_Renderer_o *)pIStack_330,(MethodInfo *)0x0);
      lVar30 = MethodInfo_Void_Add;
      *(int *)((long)__this_17 + 0x1c) = *(int *)((long)__this_17 + 0x1c) + 1;
      pMVar28 = ((Il2CppRGCTXData *)(__this_17 + 2))->method;
      if (pMVar28 == (MethodInfo *)0x0) goto label_040ad9df;
      uVar31 = *(uint *)(__this_17 + 3);
      if (uVar31 < *(uint *)&pMVar28->name) {
        *(uint *)(__this_17 + 3) = uVar31 + 1;
        (&pMVar28->klass)[(int)uVar31] = pIVar21;
        il2cpp_runtime_helper_022b4080(&pMVar28->klass + (int)uVar31,pIVar21);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_17,(Il2CppObject *)pIVar21,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  __this_01.fields._8_8_ = in_stack_fffffffffffffc98;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffc90;
  __this_01.fields._current._0_4_ = in_stack_fffffffffffffca0;
  __this_01.fields._current._4_4_ = in_stack_fffffffffffffca4;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_01,(MethodInfo_321A1C0 *)&IStack_340);
  do {
    pIVar21 = (Il2CppClass *)*x_00;
    if (*(int *)&(pIVar21->_2).field_0x1c == 0) {
      il2cpp_runtime_helper_02337ed0();
      pIVar21 = (Il2CppClass *)*x_00;
    }
    pSVar20 = *(System_Collections_Generic_Dictionary_object__object__o **)
               ((long)pIVar21->static_fields + 0x48);
    plVar36 = x_00;
    if (pSVar20 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_040ad9d5:
      il2cpp_runtime_helper_022b2c90();
label_040ad9da:
      il2cpp_runtime_helper_022b2ca0();
      plVar34 = (long *)__this_18;
      x_00 = plVar36;
label_040ad9df:
      il2cpp_runtime_helper_022b2c90();
label_040ad9e4:
      il2cpp_runtime_helper_022b2c90();
label_040ad9e9:
      il2cpp_runtime_helper_022b2c90();
label_040ad9ee:
      il2cpp_runtime_helper_022b2c90();
label_040ad9f3:
      il2cpp_runtime_helper_022b2c90();
label_040ad9f8:
      il2cpp_runtime_helper_022b2c90();
label_040ad9fd:
      il2cpp_runtime_helper_022b2fd0(in_stack_fffffffffffffc98);
label_040ada07:
      il2cpp_runtime_helper_022b2c90();
label_040ada0c:
      il2cpp_runtime_helper_022b2c90();
label_040ada11:
      il2cpp_runtime_helper_022b2c90();
label_040ada16:
      il2cpp_runtime_helper_022b2c90();
label_040ada1b:
      pIVar33 = pIStack_330;
      __this_18 = (System_String_o **)plVar34;
      plVar36 = x_00;
      pIVar15 = in_stack_fffffffffffffc98;
      uVar31 = in_stack_fffffffffffffca4;
      if (pIStack_330 == (Il2CppRGCTXData *)0x0) {
label_040ada25:
        il2cpp_runtime_helper_022b2c90();
label_040ada2a:
        pIVar33 = (Il2CppRGCTXData *)__this_17;
        il2cpp_runtime_helper_022b2fd0();
        __this_18 = (System_String_o **)plVar34;
        plVar36 = x_00;
      }
      UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)pIVar33,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar20,(Il2CppObject *)pIStack_358,(Il2CppObject *)__this_17,MethodInfo_Void_Add);
      pIVar15 = (Il2CppRGCTXData *)__this_18;
      plVar27 = x_00;
label_040acbe5:
      __this_18 = (System_String_o **)pIVar15;
      if (pIVar15 == (Il2CppRGCTXData *)0x0) goto label_040ad9d5;
      pIVar33 = (Il2CppRGCTXData *)pIVar15[2].method;
      __this_18 = &"None";
      __this_17 = (System_String_o **)pIVar15;
      uVar31 = in_stack_fffffffffffffca4;
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_17 = (System_String_o **)pIVar15;
        uVar31 = in_stack_fffffffffffffca4;
      }
      bVar11 = System_String__op_Equality
                         ((System_String_o *)pIVar33,(System_String_o *)**(undefined8 **)(TypeInfo_MapObjectShader + 0xb8)
                          ,(MethodInfo *)0x0);
      in_stack_fffffffffffffc98 = (Il2CppRGCTXData *)__this_17;
      if ((char)bVar11 != '\0') {
label_040acca6:
        __this_17 = (System_String_o **)pIVar33;
        pSVar19 = (System_String_o *)
                  (*in_stack_fffffffffffffc98->klass->vtable[8].methodPtr)
                            (in_stack_fffffffffffffc98,in_stack_fffffffffffffc98->klass->vtable[8].method);
        __this_18 = (System_String_o **)
                    System_String__Concat_3ae5ba0((System_String_o *)pIStack_358,pSVar19,(MethodInfo *)0x0);
        pIVar21 = (Il2CppClass *)*plVar27;
        in_stack_fffffffffffffca4 = uVar31;
        if (*(int *)&(pIVar21->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
          pIVar21 = (Il2CppClass *)*plVar27;
          in_stack_fffffffffffffca4 = uVar31;
        }
        pSVar20 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   ((long)pIVar21->static_fields + 0x50);
        plVar36 = (long *)pIStack_358;
        if (pSVar20 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                             (pSVar20,(Il2CppObject *)__this_18,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar11 == '\0') {
            pIVar21 = (Il2CppClass *)*plVar27;
            if (*(int *)&(pIVar21->_2).field_0x1c == 0) {
              il2cpp_runtime_helper_02337ed0();
              pIVar21 = (Il2CppClass *)*plVar27;
            }
            pSVar20 = *(System_Collections_Generic_Dictionary_object__object__o **)
                       ((long)pIVar21->static_fields + 0x48);
            if (pSVar20 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              pIStack_2e8 = (Il2CppRGCTXData *)__this_18;
              __this_16 = (System_Collections_Generic_List_object__o *)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar20,(Il2CppObject *)pIStack_358,MethodInfo_List_1_UnityEngine_Material_get_Item);
              __this_17 = (System_String_o **)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
              System_Collections_Generic_List_object____ctor
                        ((System_Collections_Generic_List_object__o *)__this_17,MethodInfo_List_1_UnityEngine_Material);
              pSVar20 = (System_Collections_Generic_Dictionary_object__object__o *)
                        il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Material_Material);
              System_Collections_Generic_Dictionary_object__object____ctor(pSVar20,MethodInfo_Dictionary_2_UnityEngine_Material_UnityEngine_Material);
              __this_18 = (System_String_o **)0x0;
              if (__this_16 != (System_Collections_Generic_List_object__o *)0x0) {
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)&IStack_300,__this_16,
                           MethodInfo_List_1_T_Enumerator_UnityEngine_Material_GetEnumerator);
                pIStack_310 = pIStack_2f0;
                IStack_320 = IStack_300;
                uStack_318 = uStack_2f8;
                plVar34 = (long *)&IStack_320;
                while (__this_02.fields._8_8_ = in_stack_fffffffffffffc98,
                      __this_02.fields._list =
                           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffc90,
                      __this_02.fields._current._0_4_ = in_stack_fffffffffffffca0,
                      __this_02.fields._current._4_4_ = in_stack_fffffffffffffca4,
                      bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                         (__this_02,(MethodInfo_321A1D0 *)plVar34), x_00 = (long *)pIStack_310
                      , (char)bVar11 != '\0') {
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar11 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,
                                      (MethodInfo *)0x0);
                  lVar30 = MethodInfo_Void_Add;
                  plVar36 = x_00;
                  if ((char)bVar11 == '\0') {
                    if (pSVar20 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                    goto label_040ad9e4;
                    bVar11 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                       (pSVar20,(Il2CppObject *)x_00,(Il2CppObject **)&pIStack_348,
                                        MethodInfo_Boolean_TryGetValue);
                    if ((char)bVar11 == '\0') {
                      pIVar21 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
                      UnityEngine_Material___ctor_4dc9e70
                                ((UnityEngine_Material_o *)pIVar21,(UnityEngine_Material_o *)x_00,
                                 (MethodInfo *)0x0);
                      pMVar28 = in_stack_fffffffffffffc98[2].method;
                      pIStack_348 = pIVar21;
                      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      bVar11 = System_String__op_Inequality
                                         ((System_String_o *)pMVar28,
                                          *(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 8),
                                          (MethodInfo *)0x0);
                      pIVar21 = pIStack_348;
                      if ((char)bVar11 != '\0') {
                        if (in_stack_fffffffffffffc98[3].method == (MethodInfo *)0x0) goto label_040ada16;
                        UVar58 = Utility_Color255__ToColor
                                           ((Utility_Color255_o *)in_stack_fffffffffffffc98[3].method,
                                            (MethodInfo *)0x0);
                        if (pIVar21 == (Il2CppClass *)0x0) goto label_040ada11;
                        UnityEngine_Material__set_color
                                  ((UnityEngine_Material_o *)pIVar21,UVar58,(MethodInfo *)0x0);
                      }
                      pMVar28 = in_stack_fffffffffffffc98[2].method;
                      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      bVar11 = System_String__op_Equality
                                         ((System_String_o *)pMVar28,
                                          *(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x10),
                                          (MethodInfo *)0x0);
                      pIVar21 = pIStack_348;
                      if ((char)bVar11 != '\0') {
                        if (((in_stack_fffffffffffffc98->klass->_2).naturalAligment <
                             *(byte *)(TypeInfo_MapScriptDefaultTiledMaterial + 0x130)) ||
                           ((in_stack_fffffffffffffc98->klass->_2).typeHierarchy
                            [(ulong)*(byte *)(TypeInfo_MapScriptDefaultTiledMaterial + 0x130) - 1] != (Il2CppClass *)TypeInfo_MapScriptDefaultTiledMaterial))
                        goto label_040ad9fd;
                        IStack_2e0 = in_stack_fffffffffffffc98[4];
                        uStack_2d8 = 0;
                        pMVar28 = extraout_RDX_00;
                        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                          pMVar28 = extraout_RDX_01;
                        }
                        Map_MapLoader__SetDefaultTiling
                                  ((System_String_o *)pIStack_358,(UnityEngine_Material_o *)pIVar21,
                                   (UnityEngine_Vector2_o)IStack_2e0,pMVar28);
                      }
                      System_Collections_Generic_Dictionary_object__object___Add
                                (pSVar20,(Il2CppObject *)x_00,(Il2CppObject *)pIStack_348,MethodInfo_Void_Add);
                    }
                    lVar30 = MethodInfo_Void_Add;
                    if ((Il2CppRGCTXData *)__this_17 == (Il2CppRGCTXData *)0x0) goto label_040ad9f8;
                    *(int *)((long)__this_17 + 0x1c) = *(int *)((long)__this_17 + 0x1c) + 1;
                    pMVar28 = ((Il2CppRGCTXData *)(__this_17 + 2))->method;
                    if (pMVar28 == (MethodInfo *)0x0) goto label_040ad9f3;
                    uVar31 = *(uint *)(__this_17 + 3);
                    if (uVar31 < *(uint *)&pMVar28->name) {
                      *(uint *)(__this_17 + 3) = uVar31 + 1;
                      (&pMVar28->klass)[(int)uVar31] = pIStack_348;
                      il2cpp_runtime_helper_022b4080(&pMVar28->klass + (int)uVar31);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_17,
                                 (Il2CppObject *)pIStack_348,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                  else {
                    if ((Il2CppRGCTXData *)__this_17 == (Il2CppRGCTXData *)0x0) goto label_040ad9e9;
                    *(int *)((long)__this_17 + 0x1c) = *(int *)((long)__this_17 + 0x1c) + 1;
                    pMVar28 = ((Il2CppRGCTXData *)(__this_17 + 2))->method;
                    if (pMVar28 == (MethodInfo *)0x0) goto label_040ad9ee;
                    uVar31 = *(uint *)(__this_17 + 3);
                    if (uVar31 < *(uint *)&pMVar28->name) {
                      *(uint *)(__this_17 + 3) = uVar31 + 1;
                      (&pMVar28->klass)[(int)uVar31] = (Il2CppClass *)0x0;
                      il2cpp_runtime_helper_022b4080(&pMVar28->klass + (int)uVar31,0);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_17,(Il2CppObject *)0x0,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                }
                __this_03.fields._8_8_ = in_stack_fffffffffffffc98;
                __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffc90;
                __this_03.fields._current._0_4_ = in_stack_fffffffffffffca0;
                __this_03.fields._current._4_4_ = in_stack_fffffffffffffca4;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_03,(MethodInfo_321A1C0 *)&IStack_320);
                __this_18 = (System_String_o **)pIStack_2e8;
                plVar27 = &TypeInfo_MapLoader;
                if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar20 = *(System_Collections_Generic_Dictionary_object__object__o **)
                           (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x50);
                if (pSVar20 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  System_Collections_Generic_Dictionary_object__object___Add
                            (pSVar20,(Il2CppObject *)__this_18,(Il2CppObject *)__this_17,MethodInfo_Void_Add);
                  goto label_040ad0fc;
                }
              }
            }
          }
          else {
label_040ad0fc:
            pIVar21 = (Il2CppClass *)*plVar27;
            if (*(int *)&(pIVar21->_2).field_0x1c == 0) {
              il2cpp_runtime_helper_02337ed0();
              pIVar21 = (Il2CppClass *)*plVar27;
            }
            pSVar20 = *(System_Collections_Generic_Dictionary_object__object__o **)
                       ((long)pIVar21->static_fields + 0x50);
            if ((pSVar20 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
               (__this_18 = (System_String_o **)
                            System_Collections_Generic_Dictionary_object__object___get_Item
                                      (pSVar20,(Il2CppObject *)__this_18,MethodInfo_List_1_UnityEngine_Material_get_Item),
               pIStack_350 != (Il2CppRGCTXData *)0x0)) {
              iVar29 = *(int *)(pIStack_350 + 3);
              if ((Il2CppRGCTXData *)__this_18 != (Il2CppRGCTXData *)0x0) {
                if (iVar29 < 1) {
                  return iVar29;
                }
                iVar29 = 0;
                uVar31 = in_stack_fffffffffffffca4 & 0xff;
                do {
                  plVar36 = (long *)&MethodInfo_Material_get_Item;
                  if (iVar29 < *(int *)(__this_18 + 3)) {
                    x = (UnityEngine_Object_o *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_18,iVar29,MethodInfo_Material_get_Item)
                    ;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar11 = UnityEngine_Object__op_Inequality
                                       (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    if ((char)bVar11 != '\0') {
                      pUVar22 = (UnityEngine_Renderer_o *)
                                System_Collections_Generic_List_object___get_Item
                                          ((System_Collections_Generic_List_object__o *)pIStack_350,iVar29,
                                           MethodInfo_Renderer_get_Item);
                      value_01 = (UnityEngine_Material_o *)
                                 System_Collections_Generic_List_object___get_Item
                                           ((System_Collections_Generic_List_object__o *)__this_18,iVar29,
                                            MethodInfo_Material_get_Item);
                      __this_17 = (System_String_o **)(Il2CppRGCTXData *)0x0;
                      if (pUVar22 == (UnityEngine_Renderer_o *)0x0) goto label_040ad9d5;
                      UnityEngine_Renderer__set_sharedMaterial(pUVar22,value_01,(MethodInfo *)0x0);
                    }
                  }
                  pUVar22 = (UnityEngine_Renderer_o *)
                            System_Collections_Generic_List_object___get_Item
                                      ((System_Collections_Generic_List_object__o *)pIStack_350,iVar29,
                                       MethodInfo_Renderer_get_Item);
                  __this_17 = (System_String_o **)pIStack_350;
                  if (pUVar22 == (UnityEngine_Renderer_o *)0x0) goto label_040ad9d5;
                  UnityEngine_Renderer__set_enabled(pUVar22,uVar31,(MethodInfo *)0x0);
                  iVar29 = iVar29 + 1;
                  if (*(int *)(pIStack_350 + 3) <= iVar29) {
                    return extraout_EAX;
                  }
                } while( true );
              }
              if (iVar29 < 1) {
                return iVar29;
              }
            }
          }
        }
        goto label_040ad9d5;
      }
      pIVar33 = (Il2CppRGCTXData *)((Il2CppRGCTXData *)(__this_17 + 2))->method;
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar11 = System_String__op_Equality
                         ((System_String_o *)pIVar33,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 8)
                          ,(MethodInfo *)0x0);
      in_stack_fffffffffffffc98 = (Il2CppRGCTXData *)__this_17;
      if ((char)bVar11 != '\0') goto label_040acca6;
      pIVar33 = (Il2CppRGCTXData *)((Il2CppRGCTXData *)(__this_17 + 2))->method;
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar11 = System_String__op_Equality
                         ((System_String_o *)pIVar33,
                          *(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x10),(MethodInfo *)0x0);
      in_stack_fffffffffffffc98 = (Il2CppRGCTXData *)__this_17;
      if ((char)bVar11 != '\0') goto label_040acca6;
      pIVar15 = (Il2CppRGCTXData *)__this_17;
      x_00 = (long *)(*((Il2CppClass *)*__this_17)->vtable[8].methodPtr)(__this_17);
      pIVar21 = (Il2CppClass *)*plVar27;
      if (*(int *)&(pIVar21->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
        pIVar21 = (Il2CppClass *)*plVar27;
      }
      pSVar20 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 ((long)pIVar21->static_fields + 0x58);
      plVar36 = x_00;
      in_stack_fffffffffffffc98 = pIVar15;
      in_stack_fffffffffffffca4 = uVar31;
      if (pSVar20 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ad9d5;
      bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                         (pSVar20,(Il2CppObject *)x_00,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar11 != '\0') {
        pIVar21 = (Il2CppClass *)*plVar27;
        if (*(int *)&(pIVar21->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
          pIVar21 = (Il2CppClass *)*plVar27;
        }
        pSVar20 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   ((long)pIVar21->static_fields + 0x58);
        in_stack_fffffffffffffc98 = pIVar15;
        in_stack_fffffffffffffca4 = uVar31;
        if (pSVar20 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ad9d5;
        x_00 = (long *)System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar20,(Il2CppObject *)x_00,MethodInfo_Material_get_Item);
        in_stack_fffffffffffffc98 = pIVar15;
joined_r0x040ad2df:
        plVar36 = x_00;
        if (pIStack_350 != (Il2CppRGCTXData *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&IStack_300,
                     (System_Collections_Generic_List_object__o *)pIStack_350,MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
          pIStack_330 = pIStack_2f0;
          IStack_340 = IStack_300;
          uStack_338 = uStack_2f8;
          plVar34 = &TypeInfo_Object;
          __this_17 = (System_String_o **)((ulong)uVar31 & 0xff);
          do {
            __this_04.fields._8_8_ = in_stack_fffffffffffffc98;
            __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffc90;
            __this_04.fields._current._0_4_ = in_stack_fffffffffffffca0;
            __this_04.fields._current._4_4_ = in_stack_fffffffffffffca4;
            bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_04,(MethodInfo_321A1D0 *)&IStack_340);
            pIVar15 = pIStack_330;
            if ((char)bVar11 == '\0') {
              __this_05.fields._8_8_ = in_stack_fffffffffffffc98;
              __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffc90;
              __this_05.fields._current._0_4_ = in_stack_fffffffffffffca0;
              __this_05.fields._current._4_4_ = in_stack_fffffffffffffca4;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_05,(MethodInfo_321A1C0 *)&IStack_340);
              return extraout_EAX_00;
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar11 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar11 == '\0') {
              if (pIVar15 == (Il2CppRGCTXData *)0x0) goto label_040ada0c;
            }
            else {
              if (pIVar15 == (Il2CppRGCTXData *)0x0) goto label_040ada07;
              UnityEngine_Renderer__set_sharedMaterial
                        ((UnityEngine_Renderer_o *)pIVar15,(UnityEngine_Material_o *)x_00,(MethodInfo *)0x0);
            }
            UnityEngine_Renderer__set_enabled
                      ((UnityEngine_Renderer_o *)pIVar15,(bool_conflict)__this_17,(MethodInfo *)0x0);
          } while( true );
        }
        goto label_040ad9d5;
      }
      pMVar28 = ((Il2CppRGCTXData *)(__this_17 + 2))->method;
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar11 = Map_MapObjectShader__IsLegacyShader((System_String_o *)pMVar28,(MethodInfo *)0x0);
      handle = TypeRef_MapScriptBasicMaterial;
      plVar34 = (long *)__this_18;
      if ((char)bVar11 == '\0') {
        if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar23 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        pSVar24 = System_Object__GetType((Il2CppObject *)__this_17,(MethodInfo *)0x0);
        in_stack_fffffffffffffc98 = pIVar15;
        in_stack_fffffffffffffca4 = uVar31;
        if (pSVar23 == (System_Type_o *)0x0) goto label_040ad9d5;
        cVar10 = (*(pSVar23->klass->vtable)._22_IsAssignableFrom.methodPtr)
                           (pSVar23,pSVar24,(pSVar23->klass->vtable)._22_IsAssignableFrom.method);
        if (cVar10 == '\0') {
          plVar36 = (long *)0x0;
          pIVar21 = (Il2CppClass *)*plVar27;
          iVar29 = *(int *)&(pIVar21->_2).field_0x1c;
          in_stack_fffffffffffffc98 = pIVar15;
          in_stack_fffffffffffffca4 = uVar31;
          goto joined_r0x040ad770;
        }
        if (((((Il2CppClass *)*__this_17)->_2).naturalAligment < *(byte *)(TypeInfo_MapScriptBasicMaterial + 0x130)) ||
           ((((Il2CppClass *)*__this_17)->_2).typeHierarchy[(ulong)*(byte *)(TypeInfo_MapScriptBasicMaterial + 0x130) - 1] !=
            (Il2CppClass *)TypeInfo_MapScriptBasicMaterial)) goto label_040ada2a;
        pSVar19 = System_String__Concat_3ae5ba0
                            ((System_String_o *)((Il2CppRGCTXData *)(__this_17 + 2))->method,"Material",
                             (MethodInfo *)0x0);
        pMVar28 = extraout_RDX_04;
        if (*(int *)&(((Il2CppClass *)*plVar27)->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar28 = extraout_RDX_05;
        }
        __this_17 = (System_String_o **)Map_MapLoader__LoadAssetCached("Map/Materials",pSVar19,pMVar28);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        plVar36 = (long *)UnityEngine_Object__Instantiate_4e01490
                                    ((UnityEngine_Object_o *)__this_17,(MethodInfo *)0x0);
        if ((Il2CppRGCTXData *)plVar36 != (Il2CppRGCTXData *)0x0) {
          if (((((Il2CppClass *)*plVar36)->_2).naturalAligment < *(byte *)(TypeInfo_Material + 0x130)) ||
             ((((Il2CppClass *)*plVar36)->_2).typeHierarchy[(ulong)*(byte *)(TypeInfo_Material + 0x130) - 1] !=
              (Il2CppClass *)TypeInfo_Material)) goto label_040ada3e;
        }
        in_stack_fffffffffffffc98 = pIVar15;
        bVar11 = System_String__op_Inequality
                           ((System_String_o *)pIVar15[4].method,"Misc/None",(MethodInfo *)0x0);
        if (((char)bVar11 == '\0') ||
           (bVar11 = System_String__op_Inequality
                               ((System_String_o *)pIVar15[4].method,"None",(MethodInfo *)0x0),
           (char)bVar11 == '\0')) goto label_040ad835;
        in_stack_fffffffffffffca4 = uVar31;
        if (((Il2CppClass *)pIVar15[4].method == (Il2CppClass *)0x0) ||
           (pSVar25 = System_String__Split((System_String_o *)pIVar15[4].method,0x2f,0,(MethodInfo *)0x0),
           in_stack_fffffffffffffca4 = uVar31, pSVar25 == (System_String_array *)0x0)) goto label_040ad9d5;
        iVar29 = (int)pSVar25->max_length;
        if ((iVar29 != 0) && (iVar29 != 1)) {
          pIStack_358 = (Il2CppRGCTXData *)pSVar25->m_Items[0];
          __this_17 = (System_String_o **)pSVar25->m_Items[1];
          uVar13 = System_String__op_Equality((System_String_o *)pIStack_358,"Legacy",(MethodInfo *)0x0);
          __this_18 = (System_String_o **)(ulong)uVar13;
          pIVar15 = in_stack_fffffffffffffc98;
          if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pIVar15 = in_stack_fffffffffffffc98;
          }
          pSVar20 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 8);
          in_stack_fffffffffffffc98 = pIVar15;
          in_stack_fffffffffffffca4 = uVar31;
          if (pSVar20 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ad9d5;
          bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                             (pSVar20,(Il2CppObject *)__this_17,MethodInfo_Boolean_ContainsKey);
          in_stack_fffffffffffffc98 = pIVar15;
          if ((char)bVar11 != '\0') {
            if ((char)uVar13 != '\0') {
              if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar20 = *(System_Collections_Generic_Dictionary_object__object__o **)
                         (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x28);
              in_stack_fffffffffffffc98 = pIVar15;
              in_stack_fffffffffffffca4 = uVar31;
              if (pSVar20 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_040ad9d5;
              bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                 (pSVar20,(Il2CppObject *)__this_17,MethodInfo_Boolean_ContainsKey);
              in_stack_fffffffffffffc98 = pIVar15;
              if ((char)bVar11 == '\0') goto label_040ad835;
            }
            if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar20 = *(System_Collections_Generic_Dictionary_object__object__o **)
                       (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 8);
            in_stack_fffffffffffffc98 = pIVar15;
            in_stack_fffffffffffffca4 = uVar31;
            if (pSVar20 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ad9d5;
            pIVar26 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar20,(Il2CppObject *)__this_17,MethodInfo_MapScriptBasicMaterial_get_Item);
            if ((char)uVar13 == '\0') {
              __this_18 = (System_String_o **)
                          System_String__Concat_3ae5ba0
                                    ("Map/Textures/",(System_String_o *)pIStack_358,(MethodInfo *)0x0);
              __this_17 = (System_String_o **)
                          System_String__Concat_3ae5ba0
                                    ((System_String_o *)__this_17,"Texture",(MethodInfo *)0x0);
              pMVar28 = extraout_RDX_08;
              if (*(int *)&(((Il2CppClass *)*plVar27)->_2).field_0x1c == 0) {
                il2cpp_runtime_helper_02337ed0();
                pMVar28 = extraout_RDX_09;
              }
              value_02 = (UnityEngine_Texture_o *)
                         Map_MapLoader__LoadAssetCached
                                   ((System_String_o *)__this_18,(System_String_o *)__this_17,pMVar28);
            }
            else {
              if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar20 = *(System_Collections_Generic_Dictionary_object__object__o **)
                         (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x28);
              __this_18 = (System_String_o **)&TypeInfo_BuiltinMapTextures;
              in_stack_fffffffffffffc98 = pIVar15;
              in_stack_fffffffffffffca4 = uVar31;
              if (pSVar20 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_040ad9d5;
              __this_17 = (System_String_o **)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar20,(Il2CppObject *)__this_17,MethodInfo_String_get_Item);
              pMVar28 = extraout_RDX_06;
              if (*(int *)&(((Il2CppClass *)*plVar27)->_2).field_0x1c == 0) {
                il2cpp_runtime_helper_02337ed0();
                pMVar28 = extraout_RDX_07;
              }
              value_02 = (UnityEngine_Texture_o *)
                         Map_MapLoader__LoadAssetCached("Map",(System_String_o *)__this_17,pMVar28);
            }
            if (value_02 == (UnityEngine_Texture_o *)0x0) {
label_040ad7e6:
              value_02 = (UnityEngine_Texture_o *)0x0;
            }
            else if (value_02->klass != TypeInfo_Texture2D) {
              il2cpp_runtime_helper_022b2fd0(value_02);
              goto label_040ad7e6;
            }
            in_stack_fffffffffffffc98 = pIVar15;
            in_stack_fffffffffffffca4 = uVar31;
            if (((Il2CppRGCTXData *)plVar36 == (Il2CppRGCTXData *)0x0) ||
               (UnityEngine_Material__set_mainTexture
                          ((UnityEngine_Material_o *)plVar36,value_02,(MethodInfo *)0x0),
               in_stack_fffffffffffffc98 = pIVar15, in_stack_fffffffffffffca4 = uVar31,
               pIVar26 == (Il2CppObject *)0x0)) goto label_040ad9d5;
            value.fields.y = (float)((ulong)pIVar26[2].monitor >> 0x20) * SUB84(pIVar15[5],4);
            value.fields.x = SUB84(pIVar26[2].monitor,0) * SUB84(pIVar15[5],0);
            UnityEngine_Material__set_mainTextureScale
                      ((UnityEngine_Material_o *)plVar36,value,(MethodInfo *)0x0);
            UnityEngine_Material__set_mainTextureOffset
                      ((UnityEngine_Material_o *)plVar36,(UnityEngine_Vector2_o)pIVar15[6],(MethodInfo *)0x0);
          }
label_040ad835:
          in_stack_fffffffffffffca4 = uVar31;
          if ((pIVar15[3].method == (MethodInfo *)0x0) ||
             (UVar58 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar15[3].method,(MethodInfo *)0x0),
             in_stack_fffffffffffffca4 = uVar31, (Il2CppRGCTXData *)plVar36 == (Il2CppRGCTXData *)0x0))
          goto label_040ad9d5;
          UnityEngine_Material__set_color((UnityEngine_Material_o *)plVar36,UVar58,(MethodInfo *)0x0);
          if ((*(byte *)(TypeInfo_MapScriptReflectiveMaterial + 0x130) <= (in_stack_fffffffffffffc98->klass->_2).naturalAligment) &&
             ((in_stack_fffffffffffffc98->klass->_2).typeHierarchy[(ulong)*(byte *)(TypeInfo_MapScriptReflectiveMaterial + 0x130) - 1]
              == (Il2CppClass *)TypeInfo_MapScriptReflectiveMaterial)) {
            if ((Il2CppRGCTXData *)in_stack_fffffffffffffc98[7].method == (Il2CppRGCTXData *)0x0)
            goto label_040ad9d5;
            UVar58 = Utility_Color255__ToColor
                               ((Utility_Color255_o *)in_stack_fffffffffffffc98[7].method,(MethodInfo *)0x0);
            UnityEngine_Material__SetColor
                      ((UnityEngine_Material_o *)plVar36,"_SpecularMap",UVar58,(MethodInfo *)0x0);
          }
          pIVar21 = (Il2CppClass *)*plVar27;
          iVar29 = *(int *)&(pIVar21->_2).field_0x1c;
          goto joined_r0x040ad770;
        }
        goto label_040ad9da;
      }
      if (((((Il2CppClass *)*__this_17)->_2).naturalAligment < *(byte *)(TypeInfo_MapScriptLegacyMaterial + 0x130)) ||
         ((((Il2CppClass *)*__this_17)->_2).typeHierarchy[(ulong)*(byte *)(TypeInfo_MapScriptLegacyMaterial + 0x130) - 1] !=
          (Il2CppClass *)TypeInfo_MapScriptLegacyMaterial)) goto label_040ada2a;
      pMVar28 = ((Il2CppRGCTXData *)(__this_17 + 2))->method;
      method_00 = extraout_RDX_02;
      if (*(int *)&(((Il2CppClass *)*plVar27)->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_03;
      }
      __this_17 = (System_String_o **)
                  Map_MapLoader__LoadAssetCached("Map/Legacy/Materials",(System_String_o *)pMVar28,method_00);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar36 = (long *)UnityEngine_Object__Instantiate_4e01490
                                  ((UnityEngine_Object_o *)__this_17,(MethodInfo *)0x0);
      if ((Il2CppRGCTXData *)plVar36 == (Il2CppRGCTXData *)0x0) {
label_040ad3ce:
        in_stack_fffffffffffffc98 = pIVar15;
        in_stack_fffffffffffffca4 = uVar31;
        if ((pIVar15[3].method == (MethodInfo *)0x0) ||
           (UVar58 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar15[3].method,(MethodInfo *)0x0),
           in_stack_fffffffffffffc98 = pIVar15, (Il2CppRGCTXData *)plVar36 == (Il2CppRGCTXData *)0x0))
        goto label_040ad9d5;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)plVar36,"_TintColor",UVar58,(MethodInfo *)0x0);
        UnityEngine_Material__set_mainTextureScale
                  ((UnityEngine_Material_o *)plVar36,(UnityEngine_Vector2_o)pIVar15[4],(MethodInfo *)0x0);
        pIVar21 = (Il2CppClass *)*plVar27;
        iVar29 = *(int *)&(pIVar21->_2).field_0x1c;
        in_stack_fffffffffffffc98 = pIVar15;
joined_r0x040ad770:
        if (iVar29 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pIVar21 = (Il2CppClass *)*plVar27;
        }
        pSVar20 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   ((long)pIVar21->static_fields + 0x58);
        if (pSVar20 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ad9d5;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar20,(Il2CppObject *)x_00,(Il2CppObject *)plVar36,MethodInfo_Void_Add);
        x_00 = plVar36;
        goto joined_r0x040ad2df;
      }
      if ((*(byte *)(TypeInfo_Material + 0x130) <= (((Il2CppClass *)*plVar36)->_2).naturalAligment) &&
         ((((Il2CppClass *)*plVar36)->_2).typeHierarchy[(ulong)*(byte *)(TypeInfo_Material + 0x130) - 1] ==
          (Il2CppClass *)TypeInfo_Material)) goto label_040ad3ce;
    }
label_040ada3e:
    auVar59 = il2cpp_runtime_helper_022b2fd0(plVar36);
    if (auVar59._8_4_ != 1) goto label_040add17;
    plVar27 = (long *)__cxa_begin_catch(auVar59._0_8_);
    lVar30 = *plVar27;
    __cxa_end_catch();
    __this_06.fields._8_8_ = pIVar15;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffc90;
    __this_06.fields._current._0_4_ = in_stack_fffffffffffffca0;
    __this_06.fields._current._4_4_ = uVar31;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)&IStack_340);
    x_00 = plVar36;
    in_stack_fffffffffffffc98 = pIVar15;
    in_stack_fffffffffffffca4 = uVar31;
  } while (lVar30 == 0);
  il2cpp_runtime_helper_022fefe0(lVar30);
label_040add17:
  __this_07.fields._8_8_ = pIVar15;
  __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffc90;
  __this_07.fields._current._0_4_ = in_stack_fffffffffffffca0;
  __this_07.fields._current._4_4_ = uVar31;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_07,(MethodInfo_321A1C0 *)&IStack_340);
  _Unwind_Resume(auVar59._0_8_);
}


// Map.MapLoader$$SetTransform
// il2cpp: void Map_MapLoader__SetTransform (Map_MapObject_o* mapObject, const MethodInfo* method);
// 0x40a5da0

void Map_MapLoader__SetTransform(Map_MapObject_o *mapObject,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint key;
  int32_t iVar6;
  Map_MapScriptBaseObject_o *pMVar7;
  long lVar8;
  Il2CppClass *__this;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *obj;
  bool_conflict bVar9;
  UnityEngine_Transform_o *pUVar10;
  System_Collections_Generic_Dictionary_int__object__o *pSVar11;
  UnityEngine_Transform_o *p;
  System_Collections_Generic_HashSet_int__o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  MethodInfo *pMVar12;
  MethodInfo *__this_02;
  System_Collections_Generic_Dictionary_int__object__o *__this_03;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o value_00;
  
  pMVar12 = (MethodInfo *)mapObject;
  if ((mapObject != (Map_MapObject_o *)0x0) &&
     (__this_02 = (MethodInfo *)(mapObject->fields).GameObject, __this_02 != (MethodInfo *)0x0)) {
    pMVar7 = (mapObject->fields).ScriptObject;
    method = (MethodInfo *)0x0;
    pMVar12 = __this_02;
    pUVar10 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_02,(MethodInfo *)0x0);
    if (pMVar7 != (Map_MapScriptBaseObject_o *)0x0) {
      UnityEngine_GameObject__set_isStatic
                ((UnityEngine_GameObject_o *)__this_02,(uint)*(byte *)((long)&(pMVar7->fields).Active + 1),
                 (MethodInfo *)0x0);
      method = *(MethodInfo **)&(pMVar7->fields).Visible;
      UnityEngine_Object__set_name
                ((UnityEngine_Object_o *)__this_02,(System_String_o *)method,(MethodInfo *)0x0);
      pMVar12 = __this_02;
      if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_position
                  (pUVar10,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&(pMVar7->fields).Name,
                   (MethodInfo *)0x0);
        uVar1 = (pMVar7->fields).PositionY;
        uVar3 = (pMVar7->fields).PositionZ;
        UVar13.fields.x = (float)uVar1 * 0.017453292;
        UVar13.fields.y = (float)uVar3 * 0.017453292;
        UVar13.fields.z = (pMVar7->fields).RotationX * 0.017453292;
        value = UnityEngine_Quaternion__Internal_FromEulerRad(UVar13,(MethodInfo *)0x0);
        UnityEngine_Transform__set_rotation(pUVar10,value,(MethodInfo *)0x0);
        UVar13 = UnityEngine_Transform__get_localScale(pUVar10,(MethodInfo *)0x0);
        (mapObject->fields).BaseScale.fields.x = UVar13.fields.x;
        (mapObject->fields).BaseScale.fields.y = UVar13.fields.y;
        (mapObject->fields).BaseScale.fields.z = UVar13.fields.z;
        uVar2 = (pMVar7->fields).RotationY;
        uVar4 = (pMVar7->fields).RotationZ;
        value_00.fields.x = UVar13.fields.x * (float)uVar2;
        value_00.fields.y = UVar13.fields.y * (float)uVar4;
        value_00.fields.z = UVar13.fields.z * (pMVar7->fields).ScaleX;
        UnityEngine_Transform__set_localScale(pUVar10,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac49f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac49f = '\x01';
    iVar5 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  else {
    iVar5 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  if (iVar5 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_03 = TypeInfo_MapLoader;
  if ((pMVar12 != (MethodInfo *)0x0) &&
     (pSVar11 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor, __this_03 = pSVar11,
     pSVar11 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar9 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar11,(int32_t)*(intptr_t *)
                                         &((System_String_Fields *)&pMVar12->invoker_method)->_stringLength,
                       MethodInfo_Boolean_ContainsKey);
    if ((char)bVar9 == '\0') goto label_040a5fd3;
    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_03 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
    if (__this_03 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      pSVar11 = (System_Collections_Generic_Dictionary_int__object__o *)
                System_Collections_Generic_Dictionary_int__object___get_Item
                          (__this_03,
                           (int32_t)*(intptr_t *)
                                     &((System_String_Fields *)&pMVar12->invoker_method)->_stringLength,
                           MethodInfo_HashSet_1_System_Int32_get_Item);
      if ((pMVar12->klass != (Il2CppClass *)0x0) &&
         (pSVar11 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
        bVar9 = System_Collections_Generic_HashSet_int___Contains
                          ((System_Collections_Generic_HashSet_int__o *)pSVar11,
                           *(int32_t *)&(pMVar12->klass->_1).byval_arg.data,MethodInfo_Boolean_Contains);
        if ((char)bVar9 == '\0') {
label_040a5fd3:
          if (method == (MethodInfo *)0x0) {
            ((System_String_Fields *)&pMVar12->invoker_method)->_stringLength = 0;
            __this_03 = (System_Collections_Generic_Dictionary_int__object__o *)pMVar12->name;
            if ((__this_03 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
               (pUVar10 = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)__this_03,(MethodInfo *)0x0),
               pUVar10 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent(pUVar10,(UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            if (pMVar12 == method) {
              return;
            }
            __this_03 = pSVar11;
            if (pMVar12->klass != (Il2CppClass *)0x0) {
              if ((int)*(intptr_t *)&((System_String_Fields *)&method->invoker_method)->_stringLength ==
                  *(int *)&(pMVar12->klass->_1).byval_arg.data) {
                return;
              }
              if (method->klass != (Il2CppClass *)0x0) {
                ((System_String_Fields *)&pMVar12->invoker_method)->_stringLength =
                     *(undefined4 *)&(method->klass->_1).byval_arg.data;
                __this_03 = (System_Collections_Generic_Dictionary_int__object__o *)0x0;
                if ((UnityEngine_GameObject_o *)pMVar12->name != (UnityEngine_GameObject_o *)0x0) {
                  pUVar10 = UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)pMVar12->name,(MethodInfo *)0x0);
                  __this_03 = (System_Collections_Generic_Dictionary_int__object__o *)method->name;
                  if ((__this_03 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
                     (p = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)__this_03,(MethodInfo *)0x0),
                     pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                    UnityEngine_Transform__SetParent(pUVar10,p,(MethodInfo *)0x0);
                    if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar11 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
                    __this_03 = (System_Collections_Generic_Dictionary_int__object__o *)0x0;
                    if (pSVar11 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                      bVar9 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                        (pSVar11,(int32_t)*(intptr_t *)
                                                           &((System_String_Fields *)&pMVar12->invoker_method)
                                                            ->_stringLength,MethodInfo_Boolean_ContainsKey);
                      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pSVar11 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
                      iVar6 = (int32_t)*(intptr_t *)
                                        &((System_String_Fields *)&pMVar12->invoker_method)->_stringLength;
                      if ((char)bVar9 == '\0') {
                        __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
                                    il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_int);
                        __this_03 = __this_01;
                        System_Collections_Generic_HashSet_int____ctor
                                  ((System_Collections_Generic_HashSet_int__o *)__this_01,MethodInfo_HashSet_1_System_Int32);
                        if (((pMVar12->klass != (Il2CppClass *)0x0) &&
                            (__this_01 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) &&
                           (__this_03 = __this_01,
                           System_Collections_Generic_HashSet_int___Add
                                     ((System_Collections_Generic_HashSet_int__o *)__this_01,
                                      *(int32_t *)&(pMVar12->klass->_1).byval_arg.data,MethodInfo_Boolean_Add),
                           pSVar11 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
                          System_Collections_Generic_Dictionary_int__object___Add
                                    (pSVar11,iVar6,(Il2CppObject *)__this_01,MethodInfo_Void_Add);
                          return;
                        }
                      }
                      else {
                        __this_03 = TypeInfo_MapLoader;
                        if (pSVar11 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                          __this_00 = (System_Collections_Generic_HashSet_int__o *)
                                      System_Collections_Generic_Dictionary_int__object___get_Item
                                                (pSVar11,iVar6,MethodInfo_HashSet_1_System_Int32_get_Item);
                          __this_03 = pSVar11;
                          if ((pMVar12->klass != (Il2CppClass *)0x0) &&
                             (__this_00 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
                            System_Collections_Generic_HashSet_int___Add
                                      (__this_00,*(int32_t *)&(pMVar12->klass->_1).byval_arg.data,MethodInfo_Boolean_Add
                                      );
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
        else {
          if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_03 = ((TypeInfo_MapLoader[2].fields._entries)->obj).monitor;
          if (__this_03 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            pSVar11 = (System_Collections_Generic_Dictionary_int__object__o *)
                      System_Collections_Generic_Dictionary_int__object___get_Item
                                (__this_03,
                                 (int32_t)*(intptr_t *)
                                           &((System_String_Fields *)&pMVar12->invoker_method)->_stringLength,
                                 MethodInfo_HashSet_1_System_Int32_get_Item);
            if ((pMVar12->klass != (Il2CppClass *)0x0) &&
               (pSVar11 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
              System_Collections_Generic_HashSet_int___Remove
                        ((System_Collections_Generic_HashSet_int__o *)pSVar11,
                         *(int32_t *)&(pMVar12->klass->_1).byval_arg.data,MethodInfo_Boolean_Remove);
              goto label_040a5fd3;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac4a0 = '\x01';
    iVar5 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  else {
    iVar5 = *(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4);
  }
  if (iVar5 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (((__this_03 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
      (lVar8 = *(long *)&(__this_03->fields)._count, lVar8 != 0)) &&
     (__this = ((TypeInfo_MapLoader[2].fields._entries)->obj).klass, __this != (Il2CppClass *)0x0)) {
    key = *(uint *)(lVar8 + 0x20);
    pMVar12 = (MethodInfo *)(ulong)key;
    bVar9 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_int__object__o *)__this,key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar9 == '\0') goto label_040a6341;
    lVar8 = *(long *)&(__this_03->fields)._count;
    if (lVar8 != 0) {
      iVar6 = *(int32_t *)(lVar8 + 0x20);
      if (*(int *)((long)&TypeInfo_MapLoader[2].fields._values + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapLoader__DeleteObject_3fa6370(iVar6,pMVar12);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040a6341:
  obj = (__this_03->fields)._entries;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader$$SetParent
// il2cpp: void Map_MapLoader__SetParent (Map_MapObject_o* mapObject, const MethodInfo* method);
// 0x40add50

void Map_MapLoader__SetParent_3fadd50(Map_MapObject_o *mapObject,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool_conflict bVar3;
  UnityEngine_Transform_o *__this;
  Il2CppObject *pIVar4;
  UnityEngine_Transform_o *p;
  System_String_o *pSVar5;
  undefined8 *puVar6;
  System_String_o *key;
  UnityEngine_Object_o *value;
  int32_t *piVar7;
  undefined8 *puVar8;
  Map_MapObject_o *__this_00;
  Map_MapObject_o *pMVar9;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  
  __this_00 = mapObject;
  if (g_data_057ac4b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&")");
    __this_00 = (Map_MapObject_o *)&"Map load error: object parent id not found (";
    il2cpp_runtime_helper_023445d0();
    g_data_057ac4b2 = '\x01';
  }
  if ((mapObject != (Map_MapObject_o *)0x0) &&
     (__this_00 = (Map_MapObject_o *)(mapObject->fields).GameObject, __this_00 != (Map_MapObject_o *)0x0)) {
    pMVar1 = (mapObject->fields).ScriptObject;
    method = (MethodInfo *)0x0;
    __this = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
    if (pMVar1 != (Map_MapScriptBaseObject_o *)0x0) {
      if ((pMVar1->fields).Parent < 1) {
        return;
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = (Map_MapObject_o *)0x0;
      if ((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
          (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        piVar7 = &(pMVar1->fields).Parent;
        method = (MethodInfo *)(ulong)(uint)*piVar7;
        bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                          ((System_Collections_Generic_Dictionary_int__object__o *)
                           **(undefined8 **)(TypeInfo_MapLoader + 0xb8),*piVar7,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar3 == '\0') {
          pSVar5 = System_Int32__ToString((int32_t)piVar7,(MethodInfo *)0x0);
          pSVar5 = System_String__Concat_3af7150("Map load error: object parent id not found (",pSVar5,")",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          ApplicationManagers_DebugConsole__Log(pSVar5,1,(MethodInfo *)0x0);
          return;
        }
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = (Map_MapObject_o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8);
        if (__this_00 != (Map_MapObject_o *)0x0) {
          method = (MethodInfo *)(ulong)(uint)*piVar7;
          pIVar4 = System_Collections_Generic_Dictionary_int__object___get_Item
                             ((System_Collections_Generic_Dictionary_int__object__o *)__this_00,*piVar7,
                              MethodInfo_MapObject_get_Item);
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (__this_00 = pIVar4[1].monitor, __this_00 != (Map_MapObject_o *)0x0)) {
            method = (MethodInfo *)0x0;
            p = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0)
            ;
            if (__this != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent(__this,p,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  value_00.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"FX/LavaCube1");
    il2cpp_runtime_helper_023445d0(&"_BaseColorTiling");
    il2cpp_runtime_helper_023445d0(&"_EmitColorTiling");
    il2cpp_runtime_helper_023445d0(&"FX/WaterCube1");
    il2cpp_runtime_helper_023445d0(&"_Tiling_1");
    il2cpp_runtime_helper_023445d0(&"_Normal_Tiling");
    il2cpp_runtime_helper_023445d0(&"_Tiling");
    g_data_057ac4b3 = '\x01';
  }
  pSVar5 = "FX/WaterCube1";
  pMVar9 = __this_00;
  bVar3 = System_String__op_Equality((System_String_o *)__this_00,"FX/WaterCube1",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pSVar5 = "FX/LavaCube1";
    bVar3 = System_String__op_Equality((System_String_o *)__this_00,"FX/LavaCube1",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    if (method != (MethodInfo *)0x0) {
      value_00.fields.z = 0.0;
      value_00.fields.w = 0.0;
      UnityEngine_Material__SetVector
                ((UnityEngine_Material_o *)method,"_BaseColorTiling",value_00,(MethodInfo *)0x0);
      puVar8 = (undefined8 *)&"_Normal_Tiling";
      puVar6 = &"_EmitColorTiling";
      goto label_040adfec;
    }
  }
  else {
    __this_00 = pMVar9;
    if (method != (MethodInfo *)0x0) {
      puVar8 = &"_Tiling_1";
      puVar6 = &"_Tiling";
label_040adfec:
      value_01.fields.z = 0.0;
      value_01.fields.w = 0.0;
      value_01.fields.x = (float)(int)value_00.fields._0_8_;
      value_01.fields.y = (float)(int)(value_00.fields._0_8_ >> 0x20);
      UnityEngine_Material__SetVector
                ((UnityEngine_Material_o *)method,(System_String_o *)*puVar6,value_01,(MethodInfo *)0x0);
      value_02.fields.z = 0.0;
      value_02.fields.w = 0.0;
      value_02.fields.x = (float)(int)value_00.fields._0_8_;
      value_02.fields.y = (float)(int)(value_00.fields._0_8_ >> 0x20);
      UnityEngine_Material__SetVector
                ((UnityEngine_Material_o *)method,(System_String_o *)*puVar8,value_02,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ac4b9 = '\x01';
  }
  key = System_String__Concat_3af7150((System_String_o *)__this_00,"/",pSVar5,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
  pMVar9 = (Map_MapObject_o *)0x0;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value = ApplicationManagers_ResourceManager__LoadAsset
                        ((System_String_o *)__this_00,pSVar5,0,(MethodInfo *)0x0);
      pMVar9 = __this_00;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ae19e;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar2,(Il2CppObject *)key,(Il2CppObject *)value,MethodInfo_Void_Add);
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
    pMVar9 = (Map_MapObject_o *)0x0;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item(pSVar2,(Il2CppObject *)key,MethodInfo_Object_get_Item)
      ;
      return;
    }
  }
label_040ae19e:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057ac4b8 = '\x01';
  }
  if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_String__op_Equality
                    ((System_String_o *)pMVar9,(System_String_o *)**(undefined8 **)(TypeInfo_MapObjectCollideWith + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = System_String__op_Equality
                      ((System_String_o *)pMVar9,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 8),
                       (MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = System_String__op_Equality
                        ((System_String_o *)pMVar9,
                         *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x10),(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = System_String__op_Equality
                          ((System_String_o *)pMVar9,
                           *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x18),(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = System_String__op_Equality
                            ((System_String_o *)pMVar9,
                             *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x20),(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar3 = System_String__op_Equality
                              ((System_String_o *)pMVar9,
                               *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x28),(MethodInfo *)0x0)
            ;
            if ((char)bVar3 == '\0') {
              if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar3 = System_String__op_Equality
                                ((System_String_o *)pMVar9,
                                 *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30),
                                 (MethodInfo *)0x0);
              if ((char)bVar3 == '\0') {
                if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar3 = System_String__op_Equality
                                  ((System_String_o *)pMVar9,
                                   *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x40),
                                   (MethodInfo *)0x0);
                if ((char)bVar3 == '\0') {
                  if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar3 = System_String__op_Equality
                                    ((System_String_o *)pMVar9,
                                     *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x38),
                                     (MethodInfo *)0x0);
                  if (((char)bVar3 != '\0') && (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0)) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                }
                else if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
              }
              else if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
            }
            else if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
          }
          else if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
        }
        else if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
      }
      else if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
    }
    else if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
  }
  else if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  return;
}


// Map.MapLoader$$SetDefaultTiling
// il2cpp: void Map_MapLoader__SetDefaultTiling (System_String_o* asset, UnityEngine_Material_o* mat, UnityEngine_Vector2_o tiling, const MethodInfo* method);
// 0x40adf00

void Map_MapLoader__SetDefaultTiling
               (System_String_o *asset,UnityEngine_Material_o *mat,UnityEngine_Vector2_o tiling,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  undefined8 *puVar3;
  System_String_o *pSVar4;
  UnityEngine_Object_o *value;
  undefined8 *puVar5;
  System_String_o *str2;
  System_String_o *a;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector4_o value_02;
  
  if (g_data_057ac4b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"FX/LavaCube1");
    il2cpp_runtime_helper_023445d0(&"_BaseColorTiling");
    il2cpp_runtime_helper_023445d0(&"_EmitColorTiling");
    il2cpp_runtime_helper_023445d0(&"FX/WaterCube1");
    il2cpp_runtime_helper_023445d0(&"_Tiling_1");
    il2cpp_runtime_helper_023445d0(&"_Normal_Tiling");
    il2cpp_runtime_helper_023445d0(&"_Tiling");
    g_data_057ac4b3 = '\x01';
  }
  str2 = "FX/WaterCube1";
  pSVar4 = asset;
  bVar2 = System_String__op_Equality(asset,"FX/WaterCube1",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    str2 = "FX/LavaCube1";
    bVar2 = System_String__op_Equality(asset,"FX/LavaCube1",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    if (mat != (UnityEngine_Material_o *)0x0) {
      value_00.fields.z = 0.0;
      value_00.fields.w = 0.0;
      value_00.fields._0_8_ = tiling.fields;
      UnityEngine_Material__SetVector(mat,"_BaseColorTiling",value_00,(MethodInfo *)0x0);
      puVar5 = (undefined8 *)&"_Normal_Tiling";
      puVar3 = &"_EmitColorTiling";
      goto label_040adfec;
    }
  }
  else {
    asset = pSVar4;
    if (mat != (UnityEngine_Material_o *)0x0) {
      puVar5 = &"_Tiling_1";
      puVar3 = &"_Tiling";
label_040adfec:
      value_01.fields.z = 0.0;
      value_01.fields.w = 0.0;
      value_01.fields._0_8_ = tiling.fields;
      UnityEngine_Material__SetVector(mat,(System_String_o *)*puVar3,value_01,(MethodInfo *)0x0);
      value_02.fields.z = 0.0;
      value_02.fields.w = 0.0;
      value_02.fields._0_8_ = tiling.fields;
      UnityEngine_Material__SetVector(mat,(System_String_o *)*puVar5,value_02,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ac4b9 = '\x01';
  }
  pSVar4 = System_String__Concat_3af7150(asset,"/",str2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
  a = (System_String_o *)0x0;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)pSVar4,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value = ApplicationManagers_ResourceManager__LoadAsset(asset,str2,0,(MethodInfo *)0x0);
      a = asset;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ae19e;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)pSVar4,(Il2CppObject *)value,MethodInfo_Void_Add);
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
    a = (System_String_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                (pSVar1,(Il2CppObject *)pSVar4,MethodInfo_Object_get_Item);
      return;
    }
  }
label_040ae19e:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057ac4b8 = '\x01';
  }
  if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = System_String__op_Equality
                    (a,(System_String_o *)**(undefined8 **)(TypeInfo_MapObjectCollideWith + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = System_String__op_Equality
                      (a,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 8),(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = System_String__op_Equality
                        (a,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x10),(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = System_String__op_Equality
                          (a,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x18),(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar2 = System_String__op_Equality
                            (a,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x20),(MethodInfo *)0x0)
          ;
          if ((char)bVar2 == '\0') {
            if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar2 = System_String__op_Equality
                              (a,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x28),
                               (MethodInfo *)0x0);
            if ((char)bVar2 == '\0') {
              if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar2 = System_String__op_Equality
                                (a,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30),
                                 (MethodInfo *)0x0);
              if ((char)bVar2 == '\0') {
                if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar2 = System_String__op_Equality
                                  (a,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x40),
                                   (MethodInfo *)0x0);
                if ((char)bVar2 == '\0') {
                  if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar2 = System_String__op_Equality
                                    (a,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x38),
                                     (MethodInfo *)0x0);
                  if (((char)bVar2 != '\0') && (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0)) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                }
                else if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
              }
              else if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
            }
            else if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
          }
          else if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
        }
        else if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
      }
      else if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
    }
    else if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
  }
  else if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  return;
}


// Map.MapLoader$$SetMaterial
// il2cpp: void Map_MapLoader__SetMaterial (UnityEngine_GameObject_o* go, System_String_o* asset, Map_MapScriptBaseMaterial_o* material, bool visible, bool editor, const MethodInfo* method);
// 0x40ac510

void Map_MapLoader__SetMaterial
               (UnityEngine_GameObject_o *go,System_String_o *asset,Map_MapScriptBaseMaterial_o *material,
               bool_conflict visible,bool_conflict editor,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Vector2_o value;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_RuntimeTypeHandle_o handle;
  char cVar2;
  bool_conflict bVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_object__o *__this_08;
  System_String_o **__this_09;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  Il2CppClass *pIVar8;
  UnityEngine_Object_o *x;
  UnityEngine_Renderer_o *pUVar9;
  UnityEngine_Material_o *value_00;
  long *x_00;
  System_Type_o *pSVar10;
  System_Type_o *pSVar11;
  System_String_array *pSVar12;
  Il2CppObject *pIVar13;
  UnityEngine_Texture_o *value_01;
  long *plVar14;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar15;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  int iVar16;
  long lVar17;
  Il2CppRGCTXData *pIVar18;
  Il2CppRGCTXData *__this_10;
  long *plVar19;
  long *plVar20;
  uint uVar21;
  UnityEngine_Color_o UVar22;
  undefined1 auVar23 [12];
  undefined8 in_stack_ffffffffffffff28;
  Il2CppRGCTXData *in_stack_ffffffffffffff30;
  undefined4 in_stack_ffffffffffffff38;
  uint in_stack_ffffffffffffff3c;
  Il2CppRGCTXData *local_c0;
  Il2CppRGCTXData *local_b8;
  Il2CppClass *local_b0;
  Il2CppRGCTXData local_a8;
  undefined8 uStack_a0;
  Il2CppRGCTXData *local_98;
  Il2CppRGCTXData local_88;
  undefined8 uStack_80;
  Il2CppRGCTXData *local_78;
  Il2CppRGCTXData local_68;
  undefined8 uStack_60;
  Il2CppRGCTXData *local_58;
  Il2CppRGCTXData *local_50;
  Il2CppRGCTXData local_48;
  undefined8 uStack_40;
  
  plVar20 = (long *)(ulong)(uint)visible;
  if (g_data_057ac4b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapTextures);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Material_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBasicMaterial_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Material_Material);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Material_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectShader);
    il2cpp_runtime_helper_023445d0(&TypeRef_MapScriptBasicMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptDefaultTiledMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptLegacyMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptReflectiveMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"_TintColor");
    il2cpp_runtime_helper_023445d0(&"OutlineGizmo");
    il2cpp_runtime_helper_023445d0(&"Map/Materials");
    il2cpp_runtime_helper_023445d0(&"Editor");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Map/Textures/");
    il2cpp_runtime_helper_023445d0(&"_SpecularMap");
    il2cpp_runtime_helper_023445d0(&"Misc/None");
    il2cpp_runtime_helper_023445d0(&"Texture");
    il2cpp_runtime_helper_023445d0(&"Map/Legacy/Materials");
    il2cpp_runtime_helper_023445d0(&"Legacy");
    il2cpp_runtime_helper_023445d0(&"Map");
    il2cpp_runtime_helper_023445d0(&"Material");
    g_data_057ac4b4 = '\x01';
  }
  local_a8.rgctxDataDummy = (void *)0x0;
  uStack_a0 = 0;
  local_98 = (Il2CppRGCTXData *)0x0;
  local_88.rgctxDataDummy = (void *)0x0;
  uStack_80 = 0;
  local_78 = (Il2CppRGCTXData *)0x0;
  local_b0 = (Il2CppClass *)0x0;
  bVar3 = System_String__op_Equality(asset,"None",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  __this_09 = (System_String_o **)asset;
  local_c0 = (Il2CppRGCTXData *)asset;
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_040ad9d5;
  pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00(go,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
  local_b8 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Renderer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)local_b8,MethodInfo_List_1_UnityEngine_Renderer);
  if (((char)visible == '\0') && ((char)editor != '\0')) {
    if (asset == (System_String_o *)0x0) goto label_040ad9d5;
    bVar3 = System_String__Contains(asset,"Editor",(MethodInfo *)0x0);
    plVar20 = (long *)CONCAT71((uint7)(uint3)((uint)visible >> 8),1);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      material = *(Map_MapScriptBaseMaterial_o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x70);
    }
  }
  if (pSVar5 == (System_Object_array *)0x0) goto label_040ad9d5;
  in_stack_ffffffffffffff3c = (uint)plVar20;
  uVar21 = (uint)pSVar5->max_length;
  if (local_b8 == (Il2CppRGCTXData *)0x0) {
    if (0 < (int)uVar21) {
      lVar17 = 0;
      __this_09 = &"OutlineGizmo";
      do {
        if (uVar21 <= (uint)lVar17) goto label_040ad9da;
        if ((UnityEngine_Object_o *)pSVar5->m_Items[lVar17] == (UnityEngine_Object_o *)0x0) goto label_040ad9d5;
        pSVar6 = UnityEngine_Object__get_name
                           ((UnityEngine_Object_o *)pSVar5->m_Items[lVar17],(MethodInfo *)0x0);
        bVar3 = System_String__op_Inequality(pSVar6,"OutlineGizmo",(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') goto label_040ad9d5;
        uVar21 = (uint)pSVar5->max_length;
        lVar17 = lVar17 + 1;
      } while ((int)lVar17 < (int)uVar21);
    }
  }
  else if (0 < (int)uVar21) {
    __this_09 = (System_String_o **)0x0;
    plVar20 = &MethodInfo_Void_Add;
    if (uVar21 == 0) goto label_040ad9da;
    do {
      iVar16 = (int)__this_09;
      pIVar8 = (Il2CppClass *)pSVar5->m_Items[iVar16];
      if (pIVar8 == (Il2CppClass *)0x0) goto label_040ad9d5;
      pSVar6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pIVar8,(MethodInfo *)0x0);
      bVar3 = System_String__op_Inequality(pSVar6,"OutlineGizmo",(MethodInfo *)0x0);
      lVar17 = MethodInfo_Void_Add;
      if ((char)bVar3 == '\0') {
label_040ac937:
        __this_09 = (System_String_o **)(ulong)(iVar16 + 1U);
        uVar21 = (uint)pSVar5->max_length;
        if ((int)uVar21 <= (int)(iVar16 + 1U)) break;
      }
      else {
        *(int *)((long)local_b8 + 0x1c) = *(int *)((long)local_b8 + 0x1c) + 1;
        pMVar15 = local_b8[2].method;
        if (pMVar15 == (MethodInfo *)0x0) goto label_040ad9d5;
        uVar21 = *(uint *)(local_b8 + 3);
        if (*(uint *)&pMVar15->name <= uVar21) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)local_b8,(Il2CppObject *)pIVar8,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          goto label_040ac937;
        }
        *(uint *)(local_b8 + 3) = uVar21 + 1;
        (&pMVar15->klass)[(int)uVar21] = pIVar8;
        il2cpp_runtime_helper_022b4080(&pMVar15->klass + (int)uVar21);
        __this_09 = (System_String_o **)(ulong)(iVar16 + 1U);
        uVar21 = (uint)pSVar5->max_length;
        if ((int)uVar21 <= (int)(iVar16 + 1U)) break;
      }
      if (uVar21 <= (uint)__this_09) goto label_040ad9da;
    } while( true );
  }
  plVar14 = &TypeInfo_MapLoader;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x48);
  if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ad9d5;
  bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar7,(Il2CppObject *)asset,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar3 != '\0') goto label_040acbe5;
  __this_09 = (System_String_o **)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_09,MethodInfo_List_1_UnityEngine_Material);
  if (local_b8 == (Il2CppRGCTXData *)0x0) goto label_040ad9d5;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&local_68,
             (System_Collections_Generic_List_object__o *)local_b8,MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
  local_98 = local_58;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  x_00 = &TypeInfo_MapLoader;
  plVar19 = (long *)material;
  if ((Il2CppRGCTXData *)__this_09 == (Il2CppRGCTXData *)0x0) {
    __this_00.fields._8_8_ = in_stack_ffffffffffffff30;
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
    __this_00.fields._current._0_4_ = in_stack_ffffffffffffff38;
    __this_00.fields._current._4_4_ = in_stack_ffffffffffffff3c;
    bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_00,(MethodInfo_321A1D0 *)&local_a8);
    if ((char)bVar3 != '\0') goto label_040ada1b;
  }
  else {
    while (__this.fields._8_8_ = in_stack_ffffffffffffff30,
          __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28,
          __this.fields._current._0_4_ = in_stack_ffffffffffffff38,
          __this.fields._current._4_4_ = in_stack_ffffffffffffff3c,
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this,(MethodInfo_321A1D0 *)&local_a8), (char)bVar3 != '\0') {
      pIVar18 = in_stack_ffffffffffffff30;
      uVar21 = in_stack_ffffffffffffff3c;
      if (local_98 == (Il2CppRGCTXData *)0x0) goto label_040ada25;
      pIVar8 = (Il2CppClass *)
               UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)local_98,(MethodInfo *)0x0);
      lVar17 = MethodInfo_Void_Add;
      *(int *)((long)__this_09 + 0x1c) = *(int *)((long)__this_09 + 0x1c) + 1;
      pMVar15 = ((Il2CppRGCTXData *)(__this_09 + 2))->method;
      if (pMVar15 == (MethodInfo *)0x0) goto label_040ad9df;
      uVar21 = *(uint *)(__this_09 + 3);
      if (uVar21 < *(uint *)&pMVar15->name) {
        *(uint *)(__this_09 + 3) = uVar21 + 1;
        (&pMVar15->klass)[(int)uVar21] = pIVar8;
        il2cpp_runtime_helper_022b4080(&pMVar15->klass + (int)uVar21,pIVar8);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_09,(Il2CppObject *)pIVar8,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  __this_01.fields._8_8_ = in_stack_ffffffffffffff30;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
  __this_01.fields._current._0_4_ = in_stack_ffffffffffffff38;
  __this_01.fields._current._4_4_ = in_stack_ffffffffffffff3c;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_01,(MethodInfo_321A1C0 *)&local_a8);
  do {
    pIVar8 = (Il2CppClass *)*x_00;
    if (*(int *)&(pIVar8->_2).field_0x1c == 0) {
      il2cpp_runtime_helper_02337ed0();
      pIVar8 = (Il2CppClass *)*x_00;
    }
    pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)((long)pIVar8->static_fields + 0x48)
    ;
    plVar20 = x_00;
    if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_040ad9d5:
      il2cpp_runtime_helper_022b2c90();
label_040ad9da:
      il2cpp_runtime_helper_022b2ca0();
      plVar19 = (long *)material;
      x_00 = plVar20;
label_040ad9df:
      il2cpp_runtime_helper_022b2c90();
label_040ad9e4:
      il2cpp_runtime_helper_022b2c90();
label_040ad9e9:
      il2cpp_runtime_helper_022b2c90();
label_040ad9ee:
      il2cpp_runtime_helper_022b2c90();
label_040ad9f3:
      il2cpp_runtime_helper_022b2c90();
label_040ad9f8:
      il2cpp_runtime_helper_022b2c90();
label_040ad9fd:
      il2cpp_runtime_helper_022b2fd0(in_stack_ffffffffffffff30);
label_040ada07:
      il2cpp_runtime_helper_022b2c90();
label_040ada0c:
      il2cpp_runtime_helper_022b2c90();
label_040ada11:
      il2cpp_runtime_helper_022b2c90();
label_040ada16:
      il2cpp_runtime_helper_022b2c90();
label_040ada1b:
      __this_10 = local_98;
      material = (Map_MapScriptBaseMaterial_o *)plVar19;
      plVar20 = x_00;
      pIVar18 = in_stack_ffffffffffffff30;
      uVar21 = in_stack_ffffffffffffff3c;
      if (local_98 == (Il2CppRGCTXData *)0x0) {
label_040ada25:
        il2cpp_runtime_helper_022b2c90();
label_040ada2a:
        __this_10 = (Il2CppRGCTXData *)__this_09;
        il2cpp_runtime_helper_022b2fd0();
        material = (Map_MapScriptBaseMaterial_o *)plVar19;
        plVar20 = x_00;
      }
      UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)__this_10,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar7,(Il2CppObject *)local_c0,(Il2CppObject *)__this_09,MethodInfo_Void_Add);
      plVar14 = x_00;
label_040acbe5:
      if ((Il2CppRGCTXData *)material == (Il2CppRGCTXData *)0x0) goto label_040ad9d5;
      pIVar18 = (Il2CppRGCTXData *)((Il2CppRGCTXData *)((long)material + 0x10))->method;
      __this_09 = (System_String_o **)material;
      uVar21 = in_stack_ffffffffffffff3c;
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_09 = (System_String_o **)material;
        uVar21 = in_stack_ffffffffffffff3c;
      }
      bVar3 = System_String__op_Equality
                        ((System_String_o *)pIVar18,(System_String_o *)**(undefined8 **)(TypeInfo_MapObjectShader + 0xb8),
                         (MethodInfo *)0x0);
      in_stack_ffffffffffffff30 = (Il2CppRGCTXData *)__this_09;
      if ((char)bVar3 != '\0') {
label_040acca6:
        __this_09 = (System_String_o **)pIVar18;
        pSVar6 = (System_String_o *)
                 (*in_stack_ffffffffffffff30->klass->vtable[8].methodPtr)
                           (in_stack_ffffffffffffff30,in_stack_ffffffffffffff30->klass->vtable[8].method);
        material = (Map_MapScriptBaseMaterial_o *)
                   System_String__Concat_3ae5ba0((System_String_o *)local_c0,pSVar6,(MethodInfo *)0x0);
        pIVar8 = (Il2CppClass *)*plVar14;
        in_stack_ffffffffffffff3c = uVar21;
        if (*(int *)&(pIVar8->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
          pIVar8 = (Il2CppClass *)*plVar14;
          in_stack_ffffffffffffff3c = uVar21;
        }
        pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  ((long)pIVar8->static_fields + 0x50);
        plVar20 = (long *)local_c0;
        if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            (pSVar7,(Il2CppObject *)material,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar3 == '\0') {
            pIVar8 = (Il2CppClass *)*plVar14;
            if (*(int *)&(pIVar8->_2).field_0x1c == 0) {
              il2cpp_runtime_helper_02337ed0();
              pIVar8 = (Il2CppClass *)*plVar14;
            }
            pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                      ((long)pIVar8->static_fields + 0x48);
            if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              local_50 = (Il2CppRGCTXData *)material;
              __this_08 = (System_Collections_Generic_List_object__o *)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar7,(Il2CppObject *)local_c0,MethodInfo_List_1_UnityEngine_Material_get_Item);
              __this_09 = (System_String_o **)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
              System_Collections_Generic_List_object____ctor
                        ((System_Collections_Generic_List_object__o *)__this_09,MethodInfo_List_1_UnityEngine_Material);
              pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
                       il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Material_Material);
              System_Collections_Generic_Dictionary_object__object____ctor(pSVar7,MethodInfo_Dictionary_2_UnityEngine_Material_UnityEngine_Material);
              material = (Map_MapScriptBaseMaterial_o *)0x0;
              if (__this_08 != (System_Collections_Generic_List_object__o *)0x0) {
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)&local_68,__this_08,MethodInfo_List_1_T_Enumerator_UnityEngine_Material_GetEnumerator
                          );
                local_78 = local_58;
                local_88 = local_68;
                uStack_80 = uStack_60;
                plVar19 = (long *)&local_88;
                while (__this_02.fields._8_8_ = in_stack_ffffffffffffff30,
                      __this_02.fields._list =
                           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28,
                      __this_02.fields._current._0_4_ = in_stack_ffffffffffffff38,
                      __this_02.fields._current._4_4_ = in_stack_ffffffffffffff3c,
                      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                        (__this_02,(MethodInfo_321A1D0 *)plVar19), x_00 = (long *)local_78,
                      (char)bVar3 != '\0') {
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar3 = UnityEngine_Object__op_Equality
                                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  lVar17 = MethodInfo_Void_Add;
                  plVar20 = x_00;
                  if ((char)bVar3 == '\0') {
                    if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                    goto label_040ad9e4;
                    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                      (pSVar7,(Il2CppObject *)x_00,(Il2CppObject **)&local_b0,MethodInfo_Boolean_TryGetValue);
                    if ((char)bVar3 == '\0') {
                      pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
                      UnityEngine_Material___ctor_4dc9e70
                                ((UnityEngine_Material_o *)pIVar8,(UnityEngine_Material_o *)x_00,
                                 (MethodInfo *)0x0);
                      pMVar15 = in_stack_ffffffffffffff30[2].method;
                      local_b0 = pIVar8;
                      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      bVar3 = System_String__op_Inequality
                                        ((System_String_o *)pMVar15,
                                         *(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 8),
                                         (MethodInfo *)0x0);
                      pIVar8 = local_b0;
                      if ((char)bVar3 != '\0') {
                        if (in_stack_ffffffffffffff30[3].method == (MethodInfo *)0x0) goto label_040ada16;
                        UVar22 = Utility_Color255__ToColor
                                           ((Utility_Color255_o *)in_stack_ffffffffffffff30[3].method,
                                            (MethodInfo *)0x0);
                        if (pIVar8 == (Il2CppClass *)0x0) goto label_040ada11;
                        UnityEngine_Material__set_color
                                  ((UnityEngine_Material_o *)pIVar8,UVar22,(MethodInfo *)0x0);
                      }
                      pMVar15 = in_stack_ffffffffffffff30[2].method;
                      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      bVar3 = System_String__op_Equality
                                        ((System_String_o *)pMVar15,
                                         *(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x10),
                                         (MethodInfo *)0x0);
                      pIVar8 = local_b0;
                      if ((char)bVar3 != '\0') {
                        bVar1 = (TypeInfo_MapScriptDefaultTiledMaterial->_2).naturalAligment;
                        if (((in_stack_ffffffffffffff30->klass->_2).naturalAligment < bVar1) ||
                           ((in_stack_ffffffffffffff30->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                            TypeInfo_MapScriptDefaultTiledMaterial)) goto label_040ad9fd;
                        local_48 = in_stack_ffffffffffffff30[4];
                        uStack_40 = 0;
                        pMVar15 = extraout_RDX;
                        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                          pMVar15 = extraout_RDX_00;
                        }
                        Map_MapLoader__SetDefaultTiling
                                  ((System_String_o *)local_c0,(UnityEngine_Material_o *)pIVar8,
                                   (UnityEngine_Vector2_o)local_48,pMVar15);
                      }
                      System_Collections_Generic_Dictionary_object__object___Add
                                (pSVar7,(Il2CppObject *)x_00,(Il2CppObject *)local_b0,MethodInfo_Void_Add);
                    }
                    lVar17 = MethodInfo_Void_Add;
                    if ((Il2CppRGCTXData *)__this_09 == (Il2CppRGCTXData *)0x0) goto label_040ad9f8;
                    *(int *)((long)__this_09 + 0x1c) = *(int *)((long)__this_09 + 0x1c) + 1;
                    pMVar15 = ((Il2CppRGCTXData *)(__this_09 + 2))->method;
                    if (pMVar15 == (MethodInfo *)0x0) goto label_040ad9f3;
                    uVar21 = *(uint *)(__this_09 + 3);
                    if (uVar21 < *(uint *)&pMVar15->name) {
                      *(uint *)(__this_09 + 3) = uVar21 + 1;
                      (&pMVar15->klass)[(int)uVar21] = local_b0;
                      il2cpp_runtime_helper_022b4080(&pMVar15->klass + (int)uVar21);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_09,
                                 (Il2CppObject *)local_b0,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                  else {
                    if ((Il2CppRGCTXData *)__this_09 == (Il2CppRGCTXData *)0x0) goto label_040ad9e9;
                    *(int *)((long)__this_09 + 0x1c) = *(int *)((long)__this_09 + 0x1c) + 1;
                    pMVar15 = ((Il2CppRGCTXData *)(__this_09 + 2))->method;
                    if (pMVar15 == (MethodInfo *)0x0) goto label_040ad9ee;
                    uVar21 = *(uint *)(__this_09 + 3);
                    if (uVar21 < *(uint *)&pMVar15->name) {
                      *(uint *)(__this_09 + 3) = uVar21 + 1;
                      (&pMVar15->klass)[(int)uVar21] = (Il2CppClass *)0x0;
                      il2cpp_runtime_helper_022b4080(&pMVar15->klass + (int)uVar21,0);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_09,(Il2CppObject *)0x0,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                }
                __this_03.fields._8_8_ = in_stack_ffffffffffffff30;
                __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
                __this_03.fields._current._0_4_ = in_stack_ffffffffffffff38;
                __this_03.fields._current._4_4_ = in_stack_ffffffffffffff3c;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_03,(MethodInfo_321A1C0 *)&local_88);
                material = (Map_MapScriptBaseMaterial_o *)local_50;
                plVar14 = &TypeInfo_MapLoader;
                if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                          (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x50);
                if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  System_Collections_Generic_Dictionary_object__object___Add
                            (pSVar7,(Il2CppObject *)material,(Il2CppObject *)__this_09,MethodInfo_Void_Add);
                  goto label_040ad0fc;
                }
              }
            }
          }
          else {
label_040ad0fc:
            pIVar8 = (Il2CppClass *)*plVar14;
            if (*(int *)&(pIVar8->_2).field_0x1c == 0) {
              il2cpp_runtime_helper_02337ed0();
              pIVar8 = (Il2CppClass *)*plVar14;
            }
            pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                      ((long)pIVar8->static_fields + 0x50);
            if ((pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
               (material = (Map_MapScriptBaseMaterial_o *)
                           System_Collections_Generic_Dictionary_object__object___get_Item
                                     (pSVar7,(Il2CppObject *)material,MethodInfo_List_1_UnityEngine_Material_get_Item),
               local_b8 != (Il2CppRGCTXData *)0x0)) {
              if ((Il2CppRGCTXData *)material != (Il2CppRGCTXData *)0x0) {
                if (*(int *)(local_b8 + 3) < 1) {
                  return;
                }
                iVar16 = 0;
                uVar21 = in_stack_ffffffffffffff3c & 0xff;
                do {
                  plVar20 = (long *)&MethodInfo_Material_get_Item;
                  if (iVar16 < *(int *)((long)material + 0x18)) {
                    x = (UnityEngine_Object_o *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)material,iVar16,MethodInfo_Material_get_Item);
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
                    ;
                    if ((char)bVar3 != '\0') {
                      pUVar9 = (UnityEngine_Renderer_o *)
                               System_Collections_Generic_List_object___get_Item
                                         ((System_Collections_Generic_List_object__o *)local_b8,iVar16,
                                          MethodInfo_Renderer_get_Item);
                      value_00 = (UnityEngine_Material_o *)
                                 System_Collections_Generic_List_object___get_Item
                                           ((System_Collections_Generic_List_object__o *)material,iVar16,
                                            MethodInfo_Material_get_Item);
                      __this_09 = (System_String_o **)0x0;
                      if (pUVar9 == (UnityEngine_Renderer_o *)0x0) goto label_040ad9d5;
                      UnityEngine_Renderer__set_sharedMaterial(pUVar9,value_00,(MethodInfo *)0x0);
                    }
                  }
                  pUVar9 = (UnityEngine_Renderer_o *)
                           System_Collections_Generic_List_object___get_Item
                                     ((System_Collections_Generic_List_object__o *)local_b8,iVar16,
                                      MethodInfo_Renderer_get_Item);
                  __this_09 = (System_String_o **)local_b8;
                  if (pUVar9 == (UnityEngine_Renderer_o *)0x0) goto label_040ad9d5;
                  UnityEngine_Renderer__set_enabled(pUVar9,uVar21,(MethodInfo *)0x0);
                  iVar16 = iVar16 + 1;
                  if (*(int *)(local_b8 + 3) <= iVar16) {
                    return;
                  }
                } while( true );
              }
              if (*(int *)(local_b8 + 3) < 1) {
                return;
              }
            }
          }
        }
        goto label_040ad9d5;
      }
      pIVar18 = (Il2CppRGCTXData *)((Il2CppRGCTXData *)(__this_09 + 2))->method;
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = System_String__op_Equality
                        ((System_String_o *)pIVar18,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 8),
                         (MethodInfo *)0x0);
      in_stack_ffffffffffffff30 = (Il2CppRGCTXData *)__this_09;
      if ((char)bVar3 != '\0') goto label_040acca6;
      pIVar18 = (Il2CppRGCTXData *)((Il2CppRGCTXData *)(__this_09 + 2))->method;
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = System_String__op_Equality
                        ((System_String_o *)pIVar18,
                         *(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x10),(MethodInfo *)0x0);
      in_stack_ffffffffffffff30 = (Il2CppRGCTXData *)__this_09;
      if ((char)bVar3 != '\0') goto label_040acca6;
      pIVar18 = (Il2CppRGCTXData *)__this_09;
      x_00 = (long *)(*((Il2CppClass *)*__this_09)->vtable[8].methodPtr)(__this_09);
      pIVar8 = (Il2CppClass *)*plVar14;
      if (*(int *)&(pIVar8->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
        pIVar8 = (Il2CppClass *)*plVar14;
      }
      pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                ((long)pIVar8->static_fields + 0x58);
      material = (Map_MapScriptBaseMaterial_o *)&"None";
      plVar20 = x_00;
      in_stack_ffffffffffffff30 = pIVar18;
      in_stack_ffffffffffffff3c = uVar21;
      if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ad9d5;
      bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar7,(Il2CppObject *)x_00,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar3 != '\0') {
        pIVar8 = (Il2CppClass *)*plVar14;
        if (*(int *)&(pIVar8->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
          pIVar8 = (Il2CppClass *)*plVar14;
        }
        pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  ((long)pIVar8->static_fields + 0x58);
        in_stack_ffffffffffffff30 = pIVar18;
        in_stack_ffffffffffffff3c = uVar21;
        if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ad9d5;
        x_00 = (long *)System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar7,(Il2CppObject *)x_00,MethodInfo_Material_get_Item);
        in_stack_ffffffffffffff30 = pIVar18;
joined_r0x040ad2df:
        plVar20 = x_00;
        if (local_b8 != (Il2CppRGCTXData *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&local_68,
                     (System_Collections_Generic_List_object__o *)local_b8,MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
          local_98 = local_58;
          local_a8 = local_68;
          uStack_a0 = uStack_60;
          plVar19 = &TypeInfo_Object;
          __this_09 = (System_String_o **)((ulong)uVar21 & 0xff);
          do {
            __this_04.fields._8_8_ = in_stack_ffffffffffffff30;
            __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
            __this_04.fields._current._0_4_ = in_stack_ffffffffffffff38;
            __this_04.fields._current._4_4_ = in_stack_ffffffffffffff3c;
            bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_04,(MethodInfo_321A1D0 *)&local_a8);
            pIVar18 = local_98;
            if ((char)bVar3 == '\0') {
              __this_05.fields._8_8_ = in_stack_ffffffffffffff30;
              __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
              __this_05.fields._current._0_4_ = in_stack_ffffffffffffff38;
              __this_05.fields._current._4_4_ = in_stack_ffffffffffffff3c;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_05,(MethodInfo_321A1C0 *)&local_a8);
              return;
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar3 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') {
              if (pIVar18 == (Il2CppRGCTXData *)0x0) goto label_040ada0c;
            }
            else {
              if (pIVar18 == (Il2CppRGCTXData *)0x0) goto label_040ada07;
              UnityEngine_Renderer__set_sharedMaterial
                        ((UnityEngine_Renderer_o *)pIVar18,(UnityEngine_Material_o *)x_00,(MethodInfo *)0x0);
            }
            UnityEngine_Renderer__set_enabled
                      ((UnityEngine_Renderer_o *)pIVar18,(bool_conflict)__this_09,(MethodInfo *)0x0);
          } while( true );
        }
        goto label_040ad9d5;
      }
      pMVar15 = ((Il2CppRGCTXData *)(__this_09 + 2))->method;
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = Map_MapObjectShader__IsLegacyShader((System_String_o *)pMVar15,(MethodInfo *)0x0);
      handle = TypeRef_MapScriptBasicMaterial;
      plVar19 = (long *)&"None";
      if ((char)bVar3 == '\0') {
        if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar10 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        pSVar11 = System_Object__GetType((Il2CppObject *)__this_09,(MethodInfo *)0x0);
        in_stack_ffffffffffffff30 = pIVar18;
        in_stack_ffffffffffffff3c = uVar21;
        if (pSVar10 == (System_Type_o *)0x0) goto label_040ad9d5;
        cVar2 = (*(pSVar10->klass->vtable)._22_IsAssignableFrom.methodPtr)
                          (pSVar10,pSVar11,(pSVar10->klass->vtable)._22_IsAssignableFrom.method);
        if (cVar2 == '\0') {
          plVar20 = (long *)0x0;
          pIVar8 = (Il2CppClass *)*plVar14;
          iVar16 = *(int *)&(pIVar8->_2).field_0x1c;
          in_stack_ffffffffffffff30 = pIVar18;
          in_stack_ffffffffffffff3c = uVar21;
          goto joined_r0x040ad770;
        }
        bVar1 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
        if (((((Il2CppClass *)*__this_09)->_2).naturalAligment < bVar1) ||
           ((((Il2CppClass *)*__this_09)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MapScriptBasicMaterial))
        goto label_040ada2a;
        pSVar6 = System_String__Concat_3ae5ba0
                           ((System_String_o *)((Il2CppRGCTXData *)(__this_09 + 2))->method,"Material",
                            (MethodInfo *)0x0);
        pMVar15 = extraout_RDX_03;
        if (*(int *)&(((Il2CppClass *)*plVar14)->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar15 = extraout_RDX_04;
        }
        __this_09 = (System_String_o **)Map_MapLoader__LoadAssetCached("Map/Materials",pSVar6,pMVar15);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        plVar20 = (long *)UnityEngine_Object__Instantiate_4e01490
                                    ((UnityEngine_Object_o *)__this_09,(MethodInfo *)0x0);
        if ((Il2CppRGCTXData *)plVar20 != (Il2CppRGCTXData *)0x0) {
          bVar1 = (TypeInfo_Material->_2).naturalAligment;
          if (((((Il2CppClass *)*plVar20)->_2).naturalAligment < bVar1) ||
             ((((Il2CppClass *)*plVar20)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Material))
          goto label_040ada3e;
        }
        in_stack_ffffffffffffff30 = pIVar18;
        bVar3 = System_String__op_Inequality
                          ((System_String_o *)pIVar18[4].method,"Misc/None",(MethodInfo *)0x0);
        if (((char)bVar3 == '\0') ||
           (bVar3 = System_String__op_Inequality
                              ((System_String_o *)pIVar18[4].method,"None",(MethodInfo *)0x0),
           (char)bVar3 == '\0')) goto label_040ad835;
        in_stack_ffffffffffffff3c = uVar21;
        if (((System_Collections_Generic_List_Enumerator_T__c *)pIVar18[4].method ==
             (System_Collections_Generic_List_Enumerator_T__c *)0x0) ||
           (pSVar12 = System_String__Split((System_String_o *)pIVar18[4].method,0x2f,0,(MethodInfo *)0x0),
           in_stack_ffffffffffffff3c = uVar21, pSVar12 == (System_String_array *)0x0)) goto label_040ad9d5;
        iVar16 = (int)pSVar12->max_length;
        if ((iVar16 != 0) && (iVar16 != 1)) {
          local_c0 = (Il2CppRGCTXData *)pSVar12->m_Items[0];
          __this_09 = (System_String_o **)pSVar12->m_Items[1];
          uVar4 = System_String__op_Equality((System_String_o *)local_c0,"Legacy",(MethodInfo *)0x0);
          material = (Map_MapScriptBaseMaterial_o *)(ulong)uVar4;
          pIVar18 = in_stack_ffffffffffffff30;
          if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pIVar18 = in_stack_ffffffffffffff30;
          }
          pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                    (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 8);
          in_stack_ffffffffffffff30 = pIVar18;
          in_stack_ffffffffffffff3c = uVar21;
          if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ad9d5;
          bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            (pSVar7,(Il2CppObject *)__this_09,MethodInfo_Boolean_ContainsKey);
          in_stack_ffffffffffffff30 = pIVar18;
          if ((char)bVar3 != '\0') {
            if ((char)uVar4 != '\0') {
              if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                        (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x28);
              in_stack_ffffffffffffff30 = pIVar18;
              in_stack_ffffffffffffff3c = uVar21;
              if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ad9d5;
              bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                (pSVar7,(Il2CppObject *)__this_09,MethodInfo_Boolean_ContainsKey);
              in_stack_ffffffffffffff30 = pIVar18;
              if ((char)bVar3 == '\0') goto label_040ad835;
            }
            if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                      (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 8);
            in_stack_ffffffffffffff30 = pIVar18;
            in_stack_ffffffffffffff3c = uVar21;
            if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ad9d5;
            pIVar13 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar7,(Il2CppObject *)__this_09,MethodInfo_MapScriptBasicMaterial_get_Item);
            if ((char)uVar4 == '\0') {
              material = (Map_MapScriptBaseMaterial_o *)
                         System_String__Concat_3ae5ba0
                                   ("Map/Textures/",(System_String_o *)local_c0,(MethodInfo *)0x0);
              __this_09 = (System_String_o **)
                          System_String__Concat_3ae5ba0
                                    ((System_String_o *)__this_09,"Texture",(MethodInfo *)0x0);
              pMVar15 = extraout_RDX_07;
              if (*(int *)&(((Il2CppClass *)*plVar14)->_2).field_0x1c == 0) {
                il2cpp_runtime_helper_02337ed0();
                pMVar15 = extraout_RDX_08;
              }
              value_01 = (UnityEngine_Texture_o *)
                         Map_MapLoader__LoadAssetCached
                                   ((System_String_o *)material,(System_String_o *)__this_09,pMVar15);
            }
            else {
              if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                        (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x28);
              material = (Map_MapScriptBaseMaterial_o *)&TypeInfo_BuiltinMapTextures;
              in_stack_ffffffffffffff30 = pIVar18;
              in_stack_ffffffffffffff3c = uVar21;
              if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ad9d5;
              __this_09 = (System_String_o **)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar7,(Il2CppObject *)__this_09,MethodInfo_String_get_Item);
              pMVar15 = extraout_RDX_05;
              if (*(int *)&(((Il2CppClass *)*plVar14)->_2).field_0x1c == 0) {
                il2cpp_runtime_helper_02337ed0();
                pMVar15 = extraout_RDX_06;
              }
              value_01 = (UnityEngine_Texture_o *)
                         Map_MapLoader__LoadAssetCached("Map",(System_String_o *)__this_09,pMVar15);
            }
            if (value_01 == (UnityEngine_Texture_o *)0x0) {
label_040ad7e6:
              value_01 = (UnityEngine_Texture_o *)0x0;
            }
            else if (value_01->klass != TypeInfo_Texture2D) {
              il2cpp_runtime_helper_022b2fd0(value_01);
              goto label_040ad7e6;
            }
            in_stack_ffffffffffffff30 = pIVar18;
            in_stack_ffffffffffffff3c = uVar21;
            if (((Il2CppRGCTXData *)plVar20 == (Il2CppRGCTXData *)0x0) ||
               (UnityEngine_Material__set_mainTexture
                          ((UnityEngine_Material_o *)plVar20,value_01,(MethodInfo *)0x0),
               in_stack_ffffffffffffff30 = pIVar18, in_stack_ffffffffffffff3c = uVar21,
               pIVar13 == (Il2CppObject *)0x0)) goto label_040ad9d5;
            value.fields.y = (float)((ulong)pIVar13[2].monitor >> 0x20) * SUB84(pIVar18[5],4);
            value.fields.x = SUB84(pIVar13[2].monitor,0) * SUB84(pIVar18[5],0);
            UnityEngine_Material__set_mainTextureScale
                      ((UnityEngine_Material_o *)plVar20,value,(MethodInfo *)0x0);
            UnityEngine_Material__set_mainTextureOffset
                      ((UnityEngine_Material_o *)plVar20,(UnityEngine_Vector2_o)pIVar18[6],(MethodInfo *)0x0);
          }
label_040ad835:
          in_stack_ffffffffffffff3c = uVar21;
          if ((pIVar18[3].method == (MethodInfo *)0x0) ||
             (UVar22 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar18[3].method,(MethodInfo *)0x0),
             in_stack_ffffffffffffff3c = uVar21, (Il2CppRGCTXData *)plVar20 == (Il2CppRGCTXData *)0x0))
          goto label_040ad9d5;
          UnityEngine_Material__set_color((UnityEngine_Material_o *)plVar20,UVar22,(MethodInfo *)0x0);
          bVar1 = (TypeInfo_MapScriptReflectiveMaterial->_2).naturalAligment;
          if ((bVar1 <= (in_stack_ffffffffffffff30->klass->_2).naturalAligment) &&
             ((in_stack_ffffffffffffff30->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_MapScriptReflectiveMaterial)) {
            if ((Il2CppRGCTXData *)in_stack_ffffffffffffff30[7].method == (Il2CppRGCTXData *)0x0)
            goto label_040ad9d5;
            UVar22 = Utility_Color255__ToColor
                               ((Utility_Color255_o *)in_stack_ffffffffffffff30[7].method,(MethodInfo *)0x0);
            UnityEngine_Material__SetColor
                      ((UnityEngine_Material_o *)plVar20,"_SpecularMap",UVar22,(MethodInfo *)0x0);
          }
          pIVar8 = (Il2CppClass *)*plVar14;
          iVar16 = *(int *)&(pIVar8->_2).field_0x1c;
          goto joined_r0x040ad770;
        }
        goto label_040ad9da;
      }
      bVar1 = (TypeInfo_MapScriptLegacyMaterial->_2).naturalAligment;
      if (((((Il2CppClass *)*__this_09)->_2).naturalAligment < bVar1) ||
         ((((Il2CppClass *)*__this_09)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MapScriptLegacyMaterial))
      goto label_040ada2a;
      pMVar15 = ((Il2CppRGCTXData *)(__this_09 + 2))->method;
      method_00 = extraout_RDX_01;
      if (*(int *)&(((Il2CppClass *)*plVar14)->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_02;
      }
      __this_09 = (System_String_o **)
                  Map_MapLoader__LoadAssetCached("Map/Legacy/Materials",(System_String_o *)pMVar15,method_00);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar20 = (long *)UnityEngine_Object__Instantiate_4e01490
                                  ((UnityEngine_Object_o *)__this_09,(MethodInfo *)0x0);
      if ((Il2CppRGCTXData *)plVar20 == (Il2CppRGCTXData *)0x0) {
label_040ad3ce:
        in_stack_ffffffffffffff30 = pIVar18;
        in_stack_ffffffffffffff3c = uVar21;
        if ((pIVar18[3].method == (MethodInfo *)0x0) ||
           (UVar22 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar18[3].method,(MethodInfo *)0x0),
           in_stack_ffffffffffffff30 = pIVar18, (Il2CppRGCTXData *)plVar20 == (Il2CppRGCTXData *)0x0))
        goto label_040ad9d5;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)plVar20,"_TintColor",UVar22,(MethodInfo *)0x0);
        UnityEngine_Material__set_mainTextureScale
                  ((UnityEngine_Material_o *)plVar20,(UnityEngine_Vector2_o)pIVar18[4],(MethodInfo *)0x0);
        pIVar8 = (Il2CppClass *)*plVar14;
        iVar16 = *(int *)&(pIVar8->_2).field_0x1c;
        in_stack_ffffffffffffff30 = pIVar18;
joined_r0x040ad770:
        if (iVar16 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pIVar8 = (Il2CppClass *)*plVar14;
        }
        pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  ((long)pIVar8->static_fields + 0x58);
        if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ad9d5;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar7,(Il2CppObject *)x_00,(Il2CppObject *)plVar20,MethodInfo_Void_Add);
        x_00 = plVar20;
        goto joined_r0x040ad2df;
      }
      bVar1 = (TypeInfo_Material->_2).naturalAligment;
      if ((bVar1 <= (((Il2CppClass *)*plVar20)->_2).naturalAligment) &&
         ((((Il2CppClass *)*plVar20)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Material)) goto label_040ad3ce;
    }
label_040ada3e:
    auVar23 = il2cpp_runtime_helper_022b2fd0(plVar20);
    if (auVar23._8_4_ != 1) goto label_040add17;
    plVar14 = (long *)__cxa_begin_catch(auVar23._0_8_);
    lVar17 = *plVar14;
    __cxa_end_catch();
    __this_06.fields._8_8_ = pIVar18;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
    __this_06.fields._current._0_4_ = in_stack_ffffffffffffff38;
    __this_06.fields._current._4_4_ = uVar21;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)&local_a8);
    x_00 = plVar20;
    in_stack_ffffffffffffff30 = pIVar18;
    in_stack_ffffffffffffff3c = uVar21;
  } while (lVar17 == 0);
  il2cpp_runtime_helper_022fefe0(lVar17);
label_040add17:
  __this_07.fields._8_8_ = pIVar18;
  __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff28;
  __this_07.fields._current._0_4_ = in_stack_ffffffffffffff38;
  __this_07.fields._current._4_4_ = uVar21;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_07,(MethodInfo_321A1C0 *)&local_a8);
  _Unwind_Resume(auVar23._0_8_);
}


// Map.MapLoader$$SetPhysics
// il2cpp: int32_t Map_MapLoader__SetPhysics (UnityEngine_GameObject_o* go, System_String_o* collideMode, System_String_o* collideWith, System_String_o* physicsMaterial, const MethodInfo* method);
// 0x40ab760

int32_t Map_MapLoader__SetPhysics
                  (UnityEngine_GameObject_o *go,System_String_o *collideMode,System_String_o *collideWith,
                  System_String_o *physicsMaterial,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  UnityEngine_Vector2_o value;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  UnityEngine_Matrix4x4_o lhs;
  UnityEngine_Matrix4x4_o __this_08;
  UnityEngine_Matrix4x4_o __this_09;
  UnityEngine_Matrix4x4_o __this_10;
  UnityEngine_Matrix4x4_o __this_11;
  UnityEngine_Matrix4x4_o rhs;
  System_RuntimeTypeHandle_o handle;
  char cVar11;
  bool_conflict bVar12;
  uint uVar13;
  int32_t iVar14;
  int32_t extraout_EAX;
  uint uVar15;
  int32_t extraout_EAX_00;
  undefined8 in_RAX;
  long *plVar16;
  System_Object_array *pSVar17;
  Il2CppRGCTXData *pIVar18;
  UnityEngine_GameObject_o *pUVar19;
  UnityEngine_MeshCollider_o *__this_12;
  UnityEngine_Mesh_o *value_00;
  undefined8 extraout_RAX;
  System_Object_array *pSVar20;
  UnityEngine_Transform_o *pUVar21;
  MapEditor_EditorGizmoIcon_o *__this_13;
  undefined8 extraout_RAX_00;
  undefined8 uVar22;
  UnityEngine_BoxCollider_o *__this_14;
  undefined8 extraout_RAX_01;
  System_String_o *pSVar23;
  System_Collections_Generic_List_object__o *__this_15;
  System_String_o **__this_16;
  System_Collections_Generic_Dictionary_object__object__o *pSVar24;
  Il2CppClass *pIVar25;
  UnityEngine_Object_o *x;
  UnityEngine_Renderer_o *pUVar26;
  UnityEngine_Material_o *value_01;
  long *plVar27;
  System_Type_o *pSVar28;
  System_Type_o *pSVar29;
  System_String_array *pSVar30;
  Il2CppObject *pIVar31;
  UnityEngine_Texture_o *value_02;
  MethodInfo_255A020 **ppMVar32;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  Il2CppRGCTXData *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *pMVar33;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  int iVar34;
  long lVar35;
  Il2CppRGCTXData *pIVar36;
  void **ppvVar37;
  undefined4 uVar38;
  Il2CppRGCTXData *unaff_R12;
  System_String_o **__this_17;
  long *plVar39;
  long *plVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  float fVar45;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar52;
  float fVar53;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  UnityEngine_Color_o UVar62;
  undefined1 auVar63 [12];
  UnityEngine_Vector3_o point;
  UnityEngine_Vector3_o point_00;
  UnityEngine_Vector3_o point_01;
  UnityEngine_Vector3_o value_03;
  UnityEngine_Vector3_o value_04;
  undefined8 in_stack_fffffffffffffc58;
  Il2CppRGCTXData *in_stack_fffffffffffffc60;
  undefined4 in_stack_fffffffffffffc68;
  uint in_stack_fffffffffffffc6c;
  Il2CppRGCTXData *pIStack_390;
  Il2CppRGCTXData *pIStack_388;
  Il2CppClass *pIStack_380;
  Il2CppRGCTXData IStack_378;
  undefined8 uStack_370;
  Il2CppRGCTXData *pIStack_368;
  Il2CppRGCTXData IStack_358;
  undefined8 uStack_350;
  Il2CppRGCTXData *pIStack_348;
  Il2CppRGCTXData IStack_338;
  undefined8 uStack_330;
  Il2CppRGCTXData *pIStack_328;
  Il2CppRGCTXData *pIStack_320;
  Il2CppRGCTXData IStack_318;
  undefined8 uStack_310;
  Il2CppRGCTXData *pIStack_300;
  Il2CppRGCTXData *pIStack_2f8;
  Il2CppRGCTXData *pIStack_2f0;
  Il2CppRGCTXData *pIStack_2e8;
  System_Object_array *pSStack_2e0;
  Il2CppRGCTXData *pIStack_2d8;
  Il2CppRGCTXData IVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  float fStack_248;
  undefined1 auStack_240 [8];
  float fStack_238;
  float fStack_234;
  undefined1 auStack_230 [8];
  float fStack_228;
  float fStack_224;
  float fStack_218;
  undefined1 auStack_210 [8];
  float fStack_208;
  float fStack_204;
  undefined1 auStack_200 [8];
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1d0;
  Il2CppRGCTXData IStack_1b0;
  undefined8 uStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  Il2CppRGCTXData IStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  Il2CppRGCTXData IStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  float fStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  Il2CppRGCTXData IStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  Il2CppRGCTXData *pIStack_68;
  Il2CppRGCTXData *pIStack_60;
  System_String_o *pSStack_58;
  Il2CppRGCTXData *pIStack_50;
  System_Object_array *pSStack_48;
  Il2CppRGCTXData *pIStack_40;
  undefined8 uStack_38;
  UnityEngine_Vector3_o UVar64;
  
  uVar38 = SUB84(method,0);
  ppMVar32 = (MethodInfo_255A020 **)physicsMaterial;
  uStack_38 = in_RAX;
  if (g_data_057ac4b5 == '\0') {
    pIStack_40 = (Il2CppRGCTXData *)0x40ab78c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    pIStack_40 = (Il2CppRGCTXData *)0x40ab798;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    pIStack_40 = (Il2CppRGCTXData *)0x40ab7a4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
    pIStack_40 = (Il2CppRGCTXData *)0x40ab7b0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pIStack_40 = (Il2CppRGCTXData *)0x40ab7bc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    pIStack_40 = (Il2CppRGCTXData *)0x40ab7c8;
    il2cpp_runtime_helper_023445d0(&"Physics");
    pIStack_40 = (Il2CppRGCTXData *)0x40ab7d4;
    il2cpp_runtime_helper_023445d0(&"Default");
    g_data_057ac4b5 = '\x01';
  }
  plVar16 = (long *)0x0;
  pIStack_40 = (Il2CppRGCTXData *)0x40ab7f2;
  pIStack_390 = "Default";
  bVar12 = System_String__op_Inequality(physicsMaterial,(System_String_o *)"Default",(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
label_040ab85a:
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      pIStack_40 = (Il2CppRGCTXData *)0x40ab872;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_40 = (Il2CppRGCTXData *)0x40ab87a;
    uVar13 = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)pIStack_390);
    if (go == (UnityEngine_GameObject_o *)0x0) {
label_040ab9d2:
      pIStack_40 = (Il2CppRGCTXData *)0x40ab9d7;
      il2cpp_runtime_helper_022b2c90();
      plVar40 = (long *)collideWith;
    }
    else {
      physicsMaterial = (System_String_o *)(ulong)uVar13;
      pIStack_40 = (Il2CppRGCTXData *)0x40ab897;
      unaff_R12 = (Il2CppRGCTXData *)
                  UnityEngine_GameObject__GetComponentsInChildren_object__255ab00(go,MethodInfo_Collider_GetComponentsInChildren_Collider);
      uStack_38 = CONCAT44(uVar13,(undefined4)uStack_38);
      pIStack_390 = (Il2CppRGCTXData *)(ulong)uVar13;
      pIStack_40 = (Il2CppRGCTXData *)0x40ab8aa;
      UnityEngine_GameObject__set_layer(go,uVar13,(MethodInfo *)0x0);
      if (unaff_R12 == (Il2CppRGCTXData *)0x0) goto label_040ab9d2;
      iVar34 = SUB84(unaff_R12[3],0);
      if (iVar34 < 1) {
        return iVar34;
      }
      go = (UnityEngine_GameObject_o *)0x0;
      plVar40 = &TypeInfo_MapObjectCollideMode;
      if (iVar34 != 0) {
        do {
          physicsMaterial = (System_String_o *)unaff_R12[(long)(int)go + 4].method;
          collideWith = (System_String_o *)plVar40;
          if ((Il2CppRGCTXData *)physicsMaterial == (Il2CppRGCTXData *)0x0) goto label_040ab9d2;
          pIStack_390 = (Il2CppRGCTXData *)0x0;
          pIStack_40 = (Il2CppRGCTXData *)0x40ab913;
          pUVar19 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)physicsMaterial,(MethodInfo *)0x0);
          if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_040ab9d2;
          pIStack_40 = (Il2CppRGCTXData *)0x40ab92a;
          UnityEngine_GameObject__set_layer(pUVar19,uStack_38._4_4_,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
            pIStack_40 = (Il2CppRGCTXData *)0x40ab93b;
            il2cpp_runtime_helper_02337ed0();
          }
          pIStack_40 = (Il2CppRGCTXData *)0x40ab953;
          uVar13 = System_String__op_Equality
                             (collideMode,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 8),
                              (MethodInfo *)0x0);
          pIStack_40 = (Il2CppRGCTXData *)0x40ab960;
          UnityEngine_Collider__set_isTrigger
                    ((UnityEngine_Collider_o *)physicsMaterial,uVar13 & 0xff,(MethodInfo *)0x0);
          pIStack_40 = (Il2CppRGCTXData *)0x40ab978;
          uVar13 = System_String__op_Inequality
                             (collideMode,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 0x10),
                              (MethodInfo *)0x0);
          pIStack_40 = (Il2CppRGCTXData *)0x40ab985;
          UnityEngine_Collider__set_enabled
                    ((UnityEngine_Collider_o *)physicsMaterial,uVar13 & 0xff,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pIStack_40 = (Il2CppRGCTXData *)0x40ab99d;
            il2cpp_runtime_helper_02337ed0();
          }
          pIStack_390 = (Il2CppRGCTXData *)0x0;
          pIStack_40 = (Il2CppRGCTXData *)0x40ab9a9;
          bVar12 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)plVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar12 != '\0') {
            pIStack_40 = (Il2CppRGCTXData *)0x40ab9be;
            pIStack_390 = (Il2CppRGCTXData *)plVar16;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)physicsMaterial,(UnityEngine_PhysicMaterial_o *)plVar16,
                       (MethodInfo *)0x0);
          }
          uVar15 = (int)go + 1;
          go = (UnityEngine_GameObject_o *)(ulong)uVar15;
          uVar13 = SUB84(unaff_R12[3],0);
          if ((int)uVar13 <= (int)uVar15) {
            return uVar13;
          }
        } while (uVar15 < uVar13);
      }
    }
    pIStack_40 = (Il2CppRGCTXData *)0x40ab9dc;
    il2cpp_runtime_helper_022b2ca0();
    collideWith = (System_String_o *)plVar40;
  }
  else {
    pMVar33 = extraout_RDX;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      pIStack_40 = (Il2CppRGCTXData *)0x40ab80e;
      il2cpp_runtime_helper_02337ed0();
      pMVar33 = extraout_RDX_00;
    }
    pIStack_40 = (Il2CppRGCTXData *)0x40ab820;
    pIStack_390 = (Il2CppRGCTXData *)physicsMaterial;
    plVar16 = (long *)Map_MapLoader__LoadAssetCached("Physics",physicsMaterial,pMVar33);
    if ((Il2CppRGCTXData *)plVar16 == (Il2CppRGCTXData *)0x0) goto label_040ab85a;
    ppMVar32 = (MethodInfo_255A020 **)(ulong)*(byte *)(TypeInfo_PhysicMaterial + 0x26);
    pIStack_390 = TypeInfo_PhysicMaterial;
    if ((*(byte *)(TypeInfo_PhysicMaterial + 0x26) <= (((Il2CppClass *)*plVar16)->_2).naturalAligment) &&
       ((Il2CppRGCTXData *)
        (((Il2CppClass *)*plVar16)->_2).typeHierarchy
        [(long)&(((System_String_o *)((long)ppMVar32 + -0x18))->fields).field_0x7] == TypeInfo_PhysicMaterial))
    goto label_040ab85a;
  }
  pIStack_40 = (Il2CppRGCTXData *)0x40ab9e4;
  pIVar36 = (Il2CppRGCTXData *)plVar16;
  il2cpp_runtime_helper_022b2fd0();
  plVar40 = (long *)pIVar36;
  pIStack_68 = (Il2CppRGCTXData *)physicsMaterial;
  pIStack_60 = unaff_R12;
  pSStack_58 = collideMode;
  pIStack_50 = (Il2CppRGCTXData *)plVar16;
  pSStack_48 = (System_Object_array *)collideWith;
  pIStack_40 = (Il2CppRGCTXData *)go;
  if (g_data_057ac4b1 == '\0') {
    pIStack_2d8 = (Il2CppRGCTXData *)0x40aba19;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BoxCollider_AddComponent_BoxCollider);
    pIStack_2d8 = (Il2CppRGCTXData *)0x40aba25;
    il2cpp_runtime_helper_023445d0(&MethodInfo_EditorGizmoIcon_AddComponent_EditorGizmoIcon);
    pIStack_2d8 = (Il2CppRGCTXData *)0x40aba31;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshCollider_AddComponent_MeshCollider);
    pIStack_2d8 = (Il2CppRGCTXData *)0x40aba3d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_GetComponentInChildren_ParticleSystem);
    pIStack_2d8 = (Il2CppRGCTXData *)0x40aba49;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
    pIStack_2d8 = (Il2CppRGCTXData *)0x40aba55;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    pIStack_2d8 = (Il2CppRGCTXData *)0x40aba61;
    il2cpp_runtime_helper_023445d0(&TypeInfo_LineRenderer);
    pIStack_2d8 = (Il2CppRGCTXData *)0x40aba6d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    ppvVar37 = &TypeInfo_TrailRenderer;
    pIStack_2d8 = (Il2CppRGCTXData *)0x40aba79;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac4b1 = '\x01';
    plVar40 = (long *)ppvVar37;
  }
  cVar11 = (char)uVar38;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  IStack_110.rgctxDataDummy = (void *)0x0;
  uStack_108 = 0;
  plVar27 = (long *)pIVar36;
  if (pIVar36 != (Il2CppRGCTXData *)0x0) {
    pIStack_2d8 = (Il2CppRGCTXData *)0x40ababe;
    physicsMaterial =
         (System_String_o *)
         UnityEngine_GameObject__GetComponentInChildren_object_
                   ((UnityEngine_GameObject_o *)pIVar36,MethodInfo_ParticleSystem_GetComponentInChildren_ParticleSystem);
    plVar16 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pIStack_2d8 = (Il2CppRGCTXData *)0x40abad9;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_2d8 = (Il2CppRGCTXData *)0x40abae5;
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)physicsMaterial,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    cVar11 = (char)uVar38;
    pSVar17 = (System_Object_array *)collideWith;
    if ((char)bVar12 == '\0') {
      pIStack_2d8 = (Il2CppRGCTXData *)0x40abaff;
      pIStack_390 = MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter;
      plVar40 = (long *)pIVar36;
      pSVar17 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                          ((UnityEngine_GameObject_o *)pIVar36,(MethodInfo_255AB00 *)MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
      cVar11 = (char)uVar38;
      if (pSVar17 != (System_Object_array *)0x0) {
        iVar34 = (int)pSVar17->max_length;
        collideWith = (System_String_o *)pSVar17;
        if (0 < iVar34) {
          physicsMaterial = (System_String_o *)0x0;
          if (iVar34 != 0) {
            do {
              cVar11 = (char)uVar38;
              go = (UnityEngine_GameObject_o *)pSVar17->m_Items[(int)physicsMaterial];
              if ((Il2CppRGCTXData *)go == (Il2CppRGCTXData *)0x0) goto label_040ac502;
              pIStack_2d8 = (Il2CppRGCTXData *)0x40abb62;
              unaff_R12 = (Il2CppRGCTXData *)
                          UnityEngine_MeshFilter__get_sharedMesh
                                    ((UnityEngine_MeshFilter_o *)go,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pIStack_2d8 = (Il2CppRGCTXData *)0x40abb76;
                il2cpp_runtime_helper_02337ed0();
              }
              pIStack_390 = (Il2CppRGCTXData *)0x0;
              pIStack_2d8 = (Il2CppRGCTXData *)0x40abb82;
              plVar40 = (long *)unaff_R12;
              bVar12 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar12 != '\0') {
                pIStack_390 = (Il2CppRGCTXData *)0x0;
                pIStack_2d8 = (Il2CppRGCTXData *)0x40abb90;
                plVar40 = (long *)go;
                pIVar18 = (Il2CppRGCTXData *)
                          UnityEngine_MeshFilter__get_sharedMesh
                                    ((UnityEngine_MeshFilter_o *)go,(MethodInfo *)0x0);
                cVar11 = (char)uVar38;
                if (pIVar18 == (Il2CppRGCTXData *)0x0) goto label_040ac502;
                pIStack_390 = (Il2CppRGCTXData *)0x0;
                pIStack_2d8 = (Il2CppRGCTXData *)0x40abba3;
                iVar14 = UnityEngine_Mesh__get_vertexCount((UnityEngine_Mesh_o *)pIVar18,(MethodInfo *)0x0);
                cVar11 = (char)uVar38;
                plVar40 = (long *)pIVar18;
                if (0 < iVar14) {
                  pIStack_390 = (Il2CppRGCTXData *)0x0;
                  pIStack_2d8 = (Il2CppRGCTXData *)0x40abbb1;
                  plVar40 = (long *)go;
                  pUVar19 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)go,(MethodInfo *)0x0);
                  if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_040ac502;
                  ppMVar32 = &MethodInfo_MeshCollider_AddComponent_MeshCollider;
                  pIStack_2d8 = (Il2CppRGCTXData *)0x40abbcc;
                  __this_12 = (UnityEngine_MeshCollider_o *)
                              UnityEngine_GameObject__AddComponent_object_(pUVar19,MethodInfo_MeshCollider_AddComponent_MeshCollider);
                  pIStack_390 = (Il2CppRGCTXData *)0x0;
                  pIStack_2d8 = (Il2CppRGCTXData *)0x40abbd9;
                  plVar40 = (long *)go;
                  value_00 = UnityEngine_MeshFilter__get_sharedMesh
                                       ((UnityEngine_MeshFilter_o *)go,(MethodInfo *)0x0);
                  physicsMaterial = (System_String_o *)0x0;
                  if (__this_12 == (UnityEngine_MeshCollider_o *)0x0) goto label_040ac502;
                  pIStack_2d8 = (Il2CppRGCTXData *)0x40abbef;
                  UnityEngine_MeshCollider__set_sharedMesh(__this_12,value_00,(MethodInfo *)0x0);
                  uVar22 = extraout_RAX;
                  goto label_040ac479;
                }
              }
              cVar11 = (char)uVar38;
              uVar15 = (int)physicsMaterial + 1;
              physicsMaterial = (System_String_o *)(ulong)uVar15;
              uVar13 = (uint)pSVar17->max_length;
              if ((int)uVar13 <= (int)uVar15) goto label_040abbf4;
            } while (uVar15 < uVar13);
          }
          goto label_040ac507;
        }
label_040abbf4:
        pIStack_2d8 = (Il2CppRGCTXData *)0x40abc06;
        pIStack_390 = MethodInfo_Renderer_GetComponentsInChildren_Renderer;
        plVar40 = (long *)pIVar36;
        pSVar20 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                            ((UnityEngine_GameObject_o *)pIVar36,(MethodInfo_255AB00 *)MethodInfo_Renderer_GetComponentsInChildren_Renderer);
        cVar11 = (char)uVar38;
        if (pSVar20 != (System_Object_array *)0x0) {
          ppMVar32 = (MethodInfo_255A020 **)pSVar20->max_length;
          if (((System_String_o *)ppMVar32 != (System_String_o *)0x0) && (0 < (int)ppMVar32)) {
            fVar48 = 0.0;
            fVar52 = 0.0;
            fVar53 = 0.0;
            fVar54 = 0.0;
            plVar16 = (long *)0x0;
            go = (UnityEngine_GameObject_o *)&IStack_1b0;
            physicsMaterial = (System_String_o *)&IStack_110;
            plVar27 = &TypeInfo_Vector3;
            pSVar17 = (System_Object_array *)0x0;
            fVar46 = 0.0;
            fStack_248 = 0.0;
            fVar41 = 0.0;
            fVar43 = 0.0;
            fVar44 = 0.0;
            fVar45 = 0.0;
            if ((int)ppMVar32 != 0) {
              do {
                cVar11 = (char)uVar38;
                go = (UnityEngine_GameObject_o *)&IStack_1b0;
                ppMVar32 = (MethodInfo_255A020 **)(long)(int)pSVar17;
                unaff_R12 = (Il2CppRGCTXData *)pSVar20->m_Items[(long)ppMVar32];
                collideWith = (System_String_o *)pSVar17;
                if (unaff_R12 == (Il2CppRGCTXData *)0x0) goto label_040ac502;
                if ((unaff_R12->rgctxDataDummy != TypeInfo_TrailRenderer) &&
                   (ppvVar37 = &TypeInfo_LineRenderer, unaff_R12->rgctxDataDummy != TypeInfo_LineRenderer)) {
                  plVar40 = (long *)&IStack_170;
                  pIStack_2d8 = (Il2CppRGCTXData *)0x40abd0a;
                  pIStack_390 = unaff_R12;
                  UnityEngine_Renderer__get_localBounds
                            ((UnityEngine_Bounds_o *)plVar40,(UnityEngine_Renderer_o *)unaff_R12,
                             (MethodInfo *)0x0);
                  fVar61 = fStack_15c;
                  fVar10 = fStack_160;
                  fVar42 = fStack_168;
                  if ((0.0 < fStack_15c * fStack_15c + fStack_160 * fStack_160 + fStack_164 * fStack_164) &&
                     (((uint)fStack_164 & 0x7f800000) != 0x7f800000)) {
                    uStack_118 = 0;
                    uStack_130 = IStack_170;
                    uStack_128 = 0;
                    pIStack_390 = (Il2CppRGCTXData *)0x0;
                    pIStack_2d8 = (Il2CppRGCTXData *)0x40abdab;
                    plVar40 = (long *)pIVar36;
                    uStack_120 = CONCAT44(fStack_160,fStack_164);
                    pUVar21 = UnityEngine_GameObject__get_transform
                                        ((UnityEngine_GameObject_o *)pIVar36,(MethodInfo *)0x0);
                    cVar11 = (char)uVar38;
                    ppMVar32 = ppvVar37;
                    if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_040ac502;
                    pIStack_2d8 = (Il2CppRGCTXData *)0x40abdc1;
                    UnityEngine_Transform__get_worldToLocalMatrix
                              ((UnityEngine_Matrix4x4_o *)go,pUVar21,(MethodInfo *)0x0);
                    uStack_140 = uStack_180;
                    uStack_138 = uStack_178;
                    uStack_150 = uStack_190;
                    uStack_148 = uStack_188;
                    fStack_160 = fStack_1a0;
                    fStack_15c = fStack_19c;
                    uStack_158 = uStack_198;
                    uStack_154 = uStack_194;
                    IStack_170.rgctxDataDummy = IStack_1b0.rgctxDataDummy;
                    fStack_168 = (float)uStack_1a8;
                    fStack_164 = (float)((ulong)uStack_1a8 >> 0x20);
                    pIStack_390 = (Il2CppRGCTXData *)0x0;
                    pIStack_2d8 = (Il2CppRGCTXData *)0x40abe0b;
                    plVar40 = (long *)unaff_R12;
                    pUVar21 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)unaff_R12,(MethodInfo *)0x0);
                    cVar11 = (char)uVar38;
                    ppMVar32 = ppvVar37;
                    if (pUVar21 == (UnityEngine_Transform_o *)0x0) goto label_040ac502;
                    pIStack_2d8 = (Il2CppRGCTXData *)0x40abe21;
                    UnityEngine_Transform__get_localToWorldMatrix
                              ((UnityEngine_Matrix4x4_o *)go,pUVar21,(MethodInfo *)0x0);
                    rhs.fields.m11 = fStack_19c;
                    rhs.fields.m01 = fStack_1a0;
                    rhs.fields.m31 = (float)uStack_194;
                    rhs.fields.m21 = (float)uStack_198;
                    uStack_80 = uStack_180;
                    uStack_78 = uStack_178;
                    uStack_90 = uStack_190;
                    uStack_88 = uStack_188;
                    IStack_b0.rgctxDataDummy = IStack_1b0.rgctxDataDummy;
                    uStack_a8 = uStack_1a8;
                    uVar22 = CONCAT44(fStack_164,fStack_168);
                    uVar66 = CONCAT44(fStack_15c,fStack_160);
                    uVar67 = CONCAT44(uStack_154,uStack_158);
                    pIStack_2d8 = (Il2CppRGCTXData *)0x40abed2;
                    lhs.fields.m20 = fStack_168;
                    lhs.fields.m30 = fStack_164;
                    lhs.fields._0_8_ = IStack_170.rgctxDataDummy;
                    lhs.fields.m01 = fStack_160;
                    lhs.fields.m11 = fStack_15c;
                    lhs.fields.m21 = (float)uStack_158;
                    lhs.fields.m31 = (float)uStack_154;
                    lhs.fields.m02 = (float)(undefined4)uStack_150;
                    lhs.fields.m12 = (float)uStack_150._4_4_;
                    lhs.fields.m22 = (float)(undefined4)uStack_148;
                    lhs.fields.m32 = (float)uStack_148._4_4_;
                    lhs.fields.m03 = (float)(undefined4)uStack_140;
                    lhs.fields.m13 = (float)uStack_140._4_4_;
                    lhs.fields.m23 = (float)(undefined4)uStack_138;
                    lhs.fields.m33 = (float)uStack_138._4_4_;
                    rhs.fields.m20 = (float)(undefined4)uStack_1a8;
                    rhs.fields.m30 = (float)uStack_1a8._4_4_;
                    rhs.fields._0_8_ = IStack_1b0.rgctxDataDummy;
                    rhs.fields.m02 = (float)(undefined4)uStack_190;
                    rhs.fields.m12 = (float)uStack_190._4_4_;
                    rhs.fields.m22 = (float)(undefined4)uStack_188;
                    rhs.fields.m32 = (float)uStack_188._4_4_;
                    rhs.fields.m03 = (float)(undefined4)uStack_180;
                    rhs.fields.m13 = (float)uStack_180._4_4_;
                    rhs.fields.m23 = (float)(undefined4)uStack_178;
                    rhs.fields.m33 = (float)uStack_178._4_4_;
                    IVar65 = IStack_170;
                    uVar68 = uStack_150;
                    uVar69 = uStack_148;
                    uVar70 = uStack_140;
                    uVar71 = uStack_138;
                    UnityEngine_Matrix4x4__op_Multiply
                              ((UnityEngine_Matrix4x4_o *)go,lhs,rhs,(MethodInfo *)0x0);
                    uStack_100 = CONCAT44(fStack_19c,fStack_1a0);
                    uStack_f8 = CONCAT44(uStack_194,uStack_198);
                    uStack_e0 = uStack_180;
                    uStack_d8 = uStack_178;
                    uStack_f0 = uStack_190;
                    uStack_e8 = uStack_188;
                    IStack_110.rgctxDataDummy = IStack_1b0.rgctxDataDummy;
                    uStack_108 = uStack_1a8;
                    fStack_d0 = uStack_130._4_4_ - fVar10;
                    fStack_cc = uStack_130._4_4_;
                    uStack_c8 = (undefined4)uStack_128;
                    uStack_c4 = uStack_128._4_4_;
                    fVar47 = fVar42 - fVar61;
                    fVar42 = fVar42 + fVar61;
                    fStack_c0 = uStack_130._4_4_ + fVar10;
                    fStack_bc = uStack_130._4_4_;
                    uStack_b8 = (undefined4)uStack_128;
                    uStack_b4 = uStack_128._4_4_;
                    uVar13 = 0xffffffff;
                    do {
                      fVar10 = fStack_d0;
                      point.fields.x = (float)(int)uVar13 * (float)uStack_120 + (float)uStack_130;
                      pIStack_2d8 = (Il2CppRGCTXData *)0x40ac07c;
                      __this_08.fields.m20 = (float)(int)uVar22;
                      __this_08.fields.m30 = (float)(int)((ulong)uVar22 >> 0x20);
                      __this_08.fields._0_8_ = IVar65.rgctxDataDummy;
                      __this_08.fields.m01 = (float)(int)uVar66;
                      __this_08.fields.m11 = (float)(int)((ulong)uVar66 >> 0x20);
                      __this_08.fields.m21 = (float)(int)uVar67;
                      __this_08.fields.m31 = (float)(int)((ulong)uVar67 >> 0x20);
                      __this_08.fields.m02 = (float)(int)uVar68;
                      __this_08.fields.m12 = (float)(int)((ulong)uVar68 >> 0x20);
                      __this_08.fields.m22 = (float)(int)uVar69;
                      __this_08.fields.m32 = (float)(int)((ulong)uVar69 >> 0x20);
                      __this_08.fields.m03 = (float)(int)uVar70;
                      __this_08.fields.m13 = (float)(int)((ulong)uVar70 >> 0x20);
                      __this_08.fields.m23 = (float)(int)uVar71;
                      __this_08.fields.m33 = (float)(int)((ulong)uVar71 >> 0x20);
                      point.fields.y = fStack_d0;
                      point.fields.z = fVar47;
                      UVar64 = UnityEngine_Matrix4x4__MultiplyPoint3x4
                                         (__this_08,point,(MethodInfo *)physicsMaterial);
                      fStack_218 = UVar64.fields.z;
                      uVar1 = UVar64.fields._0_8_;
                      if ((Il2CppRGCTXData *)plVar16 == (Il2CppRGCTXData *)0x0) {
                        fStack_1f8 = (float)extraout_XMM0_Dc;
                        auStack_200 = (undefined1  [8])uVar1;
                        fStack_1f4 = (float)extraout_XMM0_Dd;
                        if (g_data_057a65d5 == '\0') {
                          pIStack_2d8 = (Il2CppRGCTXData *)0x40ac0a4;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                          g_data_057a65d5 = '\x01';
                        }
                        uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                        auStack_230._4_4_ = (float)((ulong)uVar1 >> 0x20) * 0.5;
                        auStack_230._0_4_ = (float)uVar1 * 0.5;
                        _fStack_228 = 0;
                        fStack_248 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1) * 0.5;
                        plVar16 = (long *)0x1;
                      }
                      else {
                        auVar50._0_4_ = fVar41 - fVar48;
                        auVar50._4_4_ = fVar43 - fVar52;
                        auVar50._8_4_ = fVar44 - fVar53;
                        auVar50._12_4_ = fVar45 - fVar54;
                        auVar56._8_4_ = extraout_XMM0_Dc;
                        auVar56._0_8_ = uVar1;
                        auVar56._12_4_ = extraout_XMM0_Dd;
                        auVar56 = minps(auVar50,auVar56);
                        fVar61 = fVar46 - fStack_248;
                        if (fStack_218 <= fVar46 - fStack_248) {
                          fVar61 = fStack_218;
                        }
                        auVar57._0_4_ = fVar41 + fVar48;
                        auVar57._4_4_ = fVar43 + fVar52;
                        auVar57._8_4_ = fVar44 + fVar53;
                        auVar57._12_4_ = fVar45 + fVar54;
                        auVar9._8_4_ = extraout_XMM0_Dc;
                        auVar9._0_8_ = uVar1;
                        auVar9._12_4_ = extraout_XMM0_Dd;
                        auVar50 = maxps(auVar57,auVar9);
                        fVar44 = fStack_248 + fVar46;
                        if (fStack_248 + fVar46 <= fStack_218) {
                          fVar44 = fStack_218;
                        }
                        auStack_230._0_4_ = (auVar50._0_4_ - auVar56._0_4_) * 0.5;
                        auStack_230._4_4_ = (auVar50._4_4_ - auVar56._4_4_) * 0.5;
                        fStack_228 = (auVar50._8_4_ - auVar56._8_4_) * 0.0;
                        fStack_224 = (auVar50._12_4_ - auVar56._12_4_) * 0.0;
                        fStack_248 = (fVar44 - fVar61) * 0.5;
                        fStack_218 = fVar61 + fStack_248;
                        auStack_200._4_4_ = auVar56._4_4_ + (float)auStack_230._4_4_;
                        auStack_200._0_4_ = auVar56._0_4_ + (float)auStack_230._0_4_;
                        fStack_1f8 = auVar56._8_4_ + fStack_228;
                        fStack_1f4 = auVar56._12_4_ + fStack_224;
                      }
                      UVar64.fields.y = fVar10;
                      UVar64.fields.x = point.fields.x;
                      pIStack_2d8 = (Il2CppRGCTXData *)0x40ac18e;
                      __this_09.fields.m20 = (float)(int)uVar22;
                      __this_09.fields.m30 = (float)(int)((ulong)uVar22 >> 0x20);
                      __this_09.fields._0_8_ = IVar65.rgctxDataDummy;
                      __this_09.fields.m01 = (float)(int)uVar66;
                      __this_09.fields.m11 = (float)(int)((ulong)uVar66 >> 0x20);
                      __this_09.fields.m21 = (float)(int)uVar67;
                      __this_09.fields.m31 = (float)(int)((ulong)uVar67 >> 0x20);
                      __this_09.fields.m02 = (float)(int)uVar68;
                      __this_09.fields.m12 = (float)(int)((ulong)uVar68 >> 0x20);
                      __this_09.fields.m22 = (float)(int)uVar69;
                      __this_09.fields.m32 = (float)(int)((ulong)uVar69 >> 0x20);
                      __this_09.fields.m03 = (float)(int)uVar70;
                      __this_09.fields.m13 = (float)(int)((ulong)uVar70 >> 0x20);
                      __this_09.fields.m23 = (float)(int)uVar71;
                      __this_09.fields.m33 = (float)(int)((ulong)uVar71 >> 0x20);
                      UVar64.fields.z = fVar42;
                      UVar64 = UnityEngine_Matrix4x4__MultiplyPoint3x4
                                         (__this_09,UVar64,(MethodInfo *)physicsMaterial);
                      fStack_1d0 = UVar64.fields.z;
                      uVar1 = UVar64.fields._0_8_;
                      if ((Il2CppRGCTXData *)plVar16 == (Il2CppRGCTXData *)0x0) {
                        fStack_238 = (float)extraout_XMM0_Dc_00;
                        auStack_240 = (undefined1  [8])uVar1;
                        fStack_234 = (float)extraout_XMM0_Dd_00;
                        if (g_data_057a65d5 == '\0') {
                          pIStack_2d8 = (Il2CppRGCTXData *)0x40ac1b6;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                          g_data_057a65d5 = '\x01';
                        }
                        uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                        auStack_200._4_4_ = (float)((ulong)uVar1 >> 0x20) * 0.5;
                        auStack_200._0_4_ = (float)uVar1 * 0.5;
                        _fStack_1f8 = 0;
                        fStack_248 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1) * 0.5;
                        plVar16 = (long *)0x1;
                      }
                      else {
                        auVar59._0_4_ = (float)auStack_200._0_4_ - (float)auStack_230._0_4_;
                        auVar59._4_4_ = (float)auStack_200._4_4_ - (float)auStack_230._4_4_;
                        auVar59._8_4_ = fStack_1f8 - fStack_228;
                        auVar59._12_4_ = fStack_1f4 - fStack_224;
                        auVar7._8_4_ = extraout_XMM0_Dc_00;
                        auVar7._0_8_ = uVar1;
                        auVar7._12_4_ = extraout_XMM0_Dd_00;
                        auVar56 = minps(auVar59,auVar7);
                        fVar44 = fStack_218 - fStack_248;
                        if (fStack_1d0 <= fStack_218 - fStack_248) {
                          fVar44 = fStack_1d0;
                        }
                        auVar58._0_4_ = (float)auStack_200._0_4_ + (float)auStack_230._0_4_;
                        auVar58._4_4_ = (float)auStack_200._4_4_ + (float)auStack_230._4_4_;
                        auVar58._8_4_ = fStack_1f8 + fStack_228;
                        auVar58._12_4_ = fStack_1f4 + fStack_224;
                        auVar8._8_4_ = extraout_XMM0_Dc_00;
                        auVar8._0_8_ = uVar1;
                        auVar8._12_4_ = extraout_XMM0_Dd_00;
                        auVar50 = maxps(auVar58,auVar8);
                        fVar45 = fStack_248 + fStack_218;
                        if (fStack_248 + fStack_218 <= fStack_1d0) {
                          fVar45 = fStack_1d0;
                        }
                        auStack_200._0_4_ = (auVar50._0_4_ - auVar56._0_4_) * 0.5;
                        auStack_200._4_4_ = (auVar50._4_4_ - auVar56._4_4_) * 0.5;
                        fStack_1f8 = (auVar50._8_4_ - auVar56._8_4_) * 0.0;
                        fStack_1f4 = (auVar50._12_4_ - auVar56._12_4_) * 0.0;
                        fStack_248 = (fVar45 - fVar44) * 0.5;
                        fStack_1d0 = fVar44 + fStack_248;
                        auStack_240._4_4_ = auVar56._4_4_ + (float)auStack_200._4_4_;
                        auStack_240._0_4_ = auVar56._0_4_ + (float)auStack_200._0_4_;
                        fStack_238 = auVar56._8_4_ + fStack_1f8;
                        fStack_234 = auVar56._12_4_ + fStack_1f4;
                      }
                      fVar45 = fStack_c0;
                      pIStack_2d8 = (Il2CppRGCTXData *)0x40ac2b6;
                      __this_10.fields.m20 = (float)(int)uVar22;
                      __this_10.fields.m30 = (float)(int)((ulong)uVar22 >> 0x20);
                      __this_10.fields._0_8_ = IVar65.rgctxDataDummy;
                      __this_10.fields.m01 = (float)(int)uVar66;
                      __this_10.fields.m11 = (float)(int)((ulong)uVar66 >> 0x20);
                      __this_10.fields.m21 = (float)(int)uVar67;
                      __this_10.fields.m31 = (float)(int)((ulong)uVar67 >> 0x20);
                      __this_10.fields.m02 = (float)(int)uVar68;
                      __this_10.fields.m12 = (float)(int)((ulong)uVar68 >> 0x20);
                      __this_10.fields.m22 = (float)(int)uVar69;
                      __this_10.fields.m32 = (float)(int)((ulong)uVar69 >> 0x20);
                      __this_10.fields.m03 = (float)(int)uVar70;
                      __this_10.fields.m13 = (float)(int)((ulong)uVar70 >> 0x20);
                      __this_10.fields.m23 = (float)(int)uVar71;
                      __this_10.fields.m33 = (float)(int)((ulong)uVar71 >> 0x20);
                      point_00.fields.y = fStack_c0;
                      point_00.fields.x = point.fields.x;
                      point_00.fields.z = fVar47;
                      UVar64 = UnityEngine_Matrix4x4__MultiplyPoint3x4
                                         (__this_10,point_00,(MethodInfo *)physicsMaterial);
                      fVar44 = UVar64.fields.z;
                      uVar1 = UVar64.fields._0_8_;
                      if ((Il2CppRGCTXData *)plVar16 == (Il2CppRGCTXData *)0x0) {
                        fStack_208 = (float)extraout_XMM0_Dc_01;
                        auStack_210 = (undefined1  [8])uVar1;
                        fStack_204 = (float)extraout_XMM0_Dd_01;
                        if (g_data_057a65d5 == '\0') {
                          pIStack_2d8 = (Il2CppRGCTXData *)0x40ac2de;
                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                          g_data_057a65d5 = '\x01';
                        }
                        uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                        auStack_240._4_4_ = (float)((ulong)uVar1 >> 0x20) * 0.5;
                        auStack_240._0_4_ = (float)uVar1 * 0.5;
                        _fStack_238 = 0;
                        fStack_248 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1) * 0.5;
                        plVar16 = (long *)0x1;
                      }
                      else {
                        auVar51._0_4_ = (float)auStack_240._0_4_ - (float)auStack_200._0_4_;
                        auVar51._4_4_ = (float)auStack_240._4_4_ - (float)auStack_200._4_4_;
                        auVar51._8_4_ = fStack_238 - fStack_1f8;
                        auVar51._12_4_ = fStack_234 - fStack_1f4;
                        auVar5._8_4_ = extraout_XMM0_Dc_01;
                        auVar5._0_8_ = uVar1;
                        auVar5._12_4_ = extraout_XMM0_Dd_01;
                        auVar56 = minps(auVar51,auVar5);
                        fVar41 = fStack_1d0 - fStack_248;
                        if (fVar44 <= fStack_1d0 - fStack_248) {
                          fVar41 = fVar44;
                        }
                        auVar60._0_4_ = (float)auStack_240._0_4_ + (float)auStack_200._0_4_;
                        auVar60._4_4_ = (float)auStack_240._4_4_ + (float)auStack_200._4_4_;
                        auVar60._8_4_ = fStack_238 + fStack_1f8;
                        auVar60._12_4_ = fStack_234 + fStack_1f4;
                        auVar6._8_4_ = extraout_XMM0_Dc_01;
                        auVar6._0_8_ = uVar1;
                        auVar6._12_4_ = extraout_XMM0_Dd_01;
                        auVar50 = maxps(auVar60,auVar6);
                        fVar43 = fStack_248 + fStack_1d0;
                        if (fStack_248 + fStack_1d0 <= fVar44) {
                          fVar43 = fVar44;
                        }
                        auStack_240._0_4_ = (auVar50._0_4_ - auVar56._0_4_) * 0.5;
                        auStack_240._4_4_ = (auVar50._4_4_ - auVar56._4_4_) * 0.5;
                        fStack_238 = (auVar50._8_4_ - auVar56._8_4_) * 0.0;
                        fStack_234 = (auVar50._12_4_ - auVar56._12_4_) * 0.0;
                        fStack_248 = (fVar43 - fVar41) * 0.5;
                        fVar44 = fVar41 + fStack_248;
                        auStack_210._4_4_ = auVar56._4_4_ + (float)auStack_240._4_4_;
                        auStack_210._0_4_ = auVar56._0_4_ + (float)auStack_240._0_4_;
                        fStack_208 = auVar56._8_4_ + fStack_238;
                        fStack_204 = auVar56._12_4_ + fStack_234;
                      }
                      pIStack_390 = (Il2CppRGCTXData *)0x0;
                      pIStack_2d8 = (Il2CppRGCTXData *)0x40ac3ce;
                      __this_11.fields.m20 = (float)(int)uVar22;
                      __this_11.fields.m30 = (float)(int)((ulong)uVar22 >> 0x20);
                      __this_11.fields._0_8_ = IVar65.rgctxDataDummy;
                      __this_11.fields.m01 = (float)(int)uVar66;
                      __this_11.fields.m11 = (float)(int)((ulong)uVar66 >> 0x20);
                      __this_11.fields.m21 = (float)(int)uVar67;
                      __this_11.fields.m31 = (float)(int)((ulong)uVar67 >> 0x20);
                      __this_11.fields.m02 = (float)(int)uVar68;
                      __this_11.fields.m12 = (float)(int)((ulong)uVar68 >> 0x20);
                      __this_11.fields.m22 = (float)(int)uVar69;
                      __this_11.fields.m32 = (float)(int)((ulong)uVar69 >> 0x20);
                      __this_11.fields.m03 = (float)(int)uVar70;
                      __this_11.fields.m13 = (float)(int)((ulong)uVar70 >> 0x20);
                      __this_11.fields.m23 = (float)(int)uVar71;
                      __this_11.fields.m33 = (float)(int)((ulong)uVar71 >> 0x20);
                      point_01.fields.z = fVar42;
                      point_01.fields.x = point.fields.x;
                      point_01.fields.y = fVar45;
                      plVar40 = (long *)physicsMaterial;
                      UVar64 = UnityEngine_Matrix4x4__MultiplyPoint3x4
                                         (__this_11,point_01,(MethodInfo *)physicsMaterial);
                      fVar46 = UVar64.fields.z;
                      fVar41 = UVar64.fields.x;
                      fVar43 = UVar64.fields.y;
                      if ((Il2CppRGCTXData *)plVar16 == (Il2CppRGCTXData *)0x0) {
                        if (g_data_057a65d5 == '\0') {
                          plVar40 = &TypeInfo_Vector3;
                          pIStack_2d8 = (Il2CppRGCTXData *)0x40ac3fa;
                          il2cpp_runtime_helper_023445d0();
                          g_data_057a65d5 = '\x01';
                        }
                        uVar1 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                        fVar48 = (float)uVar1 * 0.5;
                        fVar52 = (float)((ulong)uVar1 >> 0x20) * 0.5;
                        fVar53 = 0.0;
                        fVar54 = 0.0;
                        fStack_248 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1) * 0.5;
                        plVar16 = (long *)0x1;
                        fVar44 = extraout_XMM0_Dc_02;
                        fVar45 = extraout_XMM0_Dd_02;
                      }
                      else {
                        auVar55._0_4_ = (float)auStack_210._0_4_ - (float)auStack_240._0_4_;
                        auVar55._4_4_ = (float)auStack_210._4_4_ - (float)auStack_240._4_4_;
                        auVar55._8_4_ = fStack_208 - fStack_238;
                        auVar55._12_4_ = fStack_204 - fStack_234;
                        auVar3._8_4_ = extraout_XMM0_Dc_02;
                        auVar3._0_8_ = UVar64.fields._0_8_;
                        auVar3._12_4_ = extraout_XMM0_Dd_02;
                        auVar56 = minps(auVar55,auVar3);
                        fVar10 = fVar44 - fStack_248;
                        if (fVar46 <= fVar44 - fStack_248) {
                          fVar10 = fVar46;
                        }
                        auVar49._0_4_ = (float)auStack_210._0_4_ + (float)auStack_240._0_4_;
                        auVar49._4_4_ = (float)auStack_210._4_4_ + (float)auStack_240._4_4_;
                        auVar49._8_4_ = fStack_208 + fStack_238;
                        auVar49._12_4_ = fStack_204 + fStack_234;
                        auVar4._8_4_ = extraout_XMM0_Dc_02;
                        auVar4._0_8_ = UVar64.fields._0_8_;
                        auVar4._12_4_ = extraout_XMM0_Dd_02;
                        auVar50 = maxps(auVar49,auVar4);
                        fVar45 = fStack_248 + fVar44;
                        if (fStack_248 + fVar44 <= fVar46) {
                          fVar45 = fVar46;
                        }
                        fVar48 = (auVar50._0_4_ - auVar56._0_4_) * 0.5;
                        fVar52 = (auVar50._4_4_ - auVar56._4_4_) * 0.5;
                        fVar53 = (auVar50._8_4_ - auVar56._8_4_) * 0.0;
                        fVar54 = (auVar50._12_4_ - auVar56._12_4_) * 0.0;
                        fStack_248 = (fVar45 - fVar10) * 0.5;
                        fVar41 = auVar56._0_4_ + fVar48;
                        fVar43 = auVar56._4_4_ + fVar52;
                        fVar44 = auVar56._8_4_ + fVar53;
                        fVar45 = auVar56._12_4_ + fVar54;
                        fVar46 = fVar10 + fStack_248;
                      }
                      uVar13 = uVar13 + 2;
                    } while (uVar13 < 2);
                  }
                }
                cVar11 = (char)uVar38;
                uVar15 = (int)pSVar17 + 1;
                pSVar17 = (System_Object_array *)(ulong)uVar15;
                uVar13 = (uint)pSVar20->max_length;
                ppMVar32 = (MethodInfo_255A020 **)(ulong)uVar13;
                go = (UnityEngine_GameObject_o *)&IStack_1b0;
                if ((int)uVar13 <= (int)uVar15) {
                  if ((Il2CppRGCTXData *)plVar16 == (Il2CppRGCTXData *)0x0) goto label_040ac454;
                  pIStack_2d8 = (Il2CppRGCTXData *)0x40ac4b8;
                  pIStack_390 = MethodInfo_BoxCollider_AddComponent_BoxCollider;
                  plVar40 = (long *)pIVar36;
                  __this_14 = (UnityEngine_BoxCollider_o *)
                              UnityEngine_GameObject__AddComponent_object_
                                        ((UnityEngine_GameObject_o *)pIVar36,
                                         (MethodInfo_255A020 *)MethodInfo_BoxCollider_AddComponent_BoxCollider);
                  plVar27 = (long *)pIVar36;
                  collideWith = (System_String_o *)pSVar17;
                  if (__this_14 == (UnityEngine_BoxCollider_o *)0x0) goto label_040ac502;
                  pIStack_2d8 = (Il2CppRGCTXData *)0x40ac4db;
                  value_03.fields.z = fVar46;
                  value_03.fields.x = fVar41;
                  value_03.fields.y = fVar43;
                  UnityEngine_BoxCollider__set_center(__this_14,value_03,(MethodInfo *)0x0);
                  value_04.fields.x = fVar48 + fVar48;
                  value_04.fields.y = fVar52 + fVar52;
                  value_04.fields.z = fStack_248 + fStack_248;
                  pIStack_2d8 = (Il2CppRGCTXData *)0x40ac4fd;
                  UnityEngine_BoxCollider__set_size(__this_14,value_04,(MethodInfo *)0x0);
                  uVar22 = extraout_RAX_01;
                  goto label_040ac479;
                }
              } while (uVar15 < uVar13);
            }
            goto label_040ac507;
          }
          goto label_040ac454;
        }
      }
    }
    else {
label_040ac454:
      pIStack_2d8 = (Il2CppRGCTXData *)0x40ac466;
      pIStack_390 = MethodInfo_EditorGizmoIcon_AddComponent_EditorGizmoIcon;
      plVar40 = (long *)pIVar36;
      __this_13 = (MapEditor_EditorGizmoIcon_o *)
                  UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)pIVar36,(MethodInfo_255A020 *)MethodInfo_EditorGizmoIcon_AddComponent_EditorGizmoIcon);
      plVar27 = (long *)pIVar36;
      collideWith = (System_String_o *)pSVar17;
      if (__this_13 != (MapEditor_EditorGizmoIcon_o *)0x0) {
        pIStack_2d8 = (Il2CppRGCTXData *)0x40ac479;
        MapEditor_EditorGizmoIcon__Setup(__this_13,(MethodInfo *)0x0);
        uVar22 = extraout_RAX_00;
label_040ac479:
        return (int32_t)CONCAT71((int7)((ulong)uVar22 >> 8),1);
      }
    }
  }
label_040ac502:
  pIStack_2d8 = (Il2CppRGCTXData *)0x40ac507;
  il2cpp_runtime_helper_022b2c90();
  pSVar17 = (System_Object_array *)collideWith;
label_040ac507:
  pIStack_2d8 = (Il2CppRGCTXData *)0x40ac50c;
  il2cpp_runtime_helper_022b2ca0();
  plVar39 = (long *)((ulong)ppMVar32 & 0xffffffff);
  pIStack_300 = (Il2CppRGCTXData *)physicsMaterial;
  pIStack_2f8 = unaff_R12;
  pIStack_2f0 = (Il2CppRGCTXData *)plVar27;
  pIStack_2e8 = (Il2CppRGCTXData *)plVar16;
  pSStack_2e0 = pSVar17;
  pIStack_2d8 = (Il2CppRGCTXData *)go;
  if (g_data_057ac4b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapTextures);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Material_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBasicMaterial_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Material_Material);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Material_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectShader);
    il2cpp_runtime_helper_023445d0(&TypeRef_MapScriptBasicMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBasicMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptDefaultTiledMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptLegacyMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptReflectiveMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"_TintColor");
    il2cpp_runtime_helper_023445d0(&"OutlineGizmo");
    il2cpp_runtime_helper_023445d0(&"Map/Materials");
    il2cpp_runtime_helper_023445d0(&"Editor");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Map/Textures/");
    il2cpp_runtime_helper_023445d0(&"_SpecularMap");
    il2cpp_runtime_helper_023445d0(&"Misc/None");
    il2cpp_runtime_helper_023445d0(&"Texture");
    il2cpp_runtime_helper_023445d0(&"Map/Legacy/Materials");
    il2cpp_runtime_helper_023445d0(&"Legacy");
    il2cpp_runtime_helper_023445d0(&"Map");
    il2cpp_runtime_helper_023445d0(&"Material");
    g_data_057ac4b4 = '\x01';
  }
  IStack_378.rgctxDataDummy = (void *)0x0;
  uStack_370 = 0;
  pIStack_368 = (Il2CppRGCTXData *)0x0;
  IStack_358.rgctxDataDummy = (void *)0x0;
  uStack_350 = 0;
  pIStack_348 = (Il2CppRGCTXData *)0x0;
  pIStack_380 = (Il2CppClass *)0x0;
  bVar12 = System_String__op_Equality((System_String_o *)pIStack_390,"None",(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    return bVar12;
  }
  __this_16 = (System_String_o **)pIStack_390;
  __this_17 = (System_String_o **)extraout_RDX_01;
  if ((Il2CppRGCTXData *)plVar40 == (Il2CppRGCTXData *)0x0) goto label_040ad9d5;
  pSVar17 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                      ((UnityEngine_GameObject_o *)plVar40,(MethodInfo_255AB00 *)MethodInfo_Renderer_GetComponentsInChildren_Renderer);
  pIStack_388 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Renderer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pIStack_388,MethodInfo_List_1_UnityEngine_Renderer);
  __this_17 = (System_String_o **)extraout_RDX_01;
  if (((char)plVar39 == '\0') && (cVar11 != '\0')) {
    if (pIStack_390 == (Il2CppRGCTXData *)0x0) goto label_040ad9d5;
    bVar12 = System_String__Contains((System_String_o *)pIStack_390,"Editor",(MethodInfo *)0x0);
    plVar39 = (long *)CONCAT71((int7)((ulong)plVar39 >> 8),1);
    if ((char)bVar12 == '\0') {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_17 = *(System_String_o ***)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x70);
    }
  }
  if (pSVar17 == (System_Object_array *)0x0) goto label_040ad9d5;
  in_stack_fffffffffffffc6c = (uint)plVar39;
  uVar13 = (uint)pSVar17->max_length;
  if (pIStack_388 == (Il2CppRGCTXData *)0x0) {
    if (0 < (int)uVar13) {
      lVar35 = 0;
      __this_16 = &"OutlineGizmo";
      do {
        if (uVar13 <= (uint)lVar35) goto label_040ad9da;
        if ((UnityEngine_Object_o *)pSVar17->m_Items[lVar35] == (UnityEngine_Object_o *)0x0)
        goto label_040ad9d5;
        pSVar23 = UnityEngine_Object__get_name
                            ((UnityEngine_Object_o *)pSVar17->m_Items[lVar35],(MethodInfo *)0x0);
        bVar12 = System_String__op_Inequality(pSVar23,"OutlineGizmo",(MethodInfo *)0x0);
        if ((char)bVar12 != '\0') goto label_040ad9d5;
        uVar13 = (uint)pSVar17->max_length;
        lVar35 = lVar35 + 1;
      } while ((int)lVar35 < (int)uVar13);
    }
  }
  else if (0 < (int)uVar13) {
    __this_16 = (System_String_o **)0x0;
    plVar39 = &MethodInfo_Void_Add;
    if (uVar13 == 0) goto label_040ad9da;
    do {
      iVar34 = (int)__this_16;
      pIVar25 = (Il2CppClass *)pSVar17->m_Items[iVar34];
      if (pIVar25 == (Il2CppClass *)0x0) goto label_040ad9d5;
      pSVar23 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pIVar25,(MethodInfo *)0x0);
      bVar12 = System_String__op_Inequality(pSVar23,"OutlineGizmo",(MethodInfo *)0x0);
      lVar35 = MethodInfo_Void_Add;
      if ((char)bVar12 == '\0') {
label_040ac937:
        __this_16 = (System_String_o **)(ulong)(iVar34 + 1U);
        uVar13 = (uint)pSVar17->max_length;
        if ((int)uVar13 <= (int)(iVar34 + 1U)) break;
      }
      else {
        *(int *)((long)pIStack_388 + 0x1c) = *(int *)((long)pIStack_388 + 0x1c) + 1;
        pMVar33 = pIStack_388[2].method;
        if (pMVar33 == (MethodInfo *)0x0) goto label_040ad9d5;
        uVar13 = *(uint *)(pIStack_388 + 3);
        if (*(uint *)&pMVar33->name <= uVar13) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pIStack_388,(Il2CppObject *)pIVar25,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar35 + 0x20) + 0xc0) + 0x70));
          goto label_040ac937;
        }
        *(uint *)(pIStack_388 + 3) = uVar13 + 1;
        (&pMVar33->klass)[(int)uVar13] = pIVar25;
        il2cpp_runtime_helper_022b4080(&pMVar33->klass + (int)uVar13);
        __this_16 = (System_String_o **)(ulong)(iVar34 + 1U);
        uVar13 = (uint)pSVar17->max_length;
        if ((int)uVar13 <= (int)(iVar34 + 1U)) break;
      }
      if (uVar13 <= (uint)__this_16) goto label_040ad9da;
    } while( true );
  }
  plVar16 = &TypeInfo_MapLoader;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
             (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x48);
  if (pSVar24 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ad9d5;
  bVar12 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                     (pSVar24,(Il2CppObject *)pIStack_390,MethodInfo_Boolean_ContainsKey);
  pIVar36 = (Il2CppRGCTXData *)__this_17;
  if ((char)bVar12 != '\0') goto label_040acbe5;
  __this_16 = (System_String_o **)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_16,MethodInfo_List_1_UnityEngine_Material);
  if (pIStack_388 == (Il2CppRGCTXData *)0x0) goto label_040ad9d5;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&IStack_338,
             (System_Collections_Generic_List_object__o *)pIStack_388,MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
  pIStack_368 = pIStack_328;
  IStack_378 = IStack_338;
  uStack_370 = uStack_330;
  plVar27 = &TypeInfo_MapLoader;
  plVar40 = (long *)__this_17;
  if ((Il2CppRGCTXData *)__this_16 == (Il2CppRGCTXData *)0x0) {
    __this_00.fields._8_8_ = in_stack_fffffffffffffc60;
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffc58;
    __this_00.fields._current._0_4_ = in_stack_fffffffffffffc68;
    __this_00.fields._current._4_4_ = in_stack_fffffffffffffc6c;
    bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       (__this_00,(MethodInfo_321A1D0 *)&IStack_378);
    if ((char)bVar12 != '\0') goto label_040ada1b;
  }
  else {
    while (__this.fields._8_8_ = in_stack_fffffffffffffc60,
          __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffc58,
          __this.fields._current._0_4_ = in_stack_fffffffffffffc68,
          __this.fields._current._4_4_ = in_stack_fffffffffffffc6c,
          bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (__this,(MethodInfo_321A1D0 *)&IStack_378), (char)bVar12 != '\0') {
      pIVar36 = in_stack_fffffffffffffc60;
      uVar13 = in_stack_fffffffffffffc6c;
      if (pIStack_368 == (Il2CppRGCTXData *)0x0) goto label_040ada25;
      pIVar25 = (Il2CppClass *)
                UnityEngine_Renderer__get_sharedMaterial
                          ((UnityEngine_Renderer_o *)pIStack_368,(MethodInfo *)0x0);
      lVar35 = MethodInfo_Void_Add;
      *(int *)((long)__this_16 + 0x1c) = *(int *)((long)__this_16 + 0x1c) + 1;
      pMVar33 = ((Il2CppRGCTXData *)(__this_16 + 2))->method;
      if (pMVar33 == (MethodInfo *)0x0) goto label_040ad9df;
      uVar13 = *(uint *)(__this_16 + 3);
      if (uVar13 < *(uint *)&pMVar33->name) {
        *(uint *)(__this_16 + 3) = uVar13 + 1;
        (&pMVar33->klass)[(int)uVar13] = pIVar25;
        il2cpp_runtime_helper_022b4080(&pMVar33->klass + (int)uVar13,pIVar25);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_16,(Il2CppObject *)pIVar25,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar35 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  __this_01.fields._8_8_ = in_stack_fffffffffffffc60;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffc58;
  __this_01.fields._current._0_4_ = in_stack_fffffffffffffc68;
  __this_01.fields._current._4_4_ = in_stack_fffffffffffffc6c;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_01,(MethodInfo_321A1C0 *)&IStack_378);
  do {
    pIVar25 = (Il2CppClass *)*plVar27;
    if (*(int *)&(pIVar25->_2).field_0x1c == 0) {
      il2cpp_runtime_helper_02337ed0();
      pIVar25 = (Il2CppClass *)*plVar27;
    }
    pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
               ((long)pIVar25->static_fields + 0x48);
    plVar39 = plVar27;
    if (pSVar24 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_040ad9d5:
      il2cpp_runtime_helper_022b2c90();
label_040ad9da:
      il2cpp_runtime_helper_022b2ca0();
      plVar40 = (long *)__this_17;
      plVar27 = plVar39;
label_040ad9df:
      il2cpp_runtime_helper_022b2c90();
label_040ad9e4:
      il2cpp_runtime_helper_022b2c90();
label_040ad9e9:
      il2cpp_runtime_helper_022b2c90();
label_040ad9ee:
      il2cpp_runtime_helper_022b2c90();
label_040ad9f3:
      il2cpp_runtime_helper_022b2c90();
label_040ad9f8:
      il2cpp_runtime_helper_022b2c90();
label_040ad9fd:
      il2cpp_runtime_helper_022b2fd0(in_stack_fffffffffffffc60);
label_040ada07:
      il2cpp_runtime_helper_022b2c90();
label_040ada0c:
      il2cpp_runtime_helper_022b2c90();
label_040ada11:
      il2cpp_runtime_helper_022b2c90();
label_040ada16:
      il2cpp_runtime_helper_022b2c90();
label_040ada1b:
      pIVar18 = pIStack_368;
      __this_17 = (System_String_o **)plVar40;
      plVar39 = plVar27;
      pIVar36 = in_stack_fffffffffffffc60;
      uVar13 = in_stack_fffffffffffffc6c;
      if (pIStack_368 == (Il2CppRGCTXData *)0x0) {
label_040ada25:
        il2cpp_runtime_helper_022b2c90();
label_040ada2a:
        pIVar18 = (Il2CppRGCTXData *)__this_16;
        il2cpp_runtime_helper_022b2fd0();
        __this_17 = (System_String_o **)plVar40;
        plVar39 = plVar27;
      }
      UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)pIVar18,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar24,(Il2CppObject *)pIStack_390,(Il2CppObject *)__this_16,MethodInfo_Void_Add);
      pIVar36 = (Il2CppRGCTXData *)__this_17;
      plVar16 = plVar27;
label_040acbe5:
      __this_17 = (System_String_o **)pIVar36;
      if (pIVar36 == (Il2CppRGCTXData *)0x0) goto label_040ad9d5;
      pIVar18 = (Il2CppRGCTXData *)pIVar36[2].method;
      __this_17 = &"None";
      __this_16 = (System_String_o **)pIVar36;
      uVar13 = in_stack_fffffffffffffc6c;
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_16 = (System_String_o **)pIVar36;
        uVar13 = in_stack_fffffffffffffc6c;
      }
      bVar12 = System_String__op_Equality
                         ((System_String_o *)pIVar18,(System_String_o *)**(undefined8 **)(TypeInfo_MapObjectShader + 0xb8)
                          ,(MethodInfo *)0x0);
      in_stack_fffffffffffffc60 = (Il2CppRGCTXData *)__this_16;
      if ((char)bVar12 != '\0') {
label_040acca6:
        __this_16 = (System_String_o **)pIVar18;
        pSVar23 = (System_String_o *)
                  (*in_stack_fffffffffffffc60->klass->vtable[8].methodPtr)
                            (in_stack_fffffffffffffc60,in_stack_fffffffffffffc60->klass->vtable[8].method);
        __this_17 = (System_String_o **)
                    System_String__Concat_3ae5ba0((System_String_o *)pIStack_390,pSVar23,(MethodInfo *)0x0);
        pIVar25 = (Il2CppClass *)*plVar16;
        in_stack_fffffffffffffc6c = uVar13;
        if (*(int *)&(pIVar25->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
          pIVar25 = (Il2CppClass *)*plVar16;
          in_stack_fffffffffffffc6c = uVar13;
        }
        pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   ((long)pIVar25->static_fields + 0x50);
        plVar39 = (long *)pIStack_390;
        if (pSVar24 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          bVar12 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                             (pSVar24,(Il2CppObject *)__this_17,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar12 == '\0') {
            pIVar25 = (Il2CppClass *)*plVar16;
            if (*(int *)&(pIVar25->_2).field_0x1c == 0) {
              il2cpp_runtime_helper_02337ed0();
              pIVar25 = (Il2CppClass *)*plVar16;
            }
            pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
                       ((long)pIVar25->static_fields + 0x48);
            if (pSVar24 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              pIStack_320 = (Il2CppRGCTXData *)__this_17;
              __this_15 = (System_Collections_Generic_List_object__o *)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar24,(Il2CppObject *)pIStack_390,MethodInfo_List_1_UnityEngine_Material_get_Item);
              __this_16 = (System_String_o **)il2cpp_runtime_helper_023052d0(TypeInfo_List_Material);
              System_Collections_Generic_List_object____ctor
                        ((System_Collections_Generic_List_object__o *)__this_16,MethodInfo_List_1_UnityEngine_Material);
              pSVar24 = (System_Collections_Generic_Dictionary_object__object__o *)
                        il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Material_Material);
              System_Collections_Generic_Dictionary_object__object____ctor(pSVar24,MethodInfo_Dictionary_2_UnityEngine_Material_UnityEngine_Material);
              __this_17 = (System_String_o **)0x0;
              if (__this_15 != (System_Collections_Generic_List_object__o *)0x0) {
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)&IStack_338,__this_15,
                           MethodInfo_List_1_T_Enumerator_UnityEngine_Material_GetEnumerator);
                pIStack_348 = pIStack_328;
                IStack_358 = IStack_338;
                uStack_350 = uStack_330;
                plVar40 = (long *)&IStack_358;
                while (__this_02.fields._8_8_ = in_stack_fffffffffffffc60,
                      __this_02.fields._list =
                           (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffc58,
                      __this_02.fields._current._0_4_ = in_stack_fffffffffffffc68,
                      __this_02.fields._current._4_4_ = in_stack_fffffffffffffc6c,
                      bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                         (__this_02,(MethodInfo_321A1D0 *)plVar40),
                      plVar27 = (long *)pIStack_348, (char)bVar12 != '\0') {
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar12 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)plVar27,(UnityEngine_Object_o *)0x0,
                                      (MethodInfo *)0x0);
                  lVar35 = MethodInfo_Void_Add;
                  plVar39 = plVar27;
                  if ((char)bVar12 == '\0') {
                    if (pSVar24 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                    goto label_040ad9e4;
                    bVar12 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                       (pSVar24,(Il2CppObject *)plVar27,(Il2CppObject **)&pIStack_380,
                                        MethodInfo_Boolean_TryGetValue);
                    if ((char)bVar12 == '\0') {
                      pIVar25 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
                      UnityEngine_Material___ctor_4dc9e70
                                ((UnityEngine_Material_o *)pIVar25,(UnityEngine_Material_o *)plVar27,
                                 (MethodInfo *)0x0);
                      pMVar33 = in_stack_fffffffffffffc60[2].method;
                      pIStack_380 = pIVar25;
                      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      bVar12 = System_String__op_Inequality
                                         ((System_String_o *)pMVar33,
                                          *(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 8),
                                          (MethodInfo *)0x0);
                      pIVar25 = pIStack_380;
                      if ((char)bVar12 != '\0') {
                        if (in_stack_fffffffffffffc60[3].method == (MethodInfo *)0x0) goto label_040ada16;
                        UVar62 = Utility_Color255__ToColor
                                           ((Utility_Color255_o *)in_stack_fffffffffffffc60[3].method,
                                            (MethodInfo *)0x0);
                        if (pIVar25 == (Il2CppClass *)0x0) goto label_040ada11;
                        UnityEngine_Material__set_color
                                  ((UnityEngine_Material_o *)pIVar25,UVar62,(MethodInfo *)0x0);
                      }
                      pMVar33 = in_stack_fffffffffffffc60[2].method;
                      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      bVar12 = System_String__op_Equality
                                         ((System_String_o *)pMVar33,
                                          *(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x10),
                                          (MethodInfo *)0x0);
                      pIVar25 = pIStack_380;
                      if ((char)bVar12 != '\0') {
                        bVar2 = (TypeInfo_MapScriptDefaultTiledMaterial->_2).naturalAligment;
                        if (((in_stack_fffffffffffffc60->klass->_2).naturalAligment < bVar2) ||
                           ((in_stack_fffffffffffffc60->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                            TypeInfo_MapScriptDefaultTiledMaterial)) goto label_040ad9fd;
                        IStack_318 = in_stack_fffffffffffffc60[4];
                        uStack_310 = 0;
                        pMVar33 = extraout_RDX_02;
                        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                          pMVar33 = extraout_RDX_03;
                        }
                        Map_MapLoader__SetDefaultTiling
                                  ((System_String_o *)pIStack_390,(UnityEngine_Material_o *)pIVar25,
                                   (UnityEngine_Vector2_o)IStack_318,pMVar33);
                      }
                      System_Collections_Generic_Dictionary_object__object___Add
                                (pSVar24,(Il2CppObject *)plVar27,(Il2CppObject *)pIStack_380,MethodInfo_Void_Add);
                    }
                    lVar35 = MethodInfo_Void_Add;
                    if ((Il2CppRGCTXData *)__this_16 == (Il2CppRGCTXData *)0x0) goto label_040ad9f8;
                    *(int *)((long)__this_16 + 0x1c) = *(int *)((long)__this_16 + 0x1c) + 1;
                    pMVar33 = ((Il2CppRGCTXData *)(__this_16 + 2))->method;
                    if (pMVar33 == (MethodInfo *)0x0) goto label_040ad9f3;
                    uVar13 = *(uint *)(__this_16 + 3);
                    if (uVar13 < *(uint *)&pMVar33->name) {
                      *(uint *)(__this_16 + 3) = uVar13 + 1;
                      (&pMVar33->klass)[(int)uVar13] = pIStack_380;
                      il2cpp_runtime_helper_022b4080(&pMVar33->klass + (int)uVar13);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_16,
                                 (Il2CppObject *)pIStack_380,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar35 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                  else {
                    if ((Il2CppRGCTXData *)__this_16 == (Il2CppRGCTXData *)0x0) goto label_040ad9e9;
                    *(int *)((long)__this_16 + 0x1c) = *(int *)((long)__this_16 + 0x1c) + 1;
                    pMVar33 = ((Il2CppRGCTXData *)(__this_16 + 2))->method;
                    if (pMVar33 == (MethodInfo *)0x0) goto label_040ad9ee;
                    uVar13 = *(uint *)(__this_16 + 3);
                    if (uVar13 < *(uint *)&pMVar33->name) {
                      *(uint *)(__this_16 + 3) = uVar13 + 1;
                      (&pMVar33->klass)[(int)uVar13] = (Il2CppClass *)0x0;
                      il2cpp_runtime_helper_022b4080(&pMVar33->klass + (int)uVar13,0);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_16,(Il2CppObject *)0x0,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar35 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                }
                __this_03.fields._8_8_ = in_stack_fffffffffffffc60;
                __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffc58;
                __this_03.fields._current._0_4_ = in_stack_fffffffffffffc68;
                __this_03.fields._current._4_4_ = in_stack_fffffffffffffc6c;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_03,(MethodInfo_321A1C0 *)&IStack_358);
                __this_17 = (System_String_o **)pIStack_320;
                plVar16 = &TypeInfo_MapLoader;
                if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
                           (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x50);
                if (pSVar24 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  System_Collections_Generic_Dictionary_object__object___Add
                            (pSVar24,(Il2CppObject *)__this_17,(Il2CppObject *)__this_16,MethodInfo_Void_Add);
                  goto label_040ad0fc;
                }
              }
            }
          }
          else {
label_040ad0fc:
            pIVar25 = (Il2CppClass *)*plVar16;
            if (*(int *)&(pIVar25->_2).field_0x1c == 0) {
              il2cpp_runtime_helper_02337ed0();
              pIVar25 = (Il2CppClass *)*plVar16;
            }
            pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
                       ((long)pIVar25->static_fields + 0x50);
            if ((pSVar24 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
               (__this_17 = (System_String_o **)
                            System_Collections_Generic_Dictionary_object__object___get_Item
                                      (pSVar24,(Il2CppObject *)__this_17,MethodInfo_List_1_UnityEngine_Material_get_Item),
               pIStack_388 != (Il2CppRGCTXData *)0x0)) {
              iVar34 = *(int *)(pIStack_388 + 3);
              if ((Il2CppRGCTXData *)__this_17 != (Il2CppRGCTXData *)0x0) {
                if (iVar34 < 1) {
                  return iVar34;
                }
                iVar34 = 0;
                uVar13 = in_stack_fffffffffffffc6c & 0xff;
                do {
                  plVar39 = (long *)&MethodInfo_Material_get_Item;
                  if (iVar34 < *(int *)(__this_17 + 3)) {
                    x = (UnityEngine_Object_o *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_17,iVar34,MethodInfo_Material_get_Item)
                    ;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar12 = UnityEngine_Object__op_Inequality
                                       (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    if ((char)bVar12 != '\0') {
                      pUVar26 = (UnityEngine_Renderer_o *)
                                System_Collections_Generic_List_object___get_Item
                                          ((System_Collections_Generic_List_object__o *)pIStack_388,iVar34,
                                           MethodInfo_Renderer_get_Item);
                      value_01 = (UnityEngine_Material_o *)
                                 System_Collections_Generic_List_object___get_Item
                                           ((System_Collections_Generic_List_object__o *)__this_17,iVar34,
                                            MethodInfo_Material_get_Item);
                      __this_16 = (System_String_o **)(Il2CppRGCTXData *)0x0;
                      if (pUVar26 == (UnityEngine_Renderer_o *)0x0) goto label_040ad9d5;
                      UnityEngine_Renderer__set_sharedMaterial(pUVar26,value_01,(MethodInfo *)0x0);
                    }
                  }
                  pUVar26 = (UnityEngine_Renderer_o *)
                            System_Collections_Generic_List_object___get_Item
                                      ((System_Collections_Generic_List_object__o *)pIStack_388,iVar34,
                                       MethodInfo_Renderer_get_Item);
                  __this_16 = (System_String_o **)pIStack_388;
                  if (pUVar26 == (UnityEngine_Renderer_o *)0x0) goto label_040ad9d5;
                  UnityEngine_Renderer__set_enabled(pUVar26,uVar13,(MethodInfo *)0x0);
                  iVar34 = iVar34 + 1;
                  if (*(int *)(pIStack_388 + 3) <= iVar34) {
                    return extraout_EAX;
                  }
                } while( true );
              }
              if (iVar34 < 1) {
                return iVar34;
              }
            }
          }
        }
        goto label_040ad9d5;
      }
      pIVar18 = (Il2CppRGCTXData *)((Il2CppRGCTXData *)(__this_16 + 2))->method;
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar12 = System_String__op_Equality
                         ((System_String_o *)pIVar18,*(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 8)
                          ,(MethodInfo *)0x0);
      in_stack_fffffffffffffc60 = (Il2CppRGCTXData *)__this_16;
      if ((char)bVar12 != '\0') goto label_040acca6;
      pIVar18 = (Il2CppRGCTXData *)((Il2CppRGCTXData *)(__this_16 + 2))->method;
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar12 = System_String__op_Equality
                         ((System_String_o *)pIVar18,
                          *(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 0x10),(MethodInfo *)0x0);
      in_stack_fffffffffffffc60 = (Il2CppRGCTXData *)__this_16;
      if ((char)bVar12 != '\0') goto label_040acca6;
      pIVar36 = (Il2CppRGCTXData *)__this_16;
      plVar27 = (long *)(*((Il2CppClass *)*__this_16)->vtable[8].methodPtr)(__this_16);
      pIVar25 = (Il2CppClass *)*plVar16;
      if (*(int *)&(pIVar25->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
        pIVar25 = (Il2CppClass *)*plVar16;
      }
      pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 ((long)pIVar25->static_fields + 0x58);
      plVar39 = plVar27;
      in_stack_fffffffffffffc60 = pIVar36;
      in_stack_fffffffffffffc6c = uVar13;
      if (pSVar24 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ad9d5;
      bVar12 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                         (pSVar24,(Il2CppObject *)plVar27,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar12 != '\0') {
        pIVar25 = (Il2CppClass *)*plVar16;
        if (*(int *)&(pIVar25->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
          pIVar25 = (Il2CppClass *)*plVar16;
        }
        pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   ((long)pIVar25->static_fields + 0x58);
        in_stack_fffffffffffffc60 = pIVar36;
        in_stack_fffffffffffffc6c = uVar13;
        if (pSVar24 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ad9d5;
        plVar27 = (long *)System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar24,(Il2CppObject *)plVar27,MethodInfo_Material_get_Item);
        in_stack_fffffffffffffc60 = pIVar36;
joined_r0x040ad2df:
        plVar39 = plVar27;
        if (pIStack_388 != (Il2CppRGCTXData *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&IStack_338,
                     (System_Collections_Generic_List_object__o *)pIStack_388,MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
          pIStack_368 = pIStack_328;
          IStack_378 = IStack_338;
          uStack_370 = uStack_330;
          plVar40 = &TypeInfo_Object;
          __this_16 = (System_String_o **)((ulong)uVar13 & 0xff);
          do {
            __this_04.fields._8_8_ = in_stack_fffffffffffffc60;
            __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffc58;
            __this_04.fields._current._0_4_ = in_stack_fffffffffffffc68;
            __this_04.fields._current._4_4_ = in_stack_fffffffffffffc6c;
            bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (__this_04,(MethodInfo_321A1D0 *)&IStack_378);
            pIVar36 = pIStack_368;
            if ((char)bVar12 == '\0') {
              __this_05.fields._8_8_ = in_stack_fffffffffffffc60;
              __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffc58;
              __this_05.fields._current._0_4_ = in_stack_fffffffffffffc68;
              __this_05.fields._current._4_4_ = in_stack_fffffffffffffc6c;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_05,(MethodInfo_321A1C0 *)&IStack_378);
              return extraout_EAX_00;
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar12 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)plVar27,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if ((char)bVar12 == '\0') {
              if (pIVar36 == (Il2CppRGCTXData *)0x0) goto label_040ada0c;
            }
            else {
              if (pIVar36 == (Il2CppRGCTXData *)0x0) goto label_040ada07;
              UnityEngine_Renderer__set_sharedMaterial
                        ((UnityEngine_Renderer_o *)pIVar36,(UnityEngine_Material_o *)plVar27,(MethodInfo *)0x0
                        );
            }
            UnityEngine_Renderer__set_enabled
                      ((UnityEngine_Renderer_o *)pIVar36,(bool_conflict)__this_16,(MethodInfo *)0x0);
          } while( true );
        }
        goto label_040ad9d5;
      }
      pMVar33 = ((Il2CppRGCTXData *)(__this_16 + 2))->method;
      if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar12 = Map_MapObjectShader__IsLegacyShader((System_String_o *)pMVar33,(MethodInfo *)0x0);
      handle = TypeRef_MapScriptBasicMaterial;
      plVar40 = (long *)__this_17;
      if ((char)bVar12 == '\0') {
        if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar28 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        pSVar29 = System_Object__GetType((Il2CppObject *)__this_16,(MethodInfo *)0x0);
        in_stack_fffffffffffffc60 = pIVar36;
        in_stack_fffffffffffffc6c = uVar13;
        if (pSVar28 == (System_Type_o *)0x0) goto label_040ad9d5;
        cVar11 = (*(pSVar28->klass->vtable)._22_IsAssignableFrom.methodPtr)
                           (pSVar28,pSVar29,(pSVar28->klass->vtable)._22_IsAssignableFrom.method);
        if (cVar11 == '\0') {
          plVar39 = (long *)0x0;
          pIVar25 = (Il2CppClass *)*plVar16;
          iVar34 = *(int *)&(pIVar25->_2).field_0x1c;
          in_stack_fffffffffffffc60 = pIVar36;
          in_stack_fffffffffffffc6c = uVar13;
          goto joined_r0x040ad770;
        }
        bVar2 = (TypeInfo_MapScriptBasicMaterial->_2).naturalAligment;
        if (((((Il2CppClass *)*__this_16)->_2).naturalAligment < bVar2) ||
           ((((Il2CppClass *)*__this_16)->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapScriptBasicMaterial))
        goto label_040ada2a;
        pSVar23 = System_String__Concat_3ae5ba0
                            ((System_String_o *)((Il2CppRGCTXData *)(__this_16 + 2))->method,"Material",
                             (MethodInfo *)0x0);
        pMVar33 = extraout_RDX_06;
        if (*(int *)&(((Il2CppClass *)*plVar16)->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar33 = extraout_RDX_07;
        }
        __this_16 = (System_String_o **)Map_MapLoader__LoadAssetCached("Map/Materials",pSVar23,pMVar33);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        plVar39 = (long *)UnityEngine_Object__Instantiate_4e01490
                                    ((UnityEngine_Object_o *)__this_16,(MethodInfo *)0x0);
        if ((Il2CppRGCTXData *)plVar39 != (Il2CppRGCTXData *)0x0) {
          bVar2 = (TypeInfo_Material->_2).naturalAligment;
          if (((((Il2CppClass *)*plVar39)->_2).naturalAligment < bVar2) ||
             ((((Il2CppClass *)*plVar39)->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Material))
          goto label_040ada3e;
        }
        in_stack_fffffffffffffc60 = pIVar36;
        bVar12 = System_String__op_Inequality
                           ((System_String_o *)pIVar36[4].method,"Misc/None",(MethodInfo *)0x0);
        if (((char)bVar12 == '\0') ||
           (bVar12 = System_String__op_Inequality
                               ((System_String_o *)pIVar36[4].method,"None",(MethodInfo *)0x0),
           (char)bVar12 == '\0')) goto label_040ad835;
        in_stack_fffffffffffffc6c = uVar13;
        if (((Il2CppClass *)pIVar36[4].method == (Il2CppClass *)0x0) ||
           (pSVar30 = System_String__Split((System_String_o *)pIVar36[4].method,0x2f,0,(MethodInfo *)0x0),
           in_stack_fffffffffffffc6c = uVar13, pSVar30 == (System_String_array *)0x0)) goto label_040ad9d5;
        iVar34 = (int)pSVar30->max_length;
        if ((iVar34 != 0) && (iVar34 != 1)) {
          pIStack_390 = (Il2CppRGCTXData *)pSVar30->m_Items[0];
          __this_16 = (System_String_o **)pSVar30->m_Items[1];
          uVar15 = System_String__op_Equality((System_String_o *)pIStack_390,"Legacy",(MethodInfo *)0x0);
          __this_17 = (System_String_o **)(ulong)uVar15;
          pIVar36 = in_stack_fffffffffffffc60;
          if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pIVar36 = in_stack_fffffffffffffc60;
          }
          pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
                     (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 8);
          in_stack_fffffffffffffc60 = pIVar36;
          in_stack_fffffffffffffc6c = uVar13;
          if (pSVar24 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ad9d5;
          bVar12 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                             (pSVar24,(Il2CppObject *)__this_16,MethodInfo_Boolean_ContainsKey);
          in_stack_fffffffffffffc60 = pIVar36;
          if ((char)bVar12 != '\0') {
            if ((char)uVar15 != '\0') {
              if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
                         (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x28);
              in_stack_fffffffffffffc60 = pIVar36;
              in_stack_fffffffffffffc6c = uVar13;
              if (pSVar24 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_040ad9d5;
              bVar12 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                 (pSVar24,(Il2CppObject *)__this_16,MethodInfo_Boolean_ContainsKey);
              in_stack_fffffffffffffc60 = pIVar36;
              if ((char)bVar12 == '\0') goto label_040ad835;
            }
            if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
                       (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 8);
            in_stack_fffffffffffffc60 = pIVar36;
            in_stack_fffffffffffffc6c = uVar13;
            if (pSVar24 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ad9d5;
            pIVar31 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar24,(Il2CppObject *)__this_16,MethodInfo_MapScriptBasicMaterial_get_Item);
            if ((char)uVar15 == '\0') {
              __this_17 = (System_String_o **)
                          System_String__Concat_3ae5ba0
                                    ("Map/Textures/",(System_String_o *)pIStack_390,(MethodInfo *)0x0);
              __this_16 = (System_String_o **)
                          System_String__Concat_3ae5ba0
                                    ((System_String_o *)__this_16,"Texture",(MethodInfo *)0x0);
              pMVar33 = extraout_RDX_10;
              if (*(int *)&(((Il2CppClass *)*plVar16)->_2).field_0x1c == 0) {
                il2cpp_runtime_helper_02337ed0();
                pMVar33 = extraout_RDX_11;
              }
              value_02 = (UnityEngine_Texture_o *)
                         Map_MapLoader__LoadAssetCached
                                   ((System_String_o *)__this_17,(System_String_o *)__this_16,pMVar33);
            }
            else {
              if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
                         (*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 0x28);
              __this_17 = (System_String_o **)&TypeInfo_BuiltinMapTextures;
              in_stack_fffffffffffffc60 = pIVar36;
              in_stack_fffffffffffffc6c = uVar13;
              if (pSVar24 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_040ad9d5;
              __this_16 = (System_String_o **)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar24,(Il2CppObject *)__this_16,MethodInfo_String_get_Item);
              pMVar33 = extraout_RDX_08;
              if (*(int *)&(((Il2CppClass *)*plVar16)->_2).field_0x1c == 0) {
                il2cpp_runtime_helper_02337ed0();
                pMVar33 = extraout_RDX_09;
              }
              value_02 = (UnityEngine_Texture_o *)
                         Map_MapLoader__LoadAssetCached("Map",(System_String_o *)__this_16,pMVar33);
            }
            if (value_02 == (UnityEngine_Texture_o *)0x0) {
label_040ad7e6:
              value_02 = (UnityEngine_Texture_o *)0x0;
            }
            else if (value_02->klass != TypeInfo_Texture2D) {
              il2cpp_runtime_helper_022b2fd0(value_02);
              goto label_040ad7e6;
            }
            in_stack_fffffffffffffc60 = pIVar36;
            in_stack_fffffffffffffc6c = uVar13;
            if (((Il2CppRGCTXData *)plVar39 == (Il2CppRGCTXData *)0x0) ||
               (UnityEngine_Material__set_mainTexture
                          ((UnityEngine_Material_o *)plVar39,value_02,(MethodInfo *)0x0),
               in_stack_fffffffffffffc60 = pIVar36, in_stack_fffffffffffffc6c = uVar13,
               pIVar31 == (Il2CppObject *)0x0)) goto label_040ad9d5;
            value.fields.y = (float)((ulong)pIVar31[2].monitor >> 0x20) * SUB84(pIVar36[5],4);
            value.fields.x = SUB84(pIVar31[2].monitor,0) * SUB84(pIVar36[5],0);
            UnityEngine_Material__set_mainTextureScale
                      ((UnityEngine_Material_o *)plVar39,value,(MethodInfo *)0x0);
            UnityEngine_Material__set_mainTextureOffset
                      ((UnityEngine_Material_o *)plVar39,(UnityEngine_Vector2_o)pIVar36[6],(MethodInfo *)0x0);
          }
label_040ad835:
          in_stack_fffffffffffffc6c = uVar13;
          if ((pIVar36[3].method == (MethodInfo *)0x0) ||
             (UVar62 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar36[3].method,(MethodInfo *)0x0),
             in_stack_fffffffffffffc6c = uVar13, (Il2CppRGCTXData *)plVar39 == (Il2CppRGCTXData *)0x0))
          goto label_040ad9d5;
          UnityEngine_Material__set_color((UnityEngine_Material_o *)plVar39,UVar62,(MethodInfo *)0x0);
          bVar2 = (TypeInfo_MapScriptReflectiveMaterial->_2).naturalAligment;
          if ((bVar2 <= (in_stack_fffffffffffffc60->klass->_2).naturalAligment) &&
             ((in_stack_fffffffffffffc60->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_MapScriptReflectiveMaterial)) {
            if ((Il2CppRGCTXData *)in_stack_fffffffffffffc60[7].method == (Il2CppRGCTXData *)0x0)
            goto label_040ad9d5;
            UVar62 = Utility_Color255__ToColor
                               ((Utility_Color255_o *)in_stack_fffffffffffffc60[7].method,(MethodInfo *)0x0);
            UnityEngine_Material__SetColor
                      ((UnityEngine_Material_o *)plVar39,"_SpecularMap",UVar62,(MethodInfo *)0x0);
          }
          pIVar25 = (Il2CppClass *)*plVar16;
          iVar34 = *(int *)&(pIVar25->_2).field_0x1c;
          goto joined_r0x040ad770;
        }
        goto label_040ad9da;
      }
      bVar2 = (TypeInfo_MapScriptLegacyMaterial->_2).naturalAligment;
      if (((((Il2CppClass *)*__this_16)->_2).naturalAligment < bVar2) ||
         ((((Il2CppClass *)*__this_16)->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapScriptLegacyMaterial))
      goto label_040ada2a;
      pMVar33 = ((Il2CppRGCTXData *)(__this_16 + 2))->method;
      method_00 = extraout_RDX_04;
      if (*(int *)&(((Il2CppClass *)*plVar16)->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_05;
      }
      __this_16 = (System_String_o **)
                  Map_MapLoader__LoadAssetCached("Map/Legacy/Materials",(System_String_o *)pMVar33,method_00);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar39 = (long *)UnityEngine_Object__Instantiate_4e01490
                                  ((UnityEngine_Object_o *)__this_16,(MethodInfo *)0x0);
      if ((Il2CppRGCTXData *)plVar39 == (Il2CppRGCTXData *)0x0) {
label_040ad3ce:
        in_stack_fffffffffffffc60 = pIVar36;
        in_stack_fffffffffffffc6c = uVar13;
        if ((pIVar36[3].method == (MethodInfo *)0x0) ||
           (UVar62 = Utility_Color255__ToColor((Utility_Color255_o *)pIVar36[3].method,(MethodInfo *)0x0),
           in_stack_fffffffffffffc60 = pIVar36, (Il2CppRGCTXData *)plVar39 == (Il2CppRGCTXData *)0x0))
        goto label_040ad9d5;
        UnityEngine_Material__SetColor
                  ((UnityEngine_Material_o *)plVar39,"_TintColor",UVar62,(MethodInfo *)0x0);
        UnityEngine_Material__set_mainTextureScale
                  ((UnityEngine_Material_o *)plVar39,(UnityEngine_Vector2_o)pIVar36[4],(MethodInfo *)0x0);
        pIVar25 = (Il2CppClass *)*plVar16;
        iVar34 = *(int *)&(pIVar25->_2).field_0x1c;
        in_stack_fffffffffffffc60 = pIVar36;
joined_r0x040ad770:
        if (iVar34 == 0) {
          il2cpp_runtime_helper_02337ed0();
          pIVar25 = (Il2CppClass *)*plVar16;
        }
        pSVar24 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   ((long)pIVar25->static_fields + 0x58);
        if (pSVar24 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ad9d5;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar24,(Il2CppObject *)plVar27,(Il2CppObject *)plVar39,MethodInfo_Void_Add);
        plVar27 = plVar39;
        goto joined_r0x040ad2df;
      }
      bVar2 = (TypeInfo_Material->_2).naturalAligment;
      if ((bVar2 <= (((Il2CppClass *)*plVar39)->_2).naturalAligment) &&
         ((((Il2CppClass *)*plVar39)->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Material)) goto label_040ad3ce;
    }
label_040ada3e:
    auVar63 = il2cpp_runtime_helper_022b2fd0(plVar39);
    if (auVar63._8_4_ != 1) goto label_040add17;
    plVar16 = (long *)__cxa_begin_catch(auVar63._0_8_);
    lVar35 = *plVar16;
    __cxa_end_catch();
    __this_06.fields._8_8_ = pIVar36;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffc58;
    __this_06.fields._current._0_4_ = in_stack_fffffffffffffc68;
    __this_06.fields._current._4_4_ = uVar13;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)&IStack_378);
    plVar27 = plVar39;
    in_stack_fffffffffffffc60 = pIVar36;
    in_stack_fffffffffffffc6c = uVar13;
  } while (lVar35 == 0);
  il2cpp_runtime_helper_022fefe0(lVar35);
label_040add17:
  __this_07.fields._8_8_ = pIVar36;
  __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffc58;
  __this_07.fields._current._0_4_ = in_stack_fffffffffffffc68;
  __this_07.fields._current._4_4_ = uVar13;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_07,(MethodInfo_321A1C0 *)&IStack_378);
  _Unwind_Resume(auVar63._0_8_);
}


// Map.MapLoader$$SetCollider
// il2cpp: void Map_MapLoader__SetCollider (UnityEngine_Collider_o* c, System_String_o* collideMode, System_String_o* collideWith, const MethodInfo* method);
// 0x40ae500

void Map_MapLoader__SetCollider
               (UnityEngine_Collider_o *c,System_String_o *collideMode,System_String_o *collideWith,
               MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  int32_t iVar3;
  UnityEngine_GameObject_o *pUVar4;
  long lVar5;
  MethodInfo *method_00;
  UnityEngine_MonoBehaviour_o *__this;
  UnityEngine_MonoBehaviour_o *__this_00;
  
  if (g_data_057ac4b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideMode);
    g_data_057ac4b6 = '\x01';
  }
  if (*(int *)(TypeInfo_MapObjectCollideMode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (UnityEngine_MonoBehaviour_o *)collideMode;
  uVar2 = System_String__op_Equality
                    (collideMode,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 8),(MethodInfo *)0x0);
  if (c != (UnityEngine_Collider_o *)0x0) {
    UnityEngine_Collider__set_isTrigger(c,uVar2 & 0xff,(MethodInfo *)0x0);
    uVar2 = System_String__op_Inequality
                      (collideMode,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideMode + 0xb8) + 0x10),
                       (MethodInfo *)0x0);
    UnityEngine_Collider__set_enabled(c,uVar2 & 0xff,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)c,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar3 = Map_MapLoader__GetColliderLayer(collideWith,method_00);
    __this = (UnityEngine_MonoBehaviour_o *)collideWith;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__set_layer(pUVar4,iVar3,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = __this;
  if (g_data_057ac4b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    __this_00 = (UnityEngine_MonoBehaviour_o *)&TypeInfo_PhysicsLayer;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac4b7 = '\x01';
  }
  if ((__this != (UnityEngine_MonoBehaviour_o *)0x0) &&
     (pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0),
     __this_00 = __this, pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
    iVar3 = UnityEngine_GameObject__get_layer(pUVar4,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar5 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      iVar1 = *(int *)(lVar5 + 0x3c);
    }
    else {
      lVar5 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      iVar1 = *(int *)(lVar5 + 0x3c);
    }
    if (iVar3 == iVar1) {
      if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
    }
    else {
      if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar5 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
        iVar1 = *(int *)(lVar5 + 0x2c);
      }
      else {
        iVar1 = *(int *)(lVar5 + 0x2c);
      }
      if (iVar3 == iVar1) {
        if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
      }
      else {
        if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          lVar5 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
          iVar1 = *(int *)(lVar5 + 0x34);
        }
        else {
          iVar1 = *(int *)(lVar5 + 0x34);
        }
        if (iVar3 == iVar1) {
          if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
        }
        else {
          if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            lVar5 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
            iVar1 = *(int *)(lVar5 + 0x50);
          }
          else {
            iVar1 = *(int *)(lVar5 + 0x50);
          }
          if (iVar3 == iVar1) {
            if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
          }
          else {
            if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              lVar5 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
            }
            if (iVar3 == *(int *)(lVar5 + 0x54)) {
              if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
            }
            else {
              if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                lVar5 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
              }
              if (iVar3 == *(int *)(lVar5 + 0x30)) {
                if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
              }
              else {
                if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                  lVar5 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
                }
                if (iVar3 == *(int *)(lVar5 + 0x38)) {
                  if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                }
                else {
                  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    lVar5 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
                  }
                  if (iVar3 == *(int *)(lVar5 + 0x40)) {
                    if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                  }
                  else {
                    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader$$GetColliderCollideWith
// il2cpp: System_String_o* Map_MapLoader__GetColliderCollideWith (UnityEngine_Collider_o* c, const MethodInfo* method);
// 0x40ae600

System_String_o * Map_MapLoader__GetColliderCollideWith(UnityEngine_Collider_o *c,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  UnityEngine_GameObject_o *__this;
  undefined8 *puVar3;
  long lVar4;
  System_String_o *extraout_RAX;
  UnityEngine_MonoBehaviour_o *__this_00;
  
  __this_00 = (UnityEngine_MonoBehaviour_o *)c;
  if (g_data_057ac4b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    __this_00 = (UnityEngine_MonoBehaviour_o *)&TypeInfo_PhysicsLayer;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac4b7 = '\x01';
  }
  if ((c != (UnityEngine_Collider_o *)0x0) &&
     (__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)c,(MethodInfo *)0x0),
     __this_00 = (UnityEngine_MonoBehaviour_o *)c, __this != (UnityEngine_GameObject_o *)0x0)) {
    iVar2 = UnityEngine_GameObject__get_layer(__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar4 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      iVar1 = *(int *)(lVar4 + 0x3c);
    }
    else {
      lVar4 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      iVar1 = *(int *)(lVar4 + 0x3c);
    }
    if (iVar2 == iVar1) {
      if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      puVar3 = *(undefined8 **)(TypeInfo_MapObjectCollideWith + 0xb8);
    }
    else {
      if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar4 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
        iVar1 = *(int *)(lVar4 + 0x2c);
      }
      else {
        iVar1 = *(int *)(lVar4 + 0x2c);
      }
      if (iVar2 == iVar1) {
        if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        puVar3 = (undefined8 *)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 8);
      }
      else {
        if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          lVar4 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
          iVar1 = *(int *)(lVar4 + 0x34);
        }
        else {
          iVar1 = *(int *)(lVar4 + 0x34);
        }
        if (iVar2 == iVar1) {
          if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          puVar3 = (undefined8 *)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x10);
        }
        else {
          if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            lVar4 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
            iVar1 = *(int *)(lVar4 + 0x50);
          }
          else {
            iVar1 = *(int *)(lVar4 + 0x50);
          }
          if (iVar2 == iVar1) {
            if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            puVar3 = (undefined8 *)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x18);
          }
          else {
            if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              lVar4 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
            }
            if (iVar2 == *(int *)(lVar4 + 0x54)) {
              if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              puVar3 = (undefined8 *)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x20);
            }
            else {
              if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                lVar4 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
              }
              if (iVar2 == *(int *)(lVar4 + 0x30)) {
                if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                puVar3 = (undefined8 *)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x28);
              }
              else {
                if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                  lVar4 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
                }
                if (iVar2 == *(int *)(lVar4 + 0x38)) {
                  if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  puVar3 = (undefined8 *)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30);
                }
                else {
                  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    lVar4 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
                  }
                  if (iVar2 == *(int *)(lVar4 + 0x40)) {
                    if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    puVar3 = (undefined8 *)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x40);
                  }
                  else {
                    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      lVar4 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
                    }
                    iVar1 = *(int *)(lVar4 + 0x18);
                    if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
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
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Map.MapLoader$$GetColliderLayer
// il2cpp: int32_t Map_MapLoader__GetColliderLayer (System_String_o* collideWith, const MethodInfo* method);
// 0x40ae1b0

int32_t Map_MapLoader__GetColliderLayer(System_String_o *collideWith,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  
  if (g_data_057ac4b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057ac4b8 = '\x01';
  }
  if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = System_String__op_Equality
                    (collideWith,(System_String_o *)**(undefined8 **)(TypeInfo_MapObjectCollideWith + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = System_String__op_Equality
                      (collideWith,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 8),(MethodInfo *)0x0
                      );
    if ((char)bVar1 == '\0') {
      if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = System_String__op_Equality
                        (collideWith,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x10),
                         (MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar1 = System_String__op_Equality
                          (collideWith,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x18),
                           (MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar1 = System_String__op_Equality
                            (collideWith,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x20),
                             (MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar1 = System_String__op_Equality
                              (collideWith,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x28),
                               (MethodInfo *)0x0);
            if ((char)bVar1 == '\0') {
              if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar1 = System_String__op_Equality
                                (collideWith,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30),
                                 (MethodInfo *)0x0);
              if ((char)bVar1 == '\0') {
                if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar1 = System_String__op_Equality
                                  (collideWith,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x40),
                                   (MethodInfo *)0x0);
                if ((char)bVar1 == '\0') {
                  if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  iVar2 = 0;
                  bVar1 = System_String__op_Equality
                                    (collideWith,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x38),
                                     (MethodInfo *)0x0);
                  if ((char)bVar1 != '\0') {
                    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    iVar2 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x18);
                  }
                }
                else {
                  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  iVar2 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x40);
                }
              }
              else {
                if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                iVar2 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x38);
              }
            }
            else {
              if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              iVar2 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x30);
            }
          }
          else {
            if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            iVar2 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x54);
          }
        }
        else {
          if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iVar2 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x50);
        }
      }
      else {
        if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar2 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x34);
      }
    }
    else {
      if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar2 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x2c);
    }
  }
  else {
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar2 = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x3c);
  }
  return iVar2;
}


// Map.MapLoader$$LoadAssetCached
// il2cpp: UnityEngine_Object_o* Map_MapLoader__LoadAssetCached (System_String_o* path, System_String_o* asset, const MethodInfo* method);
// 0x40ae030

UnityEngine_Object_o *
Map_MapLoader__LoadAssetCached(System_String_o *path,System_String_o *asset,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  System_String_o *key;
  UnityEngine_Object_o *pUVar3;
  uint uVar4;
  System_String_o *a;
  
  if (g_data_057ac4b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ac4b9 = '\x01';
  }
  key = System_String__Concat_3af7150(path,"/",asset,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
  a = (System_String_o *)0x0;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar3 = ApplicationManagers_ResourceManager__LoadAsset(path,asset,0,(MethodInfo *)0x0);
      a = path;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ae19e;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)key,(Il2CppObject *)pUVar3,MethodInfo_Void_Add);
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
    a = (System_String_o *)0x0;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar3 = (UnityEngine_Object_o *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)key,MethodInfo_Object_get_Item);
      return pUVar3;
    }
  }
label_040ae19e:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectCollideWith);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057ac4b8 = '\x01';
  }
  if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = System_String__op_Equality
                    (a,(System_String_o *)**(undefined8 **)(TypeInfo_MapObjectCollideWith + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = System_String__op_Equality
                      (a,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 8),(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = System_String__op_Equality
                        (a,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x10),(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = System_String__op_Equality
                          (a,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x18),(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar2 = System_String__op_Equality
                            (a,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x20),(MethodInfo *)0x0)
          ;
          if ((char)bVar2 == '\0') {
            if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar2 = System_String__op_Equality
                              (a,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x28),
                               (MethodInfo *)0x0);
            if ((char)bVar2 == '\0') {
              if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar2 = System_String__op_Equality
                                (a,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30),
                                 (MethodInfo *)0x0);
              if ((char)bVar2 == '\0') {
                if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar2 = System_String__op_Equality
                                  (a,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x40),
                                   (MethodInfo *)0x0);
                if ((char)bVar2 == '\0') {
                  if (*(int *)(TypeInfo_MapObjectCollideWith + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  uVar4 = 0;
                  bVar2 = System_String__op_Equality
                                    (a,*(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x38),
                                     (MethodInfo *)0x0);
                  if ((char)bVar2 != '\0') {
                    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    uVar4 = *(uint *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x18);
                  }
                }
                else {
                  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  uVar4 = *(uint *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x40);
                }
              }
              else {
                if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                uVar4 = *(uint *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x38);
              }
            }
            else {
              if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              uVar4 = *(uint *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x30);
            }
          }
          else {
            if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            uVar4 = *(uint *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x54);
          }
        }
        else {
          if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar4 = *(uint *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x50);
        }
      }
      else {
        if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar4 = *(uint *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x34);
      }
    }
    else {
      if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar4 = *(uint *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x2c);
    }
  }
  else {
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar4 = *(uint *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x3c);
  }
  return (UnityEngine_Object_o *)(ulong)uVar4;
}


// Map.MapLoader$$LoadPrefabCached
// il2cpp: UnityEngine_GameObject_o* Map_MapLoader__LoadPrefabCached (System_String_o* asset, const MethodInfo* method);
// 0x40ab090

UnityEngine_GameObject_o * Map_MapLoader__LoadPrefabCached(System_String_o *asset,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Collections_Generic_List_object__c *pSVar5;
  void *pvVar6;
  System_Object_array *pSVar7;
  char cVar8;
  bool_conflict bVar9;
  System_String_array *pSVar10;
  System_String_o *pSVar11;
  UnityEngine_Object_o *pUVar12;
  System_Collections_Generic_List_object__o *__this;
  undefined8 uVar13;
  System_String_o *pSVar14;
  System_String_o *pSVar15;
  long lVar16;
  UnityEngine_GameObject_o *__this_00;
  undefined8 *puVar17;
  undefined1 auVar18 [12];
  
  if (g_data_057ac4ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AssetBundleManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"Map");
    il2cpp_runtime_helper_023445d0(&"/Prefabs/");
    il2cpp_runtime_helper_023445d0(&"Arenas/CaveMap1");
    g_data_057ac4ba = '\x01';
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
  if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_040ab3e4:
    pUVar12 = (UnityEngine_Object_o *)il2cpp_runtime_helper_022b2c90();
label_040ab3e9:
    il2cpp_runtime_helper_022b2fd0(pUVar12);
label_040ab3f1:
    il2cpp_runtime_helper_022b2c90();
label_040ab3f6:
    il2cpp_runtime_helper_022b2c90();
label_040ab3fb:
    il2cpp_runtime_helper_022b2ca0();
label_040ab400:
    il2cpp_runtime_helper_022b2ca0();
label_040ab405:
    il2cpp_runtime_helper_022b2c90();
label_040ab40a:
    il2cpp_runtime_helper_022b2ca0();
label_040ab40f:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar4,(Il2CppObject *)asset,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar9 != '\0') {
label_040ab364:
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ab3e4;
      pUVar12 = (UnityEngine_Object_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar4,(Il2CppObject *)asset,MethodInfo_Object_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar12 = UnityEngine_Object__Instantiate_4e01490(pUVar12,(MethodInfo *)0x0);
      if (pUVar12 == (UnityEngine_Object_o *)0x0) {
        return (UnityEngine_GameObject_o *)0x0;
      }
      if (pUVar12->klass == TypeInfo_GameObject) {
        return (UnityEngine_GameObject_o *)pUVar12;
      }
      goto label_040ab3e9;
    }
    if (asset == (System_String_o *)0x0) goto label_040ab3f1;
    pSVar10 = System_String__Split_3afa740(asset,"/",0,(MethodInfo *)0x0);
    if (pSVar10 == (System_String_array *)0x0) goto label_040ab3f6;
    if ((int)pSVar10->max_length == 0) goto label_040ab3fb;
    bVar9 = System_String__op_Equality(pSVar10->m_Items[0],"Custom",(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar2 = (int)pSVar10->max_length;
      if (iVar2 == 1) goto label_040ab40a;
      if (iVar2 != 0) {
        pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
        pSVar14 = System_String__Concat_3af7150
                            (pSVar10->m_Items[0],"/Prefabs/",pSVar10->m_Items[1],(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar12 = ApplicationManagers_ResourceManager__LoadAsset("Map",pSVar14,0,(MethodInfo *)0x0);
        if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040ab419;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar4,(Il2CppObject *)asset,(Il2CppObject *)pUVar12,MethodInfo_Void_Add);
label_040ab32d:
        bVar9 = System_String__op_Equality(asset,"Arenas/CaveMap1",(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Weather_WeatherManager__EnableCaveMap((MethodInfo *)0x0);
        }
        goto label_040ab364;
      }
      goto label_040ab40f;
    }
    if ((uint)pSVar10->max_length < 2) goto label_040ab400;
    pSVar14 = pSVar10->m_Items[1];
    if (pSVar14 == (System_String_o *)0x0) goto label_040ab405;
    pSVar11 = System_String__Substring(asset,(pSVar14->fields)._stringLength + 8,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x40);
    if (*(int *)(TypeInfo_AssetBundleManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar12 = ApplicationManagers_AssetBundleManager__LoadAsset(pSVar14,pSVar11,(MethodInfo *)0x0);
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar4,(Il2CppObject *)asset,(Il2CppObject *)pUVar12,MethodInfo_Void_Add);
      goto label_040ab32d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_040ab419:
  auVar18 = il2cpp_runtime_helper_022b2c90();
  if (auVar18._8_4_ != 1) {
    _Unwind_Resume(auVar18._0_8_);
  }
  __this = (System_Collections_Generic_List_object__o *)__cxa_begin_catch(auVar18._0_8_);
  uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  cVar8 = il2cpp_runtime_helper_0233e000(uVar13,(__this->klass->_1).image);
  if (cVar8 != '\0') {
    pSVar5 = __this->klass;
    __cxa_end_catch();
    if (pSVar5 != (System_Collections_Generic_List_object__c *)0x0) {
      pvVar6 = (pSVar5->_1).image;
      pSVar14 = (System_String_o *)
                (**(code **)((long)pvVar6 + 0x188))(pSVar5,*(undefined8 *)((long)pvVar6 + 400));
      pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Failed to load asset: ");
      pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", ");
      pSVar14 = System_String__Concat_3af7470(pSVar11,asset,pSVar15,pSVar14,(MethodInfo *)0x0);
      lVar16 = il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
      if (*(int *)(lVar16 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar16);
      }
      ApplicationManagers_DebugConsole__Log(pSVar14,1,(MethodInfo *)0x0);
      lVar16 = il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
      if (*(int *)(lVar16 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar16);
      }
      lVar16 = il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
      __this = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar16 + 0xb8) + 0x78);
      pvVar6 = (pSVar5->_1).image;
      pSVar14 = (System_String_o *)
                (**(code **)((long)pvVar6 + 0x188))(pSVar5,*(undefined8 *)((long)pvVar6 + 400));
      pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Failed to load asset: ");
      pSVar15 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", ");
      pSVar14 = System_String__Concat_3af7470(pSVar11,asset,pSVar15,pSVar14,(MethodInfo *)0x0);
      if (__this != (System_Collections_Generic_List_object__o *)0x0) {
        lVar16 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar7 = (__this->fields)._items;
        if (pSVar7 != (System_Object_array *)0x0) {
          uVar3 = (__this->fields)._size;
          if (uVar3 < (uint)pSVar7->max_length) {
            (__this->fields)._size = uVar3 + 1;
            pSVar7->m_Items[(int)uVar3] = (Il2CppObject *)pSVar14;
            il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this,(Il2CppObject *)pSVar14,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
          __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(uVar13);
          UnityEngine_GameObject___ctor_4dfc3c0(__this_00,(MethodInfo *)0x0);
          return __this_00;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  puVar17 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar17 = __this->klass;
  __cxa_throw(puVar17,&PTR_PTR_05215060,0);
}


// Map.MapLoader$$.ctor
// il2cpp: void Map_MapLoader___ctor (Map_MapLoader_o* __this, const MethodInfo* method);
// 0x40ae910

void Map_MapLoader___ctor(Map_MapLoader_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader$$.cctor
// il2cpp: void Map_MapLoader___cctor (const MethodInfo* method);
// 0x40ae920

void Map_MapLoader___cctor(MethodInfo *method)

{
  float fVar1;
  long lVar2;
  undefined8 uVar3;
  System_Collections_Generic_Dictionary_int__object__o *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  System_Collections_Generic_List_NavMeshBuildSource__o *__this;
  
  if (g_data_057ac4bb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_Map_MapObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_List_1_Map_MapObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_GameObject_Map_MapObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Map_MapObject_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_HashSet_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_List_1_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_UnityEngine_AI_NavMeshData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_List_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_HashSet_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_List_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_NavMeshData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_GameObject_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_MapObject_HashSet_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Light);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapTargetable);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_AI_NavMeshBuildSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapLight);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapLight);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_NavMeshBuildSource);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Light);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapTargetable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ac4bb = '\x01';
  }
  pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_MapObject);
  System_Collections_Generic_Dictionary_int__object____ctor(pSVar4,MethodInfo_Dictionary_2_System_Int32_Map_MapObject);
  **(undefined8 **)(TypeInfo_MapLoader + 0xb8) = pSVar4;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_MapLoader + 0xb8),pSVar4);
  pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_HashSet_int);
  System_Collections_Generic_Dictionary_int__object____ctor(pSVar4,MethodInfo_Dictionary_2_System_Int32_HashSet_1_System_Int32);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_Dictionary_int__object__o **)(lVar2 + 8) = pSVar4;
  il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar4);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_GameObject_MapObject);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar5,MethodInfo_Dictionary_2_UnityEngine_GameObject_Map_MapObject);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x10) = pSVar5;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar5);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_List_MapObject);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar5,MethodInfo_Dictionary_2_System_String_List_1_Map_MapObject);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x18) = pSVar5;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar5);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_MapObject_HashSet_string);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar5,MethodInfo_Dictionary_2_Map_MapObject_HashSet_1_System_String);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x20) = pSVar5;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar5);
  pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Light);
  System_Collections_Generic_List_object____ctor(pSVar6,MethodInfo_List_1_UnityEngine_Light);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar2 + 0x28) = pSVar6;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar6);
  pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapLight);
  System_Collections_Generic_List_object____ctor(pSVar6,MethodInfo_List_1_Map_MapLight);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar2 + 0x30) = pSVar6;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar6);
  pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapTargetable);
  System_Collections_Generic_List_object____ctor(pSVar6,MethodInfo_List_1_Map_MapTargetable);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar2 + 0x38) = pSVar6;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x38,pSVar6);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Object);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar5,MethodInfo_Dictionary_2_System_String_UnityEngine_Object);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x40) = pSVar5;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x40,pSVar5);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_List_Material);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar5,MethodInfo_Dictionary_2_System_String_List_1_UnityEngine_Material);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x48) = pSVar5;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x48,pSVar5);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_List_Material);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar5,MethodInfo_Dictionary_2_System_String_List_1_UnityEngine_Material);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x50) = pSVar5;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x50,pSVar5);
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar5,MethodInfo_Dictionary_2_System_String_UnityEngine_Material);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x58) = pSVar5;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x58,pSVar5);
  pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(pSVar6,MethodInfo_List_1_System_String);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar2 + 0x78) = pSVar6;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x78,pSVar6);
  __this = (System_Collections_Generic_List_NavMeshBuildSource__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_NavMeshBuildSource);
  System_Collections_Generic_List_NavMeshBuildSource____ctor(__this,MethodInfo_List_1_UnityEngine_AI_NavMeshBuildSource);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_List_NavMeshBuildSource__o **)(lVar2 + 0xa0) = __this;
  il2cpp_runtime_helper_022b4080(lVar2 + 0xa0,__this);
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  uVar3 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(undefined8 *)(lVar2 + 0xa8) = uVar3;
  *(float *)(lVar2 + 0xb0) = fVar1;
  *(ulong *)(lVar2 + 0xb4) = CONCAT44((float)((ulong)uVar3 >> 0x20) * 0.5,(float)uVar3 * 0.5);
  *(float *)(lVar2 + 0xbc) = fVar1 * 0.5;
  pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_NavMeshData);
  System_Collections_Generic_Dictionary_int__object____ctor(pSVar4,MethodInfo_Dictionary_2_System_Int32_UnityEngine_AI_NavMeshData);
  lVar2 = *(long *)(TypeInfo_MapLoader + 0xb8);
  *(System_Collections_Generic_Dictionary_int__object__o **)(lVar2 + 0xc0) = pSVar4;
  il2cpp_runtime_helper_022b4080(lVar2 + 0xc0,pSVar4);
  *(undefined8 *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 200) = 0x3e8ffffffff;
  return;
}


