// Type: WaterEffect
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/WaterEffect.cs
// Prior real C# source (older reference): Assets/Scripts/Effects/WaterEffect.cs
// --------------------------------

// WaterEffect$$Start
// il2cpp: void WaterEffect__Start (WaterEffect_o* __this, const MethodInfo* method);
// 0x181db1ac0

void WaterEffect__Start(WaterEffect_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  PostProcessingManager_o *pPVar2;
  UnityEngine_BoxCollider_o *value;
  
  if (Il2CppMethodInitialized_1843448ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Object_FindFirstObjectByType_PostProcessingManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Unsupported Object for Water Effect (must have box collider).");
    Il2CppMethodInitialized_1843448ac = '\x01';
  }
  pPVar2 = (__this->fields)._postProcessingManager;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pPVar2 = UnityEngine_Object__FindFirstObjectByType_object_
                       ((MethodInfo_744E60 *)
                        MethodInfo_UnityEngine_Object_FindFirstObjectByType_PostProcessingManager);
    (__this->fields)._postProcessingManager = pPVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._postProcessingManager,pPVar2);
  }
  value = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)__this,
                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BoxCollider);
  (__this->fields)._boxCollider = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._boxCollider,value);
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
  }
  return;
}


// WaterEffect$$IsInsideBounds
// il2cpp: bool WaterEffect__IsInsideBounds (WaterEffect_o* __this, UnityEngine_Vector3_o worldPos, UnityEngine_BoxCollider_o* bc, const MethodInfo* method);
// 0x181db18f0

bool WaterEffect__IsInsideBounds
               (WaterEffect_o *__this,UnityEngine_Vector3_o *worldPos,UnityEngine_BoxCollider_o *bc,
               MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector3_o local_78 [9];
  
  if (bc != (UnityEngine_BoxCollider_o *)0x0) {
    __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)bc,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      local_88.z = (worldPos->fields).z;
      local_88.x = (worldPos->fields).x;
      local_88.y = (worldPos->fields).y;
      pUVar3 = UnityEngine_Transform__InverseTransformPoint
                         (local_78,__this_00,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
      fVar7 = (pUVar3->fields).x;
      fVar8 = (pUVar3->fields).y;
      fVar9 = (pUVar3->fields).z;
      pUVar3 = UnityEngine_BoxCollider__get_center(local_78,bc,(MethodInfo *)0x0);
      fVar5 = (pUVar3->fields).x;
      fVar6 = (pUVar3->fields).y;
      fVar4 = (pUVar3->fields).z;
      pUVar3 = UnityEngine_BoxCollider__get_size(local_78,bc,(MethodInfo *)0x0);
      fVar7 = (pUVar3->fields).x * 0.5 + (fVar7 - fVar5);
      fVar8 = (pUVar3->fields).y * 0.5 + (fVar8 - fVar6);
      fVar9 = (pUVar3->fields).z * 0.5 + (fVar9 - fVar4);
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar5 = (pUVar2->zeroVector).fields.x;
      if (fVar5 <= fVar7) {
        fVar5 = fVar7;
      }
      fVar6 = (pUVar2->zeroVector).fields.y;
      if (fVar6 <= fVar8) {
        fVar6 = fVar8;
      }
      fVar4 = (pUVar2->zeroVector).fields.z;
      if (fVar4 <= fVar9) {
        fVar4 = fVar9;
      }
      pUVar3 = UnityEngine_BoxCollider__get_size(local_78,bc,(MethodInfo *)0x0);
      fVar1 = (pUVar3->fields).x;
      if (fVar1 <= fVar7) {
        fVar7 = fVar1;
      }
      fVar1 = (pUVar3->fields).y;
      if (fVar1 <= fVar8) {
        fVar8 = fVar1;
      }
      fVar1 = (pUVar3->fields).z;
      if (fVar1 <= fVar9) {
        fVar9 = fVar1;
      }
      return (fVar6 - fVar8) * (fVar6 - fVar8) + (fVar5 - fVar7) * (fVar5 - fVar7) +
             (fVar4 - fVar9) * (fVar4 - fVar9) < 9.9999994e-11;
    }
  }
  ThrowNullReferenceException();
}


// WaterEffect$$FixedUpdate
// il2cpp: void WaterEffect__FixedUpdate (WaterEffect_o* __this, const MethodInfo* method);
// 0x181db1660
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181db18c3: mov rsi, qword ptr [rsp + 0xb0]
// asm:   0x181db18cb: movaps xmm6, xmmword ptr [rsp + 0x90]

void WaterEffect__FixedUpdate(WaterEffect_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  PostProcessingManager_o *pPVar3;
  Cameras_BaseCamera_o *pCVar4;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Component_o *__this_01;
  UnityEngine_Vector3_StaticFields *pUVar5;
  bool bVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector3_o local_78 [9];
  
  if (Il2CppMethodInitialized_1843448ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_1843448ad = '\x01';
  }
  pPVar3 = (__this->fields)._postProcessingManager;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  pCVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (((pCVar4 != (Cameras_BaseCamera_o *)0x0) &&
      (__this_00 = (pCVar4->fields).Camera, __this_00 != (UnityEngine_Camera_o *)0x0)) &&
     (pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar7 != (UnityEngine_Transform_o *)0x0)) {
    pUVar8 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_88,pUVar7,(MethodInfo *)0x0);
    __this_01 = (UnityEngine_Component_o *)(__this->fields)._boxCollider;
    if (__this_01 != (UnityEngine_Component_o *)0x0) {
      uVar2._0_4_ = (pUVar8->fields).x;
      uVar2._4_4_ = (pUVar8->fields).y;
      fVar12 = (pUVar8->fields).z;
      pUVar7 = UnityEngine_Component__get_transform(__this_01,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        local_88._0_8_ = uVar2;
        local_88.z = fVar12;
        pUVar8 = UnityEngine_Transform__InverseTransformPoint
                           (local_78,pUVar7,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
        fVar12 = (pUVar8->fields).x;
        fVar13 = (pUVar8->fields).y;
        fVar14 = (pUVar8->fields).z;
        pUVar8 = UnityEngine_BoxCollider__get_center
                           (local_78,(UnityEngine_BoxCollider_o *)__this_01,(MethodInfo *)0x0);
        fVar10 = (pUVar8->fields).x;
        fVar11 = (pUVar8->fields).y;
        fVar9 = (pUVar8->fields).z;
        pUVar8 = UnityEngine_BoxCollider__get_size
                           (local_78,(UnityEngine_BoxCollider_o *)__this_01,(MethodInfo *)0x0);
        fVar12 = (pUVar8->fields).x * 0.5 + (fVar12 - fVar10);
        fVar13 = (pUVar8->fields).y * 0.5 + (fVar13 - fVar11);
        fVar14 = (pUVar8->fields).z * 0.5 + (fVar14 - fVar9);
        if (Il2CppMethodInitialized_18433dbea == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433dbea = '\x01';
        }
        pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar10 = (pUVar5->zeroVector).fields.x;
        if (fVar10 <= fVar12) {
          fVar10 = fVar12;
        }
        fVar11 = (pUVar5->zeroVector).fields.y;
        if (fVar11 <= fVar13) {
          fVar11 = fVar13;
        }
        fVar9 = (pUVar5->zeroVector).fields.z;
        if (fVar9 <= fVar14) {
          fVar9 = fVar14;
        }
        pUVar8 = UnityEngine_BoxCollider__get_size
                           (local_78,(UnityEngine_BoxCollider_o *)__this_01,(MethodInfo *)0x0);
        fVar1 = (pUVar8->fields).x;
        if (fVar1 <= fVar12) {
          fVar12 = fVar1;
        }
        fVar1 = (pUVar8->fields).y;
        if (fVar1 <= fVar13) {
          fVar13 = fVar1;
        }
        fVar1 = (pUVar8->fields).z;
        if (fVar1 <= fVar14) {
          fVar14 = fVar1;
        }
        if ((fVar11 - fVar13) * (fVar11 - fVar13) + (fVar10 - fVar12) * (fVar10 - fVar12) +
            (fVar9 - fVar14) * (fVar9 - fVar14) < 9.9999994e-11) {
          pPVar3 = (__this->fields)._postProcessingManager;
          if (pPVar3 == (PostProcessingManager_o *)0x0) goto label_181db18e4;
          (pPVar3->fields).InsideWater = true;
        }
        return;
      }
    }
  }
label_181db18e4:
  ThrowNullReferenceException();
}


// WaterEffect$$.ctor
// il2cpp: void WaterEffect___ctor (WaterEffect_o* __this, const MethodInfo* method);
// 0x180528540

void
WaterEffect___ctor(WaterEffect_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


