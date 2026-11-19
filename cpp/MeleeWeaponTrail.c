// Type: MeleeWeaponTrail
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/MeleeWeaponTrail.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/MeleeWeaponTrail.cs
// --------------------------------

// MeleeWeaponTrail$$set_Emit
// il2cpp: void MeleeWeaponTrail__set_Emit (MeleeWeaponTrail_o* __this, bool value, const MethodInfo* method);
// 0x584b9a0

void MeleeWeaponTrail__set_Emit(MeleeWeaponTrail_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._emit = value;
  return;
}


// MeleeWeaponTrail$$set_Use
// il2cpp: void MeleeWeaponTrail__set_Use (MeleeWeaponTrail_o* __this, bool value, const MethodInfo* method);
// 0x584b9b0

void MeleeWeaponTrail__set_Use(MeleeWeaponTrail_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._use = value;
  return;
}


// MeleeWeaponTrail$$Start
// il2cpp: void MeleeWeaponTrail__Start (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x584b9c0

void MeleeWeaponTrail__Start(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  UnityEngine_Mesh_o **targetAddress_00;
  UnityEngine_Renderer_o **targetAddress_01;
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Object_o *__this_00;
  UnityEngine_Renderer_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Mesh_o *__this_01;
  System_String_o *pSVar6;
  UnityEngine_MeshFilter_o *__this_02;
  UnityEngine_MeshRenderer_o *pUVar7;
  UnityEngine_Vector3_Fields UVar8;
  
  if (Il2CppMethodInitialized_07545028 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&"TrailMesh");
    il2cpp_codegen_initialize_runtime_metadata(&"Trail");
    Il2CppMethodInitialized_07545028 = '\x01';
  }
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
    UVar8 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
    (__this->fields)._lastPosition.fields = UVar8;
    pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor(pUVar5,"Trail",(MethodInfo *)0x0);
    targetAddress = &(__this->fields)._trailObject;
    (__this->fields)._trailObject = pUVar5;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar5 = (__this->fields)._trailObject;
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_parent(pUVar4,(UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
        if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
          pUVar4 = UnityEngine_GameObject__get_transform(*targetAddress,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e4b6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e4b6 = '\x01';
          }
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_position
                      (pUVar4,(UnityEngine_Vector3_o)
                              (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,
                       (MethodInfo *)0x0);
            if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
              pUVar4 = UnityEngine_GameObject__get_transform(*targetAddress,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_0753e72b == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
                Il2CppMethodInitialized_0753e72b = '\x01';
              }
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__set_rotation
                          (pUVar4,(UnityEngine_Quaternion_o)
                                  *(UnityEngine_Quaternion_Fields *)
                                   TypeInfo_UnityEngine_Quaternion->static_fields,(MethodInfo *)0x0);
                if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
                  pUVar4 = UnityEngine_GameObject__get_transform(*targetAddress,(MethodInfo *)0x0);
                  if (Il2CppMethodInitialized_0753e4b7 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                    Il2CppMethodInitialized_0753e4b7 = '\x01';
                  }
                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_localScale
                              (pUVar4,(UnityEngine_Vector3_o)
                                      (TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields,
                               (MethodInfo *)0x0);
                    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
                    UnityEngine_Mesh___ctor(__this_01,(MethodInfo *)0x0);
                    targetAddress_00 = &(__this->fields)._trailMesh;
                    (__this->fields)._trailMesh = __this_01;
                    Il2CppCodeGenWriteBarrier(targetAddress_00);
                    __this_00 = (UnityEngine_Object_o *)(__this->fields)._trailMesh;
                    pSVar6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
                    pSVar6 = System_String__Concat_52f0320(pSVar6,"TrailMesh",(MethodInfo *)0x0);
                    if (__this_00 != (UnityEngine_Object_o *)0x0) {
                      UnityEngine_Object__set_name(__this_00,pSVar6,(MethodInfo *)0x0);
                      if (*targetAddress_00 != (UnityEngine_Mesh_o *)0x0) {
                        UnityEngine_Mesh__MarkDynamic(*targetAddress_00,(MethodInfo *)0x0);
                        if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
                          __this_02 = UnityEngine_GameObject__AddComponent_object_
                                                (*targetAddress,
                                                 (MethodInfo_353B6A0 *)
                                                 MethodInfo_UnityEngine_GameObject_AddComponent_MeshFilter);
                          if (__this_02 != (UnityEngine_MeshFilter_o *)0x0) {
                            UnityEngine_MeshFilter__set_sharedMesh
                                      (__this_02,*targetAddress_00,(MethodInfo *)0x0);
                            if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
                              pUVar7 = UnityEngine_GameObject__AddComponent_object_
                                                 (*targetAddress,
                                                  (MethodInfo_353B6A0 *)
                                                  MethodInfo_UnityEngine_GameObject_AddComponent_MeshRenderer)
                              ;
                              targetAddress_01 = &(__this->fields)._trailRenderer;
                              (__this->fields)._trailRenderer = (UnityEngine_Renderer_o *)pUVar7;
                              Il2CppCodeGenWriteBarrier(targetAddress_01);
                              pUVar3 = (__this->fields)._trailRenderer;
                              if (pUVar3 != (UnityEngine_Renderer_o *)0x0) {
                                UnityEngine_Renderer__set_sharedMaterial
                                          (pUVar3,(__this->fields)._material,(MethodInfo *)0x0);
                                pUVar3 = (__this->fields)._trailRenderer;
                                if (pUVar3 != (UnityEngine_Renderer_o *)0x0) {
                                  UnityEngine_Renderer__set_shadowCastingMode(pUVar3,0,(MethodInfo *)0x0);
                                  pUVar3 = *targetAddress_01;
                                  if (pUVar3 != (UnityEngine_Renderer_o *)0x0) {
                                    UnityEngine_Renderer__set_receiveShadows(pUVar3,false,(MethodInfo *)0x0);
                                    uVar1 = (__this->fields)._minVertexDistance;
                                    uVar2 = (__this->fields)._maxVertexDistance;
                                    (__this->fields)._minVertexDistanceSqr = (float)uVar1 * (float)uVar1;
                                    (__this->fields)._maxVertexDistanceSqr = (float)uVar2 * (float)uVar2;
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// MeleeWeaponTrail$$OnDestroy
// il2cpp: void MeleeWeaponTrail__OnDestroy (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x584bd20

void MeleeWeaponTrail__OnDestroy(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_07545029 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545029 = '\x01';
  }
  obj = (UnityEngine_Object_o *)(__this->fields)._trailObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)(__this->fields)._trailMesh,(MethodInfo *)0x0);
  return;
}


// MeleeWeaponTrail$$SetMaterial
// il2cpp: void MeleeWeaponTrail__SetMaterial (MeleeWeaponTrail_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x584bd90

void MeleeWeaponTrail__SetMaterial
               (MeleeWeaponTrail_o *__this,UnityEngine_Material_o *material,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Renderer_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_0754502a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754502a = '\x01';
  }
  (__this->fields)._material = material;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._material);
  x = (UnityEngine_Object_o *)(__this->fields)._trailRenderer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._trailRenderer;
    if (__this_00 == (UnityEngine_Renderer_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Renderer__set_sharedMaterial(__this_00,material,(MethodInfo *)0x0);
    return;
  }
  return;
}


// MeleeWeaponTrail$$StopImmediate
// il2cpp: void MeleeWeaponTrail__StopImmediate (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x584be20

void MeleeWeaponTrail__StopImmediate(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pSVar2;
  
  if (Il2CppMethodInitialized_0754502b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_Clear);
    Il2CppMethodInitialized_0754502b = '\x01';
  }
  (__this->fields)._emit = false;
  pSVar2 = (__this->fields)._points;
  if (pSVar2 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar2->fields)._size = 0;
    pSVar2 = (__this->fields)._smoothedPoints;
    if (pSVar2 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar2->fields)._size = 0;
      MeleeWeaponTrail__Update(__this,method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// MeleeWeaponTrail$$Update
// il2cpp: void MeleeWeaponTrail__Update (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x584be80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x584c1b1: jmp 0x584c0ab

void MeleeWeaponTrail__Update(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Cameras_BaseCamera_o *x;
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pSVar4;
  UnityEngine_Mesh_o *__this_00;
  bool bVar5;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Object_o *pUVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar7;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *method_02;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_0754502c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_0754502c = '\x01';
  }
  x = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  if ((__this->fields)._use == false) {
    return;
  }
  pMVar7 = extraout_RDX;
  if ((__this->fields)._emit == false) {
label_0584bf6e:
    pSVar4 = (__this->fields)._points;
    if (pSVar4 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_0584c1b6;
    if (((pSVar4->fields)._size == 0) && ((__this->fields)._autoDestruct != false)) {
      pUVar6 = (UnityEngine_Object_o *)(__this->fields)._trailObject;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        pUVar6 = (UnityEngine_Object_o *)(__this->fields)._trailObject;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar6,(MethodInfo *)0x0);
      }
      pUVar6 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pMVar7 = extraout_RDX_05;
      if (bVar5) {
        pUVar6 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar6,(MethodInfo *)0x0);
        pMVar7 = extraout_RDX_06;
      }
    }
    if ((__this->fields)._emit != false) goto label_0584bf90;
    pSVar4 = (__this->fields)._smoothedPoints;
    if (pSVar4 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_0584c1b6;
    if ((pSVar4->fields)._size == 0) {
      pSVar4 = (__this->fields)._points;
      if (pSVar4 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_0584c1b6;
      if (((pSVar4->fields)._size == 0) && ((__this->fields)._meshHasData == false)) {
        return;
      }
    }
  }
  else {
    fVar9 = (__this->fields)._emitTime;
    if ((fVar9 != 0.0) || (NAN(fVar9))) {
      fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar9 = fVar9 - fVar8;
      (__this->fields)._emitTime = fVar9;
      pMVar7 = extraout_RDX_00;
      if ((fVar9 != 0.0) || (NAN(fVar9))) {
        if (0.0 <= fVar9) {
          if ((__this->fields)._emit != false) goto label_0584bf90;
        }
        else {
          (__this->fields)._emit = false;
        }
      }
      else {
        (__this->fields)._emitTime = -1.0;
        (__this->fields)._emit = false;
      }
      goto label_0584bf6e;
    }
label_0584bf90:
    uVar2 = (__this->fields)._lastPosition.fields.x;
    uVar3 = (__this->fields)._lastPosition.fields.y;
    fVar9 = (__this->fields)._lastPosition.fields.z;
    __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_0584c1b6;
    method_02 = (MethodInfo *)0x0;
    UVar11 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
    fVar8 = (float)uVar3 - UVar11.fields.y;
    fVar9 = fVar9 - UVar11.fields.z;
    fVar10 = (float)uVar2 - UVar11.fields.x;
    fVar9 = fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9;
    pfVar1 = &(__this->fields)._minVertexDistanceSqr;
    pMVar7 = extraout_RDX_01;
    if ((fVar9 < *pfVar1 || fVar9 == *pfVar1) ||
       (bVar5 = MeleeWeaponTrail__ShouldAddPoint(__this,fVar9,method_02), pMVar7 = extraout_RDX_02, !bVar5)) {
      MeleeWeaponTrail__SetLastPosition(__this,(__this->fields)._points,pMVar7);
      MeleeWeaponTrail__SetLastPosition(__this,(__this->fields)._smoothedPoints,method_00);
      pMVar7 = extraout_RDX_04;
    }
    else {
      MeleeWeaponTrail__AddPoint(__this,method_02);
      pMVar7 = extraout_RDX_03;
    }
  }
  MeleeWeaponTrail__RemoveOldPoints(__this,(__this->fields)._points,pMVar7);
  pMVar7 = (MethodInfo *)(__this->fields)._smoothedPoints;
  MeleeWeaponTrail__RemoveOldPoints
            (__this,(System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)pMVar7,method_01);
  pSVar4 = (__this->fields)._smoothedPoints;
  if (pSVar4 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
label_0584c1b6:
    ThrowNullReferenceException();
  }
  if (1 < (pSVar4->fields)._size) {
    MeleeWeaponTrail__RebuildMesh(__this,pMVar7);
    return;
  }
  if ((__this->fields)._meshHasData != false) {
    pUVar6 = (UnityEngine_Object_o *)(__this->fields)._trailMesh;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      __this_00 = (__this->fields)._trailMesh;
      if (__this_00 == (UnityEngine_Mesh_o *)0x0) goto label_0584c1b6;
      UnityEngine_Mesh__Clear(__this_00,(MethodInfo *)0x0);
      (__this->fields)._meshHasData = false;
    }
  }
  return;
}


// MeleeWeaponTrail$$ShouldAddPoint
// il2cpp: bool MeleeWeaponTrail__ShouldAddPoint (MeleeWeaponTrail_o* __this, float distanceSqr, const MethodInfo* method);
// 0x584c1c0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x584c38b: mulss xmm0, xmm6
// asm:   0x584c38f: xorps xmm5, xmm5
// asm:   0x584c392: ucomiss xmm0, xmm5
// asm:   0x584c395: jb 0x584c3e5
// asm:   0x584c3a8: jmp 0x584c47e

bool MeleeWeaponTrail__ShouldAddPoint(MeleeWeaponTrail_o *__this,float distanceSqr,MethodInfo *method)

{
  float *pfVar1;
  int iVar2;
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pSVar3;
  double dVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Il2CppClass *klass;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_78;
  float fStack_74;
  MeleeWeaponTrail_Point_o local_48;
  undefined1 local_28 [8];
  undefined8 uStack_20;
  
  if (Il2CppMethodInitialized_0754502d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
    Il2CppMethodInitialized_0754502d = '\x01';
  }
  pSVar3 = (__this->fields)._points;
  if (pSVar3 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
    iVar2 = (pSVar3->fields)._size;
    bVar8 = true;
    if (iVar2 < 3) {
      return true;
    }
    System_Collections_Generic_List_MeleeWeaponTrail_Point___get_Item
              (&local_48,pSVar3,iVar2 + -2,
               (MethodInfo_3ABD6F0 *)
               MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
    fVar9 = local_48.fields.tipPosition.fields.z;
    pSVar3 = (__this->fields)._points;
    if (pSVar3 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
      local_28._0_4_ = local_48.fields.tipPosition.fields.x;
      local_28._4_4_ = local_48.fields.tipPosition.fields.y;
      uStack_20 = 0;
      System_Collections_Generic_List_MeleeWeaponTrail_Point___get_Item
                (&local_48,pSVar3,(pSVar3->fields)._size + -3,
                 (MethodInfo_3ABD6F0 *)
                 MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
      uVar6 = local_48.fields.tipPosition.fields._0_8_;
      pSVar3 = (__this->fields)._points;
      if (pSVar3 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
        fVar9 = fVar9 - local_48.fields.tipPosition.fields.z;
        System_Collections_Generic_List_MeleeWeaponTrail_Point___get_Item
                  (&local_48,pSVar3,(pSVar3->fields)._size + -1,
                   (MethodInfo_3ABD6F0 *)
                   MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
        fVar11 = local_48.fields.tipPosition.fields.z;
        uVar7 = local_48.fields.tipPosition.fields._0_8_;
        pSVar3 = (__this->fields)._points;
        if (pSVar3 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
          local_78 = (float)uVar6;
          fStack_74 = SUB84(uVar6,4);
          local_28._4_4_ = (float)local_28._4_4_ - fStack_74;
          local_28._0_4_ = (float)local_28._0_4_ - local_78;
          uStack_20 = CONCAT44(uStack_20._4_4_ - 0.0,(float)uStack_20 - 0.0);
          System_Collections_Generic_List_MeleeWeaponTrail_Point___get_Item
                    (&local_48,pSVar3,(pSVar3->fields)._size + -2,
                     (MethodInfo_3ABD6F0 *)
                     MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
          local_78 = (float)uVar7;
          fStack_74 = SUB84(uVar7,4);
          local_78 = local_78 - local_48.fields.tipPosition.fields.x;
          fStack_74 = fStack_74 - local_48.fields.tipPosition.fields.y;
          fVar11 = fVar11 - local_48.fields.tipPosition.fields.z;
          if (Il2CppMethodInitialized_075450a4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            Il2CppMethodInitialized_075450a4 = '\x01';
          }
          fVar10 = fVar9 * fVar9 +
                   (float)local_28._4_4_ * (float)local_28._4_4_ +
                   (float)local_28._0_4_ * (float)local_28._0_4_;
          fVar13 = fVar11 * fVar11 + fStack_74 * fStack_74 + local_78 * local_78;
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          if (0.0 <= fVar10 * fVar13) {
            fVar10 = SQRT(fVar10 * fVar13);
            fVar13 = (float)local_28._0_4_;
            fVar5 = (float)local_28._4_4_;
            klass = (Il2CppClass *)TypeInfo_System_Math;
          }
          else {
            fVar10 = sqrtf(fVar10 * fVar13);
            fVar13 = (float)local_28._0_4_;
            fVar5 = (float)local_28._4_4_;
            klass = (Il2CppClass *)TypeInfo_System_Math;
          }
          fVar12 = 0.0;
          TypeInfo_System_Math = (System_Math_c *)klass;
          if (1e-15 <= fVar10) {
            fVar10 = (fVar9 * fVar11 + fVar5 * fStack_74 + fVar13 * local_78) / fVar10;
            fVar9 = 1.0;
            if (fVar10 <= 1.0) {
              fVar9 = fVar10;
            }
            if ((klass->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(klass);
            }
            dVar4 = acos((double)(float)(~-(uint)(-1.0 <= fVar10) & 0xbf800000 |
                                        (uint)fVar9 & -(uint)(-1.0 <= fVar10)),(MethodInfo *)klass);
            fVar12 = (float)dVar4 * 57.29578;
          }
          pfVar1 = &(__this->fields)._maxAngle;
          if (fVar12 < *pfVar1 || fVar12 == *pfVar1) {
            pfVar1 = &(__this->fields)._maxVertexDistanceSqr;
            bVar8 = *pfVar1 <= distanceSqr && distanceSqr != *pfVar1;
          }
          return bVar8;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// MeleeWeaponTrail$$AddPoint
// il2cpp: void MeleeWeaponTrail__AddPoint (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x584c4b0

void MeleeWeaponTrail__AddPoint(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  MeleeWeaponTrail_Point_o *pMVar2;
  uint uVar3;
  MeleeWeaponTrail_Point_array *pMVar4;
  MeleeWeaponTrail_Point_o item;
  MeleeWeaponTrail_Point_o item_00;
  MeleeWeaponTrail_Point_Fields *pMVar5;
  MethodInfo *pMVar6;
  UnityEngine_Transform_o *pUVar7;
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pSVar8;
  int iVar9;
  MethodInfo *pMVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o UVar15;
  float fStack_54;
  float fStack_50;
  float local_48;
  
  if (Il2CppMethodInitialized_0754502e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Count);
    Il2CppMethodInitialized_0754502e = '\x01';
  }
  pUVar7 = (__this->fields)._base;
  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
    UVar13 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
    fVar12 = UVar13.fields.z;
    pUVar7 = (__this->fields)._tip;
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_0584c730;
    UVar14 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
    fVar11 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    pMVar10 = MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_Add;
    pSVar8 = (__this->fields)._points;
    if (pSVar8 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_0584c730;
    fStack_54 = UVar13.fields.x;
    fStack_50 = UVar13.fields.y;
    local_48 = UVar14.fields.x;
    piVar1 = &(pSVar8->fields)._version;
    *piVar1 = *piVar1 + 1;
    pMVar4 = (pSVar8->fields)._items;
    if (pMVar4 == (MeleeWeaponTrail_Point_array *)0x0) goto label_0584c730;
    uVar3 = (pSVar8->fields)._size;
    if (uVar3 < (uint)pMVar4->max_length) {
      (pSVar8->fields)._size = uVar3 + 1;
      pMVar5 = &pMVar4->m_Items[(int)uVar3].fields;
      *(ulong *)&(pMVar5->basePosition).fields.z = CONCAT44(local_48,fVar12);
      (pMVar5->tipPosition).fields.y = UVar14.fields.y;
      (pMVar5->tipPosition).fields.z = UVar14.fields.z;
      pMVar2 = pMVar4->m_Items + (int)uVar3;
      (pMVar2->fields).timeCreated = fVar11;
      (pMVar2->fields).basePosition.fields.x = fStack_54;
      (pMVar2->fields).basePosition.fields.y = UVar13.fields.y;
      (pMVar2->fields).basePosition.fields.z = UVar13.fields.z;
    }
    else {
      item.fields.basePosition.fields.x = fStack_54;
      item.fields.timeCreated = fVar11;
      item.fields.basePosition.fields.y = fStack_50;
      item.fields.basePosition.fields.z = fVar12;
      item.fields.tipPosition.fields.x = local_48;
      item.fields.tipPosition.fields.y = UVar14.fields.y;
      item.fields.tipPosition.fields.z = UVar14.fields.z;
      System_Collections_Generic_List_MeleeWeaponTrail_Point___AddWithResize
                (pSVar8,item,(MethodInfo_3ABDA90 *)pMVar10->klass->rgctx_data[0xe].method);
    }
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_0584c730;
    pMVar10 = (MethodInfo *)0x0;
    UVar15 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
    (__this->fields)._lastPosition.fields.x = UVar15.fields.x;
    (__this->fields)._lastPosition.fields.y = UVar15.fields.y;
    (__this->fields)._lastPosition.fields.z = UVar15.fields.z;
    pSVar8 = (__this->fields)._points;
    if (pSVar8 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_0584c730;
    iVar9 = 1;
    if ((pSVar8->fields)._size != 1) {
      uVar3 = (__this->fields).subdivisions;
      if (0x7ffffffe < uVar3) goto label_0584c711;
      iVar9 = uVar3 + 1;
    }
    do {
      while( true ) {
        pMVar6 = MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_Add;
        pSVar8 = (__this->fields)._smoothedPoints;
        if (pSVar8 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_0584c730;
        piVar1 = &(pSVar8->fields)._version;
        *piVar1 = *piVar1 + 1;
        pMVar4 = (pSVar8->fields)._items;
        if (pMVar4 == (MeleeWeaponTrail_Point_array *)0x0) goto label_0584c730;
        uVar3 = (pSVar8->fields)._size;
        if ((uint)pMVar4->max_length <= uVar3) break;
        (pSVar8->fields)._size = uVar3 + 1;
        pMVar5 = &pMVar4->m_Items[(int)uVar3].fields;
        *(ulong *)&(pMVar5->basePosition).fields.z = CONCAT44(local_48,fVar12);
        (pMVar5->tipPosition).fields.y = UVar14.fields.y;
        (pMVar5->tipPosition).fields.z = UVar14.fields.z;
        pMVar2 = pMVar4->m_Items + (int)uVar3;
        (pMVar2->fields).timeCreated = fVar11;
        (pMVar2->fields).basePosition.fields.x = fStack_54;
        (pMVar2->fields).basePosition.fields.y = UVar13.fields.y;
        (pMVar2->fields).basePosition.fields.z = UVar13.fields.z;
        iVar9 = iVar9 + -1;
        if (iVar9 == 0) goto label_0584c708;
      }
      pMVar10 = pMVar6->klass->rgctx_data[0xe].method;
      item_00.fields.basePosition.fields.x = fStack_54;
      item_00.fields.timeCreated = fVar11;
      item_00.fields.basePosition.fields.y = fStack_50;
      item_00.fields.basePosition.fields.z = fVar12;
      item_00.fields.tipPosition.fields.x = local_48;
      item_00.fields.tipPosition.fields.y = UVar14.fields.y;
      item_00.fields.tipPosition.fields.z = UVar14.fields.z;
      System_Collections_Generic_List_MeleeWeaponTrail_Point___AddWithResize
                (pSVar8,item_00,(MethodInfo_3ABDA90 *)pMVar10);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
label_0584c708:
    pSVar8 = (__this->fields)._points;
    if (pSVar8 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
label_0584c711:
      if ((pSVar8->fields)._size < 4) {
        return;
      }
      MeleeWeaponTrail__SmoothLastSegments(__this,pMVar10);
      return;
    }
  }
label_0584c730:
  ThrowNullReferenceException();
}


// MeleeWeaponTrail$$SmoothLastSegments
// il2cpp: void MeleeWeaponTrail__SmoothLastSegments (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x584d270
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x584d36e: nop 

void MeleeWeaponTrail__SmoothLastSegments(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  int index;
  int iVar1;
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pSVar2;
  MeleeWeaponTrail_Point_o value;
  float fVar3;
  int iVar4;
  int iVar5;
  int stepCount;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  MethodInfo *in_stack_ffffffffffffff68;
  MeleeWeaponTrail_Point_o aMStack_68 [2];
  
  if (Il2CppMethodInitialized_0754502f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_set_Item);
    Il2CppMethodInitialized_0754502f = '\x01';
  }
  pSVar2 = (__this->fields)._points;
  if (pSVar2 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    index = iVar1 + -4;
    iVar6 = (__this->fields).subdivisions;
    System_Collections_Generic_List_MeleeWeaponTrail_Point___get_Item
              (aMStack_68,pSVar2,index,
               (MethodInfo_3ABD6F0 *)
               MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
    fVar3 = aMStack_68[0].fields.timeCreated;
    pSVar2 = (__this->fields)._points;
    if (pSVar2 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
      System_Collections_Generic_List_MeleeWeaponTrail_Point___get_Item
                (aMStack_68,pSVar2,iVar1 + -1,
                 (MethodInfo_3ABD6F0 *)
                 MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
      pSVar2 = (__this->fields)._smoothedPoints;
      if (pSVar2 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
        stepCount = iVar6 + 1;
        iVar1 = iVar6 + 2 + stepCount * 2;
        iVar5 = (pSVar2->fields)._size - iVar1;
        iVar4 = -iVar5;
        iVar6 = 0;
        if (0 < iVar4) {
          iVar6 = iVar4;
        }
        if (iVar6 < iVar1) {
          fVar7 = aMStack_68[0].fields.timeCreated - fVar3;
          do {
            if (iVar6 == 0) {
              pSVar2 = (__this->fields)._points;
              if (pSVar2 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0)
              goto label_0584d472;
              System_Collections_Generic_List_MeleeWeaponTrail_Point___get_Item
                        (aMStack_68,pSVar2,index,
                         (MethodInfo_3ABD6F0 *)
                         MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
            }
            else {
              MeleeWeaponTrail__SampleSegment
                        (aMStack_68,__this,index,(iVar6 + -1) / stepCount,(iVar6 + -1) % stepCount + 1,
                         stepCount,in_stack_ffffffffffffff68);
            }
            aMStack_68[1].fields.tipPosition.fields.y = aMStack_68[0].fields.tipPosition.fields.y;
            aMStack_68[1].fields.tipPosition.fields.z = aMStack_68[0].fields.tipPosition.fields.z;
            pSVar2 = (__this->fields)._smoothedPoints;
            if (pSVar2 == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) goto label_0584d472;
            fVar8 = (float)iVar6 / (float)iVar1;
            fVar9 = 1.0;
            if (fVar8 <= 1.0) {
              fVar9 = fVar8;
            }
            aMStack_68[0].fields.timeCreated = (float)(-(uint)(0.0 <= fVar8) & (uint)fVar9) * fVar7 + fVar3;
            in_stack_ffffffffffffff68 =
                 (MethodInfo *)
                 CONCAT44(aMStack_68[0].fields.basePosition.fields.x,aMStack_68[0].fields.timeCreated);
            value.fields.basePosition.fields.y = aMStack_68[0].fields.basePosition.fields.y;
            value.fields._0_8_ = in_stack_ffffffffffffff68;
            value.fields.basePosition.fields.z = aMStack_68[0].fields.basePosition.fields.z;
            value.fields.tipPosition.fields.x = aMStack_68[0].fields.tipPosition.fields.x;
            value.fields.tipPosition.fields.y = aMStack_68[0].fields.tipPosition.fields.y;
            value.fields.tipPosition.fields.z = aMStack_68[0].fields.tipPosition.fields.z;
            System_Collections_Generic_List_MeleeWeaponTrail_Point___set_Item
                      (pSVar2,iVar5 + iVar6,value,
                       (MethodInfo_3ABD750 *)
                       MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_set_Item);
            iVar6 = iVar6 + 1;
          } while (iVar1 != iVar6);
        }
        return;
      }
    }
  }
label_0584d472:
  ThrowNullReferenceException();
}


// MeleeWeaponTrail$$SampleSegment
// il2cpp: MeleeWeaponTrail_Point_o MeleeWeaponTrail__SampleSegment (MeleeWeaponTrail_o* __this, int32_t first, int32_t segment, int32_t step, int32_t stepCount, const MethodInfo* method);
// 0x584d480

MeleeWeaponTrail_Point_o *
MeleeWeaponTrail__SampleSegment
          (MeleeWeaponTrail_Point_o *__return_storage_ptr__,MeleeWeaponTrail_o *__this,int32_t first,
          int32_t segment,int32_t step,int32_t stepCount,MethodInfo *method)

{
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pSVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  MeleeWeaponTrail_Point_o MStack_d8;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  int32_t local_a0;
  int32_t local_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  
  local_9c = step;
  if (Il2CppMethodInitialized_07545030 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
    Il2CppMethodInitialized_07545030 = '\x01';
  }
  pSVar1 = (__this->fields)._points;
  if (pSVar1 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
    iVar2 = 0;
    if (0 < segment + -1) {
      iVar2 = segment + -1;
    }
    local_a0 = stepCount;
    System_Collections_Generic_List_MeleeWeaponTrail_Point___get_Item
              (&MStack_d8,pSVar1,iVar2 + first,
               (MethodInfo_3ABD6F0 *)
               MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
    pSVar1 = (__this->fields)._points;
    if (pSVar1 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
      local_58._0_4_ = MStack_d8.fields.basePosition.fields.x;
      local_58._4_4_ = MStack_d8.fields.basePosition.fields.y;
      local_58._8_8_ = 0;
      local_a8 = MStack_d8.fields.basePosition.fields.z;
      local_48._0_4_ = MStack_d8.fields.tipPosition.fields.x;
      local_48._4_4_ = MStack_d8.fields.tipPosition.fields.y;
      local_48._8_8_ = 0;
      local_a4 = MStack_d8.fields.tipPosition.fields.z;
      System_Collections_Generic_List_MeleeWeaponTrail_Point___get_Item
                (&MStack_d8,pSVar1,segment + first,
                 (MethodInfo_3ABD6F0 *)
                 MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
      pSVar1 = (__this->fields)._points;
      if (pSVar1 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
        local_78._0_4_ = MStack_d8.fields.basePosition.fields.x;
        local_78._4_4_ = MStack_d8.fields.basePosition.fields.y;
        local_78._8_8_ = 0;
        local_b0 = MStack_d8.fields.basePosition.fields.z;
        local_68._0_4_ = MStack_d8.fields.tipPosition.fields.x;
        local_68._4_4_ = MStack_d8.fields.tipPosition.fields.y;
        local_68._8_8_ = 0;
        local_ac = MStack_d8.fields.tipPosition.fields.z;
        System_Collections_Generic_List_MeleeWeaponTrail_Point___get_Item
                  (&MStack_d8,pSVar1,segment + first + 1,
                   (MethodInfo_3ABD6F0 *)
                   MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
        pSVar1 = (__this->fields)._points;
        if (pSVar1 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
          local_98._0_4_ = MStack_d8.fields.basePosition.fields.x;
          local_98._4_4_ = MStack_d8.fields.basePosition.fields.y;
          local_98._8_8_ = 0;
          local_b8 = MStack_d8.fields.basePosition.fields.z;
          local_88._0_4_ = MStack_d8.fields.tipPosition.fields.x;
          local_88._4_4_ = MStack_d8.fields.tipPosition.fields.y;
          local_88._8_8_ = 0;
          local_b4 = MStack_d8.fields.tipPosition.fields.z;
          iVar2 = 3;
          if (segment + 2 < 3) {
            iVar2 = segment + 2;
          }
          System_Collections_Generic_List_MeleeWeaponTrail_Point___get_Item
                    (&MStack_d8,pSVar1,iVar2 + first,
                     (MethodInfo_3ABD6F0 *)
                     MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
          fVar6 = (float)local_9c / (float)local_a0;
          fVar3 = fVar6 * fVar6;
          fVar4 = fVar6 * fVar3 * 0.5;
          fVar5 = fVar4 - fVar3 * 0.5;
          fVar8 = (fVar3 - fVar4) - fVar6 * 0.5;
          fVar7 = fVar6 * fVar3 * 1.5;
          fVar4 = fVar3 * -2.5 + fVar7 + 1.0;
          fVar3 = ((fVar3 + fVar3) - fVar7) + fVar6 * 0.5;
          (__return_storage_ptr__->fields).timeCreated = 0.0;
          (__return_storage_ptr__->fields).basePosition.fields.x =
               MStack_d8.fields.basePosition.fields.x * fVar5 +
               (float)local_98._0_4_ * fVar3 + (float)local_78._0_4_ * fVar4 + (float)local_58._0_4_ * fVar8;
          (__return_storage_ptr__->fields).basePosition.fields.y =
               MStack_d8.fields.basePosition.fields.y * fVar5 +
               (float)local_98._4_4_ * fVar3 + (float)local_78._4_4_ * fVar4 + (float)local_58._4_4_ * fVar8;
          (__return_storage_ptr__->fields).basePosition.fields.z =
               local_b8 * fVar3 + local_b0 * fVar4 + local_a8 * fVar8 +
               MStack_d8.fields.basePosition.fields.z * fVar5;
          (__return_storage_ptr__->fields).tipPosition.fields.x =
               fVar5 * MStack_d8.fields.tipPosition.fields.x +
               fVar3 * (float)local_88._0_4_ + fVar4 * (float)local_68._0_4_ + fVar8 * (float)local_48._0_4_;
          (__return_storage_ptr__->fields).tipPosition.fields.y =
               fVar5 * MStack_d8.fields.tipPosition.fields.y +
               fVar3 * (float)local_88._4_4_ + fVar4 * (float)local_68._4_4_ + fVar8 * (float)local_48._4_4_;
          (__return_storage_ptr__->fields).tipPosition.fields.z =
               fVar3 * local_b4 + fVar4 * local_ac + fVar8 * local_a4 +
               MStack_d8.fields.tipPosition.fields.z * fVar5;
          return __return_storage_ptr__;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// MeleeWeaponTrail$$UpdateLastPoint
// il2cpp: void MeleeWeaponTrail__UpdateLastPoint (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x584c740

void MeleeWeaponTrail__UpdateLastPoint(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  
  MeleeWeaponTrail__SetLastPosition(__this,(__this->fields)._points,in_RDX);
  MeleeWeaponTrail__SetLastPosition(__this,(__this->fields)._smoothedPoints,method_00);
  return;
}


// MeleeWeaponTrail$$SetLastPosition
// il2cpp: void MeleeWeaponTrail__SetLastPosition (MeleeWeaponTrail_o* __this, System_Collections_Generic_List_MeleeWeaponTrail_Point__o* pointList, const MethodInfo* method);
// 0x584d770

void MeleeWeaponTrail__SetLastPosition
               (MeleeWeaponTrail_o *__this,
               System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pointList,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Transform_o *pUVar2;
  MeleeWeaponTrail_Point_o value;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar3;
  MeleeWeaponTrail_Point_o local_48;
  undefined1 local_28 [16];
  
  if (Il2CppMethodInitialized_07545031 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_set_Item);
    Il2CppMethodInitialized_07545031 = '\x01';
  }
  if (pointList != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
    iVar1 = (pointList->fields)._size;
    if (iVar1 == 0) {
      return;
    }
    System_Collections_Generic_List_MeleeWeaponTrail_Point___get_Item
              (&local_48,pointList,iVar1 + -1,
               (MethodInfo_3ABD6F0 *)
               MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
    pUVar2 = (__this->fields)._base;
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UVar3 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
      local_48.fields.basePosition.fields.z = UVar3.fields.z;
      local_28._8_4_ = extraout_XMM0_Dc;
      local_28._0_8_ = UVar3.fields._0_8_;
      local_28._12_4_ = extraout_XMM0_Dd;
      pUVar2 = (__this->fields)._tip;
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UVar3 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
        local_48.fields.tipPosition.fields.z = UVar3.fields.z;
        local_48.fields.basePosition.fields.x = local_28._0_4_;
        local_48.fields.basePosition.fields.y = local_28._4_4_;
        local_48.fields.tipPosition.fields.x = UVar3.fields.x;
        local_48.fields.tipPosition.fields.y = UVar3.fields.y;
        value.fields.basePosition.fields.x = local_48.fields.basePosition.fields.x;
        value.fields.timeCreated = local_48.fields.timeCreated;
        value.fields.basePosition.fields.y = local_48.fields.basePosition.fields.y;
        value.fields.basePosition.fields.z = local_48.fields.basePosition.fields.z;
        value.fields.tipPosition.fields.x = local_48.fields.tipPosition.fields.x;
        value.fields.tipPosition.fields.y = UVar3.fields.y;
        value.fields.tipPosition.fields.z = UVar3.fields.z;
        System_Collections_Generic_List_MeleeWeaponTrail_Point___set_Item
                  (pointList,(pointList->fields)._size + -1,value,
                   (MethodInfo_3ABD750 *)
                   MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_set_Item);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// MeleeWeaponTrail$$RebuildMesh
// il2cpp: void MeleeWeaponTrail__RebuildMesh (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x584c8b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x584ca17: mov r13, rbx
// asm:   0x584cf50: jmp 0x584ca1a

void MeleeWeaponTrail__RebuildMesh(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  int item;
  int item_00;
  int32_t *piVar1;
  UnityEngine_Color_o *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  System_Collections_Generic_List_Vector3__o *pSVar13;
  System_Collections_Generic_List_Color__o *pSVar14;
  System_Collections_Generic_List_Vector2__o *pSVar15;
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pSVar16;
  UnityEngine_Color_array *pUVar17;
  System_Single_array *values;
  UnityEngine_Vector3_array *pUVar18;
  UnityEngine_Vector2_array *pUVar19;
  System_Int32_array *pSVar20;
  UnityEngine_Mesh_o *pUVar21;
  UnityEngine_Vector2_o UVar22;
  UnityEngine_Vector2_Fields item_01;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  uint uVar26;
  uint uVar27;
  MethodInfo *pMVar28;
  System_Collections_Generic_List_int__o *pSVar29;
  int index;
  int item_02;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  UnityEngine_Vector2_o item_03;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [12];
  UnityEngine_Color_o item_04;
  UnityEngine_Color_o item_05;
  UnityEngine_Vector3_o item_06;
  UnityEngine_Vector3_o item_07;
  undefined8 uStack_c8;
  undefined8 uStack_a8;
  float fStack_88;
  float fStack_84;
  float fStack_78;
  float fStack_74;
  MeleeWeaponTrail_Point_o MStack_68;
  float fStack_48;
  
  if (Il2CppMethodInitialized_07545032 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Color_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Color_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
    Il2CppMethodInitialized_07545032 = '\x01';
  }
  pSVar13 = (__this->fields)._vertices;
  if (pSVar13 != (System_Collections_Generic_List_Vector3__o *)0x0) {
    piVar1 = &(pSVar13->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar13->fields)._size = 0;
    pSVar14 = (__this->fields)._vertexColors;
    if (pSVar14 != (System_Collections_Generic_List_Color__o *)0x0) {
      piVar1 = &(pSVar14->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar14->fields)._size = 0;
      pSVar15 = (__this->fields)._uvs;
      if (pSVar15 != (System_Collections_Generic_List_Vector2__o *)0x0) {
        piVar1 = &(pSVar15->fields)._version;
        *piVar1 = *piVar1 + 1;
        (pSVar15->fields)._size = 0;
        pSVar29 = (__this->fields)._triangles;
        if (pSVar29 != (System_Collections_Generic_List_int__o *)0x0) {
          piVar1 = &(pSVar29->fields)._version;
          *piVar1 = *piVar1 + 1;
          (pSVar29->fields)._size = 0;
          pSVar16 = (__this->fields)._smoothedPoints;
          if (pSVar16 != (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
            iVar11 = (pSVar16->fields)._size;
            if (0 < iVar11) {
              index = 0;
              item_02 = 1;
              do {
                pMVar28 = (MethodInfo *)(__this->fields)._smoothedPoints;
                if (pMVar28 == (MethodInfo *)0x0) goto label_0584d259;
                System_Collections_Generic_List_MeleeWeaponTrail_Point___get_Item
                          (&MStack_68,(System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)pMVar28,
                           index,(MethodInfo_3ABD6F0 *)
                                 MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
                fVar25 = MStack_68.fields.tipPosition.fields.z;
                uVar24 = MStack_68.fields.tipPosition.fields._0_8_;
                fVar35 = MStack_68.fields.basePosition.fields.z;
                uVar23 = MStack_68.fields.basePosition.fields._0_8_;
                fVar31 = MStack_68.fields.timeCreated;
                fVar30 = UnityEngine_Time__get_time((MethodInfo *)0x0);
                fVar31 = (fVar30 - fVar31) / (__this->fields)._lifeTime;
                pUVar17 = (__this->fields)._colors;
                fStack_88 = (float)uVar23;
                fStack_84 = SUB84(uVar23,4);
                if ((pUVar17 == (UnityEngine_Color_array *)0x0) || (pUVar17->max_length == 0)) {
                  auVar36 = ZEXT812(0x3f800000);
                  if (fVar31 <= auVar36._0_4_) {
                    auVar36._4_8_ = auVar36._4_8_;
                    auVar36._0_4_ = fVar31;
                  }
                  uVar12 = ~-(uint)(0.0 <= fVar31) & 0x3f800000 |
                           (uint)(1.0 - auVar36._0_4_) & -(uint)(0.0 <= fVar31);
                  uStack_c8 = CONCAT44(uVar12,uVar12);
                  uStack_a8 = CONCAT44(uVar12,uVar12);
                }
                else {
                  uVar12 = (uint)pUVar17->max_length;
                  fVar34 = (float)(int)(uVar12 - 1);
                  fVar32 = fVar31 * fVar34;
                  fStack_48 = floorf(fVar32);
                  fVar33 = ceilf(fVar32);
                  fVar30 = fVar34;
                  if (fVar33 <= fVar34) {
                    fVar30 = fVar33;
                  }
                  fVar30 = (float)(~-(uint)(1.0 <= fVar33) & 0x3f800000 |
                                  (uint)fVar30 & -(uint)(1.0 <= fVar33));
                  if ((fStack_48 != fVar30) || (NAN(fStack_48) || NAN(fVar30))) {
                    fVar33 = (fVar32 - fStack_48) / (fVar30 - fStack_48);
                    fVar32 = 1.0;
                    if (fVar33 <= 1.0) {
                      fVar32 = fVar33;
                    }
                    fVar32 = (float)(-(uint)(0.0 <= fVar33) & (uint)fVar32);
                  }
                  else {
                    fVar32 = 0.0;
                  }
                  fVar33 = fVar34;
                  if (fStack_48 <= fVar34) {
                    fVar33 = fStack_48;
                  }
                  uVar26 = (uint)(float)(-(uint)(0.0 <= fStack_48) & (uint)fVar33);
                  if (uVar12 <= uVar26) {
label_0584d25e:
                    ThrowIndexOutOfRangeException();
                  }
                  if (fVar30 <= fVar34) {
                    fVar34 = fVar30;
                  }
                  uVar27 = (uint)(float)(-(uint)(0.0 <= fVar30) & (uint)fVar34);
                  if (uVar12 <= uVar27) goto label_0584d25e;
                  uVar3 = pUVar17->m_Items[(int)uVar26].fields.r;
                  uVar7 = pUVar17->m_Items[(int)uVar26].fields.g;
                  uVar4 = pUVar17->m_Items[(int)uVar26].fields.b;
                  uVar8 = pUVar17->m_Items[(int)uVar26].fields.a;
                  uVar5 = pUVar17->m_Items[(int)uVar27].fields.r;
                  uVar9 = pUVar17->m_Items[(int)uVar27].fields.g;
                  uVar6 = pUVar17->m_Items[(int)uVar27].fields.b;
                  uVar10 = pUVar17->m_Items[(int)uVar27].fields.a;
                  fVar30 = 0.0;
                  if (0.0 <= fVar32) {
                    fVar30 = fVar32;
                  }
                  uStack_c8 = CONCAT44(((float)uVar9 - (float)uVar7) * fVar30 + (float)uVar7,
                                       ((float)uVar5 - (float)uVar3) * fVar30 + (float)uVar3);
                  uStack_a8 = CONCAT44(((float)uVar10 - (float)uVar8) * fVar30 + (float)uVar8,
                                       ((float)uVar6 - (float)uVar4) * fVar30 + (float)uVar4);
                }
                values = (__this->fields)._sizes;
                fVar30 = 0.0;
                fStack_78 = (float)uVar24;
                fStack_74 = SUB84(uVar24,4);
                if ((values != (System_Single_array *)0x0) && (values->max_length != 0)) {
                  fVar30 = MeleeWeaponTrail__Sample_574d990(values,fVar31,pMVar28);
                }
                pMVar28 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
                pSVar13 = (__this->fields)._vertices;
                fVar30 = fVar30 * 0.5;
                if (pSVar13 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_0584d259;
                piVar1 = &(pSVar13->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar18 = (pSVar13->fields)._items;
                if (pUVar18 == (UnityEngine_Vector3_array *)0x0) goto label_0584d259;
                fVar34 = (fVar25 - fVar35) * fVar30;
                fVar31 = fVar30 * (fStack_78 - fStack_88);
                fVar30 = fVar30 * (fStack_74 - fStack_84);
                fStack_88 = fStack_88 - fVar31;
                fStack_84 = fStack_84 - fVar30;
                fVar35 = fVar35 - fVar34;
                uVar12 = (pSVar13->fields)._size;
                if (uVar12 < (uint)pUVar18->max_length) {
                  (pSVar13->fields)._size = uVar12 + 1;
                  pUVar18->m_Items[(int)uVar12].fields.x = fStack_88;
                  pUVar18->m_Items[(int)uVar12].fields.y = fStack_84;
                  pUVar18->m_Items[(int)uVar12].fields.z = fVar35;
                }
                else {
                  item_06.fields.y = fStack_84;
                  item_06.fields.x = fStack_88;
                  item_06.fields.z = fVar35;
                  System_Collections_Generic_List_Vector3___AddWithResize
                            (pSVar13,item_06,(MethodInfo_39FF950 *)pMVar28->klass->rgctx_data[0xe].method);
                }
                pMVar28 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
                pSVar13 = (__this->fields)._vertices;
                if (pSVar13 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_0584d259;
                piVar1 = &(pSVar13->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar18 = (pSVar13->fields)._items;
                if (pUVar18 == (UnityEngine_Vector3_array *)0x0) goto label_0584d259;
                fStack_78 = fStack_78 + fVar31;
                fStack_74 = fStack_74 + fVar30;
                item_07.fields.z = fVar25 + fVar34;
                uVar12 = (pSVar13->fields)._size;
                if (uVar12 < (uint)pUVar18->max_length) {
                  (pSVar13->fields)._size = uVar12 + 1;
                  pUVar18->m_Items[(int)uVar12].fields.x = fStack_78;
                  pUVar18->m_Items[(int)uVar12].fields.y = fStack_74;
                  pUVar18->m_Items[(int)uVar12].fields.z = item_07.fields.z;
                }
                else {
                  item_07.fields.y = fStack_74;
                  item_07.fields.x = fStack_78;
                  System_Collections_Generic_List_Vector3___AddWithResize
                            (pSVar13,item_07,(MethodInfo_39FF950 *)pMVar28->klass->rgctx_data[0xe].method);
                }
                pMVar28 = MethodInfo_System_Collections_Generic_List_Color_Add;
                pSVar14 = (__this->fields)._vertexColors;
                if (pSVar14 == (System_Collections_Generic_List_Color__o *)0x0) goto label_0584d259;
                piVar1 = &(pSVar14->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar17 = (pSVar14->fields)._items;
                if (pUVar17 == (UnityEngine_Color_array *)0x0) goto label_0584d259;
                uVar12 = (pSVar14->fields)._size;
                if (uVar12 < (uint)pUVar17->max_length) {
                  (pSVar14->fields)._size = uVar12 + 1;
                  pUVar2 = pUVar17->m_Items + (int)uVar12;
                  (pUVar2->fields).r = (float)(undefined4)uStack_c8;
                  (pUVar2->fields).g = (float)uStack_c8._4_4_;
                  (pUVar2->fields).b = (float)(undefined4)uStack_a8;
                  (pUVar2->fields).a = (float)uStack_a8._4_4_;
                }
                else {
                  item_04.fields.b = (float)(undefined4)uStack_a8;
                  item_04.fields.a = (float)uStack_a8._4_4_;
                  item_04.fields.r = (float)(undefined4)uStack_c8;
                  item_04.fields.g = (float)uStack_c8._4_4_;
                  System_Collections_Generic_List_Color___AddWithResize
                            (pSVar14,item_04,(MethodInfo_51EBD90 *)pMVar28->klass->rgctx_data[0xe].method);
                }
                pMVar28 = MethodInfo_System_Collections_Generic_List_Color_Add;
                pSVar14 = (__this->fields)._vertexColors;
                if (pSVar14 == (System_Collections_Generic_List_Color__o *)0x0) goto label_0584d259;
                piVar1 = &(pSVar14->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar17 = (pSVar14->fields)._items;
                if (pUVar17 == (UnityEngine_Color_array *)0x0) goto label_0584d259;
                uVar12 = (pSVar14->fields)._size;
                if (uVar12 < (uint)pUVar17->max_length) {
                  (pSVar14->fields)._size = uVar12 + 1;
                  pUVar2 = pUVar17->m_Items + (int)uVar12;
                  (pUVar2->fields).r = (float)(undefined4)uStack_c8;
                  (pUVar2->fields).g = (float)uStack_c8._4_4_;
                  (pUVar2->fields).b = (float)(undefined4)uStack_a8;
                  (pUVar2->fields).a = (float)uStack_a8._4_4_;
                }
                else {
                  item_05.fields.b = (float)(undefined4)uStack_a8;
                  item_05.fields.a = (float)uStack_a8._4_4_;
                  item_05.fields.r = (float)(undefined4)uStack_c8;
                  item_05.fields.g = (float)uStack_c8._4_4_;
                  System_Collections_Generic_List_Color___AddWithResize
                            (pSVar14,item_05,(MethodInfo_51EBD90 *)pMVar28->klass->rgctx_data[0xe].method);
                }
                pMVar28 = MethodInfo_System_Collections_Generic_List_Vector2_Add;
                pSVar15 = (__this->fields)._uvs;
                if (pSVar15 == (System_Collections_Generic_List_Vector2__o *)0x0) goto label_0584d259;
                piVar1 = &(pSVar15->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar19 = (pSVar15->fields)._items;
                if (pUVar19 == (UnityEngine_Vector2_array *)0x0) goto label_0584d259;
                item_03.fields.x = (float)index / (float)iVar11;
                uVar12 = (pSVar15->fields)._size;
                if (uVar12 < (uint)pUVar19->max_length) {
                  (pSVar15->fields)._size = uVar12 + 1;
                  UVar22.fields.y = 0.0;
                  UVar22.fields.x = item_03.fields.x;
                  pUVar19->m_Items[(int)uVar12].fields = UVar22.fields;
                }
                else {
                  item_03.fields.y = 0.0;
                  System_Collections_Generic_List_Vector2___AddWithResize
                            (pSVar15,item_03,(MethodInfo_39F9590 *)pMVar28->klass->rgctx_data[0xe].method);
                }
                pMVar28 = MethodInfo_System_Collections_Generic_List_Vector2_Add;
                pSVar15 = (__this->fields)._uvs;
                if (pSVar15 == (System_Collections_Generic_List_Vector2__o *)0x0) goto label_0584d259;
                piVar1 = &(pSVar15->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar19 = (pSVar15->fields)._items;
                if (pUVar19 == (UnityEngine_Vector2_array *)0x0) goto label_0584d259;
                item_01.y = 1.0;
                item_01.x = item_03.fields.x;
                uVar12 = (pSVar15->fields)._size;
                if (uVar12 < (uint)pUVar19->max_length) {
                  (pSVar15->fields)._size = uVar12 + 1;
                  pUVar19->m_Items[(int)uVar12].fields = item_01;
                  pMVar28 = MethodInfo_System_Collections_Generic_List_int_Add;
                }
                else {
                  System_Collections_Generic_List_Vector2___AddWithResize
                            (pSVar15,(UnityEngine_Vector2_o)item_01,
                             (MethodInfo_39F9590 *)pMVar28->klass->rgctx_data[0xe].method);
                  pMVar28 = MethodInfo_System_Collections_Generic_List_int_Add;
                }
                MethodInfo_System_Collections_Generic_List_int_Add = pMVar28;
                if (index != 0) {
                  pSVar29 = (__this->fields)._triangles;
                  if (pSVar29 == (System_Collections_Generic_List_int__o *)0x0) goto label_0584d259;
                  piVar1 = &(pSVar29->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar20 = (pSVar29->fields)._items;
                  if (pSVar20 == (System_Int32_array *)0x0) goto label_0584d259;
                  uVar12 = (pSVar29->fields)._size;
                  if (uVar12 < (uint)pSVar20->max_length) {
                    (pSVar29->fields)._size = uVar12 + 1;
                    pSVar20->m_Items[(int)uVar12] = item_02 + -3;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize
                              (pSVar29,item_02 + -3,
                               (MethodInfo_3916AC0 *)pMVar28->klass->rgctx_data[0xe].method);
                    pSVar29 = (__this->fields)._triangles;
                    if (pSVar29 == (System_Collections_Generic_List_int__o *)0x0) goto label_0584d259;
                  }
                  pMVar28 = MethodInfo_System_Collections_Generic_List_int_Add;
                  piVar1 = &(pSVar29->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar20 = (pSVar29->fields)._items;
                  if (pSVar20 == (System_Int32_array *)0x0) goto label_0584d259;
                  item = item_02 + -2;
                  uVar12 = (pSVar29->fields)._size;
                  if (uVar12 < (uint)pSVar20->max_length) {
                    (pSVar29->fields)._size = uVar12 + 1;
                    pSVar20->m_Items[(int)uVar12] = item;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize
                              (pSVar29,item,(MethodInfo_3916AC0 *)pMVar28->klass->rgctx_data[0xe].method);
                    pSVar29 = (__this->fields)._triangles;
                    if (pSVar29 == (System_Collections_Generic_List_int__o *)0x0) goto label_0584d259;
                  }
                  pMVar28 = MethodInfo_System_Collections_Generic_List_int_Add;
                  piVar1 = &(pSVar29->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar20 = (pSVar29->fields)._items;
                  if (pSVar20 == (System_Int32_array *)0x0) goto label_0584d259;
                  item_00 = item_02 + -1;
                  uVar12 = (pSVar29->fields)._size;
                  if (uVar12 < (uint)pSVar20->max_length) {
                    (pSVar29->fields)._size = uVar12 + 1;
                    pSVar20->m_Items[(int)uVar12] = item_00;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize
                              (pSVar29,item_00,(MethodInfo_3916AC0 *)pMVar28->klass->rgctx_data[0xe].method);
                    pSVar29 = (__this->fields)._triangles;
                    if (pSVar29 == (System_Collections_Generic_List_int__o *)0x0) goto label_0584d259;
                  }
                  pMVar28 = MethodInfo_System_Collections_Generic_List_int_Add;
                  piVar1 = &(pSVar29->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar20 = (pSVar29->fields)._items;
                  if (pSVar20 == (System_Int32_array *)0x0) goto label_0584d259;
                  uVar12 = (pSVar29->fields)._size;
                  if (uVar12 < (uint)pSVar20->max_length) {
                    (pSVar29->fields)._size = uVar12 + 1;
                    pSVar20->m_Items[(int)uVar12] = item_02;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize
                              (pSVar29,item_02,(MethodInfo_3916AC0 *)pMVar28->klass->rgctx_data[0xe].method);
                    pSVar29 = (__this->fields)._triangles;
                    if (pSVar29 == (System_Collections_Generic_List_int__o *)0x0) goto label_0584d259;
                  }
                  pMVar28 = MethodInfo_System_Collections_Generic_List_int_Add;
                  piVar1 = &(pSVar29->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar20 = (pSVar29->fields)._items;
                  if (pSVar20 == (System_Int32_array *)0x0) goto label_0584d259;
                  uVar12 = (pSVar29->fields)._size;
                  if (uVar12 < (uint)pSVar20->max_length) {
                    (pSVar29->fields)._size = uVar12 + 1;
                    pSVar20->m_Items[(int)uVar12] = item_00;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize
                              (pSVar29,item_00,(MethodInfo_3916AC0 *)pMVar28->klass->rgctx_data[0xe].method);
                    pSVar29 = (__this->fields)._triangles;
                    if (pSVar29 == (System_Collections_Generic_List_int__o *)0x0) goto label_0584d259;
                  }
                  pMVar28 = MethodInfo_System_Collections_Generic_List_int_Add;
                  piVar1 = &(pSVar29->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar20 = (pSVar29->fields)._items;
                  if (pSVar20 == (System_Int32_array *)0x0) goto label_0584d259;
                  uVar12 = (pSVar29->fields)._size;
                  if (uVar12 < (uint)pSVar20->max_length) {
                    (pSVar29->fields)._size = uVar12 + 1;
                    pSVar20->m_Items[(int)uVar12] = item;
                  }
                  else {
                    System_Collections_Generic_List_int___AddWithResize
                              (pSVar29,item,(MethodInfo_3916AC0 *)pMVar28->klass->rgctx_data[0xe].method);
                  }
                }
                index = index + 1;
                item_02 = item_02 + 2;
              } while (iVar11 != index);
            }
            pUVar21 = (__this->fields)._trailMesh;
            if (pUVar21 != (UnityEngine_Mesh_o *)0x0) {
              UnityEngine_Mesh__Clear(pUVar21,(MethodInfo *)0x0);
              pUVar21 = (__this->fields)._trailMesh;
              if (pUVar21 != (UnityEngine_Mesh_o *)0x0) {
                UnityEngine_Mesh__SetVertices(pUVar21,(__this->fields)._vertices,(MethodInfo *)0x0);
                pUVar21 = (__this->fields)._trailMesh;
                if (pUVar21 != (UnityEngine_Mesh_o *)0x0) {
                  UnityEngine_Mesh__SetColors(pUVar21,(__this->fields)._vertexColors,(MethodInfo *)0x0);
                  pUVar21 = (__this->fields)._trailMesh;
                  if (pUVar21 != (UnityEngine_Mesh_o *)0x0) {
                    UnityEngine_Mesh__SetUVs(pUVar21,0,(__this->fields)._uvs,(MethodInfo *)0x0);
                    pUVar21 = (__this->fields)._trailMesh;
                    if (pUVar21 != (UnityEngine_Mesh_o *)0x0) {
                      UnityEngine_Mesh__SetTriangles_68eb1e0
                                (pUVar21,(__this->fields)._triangles,0,(MethodInfo *)0x0);
                      (__this->fields)._meshHasData = true;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_0584d259:
  ThrowNullReferenceException();
}


// MeleeWeaponTrail$$GetSampleRange
// il2cpp: void MeleeWeaponTrail__GetSampleRange (int32_t length, float time, int32_t* min, int32_t* max, float* lerp, const MethodInfo* method);
// 0x584da90

void MeleeWeaponTrail__GetSampleRange
               (int32_t length,float time,int32_t *min,int32_t *max,float *lerp,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)(length + -1);
  fVar1 = time * fVar4;
  fVar2 = floorf(fVar1);
  fVar3 = ceilf(fVar1);
  fVar5 = fVar4;
  if (fVar3 <= fVar4) {
    fVar5 = fVar3;
  }
  fVar3 = (float)(~-(uint)(1.0 <= fVar3) & 0x3f800000 | (uint)fVar5 & -(uint)(1.0 <= fVar3));
  fVar5 = 0.0;
  if ((fVar2 != fVar3) || (NAN(fVar2) || NAN(fVar3))) {
    fVar1 = (fVar1 - fVar2) / (fVar3 - fVar2);
    fVar5 = 1.0;
    if (fVar1 <= 1.0) {
      fVar5 = fVar1;
    }
    fVar5 = (float)(-(uint)(0.0 <= fVar1) & (uint)fVar5);
  }
  fVar1 = fVar4;
  if (fVar2 <= fVar4) {
    fVar1 = fVar2;
  }
  *lerp = fVar5;
  *min = (int)(float)(-(uint)(0.0 <= fVar2) & (uint)fVar1);
  if (fVar3 <= fVar4) {
    fVar4 = fVar3;
  }
  *max = (int)(float)(-(uint)(0.0 <= fVar3) & (uint)fVar4);
  return;
}


// MeleeWeaponTrail$$Sample
// il2cpp: UnityEngine_Color_o MeleeWeaponTrail__Sample (UnityEngine_Color_array* values, float time, const MethodInfo* method);
// 0x584d880

UnityEngine_Color_o MeleeWeaponTrail__Sample(UnityEngine_Color_array *values,float time,MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Color_o *pUVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Color_o UVar11;
  
  if (values == (UnityEngine_Color_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar3 = (uint)values->max_length;
  fVar9 = (float)(int)(uVar3 - 1);
  fVar6 = time * fVar9;
  fVar7 = floorf(fVar6);
  fVar8 = ceilf(fVar6);
  fVar10 = fVar9;
  if (fVar8 <= fVar9) {
    fVar10 = fVar8;
  }
  fVar8 = (float)(~-(uint)(1.0 <= fVar8) & 0x3f800000 | (uint)fVar10 & -(uint)(1.0 <= fVar8));
  fVar10 = 0.0;
  if ((fVar7 != fVar8) || (NAN(fVar7) || NAN(fVar8))) {
    fVar6 = (fVar6 - fVar7) / (fVar8 - fVar7);
    fVar10 = 1.0;
    if (fVar6 <= 1.0) {
      fVar10 = fVar6;
    }
    fVar10 = (float)(-(uint)(0.0 <= fVar6) & (uint)fVar10);
  }
  fVar6 = fVar9;
  if (fVar7 <= fVar9) {
    fVar6 = fVar7;
  }
  uVar4 = (uint)(float)(-(uint)(0.0 <= fVar7) & (uint)fVar6);
  if (uVar4 < uVar3) {
    if (fVar8 <= fVar9) {
      fVar9 = fVar8;
    }
    uVar5 = (uint)(float)(-(uint)(0.0 <= fVar8) & (uint)fVar9);
    if (uVar5 < uVar3) {
      fVar9 = 0.0;
      if (0.0 <= fVar10) {
        fVar9 = fVar10;
      }
      pUVar1 = values->m_Items + (int)uVar5;
      pUVar2 = values->m_Items + (int)uVar4;
      fVar10 = (pUVar2->fields).r;
      fVar6 = (pUVar2->fields).g;
      fVar7 = (pUVar2->fields).b;
      fVar8 = (pUVar2->fields).a;
      UVar11.fields.g = fVar9 * ((pUVar1->fields).g - fVar6) + fVar6;
      UVar11.fields.r = fVar9 * ((pUVar1->fields).r - fVar10) + fVar10;
      UVar11.fields.a = fVar9 * ((pUVar1->fields).a - fVar8) + fVar8;
      UVar11.fields.b = fVar9 * ((pUVar1->fields).b - fVar7) + fVar7;
      return (UnityEngine_Color_o)UVar11.fields;
    }
  }
  ThrowIndexOutOfRangeException();
}


// MeleeWeaponTrail$$Sample
// il2cpp: float MeleeWeaponTrail__Sample (System_Single_array* values, float time, const MethodInfo* method);
// 0x584d990

float MeleeWeaponTrail__Sample_574d990(System_Single_array *values,float time,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (values == (System_Single_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (uint)values->max_length;
  fVar7 = (float)(int)(uVar1 - 1);
  fVar4 = time * fVar7;
  fVar5 = floorf(fVar4);
  fVar6 = ceilf(fVar4);
  fVar8 = fVar7;
  if (fVar6 <= fVar7) {
    fVar8 = fVar6;
  }
  fVar6 = (float)(~-(uint)(1.0 <= fVar6) & 0x3f800000 | (uint)fVar8 & -(uint)(1.0 <= fVar6));
  fVar8 = 0.0;
  if ((fVar5 != fVar6) || (NAN(fVar5) || NAN(fVar6))) {
    fVar4 = (fVar4 - fVar5) / (fVar6 - fVar5);
    fVar8 = 1.0;
    if (fVar4 <= 1.0) {
      fVar8 = fVar4;
    }
    fVar8 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar8);
  }
  fVar4 = fVar7;
  if (fVar5 <= fVar7) {
    fVar4 = fVar5;
  }
  uVar2 = (uint)(float)(-(uint)(0.0 <= fVar5) & (uint)fVar4);
  if (uVar2 < uVar1) {
    if (fVar6 <= fVar7) {
      fVar7 = fVar6;
    }
    uVar3 = (uint)(float)(-(uint)(0.0 <= fVar6) & (uint)fVar7);
    if (uVar3 < uVar1) {
      fVar7 = 0.0;
      if (0.0 <= fVar8) {
        fVar7 = fVar8;
      }
      return (values->m_Items[(int)uVar3] - values->m_Items[(int)uVar2]) * fVar7 + values->m_Items[(int)uVar2]
      ;
    }
  }
  ThrowIndexOutOfRangeException();
}


// MeleeWeaponTrail$$RemoveOldPoints
// il2cpp: void MeleeWeaponTrail__RemoveOldPoints (MeleeWeaponTrail_o* __this, System_Collections_Generic_List_MeleeWeaponTrail_Point__o* pointList, const MethodInfo* method);
// 0x584c760

void MeleeWeaponTrail__RemoveOldPoints
               (MeleeWeaponTrail_o *__this,
               System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pointList,MethodInfo *method)

{
  MeleeWeaponTrail_Point_o value;
  int iVar1;
  int index;
  int index_00;
  float fVar2;
  MeleeWeaponTrail_Point_o local_50;
  
  if (Il2CppMethodInitialized_07545033 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_RemoveRange);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_set_Item);
    Il2CppMethodInitialized_07545033 = '\x01';
  }
  if (pointList == (System_Collections_Generic_List_MeleeWeaponTrail_Point__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (pointList->fields)._size;
  if (iVar1 < 1) {
    index_00 = 0;
  }
  else {
    index = 0;
    index_00 = 0;
    do {
      fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      System_Collections_Generic_List_MeleeWeaponTrail_Point___get_Item
                (&local_50,pointList,index,
                 (MethodInfo_3ABD6F0 *)
                 MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
      if (fVar2 - local_50.fields.timeCreated <= (__this->fields)._lifeTime) {
        System_Collections_Generic_List_MeleeWeaponTrail_Point___get_Item
                  (&local_50,pointList,index,
                   (MethodInfo_3ABD6F0 *)
                   MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_get_Item);
        value.fields.basePosition.fields.x = local_50.fields.basePosition.fields.x;
        value.fields.timeCreated = local_50.fields.timeCreated;
        value.fields.basePosition.fields.y = local_50.fields.basePosition.fields.y;
        value.fields.basePosition.fields.z = local_50.fields.basePosition.fields.z;
        value.fields.tipPosition.fields.x = local_50.fields.tipPosition.fields.x;
        value.fields.tipPosition.fields.y = local_50.fields.tipPosition.fields.y;
        value.fields.tipPosition.fields.z = local_50.fields.tipPosition.fields.z;
        System_Collections_Generic_List_MeleeWeaponTrail_Point___set_Item
                  (pointList,index_00,value,
                   (MethodInfo_3ABD750 *)
                   MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_set_Item);
        index_00 = index_00 + 1;
      }
      index = index + 1;
      iVar1 = (pointList->fields)._size;
    } while (index < iVar1);
  }
  System_Collections_Generic_List_MeleeWeaponTrail_Point___RemoveRange
            (pointList,index_00,iVar1 - index_00,
             (MethodInfo_3ABFE90 *)
             MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_RemoveRange);
  return;
}


// MeleeWeaponTrail$$.ctor
// il2cpp: void MeleeWeaponTrail___ctor (MeleeWeaponTrail_o* __this, const MethodInfo* method);
// 0x584db60

void MeleeWeaponTrail___ctor(MeleeWeaponTrail_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MeleeWeaponTrail_Point__o *pSVar1;
  System_Collections_Generic_List_Vector3__o *__this_00;
  System_Collections_Generic_List_Color__o *__this_01;
  System_Collections_Generic_List_Vector2__o *__this_02;
  System_Collections_Generic_List_int__o *__this_03;
  
  if (Il2CppMethodInitialized_07545034 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector2_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Color_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Color);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector2);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point);
    Il2CppMethodInitialized_07545034 = '\x01';
  }
  (__this->fields)._emit = true;
  (__this->fields)._use = true;
  (__this->fields)._lifeTime = 1.0;
  (__this->fields)._minVertexDistance = 0.1;
  (__this->fields)._maxVertexDistance = 10.0;
  (__this->fields)._maxAngle = 3.0;
  (__this->fields).subdivisions = 4;
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point);
  System_Collections_Generic_List_MeleeWeaponTrail_Point____ctor
            (pSVar1,(MethodInfo_3ABD0E0 *)
                    MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_ctor);
  (__this->fields)._points = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._points);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point);
  System_Collections_Generic_List_MeleeWeaponTrail_Point____ctor
            (pSVar1,(MethodInfo_3ABD0E0 *)
                    MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Point_ctor);
  (__this->fields)._smoothedPoints = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._smoothedPoints);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            (__this_00,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  (__this->fields)._vertices = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._vertices);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Color);
  System_Collections_Generic_List_Color____ctor
            (__this_01,(MethodInfo_51EB430 *)MethodInfo_System_Collections_Generic_List_Color_ctor);
  (__this->fields)._vertexColors = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._vertexColors);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector2);
  System_Collections_Generic_List_Vector2____ctor
            (__this_02,(MethodInfo_39F8C70 *)MethodInfo_System_Collections_Generic_List_Vector2_ctor);
  (__this->fields)._uvs = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._uvs);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (__this_03,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  (__this->fields)._triangles = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._triangles);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


