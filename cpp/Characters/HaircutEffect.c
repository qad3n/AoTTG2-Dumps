// Type: Characters.HaircutEffect
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Characters/HaircutEffect.cs
// Prior real C# source: none
// --------------------------------

// Characters.HaircutEffect.HairMesh$$.ctor
// il2cpp: void Characters_HaircutEffect_HairMesh___ctor (Characters_HaircutEffect_HairMesh_o* __this, UnityEngine_Transform_o* source, UnityEngine_Mesh_o* mesh, UnityEngine_Material_array* materials, int32_t layer, const MethodInfo* method);
// 0x1821a9430

void Characters_HaircutEffect_HairMesh___ctor
               (Characters_HaircutEffect_HairMesh_o *__this,UnityEngine_Transform_o *source,
               UnityEngine_Mesh_o *mesh,UnityEngine_Material_array *materials,int32_t layer,MethodInfo *method
               )

{
  System_Collections_Generic_List_HaircutEffect_HairPiece__o *__this_00;
  
  if (Il2CppMethodInitialized_184346e4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_HaircutEffect_HairPiece_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_HaircutEffect_HairPiece);
    Il2CppMethodInitialized_184346e4e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_HaircutEffect_HairPiece);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_T__o *)__this_00,0xc,
             (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_HaircutEffect_HairPiece_ctor);
  (__this->fields).Pieces = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Pieces,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Source = source;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Source,source);
  (__this->fields).Mesh = mesh;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Mesh,mesh);
  (__this->fields).Materials = materials;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Materials,materials);
  (__this->fields).Layer = layer;
  return;
}


// Characters.HaircutEffect.HairPiece$$.ctor
// il2cpp: void Characters_HaircutEffect_HairPiece___ctor (Characters_HaircutEffect_HairPiece_o* __this, const MethodInfo* method);
// 0x1821a94f0

void Characters_HaircutEffect_HairPiece___ctor
               (Characters_HaircutEffect_HairPiece_o *__this,MethodInfo *method)

{
  UnityEngine_MaterialPropertyBlock_o *__this_00;
  
  if (Il2CppMethodInitialized_184346e4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MaterialPropertyBlock);
    Il2CppMethodInitialized_184346e4f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_MaterialPropertyBlock);
  UnityEngine_MaterialPropertyBlock___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).Properties = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Properties,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HaircutEffect$$Play
// il2cpp: void Characters_HaircutEffect__Play (UnityEngine_Transform_o* hairSocket, float size, const MethodInfo* method);
// 0x1821aaba0

void Characters_HaircutEffect__Play(UnityEngine_Transform_o *hairSocket,float size,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this;
  Characters_HaircutEffect_o *__this_00;
  
  if (Il2CppMethodInitialized_184346e48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_HaircutEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"HaircutEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG/Haircut");
    Il2CppMethodInitialized_184346e48 = '\x01';
  }
  x = (UnityEngine_Object_o *)UnityEngine_Shader__Find("AoTTG/Haircut",(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor(__this,"HaircutEffect",(MethodInfo *)0x0);
  if ((__this != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__AddComponent_object_
                            (__this,(MethodInfo_6F4D60 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_HaircutEffect),
     __this_00 != (Characters_HaircutEffect_o *)0x0)) {
    if (size <= 0.1) {
      size = 0.1;
    }
    Characters_HaircutEffect__Initialize
              (__this_00,hairSocket,(UnityEngine_Shader_o *)x,size,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.HaircutEffect$$Initialize
// il2cpp: void Characters_HaircutEffect__Initialize (Characters_HaircutEffect_o* __this, UnityEngine_Transform_o* hairSocket, UnityEngine_Shader_o* shader, float size, const MethodInfo* method);
// 0x1821a9560
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821a991b: nop dword ptr [rax + rax]
// asm:   0x1821a9af0: movaps xmm3, xmm6
// asm:   0x1821a9afd: movaps xmm1, xmm6
// asm:   0x1821a9b0a: movaps xmm0, xmm6

void Characters_HaircutEffect__Initialize
               (Characters_HaircutEffect_o *__this,UnityEngine_Transform_o *hairSocket,
               UnityEngine_Shader_o *shader,float size,MethodInfo *method)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_Material_o *pUVar7;
  System_Collections_Generic_List_Material__o *pSVar8;
  UnityEngine_MaterialPropertyBlock_o *pUVar9;
  System_Collections_Generic_List_HaircutEffect_HairPiece__o *pSVar10;
  System_Collections_Generic_List_HaircutEffect_HairMesh__o *pSVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  bool bVar23;
  int32_t iVar24;
  uint uVar25;
  System_Collections_Generic_Dictionary_Material__Material__o *__this_01;
  UnityEngine_GameObject_o *pUVar26;
  UnityEngine_Object_o *pUVar27;
  UnityEngine_Material_array *materials;
  UnityEngine_Material_o *__this_02;
  Il2CppObject *pIVar28;
  UnityEngine_Transform_o *source;
  Characters_HaircutEffect_HairMesh_o *__this_03;
  UnityEngine_Bounds_o *pUVar29;
  Characters_HaircutEffect_HairPiece_o *__this_04;
  UnityEngine_Matrix4x4_o *pUVar30;
  UnityEngine_Vector3_o *pUVar31;
  uint uVar32;
  int iVar33;
  ulonglong uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  UnityEngine_Material_o *local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  UnityEngine_MeshFilter_o *local_198 [2];
  UnityEngine_Vector4_o local_188;
  System_Object_array *local_178;
  UnityEngine_Vector4_Fields local_168;
  UnityEngine_Bounds_o local_158;
  UnityEngine_Vector3_o local_140;
  UnityEngine_Matrix4x4_o local_130 [3];
  
  if (Il2CppMethodInitialized_184346e49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_TryGetComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Material_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HaircutEffect_HairMesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HaircutEffect_HairPiece);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HaircutEffect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_HaircutEffect_HairPiece_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_HaircutEffect_HairMesh_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_HaircutEffect_HairMesh_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mesh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer);
    Il2CppMethodInitialized_184346e49 = '\x01';
  }
  local_198[0] = (UnityEngine_MeshFilter_o *)0x0;
  local_1b8 = (UnityEngine_Material_o *)0x0;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Material_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_Material_Material_ctor);
  if ((hairSocket != (UnityEngine_Transform_o *)0x0) &&
     (local_178 = UnityEngine_Component__GetComponentsInChildren_object__665370
                            ((UnityEngine_Component_o *)hairSocket,
                             (MethodInfo_665370 *)
                             MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer),
     local_178 != (System_Object_array *)0x0)) {
    for (uVar25 = 0; fVar35 = 0.0001, (int)uVar25 < (int)local_178->max_length; uVar25 = uVar25 + 1) {
      if ((uint)local_178->max_length <= uVar25) {
label_1821a9fc9:
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (UnityEngine_Renderer_o *)local_178->m_Items[(int)uVar25];
      if (__this_00 == (UnityEngine_Renderer_o *)0x0) goto label_1821a9fb3;
      bVar23 = UnityEngine_Renderer__get_enabled(__this_00,(MethodInfo *)0x0);
      if (bVar23) {
        pUVar26 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar26 == (UnityEngine_GameObject_o *)0x0) goto label_1821a9fb3;
        bVar23 = UnityEngine_GameObject__get_activeInHierarchy(pUVar26,(MethodInfo *)0x0);
        if (bVar23) {
          bVar6 = (TypeInfo_UnityEngine_SkinnedMeshRenderer->_2).typeHierarchyDepth;
          if (((__this_00->klass->_2).typeHierarchyDepth < bVar6) ||
             ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar6 - 1] !=
              (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer)) {
label_1821a9878:
            bVar6 = (TypeInfo_UnityEngine_MeshRenderer->_2).typeHierarchyDepth;
            pUVar27 = (UnityEngine_Object_o *)0x0;
            if (((bVar6 <= (__this_00->klass->_2).typeHierarchyDepth) &&
                ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar6 - 1] ==
                 (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer)) &&
               (bVar23 = UnityEngine_Component__TryGetComponent_object_
                                   ((UnityEngine_Component_o *)__this_00,(Il2CppObject **)local_198,
                                    (MethodInfo_6657C0 *)
                                    MethodInfo_UnityEngine_Component_TryGetComponent_MeshFilter),
               pUVar27 = (UnityEngine_Object_o *)0x0, bVar23)) {
              if (local_198[0] == (UnityEngine_MeshFilter_o *)0x0) goto label_1821a9fb3;
              pUVar27 = (UnityEngine_Object_o *)
                        UnityEngine_MeshFilter__get_sharedMesh(local_198[0],(MethodInfo *)0x0);
            }
          }
          else {
            pUVar27 = (UnityEngine_Object_o *)
                      UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                                ((UnityEngine_SkinnedMeshRenderer_o *)__this_00,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar23 = UnityEngine_Object__op_Inequality(pUVar27,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar23) goto label_1821a9878;
            pUVar27 = (UnityEngine_Object_o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
            UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)pUVar27,(MethodInfo *)0x0);
            UnityEngine_SkinnedMeshRenderer__BakeMesh
                      ((UnityEngine_SkinnedMeshRenderer_o *)__this_00,(UnityEngine_Mesh_o *)pUVar27,
                       (MethodInfo *)0x0);
            if ((__this->fields)._bakedMeshes == (System_Collections_Generic_List_Mesh__o *)0x0)
            goto label_1821a9fb3;
            il2cpp_runtime_helper_180012890();
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar23 = UnityEngine_Object__op_Equality(pUVar27,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar23) {
            materials = UnityEngine_Renderer__get_sharedMaterials(__this_00,(MethodInfo *)0x0);
            uVar32 = 0;
            if (materials == (UnityEngine_Material_array *)0x0) goto label_1821a9fb3;
            for (; uVar1 = (uint)materials->max_length, (int)uVar32 < (int)uVar1; uVar32 = uVar32 + 1) {
              if (uVar1 <= uVar32) goto label_1821a9fc9;
              pUVar7 = materials->m_Items[(int)uVar32];
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar23 = UnityEngine_Object__op_Equality
                                 ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                 );
              if (!bVar23) {
                if (__this_01 == (System_Collections_Generic_Dictionary_Material__Material__o *)0x0)
                goto label_1821a9fb3;
                bVar23 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                   ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                                    (Il2CppObject *)pUVar7,(Il2CppObject **)&local_1b8,
                                    (MethodInfo_14769C0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_Material_Material_TryGetValue
                                   );
                if (!bVar23) {
                  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
                  UnityEngine_Material___ctor_2ee55e0(__this_02,pUVar7,(MethodInfo *)0x0);
                  if (__this_02 == (UnityEngine_Material_o *)0x0) goto label_1821a9fb3;
                  UnityEngine_Material__set_shader(__this_02,shader,(MethodInfo *)0x0);
                  local_1b8 = __this_02;
                  System_Collections_Generic_Dictionary_object__object___Add
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                             (Il2CppObject *)pUVar7,(Il2CppObject *)__this_02,
                             (MethodInfo_146B4B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_Material_Material_Add);
                  pSVar8 = (__this->fields)._materials;
                  if (pSVar8 == (System_Collections_Generic_List_Material__o *)0x0) goto label_1821a9fb3;
                  il2cpp_runtime_helper_180012890(pSVar8,local_1b8);
                }
                pUVar7 = local_1b8;
                if ((local_1b8 != (UnityEngine_Material_o *)0x0) &&
                   (pIVar28 = il2cpp_vm_Object_IsInst
                                        ((Il2CppObject *)local_1b8,
                                         (((materials->obj).klass)->_1).element_class),
                   pIVar28 == (Il2CppObject *)0x0)) {
                  pIVar28 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar28,(MethodInfo *)0x0);
                }
                if ((uint)materials->max_length <= uVar32) goto label_1821a9fc9;
                materials->m_Items[(int)uVar32] = pUVar7;
                Il2CppCodeGenWriteBarrier(materials->m_Items + (int)uVar32,pUVar7);
              }
            }
            source = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
            pUVar26 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
            if (pUVar26 == (UnityEngine_GameObject_o *)0x0) goto label_1821a9fb3;
            iVar24 = UnityEngine_GameObject__get_layer(pUVar26,(MethodInfo *)0x0);
            __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HaircutEffect_HairMesh);
            Characters_HaircutEffect_HairMesh___ctor
                      (__this_03,source,(UnityEngine_Mesh_o *)pUVar27,materials,iVar24,(MethodInfo *)0x0);
            if (pUVar27 == (UnityEngine_Object_o *)0x0) goto label_1821a9fb3;
            pUVar29 = UnityEngine_Mesh__get_bounds(&local_158,(UnityEngine_Mesh_o *)pUVar27,(MethodInfo *)0x0)
            ;
            local_1ac = (pUVar29->fields).m_Extents.fields.x;
            local_1a4 = (pUVar29->fields).m_Extents.fields.y;
            local_1ac = local_1ac + local_1ac;
            local_19c = (pUVar29->fields).m_Extents.fields.z;
            local_1a4 = local_1a4 + local_1a4;
            local_19c = local_19c + local_19c;
            fVar41 = fVar35;
            if (0.0001 < local_1ac) {
              fVar41 = local_1ac;
            }
            fVar40 = fVar35;
            if (0.0001 < local_1a4) {
              fVar40 = local_1a4;
            }
            if (0.0001 < local_19c) {
              fVar35 = local_19c;
            }
            uVar34 = 0;
            do {
              iVar33 = (int)uVar34;
              pUVar29 = UnityEngine_Mesh__get_bounds
                                  (&local_158,(UnityEngine_Mesh_o *)pUVar27,(MethodInfo *)0x0);
              local_1b0 = (pUVar29->fields).m_Extents.fields.x;
              fVar36 = (pUVar29->fields).m_Center.fields.x;
              fVar37 = (pUVar29->fields).m_Center.fields.y;
              fVar38 = (pUVar29->fields).m_Center.fields.z;
              local_1a8 = (pUVar29->fields).m_Extents.fields.y;
              local_1a0 = (pUVar29->fields).m_Extents.fields.z;
              __this_04 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_Characters_HaircutEffect_HairPiece);
              Characters_HaircutEffect_HairPiece___ctor(__this_04,(MethodInfo *)0x0);
              if (__this_04 == (Characters_HaircutEffect_HairPiece_o *)0x0) goto label_1821a9fb3;
              (__this_04->fields).Pivot.fields.x =
                   (((float)(iVar33 + (int)(uVar34 / 3) * -3) + 0.5) / 3.0) * local_1ac + (fVar36 - local_1b0)
              ;
              (__this_04->fields).Pivot.fields.y =
                   ((float)((uint)(uVar34 / 3) & 1) + 0.5) * 0.5 * local_1a4 + (fVar37 - local_1a8);
              (__this_04->fields).Pivot.fields.z =
                   ((float)(int)(uVar34 / 6) + 0.5) * 0.5 * local_19c + (fVar38 - local_1a0);
              pUVar30 = UnityEngine_Renderer__get_localToWorldMatrix(local_130,__this_00,(MethodInfo *)0x0);
              fVar36 = (pUVar30->fields).m10;
              fVar37 = (pUVar30->fields).m20;
              fVar38 = (pUVar30->fields).m30;
              fVar39 = (pUVar30->fields).m01;
              fVar12 = (pUVar30->fields).m11;
              fVar13 = (pUVar30->fields).m21;
              fVar14 = (pUVar30->fields).m31;
              fVar15 = (pUVar30->fields).m02;
              fVar16 = (pUVar30->fields).m12;
              fVar17 = (pUVar30->fields).m22;
              fVar18 = (pUVar30->fields).m32;
              fVar19 = (pUVar30->fields).m03;
              fVar20 = (pUVar30->fields).m13;
              fVar21 = (pUVar30->fields).m23;
              fVar22 = (pUVar30->fields).m33;
              (__this_04->fields).Matrix.fields.m00 = (pUVar30->fields).m00;
              (__this_04->fields).Matrix.fields.m10 = fVar36;
              (__this_04->fields).Matrix.fields.m20 = fVar37;
              (__this_04->fields).Matrix.fields.m30 = fVar38;
              (__this_04->fields).Matrix.fields.m01 = fVar39;
              (__this_04->fields).Matrix.fields.m11 = fVar12;
              (__this_04->fields).Matrix.fields.m21 = fVar13;
              (__this_04->fields).Matrix.fields.m31 = fVar14;
              (__this_04->fields).Matrix.fields.m02 = fVar15;
              (__this_04->fields).Matrix.fields.m12 = fVar16;
              (__this_04->fields).Matrix.fields.m22 = fVar17;
              (__this_04->fields).Matrix.fields.m32 = fVar18;
              (__this_04->fields).Matrix.fields.m03 = fVar19;
              (__this_04->fields).Matrix.fields.m13 = fVar20;
              (__this_04->fields).Matrix.fields.m23 = fVar21;
              (__this_04->fields).Matrix.fields.m33 = fVar22;
              fVar36 = UnityEngine_Random__Range(0.0,0.35,(MethodInfo *)0x0);
              (__this_04->fields).Delay = fVar36;
              fVar36 = UnityEngine_Random__Range(-0.8,0.8,(MethodInfo *)0x0);
              fVar37 = UnityEngine_Random__Range(0.1,0.5,(MethodInfo *)0x0);
              fVar38 = UnityEngine_Random__Range(-0.8,0.8,(MethodInfo *)0x0);
              (__this_04->fields).Velocity.fields.x = fVar36 * size;
              (__this_04->fields).Velocity.fields.z = fVar38 * size;
              (__this_04->fields).Velocity.fields.y = fVar37 * size;
              pUVar31 = UnityEngine_Random__get_onUnitSphere(&local_140,(MethodInfo *)0x0);
              fVar36 = (pUVar31->fields).x;
              fVar37 = (pUVar31->fields).y;
              fVar38 = (pUVar31->fields).z;
              fVar39 = UnityEngine_Random__Range(140.0,320.0,(MethodInfo *)0x0);
              (__this_04->fields).AngularVelocity.fields.x = fVar36 * fVar39;
              (__this_04->fields).AngularVelocity.fields.y = fVar37 * fVar39;
              (__this_04->fields).AngularVelocity.fields.z = fVar38 * fVar39;
              pUVar9 = (__this_04->fields).Properties;
              if ((TypeInfo_Characters_HaircutEffect->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HaircutEffect);
              }
              if (pUVar9 == (UnityEngine_MaterialPropertyBlock_o *)0x0) goto label_1821a9fb3;
              UnityEngine_MaterialPropertyBlock__SetFloat_2edfd40
                        (pUVar9,TypeInfo_Characters_HaircutEffect->static_fields->PieceId,(float)iVar33,
                         (MethodInfo *)0x0);
              pUVar9 = (__this_04->fields).Properties;
              iVar24 = TypeInfo_Characters_HaircutEffect->static_fields->BoundsMinId;
              pUVar29 = UnityEngine_Mesh__get_bounds
                                  (&local_158,(UnityEngine_Mesh_o *)pUVar27,(MethodInfo *)0x0);
              uVar2 = (pUVar29->fields).m_Extents.fields.x;
              uVar4 = (pUVar29->fields).m_Extents.fields.y;
              uVar3 = (pUVar29->fields).m_Center.fields.x;
              uVar5 = (pUVar29->fields).m_Center.fields.y;
              if (pUVar9 == (UnityEngine_MaterialPropertyBlock_o *)0x0) goto label_1821a9fb3;
              local_168.z = (pUVar29->fields).m_Center.fields.z - (pUVar29->fields).m_Extents.fields.z;
              local_168.y = (float)uVar5 - (float)uVar4;
              local_168.x = (float)uVar3 - (float)uVar2;
              local_168.w = 0.0;
              UnityEngine_MaterialPropertyBlock__SetVector_2ee0d90
                        (pUVar9,iVar24,(UnityEngine_Vector4_o *)&local_168,(MethodInfo *)0x0);
              pUVar9 = (__this_04->fields).Properties;
              if (pUVar9 == (UnityEngine_MaterialPropertyBlock_o *)0x0) goto label_1821a9fb3;
              local_188.fields.w = 0.0;
              local_188.fields.x = 1.0 / fVar41;
              local_188.fields.y = 1.0 / fVar40;
              local_188.fields.z = 1.0 / fVar35;
              UnityEngine_MaterialPropertyBlock__SetVector_2ee0d90
                        (pUVar9,TypeInfo_Characters_HaircutEffect->static_fields->BoundsInvSizeId,&local_188,
                         (MethodInfo *)0x0);
              if ((__this_03 == (Characters_HaircutEffect_HairMesh_o *)0x0) ||
                 (pSVar10 = (__this_03->fields).Pieces,
                 pSVar10 == (System_Collections_Generic_List_HaircutEffect_HairPiece__o *)0x0))
              goto label_1821a9fb3;
              il2cpp_runtime_helper_180012890(pSVar10,__this_04);
              uVar34 = (ulonglong)(iVar33 + 1U);
            } while ((int)(iVar33 + 1U) < 0xc);
            pSVar11 = (__this->fields)._meshes;
            if (pSVar11 == (System_Collections_Generic_List_HaircutEffect_HairMesh__o *)0x0)
            goto label_1821a9fb3;
            il2cpp_runtime_helper_180012890(pSVar11,__this_03,
                          MethodInfo_System_Collections_Generic_List_HaircutEffect_HairMesh_Add);
          }
        }
      }
    }
    pSVar11 = (__this->fields)._meshes;
    if (pSVar11 != (System_Collections_Generic_List_HaircutEffect_HairMesh__o *)0x0) {
      if ((pSVar11->fields)._size == 0) {
        pUVar27 = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(pUVar27,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_1821a9fb3:
  ThrowNullReferenceException();
}


// Characters.HaircutEffect$$LateUpdate
// il2cpp: void Characters_HaircutEffect__LateUpdate (Characters_HaircutEffect_o* __this, const MethodInfo* method);
// 0x1821a9fd0
// eh: try 0x1821aa180..0x1821aa84c -> pad 0x18333f010 (+2 call sites) catch Il2CppExceptionWrapper
// eh: try 0x1821aa87e..0x1821aa885 -> pad 0x180358090 cleanup
// eh: try 0x1821aa8fb..0x1821aa935 -> pad 0x18333efe0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 45 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821aa17d: nop dword ptr [rax]
// asm:   0x1821aa208: xorps xmm11, xmm11
// asm:   0x1821aa20c: nop dword ptr [rax]
// asm:   0x1821aa7f6: mov r13, qword ptr [rsp + 0x2e0]
// asm:   0x1821aa7fe: jmp 0x1821aa208
// asm:   0x1821aa817: mov rdx, qword ptr [rip + 0x1ef95c2]  ; MethodInfo_System_Collections_Generic_List_Enumerator_HaircutEffect_HairPiece_Dispose
// asm:   0x1821aa81e: mov rcx, qword ptr [rsp + 0x98]
// asm:   0x1821aa826: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821aa82b: mov rcx, qword ptr [rsp + 0x90]
// asm:   0x1821aa833: test rcx, rcx
// asm:   0x1821aa836: jne 0x1821aa925
// asm:   0x1821aa83c: xor r15d, r15d
// asm:   0x1821aa83f: mov r13, qword ptr [rsp + 0x2e0]
// asm:   0x1821aa847: jmp 0x1821aa180
// asm:   0x1821aa85f: mov rdx, qword ptr [rip + 0x1ef92da]  ; MethodInfo_System_Collections_Generic_List_Enumerator_HaircutEffect_HairMesh_Dispose
// asm:   0x1821aa866: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x1821aa86b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821aa870: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x1821aa875: test rcx, rcx
// asm:   0x1821aa878: jne 0x1821aa935
// asm:   0x1821aa87e: jmp 0x1821aa8ac
// asm:   0x1821aa925: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821aa935: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333efe0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333efe5: push rbp
// asm:   0x18333efe6: sub rsp, 0x60
// asm:   0x18333efea: mov rbp, rdx
// asm:   0x18333efed: mov rax, qword ptr [rbp + 0x198]
// asm:   0x18333eff4: mov rcx, qword ptr [rax]
// asm:   0x18333eff7: mov qword ptr [rbp + 0x90], rcx
// asm:   0x18333effe: movabs rax, 0
// asm:   0x18333f008: add rsp, 0x60
// asm:   0x18333f00c: pop rbp
// asm:   0x18333f00d: ret 
// asm:   0x18333f010: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f015: push rbp
// asm:   0x18333f016: sub rsp, 0x60
// asm:   0x18333f01a: mov rbp, rdx
// asm:   0x18333f01d: mov rax, qword ptr [rbp + 0x1a0]
// asm:   0x18333f024: mov rcx, qword ptr [rax]
// asm:   0x18333f027: mov qword ptr [rbp + 0x60], rcx
// asm:   0x18333f02b: movabs rax, 0
// asm:   0x18333f035: add rsp, 0x60
// asm:   0x18333f039: pop rbp
// asm:   0x18333f03a: ret 

void Characters_HaircutEffect__LateUpdate(Characters_HaircutEffect_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  System_Collections_Generic_List_HaircutEffect_HairMesh__o *__this_00;
  Il2CppClass *pIVar14;
  UnityEngine_Vector3_StaticFields *pUVar15;
  UnityEngine_Mesh_o *mesh;
  UnityEngine_Material_o *material;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  System_Collections_Generic_List_T__o *pSVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  Il2CppObject *pIVar26;
  Il2CppObject *pIVar27;
  bool bVar28;
  int32_t iVar29;
  UnityEngine_Matrix4x4_o *pUVar30;
  UnityEngine_Vector3_o *pUVar31;
  UnityEngine_Quaternion_o *pUVar32;
  UnityEngine_Object_o *pUVar33;
  int iVar34;
  uint submeshIndex;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  UnityEngine_Vector3_o local_268;
  UnityEngine_Vector3_o local_258;
  undefined8 local_248;
  System_Collections_Generic_List_Enumerator_object__o *local_240;
  System_Collections_Generic_List_Enumerator_object__o local_238;
  System_Collections_Generic_List_Enumerator_object__o local_220;
  UnityEngine_Vector3_Fields local_208;
  UnityEngine_Matrix4x4_Fields local_1f8;
  System_Collections_Generic_List_Enumerator_T__o local_1b8;
  UnityEngine_Matrix4x4_Fields local_198;
  System_Collections_Generic_List_Enumerator_T__o local_158;
  UnityEngine_Vector3_o local_130;
  UnityEngine_Matrix4x4_o local_120 [3];
  
  if (Il2CppMethodInitialized_184346e4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_HaircutEffect_HairPiece_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_HaircutEffect_HairMesh_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_HaircutEffect_HairPiece_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_HaircutEffect_HairMesh_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_HaircutEffect_HairMesh_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_HaircutEffect_HairPiece_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Graphics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HaircutEffect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_HaircutEffect_HairMesh_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_HaircutEffect_HairPiece_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_184346e4a = '\x01';
  }
  local_238.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_238.fields._index = 0;
  local_238.fields._version = 0;
  local_238.fields._current = (Il2CppObject *)0x0;
  local_220.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_220.fields._index = 0;
  local_220.fields._version = 0;
  local_220.fields._current = (Il2CppObject *)0x0;
  fVar36 = (__this->fields)._age;
  fVar35 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._age = fVar35 + fVar36;
  if (1.45 <= fVar35 + fVar36) {
    pUVar33 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(pUVar33,(MethodInfo *)0x0);
  }
  else {
    __this_00 = (__this->fields)._meshes;
    if (__this_00 == (System_Collections_Generic_List_HaircutEffect_HairMesh__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              (&local_158,(System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_HaircutEffect_HairMesh_GetEnumerator);
    local_238.fields._list = local_158.fields._list;
    local_238.fields._index = local_158.fields._index;
    local_238.fields._version = local_158.fields._version;
    local_238.fields._current = local_158.fields._current;
    while (bVar28 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (&local_238,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_HaircutEffect_HairMesh_MoveNext
                              ), pIVar26 = local_238.fields._current, bVar28) {
      if (local_238.fields._current == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (local_238.fields._current[3].klass == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                (&local_1b8,(System_Collections_Generic_List_T__o *)local_238.fields._current[3].klass,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_HaircutEffect_HairPiece_GetEnumerator);
      local_220.fields._list = local_1b8.fields._list;
      local_220.fields._index = local_1b8.fields._index;
      local_220.fields._version = local_1b8.fields._version;
      local_220.fields._current = local_1b8.fields._current;
      local_248 = 0;
      local_240 = &local_220;
label_1821aa210:
      bVar28 = System_Collections_Generic_List_Enumerator_object___MoveNext
                         (&local_220,
                          (MethodInfo_153A2A0 *)
                          MethodInfo_System_Collections_Generic_List_Enumerator_HaircutEffect_HairPiece_MoveNext
                         );
      pIVar27 = local_220.fields._current;
      if (bVar28) {
        if (local_220.fields._current == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        fVar36 = (__this->fields)._age - *(float *)((longlong)&local_220.fields._current[7].klass + 4);
        if (0.0 <= fVar36) goto label_1821aa255;
        fVar36 = 0.0;
        goto label_1821aa25e;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_220,
                 MethodInfo_System_Collections_Generic_List_Enumerator_HaircutEffect_HairPiece_Dispose);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_238,
               MethodInfo_System_Collections_Generic_List_Enumerator_HaircutEffect_HairMesh_Dispose);
  }
  return;
label_1821aa255:
  if (fVar36 < 1.1) {
label_1821aa25e:
    if (*(char *)&local_220.fields._current[7].monitor == '\0') {
      pIVar14 = pIVar26[1].klass;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar28 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pIVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar28) {
        if (pIVar26[1].klass == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar30 = UnityEngine_Transform__get_localToWorldMatrix
                            ((UnityEngine_Matrix4x4_o *)&local_1f8,(UnityEngine_Transform_o *)pIVar26[1].klass
                             ,(MethodInfo *)0x0);
        uVar16 = *(undefined8 *)&(pUVar30->fields).m20;
        uVar17 = *(undefined8 *)&(pUVar30->fields).m01;
        uVar18 = *(undefined8 *)&(pUVar30->fields).m21;
        uVar19 = *(undefined8 *)&(pUVar30->fields).m02;
        uVar20 = *(undefined8 *)&(pUVar30->fields).m22;
        uVar21 = *(undefined8 *)&(pUVar30->fields).m03;
        uVar22 = *(undefined8 *)&(pUVar30->fields).m23;
        *(undefined8 *)((longlong)&pIVar27[3].klass + 4) = *(undefined8 *)&pUVar30->fields;
        *(undefined8 *)((longlong)&pIVar27[3].monitor + 4) = uVar16;
        *(undefined8 *)((longlong)&pIVar27[4].klass + 4) = uVar17;
        *(undefined8 *)((longlong)&pIVar27[4].monitor + 4) = uVar18;
        *(undefined8 *)((longlong)&pIVar27[5].klass + 4) = uVar19;
        *(undefined8 *)((longlong)&pIVar27[5].monitor + 4) = uVar20;
        *(undefined8 *)((longlong)&pIVar27[6].klass + 4) = uVar21;
        *(undefined8 *)((longlong)&pIVar27[6].monitor + 4) = uVar22;
      }
      *(bool *)&pIVar27[7].monitor = *(float *)((longlong)&pIVar27[7].klass + 4) <= (__this->fields)._age;
    }
    fVar35 = *(float *)&pIVar27[1].klass;
    fVar1 = *(float *)((longlong)&pIVar27[1].klass + 4);
    fVar2 = *(float *)&pIVar27[1].monitor;
    fVar39 = *(float *)((longlong)&pIVar27[6].klass + 4);
    fVar37 = *(float *)((longlong)&pIVar27[3].klass + 4);
    fVar3 = *(float *)((longlong)&pIVar27[4].klass + 4);
    fVar4 = *(float *)((longlong)&pIVar27[5].klass + 4);
    fVar40 = *(float *)&pIVar27[6].monitor;
    fVar5 = *(float *)&pIVar27[3].monitor;
    fVar6 = *(float *)&pIVar27[4].monitor;
    fVar7 = *(float *)&pIVar27[5].monitor;
    fVar38 = *(float *)((longlong)&pIVar27[6].monitor + 4);
    fVar8 = *(float *)((longlong)&pIVar27[3].monitor + 4);
    fVar9 = *(float *)((longlong)&pIVar27[4].monitor + 4);
    fVar10 = *(float *)((longlong)&pIVar27[5].monitor + 4);
    fVar11 = *(float *)((longlong)&pIVar27[1].monitor + 4);
    fVar12 = *(float *)&pIVar27[2].klass;
    fVar13 = *(float *)((longlong)&pIVar27[2].klass + 4);
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    fVar39 = fVar2 * fVar4 + fVar1 * fVar3 + fVar35 * fVar37 + fVar39;
    fVar40 = fVar2 * fVar7 + fVar1 * fVar6 + fVar35 * fVar5 + fVar40;
    fVar38 = fVar2 * fVar10 + fVar1 * fVar9 + fVar35 * fVar8 + fVar38;
    pUVar31 = UnityEngine_Physics__get_gravity(&local_130,(MethodInfo *)0x0);
    fVar37 = fVar36 * 0.5 * fVar36;
    fVar35 = (pUVar31->fields).x;
    fVar1 = (pUVar31->fields).y;
    fVar2 = (pUVar31->fields).z;
    local_268.fields.x = fVar36 * *(float *)&pIVar27[2].monitor * 0.017453292;
    local_268.fields.y = fVar36 * *(float *)((longlong)&pIVar27[2].monitor + 4) * 0.017453292;
    local_268.fields.z = fVar36 * *(float *)&pIVar27[3].klass * 0.017453292;
    pUVar32 = UnityEngine_Quaternion__Internal_FromEulerRad
                        ((UnityEngine_Quaternion_o *)&local_158,&local_268,(MethodInfo *)0x0);
    pSVar23 = *(System_Collections_Generic_List_T__o **)&pUVar32->fields;
    uVar16._0_4_ = (int32_t)(pUVar32->fields).z;
    uVar16._4_4_ = (int32_t)(pUVar32->fields).w;
    if (Il2CppMethodInitialized_18433dbeb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbeb = '\x01';
    }
    pUVar15 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_208.x = (pUVar15->oneVector).fields.x;
    local_208.y = (pUVar15->oneVector).fields.y;
    local_208.z = (pUVar15->oneVector).fields.z;
    local_258.fields.x = fVar37 * fVar35 + fVar11 * fVar36 + fVar39;
    local_258.fields.y = fVar37 * fVar1 + fVar12 * fVar36 + fVar40;
    local_258.fields.z = fVar37 * fVar2 + fVar13 * fVar36 + fVar38;
    local_1b8.fields._list = pSVar23;
    local_1b8.fields._8_8_ = uVar16;
    pUVar30 = UnityEngine_Matrix4x4__Internal_TRS
                        (local_120,&local_258,(UnityEngine_Quaternion_o *)&local_1b8,
                         (UnityEngine_Vector3_o *)&local_208,(MethodInfo *)0x0);
    local_198.m00 = 1.0;
    local_198.m10 = 0.0;
    local_198.m20 = 0.0;
    local_198.m30 = 0.0;
    local_198.m01 = 0.0;
    local_198.m11 = 1.0;
    local_198.m21 = 0.0;
    local_198.m31 = 0.0;
    local_198.m02 = 0.0;
    local_198.m12 = 0.0;
    local_198.m22 = 1.0;
    local_198.m32 = 0.0;
    local_198.m13 = -fVar40;
    local_198.m03 = -fVar39;
    local_198.m33 = 1.0;
    local_198.m23 = -fVar38;
    local_1f8.m00 = (pUVar30->fields).m00;
    local_1f8.m10 = (pUVar30->fields).m10;
    local_1f8.m20 = (pUVar30->fields).m20;
    local_1f8.m30 = (pUVar30->fields).m30;
    local_1f8.m01 = (pUVar30->fields).m01;
    local_1f8.m11 = (pUVar30->fields).m11;
    local_1f8.m21 = (pUVar30->fields).m21;
    local_1f8.m31 = (pUVar30->fields).m31;
    local_1f8.m02 = (pUVar30->fields).m02;
    local_1f8.m12 = (pUVar30->fields).m12;
    local_1f8.m22 = (pUVar30->fields).m22;
    local_1f8.m32 = (pUVar30->fields).m32;
    local_1f8.m03 = (pUVar30->fields).m03;
    local_1f8.m13 = (pUVar30->fields).m13;
    local_1f8.m23 = (pUVar30->fields).m23;
    local_1f8.m33 = (pUVar30->fields).m33;
    pUVar30 = UnityEngine_Matrix4x4__op_Multiply
                        (local_120,(UnityEngine_Matrix4x4_o *)&local_1f8,(UnityEngine_Matrix4x4_o *)&local_198
                         ,(MethodInfo *)0x0);
    local_1f8._0_8_ = *(undefined8 *)((longlong)&pIVar27[3].klass + 4);
    local_1f8._8_8_ = *(undefined8 *)((longlong)&pIVar27[3].monitor + 4);
    local_1f8._16_8_ = *(undefined8 *)((longlong)&pIVar27[4].klass + 4);
    local_1f8._24_8_ = *(undefined8 *)((longlong)&pIVar27[4].monitor + 4);
    local_1f8._32_8_ = *(undefined8 *)((longlong)&pIVar27[5].klass + 4);
    local_1f8._40_8_ = *(undefined8 *)((longlong)&pIVar27[5].monitor + 4);
    local_1f8._48_8_ = *(undefined8 *)((longlong)&pIVar27[6].klass + 4);
    local_1f8._56_8_ = *(undefined8 *)((longlong)&pIVar27[6].monitor + 4);
    local_198.m00 = (pUVar30->fields).m00;
    local_198.m10 = (pUVar30->fields).m10;
    local_198.m20 = (pUVar30->fields).m20;
    local_198.m30 = (pUVar30->fields).m30;
    local_198.m01 = (pUVar30->fields).m01;
    local_198.m11 = (pUVar30->fields).m11;
    local_198.m21 = (pUVar30->fields).m21;
    local_198.m31 = (pUVar30->fields).m31;
    local_198.m02 = (pUVar30->fields).m02;
    local_198.m12 = (pUVar30->fields).m12;
    local_198.m22 = (pUVar30->fields).m22;
    local_198.m32 = (pUVar30->fields).m32;
    local_198.m03 = (pUVar30->fields).m03;
    local_198.m13 = (pUVar30->fields).m13;
    local_198.m23 = (pUVar30->fields).m23;
    local_198.m33 = (pUVar30->fields).m33;
    pUVar30 = UnityEngine_Matrix4x4__op_Multiply
                        (local_120,(UnityEngine_Matrix4x4_o *)&local_198,(UnityEngine_Matrix4x4_o *)&local_1f8
                         ,(MethodInfo *)0x0);
    uVar17._0_4_ = (pUVar30->fields).m00;
    uVar17._4_4_ = (pUVar30->fields).m10;
    uVar18._0_4_ = (pUVar30->fields).m20;
    uVar18._4_4_ = (pUVar30->fields).m30;
    uVar19._0_4_ = (pUVar30->fields).m01;
    uVar19._4_4_ = (pUVar30->fields).m11;
    uVar20._0_4_ = (pUVar30->fields).m21;
    uVar20._4_4_ = (pUVar30->fields).m31;
    uVar21._0_4_ = (pUVar30->fields).m02;
    uVar21._4_4_ = (pUVar30->fields).m12;
    uVar22._0_4_ = (pUVar30->fields).m22;
    uVar22._4_4_ = (pUVar30->fields).m32;
    uVar24._0_4_ = (pUVar30->fields).m03;
    uVar24._4_4_ = (pUVar30->fields).m13;
    uVar25._0_4_ = (pUVar30->fields).m23;
    uVar25._4_4_ = (pUVar30->fields).m33;
    pIVar14 = pIVar27[8].klass;
    if ((TypeInfo_Characters_HaircutEffect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HaircutEffect);
    }
    fVar36 = (fVar36 - 0.85) * 4.0;
    if (fVar36 < 0.0) {
      fVar36 = 0.0;
    }
    else if (1.0 < fVar36) {
      fVar36 = 1.0;
    }
    if (pIVar14 == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_MaterialPropertyBlock__SetFloat_2edfd40
              ((UnityEngine_MaterialPropertyBlock_o *)pIVar14,
               TypeInfo_Characters_HaircutEffect->static_fields->FadeId,fVar36,(MethodInfo *)0x0);
    submeshIndex = 0;
    while( true ) {
      if (pIVar26[1].monitor == (UnityEngine_Mesh_o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar29 = UnityEngine_Mesh__get_subMeshCount(pIVar26[1].monitor,(MethodInfo *)0x0);
      if (pIVar26[2].klass == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
      iVar34 = *(int *)&((pIVar26[2].klass)->_1).namespaze;
      if (iVar29 < iVar34) {
        iVar34 = iVar29;
      }
      if (iVar34 <= (int)submeshIndex) break;
      if (*(uint *)&((pIVar26[2].klass)->_1).namespaze <= submeshIndex) {
        ThrowIndexOutOfRangeException();
      }
      pUVar33 = (&((pIVar26[2].klass)->_1).byval_arg.data)[(int)submeshIndex];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar28 = UnityEngine_Object__op_Inequality(pUVar33,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar28) {
        pIVar14 = pIVar26[2].klass;
        if (pIVar14 == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        if (*(uint *)&(pIVar14->_1).namespaze <= submeshIndex) {
          ThrowIndexOutOfRangeException();
        }
        mesh = pIVar26[1].monitor;
        material = (&(pIVar14->_1).byval_arg.data)[(int)submeshIndex];
        iVar29 = *(int32_t *)&pIVar26[2].monitor;
        pIVar14 = pIVar27[8].klass;
        if ((TypeInfo_UnityEngine_Graphics->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Graphics);
        }
        local_1f8._0_8_ = uVar17;
        local_1f8._8_8_ = uVar18;
        local_1f8._16_8_ = uVar19;
        local_1f8._24_8_ = uVar20;
        local_1f8._32_8_ = uVar21;
        local_1f8._40_8_ = uVar22;
        local_1f8._48_8_ = uVar24;
        local_1f8._56_8_ = uVar25;
        UnityEngine_Graphics__DrawMesh_2ec94f0
                  (mesh,(UnityEngine_Matrix4x4_o *)&local_1f8,material,iVar29,(UnityEngine_Camera_o *)0x0,
                   submeshIndex,(UnityEngine_MaterialPropertyBlock_o *)pIVar14,0,true,
                   (UnityEngine_Transform_o *)0x0,0,(MethodInfo *)0x0);
      }
      submeshIndex = submeshIndex + 1;
    }
  }
  goto label_1821aa210;
}


// Characters.HaircutEffect$$OnDestroy
// il2cpp: void Characters_HaircutEffect__OnDestroy (Characters_HaircutEffect_o* __this, const MethodInfo* method);
// 0x1821aa950
// eh: try 0x1821aaa50..0x1821aab4b -> pad 0x183317f30 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821aaa49: nop dword ptr [rax]
// asm:   0x1821aaa9c: mov rdx, qword ptr [rip + 0x1ee1f25]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose
// asm:   0x1821aaaa3: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821aaaa8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821aaaad: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821aaab2: test rcx, rcx
// asm:   0x1821aaab5: jne 0x1821aab8c
// asm:   0x1821aaabb: mov rsi, qword ptr [rsp + 0x90]
// asm:   0x1821aab5c: mov rdx, qword ptr [rip + 0x1ee2b85]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_Dispose
// asm:   0x1821aab63: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821aab68: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821aab6d: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821aab72: test rcx, rcx
// asm:   0x1821aab75: jne 0x1821aab92
// asm:   0x1821aab8c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821aab92: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void Characters_HaircutEffect__OnDestroy(Characters_HaircutEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Material__o *__this_00;
  System_Collections_Generic_List_Mesh__o *__this_01;
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  undefined1 local_58 [16];
  UnityEngine_Object_o *local_48;
  undefined1 local_40 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_38;
  UnityEngine_Object_o *local_30;
  undefined1 local_28 [8];
  uint64_t uStack_20;
  UnityEngine_Object_o *local_18;
  
  if (Il2CppMethodInitialized_184346e4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Material_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_GetEnumerator)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346e4b = '\x01';
  }
  local_40 = (undefined1  [8])0x0;
  pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_30 = (UnityEngine_Object_o *)0x0;
  local_28 = (undefined1  [8])0x0;
  uStack_20 = 0;
  local_18 = (UnityEngine_Object_o *)0x0;
  __this_00 = (__this->fields)._materials;
  if (__this_00 != (System_Collections_Generic_List_Material__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
    local_40 = (undefined1  [8])local_58._0_8_;
    pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58._8_8_;
    local_30 = local_48;
    local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_40,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
      pUVar1 = local_30;
      if (!bVar2) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
               MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
    __this_01 = (__this->fields)._bakedMeshes;
    if (__this_01 != (System_Collections_Generic_List_Mesh__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
                 (System_Collections_Generic_List_T__o *)__this_01,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Mesh_GetEnumerator);
      local_28 = (undefined1  [8])local_58._0_8_;
      uStack_20 = local_58._8_8_;
      local_18 = local_48;
      local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_MoveNext);
        pUVar1 = local_18;
        if (!bVar2) break;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
                 MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_Dispose);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HaircutEffect$$.ctor
// il2cpp: void Characters_HaircutEffect___ctor (Characters_HaircutEffect_o* __this, const MethodInfo* method);
// 0x1821aad90

void Characters_HaircutEffect___ctor(Characters_HaircutEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HaircutEffect_HairMesh__o *__this_00;
  System_Collections_Generic_List_Material__o *__this_01;
  System_Collections_Generic_List_Mesh__o *__this_02;
  
  if (Il2CppMethodInitialized_184346e4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_HaircutEffect_HairMesh_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Mesh);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_HaircutEffect_HairMesh);
    Il2CppMethodInitialized_184346e4c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_HaircutEffect_HairMesh);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_HaircutEffect_HairMesh_ctor);
  (__this->fields)._meshes = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._meshes,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
  (__this->fields)._materials = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._materials,__this_01);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Mesh);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Mesh_ctor);
  (__this->fields)._bakedMeshes = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._bakedMeshes,__this_02);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HaircutEffect$$.cctor
// il2cpp: void Characters_HaircutEffect___cctor (const MethodInfo* method);
// 0x1821aacc0

void Characters_HaircutEffect___cctor(MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184346e4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HaircutEffect);
    il2cpp_codegen_initialize_runtime_metadata(&"_BoundsInvSize");
    il2cpp_codegen_initialize_runtime_metadata(&"_BoundsMin");
    il2cpp_codegen_initialize_runtime_metadata(&"_Fade");
    il2cpp_codegen_initialize_runtime_metadata(&"_Piece");
    Il2CppMethodInitialized_184346e4d = '\x01';
  }
  iVar1 = UnityEngine_Shader__PropertyToID("_Piece",(MethodInfo *)0x0);
  TypeInfo_Characters_HaircutEffect->static_fields->PieceId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_Fade",(MethodInfo *)0x0);
  TypeInfo_Characters_HaircutEffect->static_fields->FadeId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_BoundsMin",(MethodInfo *)0x0);
  TypeInfo_Characters_HaircutEffect->static_fields->BoundsMinId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_BoundsInvSize",(MethodInfo *)0x0);
  TypeInfo_Characters_HaircutEffect->static_fields->BoundsInvSizeId = iVar1;
  return;
}


