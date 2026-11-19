// Type: WaterEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/WaterEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Effects/WaterEffect.cs
// --------------------------------

// WaterEffect$$Start
// il2cpp: void WaterEffect__Start (WaterEffect_o* __this, const MethodInfo* method);
// 0x5845da0

void WaterEffect__Start(WaterEffect_o *__this,MethodInfo *method)

{
  PostProcessingManager_o **targetAddress;
  UnityEngine_Object_o *x;
  bool bVar1;
  PostProcessingManager_o *pPVar2;
  UnityEngine_BoxCollider_o *pUVar3;
  
  if (Il2CppMethodInitialized_07544ffd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Object_FindFirstObjectByType_PostProcessingManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Unsupported Object for Water Effect (must have box collider).");
    Il2CppMethodInitialized_07544ffd = '\x01';
  }
  pPVar2 = (__this->fields)._postProcessingManager;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    targetAddress = &(__this->fields)._postProcessingManager;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pPVar2 = UnityEngine_Object__FindFirstObjectByType_object_
                       ((MethodInfo_35A3BB0 *)
                        MethodInfo_UnityEngine_Object_FindFirstObjectByType_PostProcessingManager);
    *targetAddress = pPVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  pUVar3 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BoxCollider);
  (__this->fields)._boxCollider = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._boxCollider);
  x = (UnityEngine_Object_o *)(__this->fields)._boxCollider;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__Log((Il2CppObject *)"Unsupported Object for Water Effect (must have box collider).",(MethodInfo *)0x0);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,false,(MethodInfo *)0x0);
    return;
  }
  return;
}


// WaterEffect$$IsInsideBounds
// il2cpp: bool WaterEffect__IsInsideBounds (WaterEffect_o* __this, UnityEngine_Vector3_o worldPos, UnityEngine_BoxCollider_o* bc, const MethodInfo* method);
// 0x5845ef0

bool WaterEffect__IsInsideBounds
               (WaterEffect_o *__this,UnityEngine_Vector3_o worldPos,UnityEngine_BoxCollider_o *bc,
               MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  UnityEngine_Transform_o *__this_00;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar14;
  undefined1 auVar13 [16];
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o UVar18;
  float local_a8;
  float fStack_a4;
  float local_98;
  float fStack_94;
  float local_88;
  undefined4 local_48;
  
  if (bc != (UnityEngine_BoxCollider_o *)0x0) {
    __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)bc,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      fVar7 = 0.0;
      UVar15 = UnityEngine_Transform__InverseTransformPoint(__this_00,worldPos,(MethodInfo *)0x0);
      fVar12 = fVar7;
      UVar16 = UnityEngine_BoxCollider__get_center(bc,(MethodInfo *)0x0);
      fVar14 = fVar12;
      UVar17 = UnityEngine_BoxCollider__get_size(bc,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      fStack_94 = UVar15.fields.y;
      fStack_a4 = UVar16.fields.y;
      fVar9 = UVar17.fields.y * 0.5 + (fStack_94 - fStack_a4);
      pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar2 = (pUVar4->zeroVector).fields.x;
      uVar3 = (pUVar4->zeroVector).fields.y;
      fVar6 = (float)uVar3;
      if ((float)uVar3 <= fVar9) {
        fVar6 = fVar9;
      }
      fVar1 = (pUVar4->zeroVector).fields.z;
      uVar8 = 0;
      UVar18 = UnityEngine_BoxCollider__get_size(bc,(MethodInfo *)0x0);
      fVar5 = UVar18.fields.y;
      if (fVar5 <= fVar9) {
        fVar9 = fVar5;
      }
      local_98 = UVar15.fields.x;
      local_a8 = UVar16.fields.x;
      local_88 = UVar17.fields.x;
      auVar10._0_4_ = UVar17.fields.z * 0.5 + (UVar15.fields.z - UVar16.fields.z);
      auVar10._4_4_ = local_88 * 0.5 + (local_98 - local_a8);
      auVar10._8_4_ = fVar14 * 0.0 + (fVar7 - fVar12);
      auVar10._12_4_ = UVar17.fields.y * 0.0 + (fStack_94 - fStack_a4);
      auVar13._4_4_ = uVar2;
      auVar13._0_4_ = fVar1;
      auVar13._8_4_ = 0;
      auVar13._12_4_ = uVar3;
      auVar13 = maxps(auVar13,auVar10);
      auVar11._4_4_ = UVar18.fields.x;
      auVar11._0_4_ = UVar18.fields.z;
      auVar11._8_4_ = uVar8;
      auVar11._12_4_ = fVar5;
      auVar11 = minps(auVar10,auVar11);
      fVar12 = auVar13._0_4_ - auVar11._0_4_;
      fVar14 = auVar13._4_4_ - auVar11._4_4_;
      return fVar14 * fVar14 + (fVar6 - fVar9) * (fVar6 - fVar9) + fVar12 * fVar12 < 9.9999994e-11;
    }
  }
  ThrowNullReferenceException();
}


// WaterEffect$$FixedUpdate
// il2cpp: void WaterEffect__FixedUpdate (WaterEffect_o* __this, const MethodInfo* method);
// 0x5846080

void WaterEffect__FixedUpdate(WaterEffect_o *__this,MethodInfo *method)

{
  PostProcessingManager_o *pPVar1;
  Cameras_BaseCamera_o *pCVar2;
  UnityEngine_Camera_o *__this_00;
  bool bVar3;
  WaterEffect_o *__this_01;
  MethodInfo *method_00;
  UnityEngine_Vector3_o worldPos;
  
  if (Il2CppMethodInitialized_07544ffe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07544ffe = '\x01';
  }
  pPVar1 = (__this->fields)._postProcessingManager;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pCVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (((pCVar2 == (Cameras_BaseCamera_o *)0x0) ||
      (__this_00 = (pCVar2->fields).Camera, __this_00 == (UnityEngine_Camera_o *)0x0)) ||
     (__this_01 = (WaterEffect_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0)
     , __this_01 == (WaterEffect_o *)0x0)) {
label_05846136:
    ThrowNullReferenceException();
  }
  worldPos = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
  bVar3 = WaterEffect__IsInsideBounds(__this_01,worldPos,(__this->fields)._boxCollider,method_00);
  if (bVar3) {
    pPVar1 = (__this->fields)._postProcessingManager;
    if (pPVar1 == (PostProcessingManager_o *)0x0) goto label_05846136;
    (pPVar1->fields).InsideWater = true;
  }
  return;
}


// WaterEffect$$.ctor
// il2cpp: void WaterEffect___ctor (WaterEffect_o* __this, const MethodInfo* method);
// 0x5846140

void WaterEffect___ctor(WaterEffect_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


