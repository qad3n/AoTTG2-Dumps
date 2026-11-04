// Type: Map.MapAssets
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Map/MapAssets.cs
// Prior real C# source: none
// --------------------------------

// Map.MapAssets$$HasEditorMaterial
// il2cpp: bool Map_MapAssets__HasEditorMaterial (System_String_o* asset, const MethodInfo* method);
// 0x181e8b420

bool Map_MapAssets__HasEditorMaterial(System_String_o *asset,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184345049 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapAssets);
    Il2CppMethodInitialized_184345049 = '\x01';
  }
  if ((TypeInfo_Map_MapAssets->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapAssets);
  }
  bVar1 = System_String__op_Equality
                    (asset,TypeInfo_Map_MapAssets->static_fields->NavMeshRegion,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  if ((TypeInfo_Map_MapAssets->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapAssets);
  }
  bVar1 = System_String__op_Equality
                    (asset,TypeInfo_Map_MapAssets->static_fields->NavMeshObstacle,(MethodInfo *)0x0);
  return bVar1;
}


// Map.MapAssets$$.ctor
// il2cpp: void Map_MapAssets___ctor (Map_MapAssets_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_MapAssets___ctor(Map_MapAssets_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapAssets$$.cctor
// il2cpp: void Map_MapAssets___cctor (const MethodInfo* method);
// 0x181e8b4c0

void Map_MapAssets___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434504a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapAssets);
    il2cpp_codegen_initialize_runtime_metadata(&"Geometry/NavMeshRegion");
    il2cpp_codegen_initialize_runtime_metadata(&"Geometry/NavMeshObstacle");
    Il2CppMethodInitialized_18434504a = '\x01';
  }
  TypeInfo_Map_MapAssets->static_fields->NavMeshRegion = "Geometry/NavMeshRegion";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapAssets->static_fields->NavMeshRegion,"Geometry/NavMeshRegion");
  TypeInfo_Map_MapAssets->static_fields->NavMeshObstacle = "Geometry/NavMeshObstacle";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapAssets->static_fields->NavMeshObstacle,"Geometry/NavMeshObstacle");
  return;
}


