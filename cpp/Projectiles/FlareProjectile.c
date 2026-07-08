// Type: Projectiles.FlareProjectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Projectiles/FlareProjectile.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Projectiles/FlareProjectile.cs  [CHANGED since prior version]
// --------------------------------

// Projectiles.FlareProjectile$$get_DestroyDelay
// il2cpp: float Projectiles_FlareProjectile__get_DestroyDelay (Projectiles_FlareProjectile_o* __this, const MethodInfo* method);
// 0x3f19160

float Projectiles_FlareProjectile__get_DestroyDelay
                (Projectiles_FlareProjectile_o *__this,MethodInfo *method)

{
  return 10.0;
}


// Projectiles.FlareProjectile$$SetupSettings
// il2cpp: void Projectiles_FlareProjectile__SetupSettings (Projectiles_FlareProjectile_o* __this, System_Object_array* settings, const MethodInfo* method);
// 0x3f19170

void Projectiles_FlareProjectile__SetupSettings
               (Projectiles_FlareProjectile_o *__this,System_Object_array *settings,
               MethodInfo *method)

{
  UnityEngine_ParticleSystem_o *__this_00;
  UnityEngine_Color_Fields *pUVar1;
  
  if (DAT_05703cca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color);
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
    DAT_05703cca = '\x01';
  }
  __this_00 = (UnityEngine_ParticleSystem_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
  if (settings != (System_Object_array *)0x0) {
    if ((int)settings->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((__this_00 != (UnityEngine_ParticleSystem_o *)0x0) &&
       (settings->m_Items[0] != (Il2CppObject *)0x0)) {
      if ((settings->m_Items[0]->klass->_1).element_class == *(Il2CppClass **)(TypeInfo_Color + 0x40))
      {
        pUVar1 = (UnityEngine_Color_Fields *)il2cpp_glue_022c7330();
        UnityEngine_ParticleSystem__set_startColor
                  (__this_00,(UnityEngine_Color_o)*pUVar1,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.FlareProjectile$$OnCollisionEnter
// il2cpp: void Projectiles_FlareProjectile__OnCollisionEnter (Projectiles_FlareProjectile_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);
// 0x3f19220

void Projectiles_FlareProjectile__OnCollisionEnter
               (Projectiles_FlareProjectile_o *__this,UnityEngine_Collision_o *collision,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (((char)(pPVar1->fields)._IsMine_k__BackingField != '\0') &&
     ((char)(__this->fields).Disabled == '\0')) {
    (*(__this->klass->vtable)._17_DestroySelf.methodPtr)
              (__this,(__this->klass->vtable)._17_DestroySelf.method);
    return;
  }
  return;
}


// Projectiles.FlareProjectile$$.ctor
// il2cpp: void Projectiles_FlareProjectile___ctor (Projectiles_FlareProjectile_o* __this, const MethodInfo* method);
// 0x3f19260

void Projectiles_FlareProjectile___ctor
               (Projectiles_SmokeBombProjectile_o *__this,MethodInfo *method)

{
  Projectiles_BaseProjectile___ctor(__this,method);
  return;
}


