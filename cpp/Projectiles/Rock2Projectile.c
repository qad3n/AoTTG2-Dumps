// Type: Projectiles.Rock2Projectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Projectiles/Rock2Projectile.cs
// Prior source: NEW in this update
// --------------------------------

// Projectiles.Rock2Projectile$$get_DestroyOnImpact
// il2cpp: bool Projectiles_Rock2Projectile__get_DestroyOnImpact (Projectiles_Rock2Projectile_o* __this, const MethodInfo* method);
// 0x3f1a2c0

bool_conflict
Projectiles_Rock2Projectile__get_DestroyOnImpact
          (Projectiles_Rock2Projectile_o *__this,MethodInfo *method)

{
  return 0;
}


// Projectiles.Rock2Projectile$$get_MinImpactVelocity
// il2cpp: float Projectiles_Rock2Projectile__get_MinImpactVelocity (Projectiles_Rock2Projectile_o* __this, const MethodInfo* method);
// 0x3f1a2d0

float Projectiles_Rock2Projectile__get_MinImpactVelocity
                (Projectiles_Rock2Projectile_o *__this,MethodInfo *method)

{
  return 50.0;
}


// Projectiles.Rock2Projectile$$RegisterObjects
// il2cpp: void Projectiles_Rock2Projectile__RegisterObjects (Projectiles_Rock2Projectile_o* __this, const MethodInfo* method);
// 0x3f1a2e0

void Projectiles_Rock2Projectile__RegisterObjects
               (Projectiles_Rock2Projectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  long lVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *item;
  
  if (DAT_05703cd2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&"Sphere1");
    DAT_05703cd2 = '\x01';
  }
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    pUVar5 = UnityEngine_Transform__Find(pUVar5,"Sphere1",(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      item = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
      lVar4 = MethodInfo_Void_Add;
      __this_00 = (__this->fields)._hideObjects;
      if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar3 = (__this_00->fields)._items;
        if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pUVar3->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pUVar3->m_Items[(int)uVar2] = item;
            il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar2,item);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.Rock2Projectile$$.ctor
// il2cpp: void Projectiles_Rock2Projectile___ctor (Projectiles_Rock2Projectile_o* __this, const MethodInfo* method);
// 0x3f1a3b0

void Projectiles_Rock2Projectile___ctor
               (Projectiles_SmokeBombProjectile_o *__this,MethodInfo *method)

{
  Projectiles_BaseProjectile___ctor(__this,method);
  return;
}


