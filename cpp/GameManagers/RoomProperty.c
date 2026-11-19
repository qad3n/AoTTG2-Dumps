// Type: GameManagers.RoomProperty
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/RoomProperty.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// --------------------------------

// GameManagers.RoomProperty$$.ctor
// il2cpp: void GameManagers_RoomProperty___ctor (GameManagers_RoomProperty_o* __this, const MethodInfo* method);
// 0x5958f50

void GameManagers_RoomProperty___ctor(GameManagers_RoomProperty_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.RoomProperty$$.cctor
// il2cpp: void GameManagers_RoomProperty___cctor (const MethodInfo* method);
// 0x5958f60

void GameManagers_RoomProperty___cctor(MethodInfo *method)

{
  GameManagers_RoomProperty_StaticFields *pGVar1;
  
  if (Il2CppMethodInitialized_075458c5 == '\0') {
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
    Il2CppMethodInitialized_075458c5 = '\x01';
  }
  TypeInfo_GameManagers_RoomProperty->static_fields->Name = "Name";
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_RoomProperty->static_fields->Name);
  pGVar1 = TypeInfo_GameManagers_RoomProperty->static_fields;
  pGVar1->Map = "Map";
  Il2CppCodeGenWriteBarrier(&pGVar1->Map);
  pGVar1 = TypeInfo_GameManagers_RoomProperty->static_fields;
  pGVar1->GameMode = "GameMode";
  Il2CppCodeGenWriteBarrier(&pGVar1->GameMode);
  pGVar1 = TypeInfo_GameManagers_RoomProperty->static_fields;
  pGVar1->Sandbox = "Sandbox";
  Il2CppCodeGenWriteBarrier(&pGVar1->Sandbox);
  pGVar1 = TypeInfo_GameManagers_RoomProperty->static_fields;
  pGVar1->Experience = "Experience";
  Il2CppCodeGenWriteBarrier(&pGVar1->Experience);
  pGVar1 = TypeInfo_GameManagers_RoomProperty->static_fields;
  pGVar1->Password = "Password";
  Il2CppCodeGenWriteBarrier(&pGVar1->Password);
  pGVar1 = TypeInfo_GameManagers_RoomProperty->static_fields;
  pGVar1->PasswordSalt = "PS";
  Il2CppCodeGenWriteBarrier(&pGVar1->PasswordSalt);
  pGVar1 = TypeInfo_GameManagers_RoomProperty->static_fields;
  pGVar1->PasswordHash = "PH";
  Il2CppCodeGenWriteBarrier(&pGVar1->PasswordHash);
  pGVar1 = TypeInfo_GameManagers_RoomProperty->static_fields;
  pGVar1->AccountRequired = "AccountRequired";
  Il2CppCodeGenWriteBarrier(&pGVar1->AccountRequired);
  return;
}


