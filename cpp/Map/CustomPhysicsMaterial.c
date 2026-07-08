// Type: Map.CustomPhysicsMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/CustomPhysicsMaterial.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Component/CustomPhysicsMaterial.cs  [CHANGED since prior version]
// --------------------------------

// Map.CustomPhysicsMaterial$$get_Bounciness
// il2cpp: float Map_CustomPhysicsMaterial__get_Bounciness (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x424a260

float Map_CustomPhysicsMaterial__get_Bounciness
                (Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_PhysicMaterial_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 != (UnityEngine_PhysicMaterial_o *)0x0) {
    fVar1 = UnityEngine_PhysicMaterial__get_bounciness(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.CustomPhysicsMaterial$$set_Bounciness
// il2cpp: void Map_CustomPhysicsMaterial__set_Bounciness (Map_CustomPhysicsMaterial_o* __this, float value, const MethodInfo* method);
// 0x424a280

void Map_CustomPhysicsMaterial__set_Bounciness
               (Map_CustomPhysicsMaterial_o *__this,float value,MethodInfo *method)

{
  UnityEngine_PhysicMaterial_o *__this_00;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounciness(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.CustomPhysicsMaterial$$get_StaticFriction
// il2cpp: float Map_CustomPhysicsMaterial__get_StaticFriction (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x424a2a0

float Map_CustomPhysicsMaterial__get_StaticFriction
                (Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_PhysicMaterial_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 != (UnityEngine_PhysicMaterial_o *)0x0) {
    fVar1 = UnityEngine_PhysicMaterial__get_staticFriction(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.CustomPhysicsMaterial$$set_StaticFriction
// il2cpp: void Map_CustomPhysicsMaterial__set_StaticFriction (Map_CustomPhysicsMaterial_o* __this, float value, const MethodInfo* method);
// 0x424a2c0

void Map_CustomPhysicsMaterial__set_StaticFriction
               (Map_CustomPhysicsMaterial_o *__this,float value,MethodInfo *method)

{
  UnityEngine_PhysicMaterial_o *__this_00;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_staticFriction(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.CustomPhysicsMaterial$$get_DynamicFriction
// il2cpp: float Map_CustomPhysicsMaterial__get_DynamicFriction (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x424a2e0

float Map_CustomPhysicsMaterial__get_DynamicFriction
                (Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_PhysicMaterial_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 != (UnityEngine_PhysicMaterial_o *)0x0) {
    fVar1 = UnityEngine_PhysicMaterial__get_dynamicFriction(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.CustomPhysicsMaterial$$set_DynamicFriction
// il2cpp: void Map_CustomPhysicsMaterial__set_DynamicFriction (Map_CustomPhysicsMaterial_o* __this, float value, const MethodInfo* method);
// 0x424a300

void Map_CustomPhysicsMaterial__set_DynamicFriction
               (Map_CustomPhysicsMaterial_o *__this,float value,MethodInfo *method)

{
  UnityEngine_PhysicMaterial_o *__this_00;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_dynamicFriction(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.CustomPhysicsMaterial$$get_FrictionCombine
// il2cpp: int32_t Map_CustomPhysicsMaterial__get_FrictionCombine (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x424a320

int32_t Map_CustomPhysicsMaterial__get_FrictionCombine
                  (Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_PhysicMaterial_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 != (UnityEngine_PhysicMaterial_o *)0x0) {
    iVar1 = UnityEngine_PhysicMaterial__get_frictionCombine(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.CustomPhysicsMaterial$$set_FrictionCombine
// il2cpp: void Map_CustomPhysicsMaterial__set_FrictionCombine (Map_CustomPhysicsMaterial_o* __this, int32_t value, const MethodInfo* method);
// 0x424a340

void Map_CustomPhysicsMaterial__set_FrictionCombine
               (Map_CustomPhysicsMaterial_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_PhysicMaterial_o *__this_00;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_frictionCombine(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.CustomPhysicsMaterial$$get_BounceCombine
// il2cpp: int32_t Map_CustomPhysicsMaterial__get_BounceCombine (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x424a360

int32_t Map_CustomPhysicsMaterial__get_BounceCombine
                  (Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_PhysicMaterial_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 != (UnityEngine_PhysicMaterial_o *)0x0) {
    iVar1 = UnityEngine_PhysicMaterial__get_bounceCombine(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.CustomPhysicsMaterial$$set_BounceCombine
// il2cpp: void Map_CustomPhysicsMaterial__set_BounceCombine (Map_CustomPhysicsMaterial_o* __this, int32_t value, const MethodInfo* method);
// 0x424a380

void Map_CustomPhysicsMaterial__set_BounceCombine
               (Map_CustomPhysicsMaterial_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_PhysicMaterial_o *__this_00;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.CustomPhysicsMaterial$$Setup
// il2cpp: void Map_CustomPhysicsMaterial__Setup (Map_CustomPhysicsMaterial_o* __this, bool allChildColliders, const MethodInfo* method);
// 0x424a3a0

void Map_CustomPhysicsMaterial__Setup
               (Map_CustomPhysicsMaterial_o *__this,bool_conflict allChildColliders,
               MethodInfo *method)

{
  UnityEngine_PhysicMaterial_o **ppUVar1;
  uint uVar2;
  bool_conflict bVar3;
  UnityEngine_PhysicMaterial_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *x;
  uint uVar5;
  
  if (DAT_057051f8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Collider_GetComponentInChildren_Collider);
    il2cpp_init_method_metadata(&MethodInfo_Collider___GetComponentsInChildren_Collider);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicMaterial);
    DAT_057051f8 = '\x01';
  }
  __this_00 = (UnityEngine_PhysicMaterial_o *)il2cpp_runtime_glue(TypeInfo_PhysicMaterial);
  UnityEngine_PhysicMaterial___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields)._material;
  (__this->fields)._material = __this_00;
  il2cpp_runtime_glue(ppUVar1);
  __this_01 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    if ((char)allChildColliders == '\0') {
      x = (UnityEngine_Object_o *)
          UnityEngine_GameObject__GetComponentInChildren<object>(__this_01,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      if (x != (UnityEngine_Object_o *)0x0) {
        UnityEngine_Collider__set_material((UnityEngine_Collider_o *)x,*ppUVar1,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pSVar4 = UnityEngine_GameObject__GetComponentsInChildren<object>(__this_01,MethodInfo_Collider___GetComponentsInChildren_Collider);
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar2 = (uint)pSVar4->max_length;
        if (0 < (int)uVar2) {
          uVar5 = 0;
          do {
            if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if ((UnityEngine_Collider_o *)pSVar4->m_Items[(int)uVar5] ==
                (UnityEngine_Collider_o *)0x0) goto LAB_0424a4ed;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pSVar4->m_Items[(int)uVar5],*ppUVar1,
                       (MethodInfo *)0x0);
            uVar5 = uVar5 + 1;
            uVar2 = (uint)pSVar4->max_length;
          } while ((int)uVar5 < (int)uVar2);
        }
        return;
      }
    }
  }
LAB_0424a4ed:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.CustomPhysicsMaterial$$.ctor
// il2cpp: void Map_CustomPhysicsMaterial___ctor (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x424a500

void Map_CustomPhysicsMaterial___ctor(Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


