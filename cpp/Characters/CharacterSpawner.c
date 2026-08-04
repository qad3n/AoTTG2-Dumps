// Type: Characters.CharacterSpawner
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/CharacterSpawner.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/CharacterSpawner.cs
// --------------------------------

// Characters.CharacterSpawner$$Spawn
// il2cpp: Characters_BaseCharacter_o* Characters_CharacterSpawner__Spawn (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x42aa6f0

Characters_BaseCharacter_o *
Characters_CharacterSpawner__Spawn
          (System_String_o *name,UnityEngine_Vector3_o position,UnityEngine_Quaternion_o rotation,
          MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *__this;
  UnityEngine_GameObject_o *__this_00;
  Characters_BaseCharacter_o *pCVar1;
  Characters_BaseCharacter_o *extraout_RAX;
  
  if (g_data_057add85 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057add85 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (UnityEngine_MonoBehaviour_o *)
           System_String__Concat_3af7150
                     (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"/",name,
                      (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = Photon_Pun_PhotonNetwork__Instantiate
                        ((System_String_o *)__this,position,rotation,'\0',(System_Object_array *)0x0,
                         (MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pCVar1 = (Characters_BaseCharacter_o *)
             UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    return pCVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor(__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Characters.CharacterSpawner$$.ctor
// il2cpp: void Characters_CharacterSpawner___ctor (Characters_CharacterSpawner_o* __this, const MethodInfo* method);
// 0x42aa7f0

void Characters_CharacterSpawner___ctor(Characters_CharacterSpawner_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


