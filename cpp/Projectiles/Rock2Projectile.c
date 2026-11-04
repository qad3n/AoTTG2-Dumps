// Type: Projectiles.Rock2Projectile
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Projectiles/Rock2Projectile.cs
// Prior real C# source: none
// --------------------------------

// Projectiles.Rock2Projectile$$get_DestroyOnImpact
// il2cpp: bool Projectiles_Rock2Projectile__get_DestroyOnImpact (Projectiles_Rock2Projectile_o* __this, const MethodInfo* method);
// 0x180668280

bool
Projectiles_Rock2Projectile__get_DestroyOnImpact(Projectiles_Rock2Projectile_o* __this, MethodInfo* method)

{
  return false;
}


// Projectiles.Rock2Projectile$$get_MinImpactVelocity
// il2cpp: float Projectiles_Rock2Projectile__get_MinImpactVelocity (Projectiles_Rock2Projectile_o* __this, const MethodInfo* method);
// 0x1820cf520

float
Projectiles_Rock2Projectile__get_MinImpactVelocity(Projectiles_Rock2Projectile_o* __this, MethodInfo* method)

{
  return 50.0;
}


// Projectiles.Rock2Projectile$$RegisterObjects
// il2cpp: void Projectiles_Rock2Projectile__RegisterObjects (Projectiles_Rock2Projectile_o* __this, const MethodInfo* method);
// 0x1820cf440

void Projectiles_Rock2Projectile__RegisterObjects(Projectiles_Rock2Projectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  MethodInfo *pMVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *item;
  
  if (Il2CppMethodInitialized_184346924 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"Sphere1");
    Il2CppMethodInitialized_184346924 = '\x01';
  }
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    pUVar5 = UnityEngine_Transform__Find(pUVar5,"Sphere1",(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      item = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
      __this_00 = (__this->fields)._hideObjects;
      if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar3 = (__this_00->fields)._items;
        if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
          uVar2 = (__this_00->fields)._size;
          if ((uint)pUVar3->max_length <= uVar2) {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                       (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
            return;
          }
          (__this_00->fields)._size = uVar2 + 1;
          if (uVar2 < (uint)pUVar3->max_length) {
            pUVar3->m_Items[(int)uVar2] = item;
            Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,item);
            return;
          }
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.Rock2Projectile$$.ctor
// il2cpp: void Projectiles_Rock2Projectile___ctor (Projectiles_Rock2Projectile_o* __this, const MethodInfo* method);
// 0x1820b6310

void
Projectiles_Rock2Projectile___ctor(Projectiles_Rock2Projectile_o* __this, MethodInfo* method)

{
  Projectiles_BaseProjectile___ctor((Projectiles_BladeThrowProjectile_o *)__this,(MethodInfo *)0x0);
  return;
}


