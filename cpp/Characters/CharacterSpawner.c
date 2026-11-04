// Type: Characters.CharacterSpawner
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/CharacterSpawner.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/CharacterSpawner.cs
// --------------------------------

// Characters.CharacterSpawner$$Spawn
// il2cpp: Characters_BaseCharacter_o* Characters_CharacterSpawner__Spawn (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x182114900

Characters_BaseCharacter_o *
Characters_CharacterSpawner__Spawn
          (System_String_o *name,UnityEngine_Vector3_o *position,UnityEngine_Quaternion_o *rotation,
          MethodInfo *method)

{
  System_String_o *prefabName;
  UnityEngine_GameObject_o *__this;
  Characters_BaseCharacter_o *pCVar1;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Quaternion_Fields local_18;
  
  if (Il2CppMethodInitialized_184346b69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_184346b69 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  prefabName = System_String__Concat_1969b70
                         (TypeInfo_Utility_ResourcePaths->static_fields->Characters,"/",name
                          ,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  local_28.z = (position->fields).z;
  local_18.x = (rotation->fields).x;
  local_18.y = (rotation->fields).y;
  local_18.z = (rotation->fields).z;
  local_18.w = (rotation->fields).w;
  local_28.x = (position->fields).x;
  local_28.y = (position->fields).y;
  __this = Photon_Pun_PhotonNetwork__Instantiate
                     (prefabName,(UnityEngine_Vector3_o *)&local_28,(UnityEngine_Quaternion_o *)&local_18,'\0'
                      ,(System_Object_array *)0x0,(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pCVar1 = UnityEngine_GameObject__GetComponent_object_
                       (__this,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
    return pCVar1;
  }
  ThrowNullReferenceException();
}


// Characters.CharacterSpawner$$.ctor
// il2cpp: void Characters_CharacterSpawner___ctor (Characters_CharacterSpawner_o* __this, const MethodInfo* method);
// 0x180528540

void
Characters_CharacterSpawner___ctor(Characters_CharacterSpawner_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


