// Type: Characters.HaircutEffect
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HaircutEffect.cs
// Prior real C# source: none
// --------------------------------

// Characters.HaircutEffect.HairMesh$$.ctor
// il2cpp: void Characters_HaircutEffect_HairMesh___ctor (Characters_HaircutEffect_HairMesh_o* __this, UnityEngine_Transform_o* source, UnityEngine_Mesh_o* mesh, UnityEngine_Material_array* materials, int32_t layer, const MethodInfo* method);
// 0x5c46a70

void Characters_HaircutEffect_HairMesh___ctor
               (Characters_HaircutEffect_HairMesh_o *__this,UnityEngine_Transform_o *source,
               UnityEngine_Mesh_o *mesh,UnityEngine_Material_array *materials,int32_t layer,MethodInfo *method
               )

{
  System_Collections_Generic_List_HaircutEffect_HairPiece__o *__this_00;
  
  if (Il2CppMethodInitialized_07547834 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_HaircutEffect_HairPiece_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_HaircutEffect_HairPiece);
    Il2CppMethodInitialized_07547834 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_HaircutEffect_HairPiece);
  System_Collections_Generic_List_object____ctor_395c990
            ((System_Collections_Generic_List_object__o *)__this_00,0xc,
             (MethodInfo_395C990 *)MethodInfo_System_Collections_Generic_List_HaircutEffect_HairPiece_ctor);
  (__this->fields).Pieces = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Pieces);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Source = source;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Source);
  (__this->fields).Mesh = mesh;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Mesh);
  (__this->fields).Materials = materials;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Materials);
  (__this->fields).Layer = layer;
  return;
}


// Characters.HaircutEffect.HairPiece$$.ctor
// il2cpp: void Characters_HaircutEffect_HairPiece___ctor (Characters_HaircutEffect_HairPiece_o* __this, const MethodInfo* method);
// 0x5c46b40

void Characters_HaircutEffect_HairPiece___ctor
               (Characters_HaircutEffect_HairPiece_o *__this,MethodInfo *method)

{
  UnityEngine_MaterialPropertyBlock_o *__this_00;
  
  if (Il2CppMethodInitialized_07547835 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MaterialPropertyBlock);
    Il2CppMethodInitialized_07547835 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_MaterialPropertyBlock);
  UnityEngine_MaterialPropertyBlock___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).Properties = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Properties);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HaircutEffect$$Play
// il2cpp: void Characters_HaircutEffect__Play (UnityEngine_Transform_o* hairSocket, float size, const MethodInfo* method);
// 0x5c45cc0

void Characters_HaircutEffect__Play(UnityEngine_Transform_o *hairSocket,float size,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this;
  Characters_HaircutEffect_o *__this_00;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_0754782e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanComponentCache);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_HaircutEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"HaircutEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Haircut");
    Il2CppMethodInitialized_0754782e = '\x01';
  }
  if ((TypeInfo_Characters_BasicTitanComponentCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
  }
  x = (UnityEngine_Object_o *)Characters_BasicTitanComponentCache__LoadShader("Haircut",method);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor(__this,"HaircutEffect",(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_353B6A0 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_HaircutEffect);
    if (__this_00 != (Characters_HaircutEffect_o *)0x0) {
      if (size <= 0.1) {
        size = 0.1;
      }
      Characters_HaircutEffect__Initialize(__this_00,hairSocket,(UnityEngine_Shader_o *)x,size,in_RCX);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HaircutEffect$$Initialize
// il2cpp: void Characters_HaircutEffect__Initialize (Characters_HaircutEffect_o* __this, UnityEngine_Transform_o* hairSocket, UnityEngine_Shader_o* shader, float size, const MethodInfo* method);
// 0x5c45e00
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c45fdc: nop dword ptr [rax]
// asm:   0x5c460d7: jmp 0x5c46215
// asm:   0x5c461cc: jmp 0x5c46215
// asm:   0x5c461f1: nop word ptr cs:[rax + rax]
// asm:   0x5c4639d: mov rbp, qword ptr [rsp + 0x28]
// asm:   0x5c463a2: test rbp, rbp
// asm:   0x5c463fe: jmp 0x5c463c0
// asm:   0x5c469f8: jmp 0x5c46215

void Characters_HaircutEffect__Initialize
               (Characters_HaircutEffect_o *__this,UnityEngine_Transform_o *hairSocket,
               UnityEngine_Shader_o *shader,float size,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  byte bVar3;
  uint32_t uVar4;
  UnityEngine_Renderer_o *__this_00;
  System_Collections_Generic_List_Mesh__o *__this_01;
  UnityEngine_Mesh_array *pUVar5;
  UnityEngine_Material_o *pUVar6;
  System_Collections_Generic_List_Material__o *__this_02;
  UnityEngine_Material_array *pUVar7;
  System_Collections_Generic_List_HaircutEffect_HairPiece__o *__this_03;
  Characters_HaircutEffect_HairPiece_array *pCVar8;
  System_Collections_Generic_List_HaircutEffect_HairMesh__o *pSVar9;
  Characters_HaircutEffect_HairMesh_array *pCVar10;
  MethodInfo *pMVar11;
  bool bVar12;
  int32_t iVar13;
  System_Object_array *pSVar14;
  UnityEngine_GameObject_o *pUVar15;
  UnityEngine_Renderer_c *pUVar16;
  UnityEngine_Object_o *pUVar17;
  UnityEngine_Material_array *materials;
  ulong uVar18;
  UnityEngine_Material_o *pUVar19;
  Il2CppObject *pIVar20;
  UnityEngine_Transform_o *source;
  Characters_HaircutEffect_HairMesh_o *__this_04;
  Characters_HaircutEffect_HairPiece_o *__this_05;
  UnityEngine_MaterialPropertyBlock_o *pUVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  UnityEngine_MaterialPropertyBlock_o **targetAddress;
  MethodInfo *in_R9;
  uint uVar25;
  UnityEngine_Material_o **targetAddress_00;
  float fVar26;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector3_o UVar30;
  UnityEngine_Material_o *pUStack_150;
  undefined1 auStack_148 [8];
  undefined4 uStack_140;
  undefined4 uStack_13c;
  System_Collections_Generic_Dictionary_Material__Material__o *pSStack_138;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  UnityEngine_MeshFilter_o *pUStack_110;
  System_Object_array *pSStack_108;
  ulong uStack_100;
  UnityEngine_Shader_o *pUStack_f8;
  UnityEngine_Matrix4x4_o UStack_f0;
  UnityEngine_Bounds_o UStack_b0;
  float fStack_98;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  pUStack_f8 = shader;
  fStack_98 = size;
  if (Il2CppMethodInitialized_0754782f == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer);
    Il2CppMethodInitialized_0754782f = '\x01';
  }
  pUStack_110 = (UnityEngine_MeshFilter_o *)0x0;
  pUStack_150 = (UnityEngine_Material_o *)0x0;
  pSStack_138 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Material_Material);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSStack_138,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_Material_Material_ctor);
  if ((hairSocket != (UnityEngine_Transform_o *)0x0) &&
     (pSVar14 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                          ((UnityEngine_Component_o *)hairSocket,
                           (MethodInfo_34B11B0 *)
                           MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer),
     pSVar14 != (System_Object_array *)0x0)) {
    uVar25 = (uint)pSVar14->max_length;
    if (0 < (int)uVar25) {
      fStack_88 = fStack_98;
      fStack_84 = fStack_98;
      fStack_80 = fStack_98;
      fStack_7c = fStack_98;
      uVar18 = 0;
      pSStack_108 = pSVar14;
      do {
        if (uVar25 <= (uint)uVar18) {
label_05c46a54:
          ThrowIndexOutOfRangeException();
        }
        __this_00 = (UnityEngine_Renderer_o *)pSVar14->m_Items[(int)(uint)uVar18];
        if (__this_00 == (UnityEngine_Renderer_o *)0x0) goto label_05c46a4f;
        bVar12 = UnityEngine_Renderer__get_enabled(__this_00,(MethodInfo *)0x0);
        if (bVar12) {
          pUVar15 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_05c46a4f;
          bVar12 = UnityEngine_GameObject__get_activeInHierarchy(pUVar15,(MethodInfo *)0x0);
          if (bVar12) {
            pUVar16 = __this_00->klass;
            bVar2 = (pUVar16->_2).typeHierarchyDepth;
            bVar3 = (TypeInfo_UnityEngine_SkinnedMeshRenderer->_2).typeHierarchyDepth;
            if ((bVar2 < bVar3) ||
               ((pUVar16->_2).typeHierarchy[(ulong)bVar3 - 1] !=
                (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer)) {
              bVar3 = (TypeInfo_UnityEngine_MeshRenderer->_2).typeHierarchyDepth;
              if (bVar3 <= bVar2) {
label_05c46077:
                if (((pUVar16->_2).typeHierarchy[(ulong)bVar3 - 1] ==
                     (Il2CppClass *)TypeInfo_UnityEngine_MeshRenderer) &&
                   (bVar12 = UnityEngine_Component__TryGetComponent_object_
                                       ((UnityEngine_Component_o *)__this_00,(Il2CppObject **)&pUStack_110,
                                        (MethodInfo_34B1690 *)
                                        MethodInfo_UnityEngine_Component_TryGetComponent_MeshFilter), bVar12))
                {
                  if (pUStack_110 != (UnityEngine_MeshFilter_o *)0x0) {
                    pUVar17 = (UnityEngine_Object_o *)
                              UnityEngine_MeshFilter__get_sharedMesh(pUStack_110,(MethodInfo *)0x0);
                    uVar4 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
                    goto joined_r0x05c461ca;
                  }
                  goto label_05c46a4f;
                }
              }
label_05c46200:
              pUVar17 = (UnityEngine_Object_o *)0x0;
              uVar4 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
            }
            else {
              pUVar17 = (UnityEngine_Object_o *)
                        UnityEngine_SkinnedMeshRenderer__get_sharedMesh
                                  ((UnityEngine_SkinnedMeshRenderer_o *)__this_00,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar12 = UnityEngine_Object__op_Inequality
                                 (pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (!bVar12) {
                pUVar16 = __this_00->klass;
                bVar3 = (TypeInfo_UnityEngine_MeshRenderer->_2).typeHierarchyDepth;
                if (bVar3 <= (pUVar16->_2).typeHierarchyDepth) goto label_05c46077;
                goto label_05c46200;
              }
              pUVar17 = (UnityEngine_Object_o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Mesh);
              UnityEngine_Mesh___ctor((UnityEngine_Mesh_o *)pUVar17,(MethodInfo *)0x0);
              if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
              }
              MiscExtensions__BakeLocalMesh
                        ((UnityEngine_SkinnedMeshRenderer_o *)__this_00,(UnityEngine_Mesh_o *)pUVar17,
                         (MethodInfo *)0x0);
              pMVar11 = MethodInfo_System_Collections_Generic_List_Mesh_Add;
              __this_01 = (__this->fields)._bakedMeshes;
              if (__this_01 == (System_Collections_Generic_List_Mesh__o *)0x0) goto label_05c46a4f;
              piVar1 = &(__this_01->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar5 = (__this_01->fields)._items;
              if (pUVar5 == (UnityEngine_Mesh_array *)0x0) goto label_05c46a4f;
              uVar25 = (__this_01->fields)._size;
              if (uVar25 < (uint)pUVar5->max_length) {
                (__this_01->fields)._size = uVar25 + 1;
                pUVar5->m_Items[(int)uVar25] = (UnityEngine_Mesh_o *)pUVar17;
                Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar25);
                uVar4 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pUVar17,
                           (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
                uVar4 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
              }
            }
joined_r0x05c461ca:
            if (uVar4 == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar12 = UnityEngine_Object__op_Equality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar12) {
              uStack_100 = uVar18;
              materials = UnityEngine_Renderer__get_sharedMaterials(__this_00,(MethodInfo *)0x0);
              if (materials == (UnityEngine_Material_array *)0x0) goto label_05c46a4f;
              targetAddress_00 = materials->m_Items;
              iVar22 = (int)materials->max_length;
              uVar18 = materials->max_length & 0xffffffff;
              if (pSStack_138 == (System_Collections_Generic_Dictionary_Material__Material__o *)0x0) {
                if (0 < iVar22) {
                  uVar24 = 0;
                  do {
                    if (uVar18 <= uVar24) goto label_05c46a54;
                    pUVar6 = targetAddress_00[uVar24];
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar12 = UnityEngine_Object__op_Equality
                                       ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,
                                        (MethodInfo *)0x0);
                    if (!bVar12) goto label_05c46a4f;
                    uVar24 = uVar24 + 1;
                    uVar25 = (uint)materials->max_length;
                    uVar18 = (ulong)uVar25;
                  } while ((long)uVar24 < (long)(int)uVar25);
                }
              }
              else if (0 < iVar22) {
                uVar24 = 0;
                do {
                  if (uVar18 <= uVar24) goto label_05c46a54;
                  pUVar6 = *targetAddress_00;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar12 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,
                                      (MethodInfo *)0x0);
                  if (!bVar12) {
                    bVar12 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                       ((System_Collections_Generic_Dictionary_object__object__o *)pSStack_138
                                        ,(Il2CppObject *)pUVar6,(Il2CppObject **)&pUStack_150,
                                        (MethodInfo_4AAF440 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_Material_Material_TryGetValue
                                       );
                    pUVar19 = pUStack_150;
                    if (!bVar12) {
                      pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
                      UnityEngine_Material___ctor_68dcfd0(pUVar19,pUVar6,(MethodInfo *)0x0);
                      if (pUVar19 == (UnityEngine_Material_o *)0x0) goto label_05c46a4f;
                      UnityEngine_Material__set_shader(pUVar19,pUStack_f8,(MethodInfo *)0x0);
                      pUStack_150 = pUVar19;
                      System_Collections_Generic_Dictionary_object__object___Add
                                ((System_Collections_Generic_Dictionary_object__object__o *)pSStack_138,
                                 (Il2CppObject *)pUVar6,(Il2CppObject *)pUVar19,
                                 (MethodInfo_4AAD4E0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_Material_Material_Add);
                      pMVar11 = MethodInfo_System_Collections_Generic_List_Material_Add;
                      __this_02 = (__this->fields)._materials;
                      if (__this_02 == (System_Collections_Generic_List_Material__o *)0x0) goto label_05c46a4f;
                      piVar1 = &(__this_02->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pUVar7 = (__this_02->fields)._items;
                      if (pUVar7 == (UnityEngine_Material_array *)0x0) goto label_05c46a4f;
                      uVar25 = (__this_02->fields)._size;
                      if (uVar25 < (uint)pUVar7->max_length) {
                        (__this_02->fields)._size = uVar25 + 1;
                        pUVar7->m_Items[(int)uVar25] = pUStack_150;
                        Il2CppCodeGenWriteBarrier(pUVar7->m_Items + (int)uVar25);
                        pUVar19 = pUStack_150;
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)__this_02,
                                   (Il2CppObject *)pUStack_150,
                                   (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
                        pUVar19 = pUStack_150;
                      }
                    }
                    pUStack_150 = pUVar19;
                    if ((pUVar19 != (UnityEngine_Material_o *)0x0) &&
                       (pIVar20 = il2cpp_vm_Object_IsInst
                                            ((Il2CppObject *)pUVar19,
                                             (((materials->obj).klass)->_1).element_class),
                       pIVar20 == (Il2CppObject *)0x0)) {
                      pIVar20 = il2cpp_codegen_get_array_type_mismatch_exception();
                      il2cpp_codegen_raise_exception(pIVar20,(MethodInfo *)0x0);
                    }
                    if ((uint)materials->max_length <= uVar24) goto label_05c46a54;
                    *targetAddress_00 = pUVar19;
                    Il2CppCodeGenWriteBarrier(targetAddress_00);
                  }
                  uVar24 = uVar24 + 1;
                  uVar25 = (uint)materials->max_length;
                  uVar18 = (ulong)uVar25;
                  targetAddress_00 = targetAddress_00 + 1;
                } while ((long)uVar24 < (long)(int)uVar25);
              }
              source = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
              pUVar15 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
              if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_05c46a4f;
              iVar13 = UnityEngine_GameObject__get_layer(pUVar15,(MethodInfo *)0x0);
              __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HaircutEffect_HairMesh)
              ;
              Characters_HaircutEffect_HairMesh___ctor
                        (__this_04,source,(UnityEngine_Mesh_o *)pUVar17,materials,iVar13,in_R9);
              if (pUVar17 == (UnityEngine_Object_o *)0x0) goto label_05c46a4f;
              uVar25 = 0;
              UnityEngine_Mesh__get_bounds
                        ((UnityEngine_Bounds_o *)&UStack_f0,(UnityEngine_Mesh_o *)pUVar17,(MethodInfo *)0x0);
              fStack_130 = UStack_f0.fields.m11 + UStack_f0.fields.m11;
              fVar26 = fStack_130;
              if (fStack_130 <= 0.0001) {
                fVar26 = 0.0001;
              }
              fStack_58 = UStack_f0.fields.m01 + UStack_f0.fields.m01;
              auVar27._4_4_ = fStack_58;
              auVar27._0_4_ = UStack_f0.fields.m30 + UStack_f0.fields.m30;
              auVar27._8_8_ = 0;
              auVar27 = maxps(auVar27,_DAT_01005340);
              auStack_68 = divps(_DAT_01005870,auVar27);
              auStack_78 = ZEXT416((uint)(1.0 / fVar26));
              uStack_48 = CONCAT44(fStack_58,UStack_f0.fields.m30 + UStack_f0.fields.m30);
              uStack_40 = 0;
              fStack_54 = fStack_58;
              fStack_50 = fStack_58;
              fStack_4c = fStack_58;
              do {
                while( true ) {
                  _auStack_148 = ZEXT416((uint)(((float)(uVar25 % 3) + 0.5) / 3.0));
                  UnityEngine_Mesh__get_bounds
                            ((UnityEngine_Bounds_o *)&UStack_f0,(UnityEngine_Mesh_o *)pUVar17,
                             (MethodInfo *)0x0);
                  fStack_12c = UStack_f0.fields.m00 - UStack_f0.fields.m30;
                  fStack_128 = UStack_f0.fields.m10 - UStack_f0.fields.m01;
                  fVar26 = UStack_f0.fields.m20 - UStack_f0.fields.m11;
                  __this_05 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_Characters_HaircutEffect_HairPiece);
                  if (Il2CppMethodInitialized_07547835 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MaterialPropertyBlock);
                    Il2CppMethodInitialized_07547835 = '\x01';
                  }
                  fVar29 = ((float)(uVar25 / 6) + 0.5) * 0.5 * fStack_130;
                  auVar28._0_4_ = (float)auStack_148._0_4_ * (float)uStack_48 + fStack_12c;
                  auVar28._4_4_ = ((float)(uVar25 / 3 & 1) + 0.5) * 0.5 * fStack_58 + fStack_128;
                  auVar28._8_4_ = auStack_148._4_4_;
                  auVar28._12_4_ = 0;
                  _auStack_148 = auVar28;
                  pUVar21 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)TypeInfo_UnityEngine_MaterialPropertyBlock);
                  UnityEngine_MaterialPropertyBlock___ctor(pUVar21,(MethodInfo *)0x0);
                  targetAddress = &(__this_05->fields).Properties;
                  (__this_05->fields).Properties = pUVar21;
                  Il2CppCodeGenWriteBarrier(targetAddress);
                  System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
                  (__this_05->fields).Pivot.fields.x = (float)auStack_148._0_4_;
                  (__this_05->fields).Pivot.fields.y = (float)auStack_148._4_4_;
                  (__this_05->fields).Pivot.fields.z = fVar29 + fVar26;
                  UnityEngine_Renderer__get_localToWorldMatrix(&UStack_f0,__this_00,(MethodInfo *)0x0);
                  (__this_05->fields).Matrix.fields.m03 = UStack_f0.fields.m03;
                  (__this_05->fields).Matrix.fields.m13 = UStack_f0.fields.m13;
                  (__this_05->fields).Matrix.fields.m23 = UStack_f0.fields.m23;
                  (__this_05->fields).Matrix.fields.m33 = UStack_f0.fields.m33;
                  (__this_05->fields).Matrix.fields.m02 = UStack_f0.fields.m02;
                  (__this_05->fields).Matrix.fields.m12 = UStack_f0.fields.m12;
                  (__this_05->fields).Matrix.fields.m22 = UStack_f0.fields.m22;
                  (__this_05->fields).Matrix.fields.m32 = UStack_f0.fields.m32;
                  (__this_05->fields).Matrix.fields.m01 = UStack_f0.fields.m01;
                  (__this_05->fields).Matrix.fields.m11 = UStack_f0.fields.m11;
                  (__this_05->fields).Matrix.fields.m21 = UStack_f0.fields.m21;
                  (__this_05->fields).Matrix.fields.m31 = UStack_f0.fields.m31;
                  (__this_05->fields).Matrix.fields.m00 = UStack_f0.fields.m00;
                  (__this_05->fields).Matrix.fields.m10 = UStack_f0.fields.m10;
                  (__this_05->fields).Matrix.fields.m20 = UStack_f0.fields.m20;
                  (__this_05->fields).Matrix.fields.m30 = UStack_f0.fields.m30;
                  fVar26 = UnityEngine_Random__Range(0.0,0.35,(MethodInfo *)0x0);
                  (__this_05->fields).Delay = fVar26;
                  auStack_148._0_4_ = UnityEngine_Random__Range(-0.8,0.8,(MethodInfo *)0x0);
                  auStack_148._4_4_ = extraout_XMM0_Db;
                  uStack_140 = extraout_XMM0_Dc;
                  uStack_13c = extraout_XMM0_Dd;
                  fStack_128 = UnityEngine_Random__Range(0.1,0.5,(MethodInfo *)0x0);
                  fVar26 = UnityEngine_Random__Range(-0.8,0.8,(MethodInfo *)0x0);
                  (__this_05->fields).Velocity.fields.x = (float)auStack_148._0_4_ * fStack_88;
                  (__this_05->fields).Velocity.fields.y = fStack_128 * fStack_84;
                  (__this_05->fields).Velocity.fields.z = fVar26 * fStack_98;
                  UVar30 = UnityEngine_Random__get_onUnitSphere((MethodInfo *)0x0);
                  fStack_128 = UVar30.fields.z;
                  uStack_140 = extraout_XMM0_Dc_00;
                  auStack_148 = (undefined1  [8])UVar30.fields._0_8_;
                  uStack_13c = extraout_XMM0_Dd_00;
                  fVar26 = UnityEngine_Random__Range(140.0,320.0,(MethodInfo *)0x0);
                  (__this_05->fields).AngularVelocity.fields.x = fVar26 * (float)auStack_148._0_4_;
                  (__this_05->fields).AngularVelocity.fields.y = fVar26 * (float)auStack_148._4_4_;
                  (__this_05->fields).AngularVelocity.fields.z = fStack_128 * fVar26;
                  pUVar21 = (__this_05->fields).Properties;
                  if ((TypeInfo_Characters_HaircutEffect->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HaircutEffect);
                  }
                  if (pUVar21 == (UnityEngine_MaterialPropertyBlock_o *)0x0) goto label_05c46a4f;
                  UnityEngine_MaterialPropertyBlock__SetFloat_68d85d0
                            (pUVar21,TypeInfo_Characters_HaircutEffect->static_fields->PieceId,
                             (float)(int)uVar25,(MethodInfo *)0x0);
                  pUVar21 = *targetAddress;
                  iVar13 = TypeInfo_Characters_HaircutEffect->static_fields->BoundsMinId;
                  UnityEngine_Mesh__get_bounds(&UStack_b0,(UnityEngine_Mesh_o *)pUVar17,(MethodInfo *)0x0);
                  if (pUVar21 == (UnityEngine_MaterialPropertyBlock_o *)0x0) goto label_05c46a4f;
                  value.fields.x = UStack_b0.fields.m_Center.fields.x - UStack_b0.fields.m_Extents.fields.x;
                  value.fields.y = UStack_b0.fields.m_Center.fields.y - UStack_b0.fields.m_Extents.fields.y;
                  value.fields.z = UStack_b0.fields.m_Center.fields.z - UStack_b0.fields.m_Extents.fields.z;
                  value.fields.w = 0.0;
                  UnityEngine_MaterialPropertyBlock__SetVector_68d8740(pUVar21,iVar13,value,(MethodInfo *)0x0)
                  ;
                  if (*targetAddress == (UnityEngine_MaterialPropertyBlock_o *)0x0) goto label_05c46a4f;
                  value_00.fields.z = (float)auStack_78._0_4_;
                  value_00.fields.w = (float)auStack_78._4_4_;
                  value_00.fields.x = (float)auStack_68._0_4_;
                  value_00.fields.y = (float)auStack_68._4_4_;
                  UnityEngine_MaterialPropertyBlock__SetVector_68d8740
                            (*targetAddress,TypeInfo_Characters_HaircutEffect->static_fields->BoundsInvSizeId,
                             value_00,(MethodInfo *)0x0);
                  pMVar11 = MethodInfo_System_Collections_Generic_List_HaircutEffect_HairPiece_Add;
                  if ((__this_04 == (Characters_HaircutEffect_HairMesh_o *)0x0) ||
                     (__this_03 = (__this_04->fields).Pieces,
                     __this_03 == (System_Collections_Generic_List_HaircutEffect_HairPiece__o *)0x0))
                  goto label_05c46a4f;
                  piVar1 = &(__this_03->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pCVar8 = (__this_03->fields)._items;
                  if (pCVar8 == (Characters_HaircutEffect_HairPiece_array *)0x0) goto label_05c46a4f;
                  uVar23 = (__this_03->fields)._size;
                  if ((uint)pCVar8->max_length <= uVar23) break;
                  (__this_03->fields)._size = uVar23 + 1;
                  pCVar8->m_Items[(int)uVar23] = __this_05;
                  Il2CppCodeGenWriteBarrier(pCVar8->m_Items + (int)uVar23);
                  uVar25 = uVar25 + 1;
                  if (uVar25 == 0xc) goto label_05c46954;
                }
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)__this_05,
                           (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
                uVar25 = uVar25 + 1;
              } while (uVar25 != 0xc);
label_05c46954:
              uVar18 = uStack_100;
              pSVar14 = pSStack_108;
              pMVar11 = MethodInfo_System_Collections_Generic_List_HaircutEffect_HairMesh_Add;
              pSVar9 = (__this->fields)._meshes;
              if (pSVar9 == (System_Collections_Generic_List_HaircutEffect_HairMesh__o *)0x0)
              goto label_05c46a4f;
              piVar1 = &(pSVar9->fields)._version;
              *piVar1 = *piVar1 + 1;
              pCVar10 = (pSVar9->fields)._items;
              if (pCVar10 == (Characters_HaircutEffect_HairMesh_array *)0x0) goto label_05c46a4f;
              uVar25 = (pSVar9->fields)._size;
              if (uVar25 < (uint)pCVar10->max_length) {
                (pSVar9->fields)._size = uVar25 + 1;
                pCVar10->m_Items[(int)uVar25] = __this_04;
                Il2CppCodeGenWriteBarrier(pCVar10->m_Items + (int)uVar25);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)__this_04,
                           (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
              }
            }
          }
        }
        uVar23 = (int)uVar18 + 1;
        uVar18 = (ulong)uVar23;
        uVar25 = (uint)pSVar14->max_length;
      } while ((int)uVar23 < (int)uVar25);
    }
    pSVar9 = (__this->fields)._meshes;
    if (pSVar9 != (System_Collections_Generic_List_HaircutEffect_HairMesh__o *)0x0) {
      if ((pSVar9->fields)._size == 0) {
        pUVar17 = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar17,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_05c46a4f:
  ThrowNullReferenceException();
}


// Characters.HaircutEffect$$LateUpdate
// il2cpp: void Characters_HaircutEffect__LateUpdate (Characters_HaircutEffect_o* __this, const MethodInfo* method);
// 0x5c46bb0
// eh: try 0x5c46d3a..0x5c46d89 -> pad 0x5c4784b (+1 call sites) catch Il2CppExceptionWrapper, cleanup
// eh: try 0x5c46dda..0x5c47669 -> pad 0x5c4771d (+15 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c47687..0x5c4768c -> pad 0x5c47841 catch Il2CppExceptionWrapper, cleanup
// eh: try 0x5c476b3..0x5c476fe -> pad 0x5c4772f (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c47753..0x5c47758 -> pad 0x5c477ef catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5c477d3..0x5c477e2 -> pad 0x5c47849 (+2 call sites) catch Il2CppExceptionWrapper, cleanup
// eh: try 0x5c477f5..0x5c47802 -> pad 0x5c47839 catch (...) [compiler noexcept guard]
// eh: try 0x5c4781a..0x5c4781f -> pad 0x5c47821 cleanup
// eh: try 0x5c47824..0x5c47831 -> pad 0x5c47839 catch (...) [compiler noexcept guard]
// asm: 68 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c476a6: test ebx, ebx
// asm:   0x5c476a8: je 0x5c46d30
// asm:   0x5c476ae: jmp 0x5c4779d
// asm:   0x5c47703: jmp 0x5c4772f
// asm:   0x5c47705: jmp 0x5c4772f
// asm:   0x5c47707: jmp 0x5c4772f
// asm:   0x5c47709: jmp 0x5c4772f
// asm:   0x5c4770b: jmp 0x5c4772f
// asm:   0x5c4770d: jmp 0x5c4772f
// asm:   0x5c4770f: jmp 0x5c4772f
// asm:   0x5c47711: jmp 0x5c4772f
// asm:   0x5c47713: jmp 0x5c4772f
// asm:   0x5c47715: jmp 0x5c4772f
// asm:   0x5c47717: jmp 0x5c4772f
// asm:   0x5c47719: jmp 0x5c4772f
// asm:   0x5c4771b: jmp 0x5c4772f
// asm:   0x5c4771d: jmp 0x5c4772f
// asm:   0x5c4771f: jmp 0x5c4772f
// asm:   0x5c47721: jmp 0x5c4772f
// asm:   0x5c47723: jmp 0x5c4772f
// asm:   0x5c47725: jmp 0x5c4772f
// asm:   0x5c47727: jmp 0x5c4772f
// asm:   0x5c47729: jmp 0x5c4772f
// asm:   0x5c4772b: jmp 0x5c4772f
// asm:   0x5c4772d: jmp 0x5c4772f
// asm:   0x5c4772f: mov rbx, rdx
// asm:   0x5c47732: mov rbp, rax
// asm:   0x5c47735: cmp ebx, 1
// asm:   0x5c47738: jne 0x5c477f5
// asm:   0x5c4773e: mov rdi, rbp
// asm:   0x5c47741: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c47746: mov rax, qword ptr [rax]
// asm:   0x5c47749: mov qword ptr [rsp + 0xd0], rax
// asm:   0x5c47751: xor ebx, ebx
// asm:   0x5c47753: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c47758: jmp 0x5c47675
// asm:   0x5c477dd: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c477e7: mov rdi, rbx
// asm:   0x5c477ea: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c477ef: mov rbx, rdx
// asm:   0x5c477f2: mov rbp, rax
// asm:   0x5c477f5: lea rdi, [rsp + 0xd0]
// asm:   0x5c477fd: call 0x2fd9460  ; il2cpp_runtime_helper_02fd9460()
// asm:   0x5c47802: cmp ebx, 1
// asm:   0x5c47805: jne 0x5c47824
// asm:   0x5c47807: mov rdi, rbp
// asm:   0x5c4780a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c4780f: mov rbx, qword ptr [rax]
// asm:   0x5c47812: mov qword ptr [rsp + 0xe0], rbx
// asm:   0x5c4781a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c4781f: jmp 0x5c477a5
// asm:   0x5c47821: mov rbp, rax
// asm:   0x5c47824: lea rdi, [rsp + 0xe0]
// asm:   0x5c4782c: call 0x2fd9490  ; il2cpp_runtime_helper_02fd9490()
// asm:   0x5c47831: mov rdi, rbp
// asm:   0x5c47834: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c47839: mov rdi, rax
// asm:   0x5c4783c: call 0x2ab61e0  ; __clang_call_terminate()
// asm:   0x5c47841: jmp 0x5c4784b
// asm:   0x5c47843: jmp 0x5c4784b
// asm:   0x5c47845: jmp 0x5c4784b
// asm:   0x5c47847: jmp 0x5c4784b
// asm:   0x5c47849: jmp 0x5c4784b
// asm:   0x5c4784b: mov rbx, rdx
// asm:   0x5c4784e: mov rbp, rax
// asm:   0x5c47851: cmp ebx, 1
// asm:   0x5c47854: je 0x5c47807
// asm:   0x5c47856: jmp 0x5c47824

void Characters_HaircutEffect__LateUpdate(Characters_HaircutEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HaircutEffect_HairMesh__o *__this_00;
  Il2CppClass *pIVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  char *pcVar3;
  UnityEngine_Material_o *material;
  UnityEngine_Matrix4x4_o matrix;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  int32_t iVar7;
  UnityEngine_Object_o *pUVar8;
  ulong uVar9;
  int iVar10;
  UnityEngine_Mesh_o *pUVar11;
  float fVar12;
  float fVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float fVar14;
  float fVar15;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  UnityEngine_Quaternion_o UVar44;
  UnityEngine_Vector3_o UVar45;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [8];
  undefined8 uStack_2e0;
  System_Collections_Generic_List_Enumerator_object__o SStack_298;
  System_Collections_Generic_List_Enumerator_object__o SStack_278;
  undefined1 auStack_258 [8];
  float fStack_250;
  float fStack_24c;
  undefined1 auStack_248 [8];
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [16];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [16];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [8];
  float fStack_1d0;
  float fStack_1cc;
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  UnityEngine_Vector3_Fields UStack_198;
  UnityEngine_Vector3_Fields UStack_188;
  UnityEngine_Vector3_Fields UStack_178;
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  float fStack_150;
  float fStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [64];
  UnityEngine_Quaternion_o UStack_c8;
  System_Collections_Generic_List_Enumerator_T__o aSStack_b8 [3];
  System_Collections_Generic_List_T__o *apSStack_70 [2];
  Il2CppObject *pIStack_60;
  undefined8 uStack_58;
  float fStack_50;
  float fStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07547830 == '\0') {
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
    Il2CppMethodInitialized_07547830 = '\x01';
  }
  SStack_278.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_278.fields._index = 0;
  SStack_278.fields._version = 0;
  SStack_278.fields._current = (Il2CppObject *)0x0;
  SStack_298.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_298.fields._index = 0;
  SStack_298.fields._version = 0;
  SStack_298.fields._current = (Il2CppObject *)0x0;
  fVar13 = (__this->fields)._age;
  fVar12 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar12 = fVar12 + fVar13;
  (__this->fields)._age = fVar12;
  if (1.45 <= fVar12) {
    pUVar8 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar8,(MethodInfo *)0x0);
    return;
  }
  __this_00 = (__this->fields)._meshes;
  if (__this_00 == (System_Collections_Generic_List_HaircutEffect_HairMesh__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_108,
             (System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)
             MethodInfo_System_Collections_Generic_List_HaircutEffect_HairMesh_GetEnumerator);
  SStack_278.fields._current = (Il2CppObject *)auStack_108._16_8_;
  SStack_278.fields._list = (System_Collections_Generic_List_T__o *)auStack_108._0_8_;
  SStack_278.fields._index = auStack_108._8_4_;
  SStack_278.fields._version = auStack_108._12_4_;
  do {
    bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&SStack_278,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_HaircutEffect_HairMesh_MoveNext);
    pIVar5 = SStack_278.fields._current;
    if (!bVar6) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                (&SStack_278,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_HaircutEffect_HairMesh_Dispose);
      return;
    }
    if (SStack_278.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if (SStack_278.fields._current[3].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              (aSStack_b8,(System_Collections_Generic_List_object__o *)SStack_278.fields._current[3].klass,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_HaircutEffect_HairPiece_GetEnumerator);
    SStack_298.fields._current = aSStack_b8[0].fields._current;
    SStack_298.fields._list = aSStack_b8[0].fields._list;
    SStack_298.fields._index = aSStack_b8[0].fields._index;
    SStack_298.fields._version = aSStack_b8[0].fields._version;
    while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (&SStack_298,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_HaircutEffect_HairPiece_MoveNext
                             ), pIVar4 = SStack_298.fields._current, bVar6) {
      if (SStack_298.fields._current == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      fVar12 = (__this->fields)._age - *(float *)((long)&SStack_298.fields._current[7].klass + 4);
      fVar13 = 0.0;
      if (0.0 <= fVar12) {
        fVar13 = fVar12;
      }
      if (fVar13 < 1.1) {
        if (*(char *)&SStack_298.fields._current[7].monitor == '\0') {
          pIVar1 = pIVar5[1].klass;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pIVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar6) {
            if (pIVar5[1].klass == (Il2CppClass *)0x0) {
              ThrowNullReferenceException();
            }
            UnityEngine_Transform__get_localToWorldMatrix
                      ((UnityEngine_Matrix4x4_o *)apSStack_70,(UnityEngine_Transform_o *)pIVar5[1].klass,
                       (MethodInfo *)0x0);
            aSStack_b8[2].fields._list = (System_Collections_Generic_List_T__o *)uStack_40;
            aSStack_b8[2].fields._index = (int32_t)fStack_38;
            aSStack_b8[2].fields._version = (int32_t)fStack_34;
            aSStack_b8[1].fields._index = (int32_t)fStack_50;
            aSStack_b8[1].fields._version = (int32_t)fStack_4c;
            aSStack_b8[1].fields._current = (Il2CppObject *)uStack_48;
            aSStack_b8[0].fields._current = pIStack_60;
            aSStack_b8[1].fields._list = (System_Collections_Generic_List_T__o *)uStack_58;
            aSStack_b8[0].fields._list = apSStack_70[0];
            aSStack_b8[0].fields._8_8_ = apSStack_70[1];
            *(undefined8 *)((long)&pIVar4[6].klass + 4) = uStack_40;
            *(undefined8 *)((long)&pIVar4[6].monitor + 4) = _fStack_38;
            *(undefined8 *)((long)&pIVar4[5].klass + 4) = _fStack_50;
            *(undefined8 *)((long)&pIVar4[5].monitor + 4) = uStack_48;
            *(Il2CppObject **)((long)&pIVar4[4].klass + 4) = pIStack_60;
            *(undefined8 *)((long)&pIVar4[4].monitor + 4) = uStack_58;
            *(System_Collections_Generic_List_T__o **)((long)&pIVar4[3].klass + 4) = apSStack_70[0];
            *(System_Collections_Generic_List_T__o **)((long)&pIVar4[3].monitor + 4) = apSStack_70[1];
          }
          *(bool *)&pIVar4[7].monitor = *(float *)((long)&pIVar4[7].klass + 4) <= (__this->fields)._age;
        }
        fVar17 = SUB84(pIVar4[1].klass,0);
        fVar19 = (float)((ulong)pIVar4[1].klass >> 0x20);
        fVar12 = *(float *)&pIVar4[1].monitor;
        uStack_1e8 = *(undefined8 *)((long)&pIVar4[3].klass + 4);
        uStack_1e0 = 0;
        _fStack_1d0 = 0;
        auStack_1d8 = (undefined1  [8])*(ulong *)((long)&pIVar4[4].klass + 4);
        uStack_1a8 = *(undefined8 *)((long)&pIVar4[6].klass + 4);
        uStack_1a0 = 0;
        auStack_1b8 = ZEXT416(*(uint *)((long)&pIVar4[5].klass + 4));
        auStack_1c8 = ZEXT416(*(uint *)&pIVar4[5].monitor);
        auStack_168 = ZEXT416((uint)(*(float *)((long)&pIVar4[5].monitor + 4) * fVar12 +
                                     *(float *)((long)&pIVar4[4].monitor + 4) * fVar19 +
                                     *(float *)((long)&pIVar4[3].monitor + 4) * fVar17 +
                                    *(float *)((long)&pIVar4[6].monitor + 4)));
        auStack_1f8._8_8_ = 0;
        auStack_1f8._0_8_ = *(ulong *)((long)&pIVar4[1].monitor + 4);
        fVar15 = *(float *)((long)&pIVar4[2].klass + 4);
        if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
        }
        UVar45 = UnityEngine_Physics__get_gravity((MethodInfo *)0x0);
        _fStack_238 = CONCAT44(fStack_234,UVar45.fields.z);
        auStack_218._8_4_ = extraout_XMM0_Dc;
        auStack_218._0_8_ = UVar45.fields._0_8_;
        auStack_218._12_4_ = extraout_XMM0_Dd;
        uStack_208 = (ulong)(uint)(fVar13 * 0.5);
        uStack_200 = 0;
        uVar20 = 0;
        uVar21 = 0;
        uStack_228 = CONCAT44(fVar13,fVar13);
        uStack_220 = CONCAT44(fVar13,fVar13);
        UStack_198.z = *(float *)&pIVar4[3].klass * fVar13 * 0.017453292;
        UStack_198.y = (float)((ulong)pIVar4[2].monitor >> 0x20) * fVar13 * 0.017453292;
        UStack_198.x = SUB84(pIVar4[2].monitor,0) * fVar13 * 0.017453292;
        UVar44 = UnityEngine_Quaternion__Internal_FromEulerRad
                           ((UnityEngine_Vector3_o *)&UStack_198,(MethodInfo *)0x0);
        fStack_250 = (float)uVar20;
        auStack_258 = (undefined1  [8])UVar44.fields._8_8_;
        fStack_24c = (float)uVar21;
        fStack_240 = (float)extraout_XMM0_Dc_00;
        auStack_248 = (undefined1  [8])UVar44.fields._0_8_;
        fStack_23c = (float)extraout_XMM0_Dd_00;
        if (Il2CppMethodInitialized_0753e4b7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e4b7 = '\x01';
        }
        uStack_1a8._0_4_ =
             (float)uStack_1a8 +
             fVar12 * (float)auStack_1b8._0_4_ +
             fVar19 * (float)auStack_1d8._0_4_ + fVar17 * (float)uStack_1e8;
        uStack_1a8._4_4_ =
             uStack_1a8._4_4_ +
             (float)auStack_1c8._0_4_ * fVar12 + fVar19 * (float)auStack_1d8._4_4_ + fVar17 * uStack_1e8._4_4_
        ;
        fVar12 = (float)uStack_208 * fVar13;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_ +
                              (float)auStack_1c8._4_4_ * 0.0 + fVar19 * fStack_1cc + fVar17 * uStack_1e0._4_4_
                              ,(float)uStack_1a0 +
                               (float)auStack_1b8._4_4_ * 0.0 +
                               fVar19 * fStack_1d0 + fVar17 * (float)uStack_1e0);
        pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
        UStack_188.x = (pUVar2->oneVector).fields.x;
        UStack_188.y = (pUVar2->oneVector).fields.y;
        UStack_188.z = (pUVar2->oneVector).fields.z;
        UStack_178.y = fVar12 * (float)auStack_218._4_4_ + uStack_228._4_4_ * (float)auStack_1f8._4_4_ +
                       uStack_1a8._4_4_;
        UStack_178.x = fVar12 * (float)auStack_218._0_4_ + (float)uStack_228 * (float)auStack_1f8._0_4_ +
                       (float)uStack_1a8;
        UStack_178.z = fVar15 * fVar13 + fStack_238 * fVar12 + (float)auStack_168._0_4_;
        UStack_c8.fields.z = auStack_258._0_4_;
        UStack_c8.fields.w = auStack_258._4_4_;
        UStack_c8.fields.x = (float)auStack_248._0_4_;
        UStack_c8.fields.y = (float)auStack_248._4_4_;
        UnityEngine_Matrix4x4__Internal_TRS
                  ((UnityEngine_Matrix4x4_o *)auStack_108,(UnityEngine_Vector3_o *)&UStack_178,&UStack_c8,
                   (UnityEngine_Vector3_o *)&UStack_188,(MethodInfo *)0x0);
        _fStack_250 = auStack_108._8_8_;
        auStack_258 = (undefined1  [8])auStack_108._0_8_;
        uStack_158 = (Il2CppObject *)auStack_108._16_8_;
        fStack_150 = (float)auStack_108._24_4_;
        fStack_14c = (float)auStack_108._28_4_;
        _fStack_240 = auStack_108._40_8_;
        auStack_248 = (undefined1  [8])auStack_108._32_8_;
        fStack_238 = (float)auStack_108._48_4_;
        fStack_234 = (float)auStack_108._52_4_;
        fStack_230 = (float)auStack_108._56_4_;
        fStack_22c = (float)auStack_108._60_4_;
        uStack_228 = *(undefined8 *)((long)&pIVar4[3].klass + 4);
        uStack_220 = 0;
        auStack_218 = ZEXT416(*(uint *)((long)&pIVar4[3].monitor + 4));
        fVar12 = *(float *)&pIVar4[4].klass;
        uStack_208 = *(undefined8 *)((long)&pIVar4[4].klass + 4);
        uStack_200 = 0;
        auStack_1f8 = ZEXT416(*(uint *)((long)&pIVar4[4].monitor + 4));
        fVar15 = *(float *)&pIVar4[5].klass;
        uStack_1e8 = *(undefined8 *)((long)&pIVar4[5].klass + 4);
        uStack_1e0 = 0;
        _auStack_1d8 = ZEXT416(*(uint *)((long)&pIVar4[5].monitor + 4));
        fVar17 = *(float *)&pIVar4[6].klass;
        auStack_1c8._8_8_ = 0;
        auStack_1c8._0_8_ = *(ulong *)((long)&pIVar4[6].klass + 4);
        auStack_1b8 = ZEXT416(*(uint *)((long)&pIVar4[6].monitor + 4));
        fVar19 = *(float *)&pIVar4[7].klass;
        pIVar1 = pIVar4[8].klass;
        if ((TypeInfo_Characters_HaircutEffect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HaircutEffect);
        }
        if (pIVar1 == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        fVar18 = (fVar13 + -0.85) * 4.0;
        fVar13 = 1.0;
        if (fVar18 <= 1.0) {
          fVar13 = fVar18;
        }
        UnityEngine_MaterialPropertyBlock__SetFloat_68d85d0
                  ((UnityEngine_MaterialPropertyBlock_o *)pIVar1,
                   TypeInfo_Characters_HaircutEffect->static_fields->FadeId,
                   (float)(-(uint)(0.0 <= fVar18) & (uint)fVar13),(MethodInfo *)0x0);
        pUVar11 = pIVar5[1].monitor;
        if (pUVar11 == (UnityEngine_Mesh_o *)0x0) {
label_05c476b3:
          ThrowNullReferenceException();
        }
        fVar26 = fStack_238 * 0.0;
        fVar28 = fStack_234 * 0.0;
        fVar30 = fStack_230 * 0.0;
        fVar32 = fStack_22c * 0.0;
        fVar22 = (float)auStack_258._0_4_ * 0.0 + (float)uStack_158 + (float)auStack_248._0_4_ * 0.0 + fVar26;
        fVar23 = uStack_158._4_4_ * 0.0 + (float)auStack_258._4_4_ + (float)auStack_248._4_4_ * 0.0 + fVar28;
        fVar24 = fStack_250 * 0.0 + fStack_150 + fStack_240 * 0.0 + fVar30;
        fVar25 = fStack_14c * 0.0 + fStack_24c + fStack_23c * 0.0 + fVar32;
        fVar13 = (float)auStack_258._0_4_ + (float)uStack_158 * 0.0 + (float)auStack_248._0_4_ * 0.0 + fVar26;
        fVar18 = uStack_158._4_4_ + (float)auStack_258._4_4_ * 0.0 + (float)auStack_248._4_4_ * 0.0 + fVar28;
        fVar14 = fStack_250 + fStack_150 * 0.0 + fStack_240 * 0.0 + fVar30;
        fVar16 = fStack_14c + fStack_24c * 0.0 + fStack_23c * 0.0 + fVar32;
        fVar26 = (float)uStack_158 * 0.0 + (float)auStack_258._0_4_ * 0.0 + (float)auStack_248._0_4_ + fVar26;
        fVar28 = (float)auStack_258._4_4_ * 0.0 + uStack_158._4_4_ * 0.0 + (float)auStack_248._4_4_ + fVar28;
        fVar30 = fStack_150 * 0.0 + fStack_250 * 0.0 + fStack_240 + fVar30;
        fVar32 = fStack_24c * 0.0 + fStack_14c * 0.0 + fStack_23c + fVar32;
        fVar27 = ((-uStack_1a8._4_4_ * (float)uStack_158 - (float)uStack_1a8 * (float)auStack_258._0_4_) -
                 (float)auStack_168._0_4_ * (float)auStack_248._0_4_) + fStack_238;
        fVar29 = ((-uStack_1a8._4_4_ * uStack_158._4_4_ - (float)uStack_1a8 * (float)auStack_258._4_4_) -
                 (float)auStack_168._0_4_ * (float)auStack_248._4_4_) + fStack_234;
        fVar31 = ((-uStack_1a8._4_4_ * fStack_150 - (float)uStack_1a8 * fStack_250) -
                 (float)auStack_168._0_4_ * fStack_240) + fStack_230;
        fVar33 = ((-uStack_1a8._4_4_ * fStack_14c - (float)uStack_1a8 * fStack_24c) -
                 (float)auStack_168._0_4_ * fStack_23c) + fStack_22c;
        auStack_2e8._0_4_ =
             fVar12 * fVar27 +
             (float)auStack_218._0_4_ * fVar26 + (float)uStack_228 * fVar13 + uStack_228._4_4_ * fVar22;
        auStack_2e8._4_4_ =
             fVar12 * fVar29 +
             (float)auStack_218._0_4_ * fVar28 + uStack_228._4_4_ * fVar18 + (float)uStack_228 * fVar23;
        fVar38 = fVar12 * fVar31 +
                 (float)auStack_218._0_4_ * fVar30 + (float)uStack_228 * fVar14 + uStack_228._4_4_ * fVar24;
        fVar41 = fVar12 * fVar33 +
                 (float)auStack_218._0_4_ * fVar32 + uStack_228._4_4_ * fVar16 + (float)uStack_228 * fVar25;
        uStack_2e0._0_4_ = fVar38;
        uStack_2e0._4_4_ = fVar41;
        fVar34 = fVar15 * fVar27 +
                 (float)auStack_1f8._0_4_ * fVar26 + (float)uStack_208 * fVar13 + uStack_208._4_4_ * fVar22;
        fVar36 = fVar15 * fVar29 +
                 (float)auStack_1f8._0_4_ * fVar28 + uStack_208._4_4_ * fVar18 + (float)uStack_208 * fVar23;
        fVar39 = fVar15 * fVar31 +
                 (float)auStack_1f8._0_4_ * fVar30 + (float)uStack_208 * fVar14 + uStack_208._4_4_ * fVar24;
        fVar42 = fVar15 * fVar33 +
                 (float)auStack_1f8._0_4_ * fVar32 + uStack_208._4_4_ * fVar16 + (float)uStack_208 * fVar25;
        uStack_2f8 = CONCAT44(fVar36,fVar34);
        uStack_2f0._0_4_ = fVar39;
        uStack_2f0._4_4_ = fVar42;
        fVar35 = fVar17 * fVar27 +
                 (float)auStack_1d8._0_4_ * fVar26 + (float)uStack_1e8 * fVar13 + uStack_1e8._4_4_ * fVar22;
        fVar37 = fVar17 * fVar29 +
                 (float)auStack_1d8._0_4_ * fVar28 + uStack_1e8._4_4_ * fVar18 + (float)uStack_1e8 * fVar23;
        fVar40 = fVar17 * fVar31 +
                 (float)auStack_1d8._0_4_ * fVar30 + (float)uStack_1e8 * fVar14 + uStack_1e8._4_4_ * fVar24;
        fVar43 = fVar17 * fVar33 +
                 (float)auStack_1d8._0_4_ * fVar32 + uStack_1e8._4_4_ * fVar16 + (float)uStack_1e8 * fVar25;
        uStack_308 = CONCAT44(fVar37,fVar35);
        uStack_300._0_4_ = fVar40;
        uStack_300._4_4_ = fVar43;
        fVar13 = fVar19 * fVar27 +
                 (float)auStack_1b8._0_4_ * fVar26 +
                 (float)auStack_1c8._0_4_ * fVar13 + (float)auStack_1c8._4_4_ * fVar22;
        fVar12 = fVar19 * fVar29 +
                 (float)auStack_1b8._0_4_ * fVar28 +
                 (float)auStack_1c8._4_4_ * fVar18 + (float)auStack_1c8._0_4_ * fVar23;
        fVar15 = fVar19 * fVar31 +
                 (float)auStack_1b8._0_4_ * fVar30 +
                 (float)auStack_1c8._0_4_ * fVar14 + (float)auStack_1c8._4_4_ * fVar24;
        fVar17 = fVar19 * fVar33 +
                 (float)auStack_1b8._0_4_ * fVar32 +
                 (float)auStack_1c8._4_4_ * fVar16 + (float)auStack_1c8._0_4_ * fVar25;
        uStack_318 = CONCAT44(fVar12,fVar13);
        uStack_310._0_4_ = fVar15;
        uStack_310._4_4_ = fVar17;
        uVar9 = 0;
        while( true ) {
          iVar7 = UnityEngine_Mesh__get_subMeshCount(pUVar11,(MethodInfo *)0x0);
          pIVar1 = pIVar5[2].klass;
          if (pIVar1 == (Il2CppClass *)0x0) {
            ThrowNullReferenceException();
          }
          pcVar3 = (pIVar1->_1).namespaze;
          iVar10 = (int)pcVar3;
          if (iVar7 < iVar10) {
            iVar10 = iVar7;
          }
          if ((long)iVar10 <= (long)uVar9) break;
          if (((ulong)pcVar3 & 0xffffffff) <= uVar9) {
            ThrowIndexOutOfRangeException();
          }
          pUVar8 = *(UnityEngine_Object_o **)((long)pIVar1->vtable + uVar9 * 8 + -0x118);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar6) {
            pIVar1 = pIVar5[2].klass;
            if (pIVar1 == (Il2CppClass *)0x0) {
              ThrowNullReferenceException();
            }
            if (*(uint *)&(pIVar1->_1).namespaze <= uVar9) {
              ThrowIndexOutOfRangeException();
            }
            pUVar11 = pIVar5[1].monitor;
            material = *(UnityEngine_Material_o **)((long)pIVar1->vtable + uVar9 * 8 + -0x118);
            iVar7 = *(int32_t *)&pIVar5[2].monitor;
            pIVar1 = pIVar4[8].klass;
            if ((TypeInfo_UnityEngine_Graphics->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Graphics);
            }
            uStack_148 = auStack_2e8;
            uStack_140 = uStack_2e0;
            uStack_138 = uStack_2f8;
            uStack_130 = uStack_2f0;
            uStack_128 = uStack_308;
            uStack_120 = uStack_300;
            uStack_118 = uStack_318;
            uStack_110 = uStack_310;
            matrix.fields.m01 = fVar34;
            matrix.fields.m00 = (float)auStack_2e8._0_4_;
            matrix.fields.m10 = (float)auStack_2e8._4_4_;
            matrix.fields.m20 = fVar38;
            matrix.fields.m30 = fVar41;
            matrix.fields.m11 = fVar36;
            matrix.fields.m21 = fVar39;
            matrix.fields.m31 = fVar42;
            matrix.fields.m02 = fVar35;
            matrix.fields.m12 = fVar37;
            matrix.fields.m22 = fVar40;
            matrix.fields.m32 = fVar43;
            matrix.fields.m03 = fVar13;
            matrix.fields.m13 = fVar12;
            matrix.fields.m23 = fVar15;
            matrix.fields.m33 = fVar17;
            UnityEngine_Graphics__DrawMesh_68d1c00
                      (pUVar11,matrix,material,iVar7,(UnityEngine_Camera_o *)0x0,(int32_t)uVar9,
                       (UnityEngine_MaterialPropertyBlock_o *)pIVar1,0,true,(UnityEngine_Transform_o *)0x0,0,
                       (MethodInfo *)0x0);
          }
          uVar9 = uVar9 + 1;
          pUVar11 = pIVar5[1].monitor;
          if (pUVar11 == (UnityEngine_Mesh_o *)0x0) goto label_05c476b3;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              (&SStack_298,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_HaircutEffect_HairPiece_Dispose);
  } while( true );
}


// Characters.HaircutEffect$$OnDestroy
// il2cpp: void Characters_HaircutEffect__OnDestroy (Characters_HaircutEffect_o* __this, const MethodInfo* method);
// 0x5c47860
// eh: try 0x5c47960..0x5c47a20 -> pad 0x5c47a94 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c47a65..0x5c47a6a -> pad 0x5c47a85 cleanup
// eh: try 0x5c47a88..0x5c47a92 -> pad 0x5c47aeb catch (...) [compiler noexcept guard]
// eh: try 0x5c47aac..0x5c47ab1 -> pad 0x5c47ad6 cleanup
// eh: try 0x5c47ad9..0x5c47ae3 -> pad 0x5c47aeb catch (...) [compiler noexcept guard]
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c47a49: jmp 0x5c47a4d
// asm:   0x5c47a4b: jmp 0x5c47a94
// asm:   0x5c47a4d: mov r14, rax
// asm:   0x5c47a50: cmp edx, 1
// asm:   0x5c47a53: jne 0x5c47a88
// asm:   0x5c47a55: mov rdi, r14
// asm:   0x5c47a58: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c47a5d: mov rbx, qword ptr [rax]
// asm:   0x5c47a60: mov qword ptr [rsp + 8], rbx
// asm:   0x5c47a65: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c47a6a: lea rax, [rip + 0x1646a87]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_Dispose
// asm:   0x5c47a71: mov rsi, qword ptr [rax]
// asm:   0x5c47a74: lea rdi, [rsp + 0x20]
// asm:   0x5c47a79: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c47a7e: test rbx, rbx
// asm:   0x5c47a81: je 0x5c47a36
// asm:   0x5c47a83: jmp 0x5c47ace
// asm:   0x5c47a85: mov r14, rax
// asm:   0x5c47a88: lea rdi, [rsp + 8]
// asm:   0x5c47a8d: call 0x2fd94f0  ; il2cpp_runtime_helper_02fd94f0()
// asm:   0x5c47a92: jmp 0x5c47ae3
// asm:   0x5c47a94: mov r14, rax
// asm:   0x5c47a97: cmp edx, 1
// asm:   0x5c47a9a: jne 0x5c47ad9
// asm:   0x5c47a9c: mov rdi, r14
// asm:   0x5c47a9f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c47aa4: mov rbx, qword ptr [rax]
// asm:   0x5c47aa7: mov qword ptr [rsp + 8], rbx
// asm:   0x5c47aac: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c47ab1: lea rax, [rip + 0x16469c8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose
// asm:   0x5c47ab8: mov rsi, qword ptr [rax]
// asm:   0x5c47abb: lea rdi, [rsp + 0x40]
// asm:   0x5c47ac0: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c47ac5: test rbx, rbx
// asm:   0x5c47ac8: je 0x5c479a7
// asm:   0x5c47ace: mov rdi, rbx
// asm:   0x5c47ad1: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c47ad6: mov r14, rax
// asm:   0x5c47ad9: lea rdi, [rsp + 8]
// asm:   0x5c47ade: call 0x2fd94c0  ; il2cpp_runtime_helper_02fd94c0()
// asm:   0x5c47ae3: mov rdi, r14
// asm:   0x5c47ae6: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c47aeb: mov rdi, rax
// asm:   0x5c47aee: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_HaircutEffect__OnDestroy(Characters_HaircutEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Material__o *__this_00;
  System_Collections_Generic_List_Mesh__o *__this_01;
  Il2CppObject *obj;
  UnityEngine_Object_o *obj_00;
  bool bVar1;
  undefined1 local_80 [16];
  UnityEngine_Object_o *local_70;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  undefined1 local_48 [16];
  UnityEngine_Object_o *local_38;
  
  if (Il2CppMethodInitialized_07547831 == '\0') {
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
    Il2CppMethodInitialized_07547831 = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._materials;
  if (__this_00 != (System_Collections_Generic_List_Material__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
               (System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Material_GetEnumerator);
    local_38 = local_70;
    local_48._0_8_ = local_80._0_8_;
    local_48._8_8_ = local_80._8_8_;
    local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_80._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_48;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Material_MoveNext);
      obj_00 = local_38;
      if (!bVar1) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(obj_00,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Material_Dispose);
    __this_01 = (__this->fields)._bakedMeshes;
    if (__this_01 != (System_Collections_Generic_List_Mesh__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Mesh_GetEnumerator);
      local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_80._8_8_ = &local_68;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)&local_68,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_MoveNext);
        obj = local_68.fields._current;
        if (!bVar1) break;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&local_68,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Mesh_Dispose);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HaircutEffect$$.ctor
// il2cpp: void Characters_HaircutEffect___ctor (Characters_HaircutEffect_o* __this, const MethodInfo* method);
// 0x5c47b00

void Characters_HaircutEffect___ctor(Characters_HaircutEffect_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HaircutEffect_HairMesh__o *__this_00;
  System_Collections_Generic_List_Material__o *__this_01;
  System_Collections_Generic_List_Mesh__o *__this_02;
  
  if (Il2CppMethodInitialized_07547832 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_HaircutEffect_HairMesh_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Mesh_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Mesh);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_HaircutEffect_HairMesh);
    Il2CppMethodInitialized_07547832 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_HaircutEffect_HairMesh);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_HaircutEffect_HairMesh_ctor);
  (__this->fields)._meshes = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._meshes);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
  (__this->fields)._materials = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._materials);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Mesh);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Mesh_ctor);
  (__this->fields)._bakedMeshes = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._bakedMeshes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HaircutEffect$$.cctor
// il2cpp: void Characters_HaircutEffect___cctor (const MethodInfo* method);
// 0x5c47c10

void Characters_HaircutEffect___cctor(MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_07547833 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HaircutEffect);
    il2cpp_codegen_initialize_runtime_metadata(&"_BoundsInvSize");
    il2cpp_codegen_initialize_runtime_metadata(&"_BoundsMin");
    il2cpp_codegen_initialize_runtime_metadata(&"_Fade");
    il2cpp_codegen_initialize_runtime_metadata(&"_Piece");
    Il2CppMethodInitialized_07547833 = '\x01';
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


