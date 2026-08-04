// Type: Map.CustomPhysicsMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/CustomPhysicsMaterial.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomPhysicsMaterial.cs
// --------------------------------

// Map.CustomPhysicsMaterial$$get_Bounciness
// il2cpp: float Map_CustomPhysicsMaterial__get_Bounciness (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x4097330

float Map_CustomPhysicsMaterial__get_Bounciness(Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint uVar2;
  bool_conflict bVar3;
  UnityEngine_MonoBehaviour_c *__this_00;
  UnityEngine_MonoBehaviour_o *pUVar4;
  System_Object_array *pSVar5;
  uint uVar6;
  UnityEngine_PhysicMaterial_o *pUVar7;
  UnityEngine_MonoBehaviour_o *__this_01;
  float fVar8;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  float extraout_XMM0_Da_10;
  
  pUVar7 = (__this->fields)._material;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    fVar8 = UnityEngine_PhysicMaterial__get_bounciness(pUVar7,(MethodInfo *)0x0);
    return fVar8;
  }
  fVar8 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounciness(pUVar7,fVar8,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    fVar8 = UnityEngine_PhysicMaterial__get_staticFriction(pUVar7,(MethodInfo *)0x0);
    return fVar8;
  }
  fVar8 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_staticFriction(pUVar7,fVar8,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    fVar8 = UnityEngine_PhysicMaterial__get_dynamicFriction(pUVar7,(MethodInfo *)0x0);
    return fVar8;
  }
  fVar8 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_dynamicFriction(pUVar7,fVar8,(MethodInfo *)0x0);
    return extraout_XMM0_Da_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_frictionCombine(pUVar7,(MethodInfo *)0x0);
    return extraout_XMM0_Da_02;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_frictionCombine(pUVar7,(int32_t)method,(MethodInfo *)0x0);
    return extraout_XMM0_Da_03;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_bounceCombine(pUVar7,(MethodInfo *)0x0);
    return extraout_XMM0_Da_04;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = pUVar7[1].monitor;
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_01,(int32_t)method,(MethodInfo *)0x0);
    return extraout_XMM0_Da_05;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac451 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)__this_00,(MethodInfo *)0x0);
  pUVar1 = __this_01 + 1;
  __this_01[1].klass = __this_00;
  il2cpp_runtime_helper_022b4080(pUVar1);
  pUVar4 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)method == '\0') {
      pUVar4 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pUVar4;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return extraout_XMM0_Da_08;
      }
      if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar4,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return extraout_XMM0_Da_09;
      }
    }
    else {
      pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_01 = pUVar4;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar2 = (uint)pSVar5->max_length;
        fVar8 = extraout_XMM0_Da_06;
        if (0 < (int)uVar2) {
          uVar6 = 0;
          do {
            __this_01 = pUVar4;
            if (uVar2 <= uVar6) goto label_040975c2;
            pUVar4 = (UnityEngine_MonoBehaviour_o *)pSVar5->m_Items[(int)uVar6];
            __this_01 = pUVar4;
            if (pUVar4 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar4,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                       (MethodInfo *)0x0);
            uVar6 = uVar6 + 1;
            uVar2 = (uint)pSVar5->max_length;
            fVar8 = extraout_XMM0_Da_07;
          } while ((int)uVar6 < (int)uVar2);
        }
        return fVar8;
      }
    }
  }
label_040975bd:
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_XMM0_Da_10;
}


// Map.CustomPhysicsMaterial$$set_Bounciness
// il2cpp: void Map_CustomPhysicsMaterial__set_Bounciness (Map_CustomPhysicsMaterial_o* __this, float value, const MethodInfo* method);
// 0x4097350

void Map_CustomPhysicsMaterial__set_Bounciness
               (Map_CustomPhysicsMaterial_o *__this,float value,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint uVar2;
  bool_conflict bVar3;
  UnityEngine_MonoBehaviour_c *__this_00;
  UnityEngine_MonoBehaviour_o *pUVar4;
  System_Object_array *pSVar5;
  uint uVar6;
  UnityEngine_PhysicMaterial_o *pUVar7;
  UnityEngine_MonoBehaviour_o *__this_01;
  float fVar8;
  
  pUVar7 = (__this->fields)._material;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounciness(pUVar7,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_staticFriction(pUVar7,(MethodInfo *)0x0);
    return;
  }
  fVar8 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_staticFriction(pUVar7,fVar8,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_dynamicFriction(pUVar7,(MethodInfo *)0x0);
    return;
  }
  fVar8 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_dynamicFriction(pUVar7,fVar8,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_frictionCombine(pUVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_frictionCombine(pUVar7,(int32_t)method,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_bounceCombine(pUVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = pUVar7[1].monitor;
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_01,(int32_t)method,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac451 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)__this_00,(MethodInfo *)0x0);
  pUVar1 = __this_01 + 1;
  __this_01[1].klass = __this_00;
  il2cpp_runtime_helper_022b4080(pUVar1);
  pUVar4 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)method == '\0') {
      pUVar4 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pUVar4;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar4,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_01 = pUVar4;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar2 = (uint)pSVar5->max_length;
        if (0 < (int)uVar2) {
          uVar6 = 0;
          do {
            __this_01 = pUVar4;
            if (uVar2 <= uVar6) goto label_040975c2;
            pUVar4 = (UnityEngine_MonoBehaviour_o *)pSVar5->m_Items[(int)uVar6];
            __this_01 = pUVar4;
            if (pUVar4 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar4,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                       (MethodInfo *)0x0);
            uVar6 = uVar6 + 1;
            uVar2 = (uint)pSVar5->max_length;
          } while ((int)uVar6 < (int)uVar2);
        }
        return;
      }
    }
  }
label_040975bd:
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// Map.CustomPhysicsMaterial$$get_StaticFriction
// il2cpp: float Map_CustomPhysicsMaterial__get_StaticFriction (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x4097370

float Map_CustomPhysicsMaterial__get_StaticFriction(Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint uVar2;
  bool_conflict bVar3;
  UnityEngine_MonoBehaviour_c *__this_00;
  UnityEngine_MonoBehaviour_o *pUVar4;
  System_Object_array *pSVar5;
  uint uVar6;
  UnityEngine_PhysicMaterial_o *pUVar7;
  UnityEngine_MonoBehaviour_o *__this_01;
  float fVar8;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  
  pUVar7 = (__this->fields)._material;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    fVar8 = UnityEngine_PhysicMaterial__get_staticFriction(pUVar7,(MethodInfo *)0x0);
    return fVar8;
  }
  fVar8 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_staticFriction(pUVar7,fVar8,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    fVar8 = UnityEngine_PhysicMaterial__get_dynamicFriction(pUVar7,(MethodInfo *)0x0);
    return fVar8;
  }
  fVar8 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_dynamicFriction(pUVar7,fVar8,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_frictionCombine(pUVar7,(MethodInfo *)0x0);
    return extraout_XMM0_Da_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_frictionCombine(pUVar7,(int32_t)method,(MethodInfo *)0x0);
    return extraout_XMM0_Da_02;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_bounceCombine(pUVar7,(MethodInfo *)0x0);
    return extraout_XMM0_Da_03;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = pUVar7[1].monitor;
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_01,(int32_t)method,(MethodInfo *)0x0);
    return extraout_XMM0_Da_04;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac451 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)__this_00,(MethodInfo *)0x0);
  pUVar1 = __this_01 + 1;
  __this_01[1].klass = __this_00;
  il2cpp_runtime_helper_022b4080(pUVar1);
  pUVar4 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)method == '\0') {
      pUVar4 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pUVar4;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return extraout_XMM0_Da_07;
      }
      if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar4,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return extraout_XMM0_Da_08;
      }
    }
    else {
      pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_01 = pUVar4;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar2 = (uint)pSVar5->max_length;
        fVar8 = extraout_XMM0_Da_05;
        if (0 < (int)uVar2) {
          uVar6 = 0;
          do {
            __this_01 = pUVar4;
            if (uVar2 <= uVar6) goto label_040975c2;
            pUVar4 = (UnityEngine_MonoBehaviour_o *)pSVar5->m_Items[(int)uVar6];
            __this_01 = pUVar4;
            if (pUVar4 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar4,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                       (MethodInfo *)0x0);
            uVar6 = uVar6 + 1;
            uVar2 = (uint)pSVar5->max_length;
            fVar8 = extraout_XMM0_Da_06;
          } while ((int)uVar6 < (int)uVar2);
        }
        return fVar8;
      }
    }
  }
label_040975bd:
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_XMM0_Da_09;
}


// Map.CustomPhysicsMaterial$$set_StaticFriction
// il2cpp: void Map_CustomPhysicsMaterial__set_StaticFriction (Map_CustomPhysicsMaterial_o* __this, float value, const MethodInfo* method);
// 0x4097390

void Map_CustomPhysicsMaterial__set_StaticFriction
               (Map_CustomPhysicsMaterial_o *__this,float value,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint uVar2;
  bool_conflict bVar3;
  UnityEngine_MonoBehaviour_c *__this_00;
  UnityEngine_MonoBehaviour_o *pUVar4;
  System_Object_array *pSVar5;
  uint uVar6;
  UnityEngine_PhysicMaterial_o *pUVar7;
  UnityEngine_MonoBehaviour_o *__this_01;
  float value_00;
  
  pUVar7 = (__this->fields)._material;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_staticFriction(pUVar7,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_dynamicFriction(pUVar7,(MethodInfo *)0x0);
    return;
  }
  value_00 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_dynamicFriction(pUVar7,value_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_frictionCombine(pUVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_frictionCombine(pUVar7,(int32_t)method,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_bounceCombine(pUVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = pUVar7[1].monitor;
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_01,(int32_t)method,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac451 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)__this_00,(MethodInfo *)0x0);
  pUVar1 = __this_01 + 1;
  __this_01[1].klass = __this_00;
  il2cpp_runtime_helper_022b4080(pUVar1);
  pUVar4 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)method == '\0') {
      pUVar4 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pUVar4;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar4,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_01 = pUVar4;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar2 = (uint)pSVar5->max_length;
        if (0 < (int)uVar2) {
          uVar6 = 0;
          do {
            __this_01 = pUVar4;
            if (uVar2 <= uVar6) goto label_040975c2;
            pUVar4 = (UnityEngine_MonoBehaviour_o *)pSVar5->m_Items[(int)uVar6];
            __this_01 = pUVar4;
            if (pUVar4 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar4,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                       (MethodInfo *)0x0);
            uVar6 = uVar6 + 1;
            uVar2 = (uint)pSVar5->max_length;
          } while ((int)uVar6 < (int)uVar2);
        }
        return;
      }
    }
  }
label_040975bd:
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// Map.CustomPhysicsMaterial$$get_DynamicFriction
// il2cpp: float Map_CustomPhysicsMaterial__get_DynamicFriction (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x40973b0

float Map_CustomPhysicsMaterial__get_DynamicFriction(Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint uVar2;
  bool_conflict bVar3;
  UnityEngine_MonoBehaviour_c *__this_00;
  UnityEngine_MonoBehaviour_o *pUVar4;
  System_Object_array *pSVar5;
  uint uVar6;
  UnityEngine_PhysicMaterial_o *pUVar7;
  UnityEngine_MonoBehaviour_o *__this_01;
  float fVar8;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  
  pUVar7 = (__this->fields)._material;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    fVar8 = UnityEngine_PhysicMaterial__get_dynamicFriction(pUVar7,(MethodInfo *)0x0);
    return fVar8;
  }
  fVar8 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_dynamicFriction(pUVar7,fVar8,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_frictionCombine(pUVar7,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_frictionCombine(pUVar7,(int32_t)method,(MethodInfo *)0x0);
    return extraout_XMM0_Da_01;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_bounceCombine(pUVar7,(MethodInfo *)0x0);
    return extraout_XMM0_Da_02;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = pUVar7[1].monitor;
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_01,(int32_t)method,(MethodInfo *)0x0);
    return extraout_XMM0_Da_03;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac451 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)__this_00,(MethodInfo *)0x0);
  pUVar1 = __this_01 + 1;
  __this_01[1].klass = __this_00;
  il2cpp_runtime_helper_022b4080(pUVar1);
  pUVar4 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)method == '\0') {
      pUVar4 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pUVar4;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return extraout_XMM0_Da_06;
      }
      if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar4,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return extraout_XMM0_Da_07;
      }
    }
    else {
      pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_01 = pUVar4;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar2 = (uint)pSVar5->max_length;
        fVar8 = extraout_XMM0_Da_04;
        if (0 < (int)uVar2) {
          uVar6 = 0;
          do {
            __this_01 = pUVar4;
            if (uVar2 <= uVar6) goto label_040975c2;
            pUVar4 = (UnityEngine_MonoBehaviour_o *)pSVar5->m_Items[(int)uVar6];
            __this_01 = pUVar4;
            if (pUVar4 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar4,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                       (MethodInfo *)0x0);
            uVar6 = uVar6 + 1;
            uVar2 = (uint)pSVar5->max_length;
            fVar8 = extraout_XMM0_Da_05;
          } while ((int)uVar6 < (int)uVar2);
        }
        return fVar8;
      }
    }
  }
label_040975bd:
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_XMM0_Da_08;
}


// Map.CustomPhysicsMaterial$$set_DynamicFriction
// il2cpp: void Map_CustomPhysicsMaterial__set_DynamicFriction (Map_CustomPhysicsMaterial_o* __this, float value, const MethodInfo* method);
// 0x40973d0

void Map_CustomPhysicsMaterial__set_DynamicFriction
               (Map_CustomPhysicsMaterial_o *__this,float value,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint uVar2;
  bool_conflict bVar3;
  UnityEngine_MonoBehaviour_c *__this_00;
  UnityEngine_MonoBehaviour_o *pUVar4;
  System_Object_array *pSVar5;
  uint uVar6;
  UnityEngine_PhysicMaterial_o *pUVar7;
  UnityEngine_MonoBehaviour_o *__this_01;
  
  pUVar7 = (__this->fields)._material;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_dynamicFriction(pUVar7,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_frictionCombine(pUVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_frictionCombine(pUVar7,(int32_t)method,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar7 = pUVar7[1].monitor;
  if (pUVar7 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_bounceCombine(pUVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = pUVar7[1].monitor;
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_01,(int32_t)method,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac451 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)__this_00,(MethodInfo *)0x0);
  pUVar1 = __this_01 + 1;
  __this_01[1].klass = __this_00;
  il2cpp_runtime_helper_022b4080(pUVar1);
  pUVar4 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)method == '\0') {
      pUVar4 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pUVar4;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar4,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_01 = pUVar4;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar2 = (uint)pSVar5->max_length;
        if (0 < (int)uVar2) {
          uVar6 = 0;
          do {
            __this_01 = pUVar4;
            if (uVar2 <= uVar6) goto label_040975c2;
            pUVar4 = (UnityEngine_MonoBehaviour_o *)pSVar5->m_Items[(int)uVar6];
            __this_01 = pUVar4;
            if (pUVar4 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar4,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                       (MethodInfo *)0x0);
            uVar6 = uVar6 + 1;
            uVar2 = (uint)pSVar5->max_length;
          } while ((int)uVar6 < (int)uVar2);
        }
        return;
      }
    }
  }
label_040975bd:
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// Map.CustomPhysicsMaterial$$get_FrictionCombine
// il2cpp: int32_t Map_CustomPhysicsMaterial__get_FrictionCombine (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x40973f0

int32_t Map_CustomPhysicsMaterial__get_FrictionCombine(Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  int32_t iVar2;
  int32_t extraout_EAX;
  int32_t extraout_EAX_00;
  bool_conflict bVar3;
  int32_t extraout_EAX_01;
  uint uVar4;
  int32_t extraout_EAX_02;
  UnityEngine_MonoBehaviour_c *__this_00;
  UnityEngine_MonoBehaviour_o *pUVar5;
  System_Object_array *pSVar6;
  uint uVar7;
  UnityEngine_PhysicMaterial_o *pUVar8;
  UnityEngine_MonoBehaviour_o *__this_01;
  
  pUVar8 = (__this->fields)._material;
  if (pUVar8 != (UnityEngine_PhysicMaterial_o *)0x0) {
    iVar2 = UnityEngine_PhysicMaterial__get_frictionCombine(pUVar8,(MethodInfo *)0x0);
    return iVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = pUVar8[1].monitor;
  if (pUVar8 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_frictionCombine(pUVar8,(int32_t)method,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = pUVar8[1].monitor;
  if (pUVar8 != (UnityEngine_PhysicMaterial_o *)0x0) {
    iVar2 = UnityEngine_PhysicMaterial__get_bounceCombine(pUVar8,(MethodInfo *)0x0);
    return iVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = pUVar8[1].monitor;
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_01,(int32_t)method,(MethodInfo *)0x0);
    return extraout_EAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac451 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)__this_00,(MethodInfo *)0x0);
  pUVar1 = __this_01 + 1;
  __this_01[1].klass = __this_00;
  il2cpp_runtime_helper_022b4080(pUVar1);
  pUVar5 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)method == '\0') {
      pUVar5 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pUVar5;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return bVar3;
      }
      if (pUVar5 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar5,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return extraout_EAX_01;
      }
    }
    else {
      pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_01 = pUVar5;
      if (pSVar6 != (System_Object_array *)0x0) {
        uVar4 = (uint)pSVar6->max_length;
        if (0 < (int)uVar4) {
          uVar7 = 0;
          do {
            __this_01 = pUVar5;
            if (uVar4 <= uVar7) goto label_040975c2;
            pUVar5 = (UnityEngine_MonoBehaviour_o *)pSVar6->m_Items[(int)uVar7];
            __this_01 = pUVar5;
            if (pUVar5 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar5,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                       (MethodInfo *)0x0);
            uVar7 = uVar7 + 1;
            uVar4 = (uint)pSVar6->max_length;
          } while ((int)uVar7 < (int)uVar4);
        }
        return uVar4;
      }
    }
  }
label_040975bd:
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_EAX_02;
}


// Map.CustomPhysicsMaterial$$set_FrictionCombine
// il2cpp: void Map_CustomPhysicsMaterial__set_FrictionCombine (Map_CustomPhysicsMaterial_o* __this, int32_t value, const MethodInfo* method);
// 0x4097410

void Map_CustomPhysicsMaterial__set_FrictionCombine
               (Map_CustomPhysicsMaterial_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint uVar2;
  bool_conflict bVar3;
  UnityEngine_MonoBehaviour_c *__this_00;
  UnityEngine_MonoBehaviour_o *pUVar4;
  System_Object_array *pSVar5;
  uint uVar6;
  ulong uVar7;
  UnityEngine_PhysicMaterial_o *pUVar8;
  UnityEngine_MonoBehaviour_o *__this_01;
  
  uVar7 = (ulong)(uint)value;
  pUVar8 = (__this->fields)._material;
  if (pUVar8 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__set_frictionCombine(pUVar8,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar8 = pUVar8[1].monitor;
  if (pUVar8 != (UnityEngine_PhysicMaterial_o *)0x0) {
    UnityEngine_PhysicMaterial__get_bounceCombine(pUVar8,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = pUVar8[1].monitor;
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_01,(int32_t)uVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac451 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)__this_00,(MethodInfo *)0x0);
  pUVar1 = __this_01 + 1;
  __this_01[1].klass = __this_00;
  il2cpp_runtime_helper_022b4080(pUVar1);
  pUVar4 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)uVar7 == '\0') {
      pUVar4 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pUVar4;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar4,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_01 = pUVar4;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar2 = (uint)pSVar5->max_length;
        if (0 < (int)uVar2) {
          uVar6 = 0;
          do {
            __this_01 = pUVar4;
            if (uVar2 <= uVar6) goto label_040975c2;
            pUVar4 = (UnityEngine_MonoBehaviour_o *)pSVar5->m_Items[(int)uVar6];
            __this_01 = pUVar4;
            if (pUVar4 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar4,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                       (MethodInfo *)0x0);
            uVar6 = uVar6 + 1;
            uVar2 = (uint)pSVar5->max_length;
          } while ((int)uVar6 < (int)uVar2);
        }
        return;
      }
    }
  }
label_040975bd:
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// Map.CustomPhysicsMaterial$$get_BounceCombine
// il2cpp: int32_t Map_CustomPhysicsMaterial__get_BounceCombine (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x4097430

int32_t Map_CustomPhysicsMaterial__get_BounceCombine(Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  int32_t iVar2;
  int32_t extraout_EAX;
  bool_conflict bVar3;
  int32_t extraout_EAX_00;
  uint uVar4;
  int32_t extraout_EAX_01;
  UnityEngine_MonoBehaviour_c *__this_00;
  UnityEngine_MonoBehaviour_o *pUVar5;
  System_Object_array *pSVar6;
  uint uVar7;
  UnityEngine_PhysicMaterial_o *__this_01;
  UnityEngine_MonoBehaviour_o *__this_02;
  
  __this_01 = (__this->fields)._material;
  if (__this_01 != (UnityEngine_PhysicMaterial_o *)0x0) {
    iVar2 = UnityEngine_PhysicMaterial__get_bounceCombine(__this_01,(MethodInfo *)0x0);
    return iVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02 = __this_01[1].monitor;
  if (__this_02 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_02,(int32_t)method,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac451 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)__this_00,(MethodInfo *)0x0);
  pUVar1 = __this_02 + 1;
  __this_02[1].klass = __this_00;
  il2cpp_runtime_helper_022b4080(pUVar1);
  pUVar5 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if ((char)method == '\0') {
      pUVar5 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_02 = pUVar5;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return bVar3;
      }
      if (pUVar5 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar5,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return extraout_EAX_00;
      }
    }
    else {
      pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar5,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_02 = pUVar5;
      if (pSVar6 != (System_Object_array *)0x0) {
        uVar4 = (uint)pSVar6->max_length;
        if (0 < (int)uVar4) {
          uVar7 = 0;
          do {
            __this_02 = pUVar5;
            if (uVar4 <= uVar7) goto label_040975c2;
            pUVar5 = (UnityEngine_MonoBehaviour_o *)pSVar6->m_Items[(int)uVar7];
            __this_02 = pUVar5;
            if (pUVar5 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar5,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                       (MethodInfo *)0x0);
            uVar7 = uVar7 + 1;
            uVar4 = (uint)pSVar6->max_length;
          } while ((int)uVar7 < (int)uVar4);
        }
        return uVar4;
      }
    }
  }
label_040975bd:
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_02,(MethodInfo *)0x0);
  return extraout_EAX_01;
}


// Map.CustomPhysicsMaterial$$set_BounceCombine
// il2cpp: void Map_CustomPhysicsMaterial__set_BounceCombine (Map_CustomPhysicsMaterial_o* __this, int32_t value, const MethodInfo* method);
// 0x4097450

void Map_CustomPhysicsMaterial__set_BounceCombine
               (Map_CustomPhysicsMaterial_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *pUVar1;
  uint uVar2;
  bool_conflict bVar3;
  UnityEngine_MonoBehaviour_c *__this_00;
  UnityEngine_MonoBehaviour_o *pUVar4;
  System_Object_array *pSVar5;
  uint uVar6;
  char cVar7;
  UnityEngine_MonoBehaviour_o *__this_01;
  
  cVar7 = (char)value;
  __this_01 = (UnityEngine_MonoBehaviour_o *)(__this->fields)._material;
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_PhysicMaterial__set_bounceCombine
              ((UnityEngine_PhysicMaterial_o *)__this_01,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac451 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  UnityEngine_PhysicMaterial___ctor((UnityEngine_PhysicMaterial_o *)__this_00,(MethodInfo *)0x0);
  pUVar1 = __this_01 + 1;
  __this_01[1].klass = __this_00;
  il2cpp_runtime_helper_022b4080(pUVar1);
  pUVar4 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (cVar7 == '\0') {
      pUVar4 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pUVar4;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
        UnityEngine_Collider__set_material
                  ((UnityEngine_Collider_o *)pUVar4,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pUVar4,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this_01 = pUVar4;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar2 = (uint)pSVar5->max_length;
        if (0 < (int)uVar2) {
          uVar6 = 0;
          do {
            __this_01 = pUVar4;
            if (uVar2 <= uVar6) goto label_040975c2;
            pUVar4 = (UnityEngine_MonoBehaviour_o *)pSVar5->m_Items[(int)uVar6];
            __this_01 = pUVar4;
            if (pUVar4 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_040975bd;
            UnityEngine_Collider__set_material
                      ((UnityEngine_Collider_o *)pUVar4,(UnityEngine_PhysicMaterial_o *)pUVar1->klass,
                       (MethodInfo *)0x0);
            uVar6 = uVar6 + 1;
            uVar2 = (uint)pSVar5->max_length;
          } while ((int)uVar6 < (int)uVar2);
        }
        return;
      }
    }
  }
label_040975bd:
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// Map.CustomPhysicsMaterial$$Setup
// il2cpp: void Map_CustomPhysicsMaterial__Setup (Map_CustomPhysicsMaterial_o* __this, bool allChildColliders, const MethodInfo* method);
// 0x4097470

void Map_CustomPhysicsMaterial__Setup
               (Map_CustomPhysicsMaterial_o *__this,bool_conflict allChildColliders,MethodInfo *method)

{
  UnityEngine_PhysicMaterial_o **ppUVar1;
  uint uVar2;
  bool_conflict bVar3;
  UnityEngine_PhysicMaterial_o *__this_00;
  Map_CustomPhysicsMaterial_o *pMVar4;
  System_Object_array *pSVar5;
  uint uVar6;
  
  if (g_data_057ac451 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicMaterial);
    g_data_057ac451 = '\x01';
  }
  __this_00 = (UnityEngine_PhysicMaterial_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PhysicMaterial);
  UnityEngine_PhysicMaterial___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields)._material;
  (__this->fields)._material = __this_00;
  il2cpp_runtime_helper_022b4080(ppUVar1);
  pMVar4 = (Map_CustomPhysicsMaterial_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pMVar4 != (Map_CustomPhysicsMaterial_o *)0x0) {
    if ((char)allChildColliders == '\0') {
      pMVar4 = (Map_CustomPhysicsMaterial_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         ((UnityEngine_GameObject_o *)pMVar4,MethodInfo_Collider_GetComponentInChildren_Collider);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = pMVar4;
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pMVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      if (pMVar4 != (Map_CustomPhysicsMaterial_o *)0x0) {
        UnityEngine_Collider__set_material((UnityEngine_Collider_o *)pMVar4,*ppUVar1,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                         ((UnityEngine_GameObject_o *)pMVar4,MethodInfo_Collider_GetComponentsInChildren_Collider);
      __this = pMVar4;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar2 = (uint)pSVar5->max_length;
        if (0 < (int)uVar2) {
          uVar6 = 0;
          do {
            __this = pMVar4;
            if (uVar2 <= uVar6) goto label_040975c2;
            pMVar4 = (Map_CustomPhysicsMaterial_o *)pSVar5->m_Items[(int)uVar6];
            __this = pMVar4;
            if (pMVar4 == (Map_CustomPhysicsMaterial_o *)0x0) goto label_040975bd;
            UnityEngine_Collider__set_material((UnityEngine_Collider_o *)pMVar4,*ppUVar1,(MethodInfo *)0x0);
            uVar6 = uVar6 + 1;
            uVar2 = (uint)pSVar5->max_length;
          } while ((int)uVar6 < (int)uVar2);
        }
        return;
      }
    }
  }
label_040975bd:
  il2cpp_runtime_helper_022b2c90();
label_040975c2:
  il2cpp_runtime_helper_022b2ca0();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.CustomPhysicsMaterial$$.ctor
// il2cpp: void Map_CustomPhysicsMaterial___ctor (Map_CustomPhysicsMaterial_o* __this, const MethodInfo* method);
// 0x40975d0

void Map_CustomPhysicsMaterial___ctor(Map_CustomPhysicsMaterial_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


