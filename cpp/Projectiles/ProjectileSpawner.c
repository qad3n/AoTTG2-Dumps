// Type: Projectiles.ProjectileSpawner
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Projectiles/ProjectileSpawner.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/ProjectileSpawner.cs
// --------------------------------

// Projectiles.ProjectileSpawner$$Spawn
// il2cpp: Projectiles_BaseProjectile_o* Projectiles_ProjectileSpawner__Spawn (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, UnityEngine_Vector3_o velocity, UnityEngine_Vector3_o gravity, float liveTime, int32_t charViewId, System_String_o* team, System_Object_array* settings, const MethodInfo* method);
// 0x58726c0

Projectiles_BaseProjectile_o *
Projectiles_ProjectileSpawner__Spawn
          (System_String_o *name,UnityEngine_Vector3_o position,UnityEngine_Quaternion_o rotation,
          UnityEngine_Vector3_o velocity,UnityEngine_Vector3_o gravity,float liveTime,int32_t charViewId,
          System_String_o *team,System_Object_array *settings,MethodInfo *method)

{
  System_String_o *prefabName;
  UnityEngine_GameObject_o *__this;
  Projectiles_BaseProjectile_o *pPVar1;
  
  if (Il2CppMethodInitialized_07545179 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BaseProjectile)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_07545179 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  prefabName = System_String__Concat_5301f10
                         (TypeInfo_Utility_ResourcePaths->static_fields->Projectiles,"/",
                          name,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  __this = Photon_Pun_PhotonNetwork__Instantiate
                     (prefabName,position,rotation,0,(System_Object_array *)0x0,(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pPVar1 = UnityEngine_GameObject__GetComponent_object_
                       (__this,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_BaseProjectile);
    if (pPVar1 != (Projectiles_BaseProjectile_o *)0x0) {
      (*(pPVar1->klass->vtable)._12_Setup.methodPtr)
                (pPVar1,liveTime,velocity,gravity,charViewId,team,settings,
                 (pPVar1->klass->vtable)._12_Setup.method);
      return pPVar1;
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.ProjectileSpawner$$.ctor
// il2cpp: void Projectiles_ProjectileSpawner___ctor (Projectiles_ProjectileSpawner_o* __this, const MethodInfo* method);
// 0x5872830

void Projectiles_ProjectileSpawner___ctor(Projectiles_ProjectileSpawner_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


