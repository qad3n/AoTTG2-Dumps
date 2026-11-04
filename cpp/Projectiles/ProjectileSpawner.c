// Type: Projectiles.ProjectileSpawner
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Projectiles/ProjectileSpawner.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/ProjectileSpawner.cs
// --------------------------------

// Projectiles.ProjectileSpawner$$Spawn
// il2cpp: Projectiles_BaseProjectile_o* Projectiles_ProjectileSpawner__Spawn (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, UnityEngine_Vector3_o velocity, UnityEngine_Vector3_o gravity, float liveTime, int32_t charViewId, System_String_o* team, System_Object_array* settings, const MethodInfo* method);
// 0x1820ce3f0

Projectiles_BaseProjectile_o *
Projectiles_ProjectileSpawner__Spawn
          (System_String_o *name,UnityEngine_Vector3_o *position,UnityEngine_Quaternion_o *rotation,
          UnityEngine_Vector3_o *velocity,UnityEngine_Vector3_o *gravity,float liveTime,int32_t charViewId,
          System_String_o *team,System_Object_array *settings,MethodInfo *method)

{
  System_String_o *prefabName;
  UnityEngine_GameObject_o *__this;
  Projectiles_BaseProjectile_o *pPVar1;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_Fields local_38;
  
  if (Il2CppMethodInitialized_18434691e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BaseProjectile)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_18434691e = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  prefabName = System_String__Concat_1969b70
                         (TypeInfo_Utility_ResourcePaths->static_fields->Projectiles,"/",
                          name,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  local_48.z = (position->fields).z;
  local_38.x = (rotation->fields).x;
  local_38.y = (rotation->fields).y;
  local_38.z = (rotation->fields).z;
  local_38.w = (rotation->fields).w;
  local_48.x = (position->fields).x;
  local_48.y = (position->fields).y;
  __this = Photon_Pun_PhotonNetwork__Instantiate
                     (prefabName,(UnityEngine_Vector3_o *)&local_48,(UnityEngine_Quaternion_o *)&local_38,'\0'
                      ,(System_Object_array *)0x0,(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pPVar1 = UnityEngine_GameObject__GetComponent_object_
                       (__this,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_BaseProjectile);
    if (pPVar1 != (Projectiles_BaseProjectile_o *)0x0) {
      local_48.x = (gravity->fields).x;
      local_48.y = (gravity->fields).y;
      local_48.z = (gravity->fields).z;
      local_38.x = (velocity->fields).x;
      local_38.y = (velocity->fields).y;
      local_38.z = (velocity->fields).z;
      (*(pPVar1->klass->vtable)._12_Setup.methodPtr)
                (pPVar1,liveTime,(UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                 charViewId,team,settings,(pPVar1->klass->vtable)._12_Setup.method);
      return pPVar1;
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.ProjectileSpawner$$.ctor
// il2cpp: void Projectiles_ProjectileSpawner___ctor (Projectiles_ProjectileSpawner_o* __this, const MethodInfo* method);
// 0x180528540

void
Projectiles_ProjectileSpawner___ctor(Projectiles_ProjectileSpawner_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


