// Type: Map.MapObjectShader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Map/MapObjectShader.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapLoader.cs
// --------------------------------

// Map.MapObjectShader$$IsLegacyShader
// il2cpp: bool Map_MapObjectShader__IsLegacyShader (System_String_o* shader, const MethodInfo* method);
// 0x599e940

bool Map_MapObjectShader__IsLegacyShader(System_String_o *shader,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545a74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    Il2CppMethodInitialized_07545a74 = '\x01';
  }
  if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
  }
  bVar1 = System_String__op_Equality
                    (shader,TypeInfo_Map_MapObjectShader->static_fields->OldBombExplode,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
    }
    bVar1 = System_String__op_Equality
                      (shader,TypeInfo_Map_MapObjectShader->static_fields->CannonRegionMat,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
      }
      bVar1 = System_String__op_Equality
                        (shader,TypeInfo_Map_MapObjectShader->static_fields->BombTexMat,(MethodInfo *)0x0);
      if (!bVar1) {
        if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
        }
        bVar1 = System_String__op_Equality
                          (shader,TypeInfo_Map_MapObjectShader->static_fields->Smoke1Mat,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return true;
}


// Map.MapObjectShader$$.cctor
// il2cpp: void Map_MapObjectShader___cctor (const MethodInfo* method);
// 0x599ea30

void Map_MapObjectShader___cctor(MethodInfo *method)

{
  Map_MapObjectShader_StaticFields *pMVar1;
  
  if (Il2CppMethodInitialized_07545a75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    il2cpp_codegen_initialize_runtime_metadata(&"Smoke1Mat");
    il2cpp_codegen_initialize_runtime_metadata(&"Reflective");
    il2cpp_codegen_initialize_runtime_metadata(&"OldBombExplodeMat");
    il2cpp_codegen_initialize_runtime_metadata(&"BombTexMat");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultTiled");
    il2cpp_codegen_initialize_runtime_metadata(&"Basic");
    il2cpp_codegen_initialize_runtime_metadata(&"CannonRegionMat");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultNoTint");
    il2cpp_codegen_initialize_runtime_metadata(&"Transparent");
    Il2CppMethodInitialized_07545a75 = '\x01';
  }
  TypeInfo_Map_MapObjectShader->static_fields->Default = "Default";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapObjectShader->static_fields->Default);
  pMVar1 = TypeInfo_Map_MapObjectShader->static_fields;
  pMVar1->DefaultNoTint = "DefaultNoTint";
  Il2CppCodeGenWriteBarrier(&pMVar1->DefaultNoTint);
  pMVar1 = TypeInfo_Map_MapObjectShader->static_fields;
  pMVar1->DefaultTiled = "DefaultTiled";
  Il2CppCodeGenWriteBarrier(&pMVar1->DefaultTiled);
  pMVar1 = TypeInfo_Map_MapObjectShader->static_fields;
  pMVar1->Basic = "Basic";
  Il2CppCodeGenWriteBarrier(&pMVar1->Basic);
  pMVar1 = TypeInfo_Map_MapObjectShader->static_fields;
  pMVar1->Transparent = "Transparent";
  Il2CppCodeGenWriteBarrier(&pMVar1->Transparent);
  pMVar1 = TypeInfo_Map_MapObjectShader->static_fields;
  pMVar1->Reflective = "Reflective";
  Il2CppCodeGenWriteBarrier(&pMVar1->Reflective);
  pMVar1 = TypeInfo_Map_MapObjectShader->static_fields;
  pMVar1->OldBombExplode = "OldBombExplodeMat";
  Il2CppCodeGenWriteBarrier(&pMVar1->OldBombExplode);
  pMVar1 = TypeInfo_Map_MapObjectShader->static_fields;
  pMVar1->CannonRegionMat = "CannonRegionMat";
  Il2CppCodeGenWriteBarrier(&pMVar1->CannonRegionMat);
  pMVar1 = TypeInfo_Map_MapObjectShader->static_fields;
  pMVar1->BombTexMat = "BombTexMat";
  Il2CppCodeGenWriteBarrier(&pMVar1->BombTexMat);
  pMVar1 = TypeInfo_Map_MapObjectShader->static_fields;
  pMVar1->Smoke1Mat = "Smoke1Mat";
  Il2CppCodeGenWriteBarrier(&pMVar1->Smoke1Mat);
  return;
}


