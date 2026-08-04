// Type: Projectiles.ProjectileSpawner
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Projectiles/ProjectileSpawner.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/ProjectileSpawner.cs
// --------------------------------

// Projectiles.ProjectileSpawner$$Spawn
// il2cpp: Projectiles_BaseProjectile_o* Projectiles_ProjectileSpawner__Spawn (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, UnityEngine_Vector3_o velocity, UnityEngine_Vector3_o gravity, float liveTime, int32_t charViewId, System_String_o* team, System_Object_array* settings, const MethodInfo* method);
// 0x42084e0

Projectiles_BaseProjectile_o *
Projectiles_ProjectileSpawner__Spawn
          (System_String_o *name,UnityEngine_Vector3_o position,UnityEngine_Quaternion_o rotation,
          UnityEngine_Vector3_o velocity,UnityEngine_Vector3_o gravity,float liveTime,int32_t charViewId,
          System_String_o *team,System_Object_array *settings,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *__this;
  UnityEngine_MonoBehaviour_o *__this_00;
  Projectiles_BaseProjectile_o *pPVar1;
  Projectiles_BaseProjectile_o *extraout_RAX;
  float local_48;
  float local_38;
  
  if (g_data_057ad8ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseProjectile_GetComponent_BaseProjectile);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057ad8ed = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (UnityEngine_MonoBehaviour_o *)
           System_String__Concat_3af7150
                     (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x50),"/",name,
                      (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (UnityEngine_MonoBehaviour_o *)
              Photon_Pun_PhotonNetwork__Instantiate
                        ((System_String_o *)__this,position,rotation,'\0',(System_Object_array *)0x0,
                         (MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    pPVar1 = (Projectiles_BaseProjectile_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_00,MethodInfo_BaseProjectile_GetComponent_BaseProjectile);
    __this = __this_00;
    if (pPVar1 != (Projectiles_BaseProjectile_o *)0x0) {
      local_48 = velocity.fields.x;
      local_38 = gravity.fields.x;
      (*((Il2CppClass *)pPVar1->klass)->vtable[0xc].methodPtr)
                (liveTime,local_48,velocity.fields.z,local_38,gravity.fields.z,pPVar1,(ulong)(uint)charViewId,
                 team,settings,((Il2CppClass *)pPVar1->klass)->vtable[0xc].method);
      return pPVar1;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor(__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Projectiles.ProjectileSpawner$$.ctor
// il2cpp: void Projectiles_ProjectileSpawner___ctor (Projectiles_ProjectileSpawner_o* __this, const MethodInfo* method);
// 0x4208650

void Projectiles_ProjectileSpawner___ctor(Projectiles_ProjectileSpawner_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


