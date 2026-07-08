// Type: Characters.CharacterSpawner
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/CharacterSpawner.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/CharacterSpawner.cs  [CHANGED since prior version]
// --------------------------------

// Characters.CharacterSpawner$$Spawn
// il2cpp: Characters_BaseCharacter_o* Characters_CharacterSpawner__Spawn (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x3f9de50

Characters_BaseCharacter_o *
Characters_CharacterSpawner__Spawn
          (System_String_o *name,UnityEngine_Vector3_o position,UnityEngine_Quaternion_o rotation,
          MethodInfo *method)

{
  System_String_o *prefabName;
  UnityEngine_GameObject_o *__this;
  Characters_BaseCharacter_o *pCVar1;
  
  if (DAT_05704017 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"/");
    DAT_05704017 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  prefabName = System_String__Concat
                         (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"/",
                          name,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = Photon_Pun_PhotonNetwork__Instantiate
                     (prefabName,position,rotation,'\0',(System_Object_array *)0x0,(MethodInfo *)0x0
                     );
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pCVar1 = (Characters_BaseCharacter_o *)
             UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.CharacterSpawner$$.ctor
// il2cpp: void Characters_CharacterSpawner___ctor (Characters_CharacterSpawner_o* __this, const MethodInfo* method);
// 0x3f9df50

void Characters_CharacterSpawner___ctor(Characters_CharacterSpawner_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


