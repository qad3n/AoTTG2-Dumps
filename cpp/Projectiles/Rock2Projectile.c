// Type: Projectiles.Rock2Projectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Projectiles/Rock2Projectile.cs
// Prior real C# source: none
// --------------------------------

// Projectiles.Rock2Projectile$$get_DestroyOnImpact
// il2cpp: bool Projectiles_Rock2Projectile__get_DestroyOnImpact (Projectiles_Rock2Projectile_o* __this, const MethodInfo* method);
// 0x42093b0

bool_conflict
Projectiles_Rock2Projectile__get_DestroyOnImpact(Projectiles_Rock2Projectile_o *__this,MethodInfo *method)

{
  return 0;
}


// Projectiles.Rock2Projectile$$get_MinImpactVelocity
// il2cpp: float Projectiles_Rock2Projectile__get_MinImpactVelocity (Projectiles_Rock2Projectile_o* __this, const MethodInfo* method);
// 0x42093c0

float Projectiles_Rock2Projectile__get_MinImpactVelocity
                (Projectiles_Rock2Projectile_o *__this,MethodInfo *method)

{
  return 50.0;
}


// Projectiles.Rock2Projectile$$RegisterObjects
// il2cpp: void Projectiles_Rock2Projectile__RegisterObjects (Projectiles_Rock2Projectile_o* __this, const MethodInfo* method);
// 0x42093d0

void Projectiles_Rock2Projectile__RegisterObjects(Projectiles_Rock2Projectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_Collider__o *__this_01;
  System_Collections_Generic_List_ParticleSystem__o *__this_02;
  Projectiles_Rock2Projectile_o *__this_03;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_GameObject_o *item;
  Projectiles_Rock2Projectile_o *__this_05;
  
  if (g_data_057ad8f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"Sphere1");
    g_data_057ad8f3 = '\x01';
  }
  __this_05 = __this;
  __this_03 = (Projectiles_Rock2Projectile_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_03 != (Projectiles_Rock2Projectile_o *)0x0) {
    __this_04 = UnityEngine_Transform__Find
                          ((UnityEngine_Transform_o *)__this_03,"Sphere1",(MethodInfo *)0x0);
    __this_05 = __this_03;
    if (__this_04 != (UnityEngine_Transform_o *)0x0) {
      item = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
      lVar4 = MethodInfo_Void_Add;
      __this_05 = (Projectiles_Rock2Projectile_o *)(__this->fields)._hideObjects;
      if (__this_05 != (Projectiles_Rock2Projectile_o *)0x0) {
        piVar1 = (int32_t *)((long)&(__this_05->fields).m_CancellationTokenSource + 4);
        *piVar1 = *piVar1 + 1;
        pSVar3 = (System_Object_array *)(__this_05->fields).m_CachedPtr;
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar2 = *(uint *)&(__this_05->fields).m_CancellationTokenSource;
          if (uVar2 < (uint)pSVar3->max_length) {
            *(uint *)&(__this_05->fields).m_CancellationTokenSource = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)item;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,item);
            return;
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_05,(Il2CppObject *)item,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
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
  (__this_05->fields)._hideObjects = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this_05->fields)._hideObjects,__this_00);
  __this_01 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UnityEngine_Collider);
  (__this_05->fields)._colliders = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this_05->fields)._colliders,__this_01);
  __this_02 = (System_Collections_Generic_List_ParticleSystem__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ParticleSystem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_UnityEngine_ParticleSystem);
  (__this_05->fields)._fadeTrails = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this_05->fields)._fadeTrails);
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this_05,(MethodInfo *)0x0);
  return;
}


// Projectiles.Rock2Projectile$$.ctor
// il2cpp: void Projectiles_Rock2Projectile___ctor (Projectiles_Rock2Projectile_o* __this, const MethodInfo* method);
// 0x42094a0

void Projectiles_Rock2Projectile___ctor(Projectiles_SmokeBombProjectile_o *__this,MethodInfo *method)

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


