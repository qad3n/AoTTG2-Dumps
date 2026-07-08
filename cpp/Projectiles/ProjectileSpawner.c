// Type: Projectiles.ProjectileSpawner
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Projectiles/ProjectileSpawner.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Projectiles/ProjectileSpawner.cs  [CHANGED since prior version]
// --------------------------------

// Projectiles.ProjectileSpawner$$Spawn
// il2cpp: Projectiles_BaseProjectile_o* Projectiles_ProjectileSpawner__Spawn (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, UnityEngine_Vector3_o velocity, UnityEngine_Vector3_o gravity, float liveTime, int32_t charViewId, System_String_o* team, System_Object_array* settings, const MethodInfo* method);
// 0x3f193f0

Projectiles_BaseProjectile_o *
Projectiles_ProjectileSpawner__Spawn
          (System_String_o *name,UnityEngine_Vector3_o position,UnityEngine_Quaternion_o rotation,
          UnityEngine_Vector3_o velocity,UnityEngine_Vector3_o gravity,float liveTime,
          int32_t charViewId,System_String_o *team,System_Object_array *settings,MethodInfo *method)

{
  System_String_o *prefabName;
  UnityEngine_GameObject_o *__this;
  Projectiles_BaseProjectile_o *pPVar1;
  float local_48;
  float local_38;
  
  if (DAT_05703ccc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseProjectile_GetComponent_BaseProjectile);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"/");
    DAT_05703ccc = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  prefabName = System_String__Concat
                         (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x50),"/",
                          name,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = Photon_Pun_PhotonNetwork__Instantiate
                     (prefabName,position,rotation,'\0',(System_Object_array *)0x0,(MethodInfo *)0x0
                     );
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pPVar1 = (Projectiles_BaseProjectile_o *)
             UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_BaseProjectile_GetComponent_BaseProjectile);
    if (pPVar1 != (Projectiles_BaseProjectile_o *)0x0) {
      local_48 = velocity.fields.x;
      local_38 = gravity.fields.x;
      (*((Il2CppClass *)pPVar1->klass)->vtable[0xc].methodPtr)
                (liveTime,local_48,velocity.fields.z,local_38,gravity.fields.z,pPVar1,
                 (ulong)(uint)charViewId,team,settings,
                 ((Il2CppClass *)pPVar1->klass)->vtable[0xc].method);
      return pPVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.ProjectileSpawner$$.ctor
// il2cpp: void Projectiles_ProjectileSpawner___ctor (Projectiles_ProjectileSpawner_o* __this, const MethodInfo* method);
// 0x3f19560

void Projectiles_ProjectileSpawner___ctor
               (Projectiles_ProjectileSpawner_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


