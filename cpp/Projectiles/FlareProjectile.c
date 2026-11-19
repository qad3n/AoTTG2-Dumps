// Type: Projectiles.FlareProjectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Projectiles/FlareProjectile.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/FlareProjectile.cs
// --------------------------------

// Projectiles.FlareProjectile$$get_DestroyDelay
// il2cpp: float Projectiles_FlareProjectile__get_DestroyDelay (Projectiles_FlareProjectile_o* __this, const MethodInfo* method);
// 0x5872430

float Projectiles_FlareProjectile__get_DestroyDelay(Projectiles_FlareProjectile_o *__this,MethodInfo *method)

{
  return 10.0;
}


// Projectiles.FlareProjectile$$SetupSettings
// il2cpp: void Projectiles_FlareProjectile__SetupSettings (Projectiles_FlareProjectile_o* __this, System_Object_array* settings, const MethodInfo* method);
// 0x5872440

void Projectiles_FlareProjectile__SetupSettings
               (Projectiles_FlareProjectile_o *__this,System_Object_array *settings,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_ParticleSystem_o *__this_00;
  UnityEngine_Color_Fields *pUVar1;
  
  if (Il2CppMethodInitialized_07545177 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
    Il2CppMethodInitialized_07545177 = '\x01';
  }
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
  if (settings != (System_Object_array *)0x0) {
    if ((int)settings->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if ((__this_00 != (UnityEngine_ParticleSystem_o *)0x0) &&
       (obj = settings->m_Items[0], obj != (Il2CppObject *)0x0)) {
      if ((obj->klass->_1).element_class != (TypeInfo_UnityEngine_Color->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pUVar1 = il2cpp_vm_Object_Unbox(obj);
      UnityEngine_ParticleSystem__set_startColor(__this_00,(UnityEngine_Color_o)*pUVar1,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.FlareProjectile$$OnCollisionEnter
// il2cpp: void Projectiles_FlareProjectile__OnCollisionEnter (Projectiles_FlareProjectile_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);
// 0x58724f0

void Projectiles_FlareProjectile__OnCollisionEnter
               (Projectiles_FlareProjectile_o *__this,UnityEngine_Collision_o *collision,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((pPVar1->fields)._IsMine_k__BackingField == false) || ((__this->fields).Disabled != false)) {
    return;
  }
  (*(__this->klass->vtable)._17_DestroySelf.methodPtr)(__this,(__this->klass->vtable)._17_DestroySelf.method);
  return;
}


// Projectiles.FlareProjectile$$.ctor
// il2cpp: void Projectiles_FlareProjectile___ctor (Projectiles_FlareProjectile_o* __this, const MethodInfo* method);
// 0x5872530

void Projectiles_FlareProjectile___ctor(Projectiles_FlareProjectile_o *__this,MethodInfo *method)

{
  Projectiles_BaseProjectile___ctor((Projectiles_SmokeBombProjectile_o *)__this,method);
  return;
}


