// Type: Map.MapObjectShader
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapObjectShader.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapLoader.cs
// --------------------------------

// Map.MapObjectShader$$IsLegacyShader
// il2cpp: bool Map_MapObjectShader__IsLegacyShader (System_String_o* shader, const MethodInfo* method);
// 0x181eb4db0

bool Map_MapObjectShader__IsLegacyShader(System_String_o *shader,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843450dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    Il2CppMethodInitialized_1843450dc = '\x01';
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
// 0x181eb4ed0

void Map_MapObjectShader___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843450dd == '\0') {
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
    Il2CppMethodInitialized_1843450dd = '\x01';
  }
  TypeInfo_Map_MapObjectShader->static_fields->Default = "Default";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapObjectShader->static_fields->Default,"Default");
  TypeInfo_Map_MapObjectShader->static_fields->DefaultNoTint = "DefaultNoTint";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapObjectShader->static_fields->DefaultNoTint,"DefaultNoTint")
  ;
  TypeInfo_Map_MapObjectShader->static_fields->DefaultTiled = "DefaultTiled";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapObjectShader->static_fields->DefaultTiled,"DefaultTiled");
  TypeInfo_Map_MapObjectShader->static_fields->Basic = "Basic";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapObjectShader->static_fields->Basic,"Basic");
  TypeInfo_Map_MapObjectShader->static_fields->Transparent = "Transparent";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapObjectShader->static_fields->Transparent,"Transparent");
  TypeInfo_Map_MapObjectShader->static_fields->Reflective = "Reflective";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapObjectShader->static_fields->Reflective,"Reflective");
  TypeInfo_Map_MapObjectShader->static_fields->OldBombExplode = "OldBombExplodeMat";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Map_MapObjectShader->static_fields->OldBombExplode,"OldBombExplodeMat");
  TypeInfo_Map_MapObjectShader->static_fields->CannonRegionMat = "CannonRegionMat";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Map_MapObjectShader->static_fields->CannonRegionMat,"CannonRegionMat");
  TypeInfo_Map_MapObjectShader->static_fields->BombTexMat = "BombTexMat";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapObjectShader->static_fields->BombTexMat,"BombTexMat");
  TypeInfo_Map_MapObjectShader->static_fields->Smoke1Mat = "Smoke1Mat";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapObjectShader->static_fields->Smoke1Mat,"Smoke1Mat");
  return;
}


