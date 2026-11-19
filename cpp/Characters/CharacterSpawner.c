// Type: Characters.CharacterSpawner
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/CharacterSpawner.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/CharacterSpawner.cs
// --------------------------------

// Characters.CharacterSpawner$$Spawn
// il2cpp: Characters_BaseCharacter_o* Characters_CharacterSpawner__Spawn (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x5be2e80

Characters_BaseCharacter_o *
Characters_CharacterSpawner__Spawn
          (System_String_o *name,UnityEngine_Vector3_o position,UnityEngine_Quaternion_o rotation,
          MethodInfo *method)

{
  System_String_o *prefabName;
  UnityEngine_GameObject_o *__this;
  Characters_BaseCharacter_o *pCVar1;
  
  if (Il2CppMethodInitialized_075475cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_075475cb = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  prefabName = System_String__Concat_5301f10
                         (TypeInfo_Utility_ResourcePaths->static_fields->Characters,"/",name
                          ,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  __this = Photon_Pun_PhotonNetwork__Instantiate
                     (prefabName,position,rotation,0,(System_Object_array *)0x0,(MethodInfo *)0x0);
  if (__this == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = UnityEngine_GameObject__GetComponent_object_
                     (__this,(MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
  return pCVar1;
}


// Characters.CharacterSpawner$$.ctor
// il2cpp: void Characters_CharacterSpawner___ctor (Characters_CharacterSpawner_o* __this, const MethodInfo* method);
// 0x5be2f80

void Characters_CharacterSpawner___ctor(Characters_CharacterSpawner_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


