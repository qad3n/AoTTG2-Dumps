// Type: Map.CustomPhysicsMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/CustomPhysicsMaterial.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomPhysicsMaterial.cs
// --------------------------------

// Map.CustomPhysicsMaterial$$get_Bounciness
// il2cpp: float Map_CustomPhysicsMaterial__get_Bounciness (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x5969230

float Map_CustomPhysicsMaterial__get_Bounciness(Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_PhysicsMaterial_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 == (UnityEngine_PhysicsMaterial_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_PhysicsMaterial__get_bounciness(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// Map.CustomPhysicsMaterial$$set_Bounciness
// il2cpp: void Map_CustomPhysicsMaterial__set_Bounciness (Map_CustomPhysicsMaterial_o* __this, float value, const MethodInfo* method);
// 0x5969250

void Map_CustomPhysicsMaterial__set_Bounciness
               (Map_CustomPhysicsMaterial_o *__this,float value,MethodInfo *method)

{
  UnityEngine_PhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 == (UnityEngine_PhysicsMaterial_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_PhysicsMaterial__set_bounciness(__this_00,value,(MethodInfo *)0x0);
  return;
}


// Map.CustomPhysicsMaterial$$get_StaticFriction
// il2cpp: float Map_CustomPhysicsMaterial__get_StaticFriction (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x5969270

float Map_CustomPhysicsMaterial__get_StaticFriction(Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_PhysicsMaterial_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 == (UnityEngine_PhysicsMaterial_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_PhysicsMaterial__get_staticFriction(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// Map.CustomPhysicsMaterial$$set_StaticFriction
// il2cpp: void Map_CustomPhysicsMaterial__set_StaticFriction (Map_CustomPhysicsMaterial_o* __this, float value, const MethodInfo* method);
// 0x5969290

void Map_CustomPhysicsMaterial__set_StaticFriction
               (Map_CustomPhysicsMaterial_o *__this,float value,MethodInfo *method)

{
  UnityEngine_PhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 == (UnityEngine_PhysicsMaterial_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_PhysicsMaterial__set_staticFriction(__this_00,value,(MethodInfo *)0x0);
  return;
}


// Map.CustomPhysicsMaterial$$get_DynamicFriction
// il2cpp: float Map_CustomPhysicsMaterial__get_DynamicFriction (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x59692b0

float Map_CustomPhysicsMaterial__get_DynamicFriction(Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_PhysicsMaterial_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 == (UnityEngine_PhysicsMaterial_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = UnityEngine_PhysicsMaterial__get_dynamicFriction(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// Map.CustomPhysicsMaterial$$set_DynamicFriction
// il2cpp: void Map_CustomPhysicsMaterial__set_DynamicFriction (Map_CustomPhysicsMaterial_o* __this, float value, const MethodInfo* method);
// 0x59692d0

void Map_CustomPhysicsMaterial__set_DynamicFriction
               (Map_CustomPhysicsMaterial_o *__this,float value,MethodInfo *method)

{
  UnityEngine_PhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 == (UnityEngine_PhysicsMaterial_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_PhysicsMaterial__set_dynamicFriction(__this_00,value,(MethodInfo *)0x0);
  return;
}


// Map.CustomPhysicsMaterial$$get_FrictionCombine
// il2cpp: int32_t Map_CustomPhysicsMaterial__get_FrictionCombine (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x59692f0

int32_t Map_CustomPhysicsMaterial__get_FrictionCombine(Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_PhysicsMaterial_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 == (UnityEngine_PhysicsMaterial_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = UnityEngine_PhysicsMaterial__get_frictionCombine(__this_00,(MethodInfo *)0x0);
  return iVar1;
}


// Map.CustomPhysicsMaterial$$set_FrictionCombine
// il2cpp: void Map_CustomPhysicsMaterial__set_FrictionCombine (Map_CustomPhysicsMaterial_o* __this, int32_t value, const MethodInfo* method);
// 0x5969310

void Map_CustomPhysicsMaterial__set_FrictionCombine
               (Map_CustomPhysicsMaterial_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_PhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 == (UnityEngine_PhysicsMaterial_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_PhysicsMaterial__set_frictionCombine(__this_00,value,(MethodInfo *)0x0);
  return;
}


// Map.CustomPhysicsMaterial$$get_BounceCombine
// il2cpp: int32_t Map_CustomPhysicsMaterial__get_BounceCombine (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x5969330

int32_t Map_CustomPhysicsMaterial__get_BounceCombine(Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_PhysicsMaterial_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 == (UnityEngine_PhysicsMaterial_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = UnityEngine_PhysicsMaterial__get_bounceCombine(__this_00,(MethodInfo *)0x0);
  return iVar1;
}


// Map.CustomPhysicsMaterial$$set_BounceCombine
// il2cpp: void Map_CustomPhysicsMaterial__set_BounceCombine (Map_CustomPhysicsMaterial_o* __this, int32_t value, const MethodInfo* method);
// 0x5969350

void Map_CustomPhysicsMaterial__set_BounceCombine
               (Map_CustomPhysicsMaterial_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_PhysicsMaterial_o *__this_00;
  
  __this_00 = (__this->fields)._material;
  if (__this_00 == (UnityEngine_PhysicsMaterial_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_PhysicsMaterial__set_bounceCombine(__this_00,value,(MethodInfo *)0x0);
  return;
}


// Map.CustomPhysicsMaterial$$Setup
// il2cpp: void Map_CustomPhysicsMaterial__Setup (Map_CustomPhysicsMaterial_o* __this, bool allChildColliders, const MethodInfo* method);
// 0x5969370
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5969459: jmp 0x59694b8

void Map_CustomPhysicsMaterial__Setup
               (Map_CustomPhysicsMaterial_o *__this,bool allChildColliders,MethodInfo *method)

{
  UnityEngine_PhysicsMaterial_o **targetAddress;
  bool bVar1;
  uint uVar2;
  UnityEngine_PhysicsMaterial_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  System_Object_array *pSVar3;
  UnityEngine_Object_o *x;
  uint uVar4;
  
  if (Il2CppMethodInitialized_07545971 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_PhysicsMaterial);
    Il2CppMethodInitialized_07545971 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_PhysicsMaterial);
  UnityEngine_PhysicsMaterial___ctor(__this_00,(MethodInfo *)0x0);
  targetAddress = &(__this->fields)._material;
  (__this->fields)._material = __this_00;
  Il2CppCodeGenWriteBarrier(targetAddress);
  __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (allChildColliders) {
    if ((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
       (pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                           (__this_01,
                            (MethodInfo_353C030 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider),
       pSVar3 != (System_Object_array *)0x0)) {
      uVar2 = (uint)pSVar3->max_length;
      if (0 < (int)uVar2) {
        uVar4 = 0;
        do {
          if (uVar2 <= uVar4) {
            ThrowIndexOutOfRangeException();
          }
          if ((UnityEngine_Collider_o *)pSVar3->m_Items[(int)uVar4] == (UnityEngine_Collider_o *)0x0)
          goto label_059694c1;
          UnityEngine_Collider__set_material
                    ((UnityEngine_Collider_o *)pSVar3->m_Items[(int)uVar4],*targetAddress,(MethodInfo *)0x0);
          uVar4 = uVar4 + 1;
          uVar2 = (uint)pSVar3->max_length;
        } while ((int)uVar4 < (int)uVar2);
      }
      return;
    }
  }
  else if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    x = (UnityEngine_Object_o *)
        UnityEngine_GameObject__GetComponentInChildren_object_
                  (__this_01,
                   (MethodInfo_353B8D0 *)MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Collider);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (x != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Collider__set_material((UnityEngine_Collider_o *)x,*targetAddress,(MethodInfo *)0x0);
      return;
    }
  }
label_059694c1:
  ThrowNullReferenceException();
}


// Map.CustomPhysicsMaterial$$.ctor
// il2cpp: void Map_CustomPhysicsMaterial___ctor (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x59694d0

void Map_CustomPhysicsMaterial___ctor(Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


