// Type: GameManagers.RoomProperty
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/GameManagers/RoomProperty.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// --------------------------------

// GameManagers.RoomProperty$$.ctor
// il2cpp: void GameManagers_RoomProperty___ctor (GameManagers_RoomProperty_o* __this, const MethodInfo* method);
// 0x18054c890

void
GameManagers_RoomProperty___ctor(GameManagers_RoomProperty_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.RoomProperty$$.cctor
// il2cpp: void GameManagers_RoomProperty___cctor (const MethodInfo* method);
// 0x181e754f0

void GameManagers_RoomProperty___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"Experience");
    il2cpp_codegen_initialize_runtime_metadata(&"GameMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Password");
    il2cpp_codegen_initialize_runtime_metadata(&"PH");
    il2cpp_codegen_initialize_runtime_metadata(&"Map");
    il2cpp_codegen_initialize_runtime_metadata(&"Sandbox");
    il2cpp_codegen_initialize_runtime_metadata(&"PS");
    il2cpp_codegen_initialize_runtime_metadata(&"AccountRequired");
    Il2CppMethodInitialized_184344f23 = '\x01';
  }
  TypeInfo_GameManagers_RoomProperty->static_fields->Name = "Name";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_RoomProperty->static_fields->Name,"Name");
  TypeInfo_GameManagers_RoomProperty->static_fields->Map = "Map";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_RoomProperty->static_fields->Map,"Map");
  TypeInfo_GameManagers_RoomProperty->static_fields->GameMode = "GameMode";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_RoomProperty->static_fields->GameMode,"GameMode");
  TypeInfo_GameManagers_RoomProperty->static_fields->Sandbox = "Sandbox";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_RoomProperty->static_fields->Sandbox,"Sandbox")
  ;
  TypeInfo_GameManagers_RoomProperty->static_fields->Experience = "Experience";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_RoomProperty->static_fields->Experience,"Experience");
  TypeInfo_GameManagers_RoomProperty->static_fields->Password = "Password";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_RoomProperty->static_fields->Password,"Password");
  TypeInfo_GameManagers_RoomProperty->static_fields->PasswordSalt = "PS";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_RoomProperty->static_fields->PasswordSalt,"PS");
  TypeInfo_GameManagers_RoomProperty->static_fields->PasswordHash = "PH";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_RoomProperty->static_fields->PasswordHash,"PH");
  TypeInfo_GameManagers_RoomProperty->static_fields->AccountRequired = "AccountRequired";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_GameManagers_RoomProperty->static_fields->AccountRequired,"AccountRequired");
  return;
}


