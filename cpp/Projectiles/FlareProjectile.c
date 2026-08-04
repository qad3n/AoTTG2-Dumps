// Type: Projectiles.FlareProjectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Projectiles/FlareProjectile.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/FlareProjectile.cs
// --------------------------------

// Projectiles.FlareProjectile$$get_DestroyDelay
// il2cpp: float Projectiles_FlareProjectile__get_DestroyDelay (Projectiles_FlareProjectile_o* __this, const MethodInfo* method);
// 0x4208250

float Projectiles_FlareProjectile__get_DestroyDelay(Projectiles_FlareProjectile_o *__this,MethodInfo *method)

{
  return 10.0;
}


// Projectiles.FlareProjectile$$SetupSettings
// il2cpp: void Projectiles_FlareProjectile__SetupSettings (Projectiles_FlareProjectile_o* __this, System_Object_array* settings, const MethodInfo* method);
// 0x4208260

void Projectiles_FlareProjectile__SetupSettings
               (Projectiles_FlareProjectile_o *__this,System_Object_array *settings,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_Collider__o *__this_01;
  System_Collections_Generic_List_ParticleSystem__o *__this_02;
  UnityEngine_ParticleSystem_o *__this_03;
  UnityEngine_Color_Fields *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Projectiles_FlareProjectile_o *__this_04;
  
  if (g_data_057ad8eb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
    g_data_057ad8eb = '\x01';
  }
  __this_03 = (UnityEngine_ParticleSystem_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
  if (settings == (System_Object_array *)0x0) {
label_042082f6:
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)settings->max_length != 0) {
    if ((__this_03 != (UnityEngine_ParticleSystem_o *)0x0) &&
       (__this = (Projectiles_FlareProjectile_o *)settings->m_Items[0],
       __this != (Projectiles_FlareProjectile_o *)0x0)) {
      if ((((Il2CppClass *)__this->klass)->_1).element_class == *(Il2CppClass **)(TypeInfo_Color + 0x40)) {
        pUVar1 = (UnityEngine_Color_Fields *)il2cpp_runtime_helper_02305440();
        UnityEngine_ParticleSystem__set_startColor(__this_03,(UnityEngine_Color_o)*pUVar1,(MethodInfo *)0x0);
        return;
      }
      goto label_04208300;
    }
    goto label_042082f6;
  }
  il2cpp_runtime_helper_022b2ca0();
label_04208300:
  il2cpp_runtime_helper_022b2fd0();
  __this_04 = __this;
  pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad8df == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_ParticleSystem);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_ParticleSystem);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
      g_data_057ad8df = '\x01';
    }
    __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
    (__this_04->fields)._hideObjects = __this_00;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields)._hideObjects,__this_00);
    __this_01 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UnityEngine_Collider);
    (__this_04->fields)._colliders = __this_01;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields)._colliders,__this_01);
    __this_02 = (System_Collections_Generic_List_ParticleSystem__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ParticleSystem);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_UnityEngine_ParticleSystem);
    (__this_04->fields)._fadeTrails = __this_02;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields)._fadeTrails);
    Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this_04,(MethodInfo *)0x0);
    return;
  }
  if (((char)(pPVar2->fields)._IsMine_k__BackingField != '\0') && ((char)(__this->fields).Disabled == '\0')) {
    (*(__this->klass->vtable)._17_DestroySelf.methodPtr)
              (__this,(__this->klass->vtable)._17_DestroySelf.method);
    return;
  }
  return;
}


// Projectiles.FlareProjectile$$OnCollisionEnter
// il2cpp: void Projectiles_FlareProjectile__OnCollisionEnter (Projectiles_FlareProjectile_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);
// 0x4208310

void Projectiles_FlareProjectile__OnCollisionEnter
               (Projectiles_FlareProjectile_o *__this,UnityEngine_Collision_o *collision,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_Collider__o *__this_01;
  System_Collections_Generic_List_ParticleSystem__o *__this_02;
  Photon_Pun_PhotonView_o *pPVar1;
  Projectiles_FlareProjectile_o *__this_03;
  
  __this_03 = __this;
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad8df == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_ParticleSystem);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_ParticleSystem);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
      g_data_057ad8df = '\x01';
    }
    __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
    (__this_03->fields)._hideObjects = __this_00;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields)._hideObjects,__this_00);
    __this_01 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UnityEngine_Collider);
    (__this_03->fields)._colliders = __this_01;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields)._colliders,__this_01);
    __this_02 = (System_Collections_Generic_List_ParticleSystem__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ParticleSystem);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_UnityEngine_ParticleSystem);
    (__this_03->fields)._fadeTrails = __this_02;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields)._fadeTrails);
    Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this_03,(MethodInfo *)0x0);
    return;
  }
  if (((char)(pPVar1->fields)._IsMine_k__BackingField != '\0') && ((char)(__this->fields).Disabled == '\0')) {
    (*(__this->klass->vtable)._17_DestroySelf.methodPtr)
              (__this,(__this->klass->vtable)._17_DestroySelf.method);
    return;
  }
  return;
}


// Projectiles.FlareProjectile$$.ctor
// il2cpp: void Projectiles_FlareProjectile___ctor (Projectiles_FlareProjectile_o* __this, const MethodInfo* method);
// 0x4208350

void Projectiles_FlareProjectile___ctor(Projectiles_SmokeBombProjectile_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_Collider__o *__this_01;
  System_Collections_Generic_List_ParticleSystem__o *__this_02;
  
  if (g_data_057ad8df == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ad8df = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._hideObjects = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._hideObjects,__this_00);
  __this_01 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UnityEngine_Collider);
  (__this->fields)._colliders = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._colliders,__this_01);
  __this_02 = (System_Collections_Generic_List_ParticleSystem__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ParticleSystem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_UnityEngine_ParticleSystem);
  (__this->fields)._fadeTrails = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._fadeTrails);
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  return;
}


