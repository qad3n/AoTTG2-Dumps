// Type: Map.CustomPhysicsMaterial
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Map/CustomPhysicsMaterial.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomPhysicsMaterial.cs
// --------------------------------

// Map.CustomPhysicsMaterial$$get_Bounciness
// il2cpp: float Map_CustomPhysicsMaterial__get_Bounciness (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x181e88be0

float Map_CustomPhysicsMaterial__get_Bounciness(Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_PhysicsMaterial_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 != (UnityEngine_PhysicsMaterial_o *)0x0) {
    fVar1 = UnityEngine_PhysicsMaterial__get_bounciness(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// Map.CustomPhysicsMaterial$$set_Bounciness
// il2cpp: void Map_CustomPhysicsMaterial__set_Bounciness (Map_CustomPhysicsMaterial_o* __this, float value, const MethodInfo* method);
// 0x181e88c80

void Map_CustomPhysicsMaterial__set_Bounciness
               (Map_CustomPhysicsMaterial_o *__this,float value,MethodInfo *method)

{
  UnityEngine_PhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 != (UnityEngine_PhysicsMaterial_o *)0x0) {
    UnityEngine_PhysicsMaterial__set_bounciness(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Map.CustomPhysicsMaterial$$get_StaticFriction
// il2cpp: float Map_CustomPhysicsMaterial__get_StaticFriction (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x181e88c40

float Map_CustomPhysicsMaterial__get_StaticFriction(Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_PhysicsMaterial_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 != (UnityEngine_PhysicsMaterial_o *)0x0) {
    fVar1 = UnityEngine_PhysicsMaterial__get_staticFriction(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// Map.CustomPhysicsMaterial$$set_StaticFriction
// il2cpp: void Map_CustomPhysicsMaterial__set_StaticFriction (Map_CustomPhysicsMaterial_o* __this, float value, const MethodInfo* method);
// 0x181e88ce0

void Map_CustomPhysicsMaterial__set_StaticFriction
               (Map_CustomPhysicsMaterial_o *__this,float value,MethodInfo *method)

{
  UnityEngine_PhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 != (UnityEngine_PhysicsMaterial_o *)0x0) {
    UnityEngine_PhysicsMaterial__set_staticFriction(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Map.CustomPhysicsMaterial$$get_DynamicFriction
// il2cpp: float Map_CustomPhysicsMaterial__get_DynamicFriction (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x181e88c00

float Map_CustomPhysicsMaterial__get_DynamicFriction(Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_PhysicsMaterial_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 != (UnityEngine_PhysicsMaterial_o *)0x0) {
    fVar1 = UnityEngine_PhysicsMaterial__get_dynamicFriction(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// Map.CustomPhysicsMaterial$$set_DynamicFriction
// il2cpp: void Map_CustomPhysicsMaterial__set_DynamicFriction (Map_CustomPhysicsMaterial_o* __this, float value, const MethodInfo* method);
// 0x181e88ca0

void Map_CustomPhysicsMaterial__set_DynamicFriction
               (Map_CustomPhysicsMaterial_o *__this,float value,MethodInfo *method)

{
  UnityEngine_PhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 != (UnityEngine_PhysicsMaterial_o *)0x0) {
    UnityEngine_PhysicsMaterial__set_dynamicFriction(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Map.CustomPhysicsMaterial$$get_FrictionCombine
// il2cpp: int32_t Map_CustomPhysicsMaterial__get_FrictionCombine (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x181e88c20

int32_t Map_CustomPhysicsMaterial__get_FrictionCombine(Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_PhysicsMaterial_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 != (UnityEngine_PhysicsMaterial_o *)0x0) {
    iVar1 = UnityEngine_PhysicsMaterial__get_frictionCombine(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// Map.CustomPhysicsMaterial$$set_FrictionCombine
// il2cpp: void Map_CustomPhysicsMaterial__set_FrictionCombine (Map_CustomPhysicsMaterial_o* __this, int32_t value, const MethodInfo* method);
// 0x181e88cc0

void Map_CustomPhysicsMaterial__set_FrictionCombine
               (Map_CustomPhysicsMaterial_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_PhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 != (UnityEngine_PhysicsMaterial_o *)0x0) {
    UnityEngine_PhysicsMaterial__set_frictionCombine(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Map.CustomPhysicsMaterial$$get_BounceCombine
// il2cpp: int32_t Map_CustomPhysicsMaterial__get_BounceCombine (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x181e88bc0

int32_t Map_CustomPhysicsMaterial__get_BounceCombine(Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_PhysicsMaterial_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 != (UnityEngine_PhysicsMaterial_o *)0x0) {
    iVar1 = UnityEngine_PhysicsMaterial__get_bounceCombine(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// Map.CustomPhysicsMaterial$$set_BounceCombine
// il2cpp: void Map_CustomPhysicsMaterial__set_BounceCombine (Map_CustomPhysicsMaterial_o* __this, int32_t value, const MethodInfo* method);
// 0x181e88c60

void Map_CustomPhysicsMaterial__set_BounceCombine
               (Map_CustomPhysicsMaterial_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_PhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 != (UnityEngine_PhysicsMaterial_o *)0x0) {
    UnityEngine_PhysicsMaterial__set_bounceCombine(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Map.CustomPhysicsMaterial$$Setup
// il2cpp: void Map_CustomPhysicsMaterial__Setup (Map_CustomPhysicsMaterial_o* __this, bool allChildColliders, const MethodInfo* method);
// 0x181e88a70

void Map_CustomPhysicsMaterial__Setup
               (Map_CustomPhysicsMaterial_o *__this,bool allChildColliders,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_PhysicsMaterial_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Object_o *x;
  System_Object_array *pSVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184344fe1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_PhysicsMaterial);
    Il2CppMethodInitialized_184344fe1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_PhysicsMaterial);
  UnityEngine_PhysicsMaterial___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields)._material = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._material,__this_00);
  __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (allChildColliders) {
    if ((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
       (pSVar2 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                           (__this_01,
                            (MethodInfo_6F5810 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider),
       pSVar2 != (System_Object_array *)0x0)) {
      uVar3 = 0;
      while( true ) {
        if ((int)pSVar2->max_length <= (int)uVar3) {
          return;
        }
        if ((uint)pSVar2->max_length <= uVar3) {
          ThrowIndexOutOfRangeException();
        }
        if ((UnityEngine_Collider_o *)pSVar2->m_Items[(int)uVar3] == (UnityEngine_Collider_o *)0x0) break;
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pSVar2->m_Items[(int)uVar3],(__this->fields)._material,
                   (MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
      }
    }
  }
  else if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    x = (UnityEngine_Object_o *)
        UnityEngine_GameObject__GetComponentInChildren_object_
                  (__this_01,
                   (MethodInfo_6F5040 *)MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Collider);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UnityEngine_Object_o *)0x0) goto label_181e88bab;
      UnityEngine_Collider__set_material
                ((UnityEngine_Collider_o *)x,(__this->fields)._material,(MethodInfo *)0x0);
    }
    return;
  }
label_181e88bab:
  ThrowNullReferenceException();
}


// Map.CustomPhysicsMaterial$$.ctor
// il2cpp: void Map_CustomPhysicsMaterial___ctor (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x180528540

void
Map_CustomPhysicsMaterial___ctor(Map_CustomPhysicsMaterial_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


