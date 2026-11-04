// Type: Map.MapLoader
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Map/MapLoader.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapLoader.cs
// --------------------------------

// Map.MapLoader.NavMeshBuild$$.ctor
// il2cpp: void Map_MapLoader_NavMeshBuild___ctor (Map_MapLoader_NavMeshBuild_o __this, UnityEngine_AI_NavMeshData_o* data, UnityEngine_AI_NavMeshBuildSettings_o settings, UnityEngine_Bounds_o bounds, const MethodInfo* method);
// 0x181eb6a70

void Map_MapLoader_NavMeshBuild___ctor
               (Map_MapLoader_NavMeshBuild_o *__this,UnityEngine_AI_NavMeshData_o *data,
               UnityEngine_AI_NavMeshBuildSettings_o *settings,UnityEngine_Bounds_o *bounds,MethodInfo *method
               )

{
  UnityEngine_Bounds_o *pUVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int32_t iVar10;
  int32_t iVar11;
  int32_t iVar12;
  int32_t iVar13;
  uint32_t uVar14;
  int32_t iVar15;
  UnityEngine_AI_NavMeshBuildDebugSettings_o UVar16;
  undefined3 uVar17;
  
  (__this->fields).Data = data;
  Il2CppCodeGenWriteBarrier((void **)__this,data);
  fVar3 = (settings->fields).m_AgentRadius;
  fVar4 = (settings->fields).m_AgentHeight;
  fVar5 = (settings->fields).m_AgentSlope;
  fVar6 = (settings->fields).m_AgentClimb;
  fVar7 = (settings->fields).m_LedgeDropHeight;
  fVar8 = (settings->fields).m_MaxJumpAcrossDistance;
  fVar9 = (settings->fields).m_MinRegionArea;
  (__this->fields).Settings.fields.m_AgentTypeID = (settings->fields).m_AgentTypeID;
  (__this->fields).Settings.fields.m_AgentRadius = fVar3;
  (__this->fields).Settings.fields.m_AgentHeight = fVar4;
  (__this->fields).Settings.fields.m_AgentSlope = fVar5;
  iVar10 = (settings->fields).m_OverrideVoxelSize;
  fVar3 = (settings->fields).m_VoxelSize;
  iVar11 = (settings->fields).m_OverrideTileSize;
  iVar12 = (settings->fields).m_TileSize;
  (__this->fields).Settings.fields.m_AgentClimb = fVar6;
  (__this->fields).Settings.fields.m_LedgeDropHeight = fVar7;
  (__this->fields).Settings.fields.m_MaxJumpAcrossDistance = fVar8;
  (__this->fields).Settings.fields.m_MinRegionArea = fVar9;
  iVar13 = (settings->fields).m_BuildHeightMesh;
  uVar14 = (settings->fields).m_MaxJobWorkers;
  iVar15 = (settings->fields).m_PreserveTilesOutsideBounds;
  UVar16.fields.m_Flags = (settings->fields).m_Debug.fields;
  uVar17 = *(undefined3 *)&(settings->fields).field_0x3d;
  (__this->fields).Settings.fields.m_OverrideVoxelSize = iVar10;
  (__this->fields).Settings.fields.m_VoxelSize = fVar3;
  (__this->fields).Settings.fields.m_OverrideTileSize = iVar11;
  (__this->fields).Settings.fields.m_TileSize = iVar12;
  fVar3 = (bounds->fields).m_Center.fields.x;
  fVar4 = (bounds->fields).m_Center.fields.y;
  uVar2 = *(undefined8 *)&(bounds->fields).m_Center.fields.z;
  (__this->fields).Settings.fields.m_BuildHeightMesh = iVar13;
  (__this->fields).Settings.fields.m_MaxJobWorkers = uVar14;
  (__this->fields).Settings.fields.m_PreserveTilesOutsideBounds = iVar15;
  (__this->fields).Settings.fields.m_Debug = (UnityEngine_AI_NavMeshBuildDebugSettings_o)UVar16.fields.m_Flags
  ;
  *(undefined3 *)&(__this->fields).Settings.fields.field_0x3d = uVar17;
  fVar5 = (bounds->fields).m_Extents.fields.y;
  fVar6 = (bounds->fields).m_Extents.fields.z;
  pUVar1 = &(__this->fields).Bounds;
  (pUVar1->fields).m_Center.fields.x = fVar3;
  (pUVar1->fields).m_Center.fields.y = fVar4;
  *(undefined8 *)&(__this->fields).Bounds.fields.m_Center.fields.z = uVar2;
  pUVar1 = &(__this->fields).Bounds;
  (pUVar1->fields).m_Extents.fields.y = fVar5;
  (pUVar1->fields).m_Extents.fields.z = fVar6;
  return;
}


// Map.MapLoader.<>c__DisplayClass51_0$$.ctor
// il2cpp: void Map_MapLoader___c__DisplayClass51_0___ctor (Map_MapLoader___c__DisplayClass51_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_MapLoader___c__DisplayClass51_0___ctor(Map_MapLoader___c__DisplayClass51_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader.<>c__DisplayClass51_0$$<CollectNavMeshSources>b__0
// il2cpp: bool Map_MapLoader___c__DisplayClass51_0___CollectNavMeshSources_b__0 (Map_MapLoader___c__DisplayClass51_0_o* __this, UnityEngine_AI_NavMeshBuildSource_o source, const MethodInfo* method);
// 0x181eba100

bool Map_MapLoader___c__DisplayClass51_0___CollectNavMeshSources_b__0
               (Map_MapLoader___c__DisplayClass51_0_o *__this,UnityEngine_AI_NavMeshBuildSource_o *source,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *item;
  
  if (Il2CppMethodInitialized_1843450ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_GameObject_Contains);
    Il2CppMethodInitialized_1843450ce = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).staticObjects;
  __this_01 = UnityEngine_AI_NavMeshBuildSource__get_component(source,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_Component_o *)0x0) {
    item = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar1 = System_Collections_Generic_HashSet_object___Contains
                        (__this_00,(Il2CppObject *)item,
                         (MethodInfo_1759E40 *)
                         MethodInfo_System_Collections_Generic_HashSet_GameObject_Contains);
      return bVar1;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader.<>c__DisplayClass54_0$$.ctor
// il2cpp: void Map_MapLoader___c__DisplayClass54_0___ctor (Map_MapLoader___c__DisplayClass54_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_MapLoader___c__DisplayClass54_0___ctor(Map_MapLoader___c__DisplayClass54_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader.<>c__DisplayClass54_0$$<RemoveNavMeshSources>b__0
// il2cpp: bool Map_MapLoader___c__DisplayClass54_0___RemoveNavMeshSources_b__0 (Map_MapLoader___c__DisplayClass54_0_o* __this, UnityEngine_AI_NavMeshBuildSource_o source, const MethodInfo* method);
// 0x181eba180

bool Map_MapLoader___c__DisplayClass54_0___RemoveNavMeshSources_b__0
               (Map_MapLoader___c__DisplayClass54_0_o *__this,UnityEngine_AI_NavMeshBuildSource_o *source,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  UnityEngine_Component_o *item;
  
  if (Il2CppMethodInitialized_1843450cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Component_Contains);
    Il2CppMethodInitialized_1843450cf = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).components;
  item = UnityEngine_AI_NavMeshBuildSource__get_component(source,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet_object___Contains
                      (__this_00,(Il2CppObject *)item,
                       (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_Component_Contains)
    ;
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Map.MapLoader.<>c__DisplayClass76_0$$.ctor
// il2cpp: void Map_MapLoader___c__DisplayClass76_0___ctor (Map_MapLoader___c__DisplayClass76_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_MapLoader___c__DisplayClass76_0___ctor(Map_MapLoader___c__DisplayClass76_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader.<>c__DisplayClass76_0$$<SetMaterial>b__0
// il2cpp: bool Map_MapLoader___c__DisplayClass76_0___SetMaterial_b__0 (Map_MapLoader___c__DisplayClass76_0_o* __this, UnityEngine_Renderer_o* r, const MethodInfo* method);
// 0x181eba1f0

bool Map_MapLoader___c__DisplayClass76_0___SetMaterial_b__0
               (Map_MapLoader___c__DisplayClass76_0_o *__this,UnityEngine_Renderer_o *r,MethodInfo *method)

{
  UnityEngine_Object_o *y;
  System_Collections_Generic_Dictionary_GameObject__MapObject__o *__this_00;
  bool bVar1;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *key;
  
  if (Il2CppMethodInitialized_1843450d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_1843450d0 = '\x01';
  }
  y = (UnityEngine_Object_o *)(__this->fields).go;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  if (Il2CppMethodInitialized_1843450c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843450c3 = '\x01';
  }
  if (r != (UnityEngine_Renderer_o *)0x0) {
    __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)r,(MethodInfo *)0x0);
    do {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
label_181eba367:
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        return bVar1;
      }
      if (__this_01 == (UnityEngine_Transform_o *)0x0) break;
      x = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,y,(MethodInfo *)0x0);
      if (!bVar1) goto label_181eba367;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this_00 = TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
      key = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if (__this_00 == (System_Collections_Generic_Dictionary_GameObject__MapObject__o *)0x0) break;
      bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (Il2CppObject *)key,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey);
      if (bVar1) {
        return false;
      }
      __this_01 = UnityEngine_Transform__GetParent(__this_01,(MethodInfo *)0x0);
    } while( true );
  }
  ThrowNullReferenceException();
}


// Map.MapLoader.<GenerateNavMesh>d__60$$MoveNext
// il2cpp: void Map_MapLoader__GenerateNavMesh_d__60__MoveNext (Map_MapLoader__GenerateNavMesh_d__60_o __this, const MethodInfo* method);
// 0x181eb6b60
// eh: try 0x181eb6cc9..0x181eb6d80 -> pad 0x18333d730 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x181eb6d80..0x181eb6f16 -> pad 0x18333d6d0 (+2 call sites) catch Il2CppExceptionWrapper
// eh: try 0x181eb6f16..0x181eb6fd7 -> pad 0x18333d730 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x181eb6fd7..0x181eb71cb -> pad 0x18333d700 catch Il2CppExceptionWrapper
// eh: try 0x181eb71cb..0x181eb72ae -> pad 0x18333d730 (+2 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x181eb7303..0x181eb7314 -> pad 0x18333d6a0 (+1 call sites) catch Il2CppExceptionWrapper
// eh: try 0x181eb7314..0x181eb7329 -> pad 0x18333d730 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x181eb7329..0x181eb7332 -> pad 0x18333d700 catch Il2CppExceptionWrapper
// eh: try 0x181eb7332..0x181eb7338 -> pad 0x18333d730 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x181eb7338..0x181eb7343 -> pad 0x18333d700 catch Il2CppExceptionWrapper
// eh: try 0x181eb7343..0x181eb7351 -> pad 0x18333d730 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 128 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eb6edc: jmp 0x181eb6d80
// asm:   0x181eb6ee1: mov rax, qword ptr [rsp + 0x30]
// asm:   0x181eb6ee6: cmp dword ptr [rax], 0
// asm:   0x181eb6ee9: jge 0x181eb6efc
// asm:   0x181eb6eeb: mov rdx, qword ptr [rip + 0x21c02fe]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Bounds_Dispose
// asm:   0x181eb6ef2: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181eb6ef7: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181eb6efc: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181eb6f01: test rcx, rcx
// asm:   0x181eb6f04: jne 0x181eb7309
// asm:   0x181eb6f0a: xor esi, esi
// asm:   0x181eb6f0c: mov rbx, qword ptr [rsp + 0x20]
// asm:   0x181eb6f11: jmp 0x181eb6d80
// asm:   0x181eb6f33: mov rax, qword ptr [rsp + 0x58]
// asm:   0x181eb6f38: cmp dword ptr [rax], 0
// asm:   0x181eb6f3b: jge 0x181eb6f4e
// asm:   0x181eb6f3d: mov rdx, qword ptr [rip + 0x21d13a4]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x181eb6f44: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x181eb6f49: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181eb6f4e: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181eb6f53: test rcx, rcx
// asm:   0x181eb6f56: jne 0x181eb7314
// asm:   0x181eb6f5c: xor esi, esi
// asm:   0x181eb6f5e: mov rbx, qword ptr [rsp + 0x20]
// asm:   0x181eb71e3: test rsi, rsi
// asm:   0x181eb71e6: jne 0x181eb732f
// asm:   0x181eb71ec: jmp 0x181eb725a
// asm:   0x181eb7279: mov rax, qword ptr [rsp + 0x30]
// asm:   0x181eb727e: cmp dword ptr [rax], 0
// asm:   0x181eb7281: jge 0x181eb729b
// asm:   0x181eb7283: mov rax, qword ptr [rsp + 0x38]
// asm:   0x181eb7288: mov rcx, qword ptr [rax]
// asm:   0x181eb728b: add rcx, 0x28
// asm:   0x181eb728f: mov rdx, qword ptr [rip + 0x21bd562]  ; MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_Dispose
// asm:   0x181eb7296: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181eb729b: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181eb72a0: test rcx, rcx
// asm:   0x181eb72a3: jne 0x181eb734b
// asm:   0x181eb72a9: jmp 0x181eb720f
// asm:   0x181eb72ae: mov rax, qword ptr [rsp + 0x160]
// asm:   0x181eb72b6: mov dword ptr [rax], 0xfffffffe
// asm:   0x181eb72bc: mov rbx, qword ptr [rsp + 0x160]
// asm:   0x181eb72c4: mov eax, dword ptr [rsp + 0x48]
// asm:   0x181eb72c8: dec eax
// asm:   0x181eb72ca: movsxd rdx, eax
// asm:   0x181eb72cd: mov rdi, qword ptr [rsp + rdx*8 + 0x40]
// asm:   0x181eb72d2: lea rcx, [rip + 0x2213af7]  ; TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder
// asm:   0x181eb72d9: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181eb72de: cmp dword ptr [rax + 0xe4], 0
// asm:   0x181eb72e5: jne 0x181eb72ef
// asm:   0x181eb72e7: mov rcx, rax
// asm:   0x181eb72ea: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x181eb72ef: xor r8d, r8d
// asm:   0x181eb72f2: mov rdx, rdi
// asm:   0x181eb72f5: lea rcx, [rbx + 8]
// asm:   0x181eb72f9: call 0x181a28940  ; System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetException()
// asm:   0x181eb72fe: jmp 0x181eb725a
// asm:   0x181eb7309: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181eb7314: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181eb732f: mov rcx, rsi
// asm:   0x181eb7332: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181eb7343: mov rcx, rsi
// asm:   0x181eb7346: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181eb734b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333d6a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d6a5: push rbp
// asm:   0x18333d6a6: sub rsp, 0x20
// asm:   0x18333d6aa: mov rbp, rdx
// asm:   0x18333d6ad: mov rax, qword ptr [rbp + 0xe8]
// asm:   0x18333d6b4: mov rcx, qword ptr [rax]
// asm:   0x18333d6b7: mov qword ptr [rbp + 0x28], rcx
// asm:   0x18333d6bb: movabs rax, 0
// asm:   0x18333d6c5: add rsp, 0x20
// asm:   0x18333d6c9: pop rbp
// asm:   0x18333d6ca: ret 
// asm:   0x18333d6d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d6d5: push rbp
// asm:   0x18333d6d6: sub rsp, 0x20
// asm:   0x18333d6da: mov rbp, rdx
// asm:   0x18333d6dd: mov rax, qword ptr [rbp + 0xf0]
// asm:   0x18333d6e4: mov rcx, qword ptr [rax]
// asm:   0x18333d6e7: mov qword ptr [rbp + 0x50], rcx
// asm:   0x18333d6eb: movabs rax, 0
// asm:   0x18333d6f5: add rsp, 0x20
// asm:   0x18333d6f9: pop rbp
// asm:   0x18333d6fa: ret 
// asm:   0x18333d700: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d705: push rbp
// asm:   0x18333d706: sub rsp, 0x20
// asm:   0x18333d70a: mov rbp, rdx
// asm:   0x18333d70d: mov rax, qword ptr [rbp + 0xf8]
// asm:   0x18333d714: mov rcx, qword ptr [rax]
// asm:   0x18333d717: mov qword ptr [rbp + 0x28], rcx
// asm:   0x18333d71b: movabs rax, 0
// asm:   0x18333d725: add rsp, 0x20
// asm:   0x18333d729: pop rbp
// asm:   0x18333d72a: ret 
// asm:   0x18333d730: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d735: push rbx
// asm:   0x18333d736: push rbp
// asm:   0x18333d737: push rdi
// asm:   0x18333d738: sub rsp, 0x20
// asm:   0x18333d73c: mov rbp, rdx
// asm:   0x18333d73f: mov rdi, qword ptr [rbp + 0x100]
// asm:   0x18333d746: mov rax, qword ptr [rdi]
// asm:   0x18333d749: mov rbx, qword ptr [rax]
// asm:   0x18333d74c: lea rcx, [rip + 0xd3b805]  ; TypeInfo_System_Exception
// asm:   0x18333d753: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333d758: mov rcx, rax
// asm:   0x18333d75b: mov rdx, rbx
// asm:   0x18333d75e: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333d763: test al, al
// asm:   0x18333d765: mov rax, qword ptr [rdi]
// asm:   0x18333d768: je 0x18333d782
// asm:   0x18333d76a: movsxd rcx, dword ptr [rbp + 0x48]
// asm:   0x18333d76e: mov qword ptr [rbp + rcx*8 + 0x40], rax
// asm:   0x18333d773: inc dword ptr [rbp + 0x48]
// asm:   0x18333d776: movabs rax, 0
// asm:   0x18333d780: jmp 0x18333d79d
// asm:   0x18333d782: mov qword ptr [rbp + 0x80], rax
// asm:   0x18333d789: lea rdx, [rip + 0xc9e7f8]
// asm:   0x18333d790: lea rcx, [rbp + 0x80]
// asm:   0x18333d797: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333d79d: add rsp, 0x20
// asm:   0x18333d7a1: pop rdi
// asm:   0x18333d7a2: pop rbp
// asm:   0x18333d7a3: pop rbx
// asm:   0x18333d7a4: ret 

void Map_MapLoader__GenerateNavMesh_d__60__MoveNext
               (Map_MapLoader__GenerateNavMesh_d__60_o *__this,MethodInfo *method)

{
  Map_MapLoader_o *__this_00;
  System_Collections_Generic_List_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__o *__this_01;
  Il2CppClass_1 *pIVar1;
  Il2CppClass *pIVar2;
  int32_t agentID;
  void *pvVar3;
  Il2CppClass *pIVar4;
  bool bVar5;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_02;
  System_Threading_CancellationToken_Fields __this_03;
  UnityEngine_AsyncOperation_o *pUVar6;
  intptr_t iVar7;
  UnityEngine_ParticleSystem_o *__this_04;
  Il2CppObject local_res8;
  int local_res18 [2];
  UnityEngine_Awaitable_Awaiter_Fields local_res20;
  System_Threading_CancellationToken_o local_138;
  undefined1 local_130 [16];
  Il2CppObject *local_120;
  undefined4 local_110;
  undefined8 local_108;
  int *local_100;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *local_f8;
  undefined1 local_f0 [8];
  int *piStack_e8;
  Il2CppObject *local_e0;
  undefined1 local_c8 [16];
  Il2CppClass *local_b8;
  void *pvStack_b0;
  Il2CppClass *local_a8;
  undefined1 local_98 [8];
  void *pvStack_90;
  Il2CppClass *local_88;
  void *pvStack_80;
  Il2CppClass *local_78;
  
  local_res8.klass = (Il2CppClass *)__this;
  if (Il2CppMethodInitialized_1843450d1 == '\0') {
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
    Il2CppMethodInitialized_1843450d1 = '\x01';
  }
  local_f0 = (undefined1  [8])0x0;
  piStack_e8 = (int *)0x0;
  local_e0 = (Il2CppObject *)0x0;
  local_98 = (undefined1  [8])0x0;
  pvStack_90 = (void *)0x0;
  local_88 = (Il2CppClass *)0x0;
  pvStack_80 = (void *)0x0;
  local_78 = (Il2CppClass *)0x0;
  local_res20._awaited = (UnityEngine_Awaitable_o *)0x0;
  local_110 = 0;
  local_res18[0] = *(int *)&((local_res8.klass)->_1).image;
  __this_00 = ((local_res8.klass)->_1).byval_arg.data;
  if (local_res18[0] != 0) {
    if (__this_00 == (Map_MapLoader_o *)0x0) {
      ThrowNullReferenceException();
    }
    Map_MapLoader__ResetSources(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    __this_02 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                Utility_Util__GetAllTitanAgentIds((MethodInfo *)0x0);
    __this_03._source =
         (System_Threading_CancellationTokenSource_o *)
         il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AsyncOperation);
    System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_03._source,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_AsyncOperation_ctor);
    if (__this_02 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
      ThrowNullReferenceException();
    }
    local_138.fields._source =
         (System_Threading_CancellationToken_Fields)
         (System_Threading_CancellationToken_Fields)__this_03._source;
    System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_130,__this_02,
               (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    local_f0 = (undefined1  [8])local_130._0_8_;
    piStack_e8 = (int *)local_130._8_8_;
    local_e0 = local_120;
    local_108 = 0;
    local_100 = local_res18;
    local_f8 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_f0;
    while (bVar5 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                             ((System_Collections_Generic_List_Enumerator_T__o *)local_f0,
                              (MethodInfo_1530180 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext), bVar5) {
      agentID = (int32_t)local_e0;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this_01 = (System_Collections_Generic_List_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__o
                   *)TypeInfo_Map_MapLoader->static_fields->_navMeshBounds;
      if (__this_01 ==
          (System_Collections_Generic_List_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__o *)
          0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_c8,__this_01,
                 (MethodInfo_930AD0 *)MethodInfo_System_Collections_Generic_List_Bounds_GetEnumerator);
      local_98 = (undefined1  [8])local_c8._0_8_;
      pvStack_90 = (void *)local_c8._8_8_;
      local_88 = local_b8;
      pvStack_80 = pvStack_b0;
      local_78 = local_a8;
      local_130._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_130._8_8_ = local_res18;
      local_120 = (Il2CppObject *)local_98;
      while (bVar5 = System_Collections_Generic_List_Enumerator_StyleValue___MoveNext
                               ((System_Collections_Generic_List_Enumerator_T__o *)local_98,
                                (MethodInfo_1529D10 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_Bounds_MoveNext),
            pIVar4 = local_78, pvVar3 = pvStack_80, pIVar2 = local_88, bVar5) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        local_c8._0_8_ = pIVar2;
        local_c8._8_8_ = pvVar3;
        local_b8 = pIVar4;
        pUVar6 = Map_MapLoader__CreateNavMeshSurface
                           (agentID,(UnityEngine_Bounds_o *)local_c8,6,(MethodInfo *)0x0);
        if (__this_03._source == (System_Threading_CancellationTokenSource_o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(__this_03._source,pUVar6,MethodInfo_System_Collections_Generic_List_AsyncOperation_Add);
      }
      if (local_res18[0] < 0) {
        System_Collections_Generic_List_Enumerator_Bounds___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_98,
                   MethodInfo_System_Collections_Generic_List_Enumerator_Bounds_Dispose);
      }
    }
    if (*local_100 < 0) {
      System_Collections_Generic_List_Enumerator_int___Dispose
                (local_f8,MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    }
    if (__this_03._source == (System_Threading_CancellationTokenSource_o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_c8,
               (System_Collections_Generic_List_T__o *)__this_03._source,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_AsyncOperation_GetEnumerator);
    (((System_Collections_Generic_List_Enumerator_AsyncOperation__o *)&((local_res8.klass)->_1).byval_arg.bits
     )->fields)._list = (System_Collections_Generic_List_T__o *)local_c8._0_8_;
    ((local_res8.klass)->_1).this_arg.data = (void *)local_c8._8_8_;
    *(Il2CppClass **)&((local_res8.klass)->_1).this_arg.bits = local_b8;
    Il2CppCodeGenWriteBarrier((void **)&((local_res8.klass)->_1).byval_arg.bits,(void *)0x0);
  }
  local_130._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_130._8_8_ = local_res18;
  local_120 = &local_res8;
  if (local_res18[0] != 0) goto label_181eb7020;
  local_res20._awaited =
       (((UnityEngine_Awaitable_Awaiter_o *)&((local_res8.klass)->_1).element_class)->fields)._awaited;
  (((UnityEngine_Awaitable_Awaiter_o *)&((local_res8.klass)->_1).element_class)->fields)._awaited =
       (UnityEngine_Awaitable_o *)0x0;
  local_res18[0] = -1;
  *(int32_t *)&((local_res8.klass)->_1).image = -1;
  while( true ) {
    if (local_res20._awaited == (UnityEngine_Awaitable_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Awaitable__PropagateExceptionAndRelease(local_res20._awaited,(MethodInfo *)0x0);
label_181eb7020:
    bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)
                       &((local_res8.klass)->_1).byval_arg.bits,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_MoveNext);
    if (!bVar5) break;
    pUVar6 = *(UnityEngine_AsyncOperation_o **)&((local_res8.klass)->_1).this_arg.bits;
    if (Il2CppMethodInitialized_184345103 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Awaitable);
      Il2CppMethodInitialized_184345103 = '\x01';
    }
    if ((TypeInfo_UnityEngine_Awaitable->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Awaitable);
    }
    local_138.fields._source =
         (System_Threading_CancellationToken_Fields)(System_Threading_CancellationTokenSource_o *)0x0;
    if (Il2CppMethodInitialized_184345104 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Awaitable);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Threading_CancellationToken);
      Il2CppMethodInitialized_184345104 = '\x01';
    }
    if ((TypeInfo_System_Threading_CancellationToken->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Threading_CancellationToken);
    }
    System_Threading_CancellationToken__ThrowIfCancellationRequested(&local_138,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_AsyncOperation_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar7 = (pUVar6->fields).m_Ptr;
    if ((TypeInfo_UnityEngine_Awaitable->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Awaitable);
    }
    iVar7 = UnityEngine_Awaitable__FromAsyncOperationInternal(iVar7,(MethodInfo *)0x0);
    __this_04 = (UnityEngine_ParticleSystem_o *)il2cpp_runtime_helper_181e9b500(iVar7,local_138.fields._source,0);
    if (__this_04 == (UnityEngine_ParticleSystem_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_res20._awaited =
         (UnityEngine_Awaitable_o *)UnityEngine_ParticleSystem__get_noise(__this_04,(MethodInfo *)0x0);
    bVar5 = UnityEngine_Awaitable_Awaiter__get_IsCompleted
                      ((UnityEngine_Awaitable_Awaiter_o *)&local_res20,(MethodInfo *)0x0);
    if (!bVar5) {
      local_res18[0] = 0;
      *(int32_t *)&((local_res8.klass)->_1).image = 0;
      (((UnityEngine_Awaitable_Awaiter_o *)&((local_res8.klass)->_1).element_class)->fields)._awaited =
           local_res20._awaited;
      Il2CppCodeGenWriteBarrier((void **)&((local_res8.klass)->_1).element_class,(void *)0x0);
      pIVar1 = &(local_res8.klass)->_1;
      if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitOnCompleted_Awaitable_Awaiter__MapLoader__GenerateNavMesh_d__60_
                ((System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o *)&pIVar1->gc_desc,
                 (UnityEngine_Awaitable_Awaiter_o *)&local_res20,
                 (Map_MapLoader__GenerateNavMesh_d__60_o *)local_res8.klass,
                 (MethodInfo_617160 *)
                 MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitOnCompleted_Awaitable_Awaiter_MapLoa
                );
      if (local_res18[0] < 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)
                   &((local_res8.klass)->_1).byval_arg.bits,
                   MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_Dispose);
      }
      return;
    }
  }
  if (local_res18[0] < 0) {
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)
               &((local_res8.klass)->_1).byval_arg.bits,
               MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_Dispose);
  }
  pIVar2 = local_res8.klass;
  (((System_Collections_Generic_List_Enumerator_AsyncOperation__o *)&((local_res8.klass)->_1).byval_arg.bits)
  ->fields)._list = (System_Collections_Generic_List_T__o *)0x0;
  ((local_res8.klass)->_1).this_arg.data = (void *)0x0;
  *(UnityEngine_AsyncOperation_o **)&((local_res8.klass)->_1).this_arg.bits =
       (UnityEngine_AsyncOperation_o *)0x0;
  *(int32_t *)&((local_res8.klass)->_1).image = -2;
  if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult
            ((System_Runtime_CompilerServices_AsyncTaskMethodBuilder_o *)&(pIVar2->_1).gc_desc,
             (MethodInfo *)0x0);
  return;
}


// Map.MapLoader.<GenerateNavMesh>d__60$$SetStateMachine
// il2cpp: void Map_MapLoader__GenerateNavMesh_d__60__SetStateMachine (Map_MapLoader__GenerateNavMesh_d__60_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x181eb7360

void Map_MapLoader__GenerateNavMesh_d__60__SetStateMachine
               (Map_MapLoader__GenerateNavMesh_d__60_o *__this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843450d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
    Il2CppMethodInitialized_1843450d2 = '\x01';
  }
  if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetStateMachine
            (&(__this->fields).__t__builder,stateMachine,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__47$$.ctor
// il2cpp: void Map_MapLoader__LoadObjectsCoroutine_d__47___ctor (Map_MapLoader__LoadObjectsCoroutine_d__47_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Map_MapLoader__LoadObjectsCoroutine_d__47___ctor(Map_MapLoader__LoadObjectsCoroutine_d__47_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__47$$System.IDisposable.Dispose
// il2cpp: void Map_MapLoader__LoadObjectsCoroutine_d__47__System_IDisposable_Dispose (Map_MapLoader__LoadObjectsCoroutine_d__47_o* __this, const MethodInfo* method);
// 0x181eb8d80
// eh: try 0x181eb8e88..0x181eb8ea4 -> pad 0x180356b40 cleanup
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eb8dff: lea rcx, [rsp + 0x38]
// asm:   0x181eb8e04: call 0x181e9b4a0  ; il2cpp_runtime_helper_181e9b4a0()
// asm:   0x181eb8e09: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181eb8e0e: test rcx, rcx
// asm:   0x181eb8e11: jne 0x181eb8e7a
// asm:   0x181eb8e13: mov qword ptr [rsp + 0x30], 0
// asm:   0x181eb8e1c: lea rax, [rsp + 0x50]
// asm:   0x181eb8e21: mov qword ptr [rsp + 0x38], rax
// asm:   0x181eb8e26: mov rbx, qword ptr [rsp + 0x50]
// asm:   0x181eb8e2b: cmp byte ptr [rip + 0x248c2a3], 0
// asm:   0x181eb8e32: jne 0x181eb8e47
// asm:   0x181eb8e34: lea rcx, [rip + 0x21d292d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose
// asm:   0x181eb8e3b: call 0x180416e80  ; il2cpp_codegen_initialize_runtime_metadata()
// asm:   0x181eb8e40: mov byte ptr [rip + 0x248c28e], 1
// asm:   0x181eb8e47: mov dword ptr [rbx + 0x10], 0xffffffff
// asm:   0x181eb8e4e: lea rcx, [rbx + 0x78]
// asm:   0x181eb8e52: mov rdx, qword ptr [rip + 0x21d290f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose
// asm:   0x181eb8e59: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181eb8e5e: jmp 0x181eb8e74
// asm:   0x181eb8e60: lea rcx, [rsp + 0x38]
// asm:   0x181eb8e65: call 0x181e9b3e0  ; il2cpp_runtime_helper_181e9b3e0()
// asm:   0x181eb8e6a: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181eb8e6f: test rcx, rcx
// asm:   0x181eb8e72: jne 0x181eb8e80
// asm:   0x181eb8e7a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181eb8e80: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void Map_MapLoader__LoadObjectsCoroutine_d__47__System_IDisposable_Dispose
               (Map_MapLoader__LoadObjectsCoroutine_d__47_o *__this,MethodInfo *method)

{
  switch((__this->fields).__1__state) {
  case -4:
  case 2:
    if (Il2CppMethodInitialized_1843450d5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
      Il2CppMethodInitialized_1843450d5 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap8,
               MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
    break;
  case -3:
  case 1:
    if (Il2CppMethodInitialized_1843450d4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      Il2CppMethodInitialized_1843450d4 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap5,
               MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  }
  return;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__47$$MoveNext
// il2cpp: bool Map_MapLoader__LoadObjectsCoroutine_d__47__MoveNext (Map_MapLoader__LoadObjectsCoroutine_d__47_o* __this, const MethodInfo* method);
// 0x181eb73c0
// eh: try 0x181eb76b7..0x181eb7f17 -> pad 0x183319140 (+1 call sites) catch Il2CppExceptionWrapper
// eh: try 0x181eb7f17..0x181eb7f48 -> pad 0x18333d7e0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x181eb7f48..0x181eb8d27 -> pad 0x183319140 (+16 call sites) catch Il2CppExceptionWrapper
// asm: 223 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eb790d: nop dword ptr [rax]
// asm:   0x181eb7b3c: mov rbx, qword ptr [rsp + 0x190]
// asm:   0x181eb7b44: mov eax, r14d
// asm:   0x181eb7b47: jmp 0x181eb7d19
// asm:   0x181eb7e32: mov rax, qword ptr [rsp + 0x190]
// asm:   0x181eb7edc: nop dword ptr [rax]
// asm:   0x181eb7f4d: mov rsi, qword ptr [rsp + 0x1a8]
// asm:   0x181eb7f55: test rsi, rsi
// asm:   0x181eb7f58: je 0x181eb8be7
// asm:   0x181eb7f5e: mov edi, dword ptr [rsp + 0x38]
// asm:   0x181eb7f62: lea eax, [rdi - 1]
// asm:   0x181eb7f65: movsxd rcx, eax
// asm:   0x181eb7f68: mov rbx, qword ptr [rsp + rcx*8 + 0x30]
// asm:   0x181eb7f6d: lea rcx, [rsi + 0x20]
// asm:   0x181eb7f71: xor edx, edx
// asm:   0x181eb7f73: call 0x181b29870  ; System_Int32__ToString()
// asm:   0x181eb7f78: mov r13, rax
// asm:   0x181eb7f7b: test rbx, rbx
// asm:   0x181eb7f7e: je 0x181eb8be2
// asm:   0x181eb7f84: mov rax, qword ptr [rbx]
// asm:   0x181eb7f87: mov rdx, qword ptr [rax + 0x190]
// asm:   0x181eb7f8e: mov rcx, rbx
// asm:   0x181eb7f91: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x181eb7f97: mov r12, rax
// asm:   0x181eb7f9a: lea rcx, [rip + 0x223f5c7]  ; ": "
// asm:   0x181eb7fa1: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181eb7fa6: mov r15, rax
// asm:   0x181eb7fa9: lea rcx, [rip + 0x222d248]  ; "Failed to load map object "
// asm:   0x181eb7fb0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181eb7fb5: xor r14d, r14d
// asm:   0x181eb7fb8: mov qword ptr [rsp + 0x20], r14
// asm:   0x181eb7fbd: mov r9, r12
// asm:   0x181eb7fc0: mov r8, r15
// asm:   0x181eb7fc3: mov rdx, r13
// asm:   0x181eb7fc6: mov rcx, rax
// asm:   0x181eb7fc9: call 0x181969590  ; System_String__Concat()
// asm:   0x181eb7fce: mov r15, rax
// asm:   0x181eb7fd1: lea rcx, [rip + 0x22436f8]  ; TypeInfo_ApplicationManagers_DebugConsole
// asm:   0x181eb7fd8: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181eb7fdd: cmp dword ptr [rax + 0xe4], r14d
// asm:   0x181eb7fe4: jne 0x181eb7fee
// asm:   0x181eb7fe6: mov rcx, rax
// asm:   0x181eb7fe9: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x181eb7fee: xor r8d, r8d
// asm:   0x181eb7ff1: mov dl, 1
// asm:   0x181eb7ff3: mov rcx, r15
// asm:   0x181eb7ff6: call 0x18234c240  ; ApplicationManagers_DebugConsole__Log()
// asm:   0x181eb7ffb: lea rcx, [rip + 0x22080e6]  ; TypeInfo_Map_MapLoader
// asm:   0x181eb8002: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181eb8007: cmp dword ptr [rax + 0xe4], r14d
// asm:   0x181eb800e: jne 0x181eb8018
// asm:   0x181eb8010: mov rcx, rax
// asm:   0x181eb8013: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x181eb8018: lea rcx, [rip + 0x22080c9]  ; TypeInfo_Map_MapLoader
// asm:   0x181eb801f: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181eb8024: mov rax, qword ptr [rax + 0xb8]
// asm:   0x181eb802b: mov r15, qword ptr [rax + 0x80]
// asm:   0x181eb8032: lea rcx, [rsi + 0x20]
// asm:   0x181eb8036: xor edx, edx
// asm:   0x181eb8038: call 0x181b29870  ; System_Int32__ToString()
// asm:   0x181eb803d: mov r12, rax
// asm:   0x181eb8040: mov rax, qword ptr [rbx]
// asm:   0x181eb8043: mov rdx, qword ptr [rax + 0x190]
// asm:   0x181eb804a: mov rcx, rbx
// asm:   0x181eb804d: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x181eb8053: mov rsi, rax
// asm:   0x181eb8056: lea rcx, [rip + 0x223f50b]  ; ": "
// asm:   0x181eb805d: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181eb8062: mov rbx, rax
// asm:   0x181eb8065: lea rcx, [rip + 0x222d18c]  ; "Failed to load map object "
// asm:   0x181eb806c: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181eb8071: mov qword ptr [rsp + 0x20], r14
// asm:   0x181eb8076: mov r9, rsi
// asm:   0x181eb8079: mov r8, rbx
// asm:   0x181eb807c: mov rdx, r12
// asm:   0x181eb807f: mov rcx, rax
// asm:   0x181eb8082: call 0x181969590  ; System_String__Concat()
// asm:   0x181eb8087: mov rbx, rax
// asm:   0x181eb808a: test r15, r15
// asm:   0x181eb808d: je 0x181eb8bdd
// asm:   0x181eb8093: lea rcx, [rip + 0x222409e]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x181eb809a: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181eb809f: mov r8, rax
// asm:   0x181eb80a2: mov rdx, rbx
// asm:   0x181eb80a5: mov rcx, r15
// asm:   0x181eb80a8: call 0x180012890  ; il2cpp_runtime_helper_180012890()
// asm:   0x181eb80ad: dec edi
// asm:   0x181eb80af: mov dword ptr [rsp + 0x38], edi
// asm:   0x181eb80b3: mov r15, qword ptr [rsp + 0x40]
// asm:   0x181eb80b8: movss xmm8, dword ptr [rip + 0x14a0c53]
// asm:   0x181eb80c1: movss xmm6, dword ptr [rip + 0x14a0b3b]
// asm:   0x181eb85d4: mov rdx, qword ptr [rip + 0x21f75cd]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
// asm:   0x181eb85db: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181eb85e0: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181eb85e5: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181eb85ea: test rcx, rcx
// asm:   0x181eb85ed: jne 0x181eb8c2e
// asm:   0x181eb85f3: xor r14d, r14d
// asm:   0x181eb85f6: mov r15, qword ptr [rsp + 0x40]
// asm:   0x181eb85fb: movss xmm8, dword ptr [rip + 0x14a0710]
// asm:   0x181eb8604: jmp 0x181eb84e1
// asm:   0x181eb88e1: mov rdx, qword ptr [rip + 0x21be908]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Bounds_Dispose
// asm:   0x181eb88e8: mov rcx, qword ptr [rsp + 0x88]
// asm:   0x181eb88f0: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181eb88f5: mov rcx, qword ptr [rsp + 0x80]
// asm:   0x181eb88fd: test rcx, rcx
// asm:   0x181eb8900: jne 0x181eb8c49
// asm:   0x181eb8906: xor r14d, r14d
// asm:   0x181eb8909: mov r15, qword ptr [rsp + 0x40]
// asm:   0x181eb890e: movss xmm8, dword ptr [rip + 0x14a03fd]
// asm:   0x181eb8917: jmp 0x181eb8790
// asm:   0x181eb89a6: mov rdx, qword ptr [rip + 0x21cf93b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x181eb89ad: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181eb89b2: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181eb89b7: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181eb89bc: test rcx, rcx
// asm:   0x181eb89bf: jne 0x181eb8c59
// asm:   0x181eb89c5: xor r14d, r14d
// asm:   0x181eb89c8: mov rcx, qword ptr [rsp + 0x190]
// asm:   0x181eb89d0: mov r15, qword ptr [rsp + 0x40]
// asm:   0x181eb89d5: movss xmm8, dword ptr [rip + 0x14a0336]
// asm:   0x181eb89e9: nop dword ptr [rax]
// asm:   0x181eb8b5a: mov rbx, qword ptr [rsp + 0x40]
// asm:   0x181eb8b5f: test rbx, rbx
// asm:   0x181eb8b62: jne 0x181eb8d27
// asm:   0x181eb8b68: movzx eax, byte ptr [rsp + 0x1a0]
// asm:   0x181eb8bc0: lea rcx, [rsp + 0x48]
// asm:   0x181eb8bc5: call 0x181e9b380  ; il2cpp_runtime_helper_181e9b380()
// asm:   0x181eb8bca: mov rcx, r15
// asm:   0x181eb8bcd: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181eb8bdd: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x181eb8be2: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x181eb8be7: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x181eb8c1b: lea rcx, [rsp + 0x48]
// asm:   0x181eb8c20: call 0x181e9b380  ; il2cpp_runtime_helper_181e9b380()
// asm:   0x181eb8c25: mov rcx, r15
// asm:   0x181eb8c28: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181eb8c2e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181eb8c49: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181eb8c59: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181eb8c73: lea rcx, [rsp + 0x48]
// asm:   0x181eb8c78: call 0x181e9b380  ; il2cpp_runtime_helper_181e9b380()
// asm:   0x181eb8c7d: mov rcx, r15
// asm:   0x181eb8c80: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181eb8d27: lea rcx, [rsp + 0x48]
// asm:   0x181eb8d2c: call 0x181e9b380  ; il2cpp_runtime_helper_181e9b380()
// asm:   0x181eb8d31: mov rcx, rbx
// asm:   0x181eb8d34: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183319140: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183319145: push rbp
// asm:   0x183319146: sub rsp, 0x30
// asm:   0x18331914a: mov rbp, rdx
// asm:   0x18331914d: mov rax, qword ptr [rbp + 0x110]
// asm:   0x183319154: mov rcx, qword ptr [rax]
// asm:   0x183319157: mov qword ptr [rbp + 0x40], rcx
// asm:   0x18331915b: movabs rax, 0
// asm:   0x183319165: add rsp, 0x30
// asm:   0x183319169: pop rbp
// asm:   0x18331916a: ret 
// asm:   0x183331f00: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331f05: push rbp
// asm:   0x183331f06: sub rsp, 0x30
// asm:   0x183331f0a: mov rbp, rdx
// asm:   0x183331f0d: mov rax, qword ptr [rbp + 0xf8]
// asm:   0x183331f14: mov rcx, qword ptr [rax]
// asm:   0x183331f17: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183331f1b: movabs rax, 0
// asm:   0x183331f25: add rsp, 0x30
// asm:   0x183331f29: pop rbp
// asm:   0x183331f2a: ret 
// asm:   0x18333b6f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333b6f5: push rbp
// asm:   0x18333b6f6: sub rsp, 0x30
// asm:   0x18333b6fa: mov rbp, rdx
// asm:   0x18333b6fd: mov rax, qword ptr [rbp + 0x108]
// asm:   0x18333b704: mov rcx, qword ptr [rax]
// asm:   0x18333b707: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333b70b: movabs rax, 0
// asm:   0x18333b715: add rsp, 0x30
// asm:   0x18333b719: pop rbp
// asm:   0x18333b71a: ret 
// asm:   0x18333d7e0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d7e5: push rbx
// asm:   0x18333d7e6: push rbp
// asm:   0x18333d7e7: push rdi
// asm:   0x18333d7e8: sub rsp, 0x30
// asm:   0x18333d7ec: mov rbp, rdx
// asm:   0x18333d7ef: mov rbx, qword ptr [rbp + 0xf0]
// asm:   0x18333d7f6: mov rax, qword ptr [rbx]
// asm:   0x18333d7f9: mov rdi, qword ptr [rax]
// asm:   0x18333d7fc: lea rcx, [rip + 0xd3b755]  ; TypeInfo_System_Exception
// asm:   0x18333d803: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333d808: mov rdx, rdi
// asm:   0x18333d80b: mov rcx, rax
// asm:   0x18333d80e: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333d813: test al, al
// asm:   0x18333d815: mov rax, qword ptr [rbx]
// asm:   0x18333d818: je 0x18333d832
// asm:   0x18333d81a: movsxd rcx, dword ptr [rbp + 0x38]
// asm:   0x18333d81e: mov qword ptr [rbp + rcx*8 + 0x30], rax
// asm:   0x18333d823: inc dword ptr [rbp + 0x38]
// asm:   0x18333d826: movabs rax, 0
// asm:   0x18333d830: jmp 0x18333d84d
// asm:   0x18333d832: mov qword ptr [rbp + 0xc0], rax
// asm:   0x18333d839: lea rdx, [rip + 0xc9e748]
// asm:   0x18333d840: lea rcx, [rbp + 0xc0]
// asm:   0x18333d847: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333d84d: add rsp, 0x30
// asm:   0x18333d851: pop rdi
// asm:   0x18333d852: pop rbp
// asm:   0x18333d853: pop rbx
// asm:   0x18333d854: ret 
// asm:   0x18333d860: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d865: push rbp
// asm:   0x18333d866: sub rsp, 0x30
// asm:   0x18333d86a: mov rbp, rdx
// asm:   0x18333d86d: mov rax, qword ptr [rbp + 0x100]
// asm:   0x18333d874: mov rcx, qword ptr [rax]
// asm:   0x18333d877: mov qword ptr [rbp + 0x80], rcx
// asm:   0x18333d87e: movabs rax, 0
// asm:   0x18333d888: add rsp, 0x30
// asm:   0x18333d88c: pop rbp
// asm:   0x18333d88d: ret 

bool Map_MapLoader__LoadObjectsCoroutine_d__47__MoveNext
               (Map_MapLoader__LoadObjectsCoroutine_d__47_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  System_String_array *pSVar4;
  Map_MapLoader_o *pMVar5;
  Settings_InGameGeneralSettings_o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  Map_MapScriptBaseObject_o *pMVar8;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar9;
  System_Collections_Generic_Dictionary_int__MapObject__o *__this_00;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar10;
  longlong lVar11;
  Settings_InGameSet_o *pSVar12;
  Settings_InGameTitanSettings_o *pSVar13;
  Settings_BoolSetting_o *pSVar14;
  System_Collections_Generic_List_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__o *__this_01;
  UI_LoadingMenu_o *pUVar15;
  MethodInfo *pMVar16;
  int32_t iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  bool bVar20;
  uint uVar21;
  Map_CustomAssetEntry_o *__this_02;
  System_String_o *url;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *value;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  uint64_t uVar22;
  UnityEngine_Transform_o *__this_04;
  System_String_o *pSVar23;
  UnityEngine_Transform_o *p;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_05;
  System_Collections_Generic_List_AsyncOperation__o *pSVar24;
  UnityEngine_AsyncOperation_o *pUVar25;
  Il2CppObject *pIVar26;
  byte bVar27;
  uint index;
  char cVar28;
  float fVar29;
  float fVar30;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_138;
  int32_t iStack_120;
  int32_t iStack_11c;
  Map_MapScriptBaseObject_o *local_118;
  Map_MapLoader_o *local_108;
  System_Collections_Generic_List_Enumerator_T__o *local_100;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_f8;
  System_Collections_Generic_List_Enumerator_T__o local_e0;
  System_Collections_Generic_List_Enumerator_T__o local_c0;
  undefined8 uStack_a8;
  Map_MapScriptBaseObject_o *local_a0;
  
  if (Il2CppMethodInitialized_1843450d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AssetBundleManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomAssetEntry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Bounds_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Bounds_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Bounds_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AsyncOperation_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Bounds_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSS PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"Blade PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"Racing");
    il2cpp_codegen_initialize_runtime_metadata(&"APG PVP");
    il2cpp_codegen_initialize_runtime_metadata(&"Failed to load bundle: ");
    Il2CppMethodInitialized_1843450d3 = '\x01';
  }
  local_f8.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8.fields._index = 0;
  local_f8.fields._version = 0;
  local_f8.fields._currentKey = (Il2CppObject *)0x0;
  local_e0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_e0.fields._index = 0;
  local_e0.fields._version = 0;
  local_e0.fields._current = (Il2CppObject *)0x0;
  local_c0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c0.fields._index = 0;
  local_c0.fields._version = 0;
  local_c0.fields._current = (Il2CppObject *)0x0;
  uStack_a8._0_4_ = 0;
  uStack_a8._4_4_ = 0;
  local_a0 = (Map_MapScriptBaseObject_o *)0x0;
  index = 0;
  local_108 = (__this->fields).__4__this;
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    pSVar3 = (__this->fields).customAssets;
    if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_138,
               (System_Collections_Generic_List_T__o *)pSVar3,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    (__this->fields).__7__wrap5.fields._list =
         (System_Collections_Generic_List_T__o *)local_138.fields._dictionary;
    (__this->fields).__7__wrap5.fields._index = local_138.fields._index;
    (__this->fields).__7__wrap5.fields._version = local_138.fields._version;
    (__this->fields).__7__wrap5.fields._current = (System_String_o *)local_138.fields._currentValue;
    Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__7__wrap5,(void *)0x0);
    (__this->fields).__1__state = -3;
label_181eb7910:
    while (bVar20 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)
                               &(__this->fields).__7__wrap5,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext), bVar20)
    {
      pSVar23 = (__this->fields).__7__wrap5.fields._current;
      (__this->fields)._customAsset_5__7 = pSVar23;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._customAsset_5__7,pSVar23);
      pSVar23 = (__this->fields)._customAsset_5__7;
      if ((TypeInfo_Map_CustomAssetEntry->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomAssetEntry);
      }
      __this_02 = Map_CustomAssetEntry__Parse(pSVar23,(MethodInfo *)0x0);
      if (__this_02 == (Map_CustomAssetEntry_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar23 = (__this_02->fields).Bundle;
      (__this->fields)._bundle_5__8 = pSVar23;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._bundle_5__8,pSVar23);
      bVar20 = System_String__op_Equality
                         ((__this->fields)._bundle_5__8,
                          (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
      if (!bVar20) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pMVar5 = TypeInfo_Map_MapLoader->static_fields->_instance;
        pSVar23 = (__this->fields)._bundle_5__8;
        url = Map_CustomAssetEntry__GetUrl(__this_02,(MethodInfo *)0x0);
        bVar20 = (__this->fields).editor;
        if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
        }
        routine = ApplicationManagers_AssetBundleManager__LoadBundle(pSVar23,url,bVar20,(MethodInfo *)0x0);
        if (pMVar5 != (Map_MapLoader_o *)0x0) {
          value = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                            ((UnityEngine_MonoBehaviour_o *)pMVar5,routine,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)value;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
          (__this->fields).__1__state = 1;
          return true;
        }
        ThrowNullReferenceException();
      }
    }
    if (Il2CppMethodInitialized_1843450d4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      Il2CppMethodInitialized_1843450d4 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap5,
               MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    (__this->fields).__7__wrap5.fields._list = (System_Collections_Generic_List_T__o *)0x0;
    (__this->fields).__7__wrap5.fields._index = 0;
    (__this->fields).__7__wrap5.fields._version = 0;
    (__this->fields).__7__wrap5.fields._current = (System_String_o *)0x0;
    pSVar12 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
    if (pSVar12 == (Settings_InGameSet_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = (pSVar12->fields).General;
    if (pSVar6 == (Settings_InGameGeneralSettings_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar7 = (pSVar6->fields).GameMode;
    if (pSVar7 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar20 = System_String__op_Inequality((pSVar7->fields)._value,"Racing",(MethodInfo *)0x0);
    uVar21 = index;
    if (bVar20) {
      pSVar12 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (pSVar12 == (Settings_InGameSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar6 = (pSVar12->fields).General;
      if (pSVar6 == (Settings_InGameGeneralSettings_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar7 = (pSVar6->fields).GameMode;
      if (pSVar7 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar20 = System_String__op_Inequality((pSVar7->fields)._value,"Thunderspear PVP",(MethodInfo *)0x0);
      if (!bVar20) {
label_181eb7cdc:
        uVar21 = 0;
        goto label_181eb7d19;
      }
      pSVar12 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (pSVar12 == (Settings_InGameSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar6 = (pSVar12->fields).General;
      if (pSVar6 == (Settings_InGameGeneralSettings_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar7 = (pSVar6->fields).GameMode;
      if (pSVar7 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar20 = System_String__op_Inequality((pSVar7->fields)._value,"Blade PVP",(MethodInfo *)0x0);
      if (!bVar20) goto label_181eb7cdc;
      pSVar12 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (pSVar12 == (Settings_InGameSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar6 = (pSVar12->fields).General;
      if (pSVar6 == (Settings_InGameGeneralSettings_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar7 = (pSVar6->fields).GameMode;
      if (pSVar7 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar20 = System_String__op_Inequality((pSVar7->fields)._value,"APG PVP",(MethodInfo *)0x0);
      if (!bVar20) goto label_181eb7cdc;
      pSVar12 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (pSVar12 == (Settings_InGameSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar6 = (pSVar12->fields).General;
      if (pSVar6 == (Settings_InGameGeneralSettings_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar7 = (pSVar6->fields).GameMode;
      if (pSVar7 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar20 = System_String__op_Inequality((pSVar7->fields)._value,"AHSS PVP",(MethodInfo *)0x0);
      if (!bVar20) goto label_181eb7cdc;
      pSVar12 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (pSVar12 == (Settings_InGameSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar6 = (pSVar12->fields).General;
      if (pSVar6 == (Settings_InGameGeneralSettings_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar7 = (pSVar6->fields).GameMode;
      if (pSVar7 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar20 = System_String__op_Inequality((pSVar7->fields)._value,"None",(MethodInfo *)0x0);
      if (!bVar20) goto label_181eb7cdc;
      pSVar3 = (__this->fields).customAssets;
      if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pSVar3->fields)._size == 0) {
        pSVar9 = (__this->fields).objects;
        if (pSVar9 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
          ThrowNullReferenceException();
        }
        uVar21 = (uint)((pSVar9->fields)._size != 0);
        goto label_181eb7d19;
      }
      bVar20 = true;
    }
    else {
label_181eb7d19:
      bVar20 = SUB41(uVar21,0);
    }
    cVar28 = '\x01';
    if (__this == (Map_MapLoader__LoadObjectsCoroutine_d__47_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this->fields)._gamemodeNeedsNav_5__2 = bVar20;
    if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    }
    if (TypeInfo_Map_MapManager->static_fields->NeedsNavMeshUpdate == false) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      if (TypeInfo_Map_MapLoader->static_fields->_hasNavMeshData != false) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        cVar28 = TypeInfo_Map_MapLoader->static_fields->_navMeshModified;
      }
    }
    if (__this == (Map_MapLoader__LoadObjectsCoroutine_d__47_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this->fields)._rebuildNavMesh_5__3 = cVar28 != '\0';
    if ((__this->fields)._rebuildNavMesh_5__3 == false) {
label_181eb7e3a:
      bVar27 = 0;
    }
    else {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      bVar20 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      if (!bVar20) goto label_181eb7e3a;
      pSVar12 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (pSVar12 == (Settings_InGameSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar13 = (pSVar12->fields).Titan;
      if (pSVar13 == (Settings_InGameTitanSettings_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar14 = (pSVar13->fields).TitanSmartMovement;
      if (pSVar14 == (Settings_BoolSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar27 = (pSVar14->fields)._value;
    }
    (__this->fields)._count_5__4 = 0;
    if ((bVar27 & (__this->fields)._gamemodeNeedsNav_5__2) == 0) {
      fVar30 = 0.5;
    }
    else {
      fVar30 = 0.25;
    }
    if (__this == (Map_MapLoader__LoadObjectsCoroutine_d__47_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this->fields)._multiplier_5__5 = fVar30;
    pSVar9 = (__this->fields).objects;
    if (pSVar9 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_138,
               (System_Collections_Generic_List_T__o *)pSVar9,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
    (__this->fields).__7__wrap8.fields._list =
         (System_Collections_Generic_List_T__o *)local_138.fields._dictionary;
    (__this->fields).__7__wrap8.fields._index = local_138.fields._index;
    (__this->fields).__7__wrap8.fields._version = local_138.fields._version;
    (__this->fields).__7__wrap8.fields._current = (Map_MapScriptBaseObject_o *)local_138.fields._currentValue;
    Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__7__wrap8,(void *)0x0);
    (__this->fields).__1__state = -4;
    while (bVar20 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)
                               &(__this->fields).__7__wrap8,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext
                              ), bVar20) {
      pMVar8 = (__this->fields).__7__wrap8.fields._current;
      bVar20 = (__this->fields).editor;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      Map_MapLoader__LoadObject(pMVar8,bVar20,(MethodInfo *)0x0);
      iVar2 = (__this->fields)._count_5__4;
      if ((iVar2 == (iVar2 / 100) * 100) &&
         (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 2)) {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar9 = (__this->fields).objects;
        if (pSVar9 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
          pUVar15 = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
          if (pUVar15 != (UI_LoadingMenu_o *)0x0) {
            UI_LoadingMenu__UpdateLoading
                      (pUVar15,((float)(__this->fields)._count_5__4 / (float)(pSVar9->fields)._size) *
                               (__this->fields)._multiplier_5__5 + 0.5,false,false,(MethodInfo *)0x0);
            pIVar26 = (Il2CppObject *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
            UnityEngine_WaitForEndOfFrame___ctor
                      ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar26,(MethodInfo *)0x0);
            (__this->fields).__2__current = pIVar26;
            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar26);
            (__this->fields).__1__state = 2;
            return true;
          }
          ThrowNullReferenceException();
        }
        ThrowNullReferenceException();
      }
label_181eb7728:
      piVar1 = &(__this->fields)._count_5__4;
      *piVar1 = *piVar1 + 1;
    }
    if (Il2CppMethodInitialized_1843450d5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
      Il2CppMethodInitialized_1843450d5 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap8,
               MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
    (__this->fields).__7__wrap8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
    (__this->fields).__7__wrap8.fields._index = 0;
    (__this->fields).__7__wrap8.fields._version = 0;
    (__this->fields).__7__wrap8.fields._current = (Map_MapScriptBaseObject_o *)0x0;
    if ((__this->fields).editor == false) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this_00 = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (__this_00 == (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_03 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                             (MethodInfo_13C6500 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Keys);
      if (__this_03 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_ValueCollection_StylePropertyAnimationSystem_ElementPropertyPair__Int32Enum___GetEnumerator
                (&local_138,__this_03,
                 (MethodInfo_F1E550 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_MapObject_GetEnumerator);
      local_f8.fields._dictionary = local_138.fields._dictionary;
      local_f8.fields._index = local_138.fields._index;
      local_f8.fields._version = local_138.fields._version;
      local_f8.fields._currentKey = local_138.fields._currentValue;
      while (bVar20 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_uint__object___MoveNext
                                (&local_f8,
                                 (MethodInfo_15638A0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_MoveNext
                                ), bVar20) {
        iVar17 = (int32_t)local_f8.fields._currentKey;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar10 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                  TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar10 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
          ThrowNullReferenceException();
        }
        uVar22 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                           (pSVar10,iVar17,
                            (MethodInfo_14156F0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        if (Il2CppMethodInitialized_1843450c1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
          il2cpp_codegen_initialize_runtime_metadata(&")");
          il2cpp_codegen_initialize_runtime_metadata(&"Map load error: object parent id not found (");
          Il2CppMethodInitialized_1843450c1 = '\x01';
        }
        if (uVar22 == 0) {
          ThrowNullReferenceException();
        }
        if (*(UnityEngine_GameObject_o **)(uVar22 + 0x18) == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        lVar11 = *(longlong *)(uVar22 + 0x20);
        __this_04 = UnityEngine_GameObject__get_transform
                              (*(UnityEngine_GameObject_o **)(uVar22 + 0x18),(MethodInfo *)0x0);
        if (lVar11 == 0) {
          ThrowNullReferenceException();
        }
        if (-1 < *(int *)(lVar11 + 0x24)) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar10 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                    TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar10 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar20 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                             (pSVar10,*(int32_t *)(lVar11 + 0x24),
                              (MethodInfo_1407110 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
          if (bVar20) {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar10 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                      TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar10 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
              ThrowNullReferenceException();
            }
            uVar22 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                               (pSVar10,*(int32_t *)(lVar11 + 0x24),
                                (MethodInfo_14156F0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
            if (uVar22 == 0) {
              ThrowNullReferenceException();
            }
            if (*(UnityEngine_GameObject_o **)(uVar22 + 0x18) == (UnityEngine_GameObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            p = UnityEngine_GameObject__get_transform
                          (*(UnityEngine_GameObject_o **)(uVar22 + 0x18),(MethodInfo *)0x0);
            if (__this_04 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            UnityEngine_Transform__SetParent(__this_04,p,(MethodInfo *)0x0);
          }
          else {
            pSVar23 = System_Int32__ToString((int32_t *)(lVar11 + 0x24),(MethodInfo *)0x0);
            pSVar23 = System_String__Concat_1969b70
                                ("Map load error: object parent id not found (",pSVar23,")",(MethodInfo *)0x0);
            if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
            }
            ApplicationManagers_DebugConsole__Log(pSVar23,true,(MethodInfo *)0x0);
          }
        }
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_f8,
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
                );
    }
    pMVar5 = local_108;
    if ((__this->fields).editor == false) {
      if (local_108 == (Map_MapLoader_o *)0x0) {
        ThrowNullReferenceException();
      }
      Map_MapLoader__Batch(local_108,(MethodInfo *)0x0);
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
      }
      Map_MapDestruction__Build((MethodInfo *)0x0);
    }
    if ((__this->fields)._rebuildNavMesh_5__3 == false) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      bVar20 = Map_MapLoader__get_HasNavMesh((MethodInfo *)0x0);
      if (bVar20) {
        if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        }
        bVar20 = Map_MapDestruction__get_IsActive((MethodInfo *)0x0);
        if (bVar20) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          Map_MapLoader__CollectNavMeshSources((MethodInfo *)0x0);
        }
      }
      goto label_181eb8594;
    }
    UnityEngine_AI_NavMesh__RemoveAllNavMeshData((MethodInfo *)0x0);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    TypeInfo_Map_MapLoader->static_fields->_hasNavMeshData = false;
    TypeInfo_Map_MapLoader->static_fields->_navMeshModified = false;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar20 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar20) {
      pSVar12 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (pSVar12 == (Settings_InGameSet_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar13 = (pSVar12->fields).Titan;
      if (pSVar13 == (Settings_InGameTitanSettings_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar14 = (pSVar13->fields).TitanSmartMovement;
      if (pSVar14 == (Settings_BoolSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar27 = (pSVar14->fields)._value;
    }
    else {
      bVar27 = 0;
    }
    if (((__this->fields)._gamemodeNeedsNav_5__2 & bVar27) == 0) goto label_181eb8594;
    if (pMVar5 == (Map_MapLoader_o *)0x0) {
      ThrowNullReferenceException();
    }
    Map_MapLoader__ResetSources(pMVar5,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    __this_05 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                Utility_Util__GetAllTitanAgentIds((MethodInfo *)0x0);
    pSVar24 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AsyncOperation);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar24,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_AsyncOperation_ctor);
    (__this->fields)._operations_5__10 = pSVar24;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._operations_5__10,pSVar24);
    if (__this_05 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_138,__this_05,
               (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    local_e0.fields._list = (System_Collections_Generic_List_T__o *)local_138.fields._dictionary;
    local_e0.fields._index = local_138.fields._index;
    local_e0.fields._version = local_138.fields._version;
    local_e0.fields._current = local_138.fields._currentValue;
    while (bVar20 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                              (&local_e0,
                               (MethodInfo_1530180 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext), bVar20) {
      iVar17 = (int32_t)local_e0.fields._current;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this_01 = (System_Collections_Generic_List_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__o
                   *)TypeInfo_Map_MapLoader->static_fields->_navMeshBounds;
      if (__this_01 ==
          (System_Collections_Generic_List_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__o *)
          0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&local_138,__this_01,
                 (MethodInfo_930AD0 *)MethodInfo_System_Collections_Generic_List_Bounds_GetEnumerator);
      local_c0.fields._list = (System_Collections_Generic_List_T__o *)local_138.fields._dictionary;
      local_c0.fields._index = local_138.fields._index;
      local_c0.fields._version = local_138.fields._version;
      local_c0.fields._current = local_138.fields._currentValue;
      uStack_a8._0_4_ = iStack_120;
      uStack_a8._4_4_ = iStack_11c;
      local_a0 = local_118;
      local_108 = (Map_MapLoader_o *)0x0;
      local_100 = &local_c0;
      while (bVar20 = System_Collections_Generic_List_Enumerator_StyleValue___MoveNext
                                (&local_c0,
                                 (MethodInfo_1529D10 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_Bounds_MoveNext),
            pMVar8 = local_a0, uVar18 = uStack_a8, pIVar26 = local_c0.fields._current, bVar20) {
        pSVar24 = (__this->fields)._operations_5__10;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        uVar19 = uStack_a8;
        local_138.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar26;
        uStack_a8._0_4_ = (int32_t)uVar18;
        uStack_a8._4_4_ = SUB84(uVar18,4);
        local_138.fields._index = (int32_t)uStack_a8;
        local_138.fields._version = uStack_a8._4_4_;
        local_138.fields._currentValue = (Il2CppObject *)pMVar8;
        uStack_a8 = uVar19;
        pUVar25 = Map_MapLoader__CreateNavMeshSurface
                            (iVar17,(UnityEngine_Bounds_o *)&local_138,3,(MethodInfo *)0x0);
        if (pSVar24 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(pSVar24,pUVar25);
      }
      System_Collections_Generic_List_Enumerator_Bounds___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_c0,
                 MethodInfo_System_Collections_Generic_List_Enumerator_Bounds_Dispose);
    }
    System_Collections_Generic_List_Enumerator_int___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_e0,
               MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
  }
  else {
    if (iVar2 == 1) {
      (__this->fields).__1__state = -3;
      pSVar23 = (__this->fields)._bundle_5__8;
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      bVar20 = ApplicationManagers_AssetBundleManager__LoadedBundle(pSVar23,(MethodInfo *)0x0);
      if (!bVar20) {
        pSVar23 = System_String__Concat_1969e50
                            ("Failed to load bundle: ",(__this->fields)._customAsset_5__7,(MethodInfo *)0x0);
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        ApplicationManagers_DebugConsole__Log(pSVar23,true,(MethodInfo *)0x0);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar3 = TypeInfo_Map_MapLoader->static_fields->Errors;
        pSVar23 = System_String__Concat_1969e50
                            ("Failed to load bundle: ",(__this->fields)._customAsset_5__7,(MethodInfo *)0x0);
        pMVar16 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar3->fields)._items;
        if (pSVar4 == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        uVar21 = (pSVar3->fields)._size;
        if (uVar21 < (uint)pSVar4->max_length) {
          (pSVar3->fields)._size = uVar21 + 1;
          if ((uint)pSVar4->max_length <= uVar21) {
            ThrowIndexOutOfRangeException();
          }
          pSVar4->m_Items[(int)uVar21] = pSVar23;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar21,pSVar23);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pSVar23,
                     (MethodInfo_93DD50 *)pMVar16->klass->rgctx_data[0xe].method);
        }
      }
      (__this->fields)._bundle_5__8 = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._bundle_5__8,(void *)0x0);
      (__this->fields)._customAsset_5__7 = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._customAsset_5__7,(void *)0x0);
      goto label_181eb7910;
    }
    if (iVar2 == 2) {
      (__this->fields).__1__state = -4;
      goto label_181eb7728;
    }
    if (iVar2 != 3) {
      return false;
    }
    (__this->fields).__1__state = -1;
  }
  pSVar24 = (__this->fields)._operations_5__10;
  if (pSVar24 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
    ThrowNullReferenceException();
  }
  if (0 < (pSVar24->fields)._size) {
    fVar30 = 1.0;
label_181eb89f0:
    do {
      pSVar24 = (__this->fields)._operations_5__10;
      if (pSVar24 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pSVar24->fields)._size <= (int)index) {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar15 = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
        if (pUVar15 != (UI_LoadingMenu_o *)0x0) {
          UI_LoadingMenu__UpdateLoading(pUVar15,fVar30 * 0.25 + 0.75,false,false,(MethodInfo *)0x0);
          pIVar26 = (Il2CppObject *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
          UnityEngine_WaitForEndOfFrame___ctor
                    ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar26,(MethodInfo *)0x0);
          (__this->fields).__2__current = pIVar26;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar26);
          (__this->fields).__1__state = 3;
          return true;
        }
        ThrowNullReferenceException();
      }
      pUVar25 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar24,index,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_AsyncOperation_get_Item);
      if (pUVar25 == (UnityEngine_AsyncOperation_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar20 = UnityEngine_AsyncOperation__get_isDone(pUVar25,(MethodInfo *)0x0);
      pSVar24 = (__this->fields)._operations_5__10;
      if (bVar20) {
        if (pSVar24 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar24,index,
                   (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_AsyncOperation_RemoveAt);
        index = index - 1;
      }
      else {
        if (pSVar24 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar25 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar24,index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_AsyncOperation_get_Item);
        if (pUVar25 == (UnityEngine_AsyncOperation_o *)0x0) {
          ThrowNullReferenceException();
        }
        fVar29 = UnityEngine_AsyncOperation__get_progress(pUVar25,(MethodInfo *)0x0);
        if (fVar29 <= fVar30) {
          index = index + 1;
          fVar30 = fVar29;
          goto label_181eb89f0;
        }
      }
      index = index + 1;
    } while( true );
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  TypeInfo_Map_MapLoader->static_fields->_hasNavMeshData = true;
  (__this->fields)._operations_5__10 = (System_Collections_Generic_List_AsyncOperation__o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._operations_5__10,(void *)0x0);
label_181eb8594:
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  TypeInfo_Map_MapManager->static_fields->MapLoaded = true;
  return false;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__47$$<>m__Finally1
// il2cpp: void Map_MapLoader__LoadObjectsCoroutine_d__47____m__Finally1 (Map_MapLoader__LoadObjectsCoroutine_d__47_o* __this, const MethodInfo* method);
// 0x181eb8eb0

void Map_MapLoader__LoadObjectsCoroutine_d__47____m__Finally1
               (Map_MapLoader__LoadObjectsCoroutine_d__47_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843450d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    Il2CppMethodInitialized_1843450d4 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap5,
             MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  return;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__47$$<>m__Finally2
// il2cpp: void Map_MapLoader__LoadObjectsCoroutine_d__47____m__Finally2 (Map_MapLoader__LoadObjectsCoroutine_d__47_o* __this, const MethodInfo* method);
// 0x181eb8f00

void Map_MapLoader__LoadObjectsCoroutine_d__47____m__Finally2
               (Map_MapLoader__LoadObjectsCoroutine_d__47_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843450d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
    Il2CppMethodInitialized_1843450d5 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap8,
             MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
  return;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__47$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Map_MapLoader__LoadObjectsCoroutine_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current (Map_MapLoader__LoadObjectsCoroutine_d__47_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Map_MapLoader__LoadObjectsCoroutine_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current(Map_MapLoader__LoadObjectsCoroutine_d__47_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Map.MapLoader.<LoadObjectsCoroutine>d__47$$System.Collections.IEnumerator.Reset
// il2cpp: void Map_MapLoader__LoadObjectsCoroutine_d__47__System_Collections_IEnumerator_Reset (Map_MapLoader__LoadObjectsCoroutine_d__47_o* __this, const MethodInfo* method);
// 0x181eb8d40

void Map_MapLoader__LoadObjectsCoroutine_d__47__System_Collections_IEnumerator_Reset
               (Map_MapLoader__LoadObjectsCoroutine_d__47_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Map_MapLoader_LoadObjectsCoroutine_d__47_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Map.MapLoader.<LoadObjectsCoroutine>d__47$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Map_MapLoader__LoadObjectsCoroutine_d__47__System_Collections_IEnumerator_get_Current (Map_MapLoader__LoadObjectsCoroutine_d__47_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Map_MapLoader__LoadObjectsCoroutine_d__47__System_Collections_IEnumerator_get_Current(Map_MapLoader__LoadObjectsCoroutine_d__47_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Map.MapLoader.<RefreshNavMesh>d__55$$.ctor
// il2cpp: void Map_MapLoader__RefreshNavMesh_d__55___ctor (Map_MapLoader__RefreshNavMesh_d__55_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Map_MapLoader__RefreshNavMesh_d__55___ctor(Map_MapLoader__RefreshNavMesh_d__55_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Map.MapLoader.<RefreshNavMesh>d__55$$System.IDisposable.Dispose
// il2cpp: void Map_MapLoader__RefreshNavMesh_d__55__System_IDisposable_Dispose (Map_MapLoader__RefreshNavMesh_d__55_o* __this, const MethodInfo* method);
// 0x181eb9690
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eb96f4: lea rcx, [rsp + 0x30]
// asm:   0x181eb96f9: call 0x181e9b390  ; il2cpp_runtime_helper_181e9b390()
// asm:   0x181eb96fe: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181eb9703: test rcx, rcx
// asm:   0x181eb9706: jne 0x181eb970e
// asm:   0x181eb970e: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void Map_MapLoader__RefreshNavMesh_d__55__System_IDisposable_Dispose
               (Map_MapLoader__RefreshNavMesh_d__55_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 2)) {
    if (Il2CppMethodInitialized_1843450d7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_Dispose);
      Il2CppMethodInitialized_1843450d7 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap3,
               MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_Dispose);
  }
  return;
}


// Map.MapLoader.<RefreshNavMesh>d__55$$MoveNext
// il2cpp: bool Map_MapLoader__RefreshNavMesh_d__55__MoveNext (Map_MapLoader__RefreshNavMesh_d__55_o* __this, const MethodInfo* method);
// 0x181eb8f50
// eh: try 0x181eb9073..0x181eb9636 -> pad 0x18333d900 (+6 call sites) catch Il2CppExceptionWrapper
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eb91be: nop 
// asm:   0x181eb9373: mov rdx, qword ptr [rip + 0x21ebcc6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapLoader_NavMeshBuild_Dispose
// asm:   0x181eb937a: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181eb937f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181eb9384: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181eb9389: test rcx, rcx
// asm:   0x181eb938c: jne 0x181eb9621
// asm:   0x181eb9392: xor esi, esi
// asm:   0x181eb95df: mov rbx, qword ptr [rsp + 0x40]
// asm:   0x181eb95e4: test rbx, rbx
// asm:   0x181eb95e7: jne 0x181eb9636
// asm:   0x181eb95e9: movzx eax, byte ptr [rsp + 0x200]
// asm:   0x181eb9621: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181eb9636: lea rcx, [rsp + 0x48]
// asm:   0x181eb963b: call 0x181e9b4f0  ; il2cpp_runtime_helper_181e9b4f0()
// asm:   0x181eb9640: mov rcx, rbx
// asm:   0x181eb9643: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333d8d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d8d5: push rbp
// asm:   0x18333d8d6: sub rsp, 0x30
// asm:   0x18333d8da: mov rbp, rdx
// asm:   0x18333d8dd: mov rax, qword ptr [rbp + 0x1b0]
// asm:   0x18333d8e4: mov rcx, qword ptr [rax]
// asm:   0x18333d8e7: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333d8eb: movabs rax, 0
// asm:   0x18333d8f5: add rsp, 0x30
// asm:   0x18333d8f9: pop rbp
// asm:   0x18333d8fa: ret 
// asm:   0x18333d900: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d905: push rbp
// asm:   0x18333d906: sub rsp, 0x30
// asm:   0x18333d90a: mov rbp, rdx
// asm:   0x18333d90d: mov rax, qword ptr [rbp + 0x1b8]
// asm:   0x18333d914: mov rcx, qword ptr [rax]
// asm:   0x18333d917: mov qword ptr [rbp + 0x40], rcx
// asm:   0x18333d91b: movabs rax, 0
// asm:   0x18333d925: add rsp, 0x30
// asm:   0x18333d929: pop rbp
// asm:   0x18333d92a: ret 

bool Map_MapLoader__RefreshNavMesh_d__55__MoveNext
               (Map_MapLoader__RefreshNavMesh_d__55_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  int32_t length;
  uint uVar3;
  System_Collections_Generic_List_MapLoader_NavMeshBuild__o *__this_00;
  UnityEngine_AsyncOperation_array *pUVar4;
  MethodInfo *pMVar5;
  Il2CppObject *data;
  System_Collections_Generic_List_T__o *pSVar6;
  bool bVar7;
  UnityEngine_AsyncOperation_o *pUVar8;
  UnityEngine_WaitForSecondsRealtime_o *pUVar9;
  System_Collections_Generic_List_AsyncOperation__o *pSVar10;
  System_Collections_Generic_List_Enumerator_T__o local_198;
  System_Collections_Generic_List_Enumerator_T__o local_178;
  undefined1 auStack_160 [48];
  System_Collections_Generic_List_T__o *pSStack_130;
  undefined8 local_128;
  System_Collections_Generic_List_T__o *pSStack_120;
  undefined8 local_118;
  System_Collections_Generic_List_T__o *pSStack_110;
  UnityEngine_AI_NavMeshData_o *local_108;
  undefined1 auStack_100 [48];
  System_Collections_Generic_List_T__o *pSStack_d0;
  int32_t local_c8;
  int32_t iStack_c4;
  System_Collections_Generic_List_T__o *pSStack_c0;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  undefined1 auStack_90 [64];
  System_Collections_Generic_List_T__o *pSStack_50;
  int32_t local_48;
  int32_t iStack_44;
  System_Collections_Generic_List_T__o *pSStack_40;
  
  if (Il2CppMethodInitialized_1843450d6 == '\0') {
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
    Il2CppMethodInitialized_1843450d6 = '\x01';
  }
  local_178.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_178.fields._index = 0;
  local_178.fields._version = 0;
  local_178.fields._current = (Il2CppObject *)0x0;
  auStack_160._0_4_ = 0;
  auStack_160._4_4_ = 0.0;
  auStack_160._8_4_ = 0.0;
  auStack_160._12_4_ = 0.0;
  auStack_160._16_4_ = 0.0;
  auStack_160._20_4_ = 0.0;
  auStack_160._24_4_ = 0.0;
  auStack_160._28_4_ = 0.0;
  auStack_160._32_4_ = 0;
  auStack_160._36_4_ = 0.0;
  auStack_160._40_4_ = 0;
  auStack_160._44_4_ = 0;
  pSStack_130 = (System_Collections_Generic_List_T__o *)0x0;
  local_128._0_4_ = 0;
  local_128._4_4_ = 0;
  pSStack_120 = (System_Collections_Generic_List_T__o *)0x0;
  local_118._0_4_ = 0;
  local_118._4_4_ = 0;
  pSStack_110 = (System_Collections_Generic_List_T__o *)0x0;
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSecondsRealtime);
    UnityEngine_WaitForSecondsRealtime___ctor(pUVar9,1.0,(MethodInfo *)0x0);
    (__this->fields)._delay_5__2 = pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._delay_5__2,pUVar9);
    pSVar10 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AsyncOperation);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar10,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_AsyncOperation_ctor);
    (__this->fields)._operations_5__3 = pSVar10;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._operations_5__3,pSVar10);
  }
  else {
    if (iVar2 == 1) {
      (__this->fields).__1__state = -1;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      TypeInfo_Map_MapLoader->static_fields->_navMeshRefreshPending = false;
      pSVar10 = (__this->fields)._operations_5__3;
      if (pSVar10 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
        ThrowNullReferenceException();
      }
      piVar1 = &(pSVar10->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar10->fields)._size;
      (pSVar10->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,length,(MethodInfo *)0x0);
      }
      __this_00 = TypeInfo_Map_MapLoader->static_fields->_navMeshBuilds;
      if (__this_00 == (System_Collections_Generic_List_MapLoader_NavMeshBuild__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_MapLoader_NavMeshBuild___GetEnumerator
                (&local_a8,__this_00,
                 (MethodInfo_942C90 *)
                 MethodInfo_System_Collections_Generic_List_MapLoader_NavMeshBuild_GetEnumerator);
      local_178.fields._list = local_a8.fields._list;
      local_178.fields._index = local_a8.fields._index;
      local_178.fields._version = local_a8.fields._version;
      local_178.fields._current = local_a8.fields._current;
      auStack_160._0_8_ = auStack_90._0_8_;
      auStack_160._8_8_ = auStack_90._8_8_;
      auStack_160._16_8_ = auStack_90._16_8_;
      auStack_160._24_8_ = auStack_90._24_8_;
      auStack_160._32_8_ = auStack_90._32_8_;
      auStack_160._40_8_ = auStack_90._40_8_;
      pSStack_130 = (System_Collections_Generic_List_T__o *)auStack_90._48_8_;
      local_128._0_4_ = auStack_90._56_4_;
      local_128._4_4_ = auStack_90._60_4_;
      pSStack_120 = pSStack_50;
      local_118._0_4_ = local_48;
      local_118._4_4_ = iStack_44;
      pSStack_110 = pSStack_40;
      while (bVar7 = System_Collections_Generic_List_Enumerator_MapLoader_NavMeshBuild___MoveNext
                               (&local_178,
                                (MethodInfo_1559590 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_MapLoader_NavMeshBuild_MoveNext
                               ), pSVar6 = pSStack_110, data = local_178.fields._current, bVar7) {
        local_108 = (UnityEngine_AI_NavMeshData_o *)local_178.fields._current;
        auStack_100._0_8_ = auStack_160._0_8_;
        auStack_100._8_8_ = auStack_160._8_8_;
        auStack_100._16_8_ = auStack_160._16_8_;
        auStack_100._24_8_ = auStack_160._24_8_;
        auStack_100._32_8_ = auStack_160._32_8_;
        auStack_100._40_8_ = auStack_160._40_8_;
        pSStack_d0 = pSStack_130;
        local_c8 = (int32_t)local_128;
        iStack_c4 = local_128._4_4_;
        pSStack_c0 = pSStack_120;
        auStack_90._40_4_ = (int32_t)local_128;
        auStack_90._44_4_ = local_128._4_4_;
        auStack_90._48_8_ = pSStack_120;
        auStack_90._56_4_ = (int32_t)local_118;
        auStack_90._60_4_ = local_118._4_4_;
        pSStack_50 = pSStack_110;
        pSVar10 = (__this->fields)._operations_5__3;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        local_198.fields._list = (System_Collections_Generic_List_T__o *)auStack_90._48_8_;
        local_198.fields._index = auStack_90._56_4_;
        local_198.fields._version = auStack_90._60_4_;
        local_198.fields._current = (Il2CppObject *)pSVar6;
        local_108 = (UnityEngine_AI_NavMeshData_o *)auStack_100._0_8_;
        auStack_100._0_8_ = auStack_100._8_8_;
        auStack_100._8_8_ = auStack_100._16_8_;
        auStack_100._16_8_ = auStack_100._24_8_;
        auStack_100._24_8_ = auStack_100._32_8_;
        auStack_100._32_8_ = auStack_100._40_8_;
        auStack_100._40_8_ = pSStack_d0;
        pSStack_d0 = (System_Collections_Generic_List_T__o *)_local_c8;
        pUVar8 = UnityEngine_AI_NavMeshBuilder__UpdateNavMeshDataAsync
                           ((UnityEngine_AI_NavMeshData_o *)data,
                            (UnityEngine_AI_NavMeshBuildSettings_o *)&local_108,
                            TypeInfo_Map_MapLoader->static_fields->_navMeshSources,
                            (UnityEngine_Bounds_o *)&local_198,(MethodInfo *)0x0);
        pMVar5 = MethodInfo_System_Collections_Generic_List_AsyncOperation_Add;
        if (pSVar10 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
          ThrowNullReferenceException();
        }
        piVar1 = &(pSVar10->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar4 = (pSVar10->fields)._items;
        if (pUVar4 == (UnityEngine_AsyncOperation_array *)0x0) {
          ThrowNullReferenceException();
        }
        uVar3 = (pSVar10->fields)._size;
        if (uVar3 < (uint)pUVar4->max_length) {
          (pSVar10->fields)._size = uVar3 + 1;
          if ((uint)pUVar4->max_length <= uVar3) {
            ThrowIndexOutOfRangeException();
          }
          pUVar4->m_Items[(int)uVar3] = pUVar8;
          Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar3,pUVar8);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pUVar8,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
        }
      }
      System_Collections_Generic_List_Enumerator_MapLoader_NavMeshBuild___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_178,
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapLoader_NavMeshBuild_Dispose);
      pSVar10 = (__this->fields)._operations_5__3;
      if (pSVar10 == (System_Collections_Generic_List_AsyncOperation__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                (&local_198,(System_Collections_Generic_List_T__o *)pSVar10,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_AsyncOperation_GetEnumerator)
      ;
      (__this->fields).__7__wrap3.fields._list = local_198.fields._list;
      (__this->fields).__7__wrap3.fields._index = local_198.fields._index;
      (__this->fields).__7__wrap3.fields._version = local_198.fields._version;
      (__this->fields).__7__wrap3.fields._current = (UnityEngine_AsyncOperation_o *)local_198.fields._current;
      Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__7__wrap3,(void *)0x0);
      (__this->fields).__1__state = -3;
    }
    else {
      if (iVar2 != 2) {
        return false;
      }
      (__this->fields).__1__state = -3;
    }
    bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap3,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_MoveNext);
    if (bVar7) {
      pUVar8 = (__this->fields).__7__wrap3.fields._current;
      (__this->fields).__2__current = (Il2CppObject *)pUVar8;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pUVar8);
      (__this->fields).__1__state = 2;
      return true;
    }
    if (Il2CppMethodInitialized_1843450d7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_Dispose);
      Il2CppMethodInitialized_1843450d7 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap3,
               MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_Dispose);
    (__this->fields).__7__wrap3.fields._list = (System_Collections_Generic_List_T__o *)0x0;
    (__this->fields).__7__wrap3.fields._index = 0;
    (__this->fields).__7__wrap3.fields._version = 0;
    (__this->fields).__7__wrap3.fields._current = (UnityEngine_AsyncOperation_o *)0x0;
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  if (TypeInfo_Map_MapLoader->static_fields->_navMeshRefreshPending == false) {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    TypeInfo_Map_MapLoader->static_fields->_navMeshRefresh = (UnityEngine_Coroutine_o *)0x0;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->_navMeshRefresh,(void *)0x0);
    bVar7 = false;
  }
  else {
    pUVar9 = (__this->fields)._delay_5__2;
    (__this->fields).__2__current = (Il2CppObject *)pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pUVar9);
    (__this->fields).__1__state = 1;
    bVar7 = true;
  }
  return bVar7;
}


// Map.MapLoader.<RefreshNavMesh>d__55$$<>m__Finally1
// il2cpp: void Map_MapLoader__RefreshNavMesh_d__55____m__Finally1 (Map_MapLoader__RefreshNavMesh_d__55_o* __this, const MethodInfo* method);
// 0x181eb9720

void Map_MapLoader__RefreshNavMesh_d__55____m__Finally1
               (Map_MapLoader__RefreshNavMesh_d__55_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843450d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_Dispose);
    Il2CppMethodInitialized_1843450d7 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap3,
             MethodInfo_System_Collections_Generic_List_Enumerator_AsyncOperation_Dispose);
  return;
}


// Map.MapLoader.<RefreshNavMesh>d__55$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Map_MapLoader__RefreshNavMesh_d__55__System_Collections_Generic_IEnumerator_System_Object__get_Current (Map_MapLoader__RefreshNavMesh_d__55_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Map_MapLoader__RefreshNavMesh_d__55__System_Collections_Generic_IEnumerator_System_Object__get_Current(Map_MapLoader__RefreshNavMesh_d__55_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Map.MapLoader.<RefreshNavMesh>d__55$$System.Collections.IEnumerator.Reset
// il2cpp: void Map_MapLoader__RefreshNavMesh_d__55__System_Collections_IEnumerator_Reset (Map_MapLoader__RefreshNavMesh_d__55_o* __this, const MethodInfo* method);
// 0x181eb9650

void Map_MapLoader__RefreshNavMesh_d__55__System_Collections_IEnumerator_Reset
               (Map_MapLoader__RefreshNavMesh_d__55_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Map_MapLoader_RefreshNavMesh_d__55_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Map.MapLoader.<RefreshNavMesh>d__55$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Map_MapLoader__RefreshNavMesh_d__55__System_Collections_IEnumerator_get_Current (Map_MapLoader__RefreshNavMesh_d__55_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Map_MapLoader__RefreshNavMesh_d__55__System_Collections_IEnumerator_get_Current(Map_MapLoader__RefreshNavMesh_d__55_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Map.MapLoader.<UpdateAllNavMeshes>d__59$$MoveNext
// il2cpp: void Map_MapLoader__UpdateAllNavMeshes_d__59__MoveNext (Map_MapLoader__UpdateAllNavMeshes_d__59_o __this, const MethodInfo* method);
// 0x181eba3a0
// eh: try 0x181eba407..0x181eba69a -> pad 0x18333d950 (+2 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 52 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eba620: lea rcx, [rbx + 8]
// asm:   0x181eba624: mov r9, qword ptr [rip + 0x2230f8d]  ; MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TaskAwaiter_MapLoa
// asm:   0x181eba62b: mov r8, rbx
// asm:   0x181eba62e: lea rdx, [rsp + 0xc0]
// asm:   0x181eba636: call 0x180617f60  ; System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted_TaskAwaiter__MapLoader__UpdateAllNavMeshes_d__59_()
// asm:   0x181eba63b: nop 
// asm:   0x181eba63c: jmp 0x181eba5dd
// asm:   0x181eba63e: mov rbx, qword ptr [rsp + 0xb0]
// asm:   0x181eba646: mov dword ptr [rbx], 0xfffffffe
// asm:   0x181eba64c: lea rcx, [rip + 0x221077d]  ; TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder
// asm:   0x181eba653: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181eba658: cmp dword ptr [rax + 0xe4], 0
// asm:   0x181eba65f: jne 0x181eba669
// asm:   0x181eba661: mov rcx, rax
// asm:   0x181eba664: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x181eba669: lea rcx, [rbx + 8]
// asm:   0x181eba66d: xor r8d, r8d
// asm:   0x181eba670: mov rdx, qword ptr [rsp + 0x88]
// asm:   0x181eba678: call 0x181a28940  ; System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetException()
// asm:   0x181eba67d: mov rbx, qword ptr [rsp + 0xb8]
// asm:   0x181eba685: add rsp, 0xa0
// asm:   0x181eba68c: pop rdi
// asm:   0x181eba68d: ret 
// asm:   0x18333d950: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d955: push rbx
// asm:   0x18333d956: push rbp
// asm:   0x18333d957: push rdi
// asm:   0x18333d958: sub rsp, 0x20
// asm:   0x18333d95c: mov rbp, rdx
// asm:   0x18333d95f: mov rdi, qword ptr [rbp + 0x80]
// asm:   0x18333d966: mov rax, qword ptr [rdi]
// asm:   0x18333d969: mov rbx, qword ptr [rax]
// asm:   0x18333d96c: lea rcx, [rip + 0xd3b5e5]  ; TypeInfo_System_Exception
// asm:   0x18333d973: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333d978: mov rcx, rax
// asm:   0x18333d97b: mov rdx, rbx
// asm:   0x18333d97e: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333d983: test al, al
// asm:   0x18333d985: mov rax, qword ptr [rdi]
// asm:   0x18333d988: je 0x18333d99d
// asm:   0x18333d98a: mov qword ptr [rbp + 0x88], rax
// asm:   0x18333d991: movabs rax, 0
// asm:   0x18333d99b: jmp 0x18333d9b2
// asm:   0x18333d99d: mov qword ptr [rbp + 0x20], rax
// asm:   0x18333d9a1: lea rdx, [rip + 0xc9e5e0]
// asm:   0x18333d9a8: lea rcx, [rbp + 0x20]
// asm:   0x18333d9ac: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333d9b2: add rsp, 0x20
// asm:   0x18333d9b6: pop rdi
// asm:   0x18333d9b7: pop rbp
// asm:   0x18333d9b8: pop rbx
// asm:   0x18333d9b9: ret 

void Map_MapLoader__UpdateAllNavMeshes_d__59__MoveNext
               (Map_MapLoader__UpdateAllNavMeshes_d__59_o *__this,MethodInfo *method)

{
  Map_MapLoader_o *value;
  bool bVar1;
  UnityEngine_Bounds_o *pUVar2;
  System_Threading_Tasks_Task_o *__this_00;
  MethodInfo *in_R8;
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_TResult__o local_res18;
  Map_MapLoader__GenerateNavMesh_d__60_Fields local_78;
  UnityEngine_Bounds_o local_20;
  
  if (Il2CppMethodInitialized_1843450d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TaskAwaiter_MapLoa
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843450d8 = '\x01';
  }
  local_res18.fields.m_task = (System_Threading_Tasks_Task_TResult__o *)0x0;
  value = (__this->fields).__4__this;
  if ((__this->fields).__1__state == 0) {
    local_res18.fields.m_task =
         (System_Threading_Tasks_Task_TResult__o *)(__this->fields).__u__1.fields.m_task;
    (__this->fields).__u__1.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
    (__this->fields).__1__state = -1;
  }
  else {
    UnityEngine_AI_NavMesh__RemoveAllNavMeshData((MethodInfo *)0x0);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    TypeInfo_Map_MapLoader->static_fields->_hasNavMeshData = false;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (!bVar1) goto label_181eba5b7;
    if (value == (Map_MapLoader_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (Il2CppMethodInitialized_1843450b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start_MapLoader_GenerateNavMesh_d__60
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
      Il2CppMethodInitialized_1843450b7 = '\x01';
    }
    local_78.__1__state = 0;
    local_78._4_4_ = 0;
    local_78.__t__builder.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
         (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
    local_78.__t__builder.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
         (System_Action_o *)0x0;
    local_78.__t__builder.fields.m_builder.fields.m_task = (System_Threading_Tasks_Task_TResult__o *)0x0;
    local_78.__4__this = (Map_MapLoader_o *)0x0;
    local_78.__7__wrap1.fields._list = (System_Collections_Generic_List_T__o *)0x0;
    local_78.__7__wrap1.fields._index = 0;
    local_78.__7__wrap1.fields._version = 0;
    local_78.__7__wrap1.fields._current = (UnityEngine_AsyncOperation_o *)0x0;
    local_78.__u__1.fields._awaited = (UnityEngine_Awaitable_Awaiter_Fields)(UnityEngine_Awaitable_o *)0x0;
    if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
    }
    pUVar2 = TMPro_TMP_Text__GetCompoundBounds(&local_20,(TMPro_TMP_Text_o *)0x0,in_R8);
    local_78.__t__builder.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
         *(System_Runtime_CompilerServices_IAsyncStateMachine_o **)&(pUVar2->fields).m_Center.fields;
    local_78.__t__builder.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
         *(System_Action_o **)&(pUVar2->fields).m_Center.fields.z;
    local_78.__t__builder.fields.m_builder.fields.m_task =
         *(System_Threading_Tasks_Task_TResult__o **)&(pUVar2->fields).m_Extents.fields.y;
    Il2CppCodeGenWriteBarrier((void **)&local_78.__t__builder,(void *)0x0);
    local_78.__4__this = value;
    Il2CppCodeGenWriteBarrier(&local_78.__4__this,value);
    local_78.__1__state = -1;
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_MapLoader__GenerateNavMesh_d__60_
              (&local_78.__t__builder,(Map_MapLoader__GenerateNavMesh_d__60_o *)&local_78,
               (MethodInfo_619830 *)
               MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start_MapLoader_GenerateNavMesh_d__60
              );
    __this_00 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task
                          (&local_78.__t__builder,(MethodInfo *)0x0);
    if (__this_00 == (System_Threading_Tasks_Task_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_res18.fields.m_task =
         (System_Threading_Tasks_Task_TResult__o *)
         UnityEngine_ParticleSystem__get_noise((UnityEngine_ParticleSystem_o *)__this_00,(MethodInfo *)0x0);
    bVar1 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted
                      (&local_res18,(MethodInfo_D25160 *)0x0);
    if (!bVar1) {
      (__this->fields).__1__state = 0;
      (__this->fields).__u__1.fields.m_task = (System_Threading_Tasks_Task_o *)local_res18.fields.m_task;
      Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__u__1,(void *)0x0);
      if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted_TaskAwaiter__MapLoader__UpdateAllNavMeshes_d__59_
                (&(__this->fields).__t__builder,(System_Runtime_CompilerServices_TaskAwaiter_o *)&local_res18,
                 __this,(MethodInfo_617F60 *)
                        MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TaskAwaiter_MapLoa
                );
      return;
    }
  }
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            ((System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_o *)&local_res18,
             (MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  TypeInfo_Map_MapLoader->static_fields->_hasNavMeshData = true;
label_181eba5b7:
  (__this->fields).__1__state = -2;
  if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult
            (&(__this->fields).__t__builder,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader.<UpdateAllNavMeshes>d__59$$SetStateMachine
// il2cpp: void Map_MapLoader__UpdateAllNavMeshes_d__59__SetStateMachine (Map_MapLoader__UpdateAllNavMeshes_d__59_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x181eba6a0

void Map_MapLoader__UpdateAllNavMeshes_d__59__SetStateMachine
               (Map_MapLoader__UpdateAllNavMeshes_d__59_o *__this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843450d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
    Il2CppMethodInitialized_1843450d9 = '\x01';
  }
  if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetStateMachine
            (&(__this->fields).__t__builder,stateMachine,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader.<UpdateNavMesh>d__58$$MoveNext
// il2cpp: void Map_MapLoader__UpdateNavMesh_d__58__MoveNext (Map_MapLoader__UpdateNavMesh_d__58_o __this, const MethodInfo* method);
// 0x181eba700
// eh: try 0x181eba757..0x181eba97f -> pad 0x1833197a0 (+2 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 52 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eba908: lea rcx, [rbx + 8]
// asm:   0x181eba90c: mov r9, qword ptr [rip + 0x2230d85]  ; MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TaskAwaiter_MapLoa_40eb698
// asm:   0x181eba913: mov r8, rbx
// asm:   0x181eba916: lea rdx, [rsp + 0xa0]
// asm:   0x181eba91e: call 0x180617fd0  ; System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted_TaskAwaiter__MapLoader__UpdateNavMesh_d__58_()
// asm:   0x181eba923: nop 
// asm:   0x181eba924: jmp 0x181eba8c5
// asm:   0x181eba926: mov rbx, qword ptr [rsp + 0x90]
// asm:   0x181eba92e: mov dword ptr [rbx], 0xfffffffe
// asm:   0x181eba934: lea rcx, [rip + 0x2210495]  ; TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder
// asm:   0x181eba93b: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181eba940: cmp dword ptr [rax + 0xe4], 0
// asm:   0x181eba947: jne 0x181eba951
// asm:   0x181eba949: mov rcx, rax
// asm:   0x181eba94c: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x181eba951: lea rcx, [rbx + 8]
// asm:   0x181eba955: xor r8d, r8d
// asm:   0x181eba958: mov rdx, qword ptr [rsp + 0x30]
// asm:   0x181eba95d: call 0x181a28940  ; System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetException()
// asm:   0x181eba962: mov rbx, qword ptr [rsp + 0x98]
// asm:   0x181eba96a: add rsp, 0x80
// asm:   0x181eba971: pop rdi
// asm:   0x181eba972: ret 
// asm:   0x1833197a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833197a5: push rbx
// asm:   0x1833197a6: push rbp
// asm:   0x1833197a7: push rdi
// asm:   0x1833197a8: sub rsp, 0x20
// asm:   0x1833197ac: mov rbp, rdx
// asm:   0x1833197af: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x1833197b3: mov rax, qword ptr [rdi]
// asm:   0x1833197b6: mov rbx, qword ptr [rax]
// asm:   0x1833197b9: lea rcx, [rip + 0xd5f798]  ; TypeInfo_System_Exception
// asm:   0x1833197c0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1833197c5: mov rcx, rax
// asm:   0x1833197c8: mov rdx, rbx
// asm:   0x1833197cb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x1833197d0: test al, al
// asm:   0x1833197d2: mov rax, qword ptr [rdi]
// asm:   0x1833197d5: je 0x1833197e7
// asm:   0x1833197d7: mov qword ptr [rbp + 0x30], rax
// asm:   0x1833197db: movabs rax, 0
// asm:   0x1833197e5: jmp 0x1833197fc
// asm:   0x1833197e7: mov qword ptr [rbp + 0x20], rax
// asm:   0x1833197eb: lea rdx, [rip + 0xcc2796]
// asm:   0x1833197f2: lea rcx, [rbp + 0x20]
// asm:   0x1833197f6: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833197fc: add rsp, 0x20
// asm:   0x183319800: pop rdi
// asm:   0x183319801: pop rbp
// asm:   0x183319802: pop rbx
// asm:   0x183319803: ret 

void Map_MapLoader__UpdateNavMesh_d__58__MoveNext
               (Map_MapLoader__UpdateNavMesh_d__58_o *__this,MethodInfo *method)

{
  Map_MapLoader_o *value;
  bool bVar1;
  UnityEngine_Bounds_o *pUVar2;
  System_Threading_Tasks_Task_o *__this_00;
  MethodInfo *in_R8;
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_TResult__o local_res18;
  UnityEngine_Bounds_o local_58;
  Map_MapLoader__UpdateAllNavMeshes_d__59_Fields local_40;
  
  if (Il2CppMethodInitialized_1843450da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TaskAwaiter_MapLoa_40eb698
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_1843450da = '\x01';
  }
  local_res18.fields.m_task = (System_Threading_Tasks_Task_TResult__o *)0x0;
  if ((__this->fields).__1__state == 0) {
    local_res18.fields.m_task =
         (System_Threading_Tasks_Task_TResult__o *)(__this->fields).__u__1.fields.m_task;
    (__this->fields).__u__1.fields.m_task = (System_Threading_Tasks_Task_o *)0x0;
    (__this->fields).__1__state = -1;
  }
  else {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    value = TypeInfo_Map_MapLoader->static_fields->_instance;
    if (value == (Map_MapLoader_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (Il2CppMethodInitialized_1843450b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start_MapLoader_UpdateAllNavMeshes_d__59
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
      Il2CppMethodInitialized_1843450b6 = '\x01';
    }
    local_40.__1__state = 0;
    local_40._4_4_ = 0;
    local_40.__t__builder.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
         (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
    local_40.__t__builder.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
         (System_Action_o *)0x0;
    local_40.__t__builder.fields.m_builder.fields.m_task = (System_Threading_Tasks_Task_TResult__o *)0x0;
    local_40.__4__this = (Map_MapLoader_o *)0x0;
    local_40.__u__1.fields.m_task =
         (System_Runtime_CompilerServices_TaskAwaiter_Fields)(System_Threading_Tasks_Task_o *)0x0;
    if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
    }
    pUVar2 = TMPro_TMP_Text__GetCompoundBounds(&local_58,(TMPro_TMP_Text_o *)0x0,in_R8);
    local_40.__t__builder.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
         *(System_Runtime_CompilerServices_IAsyncStateMachine_o **)&(pUVar2->fields).m_Center.fields;
    local_40.__t__builder.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
         *(System_Action_o **)&(pUVar2->fields).m_Center.fields.z;
    local_40.__t__builder.fields.m_builder.fields.m_task =
         *(System_Threading_Tasks_Task_TResult__o **)&(pUVar2->fields).m_Extents.fields.y;
    Il2CppCodeGenWriteBarrier((void **)&local_40.__t__builder,(void *)0x0);
    local_40.__4__this = value;
    Il2CppCodeGenWriteBarrier(&local_40.__4__this,value);
    local_40.__1__state = -1;
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_MapLoader__UpdateAllNavMeshes_d__59_
              (&local_40.__t__builder,(Map_MapLoader__UpdateAllNavMeshes_d__59_o *)&local_40,
               (MethodInfo_61B4B0 *)
               MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start_MapLoader_UpdateAllNavMeshes_d__59
              );
    __this_00 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task
                          (&local_40.__t__builder,(MethodInfo *)0x0);
    if (__this_00 == (System_Threading_Tasks_Task_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_res18.fields.m_task =
         (System_Threading_Tasks_Task_TResult__o *)
         UnityEngine_ParticleSystem__get_noise((UnityEngine_ParticleSystem_o *)__this_00,(MethodInfo *)0x0);
    bVar1 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted
                      (&local_res18,(MethodInfo_D25160 *)0x0);
    if (!bVar1) {
      (__this->fields).__1__state = 0;
      (__this->fields).__u__1.fields.m_task = (System_Threading_Tasks_Task_o *)local_res18.fields.m_task;
      Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__u__1,(void *)0x0);
      if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__AwaitUnsafeOnCompleted_TaskAwaiter__MapLoader__UpdateNavMesh_d__58_
                (&(__this->fields).__t__builder,(System_Runtime_CompilerServices_TaskAwaiter_o *)&local_res18,
                 __this,(MethodInfo_617FD0 *)
                        MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TaskAwaiter_MapLoa_40eb698
                );
      return;
    }
  }
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            ((System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_o *)&local_res18,
             (MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult
            (&(__this->fields).__t__builder,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader.<UpdateNavMesh>d__58$$SetStateMachine
// il2cpp: void Map_MapLoader__UpdateNavMesh_d__58__SetStateMachine (Map_MapLoader__UpdateNavMesh_d__58_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x181eba980

void Map_MapLoader__UpdateNavMesh_d__58__SetStateMachine
               (Map_MapLoader__UpdateNavMesh_d__58_o *__this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843450db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
    Il2CppMethodInitialized_1843450db = '\x01';
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
// 0x181eb28b0

bool Map_MapLoader__get_HasNavMesh(MethodInfo *method)

{
  System_Collections_Generic_List_Bounds__o *pSVar1;
  
  if (Il2CppMethodInitialized_18434509c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Bounds_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_18434509c = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  if (TypeInfo_Map_MapLoader->static_fields->_hasNavMeshData == false) {
    return false;
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar1 = TypeInfo_Map_MapLoader->static_fields->_navMeshBounds;
  if (pSVar1 != (System_Collections_Generic_List_Bounds__o *)0x0) {
    return 0 < (pSVar1->fields)._size;
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$Init
// il2cpp: void Map_MapLoader__Init (const MethodInfo* method);
// 0x181eabee0

void Map_MapLoader__Init(MethodInfo *method)

{
  Map_MapLoader_o *value;
  Events_OnPreLoadScene_o *value_00;
  Map_MapScriptBasicMaterial_o *__this;
  Utility_Color255_o *__this_00;
  
  if (Il2CppMethodInitialized_18434509d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapLoader_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptBasicMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_SingletonFactory_CreateSingleton_MapLoader)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"Transparent");
    Il2CppMethodInitialized_18434509d = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  value = Utility_SingletonFactory__CreateSingleton_object_
                    ((Il2CppObject *)TypeInfo_Map_MapLoader->static_fields->_instance,
                     (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_MapLoader);
  TypeInfo_Map_MapLoader->static_fields->_instance = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->_instance,value);
  value_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnPreLoadScene);
  Events_OnPreLoadScene___ctor
            ((UnityEngine_AudioClip_PCMSetPositionCallback_o *)value_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Map_MapLoader_OnPreLoadScene,(MethodInfo *)0x0);
  Events_EventManager__add_OnPreLoadScene(value_00,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial);
  Map_MapScriptBasicMaterial___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Map_MapScriptBasicMaterial_o *)0x0) {
    (__this->fields).Shader = "Transparent";
    Il2CppCodeGenWriteBarrier(&(__this->fields).Shader,"Transparent");
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    Utility_Color255___ctor
              ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)__this_00,0x7e,0xff,0xff,0x50,
               (MethodInfo *)0x0);
    (__this->fields).Color = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Color,__this_00);
    TypeInfo_Map_MapLoader->static_fields->_invisibleMaterial = __this;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->_invisibleMaterial,__this);
    return;
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$OnPreLoadScene
// il2cpp: void Map_MapLoader__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x181ead670

void Map_MapLoader__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  Map_MapLoader_o *__this;
  
  if (Il2CppMethodInitialized_18434509e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_CameraOcclusion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_18434509e = '\x01';
  }
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  Cameras_CameraOcclusion__Reset((MethodInfo *)0x0);
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  Map_MapDestruction__Reset((MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = TypeInfo_Map_MapLoader->static_fields->_instance;
  if (__this != (Map_MapLoader_o *)0x0) {
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    TypeInfo_Map_MapLoader->static_fields->HasWeather = false;
    TypeInfo_Map_MapLoader->static_fields->Weather = (Settings_WeatherSet_o *)0x0;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->Weather,(void *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$GetNextObjectId
// il2cpp: int32_t Map_MapLoader__GetNextObjectId (const MethodInfo* method);
// 0x181eabd60

int32_t Map_MapLoader__GetNextObjectId(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434509f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_18434509f = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  TypeInfo_Map_MapLoader->static_fields->HighestObjectId =
       TypeInfo_Map_MapLoader->static_fields->HighestObjectId + 1;
  return TypeInfo_Map_MapLoader->static_fields->HighestObjectId;
}


// Map.MapLoader$$StartLoadObjects
// il2cpp: void Map_MapLoader__StartLoadObjects (System_Collections_Generic_List_string__o* customAssets, System_Collections_Generic_List_MapScriptBaseObject__o* objects, Map_MapScriptOptions_o* options, Settings_WeatherSet_o* weather, bool editor, const MethodInfo* method);
// 0x181eb0b80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eb103f: mov ebx, r12d

void Map_MapLoader__StartLoadObjects
               (System_Collections_Generic_List_string__o *customAssets,
               System_Collections_Generic_List_MapScriptBaseObject__o *objects,Map_MapScriptOptions_o *options
               ,Settings_WeatherSet_o *weather,bool editor,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  int length;
  Map_MapLoader_o *pMVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_Collections_Generic_Dictionary_string__Material__o *__this;
  System_Collections_Generic_Dictionary_string__List_Material___o *pSVar5;
  System_Collections_Generic_Dictionary_int__HashSet_int___o *__this_00;
  System_Collections_Generic_Dictionary_int__MapObject__o *__this_01;
  System_Collections_Generic_Dictionary_GameObject__MapObject__o *__this_02;
  System_Collections_Generic_List_int__o *pSVar6;
  System_Collections_Generic_List_Light__o *pSVar7;
  System_Collections_Generic_List_MapLight__o *pSVar8;
  System_Collections_Generic_List_MapTargetable__o *pSVar9;
  System_Collections_Generic_Dictionary_string__Object__o *__this_03;
  System_Collections_Generic_Dictionary_string__List_MapObject___o *__this_04;
  System_Collections_Generic_Dictionary_MapObject__HashSet_string___o *__this_05;
  Map_MapLoader__LoadObjectsCoroutine_d__47_o *routine;
  char cVar10;
  
  if (Il2CppMethodInitialized_1843450a0 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Light_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapTargetable_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapLight_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_1843450a0 = '\x01';
  }
  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
  }
  Cameras_CameraOcclusion__Reset((MethodInfo *)0x0);
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  Map_MapDestruction__Reset((MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  if (Il2CppMethodInitialized_1843450b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_1843450b4 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  if (TypeInfo_Map_MapLoader->static_fields->_navMeshRefresh != (UnityEngine_Coroutine_o *)0x0) {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pMVar3 = TypeInfo_Map_MapLoader->static_fields->_instance;
    if (pMVar3 == (Map_MapLoader_o *)0x0) goto label_181eb115d;
    UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
              ((UnityEngine_MonoBehaviour_o *)pMVar3,TypeInfo_Map_MapLoader->static_fields->_navMeshRefresh,
               (MethodInfo *)0x0);
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  TypeInfo_Map_MapLoader->static_fields->_navMeshRefresh = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->_navMeshRefresh,(void *)0x0);
  TypeInfo_Map_MapLoader->static_fields->_navMeshRefreshPending = false;
  pSVar4 = TypeInfo_Map_MapLoader->static_fields->Errors;
  if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
    iVar2 = (pSVar4->fields)._size;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    cVar10 = '\0';
    (pSVar4->fields)._size = 0;
    if (0 < iVar2) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    __this = TypeInfo_Map_MapLoader->static_fields->_customMaterialCache;
    if (__this != (System_Collections_Generic_Dictionary_string__Material__o *)0x0) {
      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                 (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_Clear)
      ;
      pSVar5 = TypeInfo_Map_MapLoader->static_fields->_defaultMaterialCache;
      if (pSVar5 != (System_Collections_Generic_Dictionary_string__List_Material___o *)0x0) {
        System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                   (MethodInfo_13BF1C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_Clear);
        pSVar5 = TypeInfo_Map_MapLoader->static_fields->_assetMaterialCache;
        if (pSVar5 != (System_Collections_Generic_Dictionary_string__List_Material___o *)0x0) {
          System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                     (MethodInfo_13BF1C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_Clear);
          __this_00 = TypeInfo_Map_MapLoader->static_fields->IdToChildren;
          if (__this_00 != (System_Collections_Generic_Dictionary_int__HashSet_int___o *)0x0) {
            System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (MethodInfo_13BF1C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_Clear);
            __this_01 = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (__this_01 != (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) {
              System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                         (MethodInfo_13BF1C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_Clear);
              __this_02 = TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
              if (__this_02 != (System_Collections_Generic_Dictionary_GameObject__MapObject__o *)0x0) {
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                           (MethodInfo_13BF1C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_Clear);
                pSVar6 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
                if (pSVar6 != (System_Collections_Generic_List_int__o *)0x0) {
                  piVar1 = &(pSVar6->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  (pSVar6->fields)._size = 0;
                  pSVar7 = TypeInfo_Map_MapLoader->static_fields->Daylight;
                  if (pSVar7 != (System_Collections_Generic_List_Light__o *)0x0) {
                    iVar2 = (pSVar7->fields)._size;
                    piVar1 = &(pSVar7->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    (pSVar7->fields)._size = 0;
                    if (0 < iVar2) {
                      System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,iVar2,(MethodInfo *)0x0)
                      ;
                    }
                    pSVar8 = TypeInfo_Map_MapLoader->static_fields->MapLights;
                    if (pSVar8 != (System_Collections_Generic_List_MapLight__o *)0x0) {
                      iVar2 = (pSVar8->fields)._size;
                      piVar1 = &(pSVar8->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      (pSVar8->fields)._size = 0;
                      if (0 < iVar2) {
                        System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar2,
                                            (MethodInfo *)0x0);
                      }
                      pSVar9 = TypeInfo_Map_MapLoader->static_fields->MapTargetables;
                      if (pSVar9 != (System_Collections_Generic_List_MapTargetable__o *)0x0) {
                        length = (pSVar9->fields)._size;
                        piVar1 = &(pSVar9->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        (pSVar9->fields)._size = 0;
                        if (0 < length) {
                          System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,length,
                                              (MethodInfo *)0x0);
                        }
                        __this_03 = TypeInfo_Map_MapLoader->static_fields->_assetCache;
                        if (__this_03 != (System_Collections_Generic_Dictionary_string__Object__o *)0x0) {
                          System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
                                     (MethodInfo_13BF1C0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_Object_Clear);
                          __this_04 = TypeInfo_Map_MapLoader->static_fields->Tags;
                          if (__this_04 !=
                              (System_Collections_Generic_Dictionary_string__List_MapObject___o *)0x0) {
                            System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04,
                                       (MethodInfo_13BF1C0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_Clear
                                      );
                            __this_05 = TypeInfo_Map_MapLoader->static_fields->MapObjectToTags;
                            if (__this_05 !=
                                (System_Collections_Generic_Dictionary_MapObject__HashSet_string___o *)0x0) {
                              System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_05,
                                         (MethodInfo_13BF1C0 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_Clear
                                        );
                              TypeInfo_Map_MapLoader->static_fields->HighestObjectId = 1;
                              if ((!editor) && (options != (Map_MapScriptOptions_o *)0x0)) {
                                cVar10 = (options->fields).HasWeather;
                              }
                              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                              }
                              TypeInfo_Map_MapLoader->static_fields->HasWeather = cVar10 != '\0';
                              TypeInfo_Map_MapLoader->static_fields->Weather = weather;
                              Il2CppCodeGenWriteBarrier
                                        (&TypeInfo_Map_MapLoader->static_fields->Weather,weather);
                              pMVar3 = TypeInfo_Map_MapLoader->static_fields->_instance;
                              if (pMVar3 != (Map_MapLoader_o *)0x0) {
                                if (Il2CppMethodInitialized_1843450ac == '\0') {
                                  il2cpp_codegen_initialize_runtime_metadata
                                            (&TypeInfo_Map_MapLoader_LoadObjectsCoroutine_d__47);
                                  Il2CppMethodInitialized_1843450ac = '\x01';
                                }
                                routine = il2cpp_codegen_object_new
                                                    ((Il2CppClass *)
                                                     TypeInfo_Map_MapLoader_LoadObjectsCoroutine_d__47);
                                System_Object___ctor
                                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)
                                           routine,(MethodInfo *)0x0);
                                (routine->fields).__1__state = 0;
                                (routine->fields).__4__this = pMVar3;
                                Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,pMVar3);
                                (routine->fields).customAssets = customAssets;
                                Il2CppCodeGenWriteBarrier(&(routine->fields).customAssets,customAssets);
                                (routine->fields).objects = objects;
                                Il2CppCodeGenWriteBarrier(&(routine->fields).objects,objects);
                                (routine->fields).editor = editor;
                                UnityEngine_MonoBehaviour__StartCoroutine_Auto
                                          ((UnityEngine_MonoBehaviour_o *)pMVar3,
                                           (System_Collections_IEnumerator_o *)routine,(MethodInfo *)0x0);
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
label_181eb115d:
  ThrowNullReferenceException();
}


// Map.MapLoader$$RegisterMapLight
// il2cpp: Map_MapLight_o* Map_MapLoader__RegisterMapLight (UnityEngine_Light_o* light, bool isDaylight, const MethodInfo* method);
// 0x181ead7c0

Map_MapLight_o *
Map_MapLoader__RegisterMapLight(UnityEngine_Light_o *light,bool isDaylight,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_MapLight__o *__this;
  Map_MapLight_array *pMVar3;
  MethodInfo *pMVar4;
  Map_MapLight_o *item;
  UnityEngine_Transform_o *value;
  float fVar5;
  
  if (Il2CppMethodInitialized_1843450a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapLight_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLight);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_1843450a1 = '\x01';
  }
  item = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapLight);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)item,(MethodInfo *)0x0);
  (item->fields).Light = light;
  Il2CppCodeGenWriteBarrier(&(item->fields).Light,light);
  if (light != (UnityEngine_Light_o *)0x0) {
    fVar5 = UnityEngine_Light__get_intensity(light,(MethodInfo *)0x0);
    (item->fields).MaxIntensity = fVar5;
    value = UnityEngine_Component__get_transform((UnityEngine_Component_o *)light,(MethodInfo *)0x0);
    (item->fields)._transform = value;
    Il2CppCodeGenWriteBarrier(&(item->fields)._transform,value);
    (item->fields)._isDaylight = isDaylight;
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
        if ((uint)pMVar3->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                     (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
          return item;
        }
        (__this->fields)._size = uVar2 + 1;
        if (uVar2 < (uint)pMVar3->max_length) {
          pMVar3->m_Items[(int)uVar2] = item;
          Il2CppCodeGenWriteBarrier(pMVar3->m_Items + (int)uVar2,item);
          return item;
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$FindObjectFromCollider
// il2cpp: Map_MapObject_o* Map_MapLoader__FindObjectFromCollider (UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x181eaadc0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eaae55: test rbx, rbx
// asm:   0x181eaae5e: nop 
// asm:   0x181eaaefe: jmp 0x181eaae60

Map_MapObject_o * Map_MapLoader__FindObjectFromCollider(UnityEngine_Collider_o *collider,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_GameObject__MapObject__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *key;
  UnityEngine_Transform_o *x;
  Map_MapObject_o *pMVar2;
  
  if (Il2CppMethodInitialized_1843450a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_1843450a2 = '\x01';
  }
  if (collider != (UnityEngine_Collider_o *)0x0) {
    __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    if (Il2CppMethodInitialized_1843450a3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Item);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_1843450a3 = '\x01';
    }
    for (; __this_01 != (UnityEngine_Transform_o *)0x0;
        __this_01 = UnityEngine_Transform__GetParent(__this_01,(MethodInfo *)0x0)) {
      key = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this = TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
      if (__this == (System_Collections_Generic_Dictionary_GameObject__MapObject__o *)0x0) break;
      bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)key,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey);
      if (bVar1) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                    TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
        if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pMVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (__this_00,(Il2CppObject *)key,
                              (MethodInfo_147A5B0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Item);
          return pMVar2;
        }
        break;
      }
      if (__this_01 == (UnityEngine_Transform_o *)0x0) break;
      x = UnityEngine_Transform__GetParent(__this_01,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        return (Map_MapObject_o *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$FindObjectFromTransform
// il2cpp: Map_MapObject_o* Map_MapLoader__FindObjectFromTransform (UnityEngine_Transform_o* current, const MethodInfo* method);
// 0x181eaaf60
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eaafa9: mov qword ptr [rsp + 0x30], rdi
// asm:   0x181eaafae: test rbx, rbx
// asm:   0x181eaafb7: nop word ptr [rax + rax]
// asm:   0x181eab05e: jmp 0x181eaafc0

Map_MapObject_o * Map_MapLoader__FindObjectFromTransform(UnityEngine_Transform_o *current,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_GameObject__MapObject__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  UnityEngine_GameObject_o *key;
  UnityEngine_Transform_o *x;
  Map_MapObject_o *pMVar2;
  
  if (Il2CppMethodInitialized_1843450a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843450a3 = '\x01';
  }
  do {
    if (current == (UnityEngine_Transform_o *)0x0) {
label_181eab0b8:
      ThrowNullReferenceException();
    }
    key = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current,(MethodInfo *)0x0);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this = TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
    if (__this == (System_Collections_Generic_Dictionary_GameObject__MapObject__o *)0x0) goto label_181eab0b8;
    bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)key,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey);
    if (bVar1) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pMVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (__this_00,(Il2CppObject *)key,
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Item);
        return pMVar2;
      }
      goto label_181eab0b8;
    }
    if (current == (UnityEngine_Transform_o *)0x0) goto label_181eab0b8;
    x = UnityEngine_Transform__GetParent(current,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return (Map_MapObject_o *)0x0;
    }
    current = UnityEngine_Transform__GetParent(current,(MethodInfo *)0x0);
  } while( true );
}


// Map.MapLoader$$LoadObject
// il2cpp: Map_MapObject_o* Map_MapLoader__LoadObject (Map_MapScriptBaseObject_o* scriptObject, bool editor, const MethodInfo* method);
// 0x181eac4e0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eaccc5: xor r8d, r8d
// asm:   0x181eaccc8: mov dl, 1
// asm:   0x181eaccca: mov rcx, rbx
// asm:   0x181eacccd: call 0x18234c240  ; ApplicationManagers_DebugConsole__Log()
// asm:   0x181eaccd2: jmp 0x181eacc65

Map_MapObject_o *
Map_MapLoader__LoadObject(Map_MapScriptBaseObject_o *scriptObject,bool editor,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int32_t iVar5;
  int iVar6;
  float fVar7;
  UnityEngine_GameObject_o *pUVar8;
  Map_MapScriptBaseObject_o *pMVar9;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar10;
  System_Collections_Generic_Dictionary_int__object__o *pSVar11;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_List_int__o *__this_00;
  UnityEngine_Object_o *__this_01;
  bool bVar12;
  UnityEngine_GameObject_o *pUVar13;
  Map_MapObject_o *value;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_02;
  UnityEngine_Collider_array *pUVar14;
  UnityEngine_Renderer_array *value_00;
  System_Collections_Generic_HashSet_int__o *pSVar15;
  UnityEngine_Transform_o *pUVar16;
  UnityEngine_Vector3_o *pUVar17;
  UnityEngine_Quaternion_o *pUVar18;
  System_String_o *pSVar19;
  int iVar20;
  UnityEngine_Quaternion_Fields local_38;
  UnityEngine_Quaternion_o local_28;
  
  if (Il2CppMethodInitialized_1843450a4 == '\0') {
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
    Il2CppMethodInitialized_1843450a4 = '\x01';
  }
  if (scriptObject != (Map_MapScriptBaseObject_o *)0x0) {
    pUVar13 = (UnityEngine_GameObject_o *)0x0;
    bVar4 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
    if ((bVar4 <= (scriptObject->klass->_2).typeHierarchyDepth) &&
       ((scriptObject->klass->_2).typeHierarchy[(ulonglong)bVar4 - 1] ==
        (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      bVar4 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
      if (((scriptObject->klass->_2).typeHierarchyDepth < bVar4) ||
         ((scriptObject->klass->_2).typeHierarchy[(ulonglong)bVar4 - 1] !=
          (Il2CppClass *)TypeInfo_Map_MapScriptSceneObject)) {
        il2cpp_codegen_raise_invalid_cast_exception(scriptObject);
      }
      pUVar13 = Map_MapLoader__LoadSceneObject
                          ((Map_MapScriptSceneObject_o *)scriptObject,editor,(MethodInfo *)0x0);
    }
    iVar5 = (scriptObject->fields).Parent;
    value = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapObject);
    if (Il2CppMethodInitialized_1843450ef == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Collections_Generic_List_CustomLogicComponentInstance);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Renderer_array);
      Il2CppMethodInitialized_1843450ef = '\x01';
    }
    __this_02 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_System_Collections_Generic_List_CustomLogicComponentInstance);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
               (MethodInfo_92A240 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_ctor);
    (value->fields).ComponentInstances = __this_02;
    Il2CppCodeGenWriteBarrier(&(value->fields).ComponentInstances,__this_02);
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)value,(MethodInfo *)0x0);
    (value->fields).Parent = iVar5;
    (value->fields).GameObject = pUVar13;
    Il2CppCodeGenWriteBarrier(&(value->fields).GameObject,pUVar13);
    (value->fields).ScriptObject = scriptObject;
    Il2CppCodeGenWriteBarrier(&(value->fields).ScriptObject,scriptObject);
    pUVar8 = (value->fields).GameObject;
    if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
      pUVar14 = (UnityEngine_Collider_array *)
                UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                          (pUVar8,(MethodInfo_6F5810 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
      (value->fields).colliderCache = pUVar14;
      Il2CppCodeGenWriteBarrier(&(value->fields).colliderCache,pUVar14);
      if ((scriptObject->fields).Static == false) {
        pUVar8 = (value->fields).GameObject;
        if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_181eaccd4;
        value_00 = (UnityEngine_Renderer_array *)
                   UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                             (pUVar8,(MethodInfo_6F5810 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
      }
      else {
        value_00 = (UnityEngine_Renderer_array *)SZArrayNew(TypeInfo_UnityEngine_Renderer_array,0);
      }
      (value->fields).renderCache = value_00;
      Il2CppCodeGenWriteBarrier(&(value->fields).renderCache,value_00);
      if ((value != (Map_MapObject_o *)0x0) &&
         (pMVar9 = (value->fields).ScriptObject, pMVar9 != (Map_MapScriptBaseObject_o *)0x0)) {
        iVar20 = (pMVar9->fields).Id;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        iVar6 = TypeInfo_Map_MapLoader->static_fields->HighestObjectId;
        if (iVar20 <= iVar6) {
          iVar20 = iVar6;
        }
        TypeInfo_Map_MapLoader->static_fields->HighestObjectId = iVar20;
        pSVar10 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                  TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar10 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
          bVar12 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                             (pSVar10,(scriptObject->fields).Id,
                              (MethodInfo_1407110 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
          if (bVar12) {
            pSVar19 = System_Int32__ToString(&(scriptObject->fields).Id,(MethodInfo *)0x0);
            pSVar19 = System_String__Concat_1969b70
                                ("Map load error: map object with duplicate ID found (",pSVar19,")",(MethodInfo *)0x0);
            if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
            }
            ApplicationManagers_DebugConsole__Log(pSVar19,true,(MethodInfo *)0x0);
            return value;
          }
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar11 = (System_Collections_Generic_Dictionary_int__object__o *)
                    TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar11 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            System_Collections_Generic_Dictionary_int__object___Add
                      (pSVar11,(scriptObject->fields).Id,(Il2CppObject *)value,
                       (MethodInfo_1415BA0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_Add);
            __this = (System_Collections_Generic_Dictionary_object__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
            if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this,(Il2CppObject *)pUVar13,(Il2CppObject *)value,
                         (MethodInfo_146B4B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_Add);
              __this_00 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
              if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
                bVar12 = System_Collections_Generic_List_int___Contains
                                   (__this_00,(scriptObject->fields).Id,
                                    (MethodInfo_91C120 *)
                                    MethodInfo_System_Collections_Generic_List_int_Contains);
                if (!bVar12) {
                  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                  }
                  if (TypeInfo_Map_MapLoader->static_fields->ObjectOrder ==
                      (System_Collections_Generic_List_int__o *)0x0) goto label_181eaccd4;
                  il2cpp_runtime_helper_180026690();
                }
                if (-1 < (scriptObject->fields).Parent) {
                  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                  }
                  pSVar10 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                            TypeInfo_Map_MapLoader->static_fields->IdToChildren;
                  if (pSVar10 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)
                  goto label_181eaccd4;
                  bVar12 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                                     (pSVar10,(scriptObject->fields).Parent,
                                      (MethodInfo_1407110 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey
                                     );
                  if (bVar12) {
                    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                    }
                    pSVar10 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                              TypeInfo_Map_MapLoader->static_fields->IdToChildren;
                    if ((pSVar10 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
                       (pSVar15 = (System_Collections_Generic_HashSet_int__o *)
                                  System_Collections_Generic_Dictionary_int__ulong___get_Item
                                            (pSVar10,(scriptObject->fields).Parent,
                                             (MethodInfo_14156F0 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item
                                            ), pSVar15 == (System_Collections_Generic_HashSet_int__o *)0x0))
                    goto label_181eaccd4;
                    System_Collections_Generic_HashSet_int___Add
                              (pSVar15,(scriptObject->fields).Id,
                               (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
                  }
                  else {
                    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                    }
                    iVar5 = (scriptObject->fields).Parent;
                    pSVar11 = (System_Collections_Generic_Dictionary_int__object__o *)
                              TypeInfo_Map_MapLoader->static_fields->IdToChildren;
                    pSVar15 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
                    System_Collections_Generic_HashSet_int____ctor
                              (pSVar15,(MethodInfo_176CDF0 *)
                                       MethodInfo_System_Collections_Generic_HashSet_int_ctor);
                    if ((pSVar15 == (System_Collections_Generic_HashSet_int__o *)0x0) ||
                       (System_Collections_Generic_HashSet_int___Add
                                  (pSVar15,(scriptObject->fields).Id,
                                   (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add
                                  ), pSVar11 == (System_Collections_Generic_Dictionary_int__object__o *)0x0))
                    goto label_181eaccd4;
                    System_Collections_Generic_Dictionary_int__object___Add
                              (pSVar11,iVar5,(Il2CppObject *)pSVar15,
                               (MethodInfo_1415BA0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_Add);
                  }
                }
                if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                }
                __this_01 = (UnityEngine_Object_o *)(value->fields).GameObject;
                if (__this_01 != (UnityEngine_Object_o *)0x0) {
                  pMVar9 = (value->fields).ScriptObject;
                  pUVar16 = UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
                  if (pMVar9 != (Map_MapScriptBaseObject_o *)0x0) {
                    UnityEngine_GameObject__set_isStatic
                              ((UnityEngine_GameObject_o *)__this_01,(pMVar9->fields).Static,(MethodInfo *)0x0
                              );
                    UnityEngine_Object__set_name(__this_01,(pMVar9->fields).Name,(MethodInfo *)0x0);
                    if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
                      pUVar17 = UnityEngine_Transform__get_localScale
                                          ((UnityEngine_Vector3_o *)&local_38,pUVar16,(MethodInfo *)0x0);
                      fVar1 = (pUVar17->fields).z;
                      fVar7 = (pUVar17->fields).x;
                      (value->fields).BaseScale.fields.y = (pUVar17->fields).y;
                      (value->fields).BaseScale.fields.z = fVar1;
                      (value->fields).BaseScale.fields.x = fVar7;
                      local_38.x = (pMVar9->fields).PositionX;
                      local_38.y = (pMVar9->fields).PositionY;
                      local_38.z = (pMVar9->fields).PositionZ;
                      UnityEngine_Transform__set_localPosition
                                (pUVar16,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
                      uVar2 = (pMVar9->fields).RotationX;
                      uVar3 = (pMVar9->fields).RotationY;
                      local_38.y = (float)uVar3 * 0.017453292;
                      local_38.x = (float)uVar2 * 0.017453292;
                      local_38.z = (pMVar9->fields).RotationZ * 0.017453292;
                      pUVar18 = UnityEngine_Quaternion__Internal_FromEulerRad
                                          (&local_28,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
                      local_38.x = (pUVar18->fields).x;
                      local_38.y = (pUVar18->fields).y;
                      local_38.z = (pUVar18->fields).z;
                      local_38.w = (pUVar18->fields).w;
                      UnityEngine_Transform__set_localRotation
                                (pUVar16,(UnityEngine_Quaternion_o *)&local_38,(MethodInfo *)0x0);
                      local_38.y = (pMVar9->fields).ScaleY * (value->fields).BaseScale.fields.y;
                      local_38.x = (pMVar9->fields).ScaleX * (value->fields).BaseScale.fields.x;
                      local_38.z = (pMVar9->fields).ScaleZ * (value->fields).BaseScale.fields.z;
                      UnityEngine_Transform__set_localScale
                                (pUVar16,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
                      if (editor) {
                        return value;
                      }
                      if ((scriptObject->fields).Static == false) {
                        bVar12 = false;
                      }
                      else {
                        bVar12 = SUB41((uint)(scriptObject->fields).Parent >> 0x1f,0);
                      }
                      pUVar14 = (value->fields).colliderCache;
                      if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
                      }
                      Cameras_CameraOcclusion__RegisterObject(pUVar13,pUVar14,bVar12,(MethodInfo *)0x0);
                      if ((scriptObject->fields).Active == false) {
                        pUVar13 = (value->fields).GameObject;
                        if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto label_181eaccd4;
                        UnityEngine_GameObject__SetActive(pUVar13,false,(MethodInfo *)0x0);
                      }
                      pSVar19 = (scriptObject->fields).Asset;
                      if (pSVar19 != (System_String_o *)0x0) {
                        bVar12 = System_String__StartsWith(pSVar19,"Interact/Supply",(MethodInfo *)0x0);
                        if (bVar12) {
                          pUVar13 = (value->fields).GameObject;
                          if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto label_181eaccd4;
                          pUVar16 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
                          if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
                          }
                          UI_MinimapHandler__CreateMinimapIcon
                                    (pUVar16,"Supply",(MethodInfo *)0x0);
                        }
                        return value;
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
label_181eaccd4:
  ThrowNullReferenceException();
}


// Map.MapLoader$$MoveInOrder
// il2cpp: void Map_MapLoader__MoveInOrder (int32_t id, int32_t anchorId, bool insertAfter, const MethodInfo* method);
// 0x181ead510

void Map_MapLoader__MoveInOrder(int32_t id,int32_t anchorId,bool insertAfter,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *pSVar1;
  System_Collections_Generic_List_uint__o *__this;
  int32_t index;
  
  if (Il2CppMethodInitialized_1843450a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_IndexOf);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Insert);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_1843450a5 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar1 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
  if (pSVar1 != (System_Collections_Generic_List_int__o *)0x0) {
    System_Collections_Generic_List_int___Remove
              (pSVar1,id,(MethodInfo_923050 *)MethodInfo_System_Collections_Generic_List_int_Remove);
    pSVar1 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
    if (pSVar1 != (System_Collections_Generic_List_int__o *)0x0) {
      index = System_Collections_Generic_List_int___IndexOf
                        (pSVar1,anchorId,
                         (MethodInfo_91F570 *)MethodInfo_System_Collections_Generic_List_int_IndexOf);
      if (index < 0) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar1 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
        if (pSVar1 == (System_Collections_Generic_List_int__o *)0x0) goto label_181ead667;
        index = (pSVar1->fields)._size;
      }
      else if (insertAfter) {
        index = index + 1;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this = (System_Collections_Generic_List_uint__o *)TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
      if (__this != (System_Collections_Generic_List_uint__o *)0x0) {
        System_Collections_Generic_List_uint___Insert
                  (__this,index,id,(MethodInfo_9221F0 *)MethodInfo_System_Collections_Generic_List_int_Insert)
        ;
        return;
      }
    }
  }
label_181ead667:
  ThrowNullReferenceException();
}


// Map.MapLoader$$SetParent
// il2cpp: void Map_MapLoader__SetParent (Map_MapObject_o* obj, Map_MapObject_o* parent, const MethodInfo* method);
// 0x181eb03a0
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eb0722: mov r8, qword ptr [rip + 0x222c417]  ; MethodInfo_System_Collections_Generic_HashSet_int_Add
// asm:   0x181eb0729: mov rcx, rax
// asm:   0x181eb072c: mov edx, dword ptr [rdx + 0x20]
// asm:   0x181eb072f: call 0x181757d20  ; System_Collections_Generic_HashSet_int___System_Collections_Generic_ICollection_T__Add()
// asm:   0x181eb0734: jmp 0x181eb06c4
// asm:   0x181eb077a: xor r8d, r8d
// asm:   0x181eb077d: xor edx, edx
// asm:   0x181eb077f: mov rcx, rax
// asm:   0x181eb0782: call 0x182f5a720  ; UnityEngine_Transform__set_parentInternal()
// asm:   0x181eb0787: jmp 0x181eb06c4

void Map_MapLoader__SetParent(Map_MapObject_o *obj,Map_MapObject_o *parent,MethodInfo *method)

{
  int32_t key;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  UnityEngine_GameObject_o *pUVar3;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  bool bVar4;
  System_Collections_Generic_HashSet_T__o *pSVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *p;
  System_Collections_Generic_HashSet_int__o *pSVar7;
  
  if (Il2CppMethodInitialized_1843450a6 == '\0') {
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
    Il2CppMethodInitialized_1843450a6 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  bVar4 = Map_MapLoader__WouldCreateParentCycle(obj,parent,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  if ((obj == (Map_MapObject_o *)0x0) ||
     (pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToChildren,
     pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) goto label_181eb078c;
  bVar4 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                    (pSVar1,(obj->fields).Parent,
                     (MethodInfo_1407110 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
  if (bVar4) {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToChildren;
    if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_181eb078c;
    pSVar5 = (System_Collections_Generic_HashSet_T__o *)
             System_Collections_Generic_Dictionary_int__ulong___get_Item
                       (pSVar1,(obj->fields).Parent,
                        (MethodInfo_14156F0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
    pMVar2 = (obj->fields).ScriptObject;
    if ((pMVar2 == (Map_MapScriptBaseObject_o *)0x0) ||
       (pSVar5 == (System_Collections_Generic_HashSet_T__o *)0x0)) goto label_181eb078c;
    bVar4 = System_Collections_Generic_HashSet_Int32Enum___Contains
                      (pSVar5,(pMVar2->fields).Id,
                       (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    if (bVar4) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToChildren;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_181eb078c;
      pSVar5 = (System_Collections_Generic_HashSet_T__o *)
               System_Collections_Generic_Dictionary_int__ulong___get_Item
                         (pSVar1,(obj->fields).Parent,
                          (MethodInfo_14156F0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
      pMVar2 = (obj->fields).ScriptObject;
      if ((pMVar2 == (Map_MapScriptBaseObject_o *)0x0) ||
         (pSVar5 == (System_Collections_Generic_HashSet_T__o *)0x0)) goto label_181eb078c;
      System_Collections_Generic_HashSet_Int32Enum___Remove
                (pSVar5,(pMVar2->fields).Id,
                 (MethodInfo_17666A0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    }
  }
  if (parent == (Map_MapObject_o *)0x0) {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    (obj->fields).Parent = TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID;
    pUVar3 = (obj->fields).GameObject;
    if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar6 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
       pUVar6 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent(pUVar6,(UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pMVar2 = (parent->fields).ScriptObject;
    if (pMVar2 != (Map_MapScriptBaseObject_o *)0x0) {
      pUVar3 = (obj->fields).GameObject;
      (obj->fields).Parent = (pMVar2->fields).Id;
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        pUVar6 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
        pUVar3 = (parent->fields).GameObject;
        if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
           (p = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0),
           pUVar6 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent(pUVar6,p,(MethodInfo *)0x0);
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToChildren;
          if (pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            bVar4 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                              (pSVar1,(obj->fields).Parent,
                               (MethodInfo_1407110 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
            if (bVar4) {
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              }
              pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                       TypeInfo_Map_MapLoader->static_fields->IdToChildren;
              if (pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
                pSVar7 = (System_Collections_Generic_HashSet_int__o *)
                         System_Collections_Generic_Dictionary_int__ulong___get_Item
                                   (pSVar1,(obj->fields).Parent,
                                    (MethodInfo_14156F0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item)
                ;
                pMVar2 = (obj->fields).ScriptObject;
                if ((pMVar2 != (Map_MapScriptBaseObject_o *)0x0) &&
                   (pSVar7 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
                  System_Collections_Generic_HashSet_int___Add
                            (pSVar7,(pMVar2->fields).Id,
                             (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
                  return;
                }
              }
            }
            else {
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              }
              key = (obj->fields).Parent;
              __this = (System_Collections_Generic_Dictionary_int__object__o *)
                       TypeInfo_Map_MapLoader->static_fields->IdToChildren;
              pSVar7 = il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
              System_Collections_Generic_HashSet_int____ctor
                        (pSVar7,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
              pMVar2 = (obj->fields).ScriptObject;
              if (((pMVar2 != (Map_MapScriptBaseObject_o *)0x0) &&
                  (pSVar7 != (System_Collections_Generic_HashSet_int__o *)0x0)) &&
                 (System_Collections_Generic_HashSet_int___Add
                            (pSVar7,(pMVar2->fields).Id,
                             (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add),
                 __this != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
                System_Collections_Generic_Dictionary_int__object___Add
                          (__this,key,(Il2CppObject *)pSVar7,
                           (MethodInfo_1415BA0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_Add);
                return;
              }
            }
          }
        }
      }
    }
  }
label_181eb078c:
  ThrowNullReferenceException();
}


// Map.MapLoader$$SetParentLogical
// il2cpp: void Map_MapLoader__SetParentLogical (Map_MapObject_o* obj, Map_MapObject_o* parent, const MethodInfo* method);
// 0x181eafe60
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eb019c: mov r8, qword ptr [rip + 0x222c99d]  ; MethodInfo_System_Collections_Generic_HashSet_int_Add
// asm:   0x181eb01a3: mov rcx, rax
// asm:   0x181eb01a6: mov edx, dword ptr [rdx + 0x20]
// asm:   0x181eb01a9: call 0x181757d20  ; System_Collections_Generic_HashSet_int___System_Collections_Generic_ICollection_T__Add()
// asm:   0x181eb01ae: jmp 0x181eb0142

void Map_MapLoader__SetParentLogical(Map_MapObject_o *obj,Map_MapObject_o *parent,MethodInfo *method)

{
  int32_t key;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  bool bVar3;
  System_Collections_Generic_HashSet_T__o *pSVar4;
  System_Collections_Generic_HashSet_int__o *pSVar5;
  
  if (Il2CppMethodInitialized_1843450a7 == '\0') {
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
    Il2CppMethodInitialized_1843450a7 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  bVar3 = Map_MapLoader__WouldCreateParentCycle(obj,parent,(MethodInfo *)0x0);
  if (!bVar3) {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    if ((obj == (Map_MapObject_o *)0x0) ||
       (pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToChildren,
       pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) goto label_181eb01e4;
    bVar3 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (pSVar1,(obj->fields).Parent,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    if (bVar3) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToChildren;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_181eb01e4;
      pSVar4 = (System_Collections_Generic_HashSet_T__o *)
               System_Collections_Generic_Dictionary_int__ulong___get_Item
                         (pSVar1,(obj->fields).Parent,
                          (MethodInfo_14156F0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
      pMVar2 = (obj->fields).ScriptObject;
      if ((pMVar2 == (Map_MapScriptBaseObject_o *)0x0) ||
         (pSVar4 == (System_Collections_Generic_HashSet_T__o *)0x0)) goto label_181eb01e4;
      bVar3 = System_Collections_Generic_HashSet_Int32Enum___Contains
                        (pSVar4,(pMVar2->fields).Id,
                         (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (bVar3) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToChildren;
        if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_181eb01e4;
        pSVar4 = (System_Collections_Generic_HashSet_T__o *)
                 System_Collections_Generic_Dictionary_int__ulong___get_Item
                           (pSVar1,(obj->fields).Parent,
                            (MethodInfo_14156F0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
        pMVar2 = (obj->fields).ScriptObject;
        if ((pMVar2 == (Map_MapScriptBaseObject_o *)0x0) ||
           (pSVar4 == (System_Collections_Generic_HashSet_T__o *)0x0)) goto label_181eb01e4;
        System_Collections_Generic_HashSet_Int32Enum___Remove
                  (pSVar4,(pMVar2->fields).Id,
                   (MethodInfo_17666A0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
      }
    }
    if (parent != (Map_MapObject_o *)0x0) {
      pMVar2 = (parent->fields).ScriptObject;
      if (pMVar2 != (Map_MapScriptBaseObject_o *)0x0) {
        (obj->fields).Parent = (pMVar2->fields).Id;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToChildren;
        if (pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
          bVar3 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                            (pSVar1,(obj->fields).Parent,
                             (MethodInfo_1407110 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
          if (bVar3) {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToChildren;
            if (pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
              pSVar5 = (System_Collections_Generic_HashSet_int__o *)
                       System_Collections_Generic_Dictionary_int__ulong___get_Item
                                 (pSVar1,(obj->fields).Parent,
                                  (MethodInfo_14156F0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
              pMVar2 = (obj->fields).ScriptObject;
              if ((pMVar2 != (Map_MapScriptBaseObject_o *)0x0) &&
                 (pSVar5 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
                System_Collections_Generic_HashSet_int___Add
                          (pSVar5,(pMVar2->fields).Id,
                           (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
                return;
              }
            }
          }
          else {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            key = (obj->fields).Parent;
            __this = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToChildren;
            pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int)
            ;
            System_Collections_Generic_HashSet_int____ctor
                      (pSVar5,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
            pMVar2 = (obj->fields).ScriptObject;
            if (((pMVar2 != (Map_MapScriptBaseObject_o *)0x0) &&
                (pSVar5 != (System_Collections_Generic_HashSet_int__o *)0x0)) &&
               (System_Collections_Generic_HashSet_int___Add
                          (pSVar5,(pMVar2->fields).Id,
                           (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add),
               __this != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
              System_Collections_Generic_Dictionary_int__object___Add
                        (__this,key,(Il2CppObject *)pSVar5,
                         (MethodInfo_1415BA0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_Add);
              return;
            }
          }
        }
      }
label_181eb01e4:
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
// 0x181eab960

int32_t Map_MapLoader__GetLogicalParentId(Map_MapObject_o *obj,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843450a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_1843450a8 = '\x01';
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
// 0x181eb1fd0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eb209b: nop dword ptr [rax + rax]

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
  Il2CppObject *local_res8;
  
  if (Il2CppMethodInitialized_1843450a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_1843450a9 = '\x01';
  }
  local_res8 = (Il2CppObject *)0x0;
  if ((obj == (Map_MapObject_o *)0x0) || (parent == (Map_MapObject_o *)0x0)) {
    return false;
  }
  pMVar2 = (obj->fields).ScriptObject;
  if ((pMVar2 != (Map_MapScriptBaseObject_o *)0x0) &&
     (pMVar3 = (parent->fields).ScriptObject, pMVar3 != (Map_MapScriptBaseObject_o *)0x0)) {
    iVar1 = (pMVar2->fields).Id;
    item = (pMVar3->fields).Id;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor
              (__this_00,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    if (-1 < item) {
      if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_181eb21bc;
      do {
        bVar5 = System_Collections_Generic_HashSet_int___Add
                          (__this_00,item,
                           (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
        if (!bVar5) break;
        if (item == iVar1) {
          return true;
        }
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        __this = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (__this == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_181eb21bc;
        bVar5 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                          (__this,item,&local_res8,
                           (MethodInfo_141F4E0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_TryGetValue);
        pIVar4 = local_res8;
        if (!bVar5) {
          return false;
        }
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        if (Il2CppMethodInitialized_1843450a8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
          Il2CppMethodInitialized_1843450a8 = '\x01';
        }
        if (pIVar4 == (Il2CppObject *)0x0) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          item = TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID;
        }
        else {
          item = *(int *)&pIVar4[1].klass;
        }
      } while (-1 < item);
    }
    return (bool)((byte)((uint)item >> 0x1f) ^ 1);
  }
label_181eb21bc:
  ThrowNullReferenceException();
}


// Map.MapLoader$$DeleteObject
// il2cpp: void Map_MapLoader__DeleteObject (Map_MapObject_o* obj, const MethodInfo* method);
// 0x181eaacd0

void Map_MapLoader__DeleteObject(Map_MapObject_o *obj,MethodInfo *method)

{
  int32_t id;
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_Dictionary_int__ulong__o *__this;
  UnityEngine_Object_o *obj_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843450aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843450aa = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  if (((obj != (Map_MapObject_o *)0x0) &&
      (pMVar1 = (obj->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) &&
     (__this = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject,
     __this != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (__this,(pMVar1->fields).Id,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    if (!bVar2) {
      obj_00 = (UnityEngine_Object_o *)(obj->fields).GameObject;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(obj_00,(MethodInfo *)0x0);
      return;
    }
    pMVar1 = (obj->fields).ScriptObject;
    if (pMVar1 != (Map_MapScriptBaseObject_o *)0x0) {
      id = (pMVar1->fields).Id;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      Map_MapLoader__DeleteObject_1eaa8d0(id,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$DeleteObject
// il2cpp: void Map_MapLoader__DeleteObject (int32_t id, const MethodInfo* method);
// 0x181eaa8d0
// eh: try 0x181eaab90..0x181eaacbc -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eaab8e: nop 
// asm:   0x181eaac54: mov rdx, qword ptr [rip + 0x21dd68d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x181eaac5b: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181eaac60: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181eaac65: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181eaac6a: test rcx, rcx
// asm:   0x181eaac6d: jne 0x181eaacbc
// asm:   0x181eaac6f: mov rsi, qword ptr [rsp + 0x80]
// asm:   0x181eaacbc: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Map_MapLoader__DeleteObject_1eaa8d0(int32_t id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_int__o *__this_01;
  UnityEngine_Object_o *obj;
  int32_t key;
  bool bVar2;
  uint64_t uVar3;
  System_Collections_Generic_IEnumerable_T__o *collection;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_02;
  Map_MapObject_o *obj_00;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  Il2CppObject *local_18;
  
  if (Il2CppMethodInitialized_1843450ab == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_40b2f90);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843450ab = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
           TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
    uVar3 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                      (pSVar1,id,
                       (MethodInfo_14156F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    __this = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if (__this != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      System_Collections_Generic_Dictionary_int__object___Remove
                (__this,id,
                 (MethodInfo_1419B90 *)MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_Remove);
      if ((uVar3 != 0) &&
         (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                      TypeInfo_Map_MapLoader->static_fields->GoToMapObject,
         __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        System_Collections_Generic_Dictionary_object__object___Remove
                  (__this_00,*(Il2CppObject **)(uVar3 + 0x18),
                   (MethodInfo_1470BF0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_Remove);
        __this_01 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
        if (__this_01 != (System_Collections_Generic_List_int__o *)0x0) {
          System_Collections_Generic_List_int___Remove
                    (__this_01,id,(MethodInfo_923050 *)MethodInfo_System_Collections_Generic_List_int_Remove);
          if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
          }
          Map_MapDestruction__Remove(id,(MethodInfo *)0x0);
          pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToChildren;
          if (pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                              (pSVar1,id,
                               (MethodInfo_1407110 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
            if (!bVar2) {
label_181eaac77:
              obj = *(UnityEngine_Object_o **)(uVar3 + 0x18);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
              return;
            }
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToChildren;
            if (pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
              collection = (System_Collections_Generic_IEnumerable_T__o *)
                           System_Collections_Generic_Dictionary_int__ulong___get_Item
                                     (pSVar1,id,
                                      (MethodInfo_14156F0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item
                                     );
              __this_02 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
              System_Collections_Generic_List_int____ctor_92b2a0
                        ((System_Collections_Generic_List_int__o *)__this_02,collection,
                         (MethodInfo_92B2A0 *)MethodInfo_System_Collections_Generic_List_int_ctor_40b2f90);
              if (__this_02 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
                System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_40,__this_02,
                           (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
                local_28 = (undefined1  [8])local_40._0_8_;
                pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
                local_18 = local_30;
                local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
                local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
                while( true ) {
                  bVar2 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                                    ((System_Collections_Generic_List_Enumerator_T__o *)local_28,
                                     (MethodInfo_1530180 *)
                                     MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
                  if (!bVar2) break;
                  key = (int32_t)local_18;
                  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                  }
                  pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                           TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                  if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                                    (pSVar1,key,
                                     (MethodInfo_1407110 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey
                                    );
                  if (bVar2) {
                    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                    }
                    pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                    if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    obj_00 = (Map_MapObject_o *)
                             System_Collections_Generic_Dictionary_int__ulong___get_Item
                                       (pSVar1,key,
                                        (MethodInfo_14156F0 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item
                                       );
                    Map_MapLoader__SetParent(obj_00,(Map_MapObject_o *)0x0,(MethodInfo *)0x0);
                  }
                }
                System_Collections_Generic_List_Enumerator_int___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
                           MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
                goto label_181eaac77;
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
// 0x181eaccf0

System_Collections_IEnumerator_o *
Map_MapLoader__LoadObjectsCoroutine
          (Map_MapLoader_o *__this,System_Collections_Generic_List_string__o *customAssets,
          System_Collections_Generic_List_MapScriptBaseObject__o *objects,bool editor,MethodInfo *method)

{
  Map_MapLoader__LoadObjectsCoroutine_d__47_o *__this_00;
  
  if (Il2CppMethodInitialized_1843450ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader_LoadObjectsCoroutine_d__47);
    Il2CppMethodInitialized_1843450ac = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapLoader_LoadObjectsCoroutine_d__47);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).customAssets = customAssets;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).customAssets,customAssets);
  (__this_00->fields).objects = objects;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).objects,objects);
  (__this_00->fields).editor = editor;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Map.MapLoader$$GetNavMeshWorldToLocal
// il2cpp: UnityEngine_Matrix4x4_o Map_MapLoader__GetNavMeshWorldToLocal (Map_MapLoader_o* __this, const MethodInfo* method);
// 0x181eabbd0

UnityEngine_Matrix4x4_o *
Map_MapLoader__GetNavMeshWorldToLocal
          (UnityEngine_Matrix4x4_o *__return_storage_ptr__,Map_MapLoader_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Vector3_o *pUVar12;
  UnityEngine_Quaternion_o *pUVar13;
  UnityEngine_Matrix4x4_o *pUVar14;
  UnityEngine_Vector3_Fields local_d8;
  UnityEngine_Vector3_Fields local_c8;
  UnityEngine_Quaternion_Fields local_b8;
  UnityEngine_Matrix4x4_Fields local_a8;
  UnityEngine_Matrix4x4_o local_68;
  
  local_a8.m00 = 0.0;
  local_a8.m10 = 0.0;
  local_a8.m20 = 0.0;
  local_a8.m30 = 0.0;
  local_a8.m01 = 0.0;
  local_a8.m11 = 0.0;
  local_a8.m21 = 0.0;
  local_a8.m31 = 0.0;
  local_a8.m02 = 0.0;
  local_a8.m12 = 0.0;
  local_a8.m22 = 0.0;
  local_a8.m32 = 0.0;
  local_a8.m03 = 0.0;
  local_a8.m13 = 0.0;
  local_a8.m23 = 0.0;
  local_a8.m33 = 0.0;
  pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
    pUVar12 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_d8,pUVar11,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar12->fields).x;
    uVar1._4_4_ = (pUVar12->fields).y;
    fVar2 = (pUVar12->fields).z;
    pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
      pUVar13 = UnityEngine_Transform__get_rotation
                          ((UnityEngine_Quaternion_o *)&local_b8,pUVar11,(MethodInfo *)0x0);
      local_b8.x = (pUVar13->fields).x;
      local_b8.y = (pUVar13->fields).y;
      local_b8.z = (pUVar13->fields).z;
      local_b8.w = (pUVar13->fields).w;
      if (Il2CppMethodInitialized_18433dbeb == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbeb = '\x01';
      }
      pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
      local_c8.x = (pUVar3->oneVector).fields.x;
      local_c8.y = (pUVar3->oneVector).fields.y;
      local_c8.z = (pUVar3->oneVector).fields.z;
      local_d8._0_8_ = uVar1;
      local_d8.z = fVar2;
      pUVar14 = UnityEngine_Matrix4x4__Internal_TRS
                          (&local_68,(UnityEngine_Vector3_o *)&local_d8,(UnityEngine_Quaternion_o *)&local_b8,
                           (UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
      local_a8.m00 = (pUVar14->fields).m00;
      local_a8.m10 = (pUVar14->fields).m10;
      local_a8.m20 = (pUVar14->fields).m20;
      local_a8.m30 = (pUVar14->fields).m30;
      local_a8.m01 = (pUVar14->fields).m01;
      local_a8.m11 = (pUVar14->fields).m11;
      local_a8.m21 = (pUVar14->fields).m21;
      local_a8.m31 = (pUVar14->fields).m31;
      local_a8.m02 = (pUVar14->fields).m02;
      local_a8.m12 = (pUVar14->fields).m12;
      local_a8.m22 = (pUVar14->fields).m22;
      local_a8.m32 = (pUVar14->fields).m32;
      local_a8.m03 = (pUVar14->fields).m03;
      local_a8.m13 = (pUVar14->fields).m13;
      local_a8.m23 = (pUVar14->fields).m23;
      local_a8.m33 = (pUVar14->fields).m33;
      pUVar14 = UnityEngine_Matrix4x4__Internal_Inverse
                          (&local_68,(UnityEngine_Matrix4x4_o *)&local_a8,(MethodInfo *)0x0);
      fVar2 = (pUVar14->fields).m10;
      fVar4 = (pUVar14->fields).m20;
      fVar5 = (pUVar14->fields).m30;
      fVar6 = (pUVar14->fields).m01;
      fVar7 = (pUVar14->fields).m11;
      fVar8 = (pUVar14->fields).m21;
      fVar9 = (pUVar14->fields).m31;
      (__return_storage_ptr__->fields).m00 = (pUVar14->fields).m00;
      (__return_storage_ptr__->fields).m10 = fVar2;
      (__return_storage_ptr__->fields).m20 = fVar4;
      (__return_storage_ptr__->fields).m30 = fVar5;
      fVar2 = (pUVar14->fields).m02;
      fVar4 = (pUVar14->fields).m12;
      fVar5 = (pUVar14->fields).m22;
      fVar10 = (pUVar14->fields).m32;
      (__return_storage_ptr__->fields).m01 = fVar6;
      (__return_storage_ptr__->fields).m11 = fVar7;
      (__return_storage_ptr__->fields).m21 = fVar8;
      (__return_storage_ptr__->fields).m31 = fVar9;
      fVar6 = (pUVar14->fields).m03;
      fVar7 = (pUVar14->fields).m13;
      fVar8 = (pUVar14->fields).m23;
      fVar9 = (pUVar14->fields).m33;
      (__return_storage_ptr__->fields).m02 = fVar2;
      (__return_storage_ptr__->fields).m12 = fVar4;
      (__return_storage_ptr__->fields).m22 = fVar5;
      (__return_storage_ptr__->fields).m32 = fVar10;
      (__return_storage_ptr__->fields).m03 = fVar6;
      (__return_storage_ptr__->fields).m13 = fVar7;
      (__return_storage_ptr__->fields).m23 = fVar8;
      (__return_storage_ptr__->fields).m33 = fVar9;
      return __return_storage_ptr__;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$ResetSources
// il2cpp: void Map_MapLoader__ResetSources (Map_MapLoader_o* __this, const MethodInfo* method);
// 0x181eae000
// eh: try 0x181eae2f0..0x181eae53b -> pad 0x183331ea0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eae4c4: mov rdx, qword ptr [rip + 0x220197d]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
// asm:   0x181eae4cb: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181eae4d0: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181eae4d5: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181eae4da: test rcx, rcx
// asm:   0x181eae4dd: jne 0x181eae53b
// asm:   0x181eae53b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183331ea0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331ea5: push rbp
// asm:   0x183331ea6: sub rsp, 0x30
// asm:   0x183331eaa: mov rbp, rdx
// asm:   0x183331ead: mov rax, qword ptr [rbp + 0xe8]
// asm:   0x183331eb4: mov rcx, qword ptr [rax]
// asm:   0x183331eb7: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183331ebb: movabs rax, 0
// asm:   0x183331ec5: add rsp, 0x30
// asm:   0x183331ec9: pop rbp
// asm:   0x183331eca: ret 

void Map_MapLoader__ResetSources(Map_MapLoader_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined8 uVar2;
  byte bVar3;
  int length;
  float fVar4;
  System_Collections_Generic_List_MapLoader_NavMeshBuild__o *pSVar5;
  System_Collections_Generic_List_Bounds__o *pSVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  System_Collections_Generic_Dictionary_int__MapObject__o *__this_00;
  Il2CppClass *pIVar8;
  void *pvVar9;
  System_String_o *a;
  UnityEngine_GameObject_o *go;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  Il2CppObject *pIVar18;
  bool bVar19;
  UnityEngine_Transform_o *pUVar20;
  UnityEngine_Vector3_o *pUVar21;
  UnityEngine_Quaternion_o *pUVar22;
  UnityEngine_Matrix4x4_o *pUVar23;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  undefined1 local_148 [16];
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_138;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_118;
  UnityEngine_Vector3_Fields local_f8;
  UnityEngine_Matrix4x4_Fields local_e8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_a8;
  undefined8 uStack_a0;
  Il2CppObject *local_98;
  UnityEngine_Matrix4x4_o local_88 [2];
  
  if (Il2CppMethodInitialized_1843450ad == '\0') {
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
    Il2CppMethodInitialized_1843450ad = '\x01';
  }
  local_118.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_118.fields._index = 0;
  local_118.fields._version = 0;
  local_118.fields._currentValue = (Il2CppObject *)0x0;
  local_a8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  uStack_a0._0_4_ = 0;
  uStack_a0._4_4_ = 0;
  local_98 = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar5 = TypeInfo_Map_MapLoader->static_fields->_navMeshBuilds;
  if (pSVar5 != (System_Collections_Generic_List_MapLoader_NavMeshBuild__o *)0x0) {
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar6 = TypeInfo_Map_MapLoader->static_fields->_navMeshBounds;
    if (pSVar6 != (System_Collections_Generic_List_Bounds__o *)0x0) {
      piVar1 = &(pSVar6->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar6->fields)._size = 0;
      local_e8.m00 = 0.0;
      local_e8.m10 = 0.0;
      local_e8.m20 = 0.0;
      local_e8.m30 = 0.0;
      local_e8.m01 = 0.0;
      local_e8.m11 = 0.0;
      local_e8.m21 = 0.0;
      local_e8.m31 = 0.0;
      local_e8.m02 = 0.0;
      local_e8.m12 = 0.0;
      local_e8.m22 = 0.0;
      local_e8.m32 = 0.0;
      local_e8.m03 = 0.0;
      local_e8.m13 = 0.0;
      local_e8.m23 = 0.0;
      local_e8.m33 = 0.0;
      pUVar20 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
        pUVar21 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)local_148,pUVar20,(MethodInfo *)0x0);
        uVar2._0_4_ = (pUVar21->fields).x;
        uVar2._4_4_ = (pUVar21->fields).y;
        fVar4 = (pUVar21->fields).z;
        pUVar20 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
          pUVar22 = UnityEngine_Transform__get_rotation
                              ((UnityEngine_Quaternion_o *)&local_138,pUVar20,(MethodInfo *)0x0);
          local_138.fields._dictionary =
               *(System_Collections_Generic_Dictionary_TKey__TValue__o **)&pUVar22->fields;
          local_138.fields._index = (int32_t)(pUVar22->fields).z;
          local_138.fields._version = (int32_t)(pUVar22->fields).w;
          if (Il2CppMethodInitialized_18433dbeb == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbeb = '\x01';
          }
          pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_f8.x = (pUVar7->oneVector).fields.x;
          local_f8.y = (pUVar7->oneVector).fields.y;
          local_f8.z = (pUVar7->oneVector).fields.z;
          local_148._8_4_ = fVar4;
          local_148._0_8_ = uVar2;
          pUVar23 = UnityEngine_Matrix4x4__Internal_TRS
                              (local_88,(UnityEngine_Vector3_o *)local_148,
                               (UnityEngine_Quaternion_o *)&local_138,(UnityEngine_Vector3_o *)&local_f8,
                               (MethodInfo *)0x0);
          local_e8.m00 = (pUVar23->fields).m00;
          local_e8.m10 = (pUVar23->fields).m10;
          local_e8.m20 = (pUVar23->fields).m20;
          local_e8.m30 = (pUVar23->fields).m30;
          local_e8.m01 = (pUVar23->fields).m01;
          local_e8.m11 = (pUVar23->fields).m11;
          local_e8.m21 = (pUVar23->fields).m21;
          local_e8.m31 = (pUVar23->fields).m31;
          local_e8.m02 = (pUVar23->fields).m02;
          local_e8.m12 = (pUVar23->fields).m12;
          local_e8.m22 = (pUVar23->fields).m22;
          local_e8.m32 = (pUVar23->fields).m32;
          local_e8.m03 = (pUVar23->fields).m03;
          local_e8.m13 = (pUVar23->fields).m13;
          local_e8.m23 = (pUVar23->fields).m23;
          local_e8.m33 = (pUVar23->fields).m33;
          pUVar23 = UnityEngine_Matrix4x4__Internal_Inverse
                              (local_88,(UnityEngine_Matrix4x4_o *)&local_e8,(MethodInfo *)0x0);
          __this_00 = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (__this_00 != (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) {
            uVar10._0_4_ = (pUVar23->fields).m00;
            uVar10._4_4_ = (pUVar23->fields).m10;
            uVar11._0_4_ = (pUVar23->fields).m20;
            uVar11._4_4_ = (pUVar23->fields).m30;
            uVar12._0_4_ = (pUVar23->fields).m01;
            uVar12._4_4_ = (pUVar23->fields).m11;
            uVar13._0_4_ = (pUVar23->fields).m21;
            uVar13._4_4_ = (pUVar23->fields).m31;
            uVar14._0_4_ = (pUVar23->fields).m02;
            uVar14._4_4_ = (pUVar23->fields).m12;
            uVar15._0_4_ = (pUVar23->fields).m22;
            uVar15._4_4_ = (pUVar23->fields).m32;
            uVar16._0_4_ = (pUVar23->fields).m03;
            uVar16._4_4_ = (pUVar23->fields).m13;
            uVar17._0_4_ = (pUVar23->fields).m23;
            uVar17._4_4_ = (pUVar23->fields).m33;
            __this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                        System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                                   (MethodInfo_13C65A0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values);
            if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
              System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                        (&local_138,__this_01,
                         (MethodInfo_F1E4D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator
                        );
              local_118.fields._dictionary = local_138.fields._dictionary;
              local_118.fields._index = local_138.fields._index;
              local_118.fields._version = local_138.fields._version;
              local_118.fields._currentValue = local_138.fields._currentValue;
              local_148._0_4_ = 0.0;
              local_148._4_4_ = 0.0;
              local_148._8_8_ = &local_118;
              while( true ) {
                bVar19 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                                   (&local_118,
                                    (MethodInfo_155CFB0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                                   );
                pIVar18 = local_118.fields._currentValue;
                if (!bVar19) {
                  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_118,
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
                            );
                  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                  }
                  Map_MapLoader__CollectNavMeshSources((MethodInfo *)0x0);
                  return;
                }
                if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                }
                if (Il2CppMethodInitialized_1843450ae == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapAssets);
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
                  Il2CppMethodInitialized_1843450ae = '\x01';
                }
                if (pIVar18 == (Il2CppObject *)0x0) break;
                pIVar8 = pIVar18[2].klass;
                if (pIVar8 != (Il2CppClass *)0x0) {
                  pvVar9 = (pIVar8->_1).image;
                  bVar3 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
                  if ((bVar3 <= *(byte *)((longlong)pvVar9 + 0x130)) &&
                     (*(Map_MapScriptSceneObject_c **)
                       (*(longlong *)((longlong)pvVar9 + 200) + -8 + (ulonglong)bVar3 * 8) ==
                      TypeInfo_Map_MapScriptSceneObject)) {
                    a = (System_String_o *)(pIVar8->_1).namespaze;
                    if ((TypeInfo_Map_MapAssets->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapAssets);
                    }
                    bVar19 = System_String__op_Equality
                                       (a,TypeInfo_Map_MapAssets->static_fields->NavMeshRegion,
                                        (MethodInfo *)0x0);
                    if (bVar19) {
                      if (pIVar18[1].monitor == (UnityEngine_GameObject_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      bVar19 = UnityEngine_GameObject__get_activeInHierarchy
                                         (pIVar18[1].monitor,(MethodInfo *)0x0);
                      if (bVar19) {
                        go = pIVar18[1].monitor;
                        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                        }
                        local_e8._0_8_ = uVar10;
                        local_e8._8_8_ = uVar11;
                        local_e8._16_8_ = uVar12;
                        local_e8._24_8_ = uVar13;
                        local_e8._32_8_ = uVar14;
                        local_e8._40_8_ = uVar15;
                        local_e8._48_8_ = uVar16;
                        local_e8._56_8_ = uVar17;
                        bVar19 = Map_MapLoader__TryGetRenderBounds
                                           (go,(UnityEngine_Matrix4x4_o *)&local_e8,
                                            (UnityEngine_Bounds_o *)&local_a8,(MethodInfo *)0x0);
                        if (bVar19) {
                          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                          }
                          pSVar6 = TypeInfo_Map_MapLoader->static_fields->_navMeshBounds;
                          if (pSVar6 == (System_Collections_Generic_List_Bounds__o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          local_138.fields._dictionary = local_a8;
                          local_138.fields._index = (int32_t)uStack_a0;
                          local_138.fields._version = uStack_a0._4_4_;
                          local_138.fields._currentValue = local_98;
                          il2cpp_runtime_helper_18000e1a0(pSVar6,&local_138,
                                        MethodInfo_System_Collections_Generic_List_Bounds_Add);
                        }
                      }
                    }
                  }
                }
              }
              ThrowNullReferenceException();
            }
          }
          goto label_181eae524;
        }
      }
      ThrowNullReferenceException();
    }
  }
label_181eae524:
  ThrowNullReferenceException();
}


// Map.MapLoader$$IsNavMeshRegion
// il2cpp: bool Map_MapLoader__IsNavMeshRegion (Map_MapObject_o* mapObject, const MethodInfo* method);
// 0x181eac290

bool Map_MapLoader__IsNavMeshRegion(Map_MapObject_o *mapObject,MethodInfo *method)

{
  byte bVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *a;
  bool bVar3;
  
  if (Il2CppMethodInitialized_1843450ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapAssets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    Il2CppMethodInitialized_1843450ae = '\x01';
  }
  if (mapObject != (Map_MapObject_o *)0x0) {
    pMVar2 = (mapObject->fields).ScriptObject;
    if (pMVar2 != (Map_MapScriptBaseObject_o *)0x0) {
      bVar1 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
      if ((bVar1 <= (pMVar2->klass->_2).typeHierarchyDepth) &&
         ((pMVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
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
  ThrowNullReferenceException();
}


// Map.MapLoader$$CollectNavMeshSources
// il2cpp: void Map_MapLoader__CollectNavMeshSources (const MethodInfo* method);
// 0x181ea9930
// eh: try 0x181ea9bc0..0x181ea9ee8 -> pad 0x183328840 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ea9c4b: nop dword ptr [rax + rax]
// asm:   0x181ea9cab: mov rdx, qword ptr [rip + 0x2206196]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
// asm:   0x181ea9cb2: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181ea9cb7: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181ea9cbc: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x181ea9cc1: test rcx, rcx
// asm:   0x181ea9cc4: jne 0x181ea9ee8
// asm:   0x181ea9cca: mov r15, qword ptr [rsp + 0xa8]
// asm:   0x181ea9ee8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183328840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183328845: push rbp
// asm:   0x183328846: sub rsp, 0x40
// asm:   0x18332884a: mov rbp, rdx
// asm:   0x18332884d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x183328851: mov rcx, qword ptr [rax]
// asm:   0x183328854: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183328858: movabs rax, 0
// asm:   0x183328862: add rsp, 0x40
// asm:   0x183328866: pop rbp
// asm:   0x183328867: ret 

void Map_MapLoader__CollectNavMeshSources(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_Bounds__o *pSVar3;
  System_Collections_Generic_Dictionary_int__MapObject__o *__this;
  Map_MapScriptBaseObject_o *pMVar4;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_01;
  Map_MapObject_o *mapObject;
  bool bVar5;
  UnityEngine_LayerMask_o UVar6;
  Map_MapLoader___c__DisplayClass51_0_o *object;
  System_Collections_Generic_HashSet_GameObject__o *__this_02;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  System_Object_array *pSVar7;
  UnityEngine_GameObject_o *pUVar8;
  System_Int32_array *layers;
  System_Collections_Generic_List_NavMeshBuildMarkup__o *markups;
  System_Predicate_T__o *__this_04;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_NavMeshBuildSource__o *pSVar9;
  uint uVar10;
  undefined1 local_50 [16];
  Map_MapObject_o *local_40;
  undefined1 local_38 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_30;
  Map_MapObject_o *local_28;
  
  if (Il2CppMethodInitialized_1843450af == '\0') {
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
              (&MethodInfo_Map_MapLoader_c__DisplayClass51_0_CollectNavMeshSources_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader_c__DisplayClass51_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator);
    Il2CppMethodInitialized_1843450af = '\x01';
  }
  local_38 = (undefined1  [8])0x0;
  pUStack_30 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_28 = (Map_MapObject_o *)0x0;
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapLoader_c__DisplayClass51_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar9 = TypeInfo_Map_MapLoader->static_fields->_navMeshSources;
  if (pSVar9 != (System_Collections_Generic_List_NavMeshBuildSource__o *)0x0) {
    piVar1 = &(pSVar9->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar9->fields)._size = 0;
    pSVar3 = TypeInfo_Map_MapLoader->static_fields->_navMeshBounds;
    if (pSVar3 != (System_Collections_Generic_List_Bounds__o *)0x0) {
      if ((pSVar3->fields)._size == 0) {
        return;
      }
      __this_02 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_GameObject);
      System_Collections_Generic_HashSet_object____ctor
                ((System_Collections_Generic_HashSet_object__o *)__this_02,
                 (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_GameObject_ctor);
      if (object != (Map_MapLoader___c__DisplayClass51_0_o *)0x0) {
        (object->fields).staticObjects = __this_02;
        Il2CppCodeGenWriteBarrier(&(object->fields).staticObjects,__this_02);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        __this = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if ((__this != (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) &&
           (__this_03 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                        System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                                   (MethodInfo_13C65A0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values),
           __this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
          System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                     local_50,__this_03,
                     (MethodInfo_F1E4D0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator
                    );
          local_38 = (undefined1  [8])local_50._0_8_;
          pUStack_30 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50._8_8_;
          local_28 = local_40;
          local_50._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_50._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38;
          while (bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                                   ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                     *)local_38,
                                    (MethodInfo_155CFB0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                                   ), mapObject = local_28, bVar5) {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            bVar5 = Map_MapLoader__IsNavMeshRegion(mapObject,(MethodInfo *)0x0);
            if (!bVar5) {
              if (mapObject == (Map_MapObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              pMVar4 = (mapObject->fields).ScriptObject;
              if (pMVar4 == (Map_MapScriptBaseObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              if ((pMVar4->fields).Static != false) {
                pUVar8 = (mapObject->fields).GameObject;
                if (pUVar8 == (UnityEngine_GameObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar7 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                                   (pUVar8,(MethodInfo_6F5810 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Transform
                                   );
                uVar10 = 0;
                if (pSVar7 == (System_Object_array *)0x0) {
                  ThrowNullReferenceException();
                }
                for (; uVar2 = (uint)pSVar7->max_length, (int)uVar10 < (int)uVar2; uVar10 = uVar10 + 1) {
                  if (uVar2 <= uVar10) {
                    ThrowIndexOutOfRangeException();
                  }
                  if ((UnityEngine_Component_o *)pSVar7->m_Items[(int)uVar10] ==
                      (UnityEngine_Component_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  __this_00 = (System_Collections_Generic_HashSet_object__o *)(object->fields).staticObjects;
                  pUVar8 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pSVar7->m_Items[(int)uVar10],
                                      (MethodInfo *)0x0);
                  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  System_Collections_Generic_HashSet_object___Add
                            (__this_00,(Il2CppObject *)pUVar8,
                             (MethodInfo_1757CE0 *)
                             MethodInfo_System_Collections_Generic_HashSet_GameObject_Add);
                }
              }
            }
          }
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38,
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
                    );
          layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,4);
          if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
          }
          if (layers != (System_Int32_array *)0x0) {
            if (((((int)layers->max_length == 0) ||
                 (layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities,
                 (uint)layers->max_length < 2)) ||
                (layers->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll,
                (uint)layers->max_length < 3)) ||
               (layers->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectCharacters,
               (uint)layers->max_length < 4)) {
              ThrowIndexOutOfRangeException();
            }
            layers->m_Items[3] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectTitans;
            UVar6 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
            markups = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_NavMeshBuildMarkup);
            System_Collections_Generic_List_NavMeshBuildMarkup____ctor
                      ((System_Collections_Generic_LowLevelList_T__o *)markups,
                       (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_NavMeshBuildMarkup_ctor
                      );
            UVar6 = UnityEngine_LayerMask__op_Implicit((int32_t)UVar6.fields.m_Mask,(MethodInfo *)0x0);
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            UnityEngine_AI_NavMeshBuilder__CollectSources_2e97b90
                      ((UnityEngine_Transform_o *)0x0,(int32_t)UVar6.fields.m_Mask,1,0,markups,
                       TypeInfo_Map_MapLoader->static_fields->_navMeshSources,(MethodInfo *)0x0);
            pSVar9 = TypeInfo_Map_MapLoader->static_fields->_navMeshSources;
            __this_04 = (System_Predicate_T__o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_NavMeshBuildSource_bool)
            ;
            System_Predicate_MapLoader_NavMeshBuild____ctor
                      (__this_04,(Il2CppObject *)object,
                       (intptr_t)MethodInfo_Map_MapLoader_c__DisplayClass51_0_CollectNavMeshSources_b__0,
                       (MethodInfo_B62300 *)0x0);
            source = System_Linq_Enumerable__Where_NavMeshBuildSource_
                               ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar9,
                                (System_Func_TSource__bool__o *)__this_04,
                                (MethodInfo_6CAC10 *)
                                MethodInfo_System_Linq_Enumerable_Where_NavMeshBuildSource);
            pSVar9 = (System_Collections_Generic_List_NavMeshBuildSource__o *)
                     System_Linq_Enumerable__ToList_NavMeshBuildSource_
                               (source,(MethodInfo_6C9B70 *)
                                       MethodInfo_System_Linq_Enumerable_ToList_NavMeshBuildSource);
            TypeInfo_Map_MapLoader->static_fields->_navMeshSources = pSVar9;
            Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->_navMeshSources,pSVar9);
            __this_01 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                        (object->fields).staticObjects;
            if (__this_01 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
              System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                        (__this_01,
                         (MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_GameObject_Clear)
              ;
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$TryGetRenderBounds
// il2cpp: bool Map_MapLoader__TryGetRenderBounds (UnityEngine_GameObject_o* go, UnityEngine_Matrix4x4_o worldToLocal, UnityEngine_Bounds_o* bounds, const MethodInfo* method);
// 0x181eb1b50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eb1c2f: nop 

bool Map_MapLoader__TryGetRenderBounds
               (UnityEngine_GameObject_o *go,UnityEngine_Matrix4x4_o *worldToLocal,
               UnityEngine_Bounds_o *bounds,MethodInfo *method)

{
  UnityEngine_MeshFilter_o *__this;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  System_Object_array *pSVar14;
  UnityEngine_Object_o *x;
  UnityEngine_Mesh_o *__this_00;
  UnityEngine_Bounds_o *pUVar15;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Matrix4x4_o *pUVar16;
  uint uVar17;
  bool bVar18;
  UnityEngine_Bounds_o local_188;
  UnityEngine_Matrix4x4_Fields local_168;
  UnityEngine_Matrix4x4_Fields local_128;
  UnityEngine_Bounds_o local_e8;
  UnityEngine_Matrix4x4_o local_d0 [2];
  
  if (Il2CppMethodInitialized_1843450b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_1843450b0 = '\x01';
  }
  (bounds->fields).m_Center.fields.x = 0.0;
  (bounds->fields).m_Center.fields.y = 0.0;
  *(undefined8 *)&(bounds->fields).m_Center.fields.z = 0;
  (bounds->fields).m_Extents.fields.y = 0.0;
  (bounds->fields).m_Extents.fields.z = 0.0;
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pSVar14 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                        (go,(MethodInfo_6F5810 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
    if (pSVar14 != (System_Object_array *)0x0) {
      bVar18 = false;
      uVar17 = 0;
label_181eb1c30:
      do {
        if ((int)pSVar14->max_length <= (int)uVar17) {
          return bVar18;
        }
        if ((uint)pSVar14->max_length <= uVar17) {
          ThrowIndexOutOfRangeException();
        }
        __this = (UnityEngine_MeshFilter_o *)pSVar14->m_Items[(int)uVar17];
        if (__this == (UnityEngine_MeshFilter_o *)0x0) break;
        x = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh(__this,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar13 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar13) {
          __this_00 = UnityEngine_MeshFilter__get_sharedMesh(__this,(MethodInfo *)0x0);
          if (__this_00 == (UnityEngine_Mesh_o *)0x0) break;
          pUVar15 = UnityEngine_Mesh__get_bounds(&local_188,__this_00,(MethodInfo *)0x0);
          uVar1._0_4_ = (pUVar15->fields).m_Center.fields.x;
          uVar1._4_4_ = (pUVar15->fields).m_Center.fields.y;
          uVar2 = *(undefined8 *)&(pUVar15->fields).m_Center.fields.z;
          uVar12._0_4_ = (pUVar15->fields).m_Extents.fields.y;
          uVar12._4_4_ = (pUVar15->fields).m_Extents.fields.z;
          __this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_01 == (UnityEngine_Transform_o *)0x0) break;
          pUVar16 = UnityEngine_Transform__get_localToWorldMatrix
                              ((UnityEngine_Matrix4x4_o *)&local_168,__this_01,(MethodInfo *)0x0);
          local_128.m00 = (pUVar16->fields).m00;
          local_128.m10 = (pUVar16->fields).m10;
          local_128.m20 = (pUVar16->fields).m20;
          local_128.m30 = (pUVar16->fields).m30;
          local_128.m01 = (pUVar16->fields).m01;
          local_128.m11 = (pUVar16->fields).m11;
          local_128.m21 = (pUVar16->fields).m21;
          local_128.m31 = (pUVar16->fields).m31;
          local_128.m02 = (pUVar16->fields).m02;
          local_128.m12 = (pUVar16->fields).m12;
          local_128.m22 = (pUVar16->fields).m22;
          local_128.m32 = (pUVar16->fields).m32;
          local_128.m03 = (pUVar16->fields).m03;
          local_128.m13 = (pUVar16->fields).m13;
          local_128.m23 = (pUVar16->fields).m23;
          local_128.m33 = (pUVar16->fields).m33;
          local_168.m00 = (worldToLocal->fields).m00;
          local_168.m10 = (worldToLocal->fields).m10;
          local_168.m20 = (worldToLocal->fields).m20;
          local_168.m30 = (worldToLocal->fields).m30;
          local_168.m01 = (worldToLocal->fields).m01;
          local_168.m11 = (worldToLocal->fields).m11;
          local_168.m21 = (worldToLocal->fields).m21;
          local_168.m31 = (worldToLocal->fields).m31;
          local_168.m02 = (worldToLocal->fields).m02;
          local_168.m12 = (worldToLocal->fields).m12;
          local_168.m22 = (worldToLocal->fields).m22;
          local_168.m32 = (worldToLocal->fields).m32;
          local_168.m03 = (worldToLocal->fields).m03;
          local_168.m13 = (worldToLocal->fields).m13;
          local_168.m23 = (worldToLocal->fields).m23;
          local_168.m33 = (worldToLocal->fields).m33;
          pUVar16 = UnityEngine_Matrix4x4__op_Multiply
                              (local_d0,(UnityEngine_Matrix4x4_o *)&local_168,
                               (UnityEngine_Matrix4x4_o *)&local_128,(MethodInfo *)0x0);
          uVar3._0_4_ = (pUVar16->fields).m00;
          uVar3._4_4_ = (pUVar16->fields).m10;
          uVar4._0_4_ = (pUVar16->fields).m20;
          uVar4._4_4_ = (pUVar16->fields).m30;
          uVar5._0_4_ = (pUVar16->fields).m01;
          uVar5._4_4_ = (pUVar16->fields).m11;
          uVar6._0_4_ = (pUVar16->fields).m21;
          uVar6._4_4_ = (pUVar16->fields).m31;
          uVar7._0_4_ = (pUVar16->fields).m02;
          uVar7._4_4_ = (pUVar16->fields).m12;
          uVar8._0_4_ = (pUVar16->fields).m22;
          uVar8._4_4_ = (pUVar16->fields).m32;
          uVar9._0_4_ = (pUVar16->fields).m03;
          uVar9._4_4_ = (pUVar16->fields).m13;
          uVar10._0_4_ = (pUVar16->fields).m23;
          uVar10._4_4_ = (pUVar16->fields).m33;
          if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
          }
          local_188.fields.m_Center.fields._0_8_ = uVar1;
          local_188.fields._8_8_ = uVar2;
          local_188.fields.m_Extents.fields._4_8_ = uVar12;
          local_168._0_8_ = uVar3;
          local_168._8_8_ = uVar4;
          local_168._16_8_ = uVar5;
          local_168._24_8_ = uVar6;
          local_168._32_8_ = uVar7;
          local_168._40_8_ = uVar8;
          local_168._48_8_ = uVar9;
          local_168._56_8_ = uVar10;
          pUVar15 = Utility_Util__TransformBounds
                              (&local_e8,&local_188,(UnityEngine_Matrix4x4_o *)&local_168,(MethodInfo *)0x0);
          uVar2._0_4_ = (pUVar15->fields).m_Extents.fields.y;
          uVar2._4_4_ = (pUVar15->fields).m_Extents.fields.z;
          uVar11._0_4_ = (pUVar15->fields).m_Center.fields.x;
          uVar11._4_4_ = (pUVar15->fields).m_Center.fields.y;
          uVar12 = *(undefined8 *)&(pUVar15->fields).m_Center.fields.z;
          if (bVar18 == false) {
            uVar17 = uVar17 + 1;
            bVar18 = true;
            (bounds->fields).m_Center.fields.x = (float)uVar11;
            (bounds->fields).m_Center.fields.y = uVar11._4_4_;
            *(undefined8 *)&(bounds->fields).m_Center.fields.z = uVar12;
            (bounds->fields).m_Extents.fields.y = (float)uVar2;
            (bounds->fields).m_Extents.fields.z = uVar2._4_4_;
            goto label_181eb1c30;
          }
          local_188.fields.m_Center.fields._0_8_ = uVar11;
          local_188.fields._8_8_ = uVar12;
          local_188.fields.m_Extents.fields._4_8_ = uVar2;
          UnityEngine_Bounds__Encapsulate_1e7c200(bounds,&local_188,(MethodInfo *)0x0);
        }
        uVar17 = uVar17 + 1;
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$CreateNavMeshSurface
// il2cpp: UnityEngine_AsyncOperation_o* Map_MapLoader__CreateNavMeshSurface (int32_t agentID, UnityEngine_Bounds_o bounds, uint32_t maxJobWorkers, const MethodInfo* method);
// 0x181eaa590

UnityEngine_AsyncOperation_o *
Map_MapLoader__CreateNavMeshSurface
          (int32_t agentID,UnityEngine_Bounds_o *bounds,uint32_t maxJobWorkers,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_MapLoader_NavMeshBuild__o *__this;
  Map_MapLoader_NavMeshBuild_array *pMVar3;
  Map_MapLoader_NavMeshBuild_Fields *pMVar4;
  MethodInfo *pMVar5;
  System_Int32_array *pSVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  UnityEngine_AI_NavMeshData_o *__this_00;
  UnityEngine_AI_NavMeshBuildSettings_o *pUVar18;
  UnityEngine_AsyncOperation_o *pUVar19;
  System_Int32_array *local_188;
  System_String_o *pSStack_180;
  System_String_o *local_178;
  System_String_o *pSStack_170;
  UnityEngine_Rect_Fields local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  UnityEngine_AI_NavMeshData_o *local_148;
  System_Int32_array *pSStack_140;
  System_String_o *pSStack_138;
  System_String_o *pSStack_130;
  System_String_o *pSStack_128;
  UnityEngine_Rect_Fields local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined1 local_e8 [16];
  System_String_o *local_d8;
  System_String_o *pSStack_d0;
  System_String_o *local_c8;
  UnityEngine_Rect_Fields aUStack_c0 [2];
  UnityEngine_Vector3_Fields aUStack_a0 [2];
  UnityEngine_Bounds_o local_88 [4];
  
  if (Il2CppMethodInitialized_1843450b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapLoader_NavMeshBuild_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_AI_NavMeshData);
    Il2CppMethodInitialized_1843450b1 = '\x01';
  }
  local_188 = (System_Int32_array *)0x0;
  pSStack_180 = (System_String_o *)0x0;
  local_178 = (System_String_o *)0x0;
  pSStack_170 = (System_String_o *)0x0;
  local_168.m_XMin = 0.0;
  local_168.m_YMin = 0.0;
  local_168.m_Width = 0.0;
  local_168.m_Height = 0.0;
  local_158._0_4_ = 0;
  local_158._4_4_ = 0;
  uStack_150._0_4_ = 0;
  uStack_150._4_1_ = (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)0x0;
  uStack_150._5_3_ = 0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_AI_NavMeshData);
  UnityEngine_AI_NavMeshData___ctor(__this_00,(MethodInfo *)0x0);
  pUVar18 = UnityEngine_AI_NavMesh__GetSettingsByID
                      ((UnityEngine_AI_NavMeshBuildSettings_o *)local_e8,agentID,(MethodInfo *)0x0);
  local_188 = *(System_Int32_array **)&pUVar18->fields;
  pSStack_180 = *(System_String_o **)&(pUVar18->fields).m_AgentHeight;
  local_178 = *(System_String_o **)&(pUVar18->fields).m_AgentClimb;
  pSStack_170 = *(System_String_o **)&(pUVar18->fields).m_MaxJumpAcrossDistance;
  local_168.m_XMin = (float)(pUVar18->fields).m_OverrideVoxelSize;
  local_168.m_YMin = (pUVar18->fields).m_VoxelSize;
  local_168.m_Width = (float)(pUVar18->fields).m_OverrideTileSize;
  local_168.m_Height = (float)(pUVar18->fields).m_TileSize;
  local_158._0_4_ = (pUVar18->fields).m_BuildHeightMesh;
  local_158._4_4_ = (pUVar18->fields).m_MaxJobWorkers;
  uStack_150 = *(undefined8 *)&(pUVar18->fields).m_PreserveTilesOutsideBounds;
  UnityEngine_Accessibility_AccessibilityNodeData__set_parentId
            ((UnityEngine_Accessibility_AccessibilityNodeData_o *)&local_188,maxJobWorkers,(MethodInfo *)0x0);
  UnityEngine_AI_NavMeshBuildSettings__set_overrideTileSize
            ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_188,true,(MethodInfo *)0x0);
  UnityEngine_AI_NavMeshBuildSettings__set_tileSize
            ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_188,0x100,(MethodInfo *)0x0);
  UnityEngine_AI_NavMeshBuildSettings__set_overrideVoxelSize
            ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_188,true,(MethodInfo *)0x0);
  UnityEngine_AI_NavMeshBuildSettings__set_voxelSize
            ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_188,4.0,(MethodInfo *)0x0);
  UnityEngine_AI_NavMeshBuildSettings__set_minRegionArea
            ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_188,100.0,(MethodInfo *)0x0);
  UnityEngine_AI_NavMeshBuildSettings__set_buildHeightMesh
            ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_188,true,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  uVar16 = uStack_150;
  uVar14 = local_158;
  uVar12 = local_168._8_8_;
  uVar10 = local_168._0_8_;
  pSVar9 = pSStack_170;
  pSVar8 = local_178;
  pSVar7 = pSStack_180;
  pSVar6 = local_188;
  __this = TypeInfo_Map_MapLoader->static_fields->_navMeshBuilds;
  local_f0 = 0;
  pSStack_140 = (System_Int32_array *)0x0;
  pSStack_138 = (System_String_o *)0x0;
  pSStack_130 = (System_String_o *)0x0;
  pSStack_128 = (System_String_o *)0x0;
  local_120.m_XMin = 0.0;
  local_120.m_YMin = 0.0;
  local_120.m_Width = 0.0;
  local_120.m_Height = 0.0;
  local_110 = 0;
  uStack_108 = 0;
  local_100._0_8_ = 0;
  local_100._8_8_ = 0;
  local_148 = __this_00;
  Il2CppCodeGenWriteBarrier(&local_148,__this_00);
  uVar17 = uStack_150;
  uVar15 = local_158;
  uVar13 = local_168._8_8_;
  uVar11 = local_168._0_8_;
  pMVar5 = MethodInfo_System_Collections_Generic_List_MapLoader_NavMeshBuild_Add;
  local_f0._0_4_ = (bounds->fields).m_Extents.fields.y;
  local_f0._4_4_ = (bounds->fields).m_Extents.fields.z;
  local_100._0_4_ = (bounds->fields).m_Center.fields.x;
  local_100._4_4_ = (bounds->fields).m_Center.fields.y;
  local_100._8_8_ = *(undefined8 *)&(bounds->fields).m_Center.fields.z;
  pSStack_140 = pSVar6;
  pSStack_138 = pSVar7;
  pSStack_130 = pSVar8;
  pSStack_128 = pSVar9;
  local_168.m_XMin = (float)uVar10;
  local_168.m_YMin = SUB84(uVar10,4);
  local_120.m_XMin = local_168.m_XMin;
  local_120.m_YMin = local_168.m_YMin;
  local_168.m_Width = (float)uVar12;
  local_168.m_Height = SUB84(uVar12,4);
  local_120.m_Width = local_168.m_Width;
  local_120.m_Height = local_168.m_Height;
  local_158._0_4_ = (int32_t)uVar14;
  local_158._4_4_ = SUB84(uVar14,4);
  local_110._0_4_ = (int32_t)local_158;
  local_110._4_4_ = local_158._4_4_;
  uStack_150._0_4_ = (int32_t)uVar16;
  uStack_150._4_4_ = SUB84(uVar16,4);
  uStack_108._0_4_ = (int32_t)uStack_150;
  uStack_108._4_4_ = uStack_150._4_4_;
  local_168._0_8_ = uVar11;
  local_168._8_8_ = uVar13;
  local_158 = uVar15;
  uStack_150 = uVar17;
  if (__this != (System_Collections_Generic_List_MapLoader_NavMeshBuild__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pMVar3 = (__this->fields)._items;
    if (pMVar3 != (Map_MapLoader_NavMeshBuild_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pMVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        if ((uint)pMVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pMVar3->m_Items[(int)uVar2].fields.Data = local_148;
        *(System_Int32_array **)&pMVar3->m_Items[(int)uVar2].fields.Settings.fields = pSVar6;
        pMVar4 = &pMVar3->m_Items[(int)uVar2].fields;
        *(System_String_o **)&(pMVar4->Settings).fields.m_AgentHeight = pSVar7;
        *(System_String_o **)&(pMVar4->Settings).fields.m_AgentClimb = pSVar8;
        pMVar4 = &pMVar3->m_Items[(int)uVar2].fields;
        *(System_String_o **)&(pMVar4->Settings).fields.m_MaxJumpAcrossDistance = pSVar9;
        local_168.m_XMin = (float)uVar10;
        local_168.m_YMin = SUB84(uVar10,4);
        (pMVar4->Settings).fields.m_OverrideVoxelSize = (int32_t)local_168.m_XMin;
        (pMVar4->Settings).fields.m_VoxelSize = local_168.m_YMin;
        pMVar4 = &pMVar3->m_Items[(int)uVar2].fields;
        local_168.m_Width = (float)uVar12;
        local_168.m_Height = SUB84(uVar12,4);
        (pMVar4->Settings).fields.m_OverrideTileSize = (int32_t)local_168.m_Width;
        (pMVar4->Settings).fields.m_TileSize = (int32_t)local_168.m_Height;
        local_158._0_4_ = (int32_t)uVar14;
        local_158._4_4_ = SUB84(uVar14,4);
        (pMVar4->Settings).fields.m_BuildHeightMesh = (int32_t)local_158;
        (pMVar4->Settings).fields.m_MaxJobWorkers = local_158._4_4_;
        pMVar4 = &pMVar3->m_Items[(int)uVar2].fields;
        *(undefined8 *)&(pMVar4->Settings).fields.m_PreserveTilesOutsideBounds = uVar16;
        *(undefined8 *)&(pMVar4->Bounds).fields.m_Center.fields = local_100._0_8_;
        pMVar4 = &pMVar3->m_Items[(int)uVar2].fields;
        *(undefined8 *)((longlong)&(pMVar4->Bounds).fields.m_Center.fields + 8) = local_100._8_8_;
        *(undefined8 *)((longlong)&(pMVar4->Bounds).fields.m_Extents.fields + 4) = local_f0;
        Il2CppCodeGenWriteBarrier((void **)(pMVar3->m_Items + (int)uVar2),(void *)0x0);
      }
      else {
        local_e8._0_8_ = local_148;
        local_e8._8_8_ = pSVar6;
        local_d8 = pSVar7;
        pSStack_d0 = pSVar8;
        local_c8 = pSVar9;
        local_168.m_XMin = (float)uVar10;
        local_168.m_YMin = SUB84(uVar10,4);
        aUStack_c0[0].m_XMin = local_168.m_XMin;
        aUStack_c0[0].m_YMin = local_168.m_YMin;
        local_168.m_Width = (float)uVar12;
        local_168.m_Height = SUB84(uVar12,4);
        aUStack_c0[0].m_Width = local_168.m_Width;
        aUStack_c0[0].m_Height = local_168.m_Height;
        local_158._0_4_ = (int32_t)uVar14;
        local_158._4_4_ = SUB84(uVar14,4);
        aUStack_c0[1].m_XMin = (float)(int32_t)local_158;
        aUStack_c0[1].m_YMin = (float)local_158._4_4_;
        uStack_150._0_4_ = (int32_t)uVar16;
        uStack_150._4_4_ = SUB84(uVar16,4);
        aUStack_c0[1].m_Width = (float)(int32_t)uStack_150;
        aUStack_c0[1].m_Height = (float)uStack_150._4_4_;
        aUStack_a0[0]._0_8_ = local_100._0_8_;
        aUStack_a0._8_8_ = local_100._8_8_;
        aUStack_a0[1]._4_8_ = local_f0;
        System_Collections_Generic_List_MapLoader_NavMeshBuild___AddWithResize
                  (__this,(Map_MapLoader_NavMeshBuild_o *)local_e8,
                   (MethodInfo_9D5470 *)pMVar5->klass->rgctx_data[0xe].method);
      }
      UnityEngine_AI_NavMesh__AddNavMeshData(__this_00,(MethodInfo *)0x0);
      local_88[0].fields.m_Center.fields.x = (bounds->fields).m_Center.fields.x;
      local_88[0].fields.m_Center.fields.y = (bounds->fields).m_Center.fields.y;
      local_88[0].fields._8_8_ = *(undefined8 *)&(bounds->fields).m_Center.fields.z;
      local_88[0].fields.m_Extents.fields.y = (bounds->fields).m_Extents.fields.y;
      local_88[0].fields.m_Extents.fields.z = (bounds->fields).m_Extents.fields.z;
      local_e8._0_8_ = local_188;
      local_e8._8_8_ = pSStack_180;
      local_d8 = local_178;
      pSStack_d0 = pSStack_170;
      local_c8 = (System_String_o *)local_168._0_8_;
      aUStack_c0[0].m_XMin = local_168.m_Width;
      aUStack_c0[0].m_YMin = local_168.m_Height;
      aUStack_c0[0].m_Width = (float)(int32_t)local_158;
      aUStack_c0[0].m_Height = (float)local_158._4_4_;
      aUStack_c0[1].m_XMin = (float)(int32_t)uStack_150;
      aUStack_c0[1].m_YMin = (float)uStack_150._4_4_;
      pUVar19 = UnityEngine_AI_NavMeshBuilder__UpdateNavMeshDataAsync
                          (__this_00,(UnityEngine_AI_NavMeshBuildSettings_o *)local_e8,
                           TypeInfo_Map_MapLoader->static_fields->_navMeshSources,local_88,(MethodInfo *)0x0);
      return pUVar19;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$RemoveNavMeshSources
// il2cpp: void Map_MapLoader__RemoveNavMeshSources (System_Collections_Generic_HashSet_Component__o* components, const MethodInfo* method);
// 0x181eadc50

void Map_MapLoader__RemoveNavMeshSources
               (System_Collections_Generic_HashSet_Component__o *components,MethodInfo *method)

{
  System_Collections_Generic_List_NavMeshBuildSource__o *__this;
  Map_MapLoader_o *__this_00;
  bool bVar1;
  int32_t iVar2;
  Map_MapLoader___c__DisplayClass54_0_o *object;
  System_Predicate_T__o *__this_01;
  Map_MapLoader__RefreshNavMesh_d__55_o *routine;
  UnityEngine_Coroutine_o *value;
  
  if (Il2CppMethodInitialized_1843450b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_NavMeshBuildSource_RemoveAll);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_NavMeshBuildSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_MapLoader_c__DisplayClass54_0_RemoveNavMeshSources_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader_c__DisplayClass54_0);
    Il2CppMethodInitialized_1843450b2 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapLoader_c__DisplayClass54_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Map_MapLoader___c__DisplayClass54_0_o *)0x0) {
    (object->fields).components = components;
    Il2CppCodeGenWriteBarrier(&(object->fields).components,components);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    bVar1 = Map_MapLoader__get_HasNavMesh((MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this = TypeInfo_Map_MapLoader->static_fields->_navMeshSources;
      __this_01 = (System_Predicate_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_NavMeshBuildSource);
      System_Predicate_NavMeshBuildSource____ctor
                (__this_01,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_Map_MapLoader_c__DisplayClass54_0_RemoveNavMeshSources_b__0,
                 (MethodInfo_B62300 *)0x0);
      if (__this == (System_Collections_Generic_List_NavMeshBuildSource__o *)0x0) goto label_181eade87;
      iVar2 = System_Collections_Generic_List_NavMeshBuildSource___RemoveAll
                        (__this,__this_01,
                         (MethodInfo_946A00 *)
                         MethodInfo_System_Collections_Generic_List_NavMeshBuildSource_RemoveAll);
      if (iVar2 != 0) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        TypeInfo_Map_MapLoader->static_fields->_navMeshModified = true;
        TypeInfo_Map_MapLoader->static_fields->_navMeshRefreshPending = true;
        if (TypeInfo_Map_MapLoader->static_fields->_navMeshRefresh == (UnityEngine_Coroutine_o *)0x0) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          __this_00 = TypeInfo_Map_MapLoader->static_fields->_instance;
          if (Il2CppMethodInitialized_1843450b3 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader_RefreshNavMesh_d__55);
            Il2CppMethodInitialized_1843450b3 = '\x01';
          }
          routine = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapLoader_RefreshNavMesh_d__55);
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
          (routine->fields).__1__state = 0;
          if (__this_00 == (Map_MapLoader_o *)0x0) goto label_181eade87;
          value = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                            ((UnityEngine_MonoBehaviour_o *)__this_00,
                             (System_Collections_IEnumerator_o *)routine,(MethodInfo *)0x0);
          TypeInfo_Map_MapLoader->static_fields->_navMeshRefresh = value;
          Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->_navMeshRefresh,value);
        }
      }
    }
    return;
  }
label_181eade87:
  ThrowNullReferenceException();
}


// Map.MapLoader$$RefreshNavMesh
// il2cpp: System_Collections_IEnumerator_o* Map_MapLoader__RefreshNavMesh (const MethodInfo* method);
// 0x181ead770

System_Collections_IEnumerator_o * Map_MapLoader__RefreshNavMesh(MethodInfo *method)

{
  Map_MapLoader__RefreshNavMesh_d__55_o *__this;
  
  if (Il2CppMethodInitialized_1843450b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader_RefreshNavMesh_d__55);
    Il2CppMethodInitialized_1843450b3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapLoader_RefreshNavMesh_d__55);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  return (System_Collections_IEnumerator_o *)__this;
}


// Map.MapLoader$$StopNavMeshRefresh
// il2cpp: void Map_MapLoader__StopNavMeshRefresh (const MethodInfo* method);
// 0x181eb1170

void Map_MapLoader__StopNavMeshRefresh(MethodInfo *method)

{
  Map_MapLoader_o *__this;
  
  if (Il2CppMethodInitialized_1843450b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_1843450b4 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  if (TypeInfo_Map_MapLoader->static_fields->_navMeshRefresh != (UnityEngine_Coroutine_o *)0x0) {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this = TypeInfo_Map_MapLoader->static_fields->_instance;
    if (__this == (Map_MapLoader_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
              ((UnityEngine_MonoBehaviour_o *)__this,TypeInfo_Map_MapLoader->static_fields->_navMeshRefresh,
               (MethodInfo *)0x0);
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  TypeInfo_Map_MapLoader->static_fields->_navMeshRefresh = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->_navMeshRefresh,(void *)0x0);
  TypeInfo_Map_MapLoader->static_fields->_navMeshRefreshPending = false;
  return;
}


// Map.MapLoader$$UpdateNavMesh
// il2cpp: System_Threading_Tasks_Task_o* Map_MapLoader__UpdateNavMesh (const MethodInfo* method);
// 0x181eb1f20

System_Threading_Tasks_Task_o * Map_MapLoader__UpdateNavMesh(MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  System_Threading_Tasks_Task_o *pSVar2;
  MethodInfo *in_R8;
  UnityEngine_Bounds_o local_48;
  Map_MapLoader__UpdateNavMesh_d__58_Fields local_30;
  
  if (Il2CppMethodInitialized_1843450b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start_MapLoader_UpdateNavMesh_d__58
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
    Il2CppMethodInitialized_1843450b5 = '\x01';
  }
  local_30.__1__state = 0;
  local_30._4_4_ = 0;
  local_30.__t__builder.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_30.__u__1.fields.m_task =
       (System_Runtime_CompilerServices_TaskAwaiter_Fields)(System_Threading_Tasks_Task_o *)0x0;
  local_30.__t__builder.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
       (System_Action_o *)0x0;
  local_30.__t__builder.fields.m_builder.fields.m_task = (System_Threading_Tasks_Task_TResult__o *)0x0;
  if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
  }
  pUVar1 = TMPro_TMP_Text__GetCompoundBounds(&local_48,(TMPro_TMP_Text_o *)0x0,in_R8);
  local_30.__t__builder.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
       *(System_Runtime_CompilerServices_IAsyncStateMachine_o **)&(pUVar1->fields).m_Center.fields;
  local_30.__t__builder.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
       *(System_Action_o **)&(pUVar1->fields).m_Center.fields.z;
  local_30.__t__builder.fields.m_builder.fields.m_task =
       *(System_Threading_Tasks_Task_TResult__o **)&(pUVar1->fields).m_Extents.fields.y;
  Il2CppCodeGenWriteBarrier((void **)&local_30.__t__builder,(void *)0x0);
  local_30.__1__state = -1;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_MapLoader__UpdateNavMesh_d__58_
            (&local_30.__t__builder,(Map_MapLoader__UpdateNavMesh_d__58_o *)&local_30,
             (MethodInfo_61B570 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start_MapLoader_UpdateNavMesh_d__58
            );
  pSVar2 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task
                     (&local_30.__t__builder,(MethodInfo *)0x0);
  return pSVar2;
}


// Map.MapLoader$$UpdateAllNavMeshes
// il2cpp: System_Threading_Tasks_Task_o* Map_MapLoader__UpdateAllNavMeshes (Map_MapLoader_o* __this, const MethodInfo* method);
// 0x181eb1e50

System_Threading_Tasks_Task_o * Map_MapLoader__UpdateAllNavMeshes(Map_MapLoader_o *__this,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  System_Threading_Tasks_Task_o *pSVar2;
  MethodInfo *in_R8;
  UnityEngine_Bounds_o local_58;
  Map_MapLoader__UpdateAllNavMeshes_d__59_Fields local_40;
  
  if (Il2CppMethodInitialized_1843450b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start_MapLoader_UpdateAllNavMeshes_d__59
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
    Il2CppMethodInitialized_1843450b6 = '\x01';
  }
  local_40.__1__state = 0;
  local_40._4_4_ = 0;
  local_40.__t__builder.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_40.__t__builder.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
       (System_Action_o *)0x0;
  local_40.__t__builder.fields.m_builder.fields.m_task = (System_Threading_Tasks_Task_TResult__o *)0x0;
  local_40.__4__this = (Map_MapLoader_o *)0x0;
  local_40.__u__1.fields.m_task =
       (System_Runtime_CompilerServices_TaskAwaiter_Fields)(System_Threading_Tasks_Task_o *)0x0;
  if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
  }
  pUVar1 = TMPro_TMP_Text__GetCompoundBounds(&local_58,(TMPro_TMP_Text_o *)0x0,in_R8);
  local_40.__t__builder.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
       *(System_Runtime_CompilerServices_IAsyncStateMachine_o **)&(pUVar1->fields).m_Center.fields;
  local_40.__t__builder.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
       *(System_Action_o **)&(pUVar1->fields).m_Center.fields.z;
  local_40.__t__builder.fields.m_builder.fields.m_task =
       *(System_Threading_Tasks_Task_TResult__o **)&(pUVar1->fields).m_Extents.fields.y;
  Il2CppCodeGenWriteBarrier((void **)&local_40.__t__builder,(void *)0x0);
  local_40.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_40.__4__this,__this);
  local_40.__1__state = -1;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_MapLoader__UpdateAllNavMeshes_d__59_
            (&local_40.__t__builder,(Map_MapLoader__UpdateAllNavMeshes_d__59_o *)&local_40,
             (MethodInfo_61B4B0 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start_MapLoader_UpdateAllNavMeshes_d__59
            );
  pSVar2 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task
                     (&local_40.__t__builder,(MethodInfo *)0x0);
  return pSVar2;
}


// Map.MapLoader$$GenerateNavMesh
// il2cpp: System_Threading_Tasks_Task_o* Map_MapLoader__GenerateNavMesh (Map_MapLoader_o* __this, const MethodInfo* method);
// 0x181eab0c0

System_Threading_Tasks_Task_o * Map_MapLoader__GenerateNavMesh(Map_MapLoader_o *__this,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  System_Threading_Tasks_Task_o *pSVar2;
  MethodInfo *in_R8;
  UnityEngine_Bounds_o local_78;
  Map_MapLoader__GenerateNavMesh_d__60_Fields local_58;
  
  if (Il2CppMethodInitialized_1843450b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start_MapLoader_GenerateNavMesh_d__60
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
    Il2CppMethodInitialized_1843450b7 = '\x01';
  }
  local_58.__1__state = 0;
  local_58._4_4_ = 0;
  local_58.__t__builder.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
       (System_Runtime_CompilerServices_IAsyncStateMachine_o *)0x0;
  local_58.__u__1.fields._awaited = (UnityEngine_Awaitable_Awaiter_Fields)(UnityEngine_Awaitable_o *)0x0;
  local_58.__t__builder.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
       (System_Action_o *)0x0;
  local_58.__t__builder.fields.m_builder.fields.m_task = (System_Threading_Tasks_Task_TResult__o *)0x0;
  local_58.__4__this = (Map_MapLoader_o *)0x0;
  local_58.__7__wrap1.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.__7__wrap1.fields._index = 0;
  local_58.__7__wrap1.fields._version = 0;
  local_58.__7__wrap1.fields._current = (UnityEngine_AsyncOperation_o *)0x0;
  if ((TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder);
  }
  pUVar1 = TMPro_TMP_Text__GetCompoundBounds(&local_78,(TMPro_TMP_Text_o *)0x0,in_R8);
  local_58.__t__builder.fields.m_builder.fields.m_coreState.fields.m_stateMachine =
       *(System_Runtime_CompilerServices_IAsyncStateMachine_o **)&(pUVar1->fields).m_Center.fields;
  local_58.__t__builder.fields.m_builder.fields.m_coreState.fields.m_defaultContextAction =
       *(System_Action_o **)&(pUVar1->fields).m_Center.fields.z;
  local_58.__t__builder.fields.m_builder.fields.m_task =
       *(System_Threading_Tasks_Task_TResult__o **)&(pUVar1->fields).m_Extents.fields.y;
  Il2CppCodeGenWriteBarrier((void **)&local_58.__t__builder,(void *)0x0);
  local_58.__4__this = __this;
  Il2CppCodeGenWriteBarrier(&local_58.__4__this,__this);
  local_58.__1__state = -1;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Start_MapLoader__GenerateNavMesh_d__60_
            (&local_58.__t__builder,(Map_MapLoader__GenerateNavMesh_d__60_o *)&local_58,
             (MethodInfo_619830 *)
             MethodInfo_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start_MapLoader_GenerateNavMesh_d__60
            );
  pSVar2 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task
                     (&local_58.__t__builder,(MethodInfo *)0x0);
  return pSVar2;
}


// Map.MapLoader$$Batch
// il2cpp: void Map_MapLoader__Batch (Map_MapLoader_o* __this, const MethodInfo* method);
// 0x181ea8570
// eh: try 0x181ea8afa..0x181ea9910 -> pad 0x18333d520 (+9 call sites) catch Il2CppExceptionWrapper
// asm: 108 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ea8dda: nop word ptr [rax + rax]
// asm:   0x181ea93d7: mov rdx, qword ptr [rip + 0x22067ca]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
// asm:   0x181ea93de: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181ea93e3: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181ea93e8: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181ea93ed: test rcx, rcx
// asm:   0x181ea93f0: jne 0x181ea98e3
// asm:   0x181ea93f6: mov r15, qword ptr [rsp + 0xf0]
// asm:   0x181ea93fe: mov rsi, qword ptr [rsp + 0x48]
// asm:   0x181ea9403: mov qword ptr [rsp + 0x38], rsi
// asm:   0x181ea9408: mov r13, qword ptr [rsp + 0x50]
// asm:   0x181ea949f: nop 
// asm:   0x181ea9524: mov rdx, qword ptr [rip + 0x2211e35]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_GameObject_Dispose
// asm:   0x181ea952b: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181ea9530: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181ea9535: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181ea953a: test rcx, rcx
// asm:   0x181ea953d: jne 0x181ea98ef
// asm:   0x181ea9543: mov rsi, qword ptr [rsp + 0x48]
// asm:   0x181ea9548: mov qword ptr [rsp + 0x38], rsi
// asm:   0x181ea954d: mov r13, qword ptr [rsp + 0x50]
// asm:   0x181ea9552: mov r14, qword ptr [rsp + 0x40]
// asm:   0x181ea95be: nop 
// asm:   0x181ea96bf: mov rdx, qword ptr [rip + 0x21d6e22]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x181ea96c6: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181ea96cb: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181ea96d0: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181ea96d5: test rcx, rcx
// asm:   0x181ea96d8: jne 0x181ea9905
// asm:   0x181ea96de: mov rsi, qword ptr [rsp + 0x48]
// asm:   0x181ea96e3: mov qword ptr [rsp + 0x38], rsi
// asm:   0x181ea96e8: mov r13, qword ptr [rsp + 0x50]
// asm:   0x181ea96ed: mov r14, qword ptr [rsp + 0x40]
// asm:   0x181ea96f2: jmp 0x181ea95c0
// asm:   0x181ea970a: mov rdx, qword ptr [rip + 0x220dd4f]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_List_GameObject_Dispose
// asm:   0x181ea9711: mov rcx, qword ptr [rsp + 0x78]
// asm:   0x181ea9716: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181ea971b: mov rcx, qword ptr [rsp + 0x70]
// asm:   0x181ea9720: test rcx, rcx
// asm:   0x181ea9723: jne 0x181ea9910
// asm:   0x181ea9729: mov r14, qword ptr [rsp + 0x40]
// asm:   0x181ea977d: nop dword ptr [rax]
// asm:   0x181ea97cc: mov rdx, qword ptr [rip + 0x21d6d15]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x181ea97d3: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181ea97d8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181ea97dd: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181ea97e2: test rcx, rcx
// asm:   0x181ea97e5: jne 0x181ea9916
// asm:   0x181ea98e3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181ea98ef: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181ea9905: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181ea9910: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181ea9916: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183316da0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183316da5: push rbp
// asm:   0x183316da6: sub rsp, 0x20
// asm:   0x183316daa: mov rbp, rdx
// asm:   0x183316dad: mov rax, qword ptr [rbp + 0x120]
// asm:   0x183316db4: mov rcx, qword ptr [rax]
// asm:   0x183316db7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183316dbb: movabs rax, 0
// asm:   0x183316dc5: add rsp, 0x20
// asm:   0x183316dc9: pop rbp
// asm:   0x183316dca: ret 
// asm:   0x183316e50: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183316e55: push rbp
// asm:   0x183316e56: sub rsp, 0x20
// asm:   0x183316e5a: mov rbp, rdx
// asm:   0x183316e5d: mov rax, qword ptr [rbp + 0x130]
// asm:   0x183316e64: mov rcx, qword ptr [rax]
// asm:   0x183316e67: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183316e6b: movabs rax, 0
// asm:   0x183316e75: add rsp, 0x20
// asm:   0x183316e79: pop rbp
// asm:   0x183316e7a: ret 
// asm:   0x183316fb0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183316fb5: push rbp
// asm:   0x183316fb6: sub rsp, 0x20
// asm:   0x183316fba: mov rbp, rdx
// asm:   0x183316fbd: mov rax, qword ptr [rbp + 0x118]
// asm:   0x183316fc4: mov rcx, qword ptr [rax]
// asm:   0x183316fc7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183316fcb: movabs rax, 0
// asm:   0x183316fd5: add rsp, 0x20
// asm:   0x183316fd9: pop rbp
// asm:   0x183316fda: ret 
// asm:   0x18333d520: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d525: push rbp
// asm:   0x18333d526: sub rsp, 0x20
// asm:   0x18333d52a: mov rbp, rdx
// asm:   0x18333d52d: mov rax, qword ptr [rbp + 0x110]
// asm:   0x18333d534: mov rcx, qword ptr [rax]
// asm:   0x18333d537: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18333d53b: movabs rax, 0
// asm:   0x18333d545: add rsp, 0x20
// asm:   0x18333d549: pop rbp
// asm:   0x18333d54a: ret 
// asm:   0x18333d550: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d555: push rbp
// asm:   0x18333d556: sub rsp, 0x20
// asm:   0x18333d55a: mov rbp, rdx
// asm:   0x18333d55d: mov rax, qword ptr [rbp + 0x128]
// asm:   0x18333d564: mov rcx, qword ptr [rax]
// asm:   0x18333d567: mov qword ptr [rbp + 0x70], rcx
// asm:   0x18333d56b: movabs rax, 0
// asm:   0x18333d575: add rsp, 0x20
// asm:   0x18333d579: pop rbp
// asm:   0x18333d57a: ret 

void Map_MapLoader__Batch(Map_MapLoader_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  System_Collections_Generic_Dictionary_int__MapObject__o *__this_00;
  System_Collections_Generic_Dictionary_int__ulong__o *__this_01;
  longlong *plVar5;
  UnityEngine_Component_o *__this_02;
  System_Collections_Generic_List_string__o *pSVar6;
  bool bVar7;
  int32_t iVar8;
  int iVar9;
  System_Collections_Generic_Dictionary_string__GameObject__o *__this_03;
  System_Collections_Generic_Dictionary_string__List_GameObject___o *pSVar10;
  System_Collections_Generic_Dictionary_GameObject__Transform__o *pSVar11;
  System_Collections_Generic_Dictionary_string__int__o *__this_04;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_GameObject_o *pUVar13;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_Transform_o *pUVar15;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar16;
  uint64_t uVar17;
  UnityEngine_Vector3_o *pUVar18;
  System_String_array *values;
  System_String_o *pSVar19;
  UnityEngine_Object_o *pUVar20;
  UnityEngine_Material_array *pUVar21;
  UnityEngine_Object_o *pUVar22;
  UnityEngine_Material_o *pUVar23;
  UnityEngine_Mesh_o *__this_05;
  System_String_o *pSVar24;
  System_Collections_Generic_List_GameObject__o *__this_06;
  Il2CppObject *pIVar25;
  System_Collections_Generic_Dictionary_GameObject__Transform__o *__this_07;
  System_Collections_Generic_List_T__o *__this_08;
  uint local_res18 [2];
  int32_t local_res20 [2];
  undefined1 local_198 [16];
  Il2CppObject *local_188;
  System_Collections_Generic_Dictionary_string__List_GameObject___o *local_180;
  System_Collections_Generic_Dictionary_GameObject__Transform__o *local_178;
  System_Collections_Generic_Dictionary_string__List_GameObject___o *local_170;
  System_Collections_Generic_Dictionary_GameObject__Transform__o *local_168;
  System_Collections_Generic_List_Enumerator_object__o local_160;
  undefined1 local_148 [16];
  undefined1 local_138 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_130;
  Il2CppObject *local_128;
  undefined1 local_120 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_118;
  Il2CppObject *local_110;
  undefined1 local_108 [8];
  uint64_t uStack_100;
  Il2CppObject *local_f8;
  System_String_o *local_f0;
  UnityEngine_GameObject_o *local_e8;
  System_Collections_Generic_Dictionary_string__GameObject__o *local_e0;
  System_Object_array *local_d8;
  UnityEngine_GameObject_o *local_d0;
  System_Collections_Generic_Dictionary_string__GameObject__o *local_c8;
  System_Collections_Generic_List_Enumerator_T__o local_c0 [5];
  
  if (Il2CppMethodInitialized_1843450b8 == '\0') {
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
    Il2CppMethodInitialized_1843450b8 = '\x01';
  }
  local_138 = (undefined1  [8])0x0;
  pSStack_130 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_128 = (Il2CppObject *)0x0;
  local_res18[0] = 0;
  local_res20[0] = 0;
  local_120 = (undefined1  [8])0x0;
  pSStack_118 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_110 = (Il2CppObject *)0x0;
  local_108 = (undefined1  [8])0x0;
  uStack_100 = 0;
  local_f8 = (Il2CppObject *)0x0;
  local_160.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_160.fields._index = 0;
  local_160.fields._version = 0;
  local_160.fields._current = (Il2CppObject *)0x0;
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_GameObject);
  local_e0 = __this_03;
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ctor);
  pSVar10 = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_List_GameObject);
  local_180 = pSVar10;
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_ctor);
  pSVar11 = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_GameObject_Transform);
  local_178 = pSVar11;
  System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_GameObject_Transform_ctor)
  ;
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
  pUVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor(pUVar12,"Batched Scene",(MethodInfo *)0x0);
  pUVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  local_d0 = pUVar13;
  UnityEngine_GameObject___ctor(pUVar13,"Original Objects",(MethodInfo *)0x0);
  if (((pUVar13 != (UnityEngine_GameObject_o *)0x0) &&
      (pUVar14 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0),
      pUVar12 != (UnityEngine_GameObject_o *)0x0)) &&
     (pUVar15 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0),
     pUVar14 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetParent(pUVar14,pUVar15,(MethodInfo *)0x0);
    pUVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    local_e8 = pUVar13;
    UnityEngine_GameObject___ctor(pUVar13,"Combined Meshes",(MethodInfo *)0x0);
    if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
      pUVar14 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
      pUVar15 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
      if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(pUVar14,pUVar15,(MethodInfo *)0x0);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        __this_00 = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if ((__this_00 != (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) &&
           (pSVar16 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                                 (MethodInfo_13C6500 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Keys),
           pSVar16 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
          local_170 = pSVar10;
          local_168 = pSVar11;
          local_c8 = __this_03;
          System_Collections_Generic_Dictionary_ValueCollection_StylePropertyAnimationSystem_ElementPropertyPair__Int32Enum___GetEnumerator
                    ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                     local_198,pSVar16,
                     (MethodInfo_F1E550 *)
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_MapObject_GetEnumerator
                    );
          local_138 = (undefined1  [8])local_198._0_8_;
          pSStack_130 = (System_Collections_Generic_List_Enumerator_object__o *)local_198._8_8_;
          local_128 = local_188;
          local_198._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_198._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_138;
          while (bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_uint__object___MoveNext
                                   ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                     *)local_138,
                                    (MethodInfo_15638A0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_MoveNext
                                   ), bVar7) {
            iVar8 = (int32_t)local_128;
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            __this_01 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                        TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (__this_01 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
              ThrowNullReferenceException();
            }
            uVar17 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                               (__this_01,iVar8,
                                (MethodInfo_14156F0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
            if (uVar17 == 0) {
              ThrowNullReferenceException();
            }
            plVar5 = *(longlong **)(uVar17 + 0x20);
            if (plVar5 == (longlong *)0x0) {
              ThrowNullReferenceException();
            }
            if ((*(int *)((longlong)plVar5 + 0x24) < 0) && (*(char *)((longlong)plVar5 + 0x29) != '\0')) {
              bVar4 = (TypeInfo_Map_MapScriptSceneObject->_2).typeHierarchyDepth;
              if ((*(byte *)(*plVar5 + 0x130) < bVar4) ||
                 (*(Map_MapScriptSceneObject_c **)(*(longlong *)(*plVar5 + 200) + -8 + (ulonglong)bVar4 * 8)
                  != TypeInfo_Map_MapScriptSceneObject)) {
                il2cpp_codegen_raise_invalid_cast_exception(plVar5);
              }
              if (plVar5[0xf] == 0) {
                ThrowNullReferenceException();
              }
              pSVar19 = *(System_String_o **)(plVar5[0xf] + 0x10);
              if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
              }
              bVar7 = Map_MapObjectShader__IsLegacyShader(pSVar19,(MethodInfo *)0x0);
              if (!bVar7) {
                if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
                }
                bVar7 = System_String__op_Equality
                                  (pSVar19,TypeInfo_Map_MapObjectShader->static_fields->Transparent,
                                   (MethodInfo *)0x0);
                if (!bVar7) {
                  if (*(UnityEngine_GameObject_o **)(uVar17 + 0x18) == (UnityEngine_GameObject_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar14 = UnityEngine_GameObject__get_transform
                                      (*(UnityEngine_GameObject_o **)(uVar17 + 0x18),(MethodInfo *)0x0);
                  if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar18 = UnityEngine_Transform__get_position
                                      ((UnityEngine_Vector3_o *)local_148,pUVar14,(MethodInfo *)0x0);
                  fVar1 = (pUVar18->fields).x;
                  fVar2 = (pUVar18->fields).y;
                  fVar3 = (pUVar18->fields).z;
                  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
                  local_res18[0] = (uint)(fVar1 / 1000.0);
                  pSVar19 = System_Int32__ToString((int32_t *)local_res18,(MethodInfo *)0x0);
                  if (values == (System_String_array *)0x0) {
                    ThrowNullReferenceException();
                  }
                  if ((int)values->max_length == 0) {
                    ThrowIndexOutOfRangeException();
                  }
                  values->m_Items[0] = pSVar19;
                  Il2CppCodeGenWriteBarrier(values->m_Items,pSVar19);
                  pSVar19 = "-";
                  if ((uint)values->max_length < 2) {
                    ThrowIndexOutOfRangeException();
                  }
                  values->m_Items[1] = "-";
                  Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar19);
                  local_res18[0] = (uint)(fVar2 / 1000.0);
                  pSVar19 = System_Int32__ToString((int32_t *)local_res18,(MethodInfo *)0x0);
                  if ((uint)values->max_length < 3) {
                    ThrowIndexOutOfRangeException();
                  }
                  values->m_Items[2] = pSVar19;
                  Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar19);
                  pSVar19 = "-";
                  if ((uint)values->max_length < 4) {
                    ThrowIndexOutOfRangeException();
                  }
                  values->m_Items[3] = "-";
                  Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar19);
                  local_res18[0] = (uint)(fVar3 / 1000.0);
                  pSVar19 = System_Int32__ToString((int32_t *)local_res18,(MethodInfo *)0x0);
                  if ((uint)values->max_length < 5) {
                    ThrowIndexOutOfRangeException();
                  }
                  values->m_Items[4] = pSVar19;
                  Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar19);
                  local_f0 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
                  if (*(UnityEngine_GameObject_o **)(uVar17 + 0x18) == (UnityEngine_GameObject_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  local_d8 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                                       (*(UnityEngine_GameObject_o **)(uVar17 + 0x18),
                                        (MethodInfo_6F5810 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
                  local_res18[0] = 0;
                  if (local_d8 == (System_Object_array *)0x0) {
                    ThrowNullReferenceException();
                  }
                  for (; (int)local_res18[0] < (int)local_d8->max_length; local_res18[0] = local_res18[0] + 1)
                  {
                    if ((uint)local_d8->max_length <= local_res18[0]) {
                      ThrowIndexOutOfRangeException();
                    }
                    __this_02 = (UnityEngine_Component_o *)local_d8->m_Items[(int)local_res18[0]];
                    if (__this_02 == (UnityEngine_Component_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    pUVar20 = (UnityEngine_Object_o *)
                              UnityEngine_Component__GetComponent_object_
                                        (__this_02,
                                         (MethodInfo_6651A0 *)
                                         MethodInfo_UnityEngine_Component_GetComponent_Renderer);
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar7 = UnityEngine_Object__op_Equality
                                      (pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    if (!bVar7) {
                      if (pUVar20 == (UnityEngine_Object_o *)0x0) {
                        ThrowNullReferenceException();
                      }
                      pUVar21 = UnityEngine_Renderer__get_sharedMaterials
                                          ((UnityEngine_Renderer_o *)pUVar20,(MethodInfo *)0x0);
                      if (pUVar21 == (UnityEngine_Material_array *)0x0) {
                        ThrowNullReferenceException();
                      }
                      if (((int)pUVar21->max_length < 2) &&
                         (bVar7 = UnityEngine_Renderer__HasPropertyBlock
                                            ((UnityEngine_Renderer_o *)pUVar20,(MethodInfo *)0x0), !bVar7)) {
                        pUVar22 = (UnityEngine_Object_o *)
                                  UnityEngine_MeshFilter__get_sharedMesh
                                            ((UnityEngine_MeshFilter_o *)__this_02,(MethodInfo *)0x0);
                        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                        }
                        bVar7 = UnityEngine_Object__op_Equality
                                          (pUVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        if (bVar7) {
                          if (*(longlong *)(uVar17 + 0x20) == 0) {
                            ThrowNullReferenceException();
                          }
                          pSVar19 = System_String__Concat_1969b70
                                              ("Map load error: object ",
                                               *(System_String_o **)(*(longlong *)(uVar17 + 0x20) + 0x30),
                                               " with missing mesh",(MethodInfo *)0x0);
                          if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0)
                          {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
                          }
                          ApplicationManagers_DebugConsole__Log(pSVar19,true,(MethodInfo *)0x0);
                          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                          }
                          if (*(longlong *)(uVar17 + 0x20) == 0) {
                            ThrowNullReferenceException();
                          }
                          pSVar6 = TypeInfo_Map_MapLoader->static_fields->Errors;
                          System_String__Concat_1969e50
                                    ("Failed to load static object with no MeshFilter or SharedMesh: ",
                                     *(System_String_o **)(*(longlong *)(uVar17 + 0x20) + 0x30),
                                     (MethodInfo *)0x0);
                          if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          il2cpp_runtime_helper_180012890(pSVar6);
                        }
                        else {
                          pUVar23 = UnityEngine_Renderer__get_sharedMaterial
                                              ((UnityEngine_Renderer_o *)pUVar20,(MethodInfo *)0x0);
                          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                          }
                          bVar7 = UnityEngine_Object__op_Inequality
                                            ((UnityEngine_Object_o *)pUVar23,(UnityEngine_Object_o *)0x0,
                                             (MethodInfo *)0x0);
                          if (bVar7) {
                            pUVar23 = UnityEngine_Renderer__get_sharedMaterial
                                                ((UnityEngine_Renderer_o *)pUVar20,(MethodInfo *)0x0);
                            if (pUVar23 == (UnityEngine_Material_o *)0x0) {
                              ThrowNullReferenceException();
                            }
                            bVar7 = UnityEngine_Material__get_enableInstancing(pUVar23,(MethodInfo *)0x0);
                            if (bVar7) goto label_181ea92a4;
                          }
                          pUVar22 = (UnityEngine_Object_o *)
                                    UnityEngine_MeshFilter__get_sharedMesh
                                              ((UnityEngine_MeshFilter_o *)__this_02,(MethodInfo *)0x0);
                          if (pUVar22 == (UnityEngine_Object_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          local_res20[0] = UnityEngine_Object__GetInstanceID(pUVar22,(MethodInfo *)0x0);
                          pSVar19 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
                          pSVar19 = System_String__Concat_1969e50(pSVar19,local_f0,(MethodInfo *)0x0);
                          bVar7 = UnityEngine_Renderer__get_enabled
                                            ((UnityEngine_Renderer_o *)pUVar20,(MethodInfo *)0x0);
                          if (bVar7) {
                            pUVar23 = UnityEngine_Renderer__get_sharedMaterial
                                                ((UnityEngine_Renderer_o *)pUVar20,(MethodInfo *)0x0);
                            if (pUVar23 == (UnityEngine_Material_o *)0x0) {
                              ThrowNullReferenceException();
                            }
                            local_res20[0] =
                                 UnityEngine_Object__GetInstanceID
                                           ((UnityEngine_Object_o *)pUVar23,(MethodInfo *)0x0);
                            pSVar24 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
                            pSVar19 = System_String__Concat_1969e50(pSVar19,pSVar24,(MethodInfo *)0x0);
                          }
                          else {
                            pSVar19 = System_String__Concat_1969e50
                                                (pSVar19,"disabled",(MethodInfo *)0x0);
                          }
                          if (__this_04 == (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          bVar7 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                             __this_04,(Il2CppObject *)pSVar19,
                                             (MethodInfo_1455450 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_string_int_ContainsKey
                                            );
                          if (!bVar7) {
                            System_Collections_Generic_Dictionary_object__int___Add
                                      ((System_Collections_Generic_Dictionary_object__int__o *)__this_04,
                                       (Il2CppObject *)pSVar19,0,
                                       (MethodInfo_146B480 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
                          }
                          __this_05 = UnityEngine_MeshFilter__get_sharedMesh
                                                ((UnityEngine_MeshFilter_o *)__this_02,(MethodInfo *)0x0);
                          if (__this_05 == (UnityEngine_Mesh_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          iVar8 = UnityEngine_Mesh__get_vertexCount(__this_05,(MethodInfo *)0x0);
                          iVar9 = (int)(65000 / (longlong)iVar8);
                          if (iVar9 < 1) {
                            iVar9 = 1;
                          }
                          iVar8 = System_Collections_Generic_Dictionary_object__int___get_Item
                                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                             __this_04,(Il2CppObject *)pSVar19,
                                             (MethodInfo_147A530 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item
                                            );
                          System_Collections_Generic_Dictionary_object__int___set_Item
                                    ((System_Collections_Generic_Dictionary_object__int__o *)__this_04,
                                     (Il2CppObject *)pSVar19,iVar8 + 1,
                                     (MethodInfo_147A820 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item);
                          iVar8 = System_Collections_Generic_Dictionary_object__int___get_Item
                                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                             __this_04,(Il2CppObject *)pSVar19,
                                             (MethodInfo_147A530 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item
                                            );
                          local_res20[0] = iVar8 / iVar9;
                          pSVar24 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
                          pSVar19 = System_String__Concat_1969e50(pSVar19,pSVar24,(MethodInfo *)0x0);
                          if (__this_03 == (System_Collections_Generic_Dictionary_string__GameObject__o *)0x0)
                          {
                            ThrowNullReferenceException();
                          }
                          bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                             __this_03,(Il2CppObject *)pSVar19,
                                             (MethodInfo_1455450 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ContainsKey
                                            );
                          if (bVar7) {
                            if (local_180 ==
                                (System_Collections_Generic_Dictionary_string__List_GameObject___o *)0x0) {
                              ThrowNullReferenceException();
                            }
                          }
                          else {
                            pUVar20 = (UnityEngine_Object_o *)
                                      il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                            UnityEngine_GameObject___ctor_2f1ad20
                                      ((UnityEngine_GameObject_o *)pUVar20,(MethodInfo *)0x0);
                            if (*(longlong *)(uVar17 + 0x20) == 0) {
                              ThrowNullReferenceException();
                            }
                            pSVar24 = System_String__Concat_1969b70
                                                (*(System_String_o **)(*(longlong *)(uVar17 + 0x20) + 0x30),
                                                 " (Batched) ",pSVar19,(MethodInfo *)0x0);
                            if (pUVar20 == (UnityEngine_Object_o *)0x0) {
                              ThrowNullReferenceException();
                            }
                            UnityEngine_Object__set_name(pUVar20,pSVar24,(MethodInfo *)0x0);
                            if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
                            }
                            UnityEngine_GameObject__set_layer
                                      ((UnityEngine_GameObject_o *)pUVar20,
                                       TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities,
                                       (MethodInfo *)0x0);
                            pUVar14 = UnityEngine_GameObject__get_transform
                                                ((UnityEngine_GameObject_o *)pUVar20,(MethodInfo *)0x0);
                            pUVar15 = UnityEngine_GameObject__get_transform(local_e8,(MethodInfo *)0x0);
                            if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                              ThrowNullReferenceException();
                            }
                            UnityEngine_Transform__SetParent(pUVar14,pUVar15,(MethodInfo *)0x0);
                            __this_03 = local_e0;
                            System_Collections_Generic_Dictionary_object__object___Add
                                      ((System_Collections_Generic_Dictionary_object__object__o *)local_e0,
                                       (Il2CppObject *)pSVar19,(Il2CppObject *)pUVar20,
                                       (MethodInfo_146B4B0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Add)
                            ;
                            __this_06 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)
                                                   TypeInfo_System_Collections_Generic_List_GameObject);
                            System_Collections_Generic_List_object____ctor
                                      ((System_Collections_Generic_LowLevelList_T__o *)__this_06,
                                       (MethodInfo_92A240 *)
                                       MethodInfo_System_Collections_Generic_List_GameObject_ctor);
                            if (local_180 ==
                                (System_Collections_Generic_Dictionary_string__List_GameObject___o *)0x0) {
                              ThrowNullReferenceException();
                            }
                            System_Collections_Generic_Dictionary_object__object___Add
                                      ((System_Collections_Generic_Dictionary_object__object__o *)local_180,
                                       (Il2CppObject *)pSVar19,(Il2CppObject *)__this_06,
                                       (MethodInfo_146B4B0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_Add
                                      );
                          }
                          pIVar25 = System_Collections_Generic_Dictionary_object__object___get_Item
                                              ((System_Collections_Generic_Dictionary_object__object__o *)
                                               local_180,(Il2CppObject *)pSVar19,
                                               (MethodInfo_147A5B0 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_get_Item
                                              );
                          pUVar12 = UnityEngine_Component__get_gameObject(__this_02,(MethodInfo *)0x0);
                          if (pIVar25 == (Il2CppObject *)0x0) {
                            ThrowNullReferenceException();
                          }
                          il2cpp_runtime_helper_180012890(pIVar25,pUVar12,
                                        MethodInfo_System_Collections_Generic_List_GameObject_Add);
                          pUVar12 = UnityEngine_Component__get_gameObject(__this_02,(MethodInfo *)0x0);
                          pUVar14 = UnityEngine_Component__get_transform(__this_02,(MethodInfo *)0x0);
                          if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          pUVar14 = UnityEngine_Transform__GetParent(pUVar14,(MethodInfo *)0x0);
                          if (local_178 ==
                              (System_Collections_Generic_Dictionary_GameObject__Transform__o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          System_Collections_Generic_Dictionary_object__object___Add
                                    ((System_Collections_Generic_Dictionary_object__object__o *)local_178,
                                     (Il2CppObject *)pUVar12,(Il2CppObject *)pUVar14,
                                     (MethodInfo_146B4B0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_GameObject_Transform_Add
                                    );
                          pUVar14 = UnityEngine_Component__get_transform(__this_02,(MethodInfo *)0x0);
                          pUVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                                              ((System_Collections_Generic_Dictionary_object__object__o *)
                                               __this_03,(Il2CppObject *)pSVar19,
                                               (MethodInfo_147A5B0 *)
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
label_181ea92a4:
                  }
                  if (*(UnityEngine_GameObject_o **)(uVar17 + 0x18) == (UnityEngine_GameObject_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar14 = UnityEngine_GameObject__get_transform
                                      (*(UnityEngine_GameObject_o **)(uVar17 + 0x18),(MethodInfo *)0x0);
                  pUVar15 = UnityEngine_GameObject__get_transform(local_d0,(MethodInfo *)0x0);
                  if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  UnityEngine_Transform__SetParent(pUVar14,pUVar15,(MethodInfo *)0x0);
                }
              }
            }
          }
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_138,
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_MapObject_Dispose
                    );
          pSVar11 = local_178;
          pSVar10 = local_180;
          __this_07 = (System_Collections_Generic_Dictionary_GameObject__Transform__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
          System_Collections_Generic_List_object____ctor
                    ((System_Collections_Generic_LowLevelList_T__o *)__this_07,
                     (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
          if ((__this_03 != (System_Collections_Generic_Dictionary_string__GameObject__o *)0x0) &&
             (pSVar16 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                        System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
                                   (MethodInfo_13C6500 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_get_Keys
                                  ),
             pSVar16 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
            local_178 = __this_07;
            System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                      ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                       local_198,pSVar16,
                       (MethodInfo_F1E4D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_GameObject_GetEnumerator
                      );
            local_120 = (undefined1  [8])local_198._0_8_;
            pSStack_118 = (System_Collections_Generic_List_Enumerator_object__o *)local_198._8_8_;
            local_110 = local_188;
            local_198._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
            local_198._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_120;
            while (bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                                     ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                       *)local_120,
                                      (MethodInfo_156BDD0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_GameObject_MoveNext
                                     ), pIVar25 = local_110, bVar7) {
              pUVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                                   local_110,
                                   (MethodInfo_147A5B0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_get_Item
                                  );
              bVar7 = Map_MapLoader__CombineMeshes(__this,pUVar12,(MethodInfo *)0x0);
              if (!bVar7) {
                pUVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                                     pIVar25,(MethodInfo_147A5B0 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_get_Item
                                    );
                if (__this_07 == (System_Collections_Generic_Dictionary_GameObject__Transform__o *)0x0) {
                  ThrowNullReferenceException();
                }
                il2cpp_runtime_helper_180012890(__this_07,pUVar12,MethodInfo_System_Collections_Generic_List_GameObject_Add);
              }
            }
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_120,
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_GameObject_Dispose
                      );
            if ((pSVar10 != (System_Collections_Generic_Dictionary_string__List_GameObject___o *)0x0) &&
               (pSVar16 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                          System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar10,
                                     (MethodInfo_13C6500 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_get_Keys
                                    ),
               pSVar16 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
              System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                        ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                         local_198,pSVar16,
                         (MethodInfo_F1E4D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_List_GameObject_GetEnumerator
                        );
              local_108 = (undefined1  [8])local_198._0_8_;
              uStack_100 = local_198._8_8_;
              local_f8 = local_188;
              local_148._0_4_ = 0.0;
              local_148._4_4_ = 0.0;
              local_148._8_8_ = local_108;
              do {
                bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                    *)local_108,
                                   (MethodInfo_156BDD0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_List_GameObject_MoveNext
                                  );
                if (!bVar7) {
                  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_148._8_8_,
                             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_List_GameObject_Dispose
                            );
                  if (__this_07 == (System_Collections_Generic_Dictionary_GameObject__Transform__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                            (local_c0,(System_Collections_Generic_List_T__o *)__this_07,
                             (MethodInfo_91F180 *)
                             MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
                  local_160.fields._list = local_c0[0].fields._list;
                  local_160.fields._index = local_c0[0].fields._index;
                  local_160.fields._version = local_c0[0].fields._version;
                  local_160.fields._current = local_c0[0].fields._current;
                  local_198._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                  local_198._8_8_ = &local_160;
                  while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                           (&local_160,
                                            (MethodInfo_153A2A0 *)
                                            MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext
                                           ), pIVar25 = local_160.fields._current, bVar7) {
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pIVar25,(MethodInfo *)0x0);
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_160,
                             MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
                  return;
                }
                __this_08 = (System_Collections_Generic_List_T__o *)
                            System_Collections_Generic_Dictionary_object__object___get_Item
                                      ((System_Collections_Generic_Dictionary_object__object__o *)pSVar10,
                                       local_f8,(MethodInfo_147A5B0 *)
                                                MethodInfo_System_Collections_Generic_Dictionary_string_List_GameObject_get_Item
                                      );
                if (__this_08 == (System_Collections_Generic_List_T__o *)0x0) {
                  ThrowNullReferenceException();
                }
                System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                          (local_c0,__this_08,
                           (MethodInfo_91F180 *)
                           MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
                local_160.fields._list = local_c0[0].fields._list;
                local_160.fields._index = local_c0[0].fields._index;
                local_160.fields._version = local_c0[0].fields._version;
                local_160.fields._current = local_c0[0].fields._current;
                local_198._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                local_198._8_8_ = &local_160;
                while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                         (&local_160,
                                          (MethodInfo_153A2A0 *)
                                          MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext
                                         ), pIVar25 = local_160.fields._current, bVar7) {
                  if ((UnityEngine_Object_o *)local_160.fields._current == (UnityEngine_Object_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar14 = UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)local_160.fields._current,(MethodInfo *)0x0
                                      );
                  if (pSVar11 == (System_Collections_Generic_Dictionary_GameObject__Transform__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pUVar15 = System_Collections_Generic_Dictionary_object__object___get_Item
                                      ((System_Collections_Generic_Dictionary_object__object__o *)pSVar11,
                                       pIVar25,(MethodInfo_147A5B0 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_GameObject_Transform_get_Item
                                      );
                  if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  UnityEngine_Transform__SetParent(pUVar14,pUVar15,(MethodInfo *)0x0);
                }
                System_Collections_Generic_List_Enumerator_object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_160,
                           MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
                pSVar10 = local_180;
              } while( true );
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
// 0x181ea9f00
// eh: try 0x181eaa410..0x181eaa57d -> pad 0x18332a420 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eaa069: nop dword ptr [rax]
// asm:   0x181eaa409: nop dword ptr [rax]
// asm:   0x181eaa4f0: mov rdx, qword ptr [rip + 0x21e3731]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MeshFilter_Dispose
// asm:   0x181eaa4f7: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181eaa4fc: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181eaa501: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181eaa506: test rcx, rcx
// asm:   0x181eaa509: jne 0x181eaa57d
// asm:   0x181eaa554: xor r8d, r8d
// asm:   0x181eaa557: mov dl, 1
// asm:   0x181eaa559: mov rcx, rax
// asm:   0x181eaa55c: call 0x182ef5020  ; UnityEngine_Renderer__SetIsStaticShadowCaster()
// asm:   0x181eaa561: xor al, al
// asm:   0x181eaa563: jmp 0x181eaa50d
// asm:   0x181eaa57d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18332a420: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18332a425: push rbp
// asm:   0x18332a426: sub rsp, 0x30
// asm:   0x18332a42a: mov rbp, rdx
// asm:   0x18332a42d: mov rax, qword ptr [rbp + 0x60]
// asm:   0x18332a431: mov rcx, qword ptr [rax]
// asm:   0x18332a434: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18332a438: movabs rax, 0
// asm:   0x18332a442: add rsp, 0x30
// asm:   0x18332a446: pop rbp
// asm:   0x18332a447: ret 

bool Map_MapLoader__CombineMeshes(Map_MapLoader_o *__this,UnityEngine_GameObject_o *obj,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  bool bVar2;
  uint32_t count;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_MeshFilter__o *__this_01;
  UnityEngine_Object_o *x;
  UnityEngine_CombineInstance_array *combine;
  UnityEngine_MeshFilter_o *pUVar4;
  UnityEngine_Renderer_o *pUVar5;
  UnityEngine_Mesh_o *pUVar6;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Matrix4x4_o *pUVar7;
  UnityEngine_MeshRenderer_o *__this_03;
  UnityEngine_MeshFilter_o *__this_04;
  UnityEngine_Material_o *value;
  int32_t start;
  uint uVar8;
  undefined1 local_e8 [16];
  UnityEngine_Component_o *local_d8;
  System_Collections_Generic_List_Enumerator_object__o local_d0;
  UnityEngine_Matrix4x4_Fields local_a8;
  UnityEngine_Matrix4x4_o local_68;
  
  if (Il2CppMethodInitialized_1843450b9 == '\0') {
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
    Il2CppMethodInitialized_1843450b9 = '\x01';
  }
  local_d0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d0.fields._index = 0;
  local_d0.fields._version = 0;
  local_d0.fields._current = (Il2CppObject *)0x0;
  if ((obj != (UnityEngine_GameObject_o *)0x0) &&
     (pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                         (obj,(MethodInfo_6F5810 *)
                              MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter),
     pSVar3 != (System_Object_array *)0x0)) {
    if (pSVar3->max_length == 0) {
      return false;
    }
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MeshFilter);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MeshFilter_ctor);
    for (uVar8 = 0; (int)uVar8 < (int)pSVar3->max_length; uVar8 = uVar8 + 1) {
      if ((uint)pSVar3->max_length <= uVar8) goto label_181eaa56b;
      if ((UnityEngine_Component_o *)pSVar3->m_Items[(int)uVar8] == (UnityEngine_Component_o *)0x0)
      goto label_181eaa565;
      x = (UnityEngine_Object_o *)
          UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)pSVar3->m_Items[(int)uVar8],
                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Renderer);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (__this_01 == (System_Collections_Generic_List_MeshFilter__o *)0x0) goto label_181eaa565;
        il2cpp_runtime_helper_180012890(__this_01);
      }
    }
    if (__this_01 != (System_Collections_Generic_List_MeshFilter__o *)0x0) {
      if ((__this_01->fields)._size == 0) {
        return false;
      }
      if ((__this_01->fields)._size == 1) {
        pUVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,0,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_MeshFilter_get_Item);
        if ((pUVar4 != (UnityEngine_MeshFilter_o *)0x0) &&
           (pUVar5 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar4,
                                (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Renderer),
           pUVar5 != (UnityEngine_Renderer_o *)0x0)) {
          UnityEngine_Renderer__set_staticShadowCaster(pUVar5,true,(MethodInfo *)0x0);
          return false;
        }
      }
      else {
        combine = (UnityEngine_CombineInstance_array *)
                  SZArrayNew(TypeInfo_UnityEngine_CombineInstance_array,(__this_01->fields)._size);
        pUVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,0,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_MeshFilter_get_Item);
        if ((pUVar4 != (UnityEngine_MeshFilter_o *)0x0) &&
           (pUVar5 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar4,
                                (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Renderer),
           pUVar5 != (UnityEngine_Renderer_o *)0x0)) {
          bVar1 = UnityEngine_Renderer__get_enabled(pUVar5,(MethodInfo *)0x0);
          for (uVar8 = 0; (int)uVar8 < (__this_01->fields)._size; uVar8 = uVar8 + 1) {
            if ((combine == (UnityEngine_CombineInstance_array *)0x0) ||
               (pUVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                   ((System_Collections_Generic_List_object__o *)__this_01,uVar8,
                                    (MethodInfo_92B830 *)
                                    MethodInfo_System_Collections_Generic_List_MeshFilter_get_Item),
               pUVar4 == (UnityEngine_MeshFilter_o *)0x0)) goto label_181eaa565;
            pUVar6 = UnityEngine_MeshFilter__get_sharedMesh(pUVar4,(MethodInfo *)0x0);
            if ((uint)combine->max_length <= uVar8) {
label_181eaa56b:
              ThrowIndexOutOfRangeException();
            }
            UnityEngine_CombineInstance__set_mesh(combine->m_Items + (int)uVar8,pUVar6,(MethodInfo *)0x0);
            pUVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)__this_01,uVar8,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_MeshFilter_get_Item);
            if ((pUVar4 == (UnityEngine_MeshFilter_o *)0x0) ||
               (__this_02 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
               __this_02 == (UnityEngine_Transform_o *)0x0)) goto label_181eaa565;
            pUVar7 = UnityEngine_Transform__get_localToWorldMatrix(&local_68,__this_02,(MethodInfo *)0x0);
            local_a8.m00 = (pUVar7->fields).m00;
            local_a8.m10 = (pUVar7->fields).m10;
            local_a8.m20 = (pUVar7->fields).m20;
            local_a8.m30 = (pUVar7->fields).m30;
            local_a8.m01 = (pUVar7->fields).m01;
            local_a8.m11 = (pUVar7->fields).m11;
            local_a8.m21 = (pUVar7->fields).m21;
            local_a8.m31 = (pUVar7->fields).m31;
            local_a8.m02 = (pUVar7->fields).m02;
            local_a8.m12 = (pUVar7->fields).m12;
            local_a8.m22 = (pUVar7->fields).m22;
            local_a8.m32 = (pUVar7->fields).m32;
            local_a8.m03 = (pUVar7->fields).m03;
            local_a8.m13 = (pUVar7->fields).m13;
            local_a8.m23 = (pUVar7->fields).m23;
            local_a8.m33 = (pUVar7->fields).m33;
            if ((uint)combine->max_length <= uVar8) goto label_181eaa56b;
            UnityEngine_CombineInstance__set_transform
                      (combine->m_Items + (int)uVar8,(UnityEngine_Matrix4x4_o *)&local_a8,(MethodInfo *)0x0);
            pUVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)__this_01,uVar8,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_MeshFilter_get_Item);
            if ((pUVar4 == (UnityEngine_MeshFilter_o *)0x0) ||
               (pUVar5 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar4,
                                    (MethodInfo_6651A0 *)
                                    MethodInfo_UnityEngine_Component_GetComponent_Renderer),
               pUVar5 == (UnityEngine_Renderer_o *)0x0)) goto label_181eaa565;
            UnityEngine_Renderer__set_enabled(pUVar5,false,(MethodInfo *)0x0);
          }
          pUVar4 = UnityEngine_GameObject__AddComponent_object_
                             (obj,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter);
          __this_03 = UnityEngine_GameObject__AddComponent_object_
                                (obj,(MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
          pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
          UnityEngine_Mesh___ctor(pUVar6,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_MeshFilter_o *)0x0) {
            UnityEngine_MeshFilter__set_mesh(pUVar4,pUVar6,(MethodInfo *)0x0);
            pUVar6 = UnityEngine_MeshFilter__get_mesh(pUVar4,(MethodInfo *)0x0);
            if (pUVar6 != (UnityEngine_Mesh_o *)0x0) {
              UnityEngine_Mesh__set_indexFormat(pUVar6,1,(MethodInfo *)0x0);
              pUVar6 = UnityEngine_MeshFilter__get_mesh(pUVar4,(MethodInfo *)0x0);
              if ((pUVar6 != (UnityEngine_Mesh_o *)0x0) &&
                 (UnityEngine_Mesh__CombineMeshes(pUVar6,combine,true,true,(MethodInfo *)0x0),
                 __this_03 != (UnityEngine_MeshRenderer_o *)0x0)) {
                UnityEngine_Renderer__set_staticShadowCaster
                          ((UnityEngine_Renderer_o *)__this_03,true,(MethodInfo *)0x0);
                if (bVar1) {
                  __this_04 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                        ((System_Collections_Generic_List_object__o *)__this_01,0,
                                         (MethodInfo_92B830 *)
                                         MethodInfo_System_Collections_Generic_List_MeshFilter_get_Item);
                  if ((__this_04 == (UnityEngine_MeshFilter_o *)0x0) ||
                     (pUVar5 = UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)__this_04,
                                          (MethodInfo_6651A0 *)
                                          MethodInfo_UnityEngine_Component_GetComponent_Renderer),
                     pUVar5 == (UnityEngine_Renderer_o *)0x0)) goto label_181eaa565;
                  value = UnityEngine_Renderer__get_sharedMaterial(pUVar5,(MethodInfo *)0x0);
                  UnityEngine_Renderer__set_sharedMaterial
                            ((UnityEngine_Renderer_o *)__this_03,value,(MethodInfo *)0x0);
                }
                else {
                  UnityEngine_Renderer__set_enabled
                            ((UnityEngine_Renderer_o *)__this_03,false,(MethodInfo *)0x0);
                }
                if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
                }
                bVar1 = Map_MapDestruction__get_IsActive((MethodInfo *)0x0);
                start = 0;
                System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_e8,
                           (System_Collections_Generic_List_T__o *)__this_01,
                           (MethodInfo_91F180 *)
                           MethodInfo_System_Collections_Generic_List_MeshFilter_GetEnumerator);
                local_d0.fields._list = (System_Collections_Generic_List_T__o *)local_e8._0_8_;
                local_d0.fields._index = local_e8._8_4_;
                local_d0.fields._version = local_e8._12_4_;
                local_d0.fields._current = (Il2CppObject *)local_d8;
                local_e8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
                local_e8._8_8_ = &local_d0;
                while( true ) {
                  bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    (&local_d0,
                                     (MethodInfo_153A2A0 *)
                                     MethodInfo_System_Collections_Generic_List_Enumerator_MeshFilter_MoveNext
                                    );
                  __this_00 = local_d0.fields._current;
                  if (!bVar2) {
                    System_Collections_Generic_List_Enumerator_object___Dispose
                              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_d0,
                               MethodInfo_System_Collections_Generic_List_Enumerator_MeshFilter_Dispose);
                    return true;
                  }
                  if ((UnityEngine_Component_o *)local_d0.fields._current == (UnityEngine_Component_o *)0x0)
                  break;
                  pUVar5 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)local_d0.fields._current,
                                      (MethodInfo_6651A0 *)
                                      MethodInfo_UnityEngine_Component_GetComponent_Renderer);
                  if ((TypeInfo_Cameras_CameraOcclusion->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Cameras_CameraOcclusion);
                  }
                  Cameras_CameraOcclusion__RegisterCombinedRenderer
                            (pUVar5,(UnityEngine_Renderer_o *)__this_03,(MethodInfo *)0x0);
                  if (bVar1) {
                    pUVar6 = UnityEngine_MeshFilter__get_sharedMesh
                                       ((UnityEngine_MeshFilter_o *)__this_00,(MethodInfo *)0x0);
                    if (pUVar6 == (UnityEngine_Mesh_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    count = UnityEngine_Mesh__GetIndexCount(pUVar6,0,(MethodInfo *)0x0);
                    pUVar6 = UnityEngine_MeshFilter__get_sharedMesh(pUVar4,(MethodInfo *)0x0);
                    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
                    }
                    Map_MapDestruction__RegisterBatchSlice(pUVar5,pUVar6,start,count,(MethodInfo *)0x0);
                    start = start + count;
                  }
                }
                ThrowNullReferenceException();
              }
            }
          }
        }
      }
    }
  }
label_181eaa565:
  ThrowNullReferenceException();
}


// Map.MapLoader$$RegisterTag
// il2cpp: void Map_MapLoader__RegisterTag (System_String_o* tag, Map_MapObject_o* obj, const MethodInfo* method);
// 0x181ead920

void Map_MapLoader__RegisterTag(System_String_o *tag,Map_MapObject_o *obj,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_string__List_MapObject___o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_MapObject__HashSet_string___o *__this_00;
  System_Object_array *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  System_Collections_Generic_List_MapObject__o *__this_01;
  System_Collections_Generic_HashSet_string__o *__this_02;
  System_Collections_Generic_List_object__o *__this_03;
  System_Collections_Generic_HashSet_object__o *__this_04;
  
  if (Il2CppMethodInitialized_1843450ba == '\0') {
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
    Il2CppMethodInitialized_1843450ba = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = TypeInfo_Map_MapLoader->static_fields->Tags;
  if (__this != (System_Collections_Generic_Dictionary_string__List_MapObject___o *)0x0) {
    bVar6 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)tag,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_ContainsKey);
    if (!bVar6) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_MapLoader->static_fields->Tags;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject)
      ;
      System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor);
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181eadc3f;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar3,(Il2CppObject *)tag,(Il2CppObject *)__this_01,
                 (MethodInfo_146B4B0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_Add);
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this_00 = TypeInfo_Map_MapLoader->static_fields->MapObjectToTags;
    if (__this_00 != (System_Collections_Generic_Dictionary_MapObject__HashSet_string___o *)0x0) {
      bVar6 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (Il2CppObject *)obj,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_ContainsKey
                        );
      if (!bVar6) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->MapObjectToTags;
        __this_02 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
        System_Collections_Generic_HashSet_object____ctor
                  ((System_Collections_Generic_HashSet_object__o *)__this_02,
                   (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181eadc3f;
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar3,(Il2CppObject *)obj,(Il2CppObject *)__this_02,
                   (MethodInfo_146B4B0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_Add);
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_MapLoader->static_fields->Tags;
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        __this_03 = (System_Collections_Generic_List_object__o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar3,(Il2CppObject *)tag,
                               (MethodInfo_147A5B0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_get_Item
                              );
        pMVar5 = MethodInfo_System_Collections_Generic_List_MapObject_Add;
        if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
          piVar1 = &(__this_03->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_03->fields)._items;
          if (pSVar4 != (System_Object_array *)0x0) {
            uVar2 = (__this_03->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this_03->fields)._size = uVar2 + 1;
              if ((uint)pSVar4->max_length <= uVar2) {
                ThrowIndexOutOfRangeException();
              }
              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)obj;
              Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,obj);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_03,(Il2CppObject *)obj,
                         (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
            }
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->MapObjectToTags;
            if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              __this_04 = (System_Collections_Generic_HashSet_object__o *)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    (pSVar3,(Il2CppObject *)obj,
                                     (MethodInfo_147A5B0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_get_Item
                                    );
              if (__this_04 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                System_Collections_Generic_HashSet_object___Add
                          (__this_04,(Il2CppObject *)tag,
                           (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
                return;
              }
            }
          }
        }
      }
    }
  }
label_181eadc3f:
  ThrowNullReferenceException();
}


// Map.MapLoader$$HasTag
// il2cpp: bool Map_MapLoader__HasTag (Map_MapObject_o* obj, System_String_o* tag, const MethodInfo* method);
// 0x181eabdd0

bool Map_MapLoader__HasTag(Map_MapObject_o *obj,System_String_o *tag,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_MapObject__HashSet_string___o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  System_Collections_Generic_HashSet_object__o *__this_01;
  
  if (Il2CppMethodInitialized_1843450bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_1843450bb = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = TypeInfo_Map_MapLoader->static_fields->MapObjectToTags;
  if (__this != (System_Collections_Generic_Dictionary_MapObject__HashSet_string___o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)obj,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_ContainsKey);
    if (!bVar1) {
      return false;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_Map_MapLoader->static_fields->MapObjectToTags;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_01 = (System_Collections_Generic_HashSet_object__o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_00,(Il2CppObject *)obj,
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_get_Item
                            );
      if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        bVar1 = System_Collections_Generic_HashSet_object___Contains
                          (__this_01,(Il2CppObject *)tag,
                           (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        return bVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$GetMapObject
// il2cpp: Map_MapObject_o* Map_MapLoader__GetMapObject (UnityEngine_GameObject_o* obj, const MethodInfo* method);
// 0x181eab9d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eaba43: mov qword ptr [rsp + 0x30], rdi
// asm:   0x181eaba48: nop dword ptr [rax + rax]

Map_MapObject_o * Map_MapLoader__GetMapObject(UnityEngine_GameObject_o *obj,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_GameObject__MapObject__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  Map_MapObject_o *pMVar4;
  
  if (Il2CppMethodInitialized_1843450bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843450bc = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)obj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return (Map_MapObject_o *)0x0;
  }
  while( true ) {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar1 = TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
    if (pSVar1 == (System_Collections_Generic_Dictionary_GameObject__MapObject__o *)0x0) goto label_181eabbc9;
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)obj,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey);
    if (bVar2) break;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)obj,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) break;
    if (((UnityEngine_Object_o *)obj == (UnityEngine_Object_o *)0x0) ||
       (pUVar3 = UnityEngine_GameObject__get_transform(obj,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_Transform_o *)0x0)) goto label_181eabbc9;
    pUVar3 = UnityEngine_Transform__GetParent(pUVar3,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) break;
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_181eabbc9;
    obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar1 = TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
  if (pSVar1 != (System_Collections_Generic_Dictionary_GameObject__MapObject__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)obj,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey);
    if (!bVar2) {
      return (Map_MapObject_o *)0x0;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pMVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this,(Il2CppObject *)obj,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_get_Item);
      return pMVar4;
    }
  }
label_181eabbc9:
  ThrowNullReferenceException();
}


// Map.MapLoader$$LoadSceneObject
// il2cpp: UnityEngine_GameObject_o* Map_MapLoader__LoadSceneObject (Map_MapScriptSceneObject_o* obj, bool editor, const MethodInfo* method);
// 0x181ead2a0

UnityEngine_GameObject_o *
Map_MapLoader__LoadSceneObject(Map_MapScriptSceneObject_o *obj,bool editor,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  Map_MapScriptBaseMaterial_o *material;
  bool bVar4;
  int32_t iVar5;
  UnityEngine_GameObject_o *__this;
  UnityEngine_SphereCollider_o *__this_00;
  
  if (Il2CppMethodInitialized_1843450bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_SphereCollider)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_1843450bd = '\x01';
  }
  if (obj == (Map_MapScriptSceneObject_o *)0x0) goto label_181ead4fd;
  bVar4 = System_String__op_Equality((obj->fields).Asset,"None",(MethodInfo *)0x0);
  if (bVar4) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1ad20(__this,(MethodInfo *)0x0);
  }
  else {
    pSVar1 = (obj->fields).Asset;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this = Map_MapLoader__LoadPrefabCached(pSVar1,(MethodInfo *)0x0);
  }
  if (editor) {
    if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
    }
    pSVar1 = TypeInfo_Map_MapObjectCollideMode->static_fields->Physical;
    if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    }
    pSVar2 = (obj->fields).PhysicsMaterial;
    pSVar3 = TypeInfo_Map_MapObjectCollideWith->static_fields->MapEditor;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    iVar5 = Map_MapLoader__SetPhysics(__this,pSVar1,pSVar3,pSVar2,(MethodInfo *)0x0);
    if (iVar5 == 0) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      bVar4 = Map_MapLoader__TryAddEditorCollider(__this,(MethodInfo *)0x0);
      if (!bVar4) {
        if (__this != (UnityEngine_GameObject_o *)0x0) {
          __this_00 = UnityEngine_GameObject__AddComponent_object_
                                (__this,(MethodInfo_6F4D60 *)
                                        MethodInfo_UnityEngine_GameObject_AddComponent_SphereCollider);
          if (__this_00 != (UnityEngine_SphereCollider_o *)0x0) {
            UnityEngine_SphereCollider__set_radius(__this_00,0.5,(MethodInfo *)0x0);
            goto label_181ead49d;
          }
        }
label_181ead4fd:
        ThrowNullReferenceException();
      }
    }
  }
  else {
    pSVar1 = (obj->fields).CollideMode;
    pSVar2 = (obj->fields).CollideWith;
    pSVar3 = (obj->fields).PhysicsMaterial;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    Map_MapLoader__SetPhysics(__this,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
  }
label_181ead49d:
  pSVar1 = (obj->fields).Asset;
  material = (obj->fields).Material;
  bVar4 = (obj->fields).Visible;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  Map_MapLoader__SetMaterial(__this,pSVar1,material,bVar4,editor,(MethodInfo *)0x0);
  return __this;
}


// Map.MapLoader$$TryAddEditorCollider
// il2cpp: bool Map_MapLoader__TryAddEditorCollider (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x181eb1260
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eb14fc: nop dword ptr [rax]
// asm:   0x181eb172e: nop 
// asm:   0x181eb175e: nop 
// asm:   0x181eb1b35: mov rdx, qword ptr [rip + 0x21fabac]  ; MethodInfo_UnityEngine_GameObject_AddComponent_EditorGizmoIcon
// asm:   0x181eb1b3c: jmp 0x181eb1a88

bool Map_MapLoader__TryAddEditorCollider(UnityEngine_GameObject_o *go,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  UnityEngine_MeshFilter_o *__this;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  int32_t iVar16;
  UnityEngine_ParticleSystem_o *x;
  System_Object_array *pSVar17;
  UnityEngine_Object_o *x_00;
  UnityEngine_Mesh_o *pUVar18;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_MeshCollider_o *__this_02;
  UnityEngine_Bounds_o *pUVar19;
  UnityEngine_Transform_o *pUVar20;
  UnityEngine_Matrix4x4_o *pUVar21;
  UnityEngine_BoxCollider_o *__this_03;
  MapEditor_EditorGizmoIcon_o *__this_04;
  UnityEngine_Component_o *pUVar22;
  char cVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  UnityEngine_Vector3_Fields local_248;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  undefined1 local_208 [32];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  UnityEngine_Matrix4x4_Fields local_1b8;
  UnityEngine_Vector3_Fields local_168;
  UnityEngine_Matrix4x4_Fields local_158;
  UnityEngine_Matrix4x4_o local_118;
  
  if (Il2CppMethodInitialized_1843450be == '\0') {
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
    Il2CppMethodInitialized_1843450be = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_181eb1b41;
  x = UnityEngine_GameObject__GetComponentInChildren_object_
                (go,(MethodInfo_6F5040 *)
                    MethodInfo_UnityEngine_GameObject_GetComponentInChildren_ParticleSystem);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar14) {
    pSVar17 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                        (go,(MethodInfo_6F5810 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_MeshFilter);
    if (pSVar17 == (System_Object_array *)0x0) goto label_181eb1b41;
    for (uVar24 = 0; (int)uVar24 < (int)pSVar17->max_length; uVar24 = uVar24 + 1) {
      if ((uint)pSVar17->max_length <= uVar24) goto label_181eb1b47;
      __this = (UnityEngine_MeshFilter_o *)pSVar17->m_Items[(int)uVar24];
      if (__this == (UnityEngine_MeshFilter_o *)0x0) goto label_181eb1b41;
      x_00 = (UnityEngine_Object_o *)UnityEngine_MeshFilter__get_sharedMesh(__this,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar14 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar14) {
        pUVar18 = UnityEngine_MeshFilter__get_sharedMesh(__this,(MethodInfo *)0x0);
        if (pUVar18 == (UnityEngine_Mesh_o *)0x0) goto label_181eb1b41;
        iVar16 = UnityEngine_Mesh__get_vertexCount(pUVar18,(MethodInfo *)0x0);
        if (0 < iVar16) {
          __this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
            __this_02 = UnityEngine_GameObject__AddComponent_object_
                                  (__this_01,
                                   (MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_MeshCollider);
            pUVar18 = UnityEngine_MeshFilter__get_sharedMesh(__this,(MethodInfo *)0x0);
            if (__this_02 != (UnityEngine_MeshCollider_o *)0x0) {
              UnityEngine_MeshCollider__set_sharedMesh(__this_02,pUVar18,(MethodInfo *)0x0);
              return true;
            }
          }
          goto label_181eb1b41;
        }
      }
    }
    pSVar17 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                        (go,(MethodInfo_6F5810 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    if (pSVar17 == (System_Object_array *)0x0) goto label_181eb1b41;
    if (pSVar17->max_length != 0) {
      bVar14 = false;
      fVar37 = 0.0;
      fVar35 = 0.0;
      fVar32 = 0.0;
      fVar31 = 0.0;
      fVar39 = 0.0;
      fVar40 = 0.0;
      for (uVar24 = 0; (int)uVar24 < (int)pSVar17->max_length; uVar24 = uVar24 + 1) {
        if ((uint)pSVar17->max_length <= uVar24) {
label_181eb1b47:
          ThrowIndexOutOfRangeException();
        }
        __this_00 = (UnityEngine_Component_o *)pSVar17->m_Items[(int)uVar24];
        if (__this_00 == (UnityEngine_Component_o *)0x0) goto label_181eb1b41;
        pUVar22 = (UnityEngine_Component_o *)0x0;
        if (__this_00->klass == (UnityEngine_Component_c *)TypeInfo_UnityEngine_TrailRenderer) {
          pUVar22 = __this_00;
        }
        if (pUVar22 == (UnityEngine_Component_o *)0x0) {
          pUVar22 = (UnityEngine_Component_o *)0x0;
          if (__this_00->klass == (UnityEngine_Component_c *)TypeInfo_UnityEngine_LineRenderer) {
            pUVar22 = __this_00;
          }
          if (pUVar22 == (UnityEngine_Component_o *)0x0) {
            if (__this_00 == (UnityEngine_Component_o *)0x0) goto label_181eb1b41;
            pUVar19 = UnityEngine_Renderer__get_localBounds
                                ((UnityEngine_Bounds_o *)local_208,(UnityEngine_Renderer_o *)__this_00,
                                 (MethodInfo *)0x0);
            local_1e8._0_4_ = (pUVar19->fields).m_Center.fields.x;
            local_1e8._4_4_ = (pUVar19->fields).m_Center.fields.y;
            uStack_1e0 = *(undefined8 *)&(pUVar19->fields).m_Center.fields.z;
            uVar5._0_4_ = (pUVar19->fields).m_Center.fields.x;
            uVar5._4_4_ = (pUVar19->fields).m_Center.fields.y;
            uVar6 = *(undefined8 *)&(pUVar19->fields).m_Center.fields.z;
            uVar3._0_4_ = (pUVar19->fields).m_Extents.fields.y;
            uVar3._4_4_ = (pUVar19->fields).m_Extents.fields.z;
            local_248._0_8_ = uVar3;
            local_168._0_8_ = uVar3;
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            local_208._0_8_ = uVar5;
            local_208._8_8_ = uVar6;
            local_208._16_8_ = uVar3;
            bVar15 = Map_MapLoader__IsFiniteBounds((UnityEngine_Bounds_o *)local_208,(MethodInfo *)0x0);
            if (bVar15) {
              pUVar20 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
              if (pUVar20 == (UnityEngine_Transform_o *)0x0) goto label_181eb1b41;
              pUVar21 = UnityEngine_Transform__get_worldToLocalMatrix
                                  ((UnityEngine_Matrix4x4_o *)&local_1b8,pUVar20,(MethodInfo *)0x0);
              uVar6._0_4_ = (pUVar21->fields).m00;
              uVar6._4_4_ = (pUVar21->fields).m10;
              uVar7._0_4_ = (pUVar21->fields).m20;
              uVar7._4_4_ = (pUVar21->fields).m30;
              uVar8._0_4_ = (pUVar21->fields).m01;
              uVar8._4_4_ = (pUVar21->fields).m11;
              uVar9._0_4_ = (pUVar21->fields).m21;
              uVar9._4_4_ = (pUVar21->fields).m31;
              uVar10._0_4_ = (pUVar21->fields).m02;
              uVar10._4_4_ = (pUVar21->fields).m12;
              uVar11._0_4_ = (pUVar21->fields).m22;
              uVar11._4_4_ = (pUVar21->fields).m32;
              uVar12._0_4_ = (pUVar21->fields).m03;
              uVar12._4_4_ = (pUVar21->fields).m13;
              uVar13._0_4_ = (pUVar21->fields).m23;
              uVar13._4_4_ = (pUVar21->fields).m33;
              pUVar20 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
              if (pUVar20 == (UnityEngine_Transform_o *)0x0) goto label_181eb1b41;
              pUVar21 = UnityEngine_Transform__get_localToWorldMatrix
                                  ((UnityEngine_Matrix4x4_o *)&local_1b8,pUVar20,(MethodInfo *)0x0);
              local_158.m00 = (pUVar21->fields).m00;
              local_158.m10 = (pUVar21->fields).m10;
              local_158.m20 = (pUVar21->fields).m20;
              local_158.m30 = (pUVar21->fields).m30;
              local_158.m01 = (pUVar21->fields).m01;
              local_158.m11 = (pUVar21->fields).m11;
              local_158.m21 = (pUVar21->fields).m21;
              local_158.m31 = (pUVar21->fields).m31;
              local_158.m02 = (pUVar21->fields).m02;
              local_158.m12 = (pUVar21->fields).m12;
              local_158.m22 = (pUVar21->fields).m22;
              local_158.m32 = (pUVar21->fields).m32;
              local_158.m03 = (pUVar21->fields).m03;
              local_158.m13 = (pUVar21->fields).m13;
              local_158.m23 = (pUVar21->fields).m23;
              local_158.m33 = (pUVar21->fields).m33;
              local_1b8._0_8_ = uVar6;
              local_1b8._8_8_ = uVar7;
              local_1b8._16_8_ = uVar8;
              local_1b8._24_8_ = uVar9;
              local_1b8._32_8_ = uVar10;
              local_1b8._40_8_ = uVar11;
              local_1b8._48_8_ = uVar12;
              local_1b8._56_8_ = uVar13;
              pUVar21 = UnityEngine_Matrix4x4__op_Multiply
                                  (&local_118,(UnityEngine_Matrix4x4_o *)&local_1b8,
                                   (UnityEngine_Matrix4x4_o *)&local_158,(MethodInfo *)0x0);
              iVar27 = -1;
              fVar1 = (pUVar21->fields).m00;
              local_22c = (pUVar21->fields).m10;
              local_21c = (pUVar21->fields).m20;
              fVar2 = (pUVar21->fields).m01;
              local_230 = (pUVar21->fields).m11;
              local_220 = (pUVar21->fields).m21;
              local_238 = (pUVar21->fields).m02;
              local_228 = (pUVar21->fields).m12;
              local_218 = (pUVar21->fields).m22;
              local_234 = (pUVar21->fields).m03;
              local_224 = (pUVar21->fields).m13;
              local_214 = (pUVar21->fields).m23;
              local_1d8 = local_1e8._4_4_;
              fStack_1d4 = local_1e8._4_4_;
              fStack_1d0 = local_1e8._4_4_;
              fStack_1cc = local_1e8._4_4_;
              local_1c8 = (float)uStack_1e0;
              fStack_1c4 = (float)uStack_1e0;
              fStack_1c0 = (float)uStack_1e0;
              fStack_1bc = (float)uStack_1e0;
              local_208._4_4_ = uStack_1e0._4_4_;
              local_208._0_4_ = uStack_1e0._4_4_;
              local_208._12_4_ = uStack_1e0._4_4_;
              local_208._8_4_ = uStack_1e0._4_4_;
              fVar34 = uStack_1e0._4_4_;
              cVar23 = g_data_18433dbea;
              do {
                iVar26 = -1;
                fVar29 = (float)local_1e8;
                do {
                  iVar25 = -1;
                  fVar33 = fVar32;
                  fVar36 = fVar35;
                  fVar38 = fVar37;
                  do {
                    fVar29 = (float)iVar27 * fVar34 + fVar29;
                    fVar34 = (float)iVar26 * local_248.x + local_1d8;
                    fVar32 = (float)iVar25 * local_168.y + local_1c8;
                    fVar37 = fVar34 * fVar2 + fVar29 * fVar1 + fVar32 * local_238 + local_234;
                    fVar35 = fVar34 * local_230 + fVar29 * local_22c + fVar32 * local_228 + local_224;
                    fVar32 = fVar34 * local_220 + fVar29 * local_21c + fVar32 * local_218 + local_214;
                    if (bVar14) {
                      fVar29 = fVar38 - fVar31;
                      if (fVar37 <= fVar38 - fVar31) {
                        fVar29 = fVar37;
                      }
                      fVar28 = fVar36 - fVar39;
                      if (fVar35 <= fVar36 - fVar39) {
                        fVar28 = fVar35;
                      }
                      fVar30 = fVar33 - fVar40;
                      if (fVar32 <= fVar33 - fVar40) {
                        fVar30 = fVar32;
                      }
                      fVar34 = fVar31 + fVar38;
                      if (fVar31 + fVar38 <= fVar37) {
                        fVar34 = fVar37;
                      }
                      fVar31 = fVar36 + fVar39;
                      if (fVar36 + fVar39 <= fVar35) {
                        fVar31 = fVar35;
                      }
                      fVar39 = fVar33 + fVar40;
                      if (fVar33 + fVar40 <= fVar32) {
                        fVar39 = fVar32;
                      }
                      fVar31 = fVar31 - fVar28;
                      fVar39 = fVar39 - fVar30;
                      fVar34 = fVar34 - fVar29;
                      fVar32 = fVar30 + fVar39 * 0.5;
                      fVar37 = fVar34 * 0.5 + fVar29;
                      fVar35 = fVar28 + fVar31 * 0.5;
                    }
                    else {
                      if (cVar23 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                        cVar23 = '\x01';
                        g_data_18433dbea = '\x01';
                      }
                      bVar14 = true;
                      pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
                      fVar34 = (pUVar4->zeroVector).fields.x;
                      fVar31 = (pUVar4->zeroVector).fields.y;
                      fVar39 = (pUVar4->zeroVector).fields.z;
                    }
                    iVar25 = iVar25 + 2;
                    fVar40 = fVar39 * 0.5;
                    fVar39 = fVar31 * 0.5;
                    fVar31 = fVar34 * 0.5;
                    fVar29 = (float)local_1e8;
                    fVar33 = fVar32;
                    fVar34 = (float)local_208._0_4_;
                    fVar36 = fVar35;
                    fVar38 = fVar37;
                  } while (iVar25 < 2);
                  iVar26 = iVar26 + 2;
                } while (iVar26 < 2);
                iVar27 = iVar27 + 2;
              } while (iVar27 < 2);
            }
          }
        }
      }
      if (bVar14) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        local_248.y = fVar35;
        local_248.x = fVar37;
        local_248.z = fVar32;
        bVar14 = Map_MapLoader__IsFiniteVector3((UnityEngine_Vector3_o *)&local_248,(MethodInfo *)0x0);
        if (!bVar14) {
          return false;
        }
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        local_248.y = fVar39 + fVar39;
        local_248.x = fVar31 + fVar31;
        local_248.z = fVar40 + fVar40;
        bVar14 = Map_MapLoader__IsFiniteVector3((UnityEngine_Vector3_o *)&local_248,(MethodInfo *)0x0);
        if (!bVar14) {
          return false;
        }
        __this_03 = UnityEngine_GameObject__AddComponent_object_
                              (go,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
        if (__this_03 != (UnityEngine_BoxCollider_o *)0x0) {
          local_248.y = fVar35;
          local_248.x = fVar37;
          local_248.z = fVar32;
          UnityEngine_BoxCollider__set_center(__this_03,(UnityEngine_Vector3_o *)&local_248,(MethodInfo *)0x0)
          ;
          local_248.z = fVar40 + fVar40;
          local_248.y = fVar39 + fVar39;
          local_248.x = fVar31 + fVar31;
          UnityEngine_BoxCollider__set_size(__this_03,(UnityEngine_Vector3_o *)&local_248,(MethodInfo *)0x0);
          return true;
        }
        goto label_181eb1b41;
      }
    }
  }
  __this_04 = UnityEngine_GameObject__AddComponent_object_
                        (go,(MethodInfo_6F4D60 *)
                            MethodInfo_UnityEngine_GameObject_AddComponent_EditorGizmoIcon);
  if (__this_04 != (MapEditor_EditorGizmoIcon_o *)0x0) {
    MapEditor_EditorGizmoIcon__Setup(__this_04,(MethodInfo *)0x0);
    return true;
  }
label_181eb1b41:
  ThrowNullReferenceException();
}


// Map.MapLoader$$IsFiniteBounds
// il2cpp: bool Map_MapLoader__IsFiniteBounds (UnityEngine_Bounds_o bounds, const MethodInfo* method);
// 0x181eac0a0

bool Map_MapLoader__IsFiniteBounds(UnityEngine_Bounds_o *bounds,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_1843450bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_1843450bf = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  local_18.x = (bounds->fields).m_Center.fields.x;
  local_18.y = (bounds->fields).m_Center.fields.y;
  local_18.z = (bounds->fields).m_Center.fields.z;
  bVar4 = Map_MapLoader__IsFiniteVector3((UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    local_18.x = (bounds->fields).m_Extents.fields.x;
    local_18.y = (bounds->fields).m_Extents.fields.y;
    local_18.z = (bounds->fields).m_Extents.fields.z;
    bVar4 = Map_MapLoader__IsFiniteVector3((UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    if ((bVar4) &&
       (fVar1 = (bounds->fields).m_Extents.fields.x, fVar2 = (bounds->fields).m_Extents.fields.y,
       fVar3 = (bounds->fields).m_Extents.fields.z, 0.0 < fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3)) {
      return true;
    }
  }
  return false;
}


// Map.MapLoader$$IsFiniteVector3
// il2cpp: bool Map_MapLoader__IsFiniteVector3 (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x181eac1a0

bool Map_MapLoader__IsFiniteVector3(UnityEngine_Vector3_o *v,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_1843450c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_1843450c0 = '\x01';
  }
  fVar1 = (v->fields).x;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  if (((uint)ABS(fVar1) < 0x7f800001) && (ABS(fVar1) != INFINITY)) {
    fVar1 = (v->fields).y;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    if (((uint)ABS(fVar1) < 0x7f800001) && (ABS(fVar1) != INFINITY)) {
      fVar1 = (v->fields).z;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      if ((uint)ABS(fVar1) < 0x7f800001) {
        return ABS(fVar1) != INFINITY;
      }
    }
  }
  return false;
}


// Map.MapLoader$$IsFiniteFloat
// il2cpp: bool Map_MapLoader__IsFiniteFloat (float value, const MethodInfo* method);
// 0x181eac170

bool
Map_MapLoader__IsFiniteFloat(float value, MethodInfo* method)

{
  if (0x7f800000 < (uint)ABS(value)) {
    return false;
  }
  return ABS(value) != INFINITY;
}


// Map.MapLoader$$SetTransform
// il2cpp: void Map_MapLoader__SetTransform (Map_MapObject_o* mapObject, const MethodInfo* method);
// 0x181eb0a20

void Map_MapLoader__SetTransform(Map_MapObject_o *mapObject,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  UnityEngine_Object_o *__this;
  Map_MapScriptBaseObject_o *pMVar5;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Quaternion_Fields local_48;
  UnityEngine_Quaternion_o local_38;
  
  if ((mapObject != (Map_MapObject_o *)0x0) &&
     (__this = (UnityEngine_Object_o *)(mapObject->fields).GameObject, __this != (UnityEngine_Object_o *)0x0))
  {
    pMVar5 = (mapObject->fields).ScriptObject;
    __this_00 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this,(MethodInfo *)0x0);
    if (pMVar5 != (Map_MapScriptBaseObject_o *)0x0) {
      UnityEngine_GameObject__set_isStatic
                ((UnityEngine_GameObject_o *)__this,(pMVar5->fields).Static,(MethodInfo *)0x0);
      UnityEngine_Object__set_name(__this,(pMVar5->fields).Name,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        pUVar6 = UnityEngine_Transform__get_localScale
                           ((UnityEngine_Vector3_o *)&local_48,__this_00,(MethodInfo *)0x0);
        fVar1 = (pUVar6->fields).z;
        fVar4 = (pUVar6->fields).x;
        (mapObject->fields).BaseScale.fields.y = (pUVar6->fields).y;
        (mapObject->fields).BaseScale.fields.z = fVar1;
        (mapObject->fields).BaseScale.fields.x = fVar4;
        local_48.x = (pMVar5->fields).PositionX;
        local_48.y = (pMVar5->fields).PositionY;
        local_48.z = (pMVar5->fields).PositionZ;
        UnityEngine_Transform__set_localPosition
                  (__this_00,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
        uVar2 = (pMVar5->fields).RotationX;
        uVar3 = (pMVar5->fields).RotationY;
        local_48.y = (float)uVar3 * 0.017453292;
        local_48.x = (float)uVar2 * 0.017453292;
        local_48.z = (pMVar5->fields).RotationZ * 0.017453292;
        pUVar7 = UnityEngine_Quaternion__Internal_FromEulerRad
                           (&local_38,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
        local_48.x = (pUVar7->fields).x;
        local_48.y = (pUVar7->fields).y;
        local_48.z = (pUVar7->fields).z;
        local_48.w = (pUVar7->fields).w;
        UnityEngine_Transform__set_localRotation
                  (__this_00,(UnityEngine_Quaternion_o *)&local_48,(MethodInfo *)0x0);
        local_48.y = (pMVar5->fields).ScaleY * (mapObject->fields).BaseScale.fields.y;
        local_48.x = (pMVar5->fields).ScaleX * (mapObject->fields).BaseScale.fields.x;
        local_48.z = (pMVar5->fields).ScaleZ * (mapObject->fields).BaseScale.fields.z;
        UnityEngine_Transform__set_localScale(__this_00,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$ApplyLocalTransform
// il2cpp: void Map_MapLoader__ApplyLocalTransform (Map_MapObject_o* mapObject, const MethodInfo* method);
// 0x181ea8450

void Map_MapLoader__ApplyLocalTransform(Map_MapObject_o *mapObject,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_GameObject_o *__this;
  Map_MapScriptBaseObject_o *pMVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_o *pUVar4;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if ((mapObject != (Map_MapObject_o *)0x0) &&
     (__this = (mapObject->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    pMVar3 = (mapObject->fields).ScriptObject;
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if ((pMVar3 != (Map_MapScriptBaseObject_o *)0x0) && (__this_00 != (UnityEngine_Transform_o *)0x0)) {
      local_28.x = (pMVar3->fields).PositionX;
      local_28.y = (pMVar3->fields).PositionY;
      local_28.z = (pMVar3->fields).PositionZ;
      UnityEngine_Transform__set_localPosition(__this_00,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0)
      ;
      uVar1 = (pMVar3->fields).RotationX;
      uVar2 = (pMVar3->fields).RotationY;
      local_28.y = (float)uVar2 * 0.017453292;
      local_28.x = (float)uVar1 * 0.017453292;
      local_28.z = (pMVar3->fields).RotationZ * 0.017453292;
      pUVar4 = UnityEngine_Quaternion__Internal_FromEulerRad
                         (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      local_28.x = (pUVar4->fields).x;
      local_28.y = (pUVar4->fields).y;
      local_28.z = (pUVar4->fields).z;
      local_28.w = (pUVar4->fields).w;
      UnityEngine_Transform__set_localRotation
                (__this_00,(UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
      local_28.y = (pMVar3->fields).ScaleY * (mapObject->fields).BaseScale.fields.y;
      local_28.x = (pMVar3->fields).ScaleX * (mapObject->fields).BaseScale.fields.x;
      local_28.z = (pMVar3->fields).ScaleZ * (mapObject->fields).BaseScale.fields.z;
      UnityEngine_Transform__set_localScale(__this_00,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$SetParent
// il2cpp: void Map_MapLoader__SetParent (Map_MapObject_o* mapObject, const MethodInfo* method);
// 0x181eb01f0

void Map_MapLoader__SetParent_1eb01f0(Map_MapObject_o *mapObject,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar2;
  bool bVar3;
  UnityEngine_Transform_o *__this_00;
  System_String_o *pSVar4;
  uint64_t uVar5;
  UnityEngine_Transform_o *p;
  
  if (Il2CppMethodInitialized_1843450c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&"Map load error: object parent id not found (");
    Il2CppMethodInitialized_1843450c1 = '\x01';
  }
  if ((mapObject != (Map_MapObject_o *)0x0) &&
     (__this = (mapObject->fields).GameObject, __this != (UnityEngine_GameObject_o *)0x0)) {
    pMVar1 = (mapObject->fields).ScriptObject;
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (pMVar1 != (Map_MapScriptBaseObject_o *)0x0) {
      if ((pMVar1->fields).Parent < 0) {
        return;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar2 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
        bVar3 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                          (pSVar2,(pMVar1->fields).Parent,
                           (MethodInfo_1407110 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        if (!bVar3) {
          pSVar4 = System_Int32__ToString(&(pMVar1->fields).Parent,(MethodInfo *)0x0);
          pSVar4 = System_String__Concat_1969b70
                             ("Map load error: object parent id not found (",pSVar4,")",(MethodInfo *)0x0);
          if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
          }
          ApplicationManagers_DebugConsole__Log(pSVar4,true,(MethodInfo *)0x0);
          return;
        }
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if ((((pSVar2 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) &&
             (uVar5 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                                (pSVar2,(pMVar1->fields).Parent,
                                 (MethodInfo_14156F0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
             uVar5 != 0)) && (*(UnityEngine_GameObject_o **)(uVar5 + 0x18) != (UnityEngine_GameObject_o *)0x0)
            ) && (p = UnityEngine_GameObject__get_transform
                                (*(UnityEngine_GameObject_o **)(uVar5 + 0x18),(MethodInfo *)0x0),
                 __this_00 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent(__this_00,p,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$SetDefaultTiling
// il2cpp: void Map_MapLoader__SetDefaultTiling (System_String_o* asset, UnityEngine_Material_o* mat, UnityEngine_Vector2_o tiling, const MethodInfo* method);
// 0x181eae660

void Map_MapLoader__SetDefaultTiling
               (System_String_o *asset,UnityEngine_Material_o *mat,UnityEngine_Vector2_o tiling,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *name;
  float fVar2;
  float fStack_44;
  UnityEngine_Vector4_o local_38 [3];
  
  if (Il2CppMethodInitialized_1843450c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"FX/LavaCube1");
    il2cpp_codegen_initialize_runtime_metadata(&"_BaseColorTiling");
    il2cpp_codegen_initialize_runtime_metadata(&"_EmitColorTiling");
    il2cpp_codegen_initialize_runtime_metadata(&"FX/WaterCube1");
    il2cpp_codegen_initialize_runtime_metadata(&"_Tiling_1");
    il2cpp_codegen_initialize_runtime_metadata(&"_Normal_Tiling");
    il2cpp_codegen_initialize_runtime_metadata(&"_Tiling");
    Il2CppMethodInitialized_1843450c2 = '\x01';
  }
  bVar1 = System_String__op_Equality(asset,"FX/WaterCube1",(MethodInfo *)0x0);
  fVar2 = tiling.fields.x;
  fStack_44 = tiling.fields.y;
  local_38[0].fields.x = fVar2;
  if (bVar1) {
    if (mat == (UnityEngine_Material_o *)0x0) goto label_181eae818;
    local_38[0].fields.y = fStack_44;
    local_38[0].fields.z = 0.0;
    local_38[0].fields.w = 0.0;
    UnityEngine_Material__SetVector(mat,"_Tiling",local_38,(MethodInfo *)0x0);
    name = "_Tiling_1";
  }
  else {
    bVar1 = System_String__op_Equality(asset,"FX/LavaCube1",(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (mat == (UnityEngine_Material_o *)0x0) {
label_181eae818:
      ThrowNullReferenceException();
    }
    local_38[0].fields.y = fStack_44;
    local_38[0].fields.z = 0.0;
    local_38[0].fields.w = 0.0;
    UnityEngine_Material__SetVector(mat,"_BaseColorTiling",local_38,(MethodInfo *)0x0);
    local_38[0].fields.y = fStack_44;
    local_38[0].fields.z = 0.0;
    local_38[0].fields.w = 0.0;
    local_38[0].fields.x = fVar2;
    UnityEngine_Material__SetVector(mat,"_EmitColorTiling",local_38,(MethodInfo *)0x0);
    name = "_Normal_Tiling";
  }
  local_38[0].fields.y = fStack_44;
  local_38[0].fields.z = 0.0;
  local_38[0].fields.w = 0.0;
  local_38[0].fields.x = fVar2;
  UnityEngine_Material__SetVector(mat,name,local_38,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader$$RendererBelongsToMapObject
// il2cpp: bool Map_MapLoader__RendererBelongsToMapObject (UnityEngine_Renderer_o* renderer, UnityEngine_GameObject_o* ownerGo, const MethodInfo* method);
// 0x181eade90

bool Map_MapLoader__RendererBelongsToMapObject
               (UnityEngine_Renderer_o *renderer,UnityEngine_GameObject_o *ownerGo,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_GameObject__MapObject__o *__this;
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *key;
  
  if (Il2CppMethodInitialized_1843450c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843450c3 = '\x01';
  }
  if (renderer != (UnityEngine_Renderer_o *)0x0) {
    __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)renderer,(MethodInfo *)0x0);
    do {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
label_181eadfc7:
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        return bVar1;
      }
      if (__this_00 == (UnityEngine_Transform_o *)0x0) break;
      x = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)ownerGo,(MethodInfo *)0x0);
      if (!bVar1) goto label_181eadfc7;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      __this = TypeInfo_Map_MapLoader->static_fields->GoToMapObject;
      key = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (__this == (System_Collections_Generic_Dictionary_GameObject__MapObject__o *)0x0) break;
      bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)key,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ContainsKey);
      if (bVar1) {
        return false;
      }
      __this_00 = UnityEngine_Transform__GetParent(__this_00,(MethodInfo *)0x0);
    } while( true );
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$SetMaterial
// il2cpp: void Map_MapLoader__SetMaterial (UnityEngine_GameObject_o* go, System_String_o* asset, Map_MapScriptBaseMaterial_o* material, bool visible, bool editor, const MethodInfo* method);
// 0x181eae820
// eh: try 0x181eaee10..0x181eaeeb1 -> pad 0x18333d5d0 catch Il2CppExceptionWrapper
// eh: try 0x181eaf3cc..0x181eaf3e4 -> pad 0x180356390 cleanup
// eh: try 0x181eaf798..0x181eaf814 -> pad 0x18333d600 catch Il2CppExceptionWrapper
// eh: try 0x181eaf847..0x181eaf859 -> pad 0x180356390 cleanup
// eh: try 0x181eaf9b0..0x181eafe4b -> pad 0x18333d630 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 77 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eaecdc: mov r12, rbx
// asm:   0x181eaecdf: mov qword ptr [rsp + 0x150], rbx
// asm:   0x181eaece7: mov ebx, esi
// asm:   0x181eaece9: mov eax, esi
// asm:   0x181eaeceb: nop dword ptr [rax + rax]
// asm:   0x181eaee09: nop dword ptr [rax]
// asm:   0x181eaeec2: mov rdx, qword ptr [rip + 0x21e4b77]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x181eaeec9: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x181eaeece: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181eaeed3: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x181eaeed8: test rcx, rcx
// asm:   0x181eaeedb: jne 0x181eafdc7
// asm:   0x181eaeee1: xor esi, esi
// asm:   0x181eaeee3: mov rdi, qword ptr [rsp + 0x160]
// asm:   0x181eaeeeb: mov r12, qword ptr [rsp + 0x150]
// asm:   0x181eaeef3: mov r14, qword ptr [rsp + 0x20]
// asm:   0x181eaf195: mov r14, rsi
// asm:   0x181eaf198: jmp 0x181eaf1cd
// asm:   0x181eaf3cc: jmp 0x181eaf45c
// asm:   0x181eaf4bf: mov r15, qword ptr [rsp + 0x20]
// asm:   0x181eaf627: mov r14, rsi
// asm:   0x181eaf62a: jmp 0x181eaf65f
// asm:   0x181eaf828: mov rdx, qword ptr [rip + 0x21e4211]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x181eaf82f: mov rcx, qword ptr [rsp + 0x78]
// asm:   0x181eaf834: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181eaf839: mov rcx, qword ptr [rsp + 0x70]
// asm:   0x181eaf83e: test rcx, rcx
// asm:   0x181eaf841: jne 0x181eafe23
// asm:   0x181eaf847: jmp 0x181eafd8e
// asm:   0x181eafbf0: mov rdx, qword ptr [rip + 0x21dcdd1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose
// asm:   0x181eafbf7: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181eafbfc: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181eafc01: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181eafc06: test rcx, rcx
// asm:   0x181eafc09: jne 0x181eafe4b
// asm:   0x181eafc0f: xor esi, esi
// asm:   0x181eafc11: mov r12, qword ptr [rsp + 0x150]
// asm:   0x181eafc19: mov rbx, qword ptr [rsp + 0xc8]
// asm:   0x181eafc21: mov r14, qword ptr [rsp + 0x60]
// asm:   0x181eafcb9: movzx r15d, byte ptr [rsp + 0x168]
// asm:   0x181eafcc2: mov r14, qword ptr [rsp + 0x70]
// asm:   0x181eafdc7: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181eafe23: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181eafe4b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333d5d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d5d5: push rbp
// asm:   0x18333d5d6: sub rsp, 0x20
// asm:   0x18333d5da: mov rbp, rdx
// asm:   0x18333d5dd: mov rax, qword ptr [rbp + 0xd0]
// asm:   0x18333d5e4: mov rcx, qword ptr [rax]
// asm:   0x18333d5e7: mov qword ptr [rbp + 0x60], rcx
// asm:   0x18333d5eb: movabs rax, 0
// asm:   0x18333d5f5: add rsp, 0x20
// asm:   0x18333d5f9: pop rbp
// asm:   0x18333d5fa: ret 
// asm:   0x18333d600: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d605: push rbp
// asm:   0x18333d606: sub rsp, 0x20
// asm:   0x18333d60a: mov rbp, rdx
// asm:   0x18333d60d: mov rax, qword ptr [rbp + 0xd8]
// asm:   0x18333d614: mov rcx, qword ptr [rax]
// asm:   0x18333d617: mov qword ptr [rbp + 0x70], rcx
// asm:   0x18333d61b: movabs rax, 0
// asm:   0x18333d625: add rsp, 0x20
// asm:   0x18333d629: pop rbp
// asm:   0x18333d62a: ret 
// asm:   0x18333d630: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d635: push rbp
// asm:   0x18333d636: sub rsp, 0x20
// asm:   0x18333d63a: mov rbp, rdx
// asm:   0x18333d63d: mov rax, qword ptr [rbp + 0xe0]
// asm:   0x18333d644: mov rcx, qword ptr [rax]
// asm:   0x18333d647: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333d64b: movabs rax, 0
// asm:   0x18333d655: add rsp, 0x20
// asm:   0x18333d659: pop rbp
// asm:   0x18333d65a: ret 

void Map_MapLoader__SetMaterial
               (UnityEngine_GameObject_o *go,System_String_o *asset,Map_MapScriptBaseMaterial_o *material,
               bool visible,bool editor,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  UnityEngine_GameObject_o *__this;
  System_Collections_Generic_Dictionary_string__List_Material___o *pSVar3;
  UnityEngine_Material_array *pUVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  System_Collections_Generic_Dictionary_string__Material__o *__this_00;
  System_Collections_Generic_Dictionary_string__MapScriptBasicMaterial__o *__this_01;
  System_Collections_Generic_Dictionary_string__string__o *__this_02;
  Utility_Color255_o *pUVar6;
  Map_MapScriptBasicMaterial_c *pMVar7;
  UnityEngine_Vector2_o UVar8;
  MethodInfo *pMVar9;
  Il2CppType *handle;
  Il2CppObject *pIVar10;
  System_Collections_Generic_List_Renderer__o *pSVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  Map_MapLoader___c__DisplayClass76_0_o *object;
  System_Object_array *array;
  System_Predicate_T__o *match;
  System_Collections_Generic_List_Renderer__o *__this_03;
  System_String_o *pSVar15;
  System_Collections_Generic_List_Material__o *pSVar16;
  UnityEngine_Material_o *pUVar17;
  System_Type_o *pSVar18;
  System_Type_o *pSVar19;
  System_String_o *pSVar20;
  UnityEngine_Object_o *pUVar21;
  UnityEngine_Texture_o *pUVar22;
  System_String_array *pSVar23;
  Map_MapScriptBasicMaterial_o *pMVar24;
  System_String_o *path;
  UnityEngine_Color_o *pUVar25;
  UnityEngine_Texture_o *pUVar26;
  UnityEngine_Texture_o *pUVar27;
  System_Collections_Generic_List_T__o *__this_04;
  System_Collections_Generic_Dictionary_Material__Material__o *__this_05;
  System_Collections_Generic_List_object__o *__this_06;
  UnityEngine_Renderer_o *pUVar28;
  int index;
  bool local_res20;
  UnityEngine_Material_o *local_120;
  undefined1 local_118 [16];
  System_Collections_Generic_Dictionary_Material__Material__o *local_108;
  System_Collections_Generic_List_Enumerator_object__o local_100;
  System_Collections_Generic_List_Material__o *local_e8;
  System_Collections_Generic_List_Enumerator_object__o *local_e0;
  System_Collections_Generic_List_Renderer__o *local_d8;
  System_Collections_Generic_List_Enumerator_object__o *local_d0;
  System_Collections_Generic_List_Enumerator_T__o local_c8;
  UnityEngine_Color_Fields local_a8;
  System_Collections_Generic_List_Enumerator_object__o local_98;
  System_String_o *local_80;
  
  if (Il2CppMethodInitialized_1843450c4 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapLoader_c__DisplayClass76_0_SetMaterial_b__0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader_c__DisplayClass76_0);
    il2cpp_codegen_initialize_runtime_metadata(&"_TintColor");
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
    Il2CppMethodInitialized_1843450c4 = '\x01';
  }
  local_100.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_100.fields._index = 0;
  local_100.fields._version = 0;
  local_100.fields._current = (Il2CppObject *)0x0;
  local_98.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_98.fields._index = 0;
  local_98.fields._version = 0;
  local_98.fields._current = (Il2CppObject *)0x0;
  pUVar26 = (UnityEngine_Texture_o *)0x0;
  local_120 = (UnityEngine_Material_o *)0x0;
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapLoader_c__DisplayClass76_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Map_MapLoader___c__DisplayClass76_0_o *)0x0) goto label_181eafe51;
  (object->fields).go = go;
  Il2CppCodeGenWriteBarrier(&(object->fields).go,go);
  bVar12 = System_String__op_Equality(asset,"None",(MethodInfo *)0x0);
  if (bVar12) {
    return;
  }
  __this = (object->fields).go;
  if (__this == (UnityEngine_GameObject_o *)0x0) goto label_181eafe51;
  array = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                    (__this,(MethodInfo_6F5810 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
  if (editor) {
    match = (System_Predicate_T__o *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Renderer);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)match,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Map_MapLoader_c__DisplayClass76_0_SetMaterial_b__0,
               (MethodInfo_B61EB0 *)0x0);
    array = System_Array__FindAll_object_
                      (array,match,(MethodInfo_75CF00 *)MethodInfo_System_Array_FindAll_Renderer);
  }
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
  local_d8 = __this_03;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_03,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
  local_res20 = visible;
  if (editor && !visible) {
    if (asset == (System_String_o *)0x0) goto label_181eafe51;
    local_res20 = true;
    bVar12 = System_String__Contains(asset,"Editor",(MethodInfo *)0x0);
    if (!bVar12) {
      if ((TypeInfo_Map_MapAssets->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapAssets);
      }
      bVar12 = Map_MapAssets__HasEditorMaterial(asset,(MethodInfo *)0x0);
      if (!bVar12) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        material = (Map_MapScriptBaseMaterial_o *)TypeInfo_Map_MapLoader->static_fields->_invisibleMaterial;
      }
    }
  }
  pUVar27 = pUVar26;
  if (array == (System_Object_array *)0x0) goto label_181eafe51;
  while (uVar14 = (uint)pUVar27, (int)uVar14 < (int)array->max_length) {
    if ((uint)array->max_length <= uVar14) goto label_181eafde5;
    if ((UnityEngine_Object_o *)array->m_Items[(int)uVar14] == (UnityEngine_Object_o *)0x0)
    goto label_181eafe51;
    pSVar15 = UnityEngine_Object__get_name
                        ((UnityEngine_Object_o *)array->m_Items[(int)uVar14],(MethodInfo *)0x0);
    bVar12 = System_String__op_Inequality(pSVar15,"OutlineGizmo",(MethodInfo *)0x0);
    if (bVar12) {
      if (__this_03 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_181eafe51;
      il2cpp_runtime_helper_180012890(__this_03);
    }
    pUVar27 = (UnityEngine_Texture_o *)(ulonglong)(uVar14 + 1);
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar3 = TypeInfo_Map_MapLoader->static_fields->_assetMaterialCache;
  if (pSVar3 == (System_Collections_Generic_Dictionary_string__List_Material___o *)0x0) goto label_181eafe51;
  bVar12 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,(Il2CppObject *)asset,
                      (MethodInfo_1455450 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_ContainsKey);
  if (!bVar12) {
    pSVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar16,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
    if (__this_03 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_181eafe51;
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              (&local_c8,(System_Collections_Generic_List_T__o *)__this_03,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    local_100.fields._list = local_c8.fields._list;
    local_100.fields._index = local_c8.fields._index;
    local_100.fields._version = local_c8.fields._version;
    local_100.fields._current = local_c8.fields._current;
    local_e8 = (System_Collections_Generic_List_Material__o *)0x0;
    local_e0 = &local_100;
    while (bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (&local_100,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext),
          bVar12) {
      if ((UnityEngine_Material_o *)local_100.fields._current == (UnityEngine_Material_o *)0x0) {
        ThrowNullReferenceException();
      }
      pUVar17 = UnityEngine_Renderer__get_sharedMaterial
                          ((UnityEngine_Renderer_o *)local_100.fields._current,(MethodInfo *)0x0);
      pMVar9 = MethodInfo_System_Collections_Generic_List_Material_Add;
      if (pSVar16 == (System_Collections_Generic_List_Material__o *)0x0) {
        ThrowNullReferenceException();
      }
      piVar1 = &(pSVar16->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (pSVar16->fields)._items;
      if (pUVar4 == (UnityEngine_Material_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar14 = (pSVar16->fields)._size;
      if (uVar14 < (uint)pUVar4->max_length) {
        (pSVar16->fields)._size = uVar14 + 1;
        if ((uint)pUVar4->max_length <= uVar14) {
          ThrowIndexOutOfRangeException();
        }
        pUVar4->m_Items[(int)uVar14] = pUVar17;
        Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar14,pUVar17);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar16,(Il2CppObject *)pUVar17,
                   (MethodInfo_93DD50 *)pMVar9->klass->rgctx_data[0xe].method);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_100,
               MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->_assetMaterialCache;
    if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181eafe51;
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar5,(Il2CppObject *)asset,(Il2CppObject *)pSVar16,
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_Add
              );
  }
  if ((Map_MapScriptBasicMaterial_o *)material == (Map_MapScriptBasicMaterial_o *)0x0) goto label_181eafe51;
  pSVar15 = (((Map_MapScriptBasicMaterial_o *)material)->fields).Shader;
  if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
  }
  bVar12 = System_String__op_Equality
                     (pSVar15,TypeInfo_Map_MapObjectShader->static_fields->Default,(MethodInfo *)0x0);
  if (!bVar12) {
    pSVar15 = (((Map_MapScriptBasicMaterial_o *)material)->fields).Shader;
    if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
    }
    bVar12 = System_String__op_Equality
                       (pSVar15,TypeInfo_Map_MapObjectShader->static_fields->DefaultNoTint,(MethodInfo *)0x0);
    if (!bVar12) {
      pSVar15 = (((Map_MapScriptBasicMaterial_o *)material)->fields).Shader;
      if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
      }
      bVar12 = System_String__op_Equality
                         (pSVar15,TypeInfo_Map_MapObjectShader->static_fields->DefaultTiled,(MethodInfo *)0x0)
      ;
      if (!bVar12) {
        pSVar15 = (*(((Map_MapScriptBasicMaterial_o *)material)->klass->vtable)._8_Serialize.methodPtr)
                            (material,(((Map_MapScriptBasicMaterial_o *)material)->klass->vtable)._8_Serialize
                                      .method);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        __this_00 = TypeInfo_Map_MapLoader->static_fields->_customMaterialCache;
        if (__this_00 == (System_Collections_Generic_Dictionary_string__Material__o *)0x0) goto label_181eafe51;
        bVar12 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                            (Il2CppObject *)pSVar15,
                            (MethodInfo_1455450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_Material_ContainsKey);
        if (bVar12) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->_customMaterialCache;
          if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181eafe51;
          pUVar27 = (UnityEngine_Texture_o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar5,(Il2CppObject *)pSVar15,
                               (MethodInfo_147A5B0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_Material_get_Item);
        }
        else {
          pSVar20 = (((Map_MapScriptBasicMaterial_o *)material)->fields).Shader;
          if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
          }
          bVar12 = Map_MapObjectShader__IsLegacyShader(pSVar20,(MethodInfo *)0x0);
          handle = TypeRef_Map_MapScriptBasicMaterial;
          pUVar27 = pUVar26;
          if (bVar12) {
            bVar2 = (TypeInfo_Map_MapScriptLegacyMaterial->_2).typeHierarchyDepth;
            if (((((Map_MapScriptBasicMaterial_o *)material)->klass->_2).typeHierarchyDepth < bVar2) ||
               ((((Map_MapScriptBasicMaterial_o *)material)->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                (Il2CppClass *)TypeInfo_Map_MapScriptLegacyMaterial)) {
              il2cpp_codegen_raise_invalid_cast_exception(material);
            }
            pSVar20 = (((Map_MapScriptBasicMaterial_o *)material)->fields).Shader;
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pUVar21 = Map_MapLoader__LoadAssetCached("Map/Legacy/Materials",pSVar20,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            pUVar26 = (UnityEngine_Texture_o *)
                      UnityEngine_Object__Instantiate_2f212a0(pUVar21,(MethodInfo *)0x0);
            if (pUVar26 != (UnityEngine_Texture_o *)0x0) {
              bVar2 = (TypeInfo_UnityEngine_Material->_2).typeHierarchyDepth;
              if (((pUVar26->klass->_2).typeHierarchyDepth < bVar2) ||
                 (pUVar27 = pUVar26,
                 (pUVar26->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                 (Il2CppClass *)TypeInfo_UnityEngine_Material)) {
                il2cpp_codegen_raise_invalid_cast_exception(pUVar26);
              }
            }
            pUVar6 = (((Map_MapScriptBasicMaterial_o *)material)->fields).Color;
            if ((pUVar6 == (Utility_Color255_o *)0x0) ||
               (pUVar25 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_a8,pUVar6,(MethodInfo *)0x0)
               , pUVar27 == (UnityEngine_Texture_o *)0x0)) goto label_181eafe51;
            local_118._0_4_ = (pUVar25->fields).r;
            local_118._4_4_ = (pUVar25->fields).g;
            local_118._8_8_ = *(undefined8 *)&(pUVar25->fields).b;
            UnityEngine_Material__SetVector
                      ((UnityEngine_Material_o *)pUVar27,"_TintColor",
                       (UnityEngine_Vector4_o *)local_118,(MethodInfo *)0x0);
            UnityEngine_Material__set_mainTextureScale
                      ((UnityEngine_Material_o *)pUVar27,
                       (UnityEngine_Vector2_o)(((Map_MapScriptBasicMaterial_o *)material)->fields).Texture,
                       (MethodInfo *)0x0);
          }
          else {
            if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_184354ea0);
            }
            pSVar18 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
            pSVar19 = System_Object__GetType((Il2CppObject *)material,(MethodInfo *)0x0);
            if (pSVar18 == (System_Type_o *)0x0) goto label_181eafe51;
            bVar12 = (*(pSVar18->klass->vtable)._22_IsAssignableFrom.methodPtr)
                               (pSVar18,pSVar19,(pSVar18->klass->vtable)._22_IsAssignableFrom.method);
            if (bVar12) {
              bVar2 = (TypeInfo_Map_MapScriptBasicMaterial->_2).typeHierarchyDepth;
              if (((((Map_MapScriptBasicMaterial_o *)material)->klass->_2).typeHierarchyDepth < bVar2) ||
                 ((((Map_MapScriptBasicMaterial_o *)material)->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1]
                  != (Il2CppClass *)TypeInfo_Map_MapScriptBasicMaterial)) {
                il2cpp_codegen_raise_invalid_cast_exception(material);
              }
              pSVar20 = System_String__Concat_1969e50
                                  ((((Map_MapScriptBasicMaterial_o *)material)->fields).Shader,
                                   "Material",(MethodInfo *)0x0);
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              }
              pUVar21 = Map_MapLoader__LoadAssetCached("Map/Materials",pSVar20,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              pUVar22 = (UnityEngine_Texture_o *)
                        UnityEngine_Object__Instantiate_2f212a0(pUVar21,(MethodInfo *)0x0);
              if (pUVar22 != (UnityEngine_Texture_o *)0x0) {
                bVar2 = (TypeInfo_UnityEngine_Material->_2).typeHierarchyDepth;
                if (((pUVar22->klass->_2).typeHierarchyDepth < bVar2) ||
                   (pUVar27 = pUVar22,
                   (pUVar22->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                   (Il2CppClass *)TypeInfo_UnityEngine_Material)) {
                  il2cpp_codegen_raise_invalid_cast_exception(pUVar22);
                }
              }
              bVar12 = System_String__op_Inequality
                                 ((((Map_MapScriptBasicMaterial_o *)material)->fields).Texture,
                                  "Misc/None",(MethodInfo *)0x0);
              if ((bVar12) &&
                 (bVar12 = System_String__op_Inequality
                                     ((((Map_MapScriptBasicMaterial_o *)material)->fields).Texture,
                                      "None",(MethodInfo *)0x0), bVar12)) {
                pSVar20 = (((Map_MapScriptBasicMaterial_o *)material)->fields).Texture;
                if ((pSVar20 == (System_String_o *)0x0) ||
                   (pSVar23 = System_String__Split(pSVar20,0x2f,0,(MethodInfo *)0x0),
                   pSVar23 == (System_String_array *)0x0)) goto label_181eafe51;
                if (((int)pSVar23->max_length == 0) || ((uint)pSVar23->max_length < 2)) {
label_181eafde5:
                  ThrowIndexOutOfRangeException();
                }
                local_108 = (System_Collections_Generic_Dictionary_Material__Material__o *)pSVar23->m_Items[0]
                ;
                pSVar20 = pSVar23->m_Items[1];
                bVar12 = System_String__op_Equality
                                   ((System_String_o *)local_108,"Legacy",(MethodInfo *)0x0);
                if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
                }
                __this_01 = TypeInfo_Map_BuiltinMapTextures->static_fields->AllTextures;
                if (__this_01 ==
                    (System_Collections_Generic_Dictionary_string__MapScriptBasicMaterial__o *)0x0)
                goto label_181eafe51;
                bVar13 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                                   ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                                    (Il2CppObject *)pSVar20,
                                    (MethodInfo_1455450 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_ContainsKey
                                   );
                if (bVar13) {
                  if (bVar12) {
                    if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
                    }
                    __this_02 = TypeInfo_Map_BuiltinMapTextures->static_fields->LegacyTexturePaths;
                    if (__this_02 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                    goto label_181eafe51;
                    bVar13 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                                        (Il2CppObject *)pSVar20,
                                        (MethodInfo_1455450 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey
                                       );
                    if (!bVar13) goto label_181eaf4c4;
                  }
                  if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
                  }
                  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                           TypeInfo_Map_BuiltinMapTextures->static_fields->AllTextures;
                  if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                  goto label_181eafe51;
                  pMVar24 = System_Collections_Generic_Dictionary_object__object___get_Item
                                      (pSVar5,(Il2CppObject *)pSVar20,
                                       (MethodInfo_147A5B0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Item
                                      );
                  if (bVar12) {
                    if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
                    }
                    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                             TypeInfo_Map_BuiltinMapTextures->static_fields->LegacyTexturePaths;
                    if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                    goto label_181eafe51;
                    pSVar20 = System_Collections_Generic_Dictionary_object__object___get_Item
                                        (pSVar5,(Il2CppObject *)pSVar20,
                                         (MethodInfo_147A5B0 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item
                                        );
                    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                    }
                    pUVar22 = (UnityEngine_Texture_o *)
                              Map_MapLoader__LoadAssetCached("Map",pSVar20,(MethodInfo *)0x0);
                    if (pUVar22 != (UnityEngine_Texture_o *)0x0) {
                      if (pUVar22->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
                        pUVar26 = pUVar22;
                      }
                      if (pUVar26 == (UnityEngine_Texture_o *)0x0) {
                        il2cpp_codegen_raise_invalid_cast_exception(pUVar22,TypeInfo_UnityEngine_Texture2D);
                      }
                    }
                  }
                  else {
                    path = System_String__Concat_1969e50
                                     ("Map/Textures/",(System_String_o *)local_108,(MethodInfo *)0x0);
                    pSVar20 = System_String__Concat_1969e50(pSVar20,"Texture",(MethodInfo *)0x0);
                    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                    }
                    pUVar22 = (UnityEngine_Texture_o *)
                              Map_MapLoader__LoadAssetCached(path,pSVar20,(MethodInfo *)0x0);
                    if (pUVar22 != (UnityEngine_Texture_o *)0x0) {
                      if (pUVar22->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
                        pUVar26 = pUVar22;
                      }
                      if (pUVar26 == (UnityEngine_Texture_o *)0x0) {
                        il2cpp_codegen_raise_invalid_cast_exception(pUVar22,TypeInfo_UnityEngine_Texture2D);
                      }
                    }
                  }
                  if ((pUVar27 == (UnityEngine_Texture_o *)0x0) ||
                     (UnityEngine_Material__set_mainTexture
                                ((UnityEngine_Material_o *)pUVar27,pUVar26,(MethodInfo *)0x0),
                     pMVar24 == (Map_MapScriptBasicMaterial_o *)0x0)) goto label_181eafe51;
                  UVar8.fields.y =
                       (pMVar24->fields).Tiling.fields.y *
                       (((Map_MapScriptBasicMaterial_o *)material)->fields).Tiling.fields.y;
                  UVar8.fields.x =
                       (pMVar24->fields).Tiling.fields.x *
                       (((Map_MapScriptBasicMaterial_o *)material)->fields).Tiling.fields.x;
                  UnityEngine_Material__set_mainTextureScale
                            ((UnityEngine_Material_o *)pUVar27,UVar8,(MethodInfo *)0x0);
                  UnityEngine_Material__set_mainTextureOffset
                            ((UnityEngine_Material_o *)pUVar27,
                             (UnityEngine_Vector2_o)
                             (((Map_MapScriptBasicMaterial_o *)material)->fields).Offset.fields,
                             (MethodInfo *)0x0);
                }
              }
label_181eaf4c4:
              pUVar6 = (((Map_MapScriptBasicMaterial_o *)material)->fields).Color;
              if ((pUVar6 == (Utility_Color255_o *)0x0) ||
                 (pUVar25 = Utility_Color255__ToColor
                                      ((UnityEngine_Color_o *)&local_a8,pUVar6,(MethodInfo *)0x0),
                 pUVar27 == (UnityEngine_Texture_o *)0x0)) goto label_181eafe51;
              local_118._0_4_ = (pUVar25->fields).r;
              local_118._4_4_ = (pUVar25->fields).g;
              local_118._8_8_ = *(undefined8 *)&(pUVar25->fields).b;
              UnityEngine_Material__set_color
                        ((UnityEngine_Material_o *)pUVar27,(UnityEngine_Color_o *)local_118,(MethodInfo *)0x0)
              ;
              pMVar7 = ((Map_MapScriptBasicMaterial_o *)material)->klass;
              bVar2 = (TypeInfo_Map_MapScriptReflectiveMaterial->_2).typeHierarchyDepth;
              if ((bVar2 <= (pMVar7->_2).typeHierarchyDepth) &&
                 ((pMVar7->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
                  (Il2CppClass *)TypeInfo_Map_MapScriptReflectiveMaterial)) {
                bVar2 = (TypeInfo_Map_MapScriptReflectiveMaterial->_2).typeHierarchyDepth;
                if (((pMVar7->_2).typeHierarchyDepth < bVar2) ||
                   ((pMVar7->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                    (Il2CppClass *)TypeInfo_Map_MapScriptReflectiveMaterial)) {
                  il2cpp_codegen_raise_invalid_cast_exception(material);
                }
                if (((Map_MapScriptBasicMaterial_o *)((longlong)material + 0x38))->klass ==
                    (Map_MapScriptBasicMaterial_c *)0x0) goto label_181eafe51;
                pUVar25 = Utility_Color255__ToColor
                                    ((UnityEngine_Color_o *)&local_a8,
                                     (Utility_Color255_o *)
                                     ((Map_MapScriptBasicMaterial_o *)((longlong)material + 0x38))->klass,
                                     (MethodInfo *)0x0);
                local_118._0_4_ = (pUVar25->fields).r;
                local_118._4_4_ = (pUVar25->fields).g;
                local_118._8_8_ = *(undefined8 *)&(pUVar25->fields).b;
                UnityEngine_Material__SetVector
                          ((UnityEngine_Material_o *)pUVar27,"_SpecularMap",
                           (UnityEngine_Vector4_o *)local_118,(MethodInfo *)0x0);
              }
            }
          }
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->_customMaterialCache;
          if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181eafe51;
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar5,(Il2CppObject *)pSVar15,(Il2CppObject *)pUVar27,
                     (MethodInfo_146B4B0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Material_Add);
        }
        if (__this_03 != (System_Collections_Generic_List_Renderer__o *)0x0) {
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    (&local_c8,(System_Collections_Generic_List_T__o *)__this_03,
                     (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
          local_100.fields._list = local_c8.fields._list;
          local_100.fields._index = local_c8.fields._index;
          local_100.fields._version = local_c8.fields._version;
          local_100.fields._current = local_c8.fields._current;
          local_d8 = (System_Collections_Generic_List_Renderer__o *)0x0;
          local_d0 = &local_100;
          do {
            bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (&local_100,
                                (MethodInfo_153A2A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
            pIVar10 = local_100.fields._current;
            if (!bVar12) {
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_100,
                         MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
              return;
            }
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar12 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pUVar27,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if (bVar12) {
              if ((UnityEngine_Material_o *)pIVar10 == (UnityEngine_Material_o *)0x0) {
                ThrowNullReferenceException();
              }
              UnityEngine_Renderer__set_sharedMaterial
                        ((UnityEngine_Renderer_o *)pIVar10,(UnityEngine_Material_o *)pUVar27,(MethodInfo *)0x0
                        );
            }
            else if ((UnityEngine_Material_o *)pIVar10 == (UnityEngine_Material_o *)0x0) {
              ThrowNullReferenceException();
            }
            UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)pIVar10,local_res20,(MethodInfo *)0x0)
            ;
          } while( true );
        }
        goto label_181eafe51;
      }
    }
  }
  pSVar15 = (*(((Map_MapScriptBasicMaterial_o *)material)->klass->vtable)._8_Serialize.methodPtr)
                      (material,(((Map_MapScriptBasicMaterial_o *)material)->klass->vtable)._8_Serialize.
                                method);
  pSVar15 = System_String__Concat_1969e50(asset,pSVar15,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar3 = TypeInfo_Map_MapLoader->static_fields->_defaultMaterialCache;
  if (pSVar3 == (System_Collections_Generic_Dictionary_string__List_Material___o *)0x0) goto label_181eafe51;
  local_80 = pSVar15;
  bVar12 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,(Il2CppObject *)pSVar15,
                      (MethodInfo_1455450 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_ContainsKey);
  if (!bVar12) {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->_assetMaterialCache;
    if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181eafe51;
    __this_04 = (System_Collections_Generic_List_T__o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar5,(Il2CppObject *)asset,
                           (MethodInfo_147A5B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_get_Item);
    pSVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar16,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
    __this_05 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Material_Material);
    local_108 = __this_05;
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_05,
               (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_Material_Material_ctor);
    if (__this_04 == (System_Collections_Generic_List_T__o *)0x0) goto label_181eafe51;
    local_e8 = pSVar16;
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              (&local_c8,__this_04,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
    local_98.fields._list = local_c8.fields._list;
    local_98.fields._index = local_c8.fields._index;
    local_98.fields._version = local_c8.fields._version;
    local_98.fields._current = local_c8.fields._current;
    local_118._0_4_ = 0.0;
    local_118._4_4_ = 0.0;
    local_118._8_8_ = &local_98;
    while (bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (&local_98,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext),
          pIVar10 = local_98.fields._current, bVar12) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar12 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pIVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar12) {
        if (pSVar16 == (System_Collections_Generic_List_Material__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(pSVar16,0);
      }
      else {
        if (__this_05 == (System_Collections_Generic_Dictionary_Material__Material__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar12 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                           ((System_Collections_Generic_Dictionary_object__object__o *)__this_05,pIVar10,
                            (Il2CppObject **)&local_120,
                            (MethodInfo_14769C0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_Material_Material_TryGetValue);
        if (!bVar12) {
          pUVar17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
          UnityEngine_Material___ctor_2ee55e0(pUVar17,(UnityEngine_Material_o *)pIVar10,(MethodInfo *)0x0);
          pSVar20 = (((Map_MapScriptBasicMaterial_o *)material)->fields).Shader;
          local_120 = pUVar17;
          if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
          }
          bVar12 = System_String__op_Inequality
                             (pSVar20,TypeInfo_Map_MapObjectShader->static_fields->DefaultNoTint,
                              (MethodInfo *)0x0);
          pUVar17 = local_120;
          if (bVar12) {
            pUVar6 = (((Map_MapScriptBasicMaterial_o *)material)->fields).Color;
            if (pUVar6 == (Utility_Color255_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar25 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_c8,pUVar6,(MethodInfo *)0x0);
            if (pUVar17 == (UnityEngine_Material_o *)0x0) {
              ThrowNullReferenceException();
            }
            local_a8.r = (pUVar25->fields).r;
            local_a8.g = (pUVar25->fields).g;
            local_a8.b = (pUVar25->fields).b;
            local_a8.a = (pUVar25->fields).a;
            UnityEngine_Material__set_color(pUVar17,(UnityEngine_Color_o *)&local_a8,(MethodInfo *)0x0);
          }
          pSVar20 = (((Map_MapScriptBasicMaterial_o *)material)->fields).Shader;
          if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
          }
          bVar12 = System_String__op_Equality
                             (pSVar20,TypeInfo_Map_MapObjectShader->static_fields->DefaultTiled,
                              (MethodInfo *)0x0);
          pUVar17 = local_120;
          if (bVar12) {
            bVar2 = (TypeInfo_Map_MapScriptDefaultTiledMaterial->_2).typeHierarchyDepth;
            if (((((Map_MapScriptBasicMaterial_o *)material)->klass->_2).typeHierarchyDepth < bVar2) ||
               ((((Map_MapScriptBasicMaterial_o *)material)->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                (Il2CppClass *)TypeInfo_Map_MapScriptDefaultTiledMaterial)) {
              il2cpp_codegen_raise_invalid_cast_exception(material);
            }
            UVar8.fields = (UnityEngine_Vector2_Fields)
                           (((Map_MapScriptBasicMaterial_o *)material)->fields).Texture;
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            Map_MapLoader__SetDefaultTiling(asset,pUVar17,UVar8,(MethodInfo *)0x0);
          }
          __this_05 = local_108;
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)local_108,pIVar10,
                     (Il2CppObject *)local_120,
                     (MethodInfo_146B4B0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Material_Material_Add);
        }
        if (pSVar16 == (System_Collections_Generic_List_Material__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(pSVar16,local_120);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_98,
               MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->_defaultMaterialCache;
    if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181eafe51;
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar5,(Il2CppObject *)pSVar15,(Il2CppObject *)pSVar16,
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_Add
              );
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Map_MapLoader->static_fields->_defaultMaterialCache;
  if ((pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_06 = (System_Collections_Generic_List_object__o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar5,(Il2CppObject *)pSVar15,
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_get_Item),
     pSVar11 = local_d8, __this_03 != (System_Collections_Generic_List_Renderer__o *)0x0)) {
    do {
      index = (int)pUVar26;
      if ((pSVar11->fields)._size <= index) {
        return;
      }
      if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) break;
      if (index < (__this_06->fields)._size) {
        pUVar17 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            (__this_06,index,
                             (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Material_get_Item
                            );
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar12 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar12) {
          pUVar28 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)__this_03,index,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_Renderer_get_Item);
          pUVar17 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              (__this_06,index,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_Material_get_Item);
          if (pUVar28 == (UnityEngine_Renderer_o *)0x0) break;
          UnityEngine_Renderer__set_sharedMaterial(pUVar28,pUVar17,(MethodInfo *)0x0);
        }
      }
      pUVar28 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)__this_03,index,
                           (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Renderer_get_Item);
      if (pUVar28 == (UnityEngine_Renderer_o *)0x0) break;
      UnityEngine_Renderer__set_enabled(pUVar28,local_res20,(MethodInfo *)0x0);
      pUVar26 = (UnityEngine_Texture_o *)(ulonglong)(index + 1);
    } while( true );
  }
label_181eafe51:
  ThrowNullReferenceException();
}


// Map.MapLoader$$SetPhysics
// il2cpp: int32_t Map_MapLoader__SetPhysics (UnityEngine_GameObject_o* go, System_String_o* collideMode, System_String_o* collideWith, System_String_o* physicsMaterial, const MethodInfo* method);
// 0x181eb07a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eb09e9: jmp 0x181eb086f

int32_t Map_MapLoader__SetPhysics
                  (UnityEngine_GameObject_o *go,System_String_o *collideMode,System_String_o *collideWith,
                  System_String_o *physicsMaterial,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Component_o *__this;
  bool bVar2;
  int32_t value;
  UnityEngine_Object_o *x;
  System_Object_array *pSVar3;
  UnityEngine_GameObject_o *__this_00;
  uint uVar4;
  
  if (Il2CppMethodInitialized_1843450c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_PhysicsMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&"Physics");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_1843450c5 = '\x01';
  }
  x = (UnityEngine_Object_o *)0x0;
  bVar2 = System_String__op_Inequality(physicsMaterial,"Default",(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    x = Map_MapLoader__LoadAssetCached("Physics",physicsMaterial,(MethodInfo *)0x0);
    if (x != (UnityEngine_Object_o *)0x0) {
      bVar1 = (TypeInfo_UnityEngine_PhysicsMaterial->_2).typeHierarchyDepth;
      if (((x->klass->_2).typeHierarchyDepth < bVar1) ||
         ((x->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_UnityEngine_PhysicsMaterial)) {
        il2cpp_codegen_raise_invalid_cast_exception(x);
      }
    }
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  value = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                       (go,(MethodInfo_6F5810 *)
                           MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    UnityEngine_GameObject__set_layer(go,value,(MethodInfo *)0x0);
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar4 = 0;
      while( true ) {
        if ((int)pSVar3->max_length <= (int)uVar4) {
          return (int32_t)pSVar3->max_length;
        }
        if ((uint)pSVar3->max_length <= uVar4) {
          ThrowIndexOutOfRangeException();
        }
        __this = (UnityEngine_Component_o *)pSVar3->m_Items[(int)uVar4];
        if ((__this == (UnityEngine_Component_o *)0x0) ||
           (__this_00 = UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0),
           __this_00 == (UnityEngine_GameObject_o *)0x0)) break;
        UnityEngine_GameObject__set_layer(__this_00,value,(MethodInfo *)0x0);
        if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
        }
        bVar2 = System_String__op_Equality
                          (collideMode,TypeInfo_Map_MapObjectCollideMode->static_fields->Region,
                           (MethodInfo *)0x0);
        UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)__this,bVar2,(MethodInfo *)0x0);
        bVar2 = System_String__op_Inequality
                          (collideMode,TypeInfo_Map_MapObjectCollideMode->static_fields->None,
                           (MethodInfo *)0x0);
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)__this,bVar2,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          UnityEngine_Collider__set_material
                    ((UnityEngine_Collider_o *)__this,(UnityEngine_PhysicsMaterial_o *)x,(MethodInfo *)0x0);
        }
        uVar4 = uVar4 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$SetCollider
// il2cpp: void Map_MapLoader__SetCollider (UnityEngine_Collider_o* c, System_String_o* collideMode, System_String_o* collideWith, const MethodInfo* method);
// 0x181eae550

void Map_MapLoader__SetCollider
               (UnityEngine_Collider_o *c,System_String_o *collideMode,System_String_o *collideWith,
               MethodInfo *method)

{
  bool bVar1;
  int32_t value;
  UnityEngine_GameObject_o *__this;
  
  if (Il2CppMethodInitialized_1843450c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    Il2CppMethodInitialized_1843450c6 = '\x01';
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
    __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)c,(MethodInfo *)0x0);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    value = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__set_layer(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapLoader$$GetColliderCollideWith
// il2cpp: System_String_o* Map_MapLoader__GetColliderCollideWith (UnityEngine_Collider_o* c, const MethodInfo* method);
// 0x181eab1a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eab4e4: mov rax, qword ptr [rip + 0x2214f7d]  ; TypeInfo_Map_MapObjectCollideWith

System_String_o * Map_MapLoader__GetColliderCollideWith(UnityEngine_Collider_o *c,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_GameObject_o *__this;
  
  if (Il2CppMethodInitialized_1843450c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_1843450c7 = '\x01';
  }
  if ((c == (UnityEngine_Collider_o *)0x0) ||
     (__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)c,(MethodInfo *)0x0),
     __this == (UnityEngine_GameObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar1 = UnityEngine_GameObject__get_layer(__this,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (iVar1 != TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll) {
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    if (iVar1 == TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectMapObjects) {
      if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
      }
      return TypeInfo_Map_MapObjectCollideWith->static_fields->MapObjects;
    }
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    if (iVar1 == TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectCharacters) {
      if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
      }
      return TypeInfo_Map_MapObjectCollideWith->static_fields->Characters;
    }
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    if (iVar1 == TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectTitans) {
      if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
      }
      return TypeInfo_Map_MapObjectCollideWith->static_fields->Titans;
    }
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    if (iVar1 == TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectHumans) {
      if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
      }
      return TypeInfo_Map_MapObjectCollideWith->static_fields->Humans;
    }
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    if (iVar1 == TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectProjectiles) {
      if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
      }
      return TypeInfo_Map_MapObjectCollideWith->static_fields->Projectiles;
    }
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    if (iVar1 == TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities) {
      if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
      }
      return TypeInfo_Map_MapObjectCollideWith->static_fields->Entities;
    }
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    if (iVar1 == TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorObject) {
      if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
      }
      return TypeInfo_Map_MapObjectCollideWith->static_fields->MapEditor;
    }
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    if (iVar1 == TypeInfo_Utility_PhysicsLayer->static_fields->Hurtbox) {
      if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
      }
      return TypeInfo_Map_MapObjectCollideWith->static_fields->Hitboxes;
    }
  }
  if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
  }
  return TypeInfo_Map_MapObjectCollideWith->static_fields->All;
}


// Map.MapLoader$$GetColliderLayer
// il2cpp: int32_t Map_MapLoader__GetColliderLayer (System_String_o* collideWith, const MethodInfo* method);
// 0x181eab520

int32_t Map_MapLoader__GetColliderLayer(System_String_o *collideWith,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_1843450c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_1843450c8 = '\x01';
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
      return TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectMapObjects;
    }
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
      return TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectCharacters;
    }
    if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    }
    bVar1 = System_String__op_Equality
                      (collideWith,TypeInfo_Map_MapObjectCollideWith->static_fields->Titans,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      }
      return TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectTitans;
    }
    if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    }
    bVar1 = System_String__op_Equality
                      (collideWith,TypeInfo_Map_MapObjectCollideWith->static_fields->Humans,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      }
      return TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectHumans;
    }
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
      return TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectProjectiles;
    }
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
      return TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities;
    }
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
      return TypeInfo_Utility_PhysicsLayer->static_fields->MapEditorObject;
    }
    iVar2 = 0;
    if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    }
    bVar1 = System_String__op_Equality
                      (collideWith,TypeInfo_Map_MapObjectCollideWith->static_fields->Hitboxes,
                       (MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      }
      return TypeInfo_Utility_PhysicsLayer->static_fields->Hurtbox;
    }
  }
  return iVar2;
}


// Map.MapLoader$$LoadAssetCached
// il2cpp: UnityEngine_Object_o* Map_MapLoader__LoadAssetCached (System_String_o* path, System_String_o* asset, const MethodInfo* method);
// 0x181eac350

UnityEngine_Object_o *
Map_MapLoader__LoadAssetCached(System_String_o *path,System_String_o *asset,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Object__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_String_o *key;
  UnityEngine_Object_o *pUVar3;
  
  if (Il2CppMethodInitialized_1843450c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_1843450c9 = '\x01';
  }
  key = System_String__Concat_1969b70(path,"/",asset,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = TypeInfo_Map_MapLoader->static_fields->_assetCache;
  if (__this != (System_Collections_Generic_Dictionary_string__Object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)key,
                       (MethodInfo_1455450 *)
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
      pUVar3 = ApplicationManagers_ResourceManager__LoadAsset(path,asset,false,(MethodInfo *)0x0);
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181eac4d9;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)key,(Il2CppObject *)pUVar3,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Object_Add);
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->_assetCache;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)key,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_Object_get_Item);
      return pUVar3;
    }
  }
label_181eac4d9:
  ThrowNullReferenceException();
}


// Map.MapLoader$$LoadPrefabCached
// il2cpp: UnityEngine_GameObject_o* Map_MapLoader__LoadPrefabCached (System_String_o* asset, const MethodInfo* method);
// 0x181eacd90
// eh: try 0x181eace67..0x181ead29c -> pad 0x1833157d0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 104 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ead0f4: mov r14, qword ptr [rsp + 0x40]
// asm:   0x181ead0f9: test r14, r14
// asm:   0x181ead0fc: je 0x181ead255
// asm:   0x181ead102: mov rax, qword ptr [r14]
// asm:   0x181ead105: mov rdx, qword ptr [rax + 0x190]
// asm:   0x181ead10c: mov rcx, r14
// asm:   0x181ead10f: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x181ead115: mov rdi, rax
// asm:   0x181ead118: lea rcx, [rip + 0x221ccd9]  ; ", "
// asm:   0x181ead11f: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181ead124: mov rbx, rax
// asm:   0x181ead127: lea rcx, [rip + 0x2237912]  ; "Failed to load asset: "
// asm:   0x181ead12e: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181ead133: mov rcx, rax
// asm:   0x181ead136: xor esi, esi
// asm:   0x181ead138: mov qword ptr [rsp + 0x20], rsi
// asm:   0x181ead13d: mov r9, rdi
// asm:   0x181ead140: mov r8, rbx
// asm:   0x181ead143: mov rdx, qword ptr [rsp + 0x70]
// asm:   0x181ead148: call 0x181969590  ; System_String__Concat()
// asm:   0x181ead14d: mov rbx, rax
// asm:   0x181ead150: lea rcx, [rip + 0x224e579]  ; TypeInfo_ApplicationManagers_DebugConsole
// asm:   0x181ead157: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181ead15c: cmp dword ptr [rax + 0xe4], esi
// asm:   0x181ead162: jne 0x181ead16c
// asm:   0x181ead164: mov rcx, rax
// asm:   0x181ead167: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x181ead16c: xor r8d, r8d
// asm:   0x181ead16f: mov dl, 1
// asm:   0x181ead171: mov rcx, rbx
// asm:   0x181ead174: call 0x18234c240  ; ApplicationManagers_DebugConsole__Log()
// asm:   0x181ead179: lea rcx, [rip + 0x2212f68]  ; TypeInfo_Map_MapLoader
// asm:   0x181ead180: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181ead185: cmp dword ptr [rax + 0xe4], esi
// asm:   0x181ead18b: jne 0x181ead195
// asm:   0x181ead18d: mov rcx, rax
// asm:   0x181ead190: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x181ead195: lea rcx, [rip + 0x2212f4c]  ; TypeInfo_Map_MapLoader
// asm:   0x181ead19c: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181ead1a1: mov rdx, qword ptr [rax + 0xb8]
// asm:   0x181ead1a8: mov r15, qword ptr [rdx + 0x80]
// asm:   0x181ead1af: mov rax, qword ptr [r14]
// asm:   0x181ead1b2: mov rdx, qword ptr [rax + 0x190]
// asm:   0x181ead1b9: mov rcx, r14
// asm:   0x181ead1bc: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x181ead1c2: mov rdi, rax
// asm:   0x181ead1c5: lea rcx, [rip + 0x221cc2c]  ; ", "
// asm:   0x181ead1cc: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181ead1d1: mov rbx, rax
// asm:   0x181ead1d4: lea rcx, [rip + 0x2237865]  ; "Failed to load asset: "
// asm:   0x181ead1db: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181ead1e0: mov rcx, rax
// asm:   0x181ead1e3: mov qword ptr [rsp + 0x20], rsi
// asm:   0x181ead1e8: mov r9, rdi
// asm:   0x181ead1eb: mov r8, rbx
// asm:   0x181ead1ee: mov rdx, qword ptr [rsp + 0x70]
// asm:   0x181ead1f3: call 0x181969590  ; System_String__Concat()
// asm:   0x181ead1f8: mov rbx, rax
// asm:   0x181ead1fb: test r15, r15
// asm:   0x181ead1fe: je 0x181ead255
// asm:   0x181ead200: lea rcx, [rip + 0x222ef31]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x181ead207: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181ead20c: mov r8, rax
// asm:   0x181ead20f: mov rdx, rbx
// asm:   0x181ead212: mov rcx, r15
// asm:   0x181ead215: call 0x180012890  ; il2cpp_runtime_helper_180012890()
// asm:   0x181ead21a: lea rcx, [rip + 0x21d644f]  ; TypeInfo_UnityEngine_GameObject
// asm:   0x181ead221: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181ead226: mov rcx, rax
// asm:   0x181ead229: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x181ead22e: mov rsi, rax
// asm:   0x181ead231: xor edx, edx
// asm:   0x181ead233: mov rcx, rax
// asm:   0x181ead236: call 0x182f1ad20  ; UnityEngine_GameObject___ctor()
// asm:   0x181ead255: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x1833157d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833157d5: push rbx
// asm:   0x1833157d6: push rbp
// asm:   0x1833157d7: push rdi
// asm:   0x1833157d8: sub rsp, 0x30
// asm:   0x1833157dc: mov rbp, rdx
// asm:   0x1833157df: mov rdi, qword ptr [rbp + 0x38]
// asm:   0x1833157e3: mov rax, qword ptr [rdi]
// asm:   0x1833157e6: mov rbx, qword ptr [rax]
// asm:   0x1833157e9: lea rcx, [rip + 0xd63768]  ; TypeInfo_System_Exception
// asm:   0x1833157f0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1833157f5: mov rcx, rax
// asm:   0x1833157f8: mov rdx, rbx
// asm:   0x1833157fb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315800: test al, al
// asm:   0x183315802: mov rax, qword ptr [rdi]
// asm:   0x183315805: je 0x183315817
// asm:   0x183315807: mov qword ptr [rbp + 0x40], rax
// asm:   0x18331580b: movabs rax, 0
// asm:   0x183315815: jmp 0x18331582c
// asm:   0x183315817: mov qword ptr [rbp + 0x30], rax
// asm:   0x18331581b: lea rdx, [rip + 0xcc6766]
// asm:   0x183315822: lea rcx, [rbp + 0x30]
// asm:   0x183315826: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331582c: add rsp, 0x30
// asm:   0x183315830: pop rdi
// asm:   0x183315831: pop rbp
// asm:   0x183315832: pop rbx
// asm:   0x183315833: ret 

UnityEngine_GameObject_o * Map_MapLoader__LoadPrefabCached(System_String_o *asset,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Object__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_String_array *pSVar3;
  System_String_o *pSVar4;
  UnityEngine_Object_o *pUVar5;
  System_String_o *name;
  UnityEngine_Object_o *pUVar6;
  
  if (Il2CppMethodInitialized_1843450ca == '\0') {
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
    Il2CppMethodInitialized_1843450ca = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = TypeInfo_Map_MapLoader->static_fields->_assetCache;
  if (__this == (System_Collections_Generic_Dictionary_string__Object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)asset,
                     (MethodInfo_1455450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Object_ContainsKey);
  if (!bVar2) {
    if (asset == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = System_String__Split_1972090(asset,"/",0,(MethodInfo *)0x0);
    if (pSVar3 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)pSVar3->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    bVar2 = System_String__op_Equality(pSVar3->m_Items[0],"Custom",(MethodInfo *)0x0);
    if (bVar2) {
      if ((uint)pSVar3->max_length < 2) {
        ThrowIndexOutOfRangeException();
      }
      pSVar4 = pSVar3->m_Items[1];
      if (pSVar4 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      name = System_String__Substring(asset,(pSVar4->fields)._stringLength + 8,(MethodInfo *)0x0);
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_MapLoader->static_fields->_assetCache;
      if ((TypeInfo_ApplicationManagers_AssetBundleManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AssetBundleManager);
      }
      pUVar5 = ApplicationManagers_AssetBundleManager__LoadAsset(pSVar4,name,(MethodInfo *)0x0);
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)asset,(Il2CppObject *)pUVar5,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Object_Add);
    }
    else {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      if ((int)pSVar3->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      if ((uint)pSVar3->max_length < 2) {
        ThrowIndexOutOfRangeException();
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_MapLoader->static_fields->_assetCache;
      pSVar4 = System_String__Concat_1969b70
                         (pSVar3->m_Items[0],"/Prefabs/",pSVar3->m_Items[1],(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar5 = ApplicationManagers_ResourceManager__LoadAsset
                         ("Map",pSVar4,false,(MethodInfo *)0x0);
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)asset,(Il2CppObject *)pUVar5,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Object_Add);
    }
    bVar2 = System_String__op_Equality(asset,"Arenas/CaveMap1",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
      }
      Weather_WeatherManager__EnableCaveMap((MethodInfo *)0x0);
    }
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Map_MapLoader->static_fields->_assetCache;
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                     (pSVar1,(Il2CppObject *)asset,
                      (MethodInfo_147A5B0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_Object_get_Item);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar6 = UnityEngine_Object__Instantiate_2f212a0(pUVar5,(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Object_o *)0x0;
  if (pUVar6 != (UnityEngine_Object_o *)0x0) {
    if (pUVar6->klass == (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
      pUVar5 = pUVar6;
    }
    if (pUVar5 == (UnityEngine_Object_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar6);
    }
  }
  return (UnityEngine_GameObject_o *)pUVar5;
}


// Map.MapLoader$$.ctor
// il2cpp: void Map_MapLoader___ctor (Map_MapLoader_o* __this, const MethodInfo* method);
// 0x180528540

void
Map_MapLoader___ctor(Map_MapLoader_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapLoader$$.cctor
// il2cpp: void Map_MapLoader___cctor (const MethodInfo* method);
// 0x181eb21d0

void Map_MapLoader___cctor(MethodInfo *method)

{
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
  System_Collections_Generic_Dictionary_string__List_Material___o *pSVar1;
  System_Collections_Generic_Dictionary_string__Material__o *__this_09;
  System_Collections_Generic_List_string__o *__this_10;
  System_Collections_Generic_List_NavMeshBuildSource__o *__this_11;
  System_Collections_Generic_List_Bounds__o *__this_12;
  System_Collections_Generic_List_MapLoader_NavMeshBuild__o *__this_13;
  
  if (Il2CppMethodInitialized_1843450cb == '\0') {
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
    Il2CppMethodInitialized_1843450cb = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_MapObject);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ctor);
  TypeInfo_Map_MapLoader->static_fields->IdToMapObject = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->IdToMapObject,__this);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_HashSet_int);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ctor);
  TypeInfo_Map_MapLoader->static_fields->IdToChildren = __this_00;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->IdToChildren,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  TypeInfo_Map_MapLoader->static_fields->ObjectOrder = __this_01;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->ObjectOrder,__this_01);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_GameObject_MapObject);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_GameObject_MapObject_ctor)
  ;
  TypeInfo_Map_MapLoader->static_fields->GoToMapObject = __this_02;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->GoToMapObject,__this_02);
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_List_MapObject);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_ctor
            );
  TypeInfo_Map_MapLoader->static_fields->Tags = __this_03;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->Tags,__this_03);
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_MapObject_HashSet_string_ctor);
  TypeInfo_Map_MapLoader->static_fields->MapObjectToTags = __this_04;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->MapObjectToTags,__this_04);
  __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Light);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_05,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Light_ctor);
  TypeInfo_Map_MapLoader->static_fields->Daylight = __this_05;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->Daylight,__this_05);
  __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapLight);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_06,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapLight_ctor);
  TypeInfo_Map_MapLoader->static_fields->MapLights = __this_06;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->MapLights,__this_06);
  __this_07 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapTargetable)
  ;
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_07,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapTargetable_ctor);
  TypeInfo_Map_MapLoader->static_fields->MapTargetables = __this_07;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->MapTargetables,__this_07);
  __this_08 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_08,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_Object_ctor);
  TypeInfo_Map_MapLoader->static_fields->_assetCache = __this_08;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->_assetCache,__this_08);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_List_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_ctor)
  ;
  TypeInfo_Map_MapLoader->static_fields->_assetMaterialCache = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->_assetMaterialCache,pSVar1);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_List_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_List_Material_ctor)
  ;
  TypeInfo_Map_MapLoader->static_fields->_defaultMaterialCache = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->_defaultMaterialCache,pSVar1);
  __this_09 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_09,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_Material_ctor);
  TypeInfo_Map_MapLoader->static_fields->_customMaterialCache = __this_09;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->_customMaterialCache,__this_09);
  __this_10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_10,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  TypeInfo_Map_MapLoader->static_fields->Errors = __this_10;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->Errors,__this_10);
  __this_11 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_NavMeshBuildSource);
  System_Collections_Generic_List_NavMeshBuildSource____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_11,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_NavMeshBuildSource_ctor);
  TypeInfo_Map_MapLoader->static_fields->_navMeshSources = __this_11;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->_navMeshSources,__this_11);
  __this_12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Bounds);
  System_Collections_Generic_List_Bounds____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_12,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Bounds_ctor);
  TypeInfo_Map_MapLoader->static_fields->_navMeshBounds = __this_12;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->_navMeshBounds,__this_12);
  __this_13 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapLoader_NavMeshBuild);
  System_Collections_Generic_List_MapLoader_NavMeshBuild____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_13,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapLoader_NavMeshBuild_ctor);
  TypeInfo_Map_MapLoader->static_fields->_navMeshBuilds = __this_13;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapLoader->static_fields->_navMeshBuilds,__this_13);
  TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID = -1;
  TypeInfo_Map_MapLoader->static_fields->NETWORK_OFFSET = 1000;
  return;
}


